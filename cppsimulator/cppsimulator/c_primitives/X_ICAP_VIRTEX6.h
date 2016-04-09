/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_ICAP_VIRTEX6{

		//Verilog Parameters:
		parameter_int_t DEVICE_ID;
		parameter_string_t LOC;
		parameter_string_t ICAP_WIDTH;
		parameter_string_t SIM_CFG_FILE_NAME;
		//Verilog Ports in definition order:
		NetFlow* BUSY; // OUTPUT
		NetFlow* O; // OUTPUT
		NetFlow* CLK; // INPUT
		NetFlow* CSB; // INPUT
		NetFlow* I; // INPUT
		NetFlow* RDWRB; // INPUT
		
	
		X_ICAP_VIRTEX6(
			//Verilog Parameters:
			parameter_int_t DEVICE_ID, // Default: 32'h04244093
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t ICAP_WIDTH, // Default: "X8"
			parameter_string_t SIM_CFG_FILE_NAME, // Default: "NONE"
			//Verilog Ports in definition order:
			NetFlow* BUSY, // OUTPUT
			NetFlow* O, // OUTPUT
			NetFlow* CLK, // INPUT
			NetFlow* CSB, // INPUT
			NetFlow* I, // INPUT
			NetFlow* RDWRB // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DEVICE_ID = DEVICE_ID; // Default: 32'h04244093
			this->LOC = LOC; // Default: "UNPLACED"
			this->ICAP_WIDTH = ICAP_WIDTH; // Default: "X8"
			this->SIM_CFG_FILE_NAME = SIM_CFG_FILE_NAME; // Default: "NONE"
			//Verilog Ports in definition order:
			this->BUSY = BUSY; // OUTPUT
			this->O = O; // OUTPUT
			this->CLK = CLK; // INPUT
			this->CSB = CSB; // INPUT
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
