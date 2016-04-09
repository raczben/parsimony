/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_CLKDLLE{

		//Verilog Parameters:
		parameter_int_t CLKDV_DIVIDE;
		parameter_enum_t DUTY_CYCLE_CORRECTION;
		parameter_int_t FACTORY_JF;
		parameter_int_t MAXPERCLKIN;
		parameter_int_t SIM_CLKIN_CYCLE_JITTER;
		parameter_int_t SIM_CLKIN_PERIOD_JITTER;
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
		NetFlow* LOCKED; // OUTPUT
		NetFlow* CLKFB; // INPUT
		NetFlow* CLKIN; // INPUT
		NetFlow* RST; // INPUT
		
	
		X_CLKDLLE(
			//Verilog Parameters:
			parameter_int_t CLKDV_DIVIDE, // Default: 2.0
			parameter_enum_t DUTY_CYCLE_CORRECTION, // Default: "TRUE"
			parameter_int_t FACTORY_JF, // Default: 16'hC080
			parameter_int_t MAXPERCLKIN, // Default: 40000
			parameter_int_t SIM_CLKIN_CYCLE_JITTER, // Default: 300
			parameter_int_t SIM_CLKIN_PERIOD_JITTER, // Default: 1000
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
			NetFlow* LOCKED, // OUTPUT
			NetFlow* CLKFB, // INPUT
			NetFlow* CLKIN, // INPUT
			NetFlow* RST // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->CLKDV_DIVIDE = CLKDV_DIVIDE; // Default: 2.0
			this->DUTY_CYCLE_CORRECTION = DUTY_CYCLE_CORRECTION; // Default: "TRUE"
			this->FACTORY_JF = FACTORY_JF; // Default: 16'hC080
			this->MAXPERCLKIN = MAXPERCLKIN; // Default: 40000
			this->SIM_CLKIN_CYCLE_JITTER = SIM_CLKIN_CYCLE_JITTER; // Default: 300
			this->SIM_CLKIN_PERIOD_JITTER = SIM_CLKIN_PERIOD_JITTER; // Default: 1000
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
			this->LOCKED = LOCKED; // OUTPUT
			this->CLKFB = CLKFB; // INPUT
			this->CLKIN = CLKIN; // INPUT
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
