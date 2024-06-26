r"""Fetch ModAcc data.

Steps:
1. Open a new RFmx session
2. Configure Reference Clock
3. Configure the basic signal properties  (Center Frequency, Reference Level and External
   Attenuation)
4. Configure Trigger
5. Configure Radio Configuration
6. Configure Long Code Mask
7. Set Measurement to ModAcc
8. Configure Synchronization mode
9. Commit Settings and Initiate Measurement
10. Fetch diverse ModAcc Measurement Results
11. Close the RFmx Session

The gRPC API is built from the C API. RFmx CDMA2k documentation is installed with the driver at:
C:\Program Files (x86)\National Instruments\RFmx\CDMA2k\Documentation\cdma2kcvi.chm

Getting Started:

To run this example, install "RFmx CDMA2k" on the server machine.
Link: https://www.ni.com/en-us/support/downloads/software-products/download.rfmx-cdma2k.html

For instructions on how to use protoc to generate gRPC client interfaces, see our "Creating a gRPC
Client" wiki page.
Link: https://github.com/ni/grpc-device/wiki/Creating-a-gRPC-Client

Refer to the NI-RFmxCDMA2k gRPC Wiki for the latest C Function Reference:
Link: https://github.com/ni/grpc-device/wiki/NI-RFmxCDMA2k-C-Function-Reference

Running from command line:

Server machine's IP address, port number, and physical channel name can be passed as separate
command line arguments.
  > python RFmxCdma2kModAcc.c <server_address> <port_number> <physical_channel_name>
If they are not passed in as command line arguments, then by default the server address will be
"localhost:31763", with "SimulatedDevice" as the resource name
"""

import sys

import grpc
import nirfmxcdma2k_pb2 as nirfmxcdma2k_types
import nirfmxcdma2k_pb2_grpc as grpc_nirfmxcdma2k

SERVER_ADDRESS = "localhost"
SERVER_PORT = "31763"
SESSION_NAME = "RFmxCDMA2kSession"

# Resource name and options for a simulated 5663 client.
RESOURCE = "SimulatedDevice"
OPTIONS = "Simulate=1,DriverSetup=Model:5663"

# Read in cmd args
if len(sys.argv) >= 2:
    SERVER_ADDRESS = sys.argv[1]
if len(sys.argv) >= 3:
    SERVER_PORT = sys.argv[2]
if len(sys.argv) >= 4:
    RESOURCE = sys.argv[3]
    OPTIONS = ""

# Create a gRPC channel + client.
channel = grpc.insecure_channel(f"{SERVER_ADDRESS}:{SERVER_PORT}")
client = grpc_nirfmxcdma2k.NiRFmxCDMA2kStub(channel)
instr = None


def check_for_warning(response, instrument):
    """Print to console if the status indicates a warning."""
    if response.status > 0:
        warning_message = client.GetErrorString(
            nirfmxcdma2k_types.GetErrorStringRequest(
                instrument=instrument,
                error_code=response.status,
            )
        )
        sys.stderr.write(
            f"{warning_message.error_description}\nWarning status: {response.status}\n"
        )


try:
    # Create new RFmx session
    initialize_response = client.Initialize(
        nirfmxcdma2k_types.InitializeRequest(
            session_name=SESSION_NAME,
            resource_name=RESOURCE,
            option_string=OPTIONS,
        )
    )
    instr = initialize_response.instrument
    check_for_warning(initialize_response, instr)
    client.CfgFrequencyReference(
        nirfmxcdma2k_types.CfgFrequencyReferenceRequest(
            instrument=instr,
            channel_name="",
            frequency_reference_source_mapped=nirfmxcdma2k_types.FREQUENCY_REFERENCE_SOURCE_ONBOARD_CLOCK,
            frequency_reference_frequency=10.0e6,
        )
    )
    client.CfgRF(
        nirfmxcdma2k_types.CfgRFRequest(
            instrument=instr,
            selector_string="",
            center_frequency=833.490e6,
            reference_level=0.00,
            external_attenuation=0.00,
        )
    )
    client.CfgDigitalEdgeTrigger(
        nirfmxcdma2k_types.CfgDigitalEdgeTriggerRequest(
            instrument=instr,
            selector_string="",
            digital_edge_source_mapped=nirfmxcdma2k_types.DIGITAL_EDGE_TRIGGER_SOURCE_PFI0,
            digital_edge=nirfmxcdma2k_types.DIGITAL_EDGE_TRIGGER_EDGE_RISING,
            trigger_delay=0.00,
            enable_trigger=False,
        )
    )
    client.CfgRadioConfiguration(
        nirfmxcdma2k_types.CfgRadioConfigurationRequest(
            instrument=instr,
            selector_string="",
            radio_configuration=nirfmxcdma2k_types.RADIO_CONFIGURATION_RC3,
        )
    )
    client.CfgUplinkSpreading(
        nirfmxcdma2k_types.CfgUplinkSpreadingRequest(
            instrument=instr, selector_string="", uplink_spreading_long_code_mask=0
        )
    )
    client.SelectMeasurements(
        nirfmxcdma2k_types.SelectMeasurementsRequest(
            instrument=instr,
            selector_string="",
            measurements_array=[nirfmxcdma2k_types.MEASUREMENT_TYPES_MODACC],
            enable_all_traces=True,
        )
    )
    client.ModAccCfgSynchronizationModeAndInterval(
        nirfmxcdma2k_types.ModAccCfgSynchronizationModeAndIntervalRequest(
            instrument=instr,
            selector_string="",
            synchronization_mode=nirfmxcdma2k_types.MODACC_SYNCHRONIZATION_MODE_SLOT,
            measurement_offset=0,
            measurement_length=1,
        )
    )
    client.Initiate(
        nirfmxcdma2k_types.InitiateRequest(instrument=instr, selector_string="", result_name="")
    )

    # Retrieve results

    mod_acc_fetch_evm_response = client.ModAccFetchEVM(
        nirfmxcdma2k_types.ModAccFetchEVMRequest(instrument=instr, selector_string="", timeout=10.0)
    )
    check_for_warning(mod_acc_fetch_evm_response, instr)
    rms_evm = mod_acc_fetch_evm_response.rms_evm
    peak_evm = mod_acc_fetch_evm_response.peak_evm
    rho = mod_acc_fetch_evm_response.rho
    frequency_error = mod_acc_fetch_evm_response.frequency_error
    chip_rate_error = mod_acc_fetch_evm_response.chip_rate_error
    rms_magnitude_error = mod_acc_fetch_evm_response.rms_magnitude_error
    rms_phase_error = mod_acc_fetch_evm_response.rms_phase_error
    mod_acc_fetch_iq_impairments_response = client.ModAccFetchIQImpairments(
        nirfmxcdma2k_types.ModAccFetchIQImpairmentsRequest(
            instrument=instr, selector_string="", timeout=10.0
        )
    )
    check_for_warning(mod_acc_fetch_iq_impairments_response, instr)
    iq_origin_offset = mod_acc_fetch_iq_impairments_response.iq_origin_offset
    iq_gain_imbalance = mod_acc_fetch_iq_impairments_response.iq_gain_imbalance
    iq_quadrature_error = mod_acc_fetch_iq_impairments_response.iq_quadrature_error
    mod_acc_fetch_peak_cde_response = client.ModAccFetchPeakCDE(
        nirfmxcdma2k_types.ModAccFetchPeakCDERequest(
            instrument=instr, selector_string="", timeout=10.0
        )
    )
    check_for_warning(mod_acc_fetch_peak_cde_response, instr)
    peak_cde = mod_acc_fetch_peak_cde_response.peak_cde
    peak_cde_walsh_code_number = mod_acc_fetch_peak_cde_response.peak_cde_walsh_code_number
    peak_cde_branch = mod_acc_fetch_peak_cde_response.peak_cde_branch
    mod_acc_fetch_peak_active_cde_response = client.ModAccFetchPeakActiveCDE(
        nirfmxcdma2k_types.ModAccFetchPeakActiveCDERequest(
            instrument=instr, selector_string="", timeout=10.0
        )
    )
    check_for_warning(mod_acc_fetch_peak_active_cde_response, instr)
    peak_active_cde = mod_acc_fetch_peak_active_cde_response.peak_active_cde
    peak_active_cde_walsh_code_length = (
        mod_acc_fetch_peak_active_cde_response.peak_active_cde_walsh_code_length
    )
    peak_active_cde_walsh_code_number = (
        mod_acc_fetch_peak_active_cde_response.peak_active_cde_walsh_code_number
    )
    peak_active_cde_branch = mod_acc_fetch_peak_active_cde_response.peak_active_cde_branch

    mod_acc_fetch_constellation_trace_response = client.ModAccFetchConstellationTrace(
        nirfmxcdma2k_types.ModAccFetchConstellationTraceRequest(
            instrument=instr, selector_string="", timeout=10.0
        )
    )
    check_for_warning(mod_acc_fetch_constellation_trace_response, instr)
    constellation = mod_acc_fetch_constellation_trace_response.constellation
    mod_acc_fetch_evm_trace_response = client.ModAccFetchEVMTrace(
        nirfmxcdma2k_types.ModAccFetchEVMTraceRequest(
            instrument=instr, selector_string="", timeout=10.0
        )
    )
    check_for_warning(mod_acc_fetch_evm_trace_response, instr)
    x0 = mod_acc_fetch_evm_trace_response.x0
    dx = mod_acc_fetch_evm_trace_response.dx
    evm_trace = mod_acc_fetch_evm_trace_response.evm

    # Display results

    print("--------------EVM ------------------------------------------")
    print(f"RMS EVM (%%)                       : {rms_evm}")
    print(f"Peak EVM (%%)                      : {peak_evm}")
    print(f"Rho                               : {rho}")
    print(f"Frequency Error (Hz)              : {frequency_error}")
    print(f"Chip Rate Error (ppm)             : {chip_rate_error}")
    print(f"RMS Magnitude Error (%%)           : {rms_magnitude_error}")
    print(f"RMS Phase Error (deg)             : {rms_phase_error}")

    print("\n\n--------------Code Domain Error--------------------------")
    print(f"Peak CDE (dB)                     : {peak_cde}")
    print(f"Peak CDE Walsh Code Number        : {peak_cde_walsh_code_number}")
    print(f"Peak Active CDE (dB)              : {peak_active_cde}")
    print(f"Peak CDE Branch                   : {'Q' if peak_cde_branch else 'I'}")
    print(f"Peak Active CDE Walsh Code Length : {peak_active_cde_walsh_code_length}")
    print(f"Peak Active CDE Walsh Code Number : {peak_active_cde_walsh_code_number}")
    print(f"Peak Active CDE Branch            : {'Q' if peak_active_cde_branch else 'I'}")

    print("\n\n--------------I/Q Impairments----------------------------")
    print(f"I/Q Origin Offset (dB)            : {iq_origin_offset}")
    print(f"I/Q Gain Imbalance (dB)           : {iq_gain_imbalance}")
    print(f"I/Q Quadrature Error (deg)        : {iq_quadrature_error}")
except grpc.RpcError as rpc_error:
    error_message = str(rpc_error.details() or "")
    for entry in rpc_error.trailing_metadata() or []:
        if entry.key == "ni-error":
            value = entry.value if isinstance(entry.value, str) else entry.value.decode("utf-8")
            error_message += f"\nError status: {value}"
    if rpc_error.code() == grpc.StatusCode.UNAVAILABLE:
        error_message = f"Failed to connect to server on {SERVER_ADDRESS}:{SERVER_PORT}"
    elif rpc_error.code() == grpc.StatusCode.UNIMPLEMENTED:
        error_message = (
            "The operation is not implemented or is not supported/enabled in this service"
        )
    sys.stderr.write(f"{error_message}\n")
finally:
    if instr:
        client.Close(nirfmxcdma2k_types.CloseRequest(instrument=instr, force_destroy=False))
