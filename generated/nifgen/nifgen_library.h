//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Real implementation of LibraryInterface for NI-FGEN
//---------------------------------------------------------------------
#ifndef NIFGEN_GRPC_LIBRARY_H
#define NIFGEN_GRPC_LIBRARY_H

#include "nifgen_library_interface.h"

#include <server/shared_library.h>

namespace nifgen_grpc {

class NiFgenLibrary : public nifgen_grpc::NiFgenLibraryInterface {
 public:
  NiFgenLibrary();
  virtual ~NiFgenLibrary();

  ::grpc::Status check_function_exists(std::string functionName);
  ViStatus AbortGeneration(ViSession vi);
  ViStatus AdjustSampleClockRelativeDelay(ViSession vi, ViReal64 adjustmentTime);
  ViStatus AllocateNamedWaveform(ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 waveformSize);
  ViStatus AllocateWaveform(ViSession vi, ViConstString channelName, ViInt32 waveformSize, ViInt32* waveformHandle);
  ViStatus CheckAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue);
  ViStatus CheckAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue);
  ViStatus CheckAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue);
  ViStatus CheckAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue);
  ViStatus CheckAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue);
  ViStatus CheckAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue);
  ViStatus ClearArbMemory(ViSession vi);
  ViStatus ClearArbSequence(ViSession vi, ViInt32 sequenceHandle);
  ViStatus ClearArbWaveform(ViSession vi, ViInt32 waveformHandle);
  ViStatus ClearError(ViSession vi);
  ViStatus ClearFreqList(ViSession vi, ViInt32 frequencyListHandle);
  ViStatus ClearInterchangeWarnings(ViSession vi);
  ViStatus ClearUserStandardWaveform(ViSession vi, ViConstString channelName);
  ViStatus Close(ViSession vi);
  ViStatus Commit(ViSession vi);
  ViStatus ConfigureAmplitude(ViSession vi, ViConstString channelName, ViReal64 amplitude);
  ViStatus ConfigureArbSequence(ViSession vi, ViConstString channelName, ViInt32 sequenceHandle, ViReal64 gain, ViReal64 offset);
  ViStatus ConfigureArbWaveform(ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViReal64 gain, ViReal64 offset);
  ViStatus ConfigureChannels(ViSession vi, ViConstString channels);
  ViStatus ConfigureClockMode(ViSession vi, ViInt32 clockMode);
  ViStatus ConfigureCustomFIRFilterCoefficients(ViSession vi, ViConstString channelName, ViInt32 numberOfCoefficients, ViReal64 coefficientsArray[]);
  ViStatus ConfigureDigitalEdgeScriptTrigger(ViSession vi, ViConstString triggerId, ViConstString source, ViInt32 edge);
  ViStatus ConfigureDigitalEdgeStartTrigger(ViSession vi, ViConstString source, ViInt32 edge);
  ViStatus ConfigureDigitalLevelScriptTrigger(ViSession vi, ViConstString triggerId, ViConstString source, ViInt32 triggerWhen);
  ViStatus ConfigureFreqList(ViSession vi, ViConstString channelName, ViInt32 frequencyListHandle, ViReal64 amplitude, ViReal64 dcOffset, ViReal64 startPhase);
  ViStatus ConfigureFrequency(ViSession vi, ViConstString channelName, ViReal64 frequency);
  ViStatus ConfigureOperationMode(ViSession vi, ViConstString channelName, ViInt32 operationMode);
  ViStatus ConfigureOutputEnabled(ViSession vi, ViConstString channelName, ViBoolean enabled);
  ViStatus ConfigureOutputImpedance(ViSession vi, ViConstString channelName, ViReal64 impedance);
  ViStatus ConfigureOutputMode(ViSession vi, ViInt32 outputMode);
  ViStatus ConfigureP2PEndpointFullnessStartTrigger(ViSession vi, ViInt32 p2pEndpointFullnessLevel);
  ViStatus ConfigureReferenceClock(ViSession vi, ViConstString referenceClockSource, ViReal64 referenceClockFrequency);
  ViStatus ConfigureSampleClockSource(ViSession vi, ViConstString sampleClockSource);
  ViStatus ConfigureSampleRate(ViSession vi, ViReal64 sampleRate);
  ViStatus ConfigureSoftwareEdgeScriptTrigger(ViSession vi, ViConstString triggerId);
  ViStatus ConfigureSoftwareEdgeStartTrigger(ViSession vi);
  ViStatus ConfigureStandardWaveform(ViSession vi, ViConstString channelName, ViInt32 waveform, ViReal64 amplitude, ViReal64 dcOffset, ViReal64 frequency, ViReal64 startPhase);
  ViStatus ConfigureSynchronization(ViSession vi, ViConstString channelName, ViInt32 synchronizationSource);
  ViStatus ConfigureTriggerMode(ViSession vi, ViConstString channelName, ViInt32 triggerMode);
  ViStatus CreateAdvancedArbSequence(ViSession vi, ViInt32 sequenceLength, ViInt32 waveformHandlesArray[], ViInt32 loopCountsArray[], ViInt32 sampleCountsArray[], ViInt32 markerLocationArray[], ViInt32 coercedMarkersArray[], ViInt32* sequenceHandle);
  ViStatus CreateArbSequence(ViSession vi, ViInt32 sequenceLength, ViInt32 waveformHandlesArray[], ViInt32 loopCountsArray[], ViInt32* sequenceHandle);
  ViStatus CreateFreqList(ViSession vi, ViInt32 waveform, ViInt32 frequencyListLength, ViReal64 frequencyArray[], ViReal64 durationArray[], ViInt32* frequencyListHandle);
  ViStatus CreateWaveformComplexF64(ViSession vi, ViConstString channelName, ViInt32 numberOfSamples, NIComplexNumber_struct waveformDataArray[], ViInt32* waveformHandle);
  ViStatus CreateWaveformF64(ViSession vi, ViConstString channelName, ViInt32 waveformSize, ViReal64 waveformDataArray[], ViInt32* waveformHandle);
  ViStatus CreateWaveformFromFileF64(ViSession vi, ViConstString channelName, ViConstString fileName, ViInt32 byteOrder, ViInt32* waveformHandle);
  ViStatus CreateWaveformFromFileHWS(ViSession vi, ViConstString channelName, ViConstString fileName, ViBoolean useRateFromWaveform, ViBoolean useGainAndOffsetFromWaveform, ViInt32* waveformHandle);
  ViStatus CreateWaveformFromFileI16(ViSession vi, ViConstString channelName, ViConstString fileName, ViInt32 byteOrder, ViInt32* waveformHandle);
  ViStatus CreateWaveformI16(ViSession vi, ViConstString channelName, ViInt32 waveformSize, ViInt16 waveformDataArray[], ViInt32* waveformHandle);
  ViStatus DefineUserStandardWaveform(ViSession vi, ViConstString channelName, ViInt32 waveformSize, ViReal64 waveformDataArray[]);
  ViStatus DeleteNamedWaveform(ViSession vi, ViConstString channelName, ViConstString waveformName);
  ViStatus DeleteScript(ViSession vi, ViConstString channelName, ViConstString scriptName);
  ViStatus Disable(ViSession vi);
  ViStatus DisableAnalogFilter(ViSession vi, ViConstString channelName);
  ViStatus DisableDigitalFilter(ViSession vi, ViConstString channelName);
  ViStatus DisableDigitalPatterning(ViSession vi, ViConstString channelName);
  ViStatus DisableScriptTrigger(ViSession vi, ViConstString triggerId);
  ViStatus DisableStartTrigger(ViSession vi);
  ViStatus EnableAnalogFilter(ViSession vi, ViConstString channelName, ViReal64 filterCorrectionFrequency);
  ViStatus EnableDigitalFilter(ViSession vi, ViConstString channelName);
  ViStatus EnableDigitalPatterning(ViSession vi, ViConstString channelName);
  ViStatus ErrorHandler(ViSession vi, ViStatus errorCode, ViChar errorMessage[256]);
  ViStatus ErrorMessage(ViSession vi, ViStatus errorCode, ViChar errorMessage[256]);
  ViStatus ErrorQuery(ViSession vi, ViInt32* errorCode, ViChar errorMessage[256]);
  ViStatus ExportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]);
  ViStatus ExportAttributeConfigurationFile(ViSession vi, ViConstString filePath);
  ViStatus ExportSignal(ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal);
  ViStatus GetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* attributeValue);
  ViStatus GetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* attributeValue);
  ViStatus GetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* attributeValue);
  ViStatus GetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* attributeValue);
  ViStatus GetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession* attributeValue);
  ViStatus GetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 arraySize, ViChar attributeValue[]);
  ViStatus GetChannelName(ViSession vi, ViInt32 index, ViInt32 bufferSize, ViChar channelString[]);
  ViStatus GetError(ViSession vi, ViStatus* errorCode, ViInt32 errorDescriptionBufferSize, ViChar errorDescription[]);
  ViStatus GetExtCalLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute);
  ViStatus GetExtCalLastTemp(ViSession vi, ViReal64* temperature);
  ViStatus GetExtCalRecommendedInterval(ViSession vi, ViInt32* months);
  ViStatus GetFIRFilterCoefficients(ViSession vi, ViConstString channelName, ViInt32 arraySize, ViReal64 coefficientsArray[], ViInt32* numberOfCoefficientsRead);
  ViStatus GetHardwareState(ViSession vi, ViInt32* state);
  ViStatus GetNextCoercionRecord(ViSession vi, ViInt32 bufferSize, ViChar coercionRecord[]);
  ViStatus GetNextInterchangeWarning(ViSession vi, ViInt32 bufferSize, ViChar interchangeWarning[]);
  ViStatus GetSelfCalLastDateAndTime(ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute);
  ViStatus GetSelfCalLastTemp(ViSession vi, ViReal64* temperature);
  ViStatus GetSelfCalSupported(ViSession vi, ViBoolean* selfCalSupported);
  ViStatus GetStreamEndpointHandle(ViSession vi, ViConstString streamEndpoint, ViUInt32* readerHandle);
  ViStatus ImportAttributeConfigurationBuffer(ViSession vi, ViInt32 sizeInBytes, ViInt8 configuration[]);
  ViStatus ImportAttributeConfigurationFile(ViSession vi, ViConstString filePath);
  ViStatus Init(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* vi);
  ViStatus InitWithOptions(ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViString optionString, ViSession* vi);
  ViStatus InitializeWithChannels(ViRsrc resourceName, ViString channelName, ViBoolean resetDevice, ViString optionString, ViSession* vi);
  ViStatus InitiateGeneration(ViSession vi);
  ViStatus InvalidateAllAttributes(ViSession vi);
  ViStatus IsDone(ViSession vi, ViBoolean* done);
  ViStatus LockSession(ViSession vi, ViBoolean* callerHasLock);
  ViStatus ManualEnableP2PStream(ViSession vi, ViConstString endpointName);
  ViStatus QueryArbSeqCapabilities(ViSession vi, ViInt32* maximumNumberOfSequences, ViInt32* minimumSequenceLength, ViInt32* maximumSequenceLength, ViInt32* maximumLoopCount);
  ViStatus QueryArbWfmCapabilities(ViSession vi, ViInt32* maximumNumberOfWaveforms, ViInt32* waveformQuantum, ViInt32* minimumWaveformSize, ViInt32* maximumWaveformSize);
  ViStatus QueryFreqListCapabilities(ViSession vi, ViInt32* maximumNumberOfFreqLists, ViInt32* minimumFrequencyListLength, ViInt32* maximumFrequencyListLength, ViReal64* minimumFrequencyListDuration, ViReal64* maximumFrequencyListDuration, ViReal64* frequencyListDurationQuantum);
  ViStatus ReadCurrentTemperature(ViSession vi, ViReal64* temperature);
  ViStatus Reset(ViSession vi);
  ViStatus ResetAttribute(ViSession vi, ViConstString channelName, ViAttr attributeId);
  ViStatus ResetDevice(ViSession vi);
  ViStatus ResetInterchangeCheck(ViSession vi);
  ViStatus ResetWithDefaults(ViSession vi);
  ViStatus RevisionQuery(ViSession vi, ViChar instrumentDriverRevision[256], ViChar firmwareRevision[256]);
  ViStatus RouteSignalOut(ViSession vi, ViConstString channelName, ViInt32 routeSignalFrom, ViInt32 routeSignalTo);
  ViStatus SelfCal(ViSession vi);
  ViStatus SelfTest(ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[256]);
  ViStatus SendSoftwareEdgeTrigger(ViSession vi, ViInt32 trigger, ViConstString triggerId);
  ViStatus SetAttributeViBoolean(ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean attributeValue);
  ViStatus SetAttributeViInt32(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 attributeValue);
  ViStatus SetAttributeViInt64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 attributeValue);
  ViStatus SetAttributeViReal64(ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 attributeValue);
  ViStatus SetAttributeViSession(ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession attributeValue);
  ViStatus SetAttributeViString(ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString attributeValue);
  ViStatus SetNamedWaveformNextWritePosition(ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 relativeTo, ViInt32 offset);
  ViStatus SetWaveformNextWritePosition(ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViInt32 relativeTo, ViInt32 offset);
  ViStatus UnlockSession(ViSession vi, ViBoolean* callerHasLock);
  ViStatus WaitUntilDone(ViSession vi, ViInt32 maxTime);
  ViStatus WriteBinary16Waveform(ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViInt32 size, ViInt16 data[]);
  ViStatus WriteComplexBinary16Waveform(ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViInt32 size, NIComplexI16_struct data[]);
  ViStatus WriteNamedWaveformComplexF64(ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 size, NIComplexNumber_struct data[]);
  ViStatus WriteNamedWaveformComplexI16(ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 size, NIComplexI16_struct data[]);
  ViStatus WriteNamedWaveformF64(ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 size, ViReal64 data[]);
  ViStatus WriteNamedWaveformI16(ViSession vi, ViConstString channelName, ViConstString waveformName, ViInt32 size, ViInt16 data[]);
  ViStatus WriteP2PEndpointI16(ViSession vi, ViConstString endpointName, ViInt32 numberOfSamples, ViInt16 endpointData[]);
  ViStatus WriteScript(ViSession vi, ViConstString channelName, ViConstString script);
  ViStatus WriteWaveform(ViSession vi, ViConstString channelName, ViInt32 waveformHandle, ViInt32 size, ViReal64 data[]);
  ViStatus WriteWaveformComplexF64(ViSession vi, ViConstString channelName, ViInt32 numberOfSamples, NIComplexNumber_struct data[], ViInt32 waveformHandle);
  ViStatus SetRuntimeEnvironment(ViConstString environment, ViConstString environmentVersion, ViConstString reserved1, ViConstString reserved2);

 private:
  using AbortGenerationPtr = decltype(&niFgen_AbortGeneration);
  using AdjustSampleClockRelativeDelayPtr = decltype(&niFgen_AdjustSampleClockRelativeDelay);
  using AllocateNamedWaveformPtr = decltype(&niFgen_AllocateNamedWaveform);
  using AllocateWaveformPtr = decltype(&niFgen_AllocateWaveform);
  using CheckAttributeViBooleanPtr = decltype(&niFgen_CheckAttributeViBoolean);
  using CheckAttributeViInt32Ptr = decltype(&niFgen_CheckAttributeViInt32);
  using CheckAttributeViInt64Ptr = decltype(&niFgen_CheckAttributeViInt64);
  using CheckAttributeViReal64Ptr = decltype(&niFgen_CheckAttributeViReal64);
  using CheckAttributeViSessionPtr = decltype(&niFgen_CheckAttributeViSession);
  using CheckAttributeViStringPtr = decltype(&niFgen_CheckAttributeViString);
  using ClearArbMemoryPtr = decltype(&niFgen_ClearArbMemory);
  using ClearArbSequencePtr = decltype(&niFgen_ClearArbSequence);
  using ClearArbWaveformPtr = decltype(&niFgen_ClearArbWaveform);
  using ClearErrorPtr = decltype(&niFgen_ClearError);
  using ClearFreqListPtr = decltype(&niFgen_ClearFreqList);
  using ClearInterchangeWarningsPtr = decltype(&niFgen_ClearInterchangeWarnings);
  using ClearUserStandardWaveformPtr = decltype(&niFgen_ClearUserStandardWaveform);
  using ClosePtr = decltype(&niFgen_close);
  using CommitPtr = decltype(&niFgen_Commit);
  using ConfigureAmplitudePtr = decltype(&niFgen_ConfigureAmplitude);
  using ConfigureArbSequencePtr = decltype(&niFgen_ConfigureArbSequence);
  using ConfigureArbWaveformPtr = decltype(&niFgen_ConfigureArbWaveform);
  using ConfigureChannelsPtr = decltype(&niFgen_ConfigureChannels);
  using ConfigureClockModePtr = decltype(&niFgen_ConfigureClockMode);
  using ConfigureCustomFIRFilterCoefficientsPtr = decltype(&niFgen_ConfigureCustomFIRFilterCoefficients);
  using ConfigureDigitalEdgeScriptTriggerPtr = decltype(&niFgen_ConfigureDigitalEdgeScriptTrigger);
  using ConfigureDigitalEdgeStartTriggerPtr = decltype(&niFgen_ConfigureDigitalEdgeStartTrigger);
  using ConfigureDigitalLevelScriptTriggerPtr = decltype(&niFgen_ConfigureDigitalLevelScriptTrigger);
  using ConfigureFreqListPtr = decltype(&niFgen_ConfigureFreqList);
  using ConfigureFrequencyPtr = decltype(&niFgen_ConfigureFrequency);
  using ConfigureOperationModePtr = decltype(&niFgen_ConfigureOperationMode);
  using ConfigureOutputEnabledPtr = decltype(&niFgen_ConfigureOutputEnabled);
  using ConfigureOutputImpedancePtr = decltype(&niFgen_ConfigureOutputImpedance);
  using ConfigureOutputModePtr = decltype(&niFgen_ConfigureOutputMode);
  using ConfigureP2PEndpointFullnessStartTriggerPtr = decltype(&niFgen_ConfigureP2PEndpointFullnessStartTrigger);
  using ConfigureReferenceClockPtr = decltype(&niFgen_ConfigureReferenceClock);
  using ConfigureSampleClockSourcePtr = decltype(&niFgen_ConfigureSampleClockSource);
  using ConfigureSampleRatePtr = decltype(&niFgen_ConfigureSampleRate);
  using ConfigureSoftwareEdgeScriptTriggerPtr = decltype(&niFgen_ConfigureSoftwareEdgeScriptTrigger);
  using ConfigureSoftwareEdgeStartTriggerPtr = decltype(&niFgen_ConfigureSoftwareEdgeStartTrigger);
  using ConfigureStandardWaveformPtr = decltype(&niFgen_ConfigureStandardWaveform);
  using ConfigureSynchronizationPtr = decltype(&niFgen_ConfigureSynchronization);
  using ConfigureTriggerModePtr = decltype(&niFgen_ConfigureTriggerMode);
  using CreateAdvancedArbSequencePtr = decltype(&niFgen_CreateAdvancedArbSequence);
  using CreateArbSequencePtr = decltype(&niFgen_CreateArbSequence);
  using CreateFreqListPtr = decltype(&niFgen_CreateFreqList);
  using CreateWaveformComplexF64Ptr = decltype(&niFgen_CreateWaveformComplexF64);
  using CreateWaveformF64Ptr = decltype(&niFgen_CreateWaveformF64);
  using CreateWaveformFromFileF64Ptr = decltype(&niFgen_CreateWaveformFromFileF64);
  using CreateWaveformFromFileHWSPtr = decltype(&niFgen_CreateWaveformFromFileHWS);
  using CreateWaveformFromFileI16Ptr = decltype(&niFgen_CreateWaveformFromFileI16);
  using CreateWaveformI16Ptr = decltype(&niFgen_CreateWaveformI16);
  using DefineUserStandardWaveformPtr = decltype(&niFgen_DefineUserStandardWaveform);
  using DeleteNamedWaveformPtr = decltype(&niFgen_DeleteNamedWaveform);
  using DeleteScriptPtr = decltype(&niFgen_DeleteScript);
  using DisablePtr = decltype(&niFgen_Disable);
  using DisableAnalogFilterPtr = decltype(&niFgen_DisableAnalogFilter);
  using DisableDigitalFilterPtr = decltype(&niFgen_DisableDigitalFilter);
  using DisableDigitalPatterningPtr = decltype(&niFgen_DisableDigitalPatterning);
  using DisableScriptTriggerPtr = decltype(&niFgen_DisableScriptTrigger);
  using DisableStartTriggerPtr = decltype(&niFgen_DisableStartTrigger);
  using EnableAnalogFilterPtr = decltype(&niFgen_EnableAnalogFilter);
  using EnableDigitalFilterPtr = decltype(&niFgen_EnableDigitalFilter);
  using EnableDigitalPatterningPtr = decltype(&niFgen_EnableDigitalPatterning);
  using ErrorHandlerPtr = decltype(&niFgen_ErrorHandler);
  using ErrorMessagePtr = decltype(&niFgen_error_message);
  using ErrorQueryPtr = decltype(&niFgen_error_query);
  using ExportAttributeConfigurationBufferPtr = decltype(&niFgen_ExportAttributeConfigurationBuffer);
  using ExportAttributeConfigurationFilePtr = decltype(&niFgen_ExportAttributeConfigurationFile);
  using ExportSignalPtr = decltype(&niFgen_ExportSignal);
  using GetAttributeViBooleanPtr = decltype(&niFgen_GetAttributeViBoolean);
  using GetAttributeViInt32Ptr = decltype(&niFgen_GetAttributeViInt32);
  using GetAttributeViInt64Ptr = decltype(&niFgen_GetAttributeViInt64);
  using GetAttributeViReal64Ptr = decltype(&niFgen_GetAttributeViReal64);
  using GetAttributeViSessionPtr = decltype(&niFgen_GetAttributeViSession);
  using GetAttributeViStringPtr = decltype(&niFgen_GetAttributeViString);
  using GetChannelNamePtr = decltype(&niFgen_GetChannelName);
  using GetErrorPtr = decltype(&niFgen_GetError);
  using GetExtCalLastDateAndTimePtr = decltype(&niFgen_GetExtCalLastDateAndTime);
  using GetExtCalLastTempPtr = decltype(&niFgen_GetExtCalLastTemp);
  using GetExtCalRecommendedIntervalPtr = decltype(&niFgen_GetExtCalRecommendedInterval);
  using GetFIRFilterCoefficientsPtr = decltype(&niFgen_GetFIRFilterCoefficients);
  using GetHardwareStatePtr = decltype(&niFgen_GetHardwareState);
  using GetNextCoercionRecordPtr = decltype(&niFgen_GetNextCoercionRecord);
  using GetNextInterchangeWarningPtr = decltype(&niFgen_GetNextInterchangeWarning);
  using GetSelfCalLastDateAndTimePtr = decltype(&niFgen_GetSelfCalLastDateAndTime);
  using GetSelfCalLastTempPtr = decltype(&niFgen_GetSelfCalLastTemp);
  using GetSelfCalSupportedPtr = decltype(&niFgen_GetSelfCalSupported);
  using GetStreamEndpointHandlePtr = decltype(&niFgen_GetStreamEndpointHandle);
  using ImportAttributeConfigurationBufferPtr = decltype(&niFgen_ImportAttributeConfigurationBuffer);
  using ImportAttributeConfigurationFilePtr = decltype(&niFgen_ImportAttributeConfigurationFile);
  using InitPtr = decltype(&niFgen_init);
  using InitWithOptionsPtr = decltype(&niFgen_InitWithOptions);
  using InitializeWithChannelsPtr = decltype(&niFgen_InitializeWithChannels);
  using InitiateGenerationPtr = decltype(&niFgen_InitiateGeneration);
  using InvalidateAllAttributesPtr = decltype(&niFgen_InvalidateAllAttributes);
  using IsDonePtr = decltype(&niFgen_IsDone);
  using LockSessionPtr = ViStatus (*)(ViSession vi, ViBoolean* callerHasLock);
  using ManualEnableP2PStreamPtr = decltype(&niFgen_ManualEnableP2PStream);
  using QueryArbSeqCapabilitiesPtr = decltype(&niFgen_QueryArbSeqCapabilities);
  using QueryArbWfmCapabilitiesPtr = decltype(&niFgen_QueryArbWfmCapabilities);
  using QueryFreqListCapabilitiesPtr = decltype(&niFgen_QueryFreqListCapabilities);
  using ReadCurrentTemperaturePtr = decltype(&niFgen_ReadCurrentTemperature);
  using ResetPtr = decltype(&niFgen_reset);
  using ResetAttributePtr = decltype(&niFgen_ResetAttribute);
  using ResetDevicePtr = decltype(&niFgen_ResetDevice);
  using ResetInterchangeCheckPtr = decltype(&niFgen_ResetInterchangeCheck);
  using ResetWithDefaultsPtr = decltype(&niFgen_ResetWithDefaults);
  using RevisionQueryPtr = decltype(&niFgen_revision_query);
  using RouteSignalOutPtr = decltype(&niFgen_RouteSignalOut);
  using SelfCalPtr = decltype(&niFgen_SelfCal);
  using SelfTestPtr = decltype(&niFgen_self_test);
  using SendSoftwareEdgeTriggerPtr = decltype(&niFgen_SendSoftwareEdgeTrigger);
  using SetAttributeViBooleanPtr = decltype(&niFgen_SetAttributeViBoolean);
  using SetAttributeViInt32Ptr = decltype(&niFgen_SetAttributeViInt32);
  using SetAttributeViInt64Ptr = decltype(&niFgen_SetAttributeViInt64);
  using SetAttributeViReal64Ptr = decltype(&niFgen_SetAttributeViReal64);
  using SetAttributeViSessionPtr = decltype(&niFgen_SetAttributeViSession);
  using SetAttributeViStringPtr = decltype(&niFgen_SetAttributeViString);
  using SetNamedWaveformNextWritePositionPtr = decltype(&niFgen_SetNamedWaveformNextWritePosition);
  using SetWaveformNextWritePositionPtr = decltype(&niFgen_SetWaveformNextWritePosition);
  using UnlockSessionPtr = ViStatus (*)(ViSession vi, ViBoolean* callerHasLock);
  using WaitUntilDonePtr = decltype(&niFgen_WaitUntilDone);
  using WriteBinary16WaveformPtr = decltype(&niFgen_WriteBinary16Waveform);
  using WriteComplexBinary16WaveformPtr = decltype(&niFgen_WriteComplexBinary16Waveform);
  using WriteNamedWaveformComplexF64Ptr = decltype(&niFgen_WriteNamedWaveformComplexF64);
  using WriteNamedWaveformComplexI16Ptr = decltype(&niFgen_WriteNamedWaveformComplexI16);
  using WriteNamedWaveformF64Ptr = decltype(&niFgen_WriteNamedWaveformF64);
  using WriteNamedWaveformI16Ptr = decltype(&niFgen_WriteNamedWaveformI16);
  using WriteP2PEndpointI16Ptr = decltype(&niFgen_WriteP2PEndpointI16);
  using WriteScriptPtr = decltype(&niFgen_WriteScript);
  using WriteWaveformPtr = decltype(&niFgen_WriteWaveform);
  using WriteWaveformComplexF64Ptr = decltype(&niFgen_WriteWaveformComplexF64);
  using SetRuntimeEnvironmentPtr = ViStatus (*)(ViConstString environment, ViConstString environmentVersion, ViConstString reserved1, ViConstString reserved2);

  typedef struct FunctionPointers {
    AbortGenerationPtr AbortGeneration;
    AdjustSampleClockRelativeDelayPtr AdjustSampleClockRelativeDelay;
    AllocateNamedWaveformPtr AllocateNamedWaveform;
    AllocateWaveformPtr AllocateWaveform;
    CheckAttributeViBooleanPtr CheckAttributeViBoolean;
    CheckAttributeViInt32Ptr CheckAttributeViInt32;
    CheckAttributeViInt64Ptr CheckAttributeViInt64;
    CheckAttributeViReal64Ptr CheckAttributeViReal64;
    CheckAttributeViSessionPtr CheckAttributeViSession;
    CheckAttributeViStringPtr CheckAttributeViString;
    ClearArbMemoryPtr ClearArbMemory;
    ClearArbSequencePtr ClearArbSequence;
    ClearArbWaveformPtr ClearArbWaveform;
    ClearErrorPtr ClearError;
    ClearFreqListPtr ClearFreqList;
    ClearInterchangeWarningsPtr ClearInterchangeWarnings;
    ClearUserStandardWaveformPtr ClearUserStandardWaveform;
    ClosePtr Close;
    CommitPtr Commit;
    ConfigureAmplitudePtr ConfigureAmplitude;
    ConfigureArbSequencePtr ConfigureArbSequence;
    ConfigureArbWaveformPtr ConfigureArbWaveform;
    ConfigureChannelsPtr ConfigureChannels;
    ConfigureClockModePtr ConfigureClockMode;
    ConfigureCustomFIRFilterCoefficientsPtr ConfigureCustomFIRFilterCoefficients;
    ConfigureDigitalEdgeScriptTriggerPtr ConfigureDigitalEdgeScriptTrigger;
    ConfigureDigitalEdgeStartTriggerPtr ConfigureDigitalEdgeStartTrigger;
    ConfigureDigitalLevelScriptTriggerPtr ConfigureDigitalLevelScriptTrigger;
    ConfigureFreqListPtr ConfigureFreqList;
    ConfigureFrequencyPtr ConfigureFrequency;
    ConfigureOperationModePtr ConfigureOperationMode;
    ConfigureOutputEnabledPtr ConfigureOutputEnabled;
    ConfigureOutputImpedancePtr ConfigureOutputImpedance;
    ConfigureOutputModePtr ConfigureOutputMode;
    ConfigureP2PEndpointFullnessStartTriggerPtr ConfigureP2PEndpointFullnessStartTrigger;
    ConfigureReferenceClockPtr ConfigureReferenceClock;
    ConfigureSampleClockSourcePtr ConfigureSampleClockSource;
    ConfigureSampleRatePtr ConfigureSampleRate;
    ConfigureSoftwareEdgeScriptTriggerPtr ConfigureSoftwareEdgeScriptTrigger;
    ConfigureSoftwareEdgeStartTriggerPtr ConfigureSoftwareEdgeStartTrigger;
    ConfigureStandardWaveformPtr ConfigureStandardWaveform;
    ConfigureSynchronizationPtr ConfigureSynchronization;
    ConfigureTriggerModePtr ConfigureTriggerMode;
    CreateAdvancedArbSequencePtr CreateAdvancedArbSequence;
    CreateArbSequencePtr CreateArbSequence;
    CreateFreqListPtr CreateFreqList;
    CreateWaveformComplexF64Ptr CreateWaveformComplexF64;
    CreateWaveformF64Ptr CreateWaveformF64;
    CreateWaveformFromFileF64Ptr CreateWaveformFromFileF64;
    CreateWaveformFromFileHWSPtr CreateWaveformFromFileHWS;
    CreateWaveformFromFileI16Ptr CreateWaveformFromFileI16;
    CreateWaveformI16Ptr CreateWaveformI16;
    DefineUserStandardWaveformPtr DefineUserStandardWaveform;
    DeleteNamedWaveformPtr DeleteNamedWaveform;
    DeleteScriptPtr DeleteScript;
    DisablePtr Disable;
    DisableAnalogFilterPtr DisableAnalogFilter;
    DisableDigitalFilterPtr DisableDigitalFilter;
    DisableDigitalPatterningPtr DisableDigitalPatterning;
    DisableScriptTriggerPtr DisableScriptTrigger;
    DisableStartTriggerPtr DisableStartTrigger;
    EnableAnalogFilterPtr EnableAnalogFilter;
    EnableDigitalFilterPtr EnableDigitalFilter;
    EnableDigitalPatterningPtr EnableDigitalPatterning;
    ErrorHandlerPtr ErrorHandler;
    ErrorMessagePtr ErrorMessage;
    ErrorQueryPtr ErrorQuery;
    ExportAttributeConfigurationBufferPtr ExportAttributeConfigurationBuffer;
    ExportAttributeConfigurationFilePtr ExportAttributeConfigurationFile;
    ExportSignalPtr ExportSignal;
    GetAttributeViBooleanPtr GetAttributeViBoolean;
    GetAttributeViInt32Ptr GetAttributeViInt32;
    GetAttributeViInt64Ptr GetAttributeViInt64;
    GetAttributeViReal64Ptr GetAttributeViReal64;
    GetAttributeViSessionPtr GetAttributeViSession;
    GetAttributeViStringPtr GetAttributeViString;
    GetChannelNamePtr GetChannelName;
    GetErrorPtr GetError;
    GetExtCalLastDateAndTimePtr GetExtCalLastDateAndTime;
    GetExtCalLastTempPtr GetExtCalLastTemp;
    GetExtCalRecommendedIntervalPtr GetExtCalRecommendedInterval;
    GetFIRFilterCoefficientsPtr GetFIRFilterCoefficients;
    GetHardwareStatePtr GetHardwareState;
    GetNextCoercionRecordPtr GetNextCoercionRecord;
    GetNextInterchangeWarningPtr GetNextInterchangeWarning;
    GetSelfCalLastDateAndTimePtr GetSelfCalLastDateAndTime;
    GetSelfCalLastTempPtr GetSelfCalLastTemp;
    GetSelfCalSupportedPtr GetSelfCalSupported;
    GetStreamEndpointHandlePtr GetStreamEndpointHandle;
    ImportAttributeConfigurationBufferPtr ImportAttributeConfigurationBuffer;
    ImportAttributeConfigurationFilePtr ImportAttributeConfigurationFile;
    InitPtr Init;
    InitWithOptionsPtr InitWithOptions;
    InitializeWithChannelsPtr InitializeWithChannels;
    InitiateGenerationPtr InitiateGeneration;
    InvalidateAllAttributesPtr InvalidateAllAttributes;
    IsDonePtr IsDone;
    LockSessionPtr LockSession;
    ManualEnableP2PStreamPtr ManualEnableP2PStream;
    QueryArbSeqCapabilitiesPtr QueryArbSeqCapabilities;
    QueryArbWfmCapabilitiesPtr QueryArbWfmCapabilities;
    QueryFreqListCapabilitiesPtr QueryFreqListCapabilities;
    ReadCurrentTemperaturePtr ReadCurrentTemperature;
    ResetPtr Reset;
    ResetAttributePtr ResetAttribute;
    ResetDevicePtr ResetDevice;
    ResetInterchangeCheckPtr ResetInterchangeCheck;
    ResetWithDefaultsPtr ResetWithDefaults;
    RevisionQueryPtr RevisionQuery;
    RouteSignalOutPtr RouteSignalOut;
    SelfCalPtr SelfCal;
    SelfTestPtr SelfTest;
    SendSoftwareEdgeTriggerPtr SendSoftwareEdgeTrigger;
    SetAttributeViBooleanPtr SetAttributeViBoolean;
    SetAttributeViInt32Ptr SetAttributeViInt32;
    SetAttributeViInt64Ptr SetAttributeViInt64;
    SetAttributeViReal64Ptr SetAttributeViReal64;
    SetAttributeViSessionPtr SetAttributeViSession;
    SetAttributeViStringPtr SetAttributeViString;
    SetNamedWaveformNextWritePositionPtr SetNamedWaveformNextWritePosition;
    SetWaveformNextWritePositionPtr SetWaveformNextWritePosition;
    UnlockSessionPtr UnlockSession;
    WaitUntilDonePtr WaitUntilDone;
    WriteBinary16WaveformPtr WriteBinary16Waveform;
    WriteComplexBinary16WaveformPtr WriteComplexBinary16Waveform;
    WriteNamedWaveformComplexF64Ptr WriteNamedWaveformComplexF64;
    WriteNamedWaveformComplexI16Ptr WriteNamedWaveformComplexI16;
    WriteNamedWaveformF64Ptr WriteNamedWaveformF64;
    WriteNamedWaveformI16Ptr WriteNamedWaveformI16;
    WriteP2PEndpointI16Ptr WriteP2PEndpointI16;
    WriteScriptPtr WriteScript;
    WriteWaveformPtr WriteWaveform;
    WriteWaveformComplexF64Ptr WriteWaveformComplexF64;
    SetRuntimeEnvironmentPtr SetRuntimeEnvironment;
  } FunctionLoadStatus;

  nidevice_grpc::SharedLibrary shared_library_;
  FunctionPointers function_pointers_;
};

}  // namespace nifgen_grpc

#endif  // NIFGEN_GRPC_LIBRARY_H
