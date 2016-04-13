/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_DCM_CLKGEN: public Primitive{

		//Verilog Parameters:
		parameter_string_t SPREAD_SPECTRUM;
		parameter_enum_t STARTUP_WAIT;
		parameter_string_t CLKFXDV_DIVIDE;
		parameter_string_t CLKFX_DIVIDE;
		parameter_string_t CLKFX_MULTIPLY;
		parameter_string_t CLKFX_MD_MAX;
		parameter_string_t CLKIN_PERIOD;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CLKFX; // net ID: CLKFX lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKFX180; // net ID: CLKFX180 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKFXDV; // net ID: CLKFXDV lsb: 0  msb: 0 OUTPUT
		NetFlow* LOCKED; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
		NetFlow* PROGDONE; // net ID: PROGDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* STATUS; // net ID: STATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKIN; // net ID: CLKIN lsb: 0  msb: 0 INPUT
		NetFlow* FREEZEDCM; // net ID: FREEZEDCM lsb: 0  msb: 0 INPUT
		NetFlow* PROGCLK; // net ID: PROGCLK lsb: 0  msb: 0 INPUT
		NetFlow* PROGDATA; // net ID: PROGDATA lsb: 0  msb: 0 INPUT
		NetFlow* PROGEN; // net ID: PROGEN lsb: 0  msb: 0 INPUT
		NetFlow* RST; // net ID: RST lsb: 0  msb: 0 INPUT
		
		X_DCM_CLKGEN(
			const char * name,
			//Verilog Parameters:
			parameter_string_t SPREAD_SPECTRUM, // Default: "NONE"
			parameter_enum_t STARTUP_WAIT, // Default: "FALSE"
			parameter_string_t CLKFXDV_DIVIDE, // Default: 2
			parameter_string_t CLKFX_DIVIDE, // Default: 1
			parameter_string_t CLKFX_MULTIPLY, // Default: 4
			parameter_string_t CLKFX_MD_MAX, // Default: 0.0
			parameter_string_t CLKIN_PERIOD, // Default: 0.0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CLKFX, // net ID: CLKFX lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKFX180, // net ID: CLKFX180 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKFXDV, // net ID: CLKFXDV lsb: 0  msb: 0 OUTPUT
			NetFlow* LOCKED, // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			NetFlow* PROGDONE, // net ID: PROGDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* STATUS, // net ID: STATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKIN, // net ID: CLKIN lsb: 0  msb: 0 INPUT
			NetFlow* FREEZEDCM, // net ID: FREEZEDCM lsb: 0  msb: 0 INPUT
			NetFlow* PROGCLK, // net ID: PROGCLK lsb: 0  msb: 0 INPUT
			NetFlow* PROGDATA, // net ID: PROGDATA lsb: 0  msb: 0 INPUT
			NetFlow* PROGEN, // net ID: PROGEN lsb: 0  msb: 0 INPUT
			NetFlow* RST // net ID: RST lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
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
			this->CLKFX = CLKFX; // net ID: CLKFX lsb: 0  msb: 0 OUTPUT
			this->CLKFX180 = CLKFX180; // net ID: CLKFX180 lsb: 0  msb: 0 OUTPUT
			this->CLKFXDV = CLKFXDV; // net ID: CLKFXDV lsb: 0  msb: 0 OUTPUT
			this->LOCKED = LOCKED; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			this->PROGDONE = PROGDONE; // net ID: PROGDONE lsb: 0  msb: 0 OUTPUT
			this->STATUS = STATUS; // net ID: STATUS lsb: 0  msb: 0 OUTPUT
			this->CLKIN = CLKIN; // net ID: CLKIN lsb: 0  msb: 0 INPUT
			this->FREEZEDCM = FREEZEDCM; // net ID: FREEZEDCM lsb: 0  msb: 0 INPUT
			this->PROGCLK = PROGCLK; // net ID: PROGCLK lsb: 0  msb: 0 INPUT
			this->PROGDATA = PROGDATA; // net ID: PROGDATA lsb: 0  msb: 0 INPUT
			this->PROGEN = PROGEN; // net ID: PROGEN lsb: 0  msb: 0 INPUT
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
