/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_CLKDLL: public Primitive{

		//Verilog Parameters:
		parameter_string_t CLKDV_DIVIDE;
		parameter_string_t DLL_FREQUENCY_MODE;
		parameter_enum_t DUTY_CYCLE_CORRECTION;
		parameter_string_t FACTORY_JF;
		parameter_string_t MAXPERCLKIN;
		parameter_string_t SIM_CLKIN_CYCLE_JITTER;
		parameter_string_t SIM_CLKIN_PERIOD_JITTER;
		parameter_string_t LOC;
		parameter_enum_t STARTUP_WAIT;
		//Verilog Ports in definition order:
		NetFlow* CLK0; // net ID: CLK0 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK180; // net ID: CLK180 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK270; // net ID: CLK270 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK2X; // net ID: CLK2X lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK90; // net ID: CLK90 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKDV; // net ID: CLKDV lsb: 0  msb: 0 OUTPUT
		NetFlow* LOCKED; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKFB; // net ID: CLKFB lsb: 0  msb: 0 INPUT
		NetFlow* CLKIN; // net ID: CLKIN lsb: 0  msb: 0 INPUT
		NetFlow* RST; // net ID: RST lsb: 0  msb: 0 INPUT
		
		X_CLKDLL(
			const char * name,
			//Verilog Parameters:
			parameter_string_t CLKDV_DIVIDE, // Default: 2.0
			parameter_string_t DLL_FREQUENCY_MODE, // Default: "LOW"
			parameter_enum_t DUTY_CYCLE_CORRECTION, // Default: "TRUE"
			parameter_string_t FACTORY_JF, // Default: 16'hC080
			parameter_string_t MAXPERCLKIN, // Default: 40000
			parameter_string_t SIM_CLKIN_CYCLE_JITTER, // Default: 300
			parameter_string_t SIM_CLKIN_PERIOD_JITTER, // Default: 1000
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t STARTUP_WAIT, // Default: "FALSE"
			//Verilog Ports in definition order:
			NetFlow* CLK0, // net ID: CLK0 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK180, // net ID: CLK180 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK270, // net ID: CLK270 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK2X, // net ID: CLK2X lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK90, // net ID: CLK90 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKDV, // net ID: CLKDV lsb: 0  msb: 0 OUTPUT
			NetFlow* LOCKED, // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKFB, // net ID: CLKFB lsb: 0  msb: 0 INPUT
			NetFlow* CLKIN, // net ID: CLKIN lsb: 0  msb: 0 INPUT
			NetFlow* RST // net ID: RST lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->CLKDV_DIVIDE = CLKDV_DIVIDE; // Default: 2.0
			this->DLL_FREQUENCY_MODE = DLL_FREQUENCY_MODE; // Default: "LOW"
			this->DUTY_CYCLE_CORRECTION = DUTY_CYCLE_CORRECTION; // Default: "TRUE"
			this->FACTORY_JF = FACTORY_JF; // Default: 16'hC080
			this->MAXPERCLKIN = MAXPERCLKIN; // Default: 40000
			this->SIM_CLKIN_CYCLE_JITTER = SIM_CLKIN_CYCLE_JITTER; // Default: 300
			this->SIM_CLKIN_PERIOD_JITTER = SIM_CLKIN_PERIOD_JITTER; // Default: 1000
			this->LOC = LOC; // Default: "UNPLACED"
			this->STARTUP_WAIT = STARTUP_WAIT; // Default: "FALSE"
			//Verilog Ports in definition order:
			this->CLK0 = CLK0; // net ID: CLK0 lsb: 0  msb: 0 OUTPUT
			this->CLK180 = CLK180; // net ID: CLK180 lsb: 0  msb: 0 OUTPUT
			this->CLK270 = CLK270; // net ID: CLK270 lsb: 0  msb: 0 OUTPUT
			this->CLK2X = CLK2X; // net ID: CLK2X lsb: 0  msb: 0 OUTPUT
			this->CLK90 = CLK90; // net ID: CLK90 lsb: 0  msb: 0 OUTPUT
			this->CLKDV = CLKDV; // net ID: CLKDV lsb: 0  msb: 0 OUTPUT
			this->LOCKED = LOCKED; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			this->CLKFB = CLKFB; // net ID: CLKFB lsb: 0  msb: 0 INPUT
			this->CLKIN = CLKIN; // net ID: CLKIN lsb: 0  msb: 0 INPUT
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
