//
// Created by xfwduke on 7/30/19.
//

#ifndef ANTLR4_PARSER_MYSQLPARSESERVICEIMPL_H
#define ANTLR4_PARSER_MYSQLPARSESERVICEIMPL_H

#include "proto_src/parser.grpc.pb.h"
#include <grpcpp/grpcpp.h>

class MySQLParseServiceImpl final : public MySqlParseService::ParseService::Service {
  public:
    grpc::Status ParseCreateTable(::grpc::ServerContext *context, const ::MySqlParseService::Request *request,
                                  ::MySqlParseService::CreateTableResponse *response) override;
};


#endif //ANTLR4_PARSER_MYSQLPARSESERVICEIMPL_H
