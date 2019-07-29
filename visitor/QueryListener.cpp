//
// Created by xfwduke on 7/22/19.
//
#include <iostream>
#include "QueryListener.h"


void QueryListener::exitSelectStatement(parsers::MySQLParser::SelectStatementContext *context) {
    auto selectItems = querySelectItemProp.removeFrom(context->children.at(0));
    for (auto item:selectItems) {
        std::cout << item.first << std::endl;
    }
}

void QueryListener::exitQueryExpression(parsers::MySQLParser::QueryExpressionContext *context) {
    if (context->queryExpressionParens()) {
        querySelectItemProp.put(context, querySelectItemProp.removeFrom(context->queryExpressionParens()));
    } else {
        querySelectItemProp.put(context, querySelectItemProp.removeFrom(context->queryExpressionBody()));
    }
}

void QueryListener::exitQueryExpressionBody(parsers::MySQLParser::QueryExpressionBodyContext *context) {
    if (context->UNION_SYMBOL()) {
        vector<pair<string, bool>> selectItems;
        vector<pair<string, bool>> subSelectItems;
        if (context->querySpecification()) {
            subSelectItems = querySelectItemProp.removeFrom(context->querySpecification());
        }
        if (context->queryExpressionBody()) {
            subSelectItems = querySelectItemProp.removeFrom(context->queryExpressionBody());
        }
        selectItems.insert(selectItems.end(), subSelectItems.begin(), subSelectItems.end());
        for (auto p:context->queryExpressionParens()) {
            subSelectItems = querySelectItemProp.removeFrom(p);
            selectItems.insert(selectItems.end(), subSelectItems.begin(), subSelectItems.end());
        }
        querySelectItemProp.put(context, selectItems);
    } else {
        querySelectItemProp.put(context, querySelectItemProp.removeFrom(context->querySpecification()));
    }
}


// ????
void QueryListener::exitQueryExpressionParens(parsers::MySQLParser::QueryExpressionParensContext *context) {
    if (context->queryExpressionParens()) {
        querySelectItemProp.put(context, querySelectItemProp.removeFrom(context->queryExpressionParens()));
    } else {
        querySelectItemProp.put(context, querySelectItemProp.removeFrom(context->queryExpression()));
    }
}

void QueryListener::exitQuerySpecification(parsers::MySQLParser::QuerySpecificationContext *context) {

}

//void QueryListener::exitQuerySpecification(parsers::MySQLParser::QuerySpecificationContext *context) {
//    vector<pair<string, bool>> selectItems;
//    for (auto item:querySelectItemProp.removeFrom(context->selectItemList())) {
//        selectItems.emplace_back(item);
//    }
//
//    for (auto item:querySelectItemProp.removeFrom(context->fromClause())) {
//        selectItems.emplace_back(item);
//    }
//
//
//    vector<pair<string, bool>> fixedSelectItems;
//
//    vector<pair<string, string>> fromTables;
//    if (context->fromClause()) {
//        fromTables = queryFromProp.removeFrom(context->fromClause());
//        auto subSelectItems = querySelectItemProp.removeFrom(context->fromClause());
//        fixedSelectItems.insert(fixedSelectItems.end(), subSelectItems.begin(), subSelectItems.end());
//    }
//
//
//    auto split = [](string str, string delimiter) {
//        size_t pStart = 0;
//        size_t pEnd = 0;
//        size_t delimLen = delimiter.length();
//        string token;
//        vector<string> res;
//        while ((pEnd = str.find(delimiter, pStart)) != string::npos) {
//            token = str.substr(pStart, pEnd - pStart);
//            pStart = pEnd + delimLen;
//            res.emplace_back(token);
//        }
//        res.emplace_back(str.substr(pStart));
//        return res;
//    };
//
////    for (auto item: selectItems) {
////        auto splitItems = split(item, ".");
////        switch (splitItems.size()) {
////            case 1:
////                if (splitItems.at(0) == "*") {
////                    for (auto table:fromTables) {
////                        string name = table.first;
////                        fixedSelectItems.emplace_back(name + "." + splitItems.at(0));
////                    }
////                } else {
////                    fixedSelectItems.emplace_back(splitItems.at(0));
////                }
////                break;
////            case 2: {
////                string itemTablePrefix = splitItems.at(0);
////                auto tb = find_if(fromTables.begin(), fromTables.end(),
////                                  [&itemTablePrefix](pair<string, string> tb) {
////                                      return tb.second == itemTablePrefix;
////                                  });
////                if (tb != fromTables.end()) {
////                    fixedSelectItems.emplace_back(tb->first + "." + splitItems.at(0));
////                }
////                break;
////            }
////            case 3:
////                fixedSelectItems.emplace_back(item);
////                break;
////        }
////    }
////
////    querySelectItemProp.put(context, fixedSelectItems);
//}

//void QueryListener::exitSelectStatementWithInto(parsers::MySQLParser::SelectStatementWithIntoContext *context) {
//    if (context->queryExpression()) {
//        querySelectItemProp.put(context, querySelectItemProp.removeFrom(context->queryExpression()));
//    } else {
//        querySelectItemProp.put(context, querySelectItemProp.removeFrom(context->selectStatementWithInto()));
//    }
//}


void QueryListener::exitFromClause(parsers::MySQLParser::FromClauseContext *context) {

    if (context->DUAL_SYMBOL()) {
        auto tables = queryFromProp.removeFrom(context);
        tables.emplace_back("DUAL", "DUAL");
        queryFromProp.put(context, tables);
        //    } else {
////        queryFromProp.put(context, queryFromProp.removeFrom(context->tableReferenceList()));
////        querySelectItemProp.put(context, querySelectItemProp.removeFrom(context->tableReferenceList()));
//    }
    }
}

void QueryListener::exitSingleTable(parsers::MySQLParser::SingleTableContext *context) {
    pair<string, string> table;
    table.first = context->tableRef()->getText();
    table.second = context->tableAlias() ? context->tableAlias()->getText() : table.first;

    antlr4::tree::ParseTree *parent = context;
    while (parent) {
        if (dynamic_cast<antlr4::RuleContext *>(parent)->getRuleIndex() == parsers::MySQLParser::RuleFromClause) {
            auto tables = queryFromProp.removeFrom(parent);
            tables.emplace_back(table);
            queryFromProp.put(parent, tables);
            break;
        }
        parent = parent->parent;
    }
}
//void QueryListener::exitTableReferenceList(parsers::MySQLParser::TableReferenceListContext *context) {
//    vector<pair<string, string>> tables;
//    vector<string> selectItems;
//    for (auto subContext:context->tableReference()) {
//        for (auto table:queryFromProp.removeFrom(subContext)) {
//            tables.emplace_back(table);
//        }
//        auto subSelectItems = querySelectItemProp.removeFrom(subContext);
//        selectItems.insert(selectItems.end(), subSelectItems.begin(), subSelectItems.end());
//    }
//    querySelectItemProp.put(context, selectItems);
//    queryFromProp.put(context, tables);
//}
//
//void QueryListener::exitTableReference(parsers::MySQLParser::TableReferenceContext *context) {
//    vector<pair<string, string>> tables;
//    for (auto table:queryFromProp.removeFrom(context->tableFactor()))
//        tables.emplace_back(table);
//
//    for (auto joinContext:context->joinedTable()) {
//        for (auto table:queryFromProp.removeFrom(joinContext)) {
//            tables.emplace_back(table);
//        }
//    }
//
//    //do not support odbc syntax
//
//    queryFromProp.put(context, tables);
//
//    querySelectItemProp.put(context, querySelectItemProp.removeFrom(context->tableFactor()));
//}
//
//void QueryListener::exitTableFactor(parsers::MySQLParser::TableFactorContext *context) {
//    if (context->singleTable()) {
//        queryFromProp.put(context, queryFromProp.removeFrom(context->singleTable()));
//        return;
//    }
//    if (context->singleTableParens()) {
//        queryFromProp.put(context, queryFromProp.removeFrom(context->singleTableParens()));
//        return;
//    }
//    if (context->derivedTable()) {
//        querySelectItemProp.put(context, querySelectItemProp.removeFrom(context->derivedTable()));
//    }
//}
//
//void QueryListener::exitSingleTable(parsers::MySQLParser::SingleTableContext *context) {
//    string name = context->tableRef()->getText();
//    string alias;
//    if (context->tableAlias())
//        alias = context->tableAlias()->identifier()->getText();
//    else
//        alias = name;
//
//    queryFromProp.put(context, {make_pair(name, alias)});
//}
//
//void QueryListener::exitSingleTableParens(parsers::MySQLParser::SingleTableParensContext *context) {
//    if (context->singleTable())
//        queryFromProp.put(context, queryFromProp.removeFrom(context->singleTable()));
//    else
//        queryFromProp.put(context, queryFromProp.removeFrom(context->singleTableParens()));
//}
//
//void QueryListener::exitTableReferenceListParens(parsers::MySQLParser::TableReferenceListParensContext *context) {
//    if (context->tableReferenceList())
//        queryFromProp.put(context, queryFromProp.removeFrom(context->tableReferenceList()));
//    else
//        queryFromProp.put(context, queryFromProp.removeFrom(context->tableReferenceListParens()));
//}

//void QueryListener::exitDerivedTable(parsers::MySQLParser::DerivedTableContext *context) {
///* MySQLParser.g4 define derivedTable as
// * subquery tableAlias? ....
// * but mysql force a alias for subquery
// */
////    string alias = context->tableAlias()->identifier()->getText();
////    queryFromProp.put(context, {__table(alias, alias, __table::TYPE::DERIVE)});
////    querySelectItemProp.put(context, querySelectItemProp.removeFrom(context->subquery()));
//}
//
//void QueryListener::exitSubquery(parsers::MySQLParser::SubqueryContext *context) {
////    querySelectItemProp.put(context, querySelectItemProp.removeFrom(context->queryExpressionParens()));
//}


//void QueryListener::exitSelectItem(parsers::MySQLParser::SelectItemContext *context) {
//    auto t = querySelectItemProp.get(context);
//    if (t.empty()) {
//        pair<string, bool> item;
//        item.first = context->tableWild() ? context->tableWild()->getText() : context->expr()->getText();
//        item.second = false;
//        querySelectItemProp.put(context, {item});
//    }
//}
//
//void QueryListener::exitSelectItemList(parsers::MySQLParser::SelectItemListContext *context) {
//    vector<pair<string, bool>> items;
//    if (context->MULT_OPERATOR())
//        items.emplace_back(make_pair("*", false));
//
//    for (auto si:context->selectItem()) {
//        auto subItems = querySelectItemProp.removeFrom(si);
//        items.insert(items.end(), subItems.begin(), subItems.end());
//    }
//    querySelectItemProp.put(context, items);
//}
//
//void QueryListener::exitSimpleExprColumnRef(parsers::MySQLParser::SimpleExprColumnRefContext *context) {
//    antlr4::tree::ParseTree *parent = context;
//    while (parent) {
//        if (dynamic_cast<antlr4::RuleContext *>(parent)->getRuleIndex() == parsers::MySQLParser::RuleSelectItem) {
//            querySelectItemProp.put(parent, {make_pair(context->getText(), true)});
//            break;
//        }
//        parent = parent->parent;
//    }
//}




//void QueryListener::visitTerminal(antlr4::tree::TerminalNode *node) {
//    if (node->getSymbol()->getType() == antlr4::Token::EOF)
//        return;
//
//    auto parent = node->parent;
//
////    if (node->getSymbol()->getType() == parsers::MySQLParser::OPEN_PAR_SYMBOL
////        || node->getSymbol()->getType() == parsers::MySQLParser::CLOSE_PAR_SYMBOL) {
////        std::cout << node->getText();
////        return;
////    }
////
////
////    if (node->getSymbol()->getType() == parsers::MySQLParser::COMMA_SYMBOL) {
////        std::cout << node->getText() << " ";
////        return;
////    }
//
//    while (parent) {
//        auto parent_context = dynamic_cast<antlr4::RuleContext *>(parent);
//        if (parent_context->getRuleIndex() == parsers::MySQLParser::RuleLiteral) {
////            std::cout << "?";
//            return;
//        }
//        parent = parent->parent;
//    }
//
//
//
//
//
////    auto parent = node->parent;
////    [&] {
////        while (parent) {
////            auto parent_context = dynamic_cast<antlr4::RuleContext *>(parent);
////            switch (parent_context->getRuleIndex()) {
////                case parsers::MySQLParser::RuleTextLiteral:
////                    std::cout << "'S'";
////                    return;
////                case parsers::MySQLParser::RuleNumLiteral:
////                    std::cout << "N";
////                    return;
////                case parsers::MySQLParser::RuleTemporalLiteral:
////                    std::cout << "T";
////                    return;
////                case parsers::MySQLParser::RuleNullLiteral:
////                    std::cout << "NULL";
////                    return;
////                case parsers::MySQLParser::RuleBoolLiteral:
////                    std::cout << "BOOL";
////                    return;
////                case parsers::MySQLParser::RuleLiteral:
////                    std::cout << "N";
////                    return;
////            }
////            parent = parent->parent;
////        }
////    }();
//
//
////    std::cout << node->getText();
//}
//
//

