
//---------------------------------------------------------------------
// This file is automatically generated. All manual edits will be lost.
//---------------------------------------------------------------------
// EXPERIMENTAL Client convenience wrapper for NI-FAKE.
//---------------------------------------------------------------------
#ifndef NIFAKE_GRPC_CLIENT_H
#define NIFAKE_GRPC_CLIENT_H

#include <grpcpp/grpcpp.h>

#include <nifake.grpc.pb.h>
#include <tests/utilities/client_helpers.h>

#include <memory>
#include <vector>

namespace nifake_grpc::experimental::client {

namespace pb = ::google::protobuf;
using StubPtr = std::unique_ptr<NiFake::Stub>;
using namespace nidevice_grpc::experimental::client;


AbortResponse abort(const StubPtr& stub, const nidevice_grpc::Session& vi);
AcceptListOfDurationsInSecondsResponse accept_list_of_durations_in_seconds(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::vector<double>& delays);
AcceptViSessionArrayResponse accept_vi_session_array(const StubPtr& stub, const pb::uint32& session_count, const std::vector<nidevice_grpc::Session>& session_array);
AcceptViUInt32ArrayResponse accept_vi_uint32_array(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::vector<pb::uint32>& u_int32_array);
BoolArrayInputFunctionResponse bool_array_input_function(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& number_of_elements, const std::vector<bool>& an_array);
BoolArrayOutputFunctionResponse bool_array_output_function(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& number_of_elements);
CloseResponse close(const StubPtr& stub, const nidevice_grpc::Session& vi);
CloseExtCalResponse close_ext_cal(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& action);
CommandWithReservedParamResponse command_with_reserved_param(const StubPtr& stub, const nidevice_grpc::Session& vi);
ConfigureAbcResponse configure_abc(const StubPtr& stub, const nidevice_grpc::Session& vi);
Control4022Response control4022(const StubPtr& stub, const pb::string& resource_name, const pb::int32& configuration);
CreateConfigurationListResponse create_configuration_list(const StubPtr& stub, const std::vector<NiFakeAttribute>& list_attribute_ids);
CustomNestedStructRoundtripResponse custom_nested_struct_roundtrip(const StubPtr& stub, const CustomStructNestedTypedef& nested_custom_type_in);
DoubleAllTheNumsResponse double_all_the_nums(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::vector<double>& numbers);
EnumArrayOutputFunctionResponse enum_array_output_function(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& number_of_elements);
EnumInputFunctionWithDefaultsResponse enum_input_function_with_defaults(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<Turtle, pb::int32>& a_turtle);
ErrorMessageResponse error_message(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& error_code);
ExportAttributeConfigurationBufferResponse export_attribute_configuration_buffer(const StubPtr& stub, const nidevice_grpc::Session& vi);
FetchWaveformResponse fetch_waveform(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& number_of_samples);
GetABooleanResponse get_a_boolean(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetANumberResponse get_a_number(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetAStringOfFixedMaximumSizeResponse get_a_string_of_fixed_maximum_size(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetAnIviDanceStringResponse get_an_ivi_dance_string(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetAnIviDanceWithATwistArrayResponse get_an_ivi_dance_with_a_twist_array(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& a_string);
GetAnIviDanceWithATwistArrayOfCustomTypeResponse get_an_ivi_dance_with_a_twist_array_of_custom_type(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetAnIviDanceWithATwistArrayWithInputArrayResponse get_an_ivi_dance_with_a_twist_array_with_input_array(const StubPtr& stub, const std::vector<pb::int32>& data_in);
GetAnIviDanceWithATwistByteArrayResponse get_an_ivi_dance_with_a_twist_byte_array(const StubPtr& stub);
GetAnIviDanceWithATwistStringResponse get_an_ivi_dance_with_a_twist_string(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetAnIviDanceWithATwistStringStrlenBugResponse get_an_ivi_dance_with_a_twist_string_strlen_bug(const StubPtr& stub);
GetArraySizeForCustomCodeResponse get_array_size_for_custom_code(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetArrayUsingIviDanceResponse get_array_using_ivi_dance(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetArrayViUInt8WithEnumResponse get_array_vi_uint8_with_enum(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& array_len);
GetAttributeViBooleanResponse get_attribute_vi_boolean(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiFakeAttribute& attribute_id);
GetAttributeViInt32Response get_attribute_vi_int32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiFakeAttribute& attribute_id);
GetAttributeViInt64Response get_attribute_vi_int64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiFakeAttribute& attribute_id);
GetAttributeViReal64Response get_attribute_vi_real64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiFakeAttribute& attribute_id);
GetAttributeViSessionResponse get_attribute_vi_session(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiFakeAttribute& attribute_id);
GetAttributeViStringResponse get_attribute_vi_string(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiFakeAttribute& attribute_id);
GetBitfieldAsEnumArrayResponse get_bitfield_as_enum_array(const StubPtr& stub);
GetCalDateAndTimeResponse get_cal_date_and_time(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& cal_type);
GetCalIntervalResponse get_cal_interval(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetCustomTypeResponse get_custom_type(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetCustomTypeArrayResponse get_custom_type_array(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& number_of_elements);
GetEnumValueResponse get_enum_value(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetErrorResponse get_error(const StubPtr& stub, const nidevice_grpc::Session& vi);
GetViInt32ArrayResponse get_vi_int32_array(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& array_len);
GetViUInt32ArrayResponse get_vi_uint32_array(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& array_len);
GetViUInt8Response get_vi_uint8(const StubPtr& stub, const nidevice_grpc::Session& vi);
ImportAttributeConfigurationBufferResponse import_attribute_configuration_buffer(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& configuration);
InitExtCalResponse init_ext_cal(const StubPtr& stub, const pb::string& resource_name, const pb::string& calibration_password);
InitWithOptionsResponse init_with_options(const StubPtr& stub, const pb::string& resource_name, const bool& id_query, const bool& reset_device, const pb::string& option_string, const nidevice_grpc::SessionInitializationBehavior& initialization_behavior = nidevice_grpc::SESSION_INITIALIZATION_BEHAVIOR_UNSPECIFIED);
InitWithVarArgsResponse init_with_var_args(const StubPtr& stub, const pb::string& resource_name, const std::vector<StringAndTurtle>& name_and_turtle);
MethodUsingEnumWithGrpcNameValuesResponse method_using_enum_with_grpc_name_values(const StubPtr& stub, const simple_variant<EnumWithGrpcNameValues, pb::int32>& using_enum);
MethodUsingWholeAndFractionalNumbersResponse method_using_whole_and_fractional_numbers(const StubPtr& stub);
MethodUsingWholeMappedNumbersResponse method_using_whole_mapped_numbers(const StubPtr& stub);
MethodWithGetLastErrorParamResponse method_with_get_last_error_param(const StubPtr& stub);
MethodWithGrpcFieldNumberResponse method_with_grpc_field_number(const StubPtr& stub, const pb::int32& attribute_value);
MethodWithGrpcOnlyParamResponse method_with_grpc_only_param(const StubPtr& stub, const pb::int32& simple_param);
MethodWithProtoOnlyParameterResponse method_with_proto_only_parameter(const StubPtr& stub, const pb::int32& attribute_value);
MultipleArrayTypesResponse multiple_array_types(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& output_array_size, const std::vector<double>& input_array_of_floats, const std::vector<pb::int32>& input_array_of_integers);
MultipleArraysSameSizeResponse multiple_arrays_same_size(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::vector<double>& values1, const std::vector<double>& values2, const std::vector<double>& values3, const std::vector<double>& values4);
MultipleArraysSameSizeWithOptionalResponse multiple_arrays_same_size_with_optional(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::vector<double>& values1, const std::vector<double>& values2, const std::vector<double>& values3, const std::vector<double>& values4, const std::vector<FakeCustomStruct>& values5);
OneInputFunctionResponse one_input_function(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& a_number);
ParametersAreMultipleTypesResponse parameters_are_multiple_types(const StubPtr& stub, const nidevice_grpc::Session& vi, const bool& a_boolean, const pb::int32& an_int32, const pb::int64& an_int64, const simple_variant<Turtle, pb::int32>& an_int_enum, const double& a_float, const simple_variant<FloatEnum, double>& a_float_enum, const pb::string& a_string);
PoorlyNamedSimpleFunctionResponse poorly_named_simple_function(const StubPtr& stub, const nidevice_grpc::Session& vi);
ReadResponse read(const StubPtr& stub, const nidevice_grpc::Session& vi, const double& maximum_time);
ReadDataWithInOutIviTwistResponse read_data_with_in_out_ivi_twist(const StubPtr& stub);
ReadDataWithMultipleIviTwistParamSetsResponse read_data_with_multiple_ivi_twist_param_sets(const StubPtr& stub);
ReadFromChannelResponse read_from_channel(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const pb::int32& maximum_time);
ReturnANumberAndAStringResponse return_a_number_and_a_string(const StubPtr& stub, const nidevice_grpc::Session& vi);
ReturnDurationInSecondsResponse return_duration_in_seconds(const StubPtr& stub, const nidevice_grpc::Session& vi);
ReturnListOfDurationsInSecondsResponse return_list_of_durations_in_seconds(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& number_of_elements);
ReturnMultipleTypesResponse return_multiple_types(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& array_size);
SetAttributeViBooleanResponse set_attribute_vi_boolean(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiFakeAttribute& attribute_id, const bool& attribute_value);
SetAttributeViInt32Response set_attribute_vi_int32(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiFakeAttribute& attribute_id, const simple_variant<NiFakeInt32AttributeValues, pb::int32>& attribute_value);
SetAttributeViInt64Response set_attribute_vi_int64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiFakeAttribute& attribute_id, const pb::int64& attribute_value);
SetAttributeViReal64Response set_attribute_vi_real64(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiFakeAttribute& attribute_id, const simple_variant<NiFakeReal64AttributeValuesMapped, double>& attribute_value);
SetAttributeViStringResponse set_attribute_vi_string(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::string& channel_name, const NiFakeAttribute& attribute_id, const pb::string& attribute_value);
SetCustomTypeResponse set_custom_type(const StubPtr& stub, const nidevice_grpc::Session& vi, const FakeCustomStruct& cs);
SetCustomTypeArrayResponse set_custom_type_array(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::vector<FakeCustomStruct>& cs);
StringValuedEnumInputFunctionWithDefaultsResponse string_valued_enum_input_function_with_defaults(const StubPtr& stub, const nidevice_grpc::Session& vi, const simple_variant<MobileOSNames, std::string>& a_mobile_os_name);
TwoInputFunctionResponse two_input_function(const StubPtr& stub, const nidevice_grpc::Session& vi, const double& a_number, const pb::string& a_string);
Use64BitNumberResponse use64_bit_number(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int64& input);
UseATwoDimensionParameterResponse use_a_two_dimension_parameter(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::vector<pb::int32>& array, const std::vector<pb::int32>& array_lengths);
ViInt16ArrayInputFunctionResponse vi_int16_array_input_function(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::vector<pb::int32>& an_array);
ViUInt8ArrayInputFunctionResponse vi_uint8_array_input_function(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& number_of_elements, const pb::string& an_array);
ViUInt8ArrayOutputFunctionResponse vi_uint8_array_output_function(const StubPtr& stub, const nidevice_grpc::Session& vi, const pb::int32& number_of_elements);
WriteWaveformResponse write_waveform(const StubPtr& stub, const nidevice_grpc::Session& vi, const std::vector<double>& waveform);

} // namespace nifake_grpc::experimental::client

#endif /* NIFAKE_GRPC_CLIENT_H */
