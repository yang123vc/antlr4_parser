//
// Created by xfwduke on 7/29/19.
//

#ifndef ANTLR4_PARSER_CREATETABLELISTENER_HPP
#define ANTLR4_PARSER_CREATETABLELISTENER_HPP

#include "mysql/MySQLParser.h"
#include "QueryListener.hpp"
#include "proto_src/parser.pb.h"

using namespace std;

template<typename __RESULT_TYPE>
class CreateTableListener : public QueryListener<__RESULT_TYPE> {
  public:
    void exitCreateTable(parsers::MySQLParser::CreateTableContext *context) override;

    void exitColumnDefinition(parsers::MySQLParser::ColumnDefinitionContext *context) override;

    void exitCreateTableOption(parsers::MySQLParser::CreateTableOptionContext *context) override;

    void exitPartitionClause(parsers::MySQLParser::PartitionClauseContext *context) override;

    void exitTableConstraintDef(parsers::MySQLParser::TableConstraintDefContext *context) override;
};


template<typename __RESULT_TYPE>
void CreateTableListener<__RESULT_TYPE>::exitCreateTable(parsers::MySQLParser::CreateTableContext *context) {
    this->result.set_name(context->tableName()->getText());

    if (context->LIKE_SYMBOL())
        this->result.set_like_table(context->tableRef()->getText());

    this->result.set_signature(this->get_signature());
}

template<typename __RESULT_TYPE>
void CreateTableListener<__RESULT_TYPE>::exitColumnDefinition(parsers::MySQLParser::ColumnDefinitionContext *context) {
    auto column = this->result.add_columns();

    column->set_name(context->columnName()->getText());

    auto fieldDefinition = context->fieldDefinition();
    column->set_type(fieldDefinition->dataType()->type->getText());

    for (auto attr: fieldDefinition->columnAttribute()) {
        column->add_attributes(attr->getText());
    }
}

template<typename __RESULT_TYPE>
void
CreateTableListener<__RESULT_TYPE>::exitTableConstraintDef(parsers::MySQLParser::TableConstraintDefContext *context) {
    auto constrain = this->result.add_constrains();
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

template<typename __RESULT_TYPE>
void
CreateTableListener<__RESULT_TYPE>::exitCreateTableOption(parsers::MySQLParser::CreateTableOptionContext *context) {
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
    this->result.mutable_options()->insert({k, v});
}

template<typename __RESULT_TYPE>
void CreateTableListener<__RESULT_TYPE>::exitPartitionClause(parsers::MySQLParser::PartitionClauseContext *context) {
    this->result.set_has_partition(true);
}

#endif //ANTLR4_PARSER_CREATETABLELISTENER_HPP
