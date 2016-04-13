/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_BUFG_LB: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CLKOUT; // net ID: CLKOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKIN; // net ID: CLKIN lsb: 0  msb: 0 INPUT
		
		X_BUFG_LB(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CLKOUT, // net ID: CLKOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKIN // net ID: CLKIN lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CLKOUT = CLKOUT; // net ID: CLKOUT lsb: 0  msb: 0 OUTPUT
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
