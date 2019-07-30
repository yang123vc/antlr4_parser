//
// Created by xfwduke on 7/29/19.
//

#ifndef ANTLR4_PARSER_CREATETABLELISTENER_H
#define ANTLR4_PARSER_CREATETABLELISTENER_H

#include "QueryListener.h"
#include "proto_src/parser.grpc.pb.h"
#include "proto_src/parser.pb.h"
#include <string>
#include <map>

using namespace std;

class CreateTableListener : public QueryListener {
    MySqlParseService::CreateTableResponse_Result result;
  public:
    void exitCreateTable(parsers::MySQLParser::CreateTableContext *context) override;

    void exitTableElement(parsers::MySQLParser::TableElementContext *context) override;

    void exitColumnDefinition(parsers::MySQLParser::ColumnDefinitionContext *context) override;

    void exitCreateTableOption(parsers::MySQLParser::CreateTableOptionContext *context) override;

    void exitPartitionClause(parsers::MySQLParser::PartitionClauseContext *context) override;

    void exitTableConstraintDef(parsers::MySQLParser::TableConstraintDefContext *context) override;

    void exitCreateTableOptions(parsers::MySQLParser::CreateTableOptionsContext *context) override;

//  protected:
//    string to_json() override;
//
//  public:
//    class columnDefinition {
//      public:
//        string name;
//        string typ;
//        vector<string> attrs;
//
//        boost::property_tree::ptree ptree() {
//            boost::property_tree::ptree pt;
//            pt.put("name", name);
//            pt.put("type", typ);
//
//            boost::property_tree::ptree attrsNode;
//            for (const auto &attr:attrs) {
//                boost::property_tree::ptree attrNode;
//                attrNode.put("", attr);
//                attrsNode.push_back(make_pair("", attrNode));
//            }
//            pt.add_child("attrs", attrsNode);
//            return pt;
//        }
//    };
//
//    class constrainDefinition {
//      public:
//        string name;
//        string typ;
//        vector<string> columns;
//
//        boost::property_tree::ptree ptree() {
//            boost::property_tree::ptree pt;
//            pt.put("name", name);
//            pt.put("type", typ);
//
//            boost::property_tree::ptree colsNode;
//            for (const auto &col:columns) {
//                boost::property_tree::ptree colNode;
//                colNode.put("", col);
//                colsNode.push_back(make_pair("", colNode));
//            }
//            pt.add_child("columns", colsNode);
//            return pt;
//        }
//    };
//
//    string tableName;
//    string likeTable;
//    vector<columnDefinition> columns;
//    vector<constrainDefinition> constrains;
//    map<string, string> options;
//    bool hasPartition;
};


#endif //ANTLR4_PARSER_CREATETABLELISTENER_H
