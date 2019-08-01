//
// Created by xfwduke on 8/1/19.
//

#ifndef ANTLR4_PARSER_ALTERTABLELISTENER_HPP
#define ANTLR4_PARSER_ALTERTABLELISTENER_HPP

#include "QueryListener.hpp"
#include "proto_src/parser.pb.h"

template<typename __RESULT_TYPE>
class AlterTableListener : public QueryListener<__RESULT_TYPE> {
    MySqlParseService::AlterTableResult_Item
    pack_table_constraint_def(parsers::MySQLParser::TableConstraintDefContext *context);

    MySqlParseService::AlterTableResult_Item
    pack_direct_column_definition(parsers::MySQLParser::AlterListItemContext *context);

    MySqlParseService::AlterTableResult_Item
    pack_column_definition(parsers::MySQLParser::ColumnDefinitionContext *context);

  public:

    void exitAlterTable(parsers::MySQLParser::AlterTableContext *context) override;

    void exitRemovePartitioning(parsers::MySQLParser::RemovePartitioningContext *context) override;

    void exitPartitionClause(parsers::MySQLParser::PartitionClauseContext *context) override;

    void exitAlterPartition(parsers::MySQLParser::AlterPartitionContext *context) override;

    void exitCreateTableOption(parsers::MySQLParser::CreateTableOptionContext *context) override;

    void exitAlterListItem(parsers::MySQLParser::AlterListItemContext *context) override;

    void exitAlterStatement(parsers::MySQLParser::AlterStatementContext *context) override;

};

template<typename __RESULT_TYPE>
void AlterTableListener<__RESULT_TYPE>::exitAlterStatement(parsers::MySQLParser::AlterStatementContext *context) {
    this->result.set_signature(this->get_signature());
}

template<typename __RESULT_TYPE>
void AlterTableListener<__RESULT_TYPE>::exitAlterTable(parsers::MySQLParser::AlterTableContext *context) {
    this->result.set_name(context->tableRef()->getText());
}

template<typename __RESULT_TYPE>
void
AlterTableListener<__RESULT_TYPE>::exitRemovePartitioning(parsers::MySQLParser::RemovePartitioningContext *context) {
    this->result.set_modify_partition(true);
}

template<typename __RESULT_TYPE>
void AlterTableListener<__RESULT_TYPE>::exitPartitionClause(parsers::MySQLParser::PartitionClauseContext *context) {
    this->result.set_modify_partition(true);
}

template<typename __RESULT_TYPE>
void AlterTableListener<__RESULT_TYPE>::exitAlterPartition(parsers::MySQLParser::AlterPartitionContext *context) {
    this->result.set_modify_partition(true);
}

template<typename __RESULT_TYPE>
void
AlterTableListener<__RESULT_TYPE>::exitCreateTableOption(parsers::MySQLParser::CreateTableOptionContext *context) {
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
void AlterTableListener<__RESULT_TYPE>::exitAlterListItem(parsers::MySQLParser::AlterListItemContext *context) {
    if (context->ADD_SYMBOL() && context->tableElementList()) {
        for (auto eleCtx:context->tableElementList()->tableElement()) {
            MySqlParseService::AlterTableResult_Item item;
            if (eleCtx->columnDefinition()) {
                item = this->pack_column_definition(eleCtx->columnDefinition());
            } else {
                item = this->pack_table_constraint_def(eleCtx->tableConstraintDef());
            }
            item.set_action("ADD");
            this->result.mutable_items()->Add(std::move(item));
        }
        return;
    }

    MySqlParseService::AlterTableResult_Item item;

    if (context->ADD_SYMBOL()) {
        if (context->identifier()) {
            item = this->pack_direct_column_definition(context);
            item.set_action("ADD");

        } else if (context->tableConstraintDef()) {
            item = this->pack_table_constraint_def(context->tableConstraintDef());
            item.set_action("ADD");
        }

    }

    if (context->CHANGE_SYMBOL());
    if (context->MODIFY_SYMBOL());
    if (context->RENAME_SYMBOL());

    if (context->DROP_SYMBOL()) {
        item.set_action("DROP");
        if (context->FOREIGN_SYMBOL()) {
            item.set_type(context->FOREIGN_SYMBOL()->getText());
            item.set_name(context->columnInternalRef()->getText());
        } else if (context->PRIMARY_SYMBOL()) {
            item.set_type(context->PRIMARY_SYMBOL()->getText());
        } else if (context->keyOrIndex()) {
            item.set_type(context->keyOrIndex()->getText());
            item.set_name(context->indexRef()->getText());
        } else {
            item.set_type("COLUMN");
            item.set_name(context->columnInternalRef()->getText());
        }
    }
    this->result.mutable_items()->Add(std::move(item));
}

template<typename __RESULT_TYPE>
MySqlParseService::AlterTableResult_Item
AlterTableListener<__RESULT_TYPE>::pack_table_constraint_def(parsers::MySQLParser::TableConstraintDefContext *context) {
    MySqlParseService::AlterTableResult_Item item;
    item.set_type(context->type->getText());
    if (context->indexNameAndType())
        item.set_name(context->indexNameAndType()->indexName()->getText());
    if (context->indexName())
        item.set_name(context->indexName()->getText());
    item.set_detail(this->get_rawsql(context->keyListVariants()));
    return item;
}

template<typename __RESULT_TYPE>
MySqlParseService::AlterTableResult_Item
AlterTableListener<__RESULT_TYPE>::pack_direct_column_definition(parsers::MySQLParser::AlterListItemContext *context) {
    MySqlParseService::AlterTableResult_Item item;
    item.set_type("COLUMN");
    item.set_name(context->identifier()->getText());
    string raw_detail = this->get_rawsql(context->fieldDefinition());
    if (context->checkOrReferences())
        raw_detail += " " + this->get_rawsql(context->checkOrReferences());
    if (context->place())
        raw_detail += " " + this->get_rawsql(context->place());
    item.set_detail(raw_detail);
    return item;
}

template<typename __RESULT_TYPE>
MySqlParseService::AlterTableResult_Item
AlterTableListener<__RESULT_TYPE>::pack_column_definition(parsers::MySQLParser::ColumnDefinitionContext *context) {
    MySqlParseService::AlterTableResult_Item item;
    item.set_type("COLUMN");
    item.set_name(context->columnName()->getText());
    string raw_detail = this->get_rawsql(context->fieldDefinition());
    if (context->checkOrReferences())
        raw_detail += " " + this->get_rawsql(context->checkOrReferences());
    item.set_detail(raw_detail);
    return item;
}

#endif //ANTLR4_PARSER_ALTERTABLELISTENER_HPP
