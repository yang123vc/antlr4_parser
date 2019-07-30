//
// Created by xfwduke on 7/30/19.
//

#include "MySQLParseServiceImpl.h"
#include <antlr4-runtime.h>
#include "mysql/MySQLLexer.h"
#include "mysql/MySQLParser.h"
#include "visitor/CreateTableListener.h"

grpc::Status
MySQLParseServiceImpl::ParseCreateTable(::grpc::ServerContext *context, const ::MySqlParseService::Request *request,
                                        ::MySqlParseService::CreateTableResponse *response) {
    antlr4::ANTLRInputStream inputStream(request->query());
    parsers::MySQLLexer lexer(&inputStream);
    lexer.serverVersion = request->server_version();
    antlr4::CommonTokenStream tokenStream(&lexer);
    parsers::MySQLParser parser(&tokenStream);
    parser.serverVersion = request->server_version();

    parsers::MySQLParser::QueryContext *queryContext;
    while ((queryContext = parser.query())) {
        if (queryContext->EOF())
            break; // ToDo

        antlr4::tree::ParseTreeWalker walker;
        CreateTableListener listener;
        auto simpleStatCtx = queryContext->simpleStatement();
        auto simpleStatChildCtx = simpleStatCtx->getRuleContext<antlr4::RuleContext>(0);
        switch (simpleStatCtx->getRuleIndex()) {
            case parsers::MySQLParser::RuleSelectStatement:
                break;
            case parsers::MySQLParser::RuleCreateStatement: {
                auto createStatCtx = dynamic_cast<parsers::MySQLParser::CreateStatementContext *>(simpleStatChildCtx)->getRuleContext<antlr4::RuleContext>(
                        0);;
                switch (createStatCtx->getRuleIndex()) {
                    case parsers::MySQLParser::RuleCreateTable: {
                        walker.walk(&listener, queryContext);
                    }
                    default:
                        break;
                }
            }
            default:
                break;
        }
        auto res = response->add_results();
        *res = listener.getResult();
    }
    return grpc::Status::OK;
}
