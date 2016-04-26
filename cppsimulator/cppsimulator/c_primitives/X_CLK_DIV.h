/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_CLK_DIV_H
#define X_CLK_DIV_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_CLK_DIV: public Primitive{

		//Verilog Parameters:
		parameter_int_t DIVIDE_BY;
		parameter_int_t DIVIDER_DELAY;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CLKDV_A0_B; // net ID: CLKDV lsb: 0  msb: 0 OUTPUT
		NetFlow* CDRST_A0_B; // net ID: CDRST lsb: 0  msb: 0 INPUT
		NetFlow* CLKIN_A0_B; // net ID: CLKIN lsb: 0  msb: 0 INPUT
		
		public: X_CLK_DIV(
			const char * name,
			//Verilog Parameters:
			parameter_int_t DIVIDE_BY, // Default: 2
			parameter_int_t DIVIDER_DELAY, // Default: 0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CLKDV_A0_B, // net ID: CLKDV lsb: 0  msb: 0 OUTPUT
			NetFlow* CDRST_A0_B, // net ID: CDRST lsb: 0  msb: 0 INPUT
			NetFlow* CLKIN_A0_B // net ID: CLKIN lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DIVIDE_BY = DIVIDE_BY; // Default: 2
			this->DIVIDER_DELAY = DIVIDER_DELAY; // Default: 0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CLKDV_A0_B = CLKDV_A0_B; // net ID: CLKDV lsb: 0  msb: 0 OUTPUT
			this->CDRST_A0_B = CDRST_A0_B; // net ID: CDRST lsb: 0  msb: 0 INPUT
			this->CLKIN_A0_B = CLKIN_A0_B; // net ID: CLKIN lsb: 0  msb: 0 INPUT
			
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
#endif // X_CLK_DIV_H
