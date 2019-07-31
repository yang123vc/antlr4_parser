//
// Created by xfwduke on 7/22/19.
//

#ifndef ANTLR4_PARSER_QUERYLISTENER_H
#define ANTLR4_PARSER_QUERYLISTENER_H

#include "mysql/MySQLParserBaseListener.h"
#include <antlr4-runtime.h>
#include <string>
#include <vector>

using namespace std;
using namespace antlr4::tree;

class QueryListener : public parsers::MySQLParserBaseListener {
  protected:
    vector<string> signature;

    string get_signature();

  public:
    void visitTerminal(antlr4::tree::TerminalNode *node) override;
};


#endif //ANTLR4_PARSER_QUERYLISTENER_H
