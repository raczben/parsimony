/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_JTAG_SIM_VIRTEX4{

		//Verilog Parameters:
		parameter_string_t PART_NAME;
		//Verilog Ports in definition order:
		NetFlow* TDO; // OUTPUT
		NetFlow* TCK; // INPUT
		NetFlow* TDI; // INPUT
		NetFlow* TMS; // INPUT
		
	
		X_JTAG_SIM_VIRTEX4(
			//Verilog Parameters:
			parameter_string_t PART_NAME, // Default: "LX15"
			//Verilog Ports in definition order:
			NetFlow* TDO, // OUTPUT
			NetFlow* TCK, // INPUT
			NetFlow* TDI, // INPUT
			NetFlow* TMS // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->PART_NAME = PART_NAME; // Default: "LX15"
			//Verilog Ports in definition order:
			this->TDO = TDO; // OUTPUT
			this->TCK = TCK; // INPUT
			this->TDI = TDI; // INPUT
			this->TMS = TMS; // INPUT
		
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
