/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_DCM_ADV{

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
		NetFlow* CLK0; // OUTPUT
		NetFlow* CLK180; // OUTPUT
		NetFlow* CLK270; // OUTPUT
		NetFlow* CLK2X; // OUTPUT
		NetFlow* CLK2X180; // OUTPUT
		NetFlow* CLK90; // OUTPUT
		NetFlow* CLKDV; // OUTPUT
		NetFlow* CLKFX; // OUTPUT
		NetFlow* CLKFX180; // OUTPUT
		NetFlow* DO; // OUTPUT
		NetFlow* DRDY; // OUTPUT
		NetFlow* LOCKED; // OUTPUT
		NetFlow* PSDONE; // OUTPUT
		NetFlow* CLKFB; // INPUT
		NetFlow* CLKIN; // INPUT
		NetFlow* DADDR; // INPUT
		NetFlow* DCLK; // INPUT
		NetFlow* DEN; // INPUT
		NetFlow* DI; // INPUT
		NetFlow* DWE; // INPUT
		NetFlow* PSCLK; // INPUT
		NetFlow* PSEN; // INPUT
		NetFlow* PSINCDEC; // INPUT
		NetFlow* RST; // INPUT
		
	
		X_DCM_ADV(
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
			NetFlow* CLK0, // OUTPUT
			NetFlow* CLK180, // OUTPUT
			NetFlow* CLK270, // OUTPUT
			NetFlow* CLK2X, // OUTPUT
			NetFlow* CLK2X180, // OUTPUT
			NetFlow* CLK90, // OUTPUT
			NetFlow* CLKDV, // OUTPUT
			NetFlow* CLKFX, // OUTPUT
			NetFlow* CLKFX180, // OUTPUT
			NetFlow* DO, // OUTPUT
			NetFlow* DRDY, // OUTPUT
			NetFlow* LOCKED, // OUTPUT
			NetFlow* PSDONE, // OUTPUT
			NetFlow* CLKFB, // INPUT
			NetFlow* CLKIN, // INPUT
			NetFlow* DADDR, // INPUT
			NetFlow* DCLK, // INPUT
			NetFlow* DEN, // INPUT
			NetFlow* DI, // INPUT
			NetFlow* DWE, // INPUT
			NetFlow* PSCLK, // INPUT
			NetFlow* PSEN, // INPUT
			NetFlow* PSINCDEC, // INPUT
			NetFlow* RST // INPUT
			){
		
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
			this->CLK0 = CLK0; // OUTPUT
			this->CLK180 = CLK180; // OUTPUT
			this->CLK270 = CLK270; // OUTPUT
			this->CLK2X = CLK2X; // OUTPUT
			this->CLK2X180 = CLK2X180; // OUTPUT
			this->CLK90 = CLK90; // OUTPUT
			this->CLKDV = CLKDV; // OUTPUT
			this->CLKFX = CLKFX; // OUTPUT
			this->CLKFX180 = CLKFX180; // OUTPUT
			this->DO = DO; // OUTPUT
			this->DRDY = DRDY; // OUTPUT
			this->LOCKED = LOCKED; // OUTPUT
			this->PSDONE = PSDONE; // OUTPUT
			this->CLKFB = CLKFB; // INPUT
			this->CLKIN = CLKIN; // INPUT
			this->DADDR = DADDR; // INPUT
			this->DCLK = DCLK; // INPUT
			this->DEN = DEN; // INPUT
			this->DI = DI; // INPUT
			this->DWE = DWE; // INPUT
			this->PSCLK = PSCLK; // INPUT
			this->PSEN = PSEN; // INPUT
			this->PSINCDEC = PSINCDEC; // INPUT
			this->RST = RST; // INPUT
		
			register_wait_on_event_nets();
		
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		void calculate(int time){
		// TODO
		}
	};
	

}
