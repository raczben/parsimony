/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_DCM_CLKGEN_H
#define X_DCM_CLKGEN_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_DCM_CLKGEN: public Primitive{

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
		NetFlow* CLKFX_A0_B; // net ID: CLKFX lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKFX180_A0_B; // net ID: CLKFX180 lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKFXDV_A0_B; // net ID: CLKFXDV lsb: 0  msb: 0 OUTPUT
		NetFlow* LOCKED_A0_B; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
		NetFlow* PROGDONE_A0_B; // net ID: PROGDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* STATUS_A0_B; // net ID: STATUS lsb: 0  msb: 7 OUTPUT
		NetFlow* STATUS_A1_B; // net ID: STATUS lsb: 0  msb: 7 OUTPUT
		NetFlow* STATUS_A2_B; // net ID: STATUS lsb: 0  msb: 7 OUTPUT
		NetFlow* STATUS_A3_B; // net ID: STATUS lsb: 0  msb: 7 OUTPUT
		NetFlow* STATUS_A4_B; // net ID: STATUS lsb: 0  msb: 7 OUTPUT
		NetFlow* STATUS_A5_B; // net ID: STATUS lsb: 0  msb: 7 OUTPUT
		NetFlow* STATUS_A6_B; // net ID: STATUS lsb: 0  msb: 7 OUTPUT
		NetFlow* STATUS_A7_B; // net ID: STATUS lsb: 0  msb: 7 OUTPUT
		NetFlow* CLKIN_A0_B; // net ID: CLKIN lsb: 0  msb: 0 INPUT
		NetFlow* FREEZEDCM_A0_B; // net ID: FREEZEDCM lsb: 0  msb: 0 INPUT
		NetFlow* PROGCLK_A0_B; // net ID: PROGCLK lsb: 0  msb: 0 INPUT
		NetFlow* PROGDATA_A0_B; // net ID: PROGDATA lsb: 0  msb: 0 INPUT
		NetFlow* PROGEN_A0_B; // net ID: PROGEN lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		
		public: X_DCM_CLKGEN(
			const char * name,
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
			NetFlow* CLKFX_A0_B, // net ID: CLKFX lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKFX180_A0_B, // net ID: CLKFX180 lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKFXDV_A0_B, // net ID: CLKFXDV lsb: 0  msb: 0 OUTPUT
			NetFlow* LOCKED_A0_B, // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			NetFlow* PROGDONE_A0_B, // net ID: PROGDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* STATUS_A0_B, // net ID: STATUS lsb: 0  msb: 7 OUTPUT
			NetFlow* STATUS_A1_B, // net ID: STATUS lsb: 0  msb: 7 OUTPUT
			NetFlow* STATUS_A2_B, // net ID: STATUS lsb: 0  msb: 7 OUTPUT
			NetFlow* STATUS_A3_B, // net ID: STATUS lsb: 0  msb: 7 OUTPUT
			NetFlow* STATUS_A4_B, // net ID: STATUS lsb: 0  msb: 7 OUTPUT
			NetFlow* STATUS_A5_B, // net ID: STATUS lsb: 0  msb: 7 OUTPUT
			NetFlow* STATUS_A6_B, // net ID: STATUS lsb: 0  msb: 7 OUTPUT
			NetFlow* STATUS_A7_B, // net ID: STATUS lsb: 0  msb: 7 OUTPUT
			NetFlow* CLKIN_A0_B, // net ID: CLKIN lsb: 0  msb: 0 INPUT
			NetFlow* FREEZEDCM_A0_B, // net ID: FREEZEDCM lsb: 0  msb: 0 INPUT
			NetFlow* PROGCLK_A0_B, // net ID: PROGCLK lsb: 0  msb: 0 INPUT
			NetFlow* PROGDATA_A0_B, // net ID: PROGDATA lsb: 0  msb: 0 INPUT
			NetFlow* PROGEN_A0_B, // net ID: PROGEN lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B // net ID: RST lsb: 0  msb: 0 INPUT
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
			this->CLKFX_A0_B = CLKFX_A0_B; // net ID: CLKFX lsb: 0  msb: 0 OUTPUT
			this->CLKFX180_A0_B = CLKFX180_A0_B; // net ID: CLKFX180 lsb: 0  msb: 0 OUTPUT
			this->CLKFXDV_A0_B = CLKFXDV_A0_B; // net ID: CLKFXDV lsb: 0  msb: 0 OUTPUT
			this->LOCKED_A0_B = LOCKED_A0_B; // net ID: LOCKED lsb: 0  msb: 0 OUTPUT
			this->PROGDONE_A0_B = PROGDONE_A0_B; // net ID: PROGDONE lsb: 0  msb: 0 OUTPUT
			this->STATUS_A0_B = STATUS_A0_B; // net ID: STATUS lsb: 0  msb: 7 OUTPUT
			this->STATUS_A1_B = STATUS_A1_B; // net ID: STATUS lsb: 0  msb: 7 OUTPUT
			this->STATUS_A2_B = STATUS_A2_B; // net ID: STATUS lsb: 0  msb: 7 OUTPUT
			this->STATUS_A3_B = STATUS_A3_B; // net ID: STATUS lsb: 0  msb: 7 OUTPUT
			this->STATUS_A4_B = STATUS_A4_B; // net ID: STATUS lsb: 0  msb: 7 OUTPUT
			this->STATUS_A5_B = STATUS_A5_B; // net ID: STATUS lsb: 0  msb: 7 OUTPUT
			this->STATUS_A6_B = STATUS_A6_B; // net ID: STATUS lsb: 0  msb: 7 OUTPUT
			this->STATUS_A7_B = STATUS_A7_B; // net ID: STATUS lsb: 0  msb: 7 OUTPUT
			this->CLKIN_A0_B = CLKIN_A0_B; // net ID: CLKIN lsb: 0  msb: 0 INPUT
			this->FREEZEDCM_A0_B = FREEZEDCM_A0_B; // net ID: FREEZEDCM lsb: 0  msb: 0 INPUT
			this->PROGCLK_A0_B = PROGCLK_A0_B; // net ID: PROGCLK lsb: 0  msb: 0 INPUT
			this->PROGDATA_A0_B = PROGDATA_A0_B; // net ID: PROGDATA lsb: 0  msb: 0 INPUT
			this->PROGEN_A0_B = PROGEN_A0_B; // net ID: PROGEN lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
			
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
#endif // X_DCM_CLKGEN_H
