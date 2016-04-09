/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_DCM_CLKGEN{

		//Verilog Parameters:
		parameter_string_t SPREAD_SPECTRUM;
		parameter_enum_t STARTUP_WAIT;
		parameter_int_t CLKFXDV_DIVIDE;
		parameter_int_t CLKFX_DIVIDE;
		parameter_int_t CLKFX_MULTIPLY;
		parameter_int_t CLKFX_MD_MAX;
		parameter_int_t CLKIN_PERIOD;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CLKFX; // OUTPUT
		NetFlow* CLKFX180; // OUTPUT
		NetFlow* CLKFXDV; // OUTPUT
		NetFlow* LOCKED; // OUTPUT
		NetFlow* PROGDONE; // OUTPUT
		NetFlow* STATUS; // OUTPUT
		NetFlow* CLKIN; // INPUT
		NetFlow* FREEZEDCM; // INPUT
		NetFlow* PROGCLK; // INPUT
		NetFlow* PROGDATA; // INPUT
		NetFlow* PROGEN; // INPUT
		NetFlow* RST; // INPUT
		
	
		X_DCM_CLKGEN(
			//Verilog Parameters:
			parameter_string_t SPREAD_SPECTRUM, // Default: "NONE"
			parameter_enum_t STARTUP_WAIT, // Default: "FALSE"
			parameter_int_t CLKFXDV_DIVIDE, // Default: 2
			parameter_int_t CLKFX_DIVIDE, // Default: 1
			parameter_int_t CLKFX_MULTIPLY, // Default: 4
			parameter_int_t CLKFX_MD_MAX, // Default: 0.0
			parameter_int_t CLKIN_PERIOD, // Default: 0.0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CLKFX, // OUTPUT
			NetFlow* CLKFX180, // OUTPUT
			NetFlow* CLKFXDV, // OUTPUT
			NetFlow* LOCKED, // OUTPUT
			NetFlow* PROGDONE, // OUTPUT
			NetFlow* STATUS, // OUTPUT
			NetFlow* CLKIN, // INPUT
			NetFlow* FREEZEDCM, // INPUT
			NetFlow* PROGCLK, // INPUT
			NetFlow* PROGDATA, // INPUT
			NetFlow* PROGEN, // INPUT
			NetFlow* RST // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->SPREAD_SPECTRUM = SPREAD_SPECTRUM; // Default: "NONE"
			this->STARTUP_WAIT = STARTUP_WAIT; // Default: "FALSE"
			this->CLKFXDV_DIVIDE = CLKFXDV_DIVIDE; // Default: 2
			this->CLKFX_DIVIDE = CLKFX_DIVIDE; // Default: 1
			this->CLKFX_MULTIPLY = CLKFX_MULTIPLY; // Default: 4
			this->CLKFX_MD_MAX = CLKFX_MD_MAX; // Default: 0.0
			this->CLKIN_PERIOD = CLKIN_PERIOD; // Default: 0.0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CLKFX = CLKFX; // OUTPUT
			this->CLKFX180 = CLKFX180; // OUTPUT
			this->CLKFXDV = CLKFXDV; // OUTPUT
			this->LOCKED = LOCKED; // OUTPUT
			this->PROGDONE = PROGDONE; // OUTPUT
			this->STATUS = STATUS; // OUTPUT
			this->CLKIN = CLKIN; // INPUT
			this->FREEZEDCM = FREEZEDCM; // INPUT
			this->PROGCLK = PROGCLK; // INPUT
			this->PROGDATA = PROGDATA; // INPUT
			this->PROGEN = PROGEN; // INPUT
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
