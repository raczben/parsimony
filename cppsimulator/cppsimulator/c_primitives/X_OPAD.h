/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_OPAD_H
#define X_OPAD_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_OPAD: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* PAD_A0_B; // net ID: PAD lsb: 0  msb: 0 OUTPUT
		
		public: X_OPAD(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* PAD_A0_B // net ID: PAD lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->PAD_A0_B = PAD_A0_B; // net ID: PAD lsb: 0  msb: 0 OUTPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		void calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_OPAD_H
