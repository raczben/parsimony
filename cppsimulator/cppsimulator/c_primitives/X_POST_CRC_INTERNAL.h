/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_POST_CRC_INTERNAL{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* CRCERROR; // OUTPUT
		
	
		X_POST_CRC_INTERNAL(
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* CRCERROR // OUTPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->CRCERROR = CRCERROR; // OUTPUT
		
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
