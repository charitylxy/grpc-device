//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// Mock of LibraryInterface for NI-RFSG
//---------------------------------------------------------------------
#ifndef NIRFSG_GRPC_MOCK_LIBRARY_H
#define NIRFSG_GRPC_MOCK_LIBRARY_H

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "nirfsg_library_interface.h"

namespace ni {
namespace tests {
namespace unit {

class NiRFSGMockLibrary : public nirfsg_grpc::NiRFSGLibraryInterface {
 public:
  MOCK_METHOD(ViStatus, Abort, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, AllocateArbWaveform, (ViSession vi, ViConstString waveformName, ViInt32 sizeInSamples), (override));
  MOCK_METHOD(ViStatus, CheckAttributeViBoolean, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean value), (override));
  MOCK_METHOD(ViStatus, CheckAttributeViInt32, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 value), (override));
  MOCK_METHOD(ViStatus, CheckAttributeViInt64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 value), (override));
  MOCK_METHOD(ViStatus, CheckAttributeViReal64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 value), (override));
  MOCK_METHOD(ViStatus, CheckAttributeViSession, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession value), (override));
  MOCK_METHOD(ViStatus, CheckAttributeViString, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString value), (override));
  MOCK_METHOD(ViStatus, CheckGenerationStatus, (ViSession vi, ViBoolean* isDone), (override));
  MOCK_METHOD(ViStatus, CheckIfConfigurationListExists, (ViSession vi, ViConstString listName, ViBoolean* listExists), (override));
  MOCK_METHOD(ViStatus, CheckIfScriptExists, (ViSession vi, ViConstString scriptName, ViBoolean* scriptExists), (override));
  MOCK_METHOD(ViStatus, CheckIfWaveformExists, (ViSession vi, ViConstString waveformName, ViBoolean* waveformExists), (override));
  MOCK_METHOD(ViStatus, ClearAllArbWaveforms, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ClearArbWaveform, (ViSession vi, ViConstString name), (override));
  MOCK_METHOD(ViStatus, ClearError, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ClearSelfCalibrateRange, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, Close, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, Commit, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ConfigureDeembeddingTableInterpolationLinear, (ViSession vi, ViConstString port, ViConstString tableName, ViInt32 format), (override));
  MOCK_METHOD(ViStatus, ConfigureDeembeddingTableInterpolationNearest, (ViSession vi, ViConstString port, ViConstString tableName), (override));
  MOCK_METHOD(ViStatus, ConfigureDeembeddingTableInterpolationSpline, (ViSession vi, ViConstString port, ViConstString tableName), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalEdgeConfigurationListStepTrigger, (ViSession vi, ViConstString source, ViInt32 edge), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalEdgeScriptTrigger, (ViSession vi, ViConstString triggerID, ViConstString source, ViInt32 edge), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalEdgeStartTrigger, (ViSession vi, ViConstString source, ViInt32 edge), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalLevelScriptTrigger, (ViSession vi, ViConstString triggerID, ViConstString source, ViInt32 level), (override));
  MOCK_METHOD(ViStatus, ConfigureDigitalModulationUserDefinedWaveform, (ViSession vi, ViInt32 numberOfSamples, ViInt8 userDefinedWaveform[]), (override));
  MOCK_METHOD(ViStatus, ConfigureGenerationMode, (ViSession vi, ViInt32 generationMode), (override));
  MOCK_METHOD(ViStatus, ConfigureOutputEnabled, (ViSession vi, ViBoolean outputEnabled), (override));
  MOCK_METHOD(ViStatus, ConfigureP2PEndpointFullnessStartTrigger, (ViSession vi, ViInt64 p2pEndpointFullnessLevel), (override));
  MOCK_METHOD(ViStatus, ConfigurePXIChassisClk10, (ViSession vi, ViConstString pxiClk10Source), (override));
  MOCK_METHOD(ViStatus, ConfigurePowerLevelType, (ViSession vi, ViInt32 powerLevelType), (override));
  MOCK_METHOD(ViStatus, ConfigureRF, (ViSession vi, ViReal64 frequency, ViReal64 powerLevel), (override));
  MOCK_METHOD(ViStatus, ConfigureRefClock, (ViSession vi, ViConstString refClockSource, ViReal64 refClockRate), (override));
  MOCK_METHOD(ViStatus, ConfigureSignalBandwidth, (ViSession vi, ViReal64 signalBandwidth), (override));
  MOCK_METHOD(ViStatus, ConfigureSoftwareScriptTrigger, (ViSession vi, ViConstString triggerID), (override));
  MOCK_METHOD(ViStatus, ConfigureSoftwareStartTrigger, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ConfigureUpconverterPLLSettlingTime, (ViSession vi, ViReal64 pllSettlingTime, ViBoolean ensurePLLLocked, ViInt32 reservedForFutureUse), (override));
  MOCK_METHOD(ViStatus, CreateConfigurationList, (ViSession vi, ViConstString listName, ViInt32 numberOfAttributes, ViAttr configurationListAttributes[], ViBoolean setAsActiveList), (override));
  MOCK_METHOD(ViStatus, CreateConfigurationListStep, (ViSession vi, ViBoolean setAsActiveStep), (override));
  MOCK_METHOD(ViStatus, CreateDeembeddingSparameterTableArray, (ViSession vi, ViConstString port, ViConstString tableName, ViReal64 frequencies[], ViInt32 frequenciesSize, NIComplexNumber_struct sparameterTable[], ViInt32 sparameterTableSize, ViInt32 numberOfPorts, ViInt32 sparameterOrientation), (override));
  MOCK_METHOD(ViStatus, CreateDeembeddingSparameterTableS2PFile, (ViSession vi, ViConstString port, ViConstString tableName, ViConstString s2pFilePath, ViInt32 sparameterOrientation), (override));
  MOCK_METHOD(ViStatus, DeleteAllDeembeddingTables, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, DeleteConfigurationList, (ViSession vi, ViConstString listName), (override));
  MOCK_METHOD(ViStatus, DeleteDeembeddingTable, (ViSession vi, ViConstString port, ViConstString tableName), (override));
  MOCK_METHOD(ViStatus, DeleteScript, (ViSession vi, ViConstString scriptName), (override));
  MOCK_METHOD(ViStatus, Disable, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, DisableAllModulation, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, DisableConfigurationListStepTrigger, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, DisableScriptTrigger, (ViSession vi, ViConstString triggerID), (override));
  MOCK_METHOD(ViStatus, DisableStartTrigger, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ErrorMessage, (ViSession vi, ViStatus errorCode, ViChar errorMessage[1024]), (override));
  MOCK_METHOD(ViStatus, ErrorQuery, (ViSession vi, ViInt32* errorCode, ViChar errorMessage[1024]), (override));
  MOCK_METHOD(ViStatus, ExportSignal, (ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViConstString outputTerminal), (override));
  MOCK_METHOD(ViStatus, GetAttributeViBoolean, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean* value), (override));
  MOCK_METHOD(ViStatus, GetAttributeViInt32, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32* value), (override));
  MOCK_METHOD(ViStatus, GetAttributeViInt64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64* value), (override));
  MOCK_METHOD(ViStatus, GetAttributeViReal64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64* value), (override));
  MOCK_METHOD(ViStatus, GetAttributeViSession, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession* value), (override));
  MOCK_METHOD(ViStatus, GetAttributeViString, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 bufSize, ViChar value[]), (override));
  MOCK_METHOD(ViStatus, GetChannelName, (ViSession vi, ViInt32 index, ViInt32 bufferSize, ViChar name[]), (override));
  MOCK_METHOD(ViStatus, GetDeembeddingSparameters, (ViSession vi, NIComplexNumber_struct sparameters[], ViInt32 sparametersArraySize, ViInt32* numberOfSparameters, ViInt32* numberOfPorts), (override));
  MOCK_METHOD(ViStatus, GetError, (ViSession vi, ViStatus* errorCode, ViInt32 errorDescriptionBufferSize, ViChar errorDescription[]), (override));
  MOCK_METHOD(ViStatus, GetExternalCalibrationLastDateAndTime, (ViSession vi, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute, ViInt32* second), (override));
  MOCK_METHOD(ViStatus, GetSelfCalibrationDateAndTime, (ViSession vi, ViInt32 module, ViInt32* year, ViInt32* month, ViInt32* day, ViInt32* hour, ViInt32* minute, ViInt32* second), (override));
  MOCK_METHOD(ViStatus, GetSelfCalibrationTemperature, (ViSession vi, ViInt32 module, ViReal64* temperature), (override));
  MOCK_METHOD(ViStatus, GetTerminalName, (ViSession vi, ViInt32 signal, ViConstString signalIdentifier, ViInt32 bufferSize, ViChar terminalName[]), (override));
  MOCK_METHOD(ViStatus, GetUserData, (ViSession vi, ViConstString identifier, ViInt32 bufferSize, ViInt8 data[], ViInt32* actualDataSize), (override));
  MOCK_METHOD(ViStatus, GetWaveformBurstStartLocations, (ViSession vi, ViConstString channelName, ViInt32 numberOfLocations, ViReal64 locations[], ViInt32* requiredSize), (override));
  MOCK_METHOD(ViStatus, GetWaveformBurstStopLocations, (ViSession vi, ViConstString channelName, ViInt32 numberOfLocations, ViReal64 locations[], ViInt32* requiredSize), (override));
  MOCK_METHOD(ViStatus, GetWaveformMarkerEventLocations, (ViSession vi, ViConstString channelName, ViInt32 numberOfLocations, ViReal64 locations[], ViInt32* requiredSize), (override));
  MOCK_METHOD(ViStatus, Init, (ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViSession* newVi), (override));
  MOCK_METHOD(ViStatus, InitWithOptions, (ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi), (override));
  MOCK_METHOD(ViStatus, Initiate, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, InvalidateAllAttributes, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, LoadConfigurationsFromFile, (ViSession vi, ViConstString channelName, ViConstString filePath), (override));
  MOCK_METHOD(ViStatus, LockSession, (ViSession vi, ViBoolean* callerHasLock), (override));
  MOCK_METHOD(ViStatus, PerformPowerSearch, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, PerformThermalCorrection, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, QueryArbWaveformCapabilities, (ViSession vi, ViInt32* maxNumberWaveforms, ViInt32* waveformQuantum, ViInt32* minWaveformSize, ViInt32* maxWaveformSize), (override));
  MOCK_METHOD(ViStatus, ReadAndDownloadWaveformFromFileTDMS, (ViSession vi, ViConstString waveformName, ViConstString filePath, ViUInt32 waveformIndex), (override));
  MOCK_METHOD(ViStatus, Reset, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ResetAttribute, (ViSession vi, ViConstString channelName, ViAttr attributeId), (override));
  MOCK_METHOD(ViStatus, ResetDevice, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ResetWithDefaults, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, ResetWithOptions, (ViSession vi, ViUInt64 stepsToOmit), (override));
  MOCK_METHOD(ViStatus, RevisionQuery, (ViSession vi, ViChar instrumentDriverRevision[256], ViChar firmwareRevision[256]), (override));
  MOCK_METHOD(ViStatus, SaveConfigurationsToFile, (ViSession vi, ViConstString channelName, ViConstString filePath), (override));
  MOCK_METHOD(ViStatus, SelectArbWaveform, (ViSession vi, ViConstString name), (override));
  MOCK_METHOD(ViStatus, SelfCal, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, SelfCalibrateRange, (ViSession vi, ViInt64 stepsToOmit, ViReal64 minFrequency, ViReal64 maxFrequency, ViReal64 minPowerLevel, ViReal64 maxPowerLevel), (override));
  MOCK_METHOD(ViStatus, SelfTest, (ViSession vi, ViInt16* selfTestResult, ViChar selfTestMessage[2048]), (override));
  MOCK_METHOD(ViStatus, SendSoftwareEdgeTrigger, (ViSession vi, ViInt32 trigger, ViConstString triggerIdentifier), (override));
  MOCK_METHOD(ViStatus, SetArbWaveformNextWritePosition, (ViSession vi, ViConstString waveformName, ViInt32 relativeTo, ViInt32 offset), (override));
  MOCK_METHOD(ViStatus, SetAttributeViBoolean, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViBoolean value), (override));
  MOCK_METHOD(ViStatus, SetAttributeViInt32, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt32 value), (override));
  MOCK_METHOD(ViStatus, SetAttributeViInt64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViInt64 value), (override));
  MOCK_METHOD(ViStatus, SetAttributeViReal64, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViReal64 value), (override));
  MOCK_METHOD(ViStatus, SetAttributeViSession, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViSession value), (override));
  MOCK_METHOD(ViStatus, SetAttributeViString, (ViSession vi, ViConstString channelName, ViAttr attributeId, ViConstString value), (override));
  MOCK_METHOD(ViStatus, SetUserData, (ViSession vi, ViConstString identifier, ViInt32 bufferSize, ViInt8 data[]), (override));
  MOCK_METHOD(ViStatus, SetWaveformBurstStartLocations, (ViSession vi, ViConstString channelName, ViInt32 numberOfLocations, ViReal64 locations[]), (override));
  MOCK_METHOD(ViStatus, SetWaveformBurstStopLocations, (ViSession vi, ViConstString channelName, ViInt32 numberOfLocations, ViReal64 locations[]), (override));
  MOCK_METHOD(ViStatus, SetWaveformMarkerEventLocations, (ViSession vi, ViConstString channelName, ViInt32 numberOfLocations, ViReal64 locations[]), (override));
  MOCK_METHOD(ViStatus, UnlockSession, (ViSession vi, ViBoolean* callerHasLock), (override));
  MOCK_METHOD(ViStatus, WaitUntilSettled, (ViSession vi, ViInt32 maxTimeMilliseconds), (override));
  MOCK_METHOD(ViStatus, WriteArbWaveform, (ViSession vi, ViConstString waveformName, ViInt32 numberOfSamples, ViReal64 iData[], ViReal64 qData[], ViBoolean moreDataPending), (override));
  MOCK_METHOD(ViStatus, WriteArbWaveformComplexF32, (ViSession vi, ViConstString waveformName, ViInt32 numberOfSamples, NIComplexNumberF32_struct wfmData[], ViBoolean moreDataPending), (override));
  MOCK_METHOD(ViStatus, WriteArbWaveformComplexF64, (ViSession vi, ViConstString waveformName, ViInt32 numberOfSamples, NIComplexNumber_struct wfmData[], ViBoolean moreDataPending), (override));
  MOCK_METHOD(ViStatus, WriteArbWaveformComplexI16, (ViSession vi, ViConstString waveformName, ViInt32 numberOfSamples, NIComplexI16_struct wfmData[]), (override));
  MOCK_METHOD(ViStatus, WriteArbWaveformF32, (ViSession vi, ViConstString waveformName, ViInt32 numberOfSamples, ViReal32 iData[], ViReal32 qData[], ViBoolean moreDataPending), (override));
  MOCK_METHOD(ViStatus, WriteScript, (ViSession vi, ViConstString script), (override));
};

}  // namespace unit
}  // namespace tests
}  // namespace ni
#endif  // NIRFSG_GRPC_MOCK_LIBRARY_H
