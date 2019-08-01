protoc -I proto --grpc_out=proto_src --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` proto/parser.proto
protoc -I proto --cpp_out=proto_src proto/parser.proto