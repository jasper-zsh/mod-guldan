#!/bin/bash

MOD_ROOT=`dirname $0`
PROTO_DIR=$MOD_ROOT/protos
PROTO_FILES=`ls $PROTO_DIR`

for PROTO in $PROTO_FILES
do
    echo "Building $PROTO"
    protoc -I $PROTO_DIR --grpc_out=$MOD_ROOT/src/grpc --plugin=protoc-gen-grpc=`which grpc_cpp_plugin` $PROTO
    protoc -I $PROTO_DIR --cpp_out=$MOD_ROOT/src/grpc $PROTO
done