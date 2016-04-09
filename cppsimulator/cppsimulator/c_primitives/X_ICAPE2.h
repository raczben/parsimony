/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_ICAPE2{

		//Verilog Parameters:
		parameter_int_t DEVICE_ID;
		parameter_string_t ICAP_WIDTH;
		parameter_string_t SIM_CFG_FILE_NAME;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // OUTPUT
		NetFlow* CLK; // INPUT
		NetFlow* CSIB; // INPUT
		NetFlow* I; // INPUT
		NetFlow* RDWRB; // INPUT
		
	
		X_ICAPE2(
			//Verilog Parameters:
			parameter_int_t DEVICE_ID, // Default: 32'h03651093
			parameter_string_t ICAP_WIDTH, // Default: "X32"
			parameter_string_t SIM_CFG_FILE_NAME, // Default: "NONE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // OUTPUT
			NetFlow* CLK, // INPUT
			NetFlow* CSIB, // INPUT
			NetFlow* I, // INPUT
			NetFlow* RDWRB // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DEVICE_ID = DEVICE_ID; // Default: 32'h03651093
			this->ICAP_WIDTH = ICAP_WIDTH; // Default: "X32"
			this->SIM_CFG_FILE_NAME = SIM_CFG_FILE_NAME; // Default: "NONE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // OUTPUT
			this->CLK = CLK; // INPUT
			this->CSIB = CSIB; // INPUT
			this->I = I; // INPUT
			this->RDWRB = RDWRB; // INPUT
		
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
