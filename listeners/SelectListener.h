//
// Created by xfwduke on 7/31/19.
//

#ifndef ANTLR4_PARSER_SELECTLISTENER_H
#define ANTLR4_PARSER_SELECTLISTENER_H

#include "mysql/MySQLParserBaseListener.h"
#include "proto_src/parser.pb.h"
#include "QueryListener.h"

class SelectListener : public QueryListener {
    MySqlParseService::SelectResult result;
  public:
    MySqlParseService::SelectResult &&get_result();

    void exitSelectStatement(parsers::MySQLParser::SelectStatementContext *context) override;
};


#endif //ANTLR4_PARSER_SELECTLISTENER_H
