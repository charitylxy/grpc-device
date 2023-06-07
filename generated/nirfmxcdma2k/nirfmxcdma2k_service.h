
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
  using LibrarySharedPtr = std::shared_ptr<NiRFmxCDMA2kLibraryInterface>;
  using ResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<niRFmxInstrHandle>>;
  using ViSessionResourceRepositorySharedPtr = std::shared_ptr<nidevice_grpc::SessionResourceRepository<ViSession>>;

  NiRFmxCDMA2kService(
    LibrarySharedPtr library,
    ResourceRepositorySharedPtr resource_repository,
    ViSessionResourceRepositorySharedPtr vi_session_resource_repository,
    const NiRFmxCDMA2kFeatureToggles& feature_toggles = {});
  virtual ~NiRFmxCDMA2kService();

  ::grpc::Status ACPCfgAveraging(::grpc::ServerContext* context, const ACPCfgAveragingRequest* request, ACPCfgAveragingResponse* response) override;
  ::grpc::Status ACPCfgMeasurementMethod(::grpc::ServerContext* context, const ACPCfgMeasurementMethodRequest* request, ACPCfgMeasurementMethodResponse* response) override;
  ::grpc::Status ACPCfgNoiseCompensationEnabled(::grpc::ServerContext* context, const ACPCfgNoiseCompensationEnabledRequest* request, ACPCfgNoiseCompensationEnabledResponse* response) override;
  ::grpc::Status ACPCfgNumberOfOffsets(::grpc::ServerContext* context, const ACPCfgNumberOfOffsetsRequest* request, ACPCfgNumberOfOffsetsResponse* response) override;
  ::grpc::Status ACPCfgRBWFilter(::grpc::ServerContext* context, const ACPCfgRBWFilterRequest* request, ACPCfgRBWFilterResponse* response) override;
  ::grpc::Status ACPCfgSweepTime(::grpc::ServerContext* context, const ACPCfgSweepTimeRequest* request, ACPCfgSweepTimeResponse* response) override;
  ::grpc::Status ACPFetchAbsolutePowersTrace(::grpc::ServerContext* context, const ACPFetchAbsolutePowersTraceRequest* request, ACPFetchAbsolutePowersTraceResponse* response) override;
  ::grpc::Status ACPFetchCarrierAbsolutePower(::grpc::ServerContext* context, const ACPFetchCarrierAbsolutePowerRequest* request, ACPFetchCarrierAbsolutePowerResponse* response) override;
  ::grpc::Status ACPFetchOffsetMeasurement(::grpc::ServerContext* context, const ACPFetchOffsetMeasurementRequest* request, ACPFetchOffsetMeasurementResponse* response) override;
  ::grpc::Status ACPFetchOffsetMeasurementArray(::grpc::ServerContext* context, const ACPFetchOffsetMeasurementArrayRequest* request, ACPFetchOffsetMeasurementArrayResponse* response) override;
  ::grpc::Status ACPFetchRelativePowersTrace(::grpc::ServerContext* context, const ACPFetchRelativePowersTraceRequest* request, ACPFetchRelativePowersTraceResponse* response) override;
  ::grpc::Status ACPFetchSpectrum(::grpc::ServerContext* context, const ACPFetchSpectrumRequest* request, ACPFetchSpectrumResponse* response) override;
  ::grpc::Status AbortMeasurements(::grpc::ServerContext* context, const AbortMeasurementsRequest* request, AbortMeasurementsResponse* response) override;
  ::grpc::Status AnalyzeIQ1Waveform(::grpc::ServerContext* context, const AnalyzeIQ1WaveformRequest* request, AnalyzeIQ1WaveformResponse* response) override;
  ::grpc::Status AnalyzeSpectrum1Waveform(::grpc::ServerContext* context, const AnalyzeSpectrum1WaveformRequest* request, AnalyzeSpectrum1WaveformResponse* response) override;
  ::grpc::Status AutoLevel(::grpc::ServerContext* context, const AutoLevelRequest* request, AutoLevelResponse* response) override;
  ::grpc::Status BuildChannelString(::grpc::ServerContext* context, const BuildChannelStringRequest* request, BuildChannelStringResponse* response) override;
  ::grpc::Status BuildOffsetString(::grpc::ServerContext* context, const BuildOffsetStringRequest* request, BuildOffsetStringResponse* response) override;
  ::grpc::Status BuildSignalString(::grpc::ServerContext* context, const BuildSignalStringRequest* request, BuildSignalStringResponse* response) override;
  ::grpc::Status CDACfgMeasurementChannel(::grpc::ServerContext* context, const CDACfgMeasurementChannelRequest* request, CDACfgMeasurementChannelResponse* response) override;
  ::grpc::Status CDACfgPowerUnit(::grpc::ServerContext* context, const CDACfgPowerUnitRequest* request, CDACfgPowerUnitResponse* response) override;
  ::grpc::Status CDACfgSynchronizationModeAndInterval(::grpc::ServerContext* context, const CDACfgSynchronizationModeAndIntervalRequest* request, CDACfgSynchronizationModeAndIntervalResponse* response) override;
  ::grpc::Status CDAFetchCodeDomainIAndQPower(::grpc::ServerContext* context, const CDAFetchCodeDomainIAndQPowerRequest* request, CDAFetchCodeDomainIAndQPowerResponse* response) override;
  ::grpc::Status CDAFetchCodeDomainIAndQPowerTrace(::grpc::ServerContext* context, const CDAFetchCodeDomainIAndQPowerTraceRequest* request, CDAFetchCodeDomainIAndQPowerTraceResponse* response) override;
  ::grpc::Status CDAFetchCodeDomainPower(::grpc::ServerContext* context, const CDAFetchCodeDomainPowerRequest* request, CDAFetchCodeDomainPowerResponse* response) override;
  ::grpc::Status CDAFetchIQImpairments(::grpc::ServerContext* context, const CDAFetchIQImpairmentsRequest* request, CDAFetchIQImpairmentsResponse* response) override;
  ::grpc::Status CDAFetchSymbolConstellationTrace(::grpc::ServerContext* context, const CDAFetchSymbolConstellationTraceRequest* request, CDAFetchSymbolConstellationTraceResponse* response) override;
  ::grpc::Status CDAFetchSymbolEVM(::grpc::ServerContext* context, const CDAFetchSymbolEVMRequest* request, CDAFetchSymbolEVMResponse* response) override;
  ::grpc::Status CDAFetchSymbolEVMTrace(::grpc::ServerContext* context, const CDAFetchSymbolEVMTraceRequest* request, CDAFetchSymbolEVMTraceResponse* response) override;
  ::grpc::Status CDAFetchSymbolMagnitudeErrorTrace(::grpc::ServerContext* context, const CDAFetchSymbolMagnitudeErrorTraceRequest* request, CDAFetchSymbolMagnitudeErrorTraceResponse* response) override;
  ::grpc::Status CDAFetchSymbolPhaseErrorTrace(::grpc::ServerContext* context, const CDAFetchSymbolPhaseErrorTraceRequest* request, CDAFetchSymbolPhaseErrorTraceResponse* response) override;
  ::grpc::Status CDAFetchSymbolPowerTrace(::grpc::ServerContext* context, const CDAFetchSymbolPowerTraceRequest* request, CDAFetchSymbolPowerTraceResponse* response) override;
  ::grpc::Status CHPCfgAveraging(::grpc::ServerContext* context, const CHPCfgAveragingRequest* request, CHPCfgAveragingResponse* response) override;
  ::grpc::Status CHPCfgRBWFilter(::grpc::ServerContext* context, const CHPCfgRBWFilterRequest* request, CHPCfgRBWFilterResponse* response) override;
  ::grpc::Status CHPCfgSweepTime(::grpc::ServerContext* context, const CHPCfgSweepTimeRequest* request, CHPCfgSweepTimeResponse* response) override;
  ::grpc::Status CHPFetchCarrierAbsolutePower(::grpc::ServerContext* context, const CHPFetchCarrierAbsolutePowerRequest* request, CHPFetchCarrierAbsolutePowerResponse* response) override;
  ::grpc::Status CHPFetchSpectrum(::grpc::ServerContext* context, const CHPFetchSpectrumRequest* request, CHPFetchSpectrumResponse* response) override;
  ::grpc::Status CfgBandClass(::grpc::ServerContext* context, const CfgBandClassRequest* request, CfgBandClassResponse* response) override;
  ::grpc::Status CfgChannelConfigurationMode(::grpc::ServerContext* context, const CfgChannelConfigurationModeRequest* request, CfgChannelConfigurationModeResponse* response) override;
  ::grpc::Status CfgDigitalEdgeTrigger(::grpc::ServerContext* context, const CfgDigitalEdgeTriggerRequest* request, CfgDigitalEdgeTriggerResponse* response) override;
  ::grpc::Status CfgExternalAttenuation(::grpc::ServerContext* context, const CfgExternalAttenuationRequest* request, CfgExternalAttenuationResponse* response) override;
  ::grpc::Status CfgFrequency(::grpc::ServerContext* context, const CfgFrequencyRequest* request, CfgFrequencyResponse* response) override;
  ::grpc::Status CfgFrequencyChannelNumber(::grpc::ServerContext* context, const CfgFrequencyChannelNumberRequest* request, CfgFrequencyChannelNumberResponse* response) override;
  ::grpc::Status CfgFrequencyReference(::grpc::ServerContext* context, const CfgFrequencyReferenceRequest* request, CfgFrequencyReferenceResponse* response) override;
  ::grpc::Status CfgIQPowerEdgeTrigger(::grpc::ServerContext* context, const CfgIQPowerEdgeTriggerRequest* request, CfgIQPowerEdgeTriggerResponse* response) override;
  ::grpc::Status CfgMechanicalAttenuation(::grpc::ServerContext* context, const CfgMechanicalAttenuationRequest* request, CfgMechanicalAttenuationResponse* response) override;
  ::grpc::Status CfgNumberOfChannels(::grpc::ServerContext* context, const CfgNumberOfChannelsRequest* request, CfgNumberOfChannelsResponse* response) override;
  ::grpc::Status CfgRF(::grpc::ServerContext* context, const CfgRFRequest* request, CfgRFResponse* response) override;
  ::grpc::Status CfgRFAttenuation(::grpc::ServerContext* context, const CfgRFAttenuationRequest* request, CfgRFAttenuationResponse* response) override;
  ::grpc::Status CfgRadioConfiguration(::grpc::ServerContext* context, const CfgRadioConfigurationRequest* request, CfgRadioConfigurationResponse* response) override;
  ::grpc::Status CfgReferenceLevel(::grpc::ServerContext* context, const CfgReferenceLevelRequest* request, CfgReferenceLevelResponse* response) override;
  ::grpc::Status CfgSoftwareEdgeTrigger(::grpc::ServerContext* context, const CfgSoftwareEdgeTriggerRequest* request, CfgSoftwareEdgeTriggerResponse* response) override;
  ::grpc::Status CfgUplinkSpreading(::grpc::ServerContext* context, const CfgUplinkSpreadingRequest* request, CfgUplinkSpreadingResponse* response) override;
  ::grpc::Status CfgUserDefinedChannel(::grpc::ServerContext* context, const CfgUserDefinedChannelRequest* request, CfgUserDefinedChannelResponse* response) override;
  ::grpc::Status CfgUserDefinedChannelArray(::grpc::ServerContext* context, const CfgUserDefinedChannelArrayRequest* request, CfgUserDefinedChannelArrayResponse* response) override;
  ::grpc::Status CheckMeasurementStatus(::grpc::ServerContext* context, const CheckMeasurementStatusRequest* request, CheckMeasurementStatusResponse* response) override;
  ::grpc::Status ClearAllNamedResults(::grpc::ServerContext* context, const ClearAllNamedResultsRequest* request, ClearAllNamedResultsResponse* response) override;
  ::grpc::Status ClearNamedResult(::grpc::ServerContext* context, const ClearNamedResultRequest* request, ClearNamedResultResponse* response) override;
  ::grpc::Status CloneSignalConfiguration(::grpc::ServerContext* context, const CloneSignalConfigurationRequest* request, CloneSignalConfigurationResponse* response) override;
  ::grpc::Status Close(::grpc::ServerContext* context, const CloseRequest* request, CloseResponse* response) override;
  ::grpc::Status Commit(::grpc::ServerContext* context, const CommitRequest* request, CommitResponse* response) override;
  ::grpc::Status CreateSignalConfiguration(::grpc::ServerContext* context, const CreateSignalConfigurationRequest* request, CreateSignalConfigurationResponse* response) override;
  ::grpc::Status DeleteSignalConfiguration(::grpc::ServerContext* context, const DeleteSignalConfigurationRequest* request, DeleteSignalConfigurationResponse* response) override;
  ::grpc::Status DisableTrigger(::grpc::ServerContext* context, const DisableTriggerRequest* request, DisableTriggerResponse* response) override;
  ::grpc::Status GetAllNamedResultNames(::grpc::ServerContext* context, const GetAllNamedResultNamesRequest* request, GetAllNamedResultNamesResponse* response) override;
  ::grpc::Status GetAttributeF32(::grpc::ServerContext* context, const GetAttributeF32Request* request, GetAttributeF32Response* response) override;
  ::grpc::Status GetAttributeF32Array(::grpc::ServerContext* context, const GetAttributeF32ArrayRequest* request, GetAttributeF32ArrayResponse* response) override;
  ::grpc::Status GetAttributeF64(::grpc::ServerContext* context, const GetAttributeF64Request* request, GetAttributeF64Response* response) override;
  ::grpc::Status GetAttributeF64Array(::grpc::ServerContext* context, const GetAttributeF64ArrayRequest* request, GetAttributeF64ArrayResponse* response) override;
  ::grpc::Status GetAttributeI16(::grpc::ServerContext* context, const GetAttributeI16Request* request, GetAttributeI16Response* response) override;
  ::grpc::Status GetAttributeI32(::grpc::ServerContext* context, const GetAttributeI32Request* request, GetAttributeI32Response* response) override;
  ::grpc::Status GetAttributeI32Array(::grpc::ServerContext* context, const GetAttributeI32ArrayRequest* request, GetAttributeI32ArrayResponse* response) override;
  ::grpc::Status GetAttributeI64(::grpc::ServerContext* context, const GetAttributeI64Request* request, GetAttributeI64Response* response) override;
  ::grpc::Status GetAttributeI64Array(::grpc::ServerContext* context, const GetAttributeI64ArrayRequest* request, GetAttributeI64ArrayResponse* response) override;
  ::grpc::Status GetAttributeI8(::grpc::ServerContext* context, const GetAttributeI8Request* request, GetAttributeI8Response* response) override;
  ::grpc::Status GetAttributeI8Array(::grpc::ServerContext* context, const GetAttributeI8ArrayRequest* request, GetAttributeI8ArrayResponse* response) override;
  ::grpc::Status GetAttributeNIComplexDoubleArray(::grpc::ServerContext* context, const GetAttributeNIComplexDoubleArrayRequest* request, GetAttributeNIComplexDoubleArrayResponse* response) override;
  ::grpc::Status GetAttributeNIComplexSingleArray(::grpc::ServerContext* context, const GetAttributeNIComplexSingleArrayRequest* request, GetAttributeNIComplexSingleArrayResponse* response) override;
  ::grpc::Status GetAttributeString(::grpc::ServerContext* context, const GetAttributeStringRequest* request, GetAttributeStringResponse* response) override;
  ::grpc::Status GetAttributeU16(::grpc::ServerContext* context, const GetAttributeU16Request* request, GetAttributeU16Response* response) override;
  ::grpc::Status GetAttributeU32(::grpc::ServerContext* context, const GetAttributeU32Request* request, GetAttributeU32Response* response) override;
  ::grpc::Status GetAttributeU32Array(::grpc::ServerContext* context, const GetAttributeU32ArrayRequest* request, GetAttributeU32ArrayResponse* response) override;
  ::grpc::Status GetAttributeU64Array(::grpc::ServerContext* context, const GetAttributeU64ArrayRequest* request, GetAttributeU64ArrayResponse* response) override;
  ::grpc::Status GetAttributeU8(::grpc::ServerContext* context, const GetAttributeU8Request* request, GetAttributeU8Response* response) override;
  ::grpc::Status GetAttributeU8Array(::grpc::ServerContext* context, const GetAttributeU8ArrayRequest* request, GetAttributeU8ArrayResponse* response) override;
  ::grpc::Status GetError(::grpc::ServerContext* context, const GetErrorRequest* request, GetErrorResponse* response) override;
  ::grpc::Status GetErrorString(::grpc::ServerContext* context, const GetErrorStringRequest* request, GetErrorStringResponse* response) override;
  ::grpc::Status Initialize(::grpc::ServerContext* context, const InitializeRequest* request, InitializeResponse* response) override;
  ::grpc::Status InitializeFromNIRFSASession(::grpc::ServerContext* context, const InitializeFromNIRFSASessionRequest* request, InitializeFromNIRFSASessionResponse* response) override;
  ::grpc::Status Initiate(::grpc::ServerContext* context, const InitiateRequest* request, InitiateResponse* response) override;
  ::grpc::Status ModAccCfgSynchronizationModeAndInterval(::grpc::ServerContext* context, const ModAccCfgSynchronizationModeAndIntervalRequest* request, ModAccCfgSynchronizationModeAndIntervalResponse* response) override;
  ::grpc::Status ModAccFetchConstellationTrace(::grpc::ServerContext* context, const ModAccFetchConstellationTraceRequest* request, ModAccFetchConstellationTraceResponse* response) override;
  ::grpc::Status ModAccFetchDetectedChannel(::grpc::ServerContext* context, const ModAccFetchDetectedChannelRequest* request, ModAccFetchDetectedChannelResponse* response) override;
  ::grpc::Status ModAccFetchDetectedChannelArray(::grpc::ServerContext* context, const ModAccFetchDetectedChannelArrayRequest* request, ModAccFetchDetectedChannelArrayResponse* response) override;
  ::grpc::Status ModAccFetchEVM(::grpc::ServerContext* context, const ModAccFetchEVMRequest* request, ModAccFetchEVMResponse* response) override;
  ::grpc::Status ModAccFetchEVMTrace(::grpc::ServerContext* context, const ModAccFetchEVMTraceRequest* request, ModAccFetchEVMTraceResponse* response) override;
  ::grpc::Status ModAccFetchIQImpairments(::grpc::ServerContext* context, const ModAccFetchIQImpairmentsRequest* request, ModAccFetchIQImpairmentsResponse* response) override;
  ::grpc::Status ModAccFetchMagnitudeErrorTrace(::grpc::ServerContext* context, const ModAccFetchMagnitudeErrorTraceRequest* request, ModAccFetchMagnitudeErrorTraceResponse* response) override;
  ::grpc::Status ModAccFetchNumberOfDetectedChannels(::grpc::ServerContext* context, const ModAccFetchNumberOfDetectedChannelsRequest* request, ModAccFetchNumberOfDetectedChannelsResponse* response) override;
  ::grpc::Status ModAccFetchPeakActiveCDE(::grpc::ServerContext* context, const ModAccFetchPeakActiveCDERequest* request, ModAccFetchPeakActiveCDEResponse* response) override;
  ::grpc::Status ModAccFetchPeakCDE(::grpc::ServerContext* context, const ModAccFetchPeakCDERequest* request, ModAccFetchPeakCDEResponse* response) override;
  ::grpc::Status ModAccFetchPhaseErrorTrace(::grpc::ServerContext* context, const ModAccFetchPhaseErrorTraceRequest* request, ModAccFetchPhaseErrorTraceResponse* response) override;
  ::grpc::Status OBWCfgAveraging(::grpc::ServerContext* context, const OBWCfgAveragingRequest* request, OBWCfgAveragingResponse* response) override;
  ::grpc::Status OBWCfgRBWFilter(::grpc::ServerContext* context, const OBWCfgRBWFilterRequest* request, OBWCfgRBWFilterResponse* response) override;
  ::grpc::Status OBWCfgSweepTime(::grpc::ServerContext* context, const OBWCfgSweepTimeRequest* request, OBWCfgSweepTimeResponse* response) override;
  ::grpc::Status OBWFetchMeasurement(::grpc::ServerContext* context, const OBWFetchMeasurementRequest* request, OBWFetchMeasurementResponse* response) override;
  ::grpc::Status OBWFetchSpectrum(::grpc::ServerContext* context, const OBWFetchSpectrumRequest* request, OBWFetchSpectrumResponse* response) override;
  ::grpc::Status QEVMCfgAveraging(::grpc::ServerContext* context, const QEVMCfgAveragingRequest* request, QEVMCfgAveragingResponse* response) override;
  ::grpc::Status QEVMCfgMeasurementLength(::grpc::ServerContext* context, const QEVMCfgMeasurementLengthRequest* request, QEVMCfgMeasurementLengthResponse* response) override;
  ::grpc::Status QEVMFetchConstellationTrace(::grpc::ServerContext* context, const QEVMFetchConstellationTraceRequest* request, QEVMFetchConstellationTraceResponse* response) override;
  ::grpc::Status QEVMFetchEVM(::grpc::ServerContext* context, const QEVMFetchEVMRequest* request, QEVMFetchEVMResponse* response) override;
  ::grpc::Status QEVMFetchEVMTrace(::grpc::ServerContext* context, const QEVMFetchEVMTraceRequest* request, QEVMFetchEVMTraceResponse* response) override;
  ::grpc::Status QEVMFetchIQImpairments(::grpc::ServerContext* context, const QEVMFetchIQImpairmentsRequest* request, QEVMFetchIQImpairmentsResponse* response) override;
  ::grpc::Status QEVMFetchMagnitudeErrorTrace(::grpc::ServerContext* context, const QEVMFetchMagnitudeErrorTraceRequest* request, QEVMFetchMagnitudeErrorTraceResponse* response) override;
  ::grpc::Status QEVMFetchPhaseErrorTrace(::grpc::ServerContext* context, const QEVMFetchPhaseErrorTraceRequest* request, QEVMFetchPhaseErrorTraceResponse* response) override;
  ::grpc::Status ResetAttribute(::grpc::ServerContext* context, const ResetAttributeRequest* request, ResetAttributeResponse* response) override;
  ::grpc::Status ResetToDefault(::grpc::ServerContext* context, const ResetToDefaultRequest* request, ResetToDefaultResponse* response) override;
  ::grpc::Status SEMCfgAveraging(::grpc::ServerContext* context, const SEMCfgAveragingRequest* request, SEMCfgAveragingResponse* response) override;
  ::grpc::Status SEMCfgSweepTime(::grpc::ServerContext* context, const SEMCfgSweepTimeRequest* request, SEMCfgSweepTimeResponse* response) override;
  ::grpc::Status SEMFetchCarrierAbsoluteIntegratedPower(::grpc::ServerContext* context, const SEMFetchCarrierAbsoluteIntegratedPowerRequest* request, SEMFetchCarrierAbsoluteIntegratedPowerResponse* response) override;
  ::grpc::Status SEMFetchLowerOffsetMargin(::grpc::ServerContext* context, const SEMFetchLowerOffsetMarginRequest* request, SEMFetchLowerOffsetMarginResponse* response) override;
  ::grpc::Status SEMFetchLowerOffsetMarginArray(::grpc::ServerContext* context, const SEMFetchLowerOffsetMarginArrayRequest* request, SEMFetchLowerOffsetMarginArrayResponse* response) override;
  ::grpc::Status SEMFetchLowerOffsetPower(::grpc::ServerContext* context, const SEMFetchLowerOffsetPowerRequest* request, SEMFetchLowerOffsetPowerResponse* response) override;
  ::grpc::Status SEMFetchLowerOffsetPowerArray(::grpc::ServerContext* context, const SEMFetchLowerOffsetPowerArrayRequest* request, SEMFetchLowerOffsetPowerArrayResponse* response) override;
  ::grpc::Status SEMFetchMeasurementStatus(::grpc::ServerContext* context, const SEMFetchMeasurementStatusRequest* request, SEMFetchMeasurementStatusResponse* response) override;
  ::grpc::Status SEMFetchSpectrum(::grpc::ServerContext* context, const SEMFetchSpectrumRequest* request, SEMFetchSpectrumResponse* response) override;
  ::grpc::Status SEMFetchUpperOffsetMargin(::grpc::ServerContext* context, const SEMFetchUpperOffsetMarginRequest* request, SEMFetchUpperOffsetMarginResponse* response) override;
  ::grpc::Status SEMFetchUpperOffsetMarginArray(::grpc::ServerContext* context, const SEMFetchUpperOffsetMarginArrayRequest* request, SEMFetchUpperOffsetMarginArrayResponse* response) override;
  ::grpc::Status SEMFetchUpperOffsetPower(::grpc::ServerContext* context, const SEMFetchUpperOffsetPowerRequest* request, SEMFetchUpperOffsetPowerResponse* response) override;
  ::grpc::Status SEMFetchUpperOffsetPowerArray(::grpc::ServerContext* context, const SEMFetchUpperOffsetPowerArrayRequest* request, SEMFetchUpperOffsetPowerArrayResponse* response) override;
  ::grpc::Status SelectMeasurements(::grpc::ServerContext* context, const SelectMeasurementsRequest* request, SelectMeasurementsResponse* response) override;
  ::grpc::Status SendSoftwareEdgeTrigger(::grpc::ServerContext* context, const SendSoftwareEdgeTriggerRequest* request, SendSoftwareEdgeTriggerResponse* response) override;
  ::grpc::Status SetAttributeF32(::grpc::ServerContext* context, const SetAttributeF32Request* request, SetAttributeF32Response* response) override;
  ::grpc::Status SetAttributeF32Array(::grpc::ServerContext* context, const SetAttributeF32ArrayRequest* request, SetAttributeF32ArrayResponse* response) override;
  ::grpc::Status SetAttributeF64(::grpc::ServerContext* context, const SetAttributeF64Request* request, SetAttributeF64Response* response) override;
  ::grpc::Status SetAttributeF64Array(::grpc::ServerContext* context, const SetAttributeF64ArrayRequest* request, SetAttributeF64ArrayResponse* response) override;
  ::grpc::Status SetAttributeI16(::grpc::ServerContext* context, const SetAttributeI16Request* request, SetAttributeI16Response* response) override;
  ::grpc::Status SetAttributeI32(::grpc::ServerContext* context, const SetAttributeI32Request* request, SetAttributeI32Response* response) override;
  ::grpc::Status SetAttributeI32Array(::grpc::ServerContext* context, const SetAttributeI32ArrayRequest* request, SetAttributeI32ArrayResponse* response) override;
  ::grpc::Status SetAttributeI64(::grpc::ServerContext* context, const SetAttributeI64Request* request, SetAttributeI64Response* response) override;
  ::grpc::Status SetAttributeI64Array(::grpc::ServerContext* context, const SetAttributeI64ArrayRequest* request, SetAttributeI64ArrayResponse* response) override;
  ::grpc::Status SetAttributeI8(::grpc::ServerContext* context, const SetAttributeI8Request* request, SetAttributeI8Response* response) override;
  ::grpc::Status SetAttributeI8Array(::grpc::ServerContext* context, const SetAttributeI8ArrayRequest* request, SetAttributeI8ArrayResponse* response) override;
  ::grpc::Status SetAttributeNIComplexDoubleArray(::grpc::ServerContext* context, const SetAttributeNIComplexDoubleArrayRequest* request, SetAttributeNIComplexDoubleArrayResponse* response) override;
  ::grpc::Status SetAttributeNIComplexSingleArray(::grpc::ServerContext* context, const SetAttributeNIComplexSingleArrayRequest* request, SetAttributeNIComplexSingleArrayResponse* response) override;
  ::grpc::Status SetAttributeString(::grpc::ServerContext* context, const SetAttributeStringRequest* request, SetAttributeStringResponse* response) override;
  ::grpc::Status SetAttributeU16(::grpc::ServerContext* context, const SetAttributeU16Request* request, SetAttributeU16Response* response) override;
  ::grpc::Status SetAttributeU32(::grpc::ServerContext* context, const SetAttributeU32Request* request, SetAttributeU32Response* response) override;
  ::grpc::Status SetAttributeU32Array(::grpc::ServerContext* context, const SetAttributeU32ArrayRequest* request, SetAttributeU32ArrayResponse* response) override;
  ::grpc::Status SetAttributeU64Array(::grpc::ServerContext* context, const SetAttributeU64ArrayRequest* request, SetAttributeU64ArrayResponse* response) override;
  ::grpc::Status SetAttributeU8(::grpc::ServerContext* context, const SetAttributeU8Request* request, SetAttributeU8Response* response) override;
  ::grpc::Status SetAttributeU8Array(::grpc::ServerContext* context, const SetAttributeU8ArrayRequest* request, SetAttributeU8ArrayResponse* response) override;
  ::grpc::Status SlotPhaseCfgSynchronizationModeAndInterval(::grpc::ServerContext* context, const SlotPhaseCfgSynchronizationModeAndIntervalRequest* request, SlotPhaseCfgSynchronizationModeAndIntervalResponse* response) override;
  ::grpc::Status SlotPhaseFetchChipPhaseErrorLinearFitTrace(::grpc::ServerContext* context, const SlotPhaseFetchChipPhaseErrorLinearFitTraceRequest* request, SlotPhaseFetchChipPhaseErrorLinearFitTraceResponse* response) override;
  ::grpc::Status SlotPhaseFetchChipPhaseErrorTrace(::grpc::ServerContext* context, const SlotPhaseFetchChipPhaseErrorTraceRequest* request, SlotPhaseFetchChipPhaseErrorTraceResponse* response) override;
  ::grpc::Status SlotPhaseFetchMaximumPhaseDiscontinuity(::grpc::ServerContext* context, const SlotPhaseFetchMaximumPhaseDiscontinuityRequest* request, SlotPhaseFetchMaximumPhaseDiscontinuityResponse* response) override;
  ::grpc::Status SlotPhaseFetchPhaseDiscontinuities(::grpc::ServerContext* context, const SlotPhaseFetchPhaseDiscontinuitiesRequest* request, SlotPhaseFetchPhaseDiscontinuitiesResponse* response) override;
  ::grpc::Status SlotPowerCfgSynchronizationModeAndInterval(::grpc::ServerContext* context, const SlotPowerCfgSynchronizationModeAndIntervalRequest* request, SlotPowerCfgSynchronizationModeAndIntervalResponse* response) override;
  ::grpc::Status SlotPowerFetchPowers(::grpc::ServerContext* context, const SlotPowerFetchPowersRequest* request, SlotPowerFetchPowersResponse* response) override;
  ::grpc::Status WaitForAcquisitionComplete(::grpc::ServerContext* context, const WaitForAcquisitionCompleteRequest* request, WaitForAcquisitionCompleteResponse* response) override;
  ::grpc::Status WaitForMeasurementComplete(::grpc::ServerContext* context, const WaitForMeasurementCompleteRequest* request, WaitForMeasurementCompleteResponse* response) override;
private:
  LibrarySharedPtr library_;
  ResourceRepositorySharedPtr session_repository_;
  ViSessionResourceRepositorySharedPtr vi_session_resource_repository_;
  ::grpc::Status ConvertApiErrorStatusForNiRFmxInstrHandle(::grpc::ServerContextBase* context, int32_t status, niRFmxInstrHandle instrumentHandle);
  std::map<std::int32_t, std::string> digitaledgetriggersource_input_map_ { {1, "PFI0"},{2, "PFI1"},{3, "PXI_Trig0"},{4, "PXI_Trig1"},{5, "PXI_Trig2"},{6, "PXI_Trig3"},{7, "PXI_Trig4"},{8, "PXI_Trig5"},{9, "PXI_Trig6"},{10, "PXI_Trig7"},{11, "PXI_STAR"},{12, "PXIe_DStarB"},{13, "TimerEvent"}, };
  std::map<std::string, std::int32_t> digitaledgetriggersource_output_map_ { {"PFI0", 1},{"PFI1", 2},{"PXI_Trig0", 3},{"PXI_Trig1", 4},{"PXI_Trig2", 5},{"PXI_Trig3", 6},{"PXI_Trig4", 7},{"PXI_Trig5", 8},{"PXI_Trig6", 9},{"PXI_Trig7", 10},{"PXI_STAR", 11},{"PXIe_DStarB", 12},{"TimerEvent", 13}, };
  std::map<std::int32_t, std::string> frequencyreferencesource_input_map_ { {1, "OnboardClock"},{2, "RefIn"},{3, "PXI_Clk"},{4, "ClkIn"}, };
  std::map<std::string, std::int32_t> frequencyreferencesource_output_map_ { {"OnboardClock", 1},{"RefIn", 2},{"PXI_Clk", 3},{"ClkIn", 4}, };
  std::map<std::int32_t, std::string> nirfmxcdma2kstringattributevaluesmapped_input_map_ { {1, "PFI0"},{2, "PFI1"},{3, "PXI_Trig0"},{4, "PXI_Trig1"},{5, "PXI_Trig2"},{6, "PXI_Trig3"},{7, "PXI_Trig4"},{8, "PXI_Trig5"},{9, "PXI_Trig6"},{10, "PXI_Trig7"},{11, "PXI_STAR"},{12, "PXIe_DStarB"},{13, "TimerEvent"}, };
  std::map<std::string, std::int32_t> nirfmxcdma2kstringattributevaluesmapped_output_map_ { {"PFI0", 1},{"PFI1", 2},{"PXI_Trig0", 3},{"PXI_Trig1", 4},{"PXI_Trig2", 5},{"PXI_Trig3", 6},{"PXI_Trig4", 7},{"PXI_Trig5", 8},{"PXI_Trig6", 9},{"PXI_Trig7", 10},{"PXI_STAR", 11},{"PXIe_DStarB", 12},{"TimerEvent", 13}, };

  NiRFmxCDMA2kFeatureToggles feature_toggles_;
};

} // namespace nirfmxcdma2k_grpc

#endif  // NIRFMXCDMA2K_GRPC_SERVICE_H
