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
#include <tuple>

using namespace std;
using namespace antlr4::tree;

class QueryListener : public parsers::MySQLParserBaseListener {
//    class __table {
//      public:
//        enum TYPE {
//            REAL, DERIVE, DUAL
//        };
//        string name;
//        string alias;
//
//        __table(string name, string alias, TYPE type) : name(std::move(name)), alias(std::move(alias)), type(type) {}
//
//        TYPE type;
//    };

    ParseTreeProperty<vector<pair<string, bool>>> querySelectItemProp;
    ParseTreeProperty<vector<pair<string, string>>> queryFromProp;
    ParseTreeProperty<vector<pair<string, bool>>> subQuerySelectItemProp;
    ParseTreeProperty<vector<pair<string, string>>> subQueryFromProp;
  public:
//    void visitTerminal(antlr4::tree::TerminalNode *node) override;

    void exitSelectStatement(parsers::MySQLParser::SelectStatementContext *context) override;

    void exitQueryExpression(parsers::MySQLParser::QueryExpressionContext *context) override;

    void exitQueryExpressionBody(parsers::MySQLParser::QueryExpressionBodyContext *context) override;

    void exitQueryExpressionParens(parsers::MySQLParser::QueryExpressionParensContext *context) override;

    void exitQuerySpecification(parsers::MySQLParser::QuerySpecificationContext *context) override;

    void exitSelectItem(parsers::MySQLParser::SelectItemContext *context) override;

    void exitSimpleExprColumnRef(parsers::MySQLParser::SimpleExprColumnRefContext *context) override;

    void exitSelectItemList(parsers::MySQLParser::SelectItemListContext *context) override;

    void exitFromClause(parsers::MySQLParser::FromClauseContext *context) override;

    void exitSingleTable(parsers::MySQLParser::SingleTableContext *context) override;

//    void exitSelectItemList(parsers::MySQLParser::SelectItemListContext *context) override;

//    void exitSelectStatementWithInto(parsers::MySQLParser::SelectStatementWithIntoContext *context) override;

//    void exitFromClause(parsers::MySQLParser::FromClauseContext *context) override;

//    void exitTableReferenceList(parsers::MySQLParser::TableReferenceListContext *context) override;
//
//    void exitTableReference(parsers::MySQLParser::TableReferenceContext *context) override;
//
//    void exitTableFactor(parsers::MySQLParser::TableFactorContext *context) override;
//
//    void exitSingleTable(parsers::MySQLParser::SingleTableContext *context) override;
//
//    void exitSingleTableParens(parsers::MySQLParser::SingleTableParensContext *context) override;
//
//    void exitTableReferenceListParens(parsers::MySQLParser::TableReferenceListParensContext *context) override;
//
//    void exitDerivedTable(parsers::MySQLParser::DerivedTableContext *context) override;
//
//    void exitSubquery(parsers::MySQLParser::SubqueryContext *context) override;
};


#endif //ANTLR4_PARSER_QUERYLISTENER_H
