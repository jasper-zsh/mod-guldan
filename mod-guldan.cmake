message("------ Guldan ------")
find_library(PROTOBUF_LIBRARIES protobuf)
find_library(GRPC_LIBRARIES NAMES grpc grpc++)
target_link_libraries(modules PRIVATE protobuf grpc grpc++)
