/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_EFUSE_USR: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t SIM_EFUSE_VALUE;
		//Verilog Ports in definition order:
		NetFlow* EFUSEUSR; // net ID: EFUSEUSR lsb: 0  msb: 0 OUTPUT
		
		X_EFUSE_USR(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t SIM_EFUSE_VALUE, // Default: 32'h00000000
			//Verilog Ports in definition order:
			NetFlow* EFUSEUSR // net ID: EFUSEUSR lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->SIM_EFUSE_VALUE = SIM_EFUSE_VALUE; // Default: 32'h00000000
			//Verilog Ports in definition order:
			this->EFUSEUSR = EFUSEUSR; // net ID: EFUSEUSR lsb: 0  msb: 0 OUTPUT
			
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
