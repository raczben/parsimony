/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_CLK_DIV: public Primitive{

		//Verilog Parameters:
		parameter_string_t DIVIDE_BY;
		parameter_string_t DIVIDER_DELAY;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CLKDV; // net ID: CLKDV lsb: 0  msb: 0 OUTPUT
		NetFlow* CDRST; // net ID: CDRST lsb: 0  msb: 0 INPUT
		NetFlow* CLKIN; // net ID: CLKIN lsb: 0  msb: 0 INPUT
		
		X_CLK_DIV(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DIVIDE_BY, // Default: 2
			parameter_string_t DIVIDER_DELAY, // Default: 0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CLKDV, // net ID: CLKDV lsb: 0  msb: 0 OUTPUT
			NetFlow* CDRST, // net ID: CDRST lsb: 0  msb: 0 INPUT
			NetFlow* CLKIN // net ID: CLKIN lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DIVIDE_BY = DIVIDE_BY; // Default: 2
			this->DIVIDER_DELAY = DIVIDER_DELAY; // Default: 0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CLKDV = CLKDV; // net ID: CLKDV lsb: 0  msb: 0 OUTPUT
			this->CDRST = CDRST; // net ID: CDRST lsb: 0  msb: 0 INPUT
			this->CLKIN = CLKIN; // net ID: CLKIN lsb: 0  msb: 0 INPUT
			
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
