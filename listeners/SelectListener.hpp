//
// Created by xfwduke on 7/31/19.
//

#ifndef ANTLR4_PARSER_SELECTLISTENER_HPP
#define ANTLR4_PARSER_SELECTLISTENER_HPP

#include "mysql/MySQLParserBaseListener.h"
#include "proto_src/parser.pb.h"
#include "QueryListener.hpp"

template <typename __RESULT_TYPE>
class SelectListener : public QueryListener<__RESULT_TYPE> {
//    MySqlParseService::SelectResult result;
  public:
//    MySqlParseService::SelectResult &&get_result();

    void exitSelectStatement(parsers::MySQLParser::SelectStatementContext *context) override;

    void exitFromClause(parsers::MySQLParser::FromClauseContext *context) override;

    void exitTableRef(parsers::MySQLParser::TableRefContext *context) override;

    void exitFunctionCall(parsers::MySQLParser::FunctionCallContext *context) override;

    void exitRuntimeFunctionCall(parsers::MySQLParser::RuntimeFunctionCallContext *context) override;
};

template<typename __RESULT_TYPE>
void SelectListener<__RESULT_TYPE>::exitSelectStatement(parsers::MySQLParser::SelectStatementContext *context) {
    this->result.set_signature(this->get_signature());
}

template<typename __RESULT_TYPE>
void SelectListener<__RESULT_TYPE>::exitFromClause(parsers::MySQLParser::FromClauseContext *context) {
    if (context->DUAL_SYMBOL()) {
        this->result.add_from_tables("DUAL");
    }
}

template<typename __RESULT_TYPE>
void SelectListener<__RESULT_TYPE>::exitTableRef(parsers::MySQLParser::TableRefContext *context) {
    this->result.add_from_tables(context->getText());
}

template<typename __RESULT_TYPE>
void SelectListener<__RESULT_TYPE>::exitFunctionCall(parsers::MySQLParser::FunctionCallContext *context) {
    this->result.add_functions(context->getText());
}

template<typename __RESULT_TYPE>
void SelectListener<__RESULT_TYPE>::exitRuntimeFunctionCall(parsers::MySQLParser::RuntimeFunctionCallContext *context) {
    this->result.add_functions(context->getText());
}


#endif //ANTLR4_PARSER_SELECTLISTENER_HPP
