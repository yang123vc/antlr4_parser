//
// Created by xfwduke on 7/25/19.
//

#ifndef ANTLR4_PARSER_SELECTDESCRIPTOR_H
#define ANTLR4_PARSER_SELECTDESCRIPTOR_H

#include "QueryDescriptor.h"
#include <vector>
#include <string>
#include <stack>

class SelectDescriptor : public QueryDescriptor {
  public:
    std::vector<std::string> currentSelectItems;
    std::stack<std::vector<std::string>> selectItemsStack;
};


#endif //ANTLR4_PARSER_SELECTDESCRIPTOR_H
