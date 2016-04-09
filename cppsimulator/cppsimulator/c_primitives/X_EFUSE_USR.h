/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_EFUSE_USR{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_int_t SIM_EFUSE_VALUE;
		//Verilog Ports in definition order:
		NetFlow* EFUSEUSR; // OUTPUT
		
	
		X_EFUSE_USR(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t SIM_EFUSE_VALUE, // Default: 32'h00000000
			//Verilog Ports in definition order:
			NetFlow* EFUSEUSR // OUTPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->SIM_EFUSE_VALUE = SIM_EFUSE_VALUE; // Default: 32'h00000000
			//Verilog Ports in definition order:
			this->EFUSEUSR = EFUSEUSR; // OUTPUT
		
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
