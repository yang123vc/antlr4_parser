#include <utility>

#include <utility>

//
// Created by xfwduke on 7/22/19.
//

#ifndef ANTLR4_PARSER_QUERYLISTENER_H
#define ANTLR4_PARSER_QUERYLISTENER_H

#include "mysql/MySQLParserBaseListener.h"
#include <antlr4-runtime.h>
#include <string>
#include <vector>
#include <boost/property_tree/ptree.hpp>

using namespace std;
using namespace antlr4::tree;

class QueryListener : public parsers::MySQLParserBaseListener {
  public:
    vector<string> queryTables;
    vector<string> signature;
    vector<string> queryFunctions;

    string formatSignature();

  protected:
    boost::property_tree::ptree json;

  public:
    void exitFromClause(parsers::MySQLParser::FromClauseContext *context) override;

    void visitTerminal(antlr4::tree::TerminalNode *node) override;

    void exitFunctionCall(parsers::MySQLParser::FunctionCallContext *context) override;

    void exitRuntimeFunctionCall(parsers::MySQLParser::RuntimeFunctionCallContext *context) override;

    void exitQuery(parsers::MySQLParser::QueryContext *context) override;

    void exitTableRef(parsers::MySQLParser::TableRefContext *context) override;
};


#endif //ANTLR4_PARSER_QUERYLISTENER_H
