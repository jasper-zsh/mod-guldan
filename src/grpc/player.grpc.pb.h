// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: player.proto
#ifndef GRPC_player_2eproto__INCLUDED
#define GRPC_player_2eproto__INCLUDED

#include "player.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace guldan {

class Player final {
 public:
  static constexpr char const* service_full_name() {
    return "guldan.Player";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status IsTwoHandUsed(::grpc::ClientContext* context, const ::guldan::EmptyRequest& request, ::guldan::BoolResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::guldan::BoolResponse>> AsyncIsTwoHandUsed(::grpc::ClientContext* context, const ::guldan::EmptyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::guldan::BoolResponse>>(AsyncIsTwoHandUsedRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::guldan::BoolResponse>> PrepareAsyncIsTwoHandUsed(::grpc::ClientContext* context, const ::guldan::EmptyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::guldan::BoolResponse>>(PrepareAsyncIsTwoHandUsedRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void IsTwoHandUsed(::grpc::ClientContext* context, const ::guldan::EmptyRequest* request, ::guldan::BoolResponse* response, std::function<void(::grpc::Status)>) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::guldan::BoolResponse>* AsyncIsTwoHandUsedRaw(::grpc::ClientContext* context, const ::guldan::EmptyRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::guldan::BoolResponse>* PrepareAsyncIsTwoHandUsedRaw(::grpc::ClientContext* context, const ::guldan::EmptyRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status IsTwoHandUsed(::grpc::ClientContext* context, const ::guldan::EmptyRequest& request, ::guldan::BoolResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::guldan::BoolResponse>> AsyncIsTwoHandUsed(::grpc::ClientContext* context, const ::guldan::EmptyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::guldan::BoolResponse>>(AsyncIsTwoHandUsedRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::guldan::BoolResponse>> PrepareAsyncIsTwoHandUsed(::grpc::ClientContext* context, const ::guldan::EmptyRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::guldan::BoolResponse>>(PrepareAsyncIsTwoHandUsedRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void IsTwoHandUsed(::grpc::ClientContext* context, const ::guldan::EmptyRequest* request, ::guldan::BoolResponse* response, std::function<void(::grpc::Status)>) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::guldan::BoolResponse>* AsyncIsTwoHandUsedRaw(::grpc::ClientContext* context, const ::guldan::EmptyRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::guldan::BoolResponse>* PrepareAsyncIsTwoHandUsedRaw(::grpc::ClientContext* context, const ::guldan::EmptyRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_IsTwoHandUsed_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status IsTwoHandUsed(::grpc::ServerContext* context, const ::guldan::EmptyRequest* request, ::guldan::BoolResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_IsTwoHandUsed : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_IsTwoHandUsed() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_IsTwoHandUsed() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status IsTwoHandUsed(::grpc::ServerContext* context, const ::guldan::EmptyRequest* request, ::guldan::BoolResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestIsTwoHandUsed(::grpc::ServerContext* context, ::guldan::EmptyRequest* request, ::grpc::ServerAsyncResponseWriter< ::guldan::BoolResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_IsTwoHandUsed<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_IsTwoHandUsed : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_IsTwoHandUsed() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_IsTwoHandUsed() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status IsTwoHandUsed(::grpc::ServerContext* context, const ::guldan::EmptyRequest* request, ::guldan::BoolResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_IsTwoHandUsed : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_IsTwoHandUsed() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_IsTwoHandUsed() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status IsTwoHandUsed(::grpc::ServerContext* context, const ::guldan::EmptyRequest* request, ::guldan::BoolResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestIsTwoHandUsed(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_IsTwoHandUsed : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_IsTwoHandUsed() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::guldan::EmptyRequest, ::guldan::BoolResponse>(std::bind(&WithStreamedUnaryMethod_IsTwoHandUsed<BaseClass>::StreamedIsTwoHandUsed, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_IsTwoHandUsed() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status IsTwoHandUsed(::grpc::ServerContext* context, const ::guldan::EmptyRequest* request, ::guldan::BoolResponse* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedIsTwoHandUsed(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::guldan::EmptyRequest,::guldan::BoolResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_IsTwoHandUsed<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_IsTwoHandUsed<Service > StreamedService;
};

}  // namespace guldan


#endif  // GRPC_player_2eproto__INCLUDED
