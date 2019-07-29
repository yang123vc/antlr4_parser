//
// Created by xfwduke on 7/29/19.
//

#include "CreateTableListener.h"
#include <boost/property_tree/json_parser.hpp>
#include <boost/property_tree/ptree.hpp>

void CreateTableListener::exitCreateTable(parsers::MySQLParser::CreateTableContext *context) {
    tableName = context->tableName()->getText();
    if (context->LIKE_SYMBOL())
        likeTable = context->tableRef()->getText();
    to_json();
}

void CreateTableListener::exitTableElement(parsers::MySQLParser::TableElementContext *context) {
//    cout << context->getText() << endl;
}

void CreateTableListener::exitColumnDefinition(parsers::MySQLParser::ColumnDefinitionContext *context) {
    columnDefinition colDef;
    colDef.name = context->columnName()->getText();
    auto fieldDefinition = context->fieldDefinition();
    colDef.typ = fieldDefinition->dataType()->type->getText();

    for (auto attr:fieldDefinition->columnAttribute()) {
        colDef.attrs.emplace_back(attr->getText());
    }
    columns.emplace_back(colDef);
}

void CreateTableListener::exitTableConstraintDef(parsers::MySQLParser::TableConstraintDefContext *context) {
    constrainDefinition constrain;
    constrain.typ = context->type->getText();

    if (context->indexName())
        constrain.name = context->indexName()->getText();
    else if (context->indexNameAndType())
        constrain.name = context->indexNameAndType()->getText();

    if (context->keyList()) {
        for (auto k:context->keyList()->keyPart())
            constrain.columns.emplace_back(k->identifier()->getText());
    } else if (context->keyListVariants()) {
        if (context->keyListVariants()->keyList()) {
            for (auto k:context->keyListVariants()->keyList()->keyPart())
                constrain.columns.emplace_back(k->identifier()->getText());
        } else {
            for (auto k:context->keyListVariants()->keyListWithExpression()->keyPartOrExpression())
                constrain.columns.emplace_back(k->getText());
        }
    }
    constrains.emplace_back(constrain);
}

void CreateTableListener::exitCreateTableOption(parsers::MySQLParser::CreateTableOptionContext *context) {
    pair<string, string> opt;
    if (context->SECONDARY_ENGINE_SYMBOL()) {
        opt.first = "SECONDARY_ENGINE";
        opt.second = context->NULL_SYMBOL() ? context->NULL_SYMBOL()->getText()
                                            : context->textStringLiteral()->getText();
        options.insert(opt);
        return;
    }
    if (context->option) {
        opt.first = context->option->getText();
        auto children = context->children;
        opt.second = children.at(children.size()-1)->getText();
//        opt.second = context->children.at(1)->getText();
        options.insert(opt);
        return;
    }
    if (context->defaultCharset()) {
        opt.first = "DEFAULT_CHARSET";
        opt.second = context->defaultCharset()->charsetName()->getText();
        options.insert(opt);
        return;
    }
    if (context->defaultCollation()) {
        opt.first = "DEFAULT_COLLATION";
        opt.second = context->defaultCollation()->collationName()->getText();
        options.insert(opt);
        return;
    }

}

void CreateTableListener::exitPartitionClause(parsers::MySQLParser::PartitionClauseContext *context) {
    hasPartition = true;
}


void CreateTableListener::exitCreateTableOptions(parsers::MySQLParser::CreateTableOptionsContext *context) {
//    cout << context->getText() << endl;
}

string CreateTableListener::to_json() {
    json.put("table_name", tableName);

    boost::property_tree::ptree colsNode;
    for (auto col:columns) {
        colsNode.push_back(make_pair("", col.ptree()));
    }
    json.add_child("columns", colsNode);

    boost::property_tree::ptree consNode;
    for (auto cons:constrains) {
        consNode.push_back(make_pair("", cons.ptree()));
    }
    json.add_child("constrains", consNode);

    boost::property_tree::ptree optsNode;
    for (auto opt:options) {
        optsNode.put(opt.first, opt.second);
    }
    json.add_child("options", optsNode);

    boost::property_tree::write_json(cout, json);
    return "";
}


