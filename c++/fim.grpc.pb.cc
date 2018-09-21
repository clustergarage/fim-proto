// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: fim.proto

#include "fim.pb.h"
#include "fim.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace fim {

static const char* Fimd_method_names[] = {
  "/fim.Fimd/CreateWatch",
  "/fim.Fimd/DestroyWatch",
  "/fim.Fimd/GetWatchState",
};

std::unique_ptr< Fimd::Stub> Fimd::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Fimd::Stub> stub(new Fimd::Stub(channel));
  return stub;
}

Fimd::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateWatch_(Fimd_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DestroyWatch_(Fimd_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetWatchState_(Fimd_method_names[2], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::Status Fimd::Stub::CreateWatch(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::fim::FimdHandle* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateWatch_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::fim::FimdHandle>* Fimd::Stub::AsyncCreateWatchRaw(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::fim::FimdHandle>::Create(channel_.get(), cq, rpcmethod_CreateWatch_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::fim::FimdHandle>* Fimd::Stub::PrepareAsyncCreateWatchRaw(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::fim::FimdHandle>::Create(channel_.get(), cq, rpcmethod_CreateWatch_, context, request, false);
}

::grpc::Status Fimd::Stub::DestroyWatch(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::fim::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DestroyWatch_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::fim::Empty>* Fimd::Stub::AsyncDestroyWatchRaw(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::fim::Empty>::Create(channel_.get(), cq, rpcmethod_DestroyWatch_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::fim::Empty>* Fimd::Stub::PrepareAsyncDestroyWatchRaw(::grpc::ClientContext* context, const ::fim::FimdConfig& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::fim::Empty>::Create(channel_.get(), cq, rpcmethod_DestroyWatch_, context, request, false);
}

::grpc::ClientReader< ::fim::FimdHandle>* Fimd::Stub::GetWatchStateRaw(::grpc::ClientContext* context, const ::fim::Empty& request) {
  return ::grpc::internal::ClientReaderFactory< ::fim::FimdHandle>::Create(channel_.get(), rpcmethod_GetWatchState_, context, request);
}

::grpc::ClientAsyncReader< ::fim::FimdHandle>* Fimd::Stub::AsyncGetWatchStateRaw(::grpc::ClientContext* context, const ::fim::Empty& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::fim::FimdHandle>::Create(channel_.get(), cq, rpcmethod_GetWatchState_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::fim::FimdHandle>* Fimd::Stub::PrepareAsyncGetWatchStateRaw(::grpc::ClientContext* context, const ::fim::Empty& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::fim::FimdHandle>::Create(channel_.get(), cq, rpcmethod_GetWatchState_, context, request, false, nullptr);
}

Fimd::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Fimd_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Fimd::Service, ::fim::FimdConfig, ::fim::FimdHandle>(
          std::mem_fn(&Fimd::Service::CreateWatch), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Fimd_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Fimd::Service, ::fim::FimdConfig, ::fim::Empty>(
          std::mem_fn(&Fimd::Service::DestroyWatch), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Fimd_method_names[2],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< Fimd::Service, ::fim::Empty, ::fim::FimdHandle>(
          std::mem_fn(&Fimd::Service::GetWatchState), this)));
}

Fimd::Service::~Service() {
}

::grpc::Status Fimd::Service::CreateWatch(::grpc::ServerContext* context, const ::fim::FimdConfig* request, ::fim::FimdHandle* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Fimd::Service::DestroyWatch(::grpc::ServerContext* context, const ::fim::FimdConfig* request, ::fim::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Fimd::Service::GetWatchState(::grpc::ServerContext* context, const ::fim::Empty* request, ::grpc::ServerWriter< ::fim::FimdHandle>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace fim

