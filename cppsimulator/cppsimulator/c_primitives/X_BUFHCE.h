/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_BUFHCE: public Primitive{

		//Verilog Parameters:
		parameter_string_t CE_TYPE;
		parameter_string_t INIT_OUT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* CE; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* I; // net ID: I lsb: 0  msb: 0 INPUT
		
		X_BUFHCE(
			const char * name,
			//Verilog Parameters:
			parameter_string_t CE_TYPE, // Default: "SYNC"
			parameter_string_t INIT_OUT, // Default: 0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* CE, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* I // net ID: I lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->CE_TYPE = CE_TYPE; // Default: "SYNC"
			this->INIT_OUT = INIT_OUT; // Default: 0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->CE = CE; // net ID: CE lsb: 0  msb: 0 INPUT
			this->I = I; // net ID: I lsb: 0  msb: 0 INPUT
			
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
