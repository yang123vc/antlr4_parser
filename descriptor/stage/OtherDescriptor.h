//
// Created by xfwduke on 7/22/19.
//

#ifndef ANTLR4_PARSER_OTHERDESCRIPTOR_H
#define ANTLR4_PARSER_OTHERDESCRIPTOR_H

#include "QueryDescriptor.h"

class OtherDescriptor : public QueryDescriptor {
  public:
    std::string to_json() const override;
};


#endif //ANTLR4_PARSER_OTHERDESCRIPTOR_H
