//
// Created by xfwduke on 7/30/19.
//

#include "MySQLParseServiceImpl.h"
#include <antlr4-runtime.h>
#include "mysql/MySQLLexer.h"
#include "mysql/MySQLParser.h"
#include "listeners/QueryListener.hpp"
#include "listeners/SelectListener.hpp"
#include "listeners/CreateTableListener.hpp"
#include "listeners/AlterTableListener.hpp"
#include "listeners/UpdateListener.hpp"


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
            case parsers::MySQLParser::RuleAlterStatement:
                parse_alter(simpleStatChildCtx, response);
                break;
            case parsers::MySQLParser::RuleUpdateStatement:
                parse_update(simpleStatChildCtx, response);
            default:
                break;
        }


        if (queryCtx->EOF())
            break;
    }
    return grpc::Status::OK;
}


template<template<typename> class __LISTENER_TYPE, typename __RESULT_TYPE>
__RESULT_TYPE MySQLParseServiceImpl::do_parse(antlr4::ParserRuleContext *ctx) {
    string raw_query = get_rawsql(ctx);
    antlr4::tree::ParseTreeWalker walker;
    __LISTENER_TYPE<__RESULT_TYPE> listener;
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

void MySQLParseServiceImpl::parse_alter(antlr4::ParserRuleContext *ctx, MySqlParseService::Response *response) {
    auto alterCtx = dynamic_cast<parsers::MySQLParser::AlterStatementContext *>(ctx);
    if (alterCtx->alterTable()) {
        parse_alter_table(ctx, response);
    } else {

    }
}

void MySQLParseServiceImpl::parse_alter_table(antlr4::ParserRuleContext *ctx, MySqlParseService::Response *response) {
    MySqlParseService::ResultWrapper wrapper;
    auto result = do_parse<AlterTableListener, MySqlParseService::AlterTableResult>(ctx);
    wrapper.mutable_alter_table_result()->CopyFrom(result);
    response->mutable_results()->Add(std::move(wrapper));
}

void MySQLParseServiceImpl::parse_update(antlr4::ParserRuleContext *ctx, MySqlParseService::Response *response) {
    MySqlParseService::ResultWrapper wrapper;
    auto result = do_parse<UpdateListener, MySqlParseService::UpdateResult>(ctx);
    wrapper.mutable_update_result()->CopyFrom(result);
    response->mutable_results()->Add(std::move(wrapper));
}
