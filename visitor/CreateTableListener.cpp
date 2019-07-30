//
// Created by xfwduke on 7/29/19.
//

#include "CreateTableListener.h"
//#include <boost/property_tree/json_parser.hpp>
//#include <boost/property_tree/ptree.hpp>

void CreateTableListener::exitCreateTable(parsers::MySQLParser::CreateTableContext *context) {
    result.set_name(context->tableName()->getText());

    if (context->LIKE_SYMBOL())
        result.set_like_table(context->tableRef()->getText());

    cout << result.name() << endl;
//    to_json();
}

void CreateTableListener::exitTableElement(parsers::MySQLParser::TableElementContext *context) {
//    cout << context->getText() << endl;
}

void CreateTableListener::exitColumnDefinition(parsers::MySQLParser::ColumnDefinitionContext *context) {
    auto column = result.add_columns();

    column->set_name(context->columnName()->getText());

    auto fieldDefinition = context->fieldDefinition();
    column->set_type(fieldDefinition->dataType()->type->getText());

    for (auto attr: fieldDefinition->columnAttribute()) {
        column->add_attributes(attr->getText());
    }
}

void CreateTableListener::exitTableConstraintDef(parsers::MySQLParser::TableConstraintDefContext *context) {
    auto constrain = result.add_constrains();
    constrain->set_type(context->type->getText());

    if (context->indexName())
        constrain->set_name(context->indexName()->getText());
    else if (context->indexNameAndType())
        constrain->set_name(context->indexNameAndType()->getText());

    if (context->keyList()) {
        for (auto k:context->keyList()->keyPart())
            constrain->add_columns(k->identifier()->getText());
    } else if (context->keyListVariants()) {
        if (context->keyListVariants()->keyList()) {
            for (auto k:context->keyListVariants()->keyList()->keyPart())
                constrain->add_columns(k->identifier()->getText());
        } else {
            for (auto k:context->keyListVariants()->keyListWithExpression()->keyPartOrExpression())
                constrain->add_columns(k->getText());
        }
    }
}

void CreateTableListener::exitCreateTableOption(parsers::MySQLParser::CreateTableOptionContext *context) {
    result.mutable_options();
    string k, v;
    if (context->SECONDARY_ENGINE_SYMBOL()) {
        k = "SECONDARY_ENGINE";
        v = context->NULL_SYMBOL() ? context->NULL_SYMBOL()->getText()
                                   : context->textStringLiteral()->getText();
    } else if (context->option) {
        k = context->option->getText();
        auto children = context->children;
        v = children.at(children.size() - 1)->getText();
    } else if (context->defaultCharset()) {
        k = "DEFAULT_CHARSET";
        v = context->defaultCharset()->charsetName()->getText();
    } else if (context->defaultCollation()) {
        k = "DEFAULT_COLLATION";
        v = context->defaultCollation()->collationName()->getText();
    }
    result.mutable_options()->insert({k, v});
}

void CreateTableListener::exitPartitionClause(parsers::MySQLParser::PartitionClauseContext *context) {
    result.set_has_partition(true);
}


void CreateTableListener::exitCreateTableOptions(parsers::MySQLParser::CreateTableOptionsContext *context) {
//    cout << context->getText() << endl;
}

//string CreateTableListener::to_json() {
////    json.put("table_name", tableName);
////
////    boost::property_tree::ptree colsNode;
////    for (auto col:columns) {
////        colsNode.push_back(make_pair("", col.ptree()));
////    }
////    json.add_child("columns", colsNode);
////
////    boost::property_tree::ptree consNode;
////    for (auto cons:constrains) {
////        consNode.push_back(make_pair("", cons.ptree()));
////    }
////    json.add_child("constrains", consNode);
////
////    boost::property_tree::ptree optsNode;
////    for (auto opt:options) {
////        optsNode.put(opt.first, opt.second);
////    }
////    json.add_child("options", optsNode);
////
////    boost::property_tree::write_json(cout, json);
////    return "";
//}
//
//
