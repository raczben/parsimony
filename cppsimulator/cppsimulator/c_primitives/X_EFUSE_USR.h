/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_EFUSE_USR_H
#define X_EFUSE_USR_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_EFUSE_USR: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_int_t SIM_EFUSE_VALUE;
		//Verilog Ports in definition order:
		NetFlow* EFUSEUSR_A0_B; // net ID: EFUSEUSR lsb: 0  msb: 0 OUTPUT
		
		public: X_EFUSE_USR(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t SIM_EFUSE_VALUE, // Default: 32'h00000000
			//Verilog Ports in definition order:
			NetFlow* EFUSEUSR_A0_B // net ID: EFUSEUSR lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->SIM_EFUSE_VALUE = SIM_EFUSE_VALUE; // Default: 32'h00000000
			//Verilog Ports in definition order:
			this->EFUSEUSR_A0_B = EFUSEUSR_A0_B; // net ID: EFUSEUSR lsb: 0  msb: 0 OUTPUT
			
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
#endif // X_EFUSE_USR_H
