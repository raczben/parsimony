/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_AUTOBUF_H
#define X_AUTOBUF_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_AUTOBUF: public Primitive{

		//Verilog Parameters:
		parameter_string_t BUFFER_TYPE;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
		
		public: X_AUTOBUF(
			const char * name,
			//Verilog Parameters:
			parameter_string_t BUFFER_TYPE, // Default: "AUTO"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* I_A0_B // net ID: I lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->BUFFER_TYPE = BUFFER_TYPE; // Default: "AUTO"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->I_A0_B = I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
			
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
#endif // X_AUTOBUF_H
