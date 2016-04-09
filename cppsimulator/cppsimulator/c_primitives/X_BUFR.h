/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_BUFR{

		//Verilog Parameters:
		parameter_string_t BUFR_DIVIDE;
		parameter_string_t SIM_DEVICE;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // OUTPUT
		NetFlow* CE; // INPUT
		NetFlow* CLR; // INPUT
		NetFlow* I; // INPUT
		
	
		X_BUFR(
			//Verilog Parameters:
			parameter_string_t BUFR_DIVIDE, // Default: "BYPASS"
			parameter_string_t SIM_DEVICE, // Default: "VIRTEX4"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // OUTPUT
			NetFlow* CE, // INPUT
			NetFlow* CLR, // INPUT
			NetFlow* I // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->BUFR_DIVIDE = BUFR_DIVIDE; // Default: "BYPASS"
			this->SIM_DEVICE = SIM_DEVICE; // Default: "VIRTEX4"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // OUTPUT
			this->CE = CE; // INPUT
			this->CLR = CLR; // INPUT
			this->I = I; // INPUT
		
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
