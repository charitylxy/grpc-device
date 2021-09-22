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
  MOCK_METHOD(ViStatus, Init, (ViRsrc resourceName, ViBoolean idQuery, ViBoolean reset, ViSession* vi), (override));
  MOCK_METHOD(ViStatus, Close, (ViSession vi), (override));
  MOCK_METHOD(ViStatus, GetError, (ViSession vi, ViStatus* errorCode, ViInt32 errorDescriptionBufferSize, ViChar errorDescription[]), (override));
  MOCK_METHOD(ViStatus, InitWithOptions, (ViRsrc resourceName, ViBoolean idQuery, ViBoolean resetDevice, ViConstString optionString, ViSession* vi), (override));
};

}  // namespace unit
}  // namespace tests
}  // namespace ni
#endif  // NIRFSG_GRPC_MOCK_LIBRARY_H
