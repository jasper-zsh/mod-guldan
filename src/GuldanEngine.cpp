#include "GuldanEngine.h"
#include "grpc/grpc.h"
#include "grpcpp/server.h"
#include "grpcpp/security/server_credentials.h"
#include "grpcpp/server_builder.h"
#include "server/GPlayer.h"

Guldan::Guldan()
{

}

Guldan::~Guldan()
{
    
}

void Guldan::Start()
{
    std::string server_address("0.0.0.0:9999");
    GPlayer player;

    grpc::ServerBuilder builder;
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    builder.RegisterService(&player);
    server = builder.BuildAndStart();
    LOG_INFO("server.loading", "Guldan server started.");
}

void Guldan::Stop()
{
    server->Shutdown();
    LOG_INFO("server.loading", "Guldan server stopped.");
}

uint64 Guldan::NextContext()
{
    return ++last_context;
}