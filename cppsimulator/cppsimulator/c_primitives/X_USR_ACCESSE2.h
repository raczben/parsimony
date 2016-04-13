/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_USR_ACCESSE2: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CFGCLK; // net ID: CFGCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* DATA; // net ID: DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* DATAVALID; // net ID: DATAVALID lsb: 0  msb: 0 OUTPUT
		
		X_USR_ACCESSE2(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CFGCLK, // net ID: CFGCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* DATA, // net ID: DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* DATAVALID // net ID: DATAVALID lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CFGCLK = CFGCLK; // net ID: CFGCLK lsb: 0  msb: 0 OUTPUT
			this->DATA = DATA; // net ID: DATA lsb: 0  msb: 0 OUTPUT
			this->DATAVALID = DATAVALID; // net ID: DATAVALID lsb: 0  msb: 0 OUTPUT
			
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
