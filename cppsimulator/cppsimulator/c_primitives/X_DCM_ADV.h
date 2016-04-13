/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_DCM_ADV: public Primitive{

		//Verilog Parameters:
		parameter_string_t CLKDV_DIVIDE;
		parameter_string_t CLKFX_DIVIDE;
		parameter_string_t CLKFX_MULTIPLY;
		parameter_enum_t CLKIN_DIVIDE_BY_2;
		parameter_string_t CLKIN_PERIOD;
		parameter_string_t CLKOUT_PHASE_SHIFT;
		parameter_string_t CLK_FEEDBACK;
		parameter_enum_t DCM_AUTOCALIBRATION;
		parameter_string_t DCM_PERFORMANCE_MODE;
		parameter_string_t DESKEW_ADJUST;
		parameter_string_t DFS_FREQUENCY_MODE;
		parameter_string_t DLL_FREQUENCY_MODE;
		parameter_enum_t DUTY_CYCLE_CORRECTION;
		parameter_string_t FACTORY_JF;
		parameter_string_t MAXPERCLKIN;
		parameter_string_t MAXPERPSCLK;
		parameter_string_t PHASE_SHIFT;
		parameter_string_t SIM_CLKIN_CYCLE_JITTER;
		parameter_string_t SIM_CLKIN_PERIOD_JITTER;
		parameter_string_t SIM_DEVICE;
		parameter_string_t LOC;
		parameter_enum_t STARTUP_WAIT;
		//Verilog Ports in definition order:
		NetFlow* CLK0; // net ID: CLK0 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK180; // net ID: CLK180 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK270; // net ID: CLK270 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK2X; // net ID: CLK2X lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK2X180; // net ID: CLK2X180 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK90; // net ID: CLK90 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKDV; // net ID: CLKDV lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKFX; // net ID: CLKFX lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKFX180; // net ID: CLKFX180 lsb: 0  msb: 0 OUTPUT
		NetFlow* DO; // net ID: DO lsb: 0  msb: 0 OUTPUT
		NetFlow* DRDY; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* LOCKED; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
		NetFlow* PSDONE; // net ID: PSDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKFB; // net ID: CLKFB lsb: 0  msb: 0 INPUT
		NetFlow* CLKIN; // net ID: CLKIN lsb: 0  msb: 0 INPUT
		NetFlow* DADDR; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DCLK; // net ID: DCLK lsb: 0  msb: 0 INPUT
		NetFlow* DEN; // net ID: DEN lsb: 0  msb: 0 INPUT
		NetFlow* DI; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DWE; // net ID: DWE lsb: 0  msb: 0 INPUT
		NetFlow* PSCLK; // net ID: PSCLK lsb: 0  msb: 0 INPUT
		NetFlow* PSEN; // net ID: PSEN lsb: 0  msb: 0 INPUT
		NetFlow* PSINCDEC; // net ID: PSINCDEC lsb: 0  msb: 0 INPUT
		NetFlow* RST; // net ID: RST lsb: 0  msb: 0 INPUT
		
		X_DCM_ADV(
			const char * name,
			//Verilog Parameters:
			parameter_string_t CLKDV_DIVIDE, // Default: 2.0
			parameter_string_t CLKFX_DIVIDE, // Default: 1
			parameter_string_t CLKFX_MULTIPLY, // Default: 4
			parameter_enum_t CLKIN_DIVIDE_BY_2, // Default: "FALSE"
			parameter_string_t CLKIN_PERIOD, // Default: 10.0
			parameter_string_t CLKOUT_PHASE_SHIFT, // Default: "NONE"
			parameter_string_t CLK_FEEDBACK, // Default: "1X"
			parameter_enum_t DCM_AUTOCALIBRATION, // Default: "TRUE"
			parameter_string_t DCM_PERFORMANCE_MODE, // Default: "MAX_SPEED"
			parameter_string_t DESKEW_ADJUST, // Default: "SYSTEM_SYNCHRONOUS"
			parameter_string_t DFS_FREQUENCY_MODE, // Default: "LOW"
			parameter_string_t DLL_FREQUENCY_MODE, // Default: "LOW"
			parameter_enum_t DUTY_CYCLE_CORRECTION, // Default: "TRUE"
			parameter_string_t FACTORY_JF, // Default: 16'hF0F0
			parameter_string_t MAXPERCLKIN, // Default: 1000000
			parameter_string_t MAXPERPSCLK, // Default: 100000000
			parameter_string_t PHASE_SHIFT, // Default: 0
			parameter_string_t SIM_CLKIN_CYCLE_JITTER, // Default: 300
			parameter_string_t SIM_CLKIN_PERIOD_JITTER, // Default: 1000
			parameter_string_t SIM_DEVICE, // Default: "VIRTEX4"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t STARTUP_WAIT, // Default: "FALSE"
			//Verilog Ports in definition order:
			NetFlow* CLK0, // net ID: CLK0 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK180, // net ID: CLK180 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK270, // net ID: CLK270 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK2X, // net ID: CLK2X lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK2X180, // net ID: CLK2X180 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK90, // net ID: CLK90 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKDV, // net ID: CLKDV lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKFX, // net ID: CLKFX lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKFX180, // net ID: CLKFX180 lsb: 0  msb: 0 OUTPUT
			NetFlow* DO, // net ID: DO lsb: 0  msb: 0 OUTPUT
			NetFlow* DRDY, // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* LOCKED, // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			NetFlow* PSDONE, // net ID: PSDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKFB, // net ID: CLKFB lsb: 0  msb: 0 INPUT
			NetFlow* CLKIN, // net ID: CLKIN lsb: 0  msb: 0 INPUT
			NetFlow* DADDR, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DCLK, // net ID: DCLK lsb: 0  msb: 0 INPUT
			NetFlow* DEN, // net ID: DEN lsb: 0  msb: 0 INPUT
			NetFlow* DI, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DWE, // net ID: DWE lsb: 0  msb: 0 INPUT
			NetFlow* PSCLK, // net ID: PSCLK lsb: 0  msb: 0 INPUT
			NetFlow* PSEN, // net ID: PSEN lsb: 0  msb: 0 INPUT
			NetFlow* PSINCDEC, // net ID: PSINCDEC lsb: 0  msb: 0 INPUT
			NetFlow* RST // net ID: RST lsb: 0  msb: 0 INPUT
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
			this->CLK0 = CLK0; // net ID: CLK0 lsb: 0  msb: 0 OUTPUT
			this->CLK180 = CLK180; // net ID: CLK180 lsb: 0  msb: 0 OUTPUT
			this->CLK270 = CLK270; // net ID: CLK270 lsb: 0  msb: 0 OUTPUT
			this->CLK2X = CLK2X; // net ID: CLK2X lsb: 0  msb: 0 OUTPUT
			this->CLK2X180 = CLK2X180; // net ID: CLK2X180 lsb: 0  msb: 0 OUTPUT
			this->CLK90 = CLK90; // net ID: CLK90 lsb: 0  msb: 0 OUTPUT
			this->CLKDV = CLKDV; // net ID: CLKDV lsb: 0  msb: 0 OUTPUT
			this->CLKFX = CLKFX; // net ID: CLKFX lsb: 0  msb: 0 OUTPUT
			this->CLKFX180 = CLKFX180; // net ID: CLKFX180 lsb: 0  msb: 0 OUTPUT
			this->DO = DO; // net ID: DO lsb: 0  msb: 0 OUTPUT
			this->DRDY = DRDY; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			this->LOCKED = LOCKED; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			this->PSDONE = PSDONE; // net ID: PSDONE lsb: 0  msb: 0 OUTPUT
			this->CLKFB = CLKFB; // net ID: CLKFB lsb: 0  msb: 0 INPUT
			this->CLKIN = CLKIN; // net ID: CLKIN lsb: 0  msb: 0 INPUT
			this->DADDR = DADDR; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DCLK = DCLK; // net ID: DCLK lsb: 0  msb: 0 INPUT
			this->DEN = DEN; // net ID: DEN lsb: 0  msb: 0 INPUT
			this->DI = DI; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DWE = DWE; // net ID: DWE lsb: 0  msb: 0 INPUT
			this->PSCLK = PSCLK; // net ID: PSCLK lsb: 0  msb: 0 INPUT
			this->PSEN = PSEN; // net ID: PSEN lsb: 0  msb: 0 INPUT
			this->PSINCDEC = PSINCDEC; // net ID: PSINCDEC lsb: 0  msb: 0 INPUT
			this->RST = RST; // net ID: RST lsb: 0  msb: 0 INPUT
			
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
