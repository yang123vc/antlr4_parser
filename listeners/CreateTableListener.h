//
// Created by xfwduke on 7/29/19.
//

#ifndef ANTLR4_PARSER_CREATETABLELISTENER_H
#define ANTLR4_PARSER_CREATETABLELISTENER_H

#include "mysql/MySQLParser.h"
//#include "mysql/MySQLParserBaseListener.h"
#include "QueryListener.h"
#include "proto_src/parser.pb.h"

using namespace std;

class CreateTableListener : public QueryListener {
    MySqlParseService::CreateTableResult result;
  public:
    MySqlParseService::CreateTableResult &&get_result();

  public:
    void exitCreateTable(parsers::MySQLParser::CreateTableContext *context) override;

    void exitColumnDefinition(parsers::MySQLParser::ColumnDefinitionContext *context) override;

    void exitCreateTableOption(parsers::MySQLParser::CreateTableOptionContext *context) override;

    void exitPartitionClause(parsers::MySQLParser::PartitionClauseContext *context) override;

    void exitTableConstraintDef(parsers::MySQLParser::TableConstraintDefContext *context) override;
};


#endif //ANTLR4_PARSER_CREATETABLELISTENER_H
