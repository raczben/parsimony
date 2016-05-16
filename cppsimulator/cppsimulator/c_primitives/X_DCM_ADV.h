/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_DCM_ADV_H
#define X_DCM_ADV_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_DCM_ADV: public Primitive{

		//Verilog Parameters:
		parameter_int_t CLKDV_DIVIDE;
		parameter_int_t CLKFX_DIVIDE;
		parameter_int_t CLKFX_MULTIPLY;
		parameter_enum_t CLKIN_DIVIDE_BY_2;
		parameter_int_t CLKIN_PERIOD;
		parameter_string_t CLKOUT_PHASE_SHIFT;
		parameter_string_t CLK_FEEDBACK;
		parameter_enum_t DCM_AUTOCALIBRATION;
		parameter_string_t DCM_PERFORMANCE_MODE;
		parameter_string_t DESKEW_ADJUST;
		parameter_string_t DFS_FREQUENCY_MODE;
		parameter_string_t DLL_FREQUENCY_MODE;
		parameter_enum_t DUTY_CYCLE_CORRECTION;
		parameter_int_t FACTORY_JF;
		parameter_int_t MAXPERCLKIN;
		parameter_int_t MAXPERPSCLK;
		parameter_int_t PHASE_SHIFT;
		parameter_int_t SIM_CLKIN_CYCLE_JITTER;
		parameter_int_t SIM_CLKIN_PERIOD_JITTER;
		parameter_string_t SIM_DEVICE;
		parameter_string_t LOC;
		parameter_enum_t STARTUP_WAIT;
		//Verilog Ports in definition order:
		NetFlow* CLK0_A0_B; // net ID: CLK0 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK180_A0_B; // net ID: CLK180 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK270_A0_B; // net ID: CLK270 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK2X_A0_B; // net ID: CLK2X lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK2X180_A0_B; // net ID: CLK2X180 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK90_A0_B; // net ID: CLK90 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKDV_A0_B; // net ID: CLKDV lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKFX_A0_B; // net ID: CLKFX lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKFX180_A0_B; // net ID: CLKFX180 lsb: 0  msb: 0 OUTPUT
		NetFlow* DO_A15_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A14_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A13_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A12_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A11_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A10_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A9_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A8_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A7_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A6_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A5_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A4_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A3_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A2_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A1_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DO_A0_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
		NetFlow* DRDY_A0_B; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* LOCKED_A0_B; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
		NetFlow* PSDONE_A0_B; // net ID: PSDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKFB_A0_B; // net ID: CLKFB lsb: 0  msb: 0 INPUT
		NetFlow* CLKIN_A0_B; // net ID: CLKIN lsb: 0  msb: 0 INPUT
		NetFlow* DADDR_A6_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DADDR_A5_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DADDR_A4_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DADDR_A3_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DADDR_A2_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DADDR_A1_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DADDR_A0_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DCLK_A0_B; // net ID: DCLK lsb: 0  msb: 0 INPUT
		NetFlow* DEN_A0_B; // net ID: DEN lsb: 0  msb: 0 INPUT
		NetFlow* DI_A15_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A14_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A13_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A12_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A11_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A10_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A9_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A8_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A7_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A6_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A5_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A4_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A3_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A2_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A1_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DI_A0_B; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DWE_A0_B; // net ID: DWE lsb: 0  msb: 0 INPUT
		NetFlow* PSCLK_A0_B; // net ID: PSCLK lsb: 0  msb: 0 INPUT
		NetFlow* PSEN_A0_B; // net ID: PSEN lsb: 0  msb: 0 INPUT
		NetFlow* PSINCDEC_A0_B; // net ID: PSINCDEC lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		
		public: X_DCM_ADV(
			const char * name,
			//Verilog Parameters:
			parameter_int_t CLKDV_DIVIDE, // Default: 2.0
			parameter_int_t CLKFX_DIVIDE, // Default: 1
			parameter_int_t CLKFX_MULTIPLY, // Default: 4
			parameter_enum_t CLKIN_DIVIDE_BY_2, // Default: "FALSE"
			parameter_int_t CLKIN_PERIOD, // Default: 10.0
			parameter_string_t CLKOUT_PHASE_SHIFT, // Default: "NONE"
			parameter_string_t CLK_FEEDBACK, // Default: "1X"
			parameter_enum_t DCM_AUTOCALIBRATION, // Default: "TRUE"
			parameter_string_t DCM_PERFORMANCE_MODE, // Default: "MAX_SPEED"
			parameter_string_t DESKEW_ADJUST, // Default: "SYSTEM_SYNCHRONOUS"
			parameter_string_t DFS_FREQUENCY_MODE, // Default: "LOW"
			parameter_string_t DLL_FREQUENCY_MODE, // Default: "LOW"
			parameter_enum_t DUTY_CYCLE_CORRECTION, // Default: "TRUE"
			parameter_int_t FACTORY_JF, // Default: 16'hF0F0
			parameter_int_t MAXPERCLKIN, // Default: 1000000
			parameter_int_t MAXPERPSCLK, // Default: 100000000
			parameter_int_t PHASE_SHIFT, // Default: 0
			parameter_int_t SIM_CLKIN_CYCLE_JITTER, // Default: 300
			parameter_int_t SIM_CLKIN_PERIOD_JITTER, // Default: 1000
			parameter_string_t SIM_DEVICE, // Default: "VIRTEX4"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t STARTUP_WAIT, // Default: "FALSE"
			//Verilog Ports in definition order:
			NetFlow* CLK0_A0_B, // net ID: CLK0 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK180_A0_B, // net ID: CLK180 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK270_A0_B, // net ID: CLK270 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK2X_A0_B, // net ID: CLK2X lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK2X180_A0_B, // net ID: CLK2X180 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK90_A0_B, // net ID: CLK90 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKDV_A0_B, // net ID: CLKDV lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKFX_A0_B, // net ID: CLKFX lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKFX180_A0_B, // net ID: CLKFX180 lsb: 0  msb: 0 OUTPUT
			NetFlow* DO_A15_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A14_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A13_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A12_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A11_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A10_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A9_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A8_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A7_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A6_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A5_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A4_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A3_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A2_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A1_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DO_A0_B, // net ID: DO lsb: 0  msb: 15 OUTPUT
			NetFlow* DRDY_A0_B, // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* LOCKED_A0_B, // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			NetFlow* PSDONE_A0_B, // net ID: PSDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKFB_A0_B, // net ID: CLKFB lsb: 0  msb: 0 INPUT
			NetFlow* CLKIN_A0_B, // net ID: CLKIN lsb: 0  msb: 0 INPUT
			NetFlow* DADDR_A6_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DADDR_A5_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DADDR_A4_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DADDR_A3_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DADDR_A2_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DADDR_A1_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DADDR_A0_B, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DCLK_A0_B, // net ID: DCLK lsb: 0  msb: 0 INPUT
			NetFlow* DEN_A0_B, // net ID: DEN lsb: 0  msb: 0 INPUT
			NetFlow* DI_A15_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A14_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A13_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A12_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A11_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A10_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A9_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A8_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A7_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A6_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A5_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A4_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A3_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A2_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A1_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DI_A0_B, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DWE_A0_B, // net ID: DWE lsb: 0  msb: 0 INPUT
			NetFlow* PSCLK_A0_B, // net ID: PSCLK lsb: 0  msb: 0 INPUT
			NetFlow* PSEN_A0_B, // net ID: PSEN lsb: 0  msb: 0 INPUT
			NetFlow* PSINCDEC_A0_B, // net ID: PSINCDEC lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B // net ID: RST lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->CLKDV_DIVIDE = CLKDV_DIVIDE; // Default: 2.0
			this->CLKFX_DIVIDE = CLKFX_DIVIDE; // Default: 1
			this->CLKFX_MULTIPLY = CLKFX_MULTIPLY; // Default: 4
			this->CLKIN_DIVIDE_BY_2 = CLKIN_DIVIDE_BY_2; // Default: "FALSE"
			this->CLKIN_PERIOD = CLKIN_PERIOD; // Default: 10.0
			this->CLKOUT_PHASE_SHIFT = CLKOUT_PHASE_SHIFT; // Default: "NONE"
			this->CLK_FEEDBACK = CLK_FEEDBACK; // Default: "1X"
			this->DCM_AUTOCALIBRATION = DCM_AUTOCALIBRATION; // Default: "TRUE"
			this->DCM_PERFORMANCE_MODE = DCM_PERFORMANCE_MODE; // Default: "MAX_SPEED"
			this->DESKEW_ADJUST = DESKEW_ADJUST; // Default: "SYSTEM_SYNCHRONOUS"
			this->DFS_FREQUENCY_MODE = DFS_FREQUENCY_MODE; // Default: "LOW"
			this->DLL_FREQUENCY_MODE = DLL_FREQUENCY_MODE; // Default: "LOW"
			this->DUTY_CYCLE_CORRECTION = DUTY_CYCLE_CORRECTION; // Default: "TRUE"
			this->FACTORY_JF = FACTORY_JF; // Default: 16'hF0F0
			this->MAXPERCLKIN = MAXPERCLKIN; // Default: 1000000
			this->MAXPERPSCLK = MAXPERPSCLK; // Default: 100000000
			this->PHASE_SHIFT = PHASE_SHIFT; // Default: 0
			this->SIM_CLKIN_CYCLE_JITTER = SIM_CLKIN_CYCLE_JITTER; // Default: 300
			this->SIM_CLKIN_PERIOD_JITTER = SIM_CLKIN_PERIOD_JITTER; // Default: 1000
			this->SIM_DEVICE = SIM_DEVICE; // Default: "VIRTEX4"
			this->LOC = LOC; // Default: "UNPLACED"
			this->STARTUP_WAIT = STARTUP_WAIT; // Default: "FALSE"
			//Verilog Ports in definition order:
			this->CLK0_A0_B = CLK0_A0_B; // net ID: CLK0 lsb: 0  msb: 0 OUTPUT
			this->CLK180_A0_B = CLK180_A0_B; // net ID: CLK180 lsb: 0  msb: 0 OUTPUT
			this->CLK270_A0_B = CLK270_A0_B; // net ID: CLK270 lsb: 0  msb: 0 OUTPUT
			this->CLK2X_A0_B = CLK2X_A0_B; // net ID: CLK2X lsb: 0  msb: 0 OUTPUT
			this->CLK2X180_A0_B = CLK2X180_A0_B; // net ID: CLK2X180 lsb: 0  msb: 0 OUTPUT
			this->CLK90_A0_B = CLK90_A0_B; // net ID: CLK90 lsb: 0  msb: 0 OUTPUT
			this->CLKDV_A0_B = CLKDV_A0_B; // net ID: CLKDV lsb: 0  msb: 0 OUTPUT
			this->CLKFX_A0_B = CLKFX_A0_B; // net ID: CLKFX lsb: 0  msb: 0 OUTPUT
			this->CLKFX180_A0_B = CLKFX180_A0_B; // net ID: CLKFX180 lsb: 0  msb: 0 OUTPUT
			this->DO_A15_B = DO_A15_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A14_B = DO_A14_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A13_B = DO_A13_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A12_B = DO_A12_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A11_B = DO_A11_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A10_B = DO_A10_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A9_B = DO_A9_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A8_B = DO_A8_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A7_B = DO_A7_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A6_B = DO_A6_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A5_B = DO_A5_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A4_B = DO_A4_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A3_B = DO_A3_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A2_B = DO_A2_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A1_B = DO_A1_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DO_A0_B = DO_A0_B; // net ID: DO lsb: 0  msb: 15 OUTPUT
			this->DRDY_A0_B = DRDY_A0_B; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			this->LOCKED_A0_B = LOCKED_A0_B; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			this->PSDONE_A0_B = PSDONE_A0_B; // net ID: PSDONE lsb: 0  msb: 0 OUTPUT
			this->CLKFB_A0_B = CLKFB_A0_B; // net ID: CLKFB lsb: 0  msb: 0 INPUT
			this->CLKIN_A0_B = CLKIN_A0_B; // net ID: CLKIN lsb: 0  msb: 0 INPUT
			this->DADDR_A6_B = DADDR_A6_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DADDR_A5_B = DADDR_A5_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DADDR_A4_B = DADDR_A4_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DADDR_A3_B = DADDR_A3_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DADDR_A2_B = DADDR_A2_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DADDR_A1_B = DADDR_A1_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DADDR_A0_B = DADDR_A0_B; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DCLK_A0_B = DCLK_A0_B; // net ID: DCLK lsb: 0  msb: 0 INPUT
			this->DEN_A0_B = DEN_A0_B; // net ID: DEN lsb: 0  msb: 0 INPUT
			this->DI_A15_B = DI_A15_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A14_B = DI_A14_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A13_B = DI_A13_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A12_B = DI_A12_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A11_B = DI_A11_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A10_B = DI_A10_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A9_B = DI_A9_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A8_B = DI_A8_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A7_B = DI_A7_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A6_B = DI_A6_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A5_B = DI_A5_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A4_B = DI_A4_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A3_B = DI_A3_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A2_B = DI_A2_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A1_B = DI_A1_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DI_A0_B = DI_A0_B; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DWE_A0_B = DWE_A0_B; // net ID: DWE lsb: 0  msb: 0 INPUT
			this->PSCLK_A0_B = PSCLK_A0_B; // net ID: PSCLK lsb: 0  msb: 0 INPUT
			this->PSEN_A0_B = PSEN_A0_B; // net ID: PSEN lsb: 0  msb: 0 INPUT
			this->PSINCDEC_A0_B = PSINCDEC_A0_B; // net ID: PSINCDEC lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		void calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_DCM_ADV_H
