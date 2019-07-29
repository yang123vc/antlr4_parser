//
// Created by xfwduke on 7/22/19.
//

#ifndef ANTLR4_PARSER_SELECTDESCRIPTOR_H
#define ANTLR4_PARSER_SELECTDESCRIPTOR_H

#include "QueryDescriptor.h"
#include <string>

class SelectDescriptor : public QueryDescriptor {
  public:
    std::string to_json() const override;

};


#endif //ANTLR4_PARSER_SELECTDESCRIPTOR_H
