//
// Created by xfwduke on 7/30/19.
//

#include "MySQLParseServiceImpl.h"
#include <antlr4-runtime.h>
#include "mysql/MySQLLexer.h"
#include "mysql/MySQLParser.h"
#include "listeners/QueryListener.h"
#include "listeners/SelectListener.h"
#include "listeners/CreateTableListener.h"


grpc::Status
MySQLParseServiceImpl::ParseQuery(::grpc::ServerContext *context, const ::MySqlParseService::Request *request,
                                  ::MySqlParseService::Response *response) {
    antlr4::ANTLRInputStream inputStream(request->query());
    parsers::MySQLLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokenStream(&lexer);
    parsers::MySQLParser parser(&tokenStream);

    lexer.serverVersion = request->server_version();
    parser.serverVersion = request->server_version();

    parsers::MySQLParser::QueryContext *queryCtx;

    while ((queryCtx = parser.query())) {
        if (!queryCtx->simpleStatement())
            break;
        auto simpleStatChildCtx = queryCtx->simpleStatement()->getRuleContext<antlr4::ParserRuleContext>(0);

        switch (simpleStatChildCtx->getRuleIndex()) {
            case parsers::MySQLParser::RuleSelectStatement:
                parse_select(simpleStatChildCtx, response);
                break;
            case parsers::MySQLParser::RuleCreateStatement:
                parse_create(simpleStatChildCtx, response);
                break;
            default:
                break;
        }


        if (queryCtx->EOF())
            break;
    }
    return grpc::Status::OK;
}


template<typename __LISTENER_TYPE, typename __RESULT_TYPE>
__RESULT_TYPE MySQLParseServiceImpl::do_parse(antlr4::ParserRuleContext *ctx) {
    string raw_query = get_rawsql(ctx);
    antlr4::tree::ParseTreeWalker walker;
    __LISTENER_TYPE listener;
    walker.walk(&listener, ctx);
    auto result = listener.get_result();
    result.set_raw_query(raw_query);
    return result;
}


std::string MySQLParseServiceImpl::get_rawsql(antlr4::ParserRuleContext *ctx) {
    antlr4::misc::Interval interval(ctx->start->getStartIndex(), ctx->stop->getStopIndex());
    return ctx->start->getInputStream()->getText(interval);
}

void MySQLParseServiceImpl::parse_select(antlr4::ParserRuleContext *ctx, MySqlParseService::Response *response) {
    MySqlParseService::ResultWrapper wrapper;
    auto result = do_parse<SelectListener, MySqlParseService::SelectResult>(ctx);
    wrapper.mutable_select_result()->CopyFrom(result);
    response->mutable_results()->Add(std::move(wrapper));
}

void MySQLParseServiceImpl::parse_create(antlr4::ParserRuleContext *ctx, MySqlParseService::Response *response) {
    auto createCtx = dynamic_cast<parsers::MySQLParser::CreateStatementContext *>(ctx);
    auto subCtx = createCtx->getRuleContext<antlr4::RuleContext>(0);
    switch (subCtx->getRuleIndex()) {
        case parsers::MySQLParser::RuleCreateTable:
            parse_create_table(ctx, response);
            break;
        default:
            break;
    }
}

void MySQLParseServiceImpl::parse_create_table(antlr4::ParserRuleContext *ctx, MySqlParseService::Response *response) {
    MySqlParseService::ResultWrapper wrapper;
    auto result = do_parse<CreateTableListener, MySqlParseService::CreateTableResult>(ctx);
    wrapper.mutable_create_table_result()->CopyFrom(result);
    response->mutable_results()->Add(std::move(wrapper));
}
