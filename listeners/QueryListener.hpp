//
// Created by xfwduke on 7/22/19.
//

#ifndef ANTLR4_PARSER_QUERYLISTENER_HPP
#define ANTLR4_PARSER_QUERYLISTENER_HPP

#include "mysql/MySQLParserBaseListener.h"
#include <antlr4-runtime.h>
#include <string>
#include <vector>

using namespace std;
using namespace antlr4::tree;

template<typename __RESULT_TYPE>
class QueryListener : public parsers::MySQLParserBaseListener {
  protected:
    __RESULT_TYPE result;
    vector<string> signature;


    string get_signature();

    inline string get_rawsql(antlr4::ParserRuleContext *ctx) {
        antlr4::misc::Interval interval(ctx->start->getStartIndex(), ctx->stop->getStopIndex());
        return ctx->start->getInputStream()->getText(interval);
    }

  public:
    __RESULT_TYPE &&get_result();

    void visitTerminal(antlr4::tree::TerminalNode *node) override;
};


template<typename __RESULT_TYPE>
__RESULT_TYPE &&QueryListener<__RESULT_TYPE>::get_result() {
    return std::move(result);
}

template<typename __RESULT_TYPE>
string QueryListener<__RESULT_TYPE>::get_signature() {
    stringstream ss;
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

template<typename __RESULT_TYPE>
void QueryListener<__RESULT_TYPE>::visitTerminal(antlr4::tree::TerminalNode *node) {
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


#endif //ANTLR4_PARSER_QUERYLISTENER_HPP
