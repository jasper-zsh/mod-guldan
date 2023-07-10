#ifndef _GULDAN_GULDANENGINE_H
#define _GULDAN_GULDANENGINE_H

#include "Common.h"
#include "grpc/guldan.grpc.pb.h"

class Guldan
{
public:
    Guldan();
    ~Guldan();

    static Guldan* Instance()
    {
        static Guldan guldan;
        return &guldan;
    }

    uint64 NextContext();
    void Start();
    void Stop();

private:

    Guldan(Guldan const&) = delete;
    Guldan& operator=(const Guldan&) = delete;

    std::unique_ptr<grpc::Server> server;

    uint64 last_context = 0;
};

#define sGuldan Guldan::Instance()

#endif
