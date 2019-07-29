//
// Created by xfwduke on 7/22/19.
//
#include <iostream>
#include "QueryListener.h"


void QueryListener::exitQuery(parsers::MySQLParser::QueryContext *context) {
//    cout << formatSignature() << endl;
//    for (auto f:queryTables)
//        cout << f << endl;
}


void QueryListener::exitFromClause(parsers::MySQLParser::FromClauseContext *context) {
    if (context->DUAL_SYMBOL()) {
        queryTables.emplace_back("DUAL");
    }
}

void QueryListener::exitTableRef(parsers::MySQLParser::TableRefContext *context) {
    queryTables.emplace_back(context->getText());
}

void QueryListener::exitFunctionCall(parsers::MySQLParser::FunctionCallContext *context) {
    queryFunctions.emplace_back(context->getText());
}

void QueryListener::exitRuntimeFunctionCall(parsers::MySQLParser::RuntimeFunctionCallContext *context) {
    queryFunctions.emplace_back(context->getText());
}

void QueryListener::visitTerminal(antlr4::tree::TerminalNode *node) {
    if (node->getSymbol()->getType() == antlr4::Token::EOF)
        return;
    auto parent = node->parent;
    while (parent) {
        auto parentCtx = dynamic_cast<antlr4::RuleContext *>(parent);
        if (parentCtx->getRuleIndex() == parsers::MySQLParser::RuleLiteral) {
            signature.emplace_back("?");
            signature.emplace_back(" ");
            return;
        }
        parent = parent->parent;
    }
    signature.emplace_back(node->getText());
    signature.emplace_back(" ");
}

string QueryListener::formatSignature() {
    std::stringstream ss;

    auto pos = find(signature.begin(), signature.end(), ".");
    if (pos != signature.end()) {
        if (pos - 1 >= signature.begin()
            && pos + 1 != signature.end()
            && *(pos - 1) == " "
            && *(pos + 1) == " ") {
            signature.erase(pos + 1);
            signature.erase(pos - 1);
        }
    }

    for (const auto &i:signature)
        ss << i;
    return ss.str();
}