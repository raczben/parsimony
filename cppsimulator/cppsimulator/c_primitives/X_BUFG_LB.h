/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_BUFG_LB_H
#define X_BUFG_LB_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_BUFG_LB: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CLKOUT_A0_B; // net ID: CLKOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CLKIN_A0_B; // net ID: CLKIN lsb: 0  msb: 0 INPUT
		
		public: X_BUFG_LB(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CLKOUT_A0_B, // net ID: CLKOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CLKIN_A0_B // net ID: CLKIN lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CLKOUT_A0_B = CLKOUT_A0_B; // net ID: CLKOUT lsb: 0  msb: 0 OUTPUT
			this->CLKIN_A0_B = CLKIN_A0_B; // net ID: CLKIN lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		bool calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_BUFG_LB_H
