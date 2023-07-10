#ifndef _GULDAN_GPLAYER_H
#define _GULDAN_GPLAYER_H

#include "Player.h"
#include "../grpc/player.grpc.pb.h"
#include "ObjectContainer.h"

using namespace grpc;

class GPlayer final : public guldan::Player::Service
{
public:
    Status IsTwoHandUsed(ServerContext* context, const ::guldan::EmptyRequest* request, ::guldan::BoolResponse* response) override;
private:
    ObjectContainer<Player*> c;
};

#endif
