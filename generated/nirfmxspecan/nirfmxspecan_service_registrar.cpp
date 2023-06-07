
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Service registrar implementation for the NI-RFMXSPECAN Metadata
//---------------------------------------------------------------------
#include "nirfmxspecan_library.h"

#include <grpcpp/server_builder.h>

#include "nirfmxspecan_service.h"
#include "nirfmxspecan_service_registrar.h"

namespace nirfmxspecan_grpc {

namespace {
struct LibraryAndService {
  LibraryAndService(
    const std::shared_ptr<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>& resource_repository,
    const std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>& vi_session_resource_repository,
    const NiRFmxSpecAnFeatureToggles& feature_toggles)
      : library(std::make_shared<NiRFmxSpecAnLibrary>()),
      service(std::make_shared<NiRFmxSpecAnService>(
        library,
        resource_repository,
        vi_session_resource_repository,
        feature_toggles)) {
  }
  std::shared_ptr<NiRFmxSpecAnLibrary> library;
  std::shared_ptr<NiRFmxSpecAnService> service;
};
}

std::shared_ptr<void> register_service(
  grpc::ServerBuilder& builder,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>& resource_repository,
  const std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>& vi_session_resource_repository,
  const nidevice_grpc::FeatureToggles& feature_toggles)
{
  auto toggles = NiRFmxSpecAnFeatureToggles(feature_toggles);

  if (toggles.is_enabled)
  {
    auto library_and_service_ptr = std::make_shared<LibraryAndService>(
      resource_repository,
      vi_session_resource_repository,
      toggles);
    auto& service = library_and_service_ptr->service;
    builder.RegisterService(service.get());
    return library_and_service_ptr;
  }

  return {};
}

} // nirfmxspecan_grpc
