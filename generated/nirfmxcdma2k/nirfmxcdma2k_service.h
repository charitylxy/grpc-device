
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service header for the NI-rfmxcdma2k Metadata
//---------------------------------------------------------------------
#ifndef NIRFMXCDMA2K_GRPC_SERVICE_H
#define NIRFMXCDMA2K_GRPC_SERVICE_H

#include <nirfmxcdma2k.grpc.pb.h>
#include <condition_variable>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <map>
#include <server/converters.h>
#include <server/feature_toggles.h>
#include <server/session_resource_repository.h>
#include <server/shared_library.h>
#include <server/exceptions.h>

#include "nirfmxcdma2k_library_interface.h"

namespace nirfmxcdma2k_grpc {

struct NiRFmxCDMA2kFeatureToggles
{
  using CodeReadiness = nidevice_grpc::FeatureToggles::CodeReadiness;
  NiRFmxCDMA2kFeatureToggles(const nidevice_grpc::FeatureToggles& feature_toggles = {});

  bool is_enabled;
};

class NiRFmxCDMA2kService final : public NiRFmxCDMA2k::Service {
public:
  using ResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>;

  NiRFmxCDMA2kService(
    NiRFmxCDMA2kLibraryInterface* library,
    ResourceRepositorySharedPtr resource_repository,
    const NiRFmxCDMA2kFeatureToggles& feature_toggles = {});
  virtual ~NiRFmxCDMA2kService();
  
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
  ::grpc::Status GetError(::grpc::ServerContext* context, const GetErrorRequest* request, GetErrorResponse* response) override;
  ::grpc::Status GetErrorString(::grpc::ServerContext* context, const GetErrorStringRequest* request, GetErrorStringResponse* response) override;
  ::grpc::Status Initialize(::grpc::ServerContext* context, const InitializeRequest* request, InitializeResponse* response) override;
private:
  NiRFmxCDMA2kLibraryInterface* library_;
  ResourceRepositorySharedPtr session_repository_;
  ::grpc::Status ConvertApiErrorStatusForNiRFmxInstrHandle(::grpc::ServerContext* context, int32_t status, niRFmxInstrHandle instrumentHandle);

  NiRFmxCDMA2kFeatureToggles feature_toggles_;
};

} // namespace nirfmxcdma2k_grpc

#endif  // NIRFMXCDMA2K_GRPC_SERVICE_H