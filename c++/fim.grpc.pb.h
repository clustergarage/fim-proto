// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: fim.proto
#ifndef GRPC_fim_2eproto__INCLUDED
#define GRPC_fim_2eproto__INCLUDED

#include "fim.pb.h"

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

namespace fim {

class Fimd final {
 public:
  static constexpr char const* service_full_name() {
    return "fim.Fimd";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status CreateWatch(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::fim::FimdHandle* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::fim::FimdHandle>> AsyncCreateWatch(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::fim::FimdHandle>>(AsyncCreateWatchRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::fim::FimdHandle>> PrepareAsyncCreateWatch(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::fim::FimdHandle>>(PrepareAsyncCreateWatchRaw(context, request, cq));
    }
    virtual ::grpc::Status DestroyWatch(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::fim::Empty* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::fim::Empty>> AsyncDestroyWatch(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::fim::Empty>>(AsyncDestroyWatchRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::fim::Empty>> PrepareAsyncDestroyWatch(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::fim::Empty>>(PrepareAsyncDestroyWatchRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::fim::FimdHandle>* AsyncCreateWatchRaw(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::fim::FimdHandle>* PrepareAsyncCreateWatchRaw(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::fim::Empty>* AsyncDestroyWatchRaw(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::fim::Empty>* PrepareAsyncDestroyWatchRaw(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status CreateWatch(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::fim::FimdHandle* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::fim::FimdHandle>> AsyncCreateWatch(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::fim::FimdHandle>>(AsyncCreateWatchRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::fim::FimdHandle>> PrepareAsyncCreateWatch(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::fim::FimdHandle>>(PrepareAsyncCreateWatchRaw(context, request, cq));
    }
    ::grpc::Status DestroyWatch(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::fim::Empty* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::fim::Empty>> AsyncDestroyWatch(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::fim::Empty>>(AsyncDestroyWatchRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::fim::Empty>> PrepareAsyncDestroyWatch(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::fim::Empty>>(PrepareAsyncDestroyWatchRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::fim::FimdHandle>* AsyncCreateWatchRaw(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::fim::FimdHandle>* PrepareAsyncCreateWatchRaw(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::fim::Empty>* AsyncDestroyWatchRaw(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::fim::Empty>* PrepareAsyncDestroyWatchRaw(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_CreateWatch_;
    const ::grpc::internal::RpcMethod rpcmethod_DestroyWatch_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status CreateWatch(::grpc::ServerContext* context, const ::fim::FimdConfig* request, ::fim::FimdHandle* response);
    virtual ::grpc::Status DestroyWatch(::grpc::ServerContext* context, const ::fim::FimdConfig* request, ::fim::Empty* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_CreateWatch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_CreateWatch() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_CreateWatch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateWatch(::grpc::ServerContext* context, const ::fim::FimdConfig* request, ::fim::FimdHandle* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCreateWatch(::grpc::ServerContext* context, ::fim::FimdConfig* request, ::grpc::ServerAsyncResponseWriter< ::fim::FimdHandle>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_DestroyWatch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_DestroyWatch() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_DestroyWatch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DestroyWatch(::grpc::ServerContext* context, const ::fim::FimdConfig* request, ::fim::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDestroyWatch(::grpc::ServerContext* context, ::fim::FimdConfig* request, ::grpc::ServerAsyncResponseWriter< ::fim::Empty>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_CreateWatch<WithAsyncMethod_DestroyWatch<Service > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_CreateWatch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_CreateWatch() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_CreateWatch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CreateWatch(::grpc::ServerContext* context, const ::fim::FimdConfig* request, ::fim::FimdHandle* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_DestroyWatch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_DestroyWatch() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_DestroyWatch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DestroyWatch(::grpc::ServerContext* context, const ::fim::FimdConfig* request, ::fim::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_CreateWatch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_CreateWatch() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::fim::FimdConfig, ::fim::FimdHandle>(std::bind(&WithStreamedUnaryMethod_CreateWatch<BaseClass>::StreamedCreateWatch, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_CreateWatch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status CreateWatch(::grpc::ServerContext* context, const ::fim::FimdConfig* request, ::fim::FimdHandle* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedCreateWatch(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::fim::FimdConfig,::fim::FimdHandle>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_DestroyWatch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_DestroyWatch() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::fim::FimdConfig, ::fim::Empty>(std::bind(&WithStreamedUnaryMethod_DestroyWatch<BaseClass>::StreamedDestroyWatch, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_DestroyWatch() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status DestroyWatch(::grpc::ServerContext* context, const ::fim::FimdConfig* request, ::fim::Empty* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedDestroyWatch(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::fim::FimdConfig,::fim::Empty>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_CreateWatch<WithStreamedUnaryMethod_DestroyWatch<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_CreateWatch<WithStreamedUnaryMethod_DestroyWatch<Service > > StreamedService;
};

}  // namespace fim


#endif  // GRPC_fim_2eproto__INCLUDED
