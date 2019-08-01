//
// Created by xfwduke on 8/1/19.
//

#ifndef ANTLR4_PARSER_UPDATELISTENER_HPP
#define ANTLR4_PARSER_UPDATELISTENER_HPP

#include "QueryListener.hpp"
#include "proto_src/parser.pb.h"

template<typename __RESULT_TYPE>
class UpdateListener : public QueryListener<__RESULT_TYPE> {
  public:
    void exitUpdateStatement(parsers::MySQLParser::UpdateStatementContext *context) override;

};

template<typename __RESULT_TYPE>
void UpdateListener<__RESULT_TYPE>::exitUpdateStatement(parsers::MySQLParser::UpdateStatementContext *context) {
    this->result.set_signature(this->get_signature());
}

#endif //ANTLR4_PARSER_UPDATELISTENER_HPP
