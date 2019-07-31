#include <string>
#include "MySQLParseServiceImpl.h"

using namespace std;


int main(int argc, char *argv[]) {
    string server_address("0.0.0.0:50051");
    MySQLParseServiceImpl service;
    grpc::ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);
    unique_ptr<grpc::Server> server(builder.BuildAndStart());
    server->Wait();
    return 0;
}