//
// Created by xfwduke on 7/30/19.
//

#ifndef ANTLR4_PARSER_MYSQLPARSESERVICEIMPL_H
#define ANTLR4_PARSER_MYSQLPARSESERVICEIMPL_H

#include <antlr4-runtime.h>
#include <mysql/MySQLLexer.h>
#include <mysql/MySQLParser.h>
#include "proto_src/parser.grpc.pb.h"
#include <grpcpp/grpcpp.h>
#include <string>

class MySQLParseServiceImpl final : public MySqlParseService::ParseService::Service {
    void parse_select(antlr4::ParserRuleContext *ctx, MySqlParseService::Response *response);

    void parse_create(antlr4::ParserRuleContext *ctx, MySqlParseService::Response *response);

    void parse_create_table(antlr4::ParserRuleContext *ctx, MySqlParseService::Response *response);

    void parse_alter(antlr4::ParserRuleContext *ctx, MySqlParseService::Response *response);

    void parse_alter_table(antlr4::ParserRuleContext *ctx, MySqlParseService::Response *response);

    void parse_update(antlr4::ParserRuleContext *ctx, MySqlParseService::Response *response);

    template<template<typename> class __LISTENER_TYPE, typename __RESULT_TYPE>
    __RESULT_TYPE do_parse(antlr4::ParserRuleContext *ctx);

    static std::string get_rawsql(antlr4::ParserRuleContext *ctx);

  public:
    grpc::Status ParseQuery(::grpc::ServerContext *context, const ::MySqlParseService::Request *request,
                            ::MySqlParseService::Response *response) override;


};


#endif //ANTLR4_PARSER_MYSQLPARSESERVICEIMPL_H
