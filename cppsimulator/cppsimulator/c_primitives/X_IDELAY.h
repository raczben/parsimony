/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_IDELAY{

		//Verilog Parameters:
		parameter_string_t IOBDELAY_TYPE;
		parameter_int_t IOBDELAY_VALUE;
		parameter_string_t LOC;
		parameter_int_t SIM_DELAY_D;
		parameter_int_t SIM_TAPDELAY_VALUE;
		//Verilog Ports in definition order:
		NetFlow* O; // OUTPUT
		NetFlow* C; // INPUT
		NetFlow* CE; // INPUT
		NetFlow* I; // INPUT
		NetFlow* INC; // INPUT
		NetFlow* RST; // INPUT
		
	
		X_IDELAY(
			//Verilog Parameters:
			parameter_string_t IOBDELAY_TYPE, // Default: "DEFAULT"
			parameter_int_t IOBDELAY_VALUE, // Default: 0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t SIM_DELAY_D, // Default: 0
			parameter_int_t SIM_TAPDELAY_VALUE, // Default: 75
			//Verilog Ports in definition order:
			NetFlow* O, // OUTPUT
			NetFlow* C, // INPUT
			NetFlow* CE, // INPUT
			NetFlow* I, // INPUT
			NetFlow* INC, // INPUT
			NetFlow* RST // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->IOBDELAY_TYPE = IOBDELAY_TYPE; // Default: "DEFAULT"
			this->IOBDELAY_VALUE = IOBDELAY_VALUE; // Default: 0
			this->LOC = LOC; // Default: "UNPLACED"
			this->SIM_DELAY_D = SIM_DELAY_D; // Default: 0
			this->SIM_TAPDELAY_VALUE = SIM_TAPDELAY_VALUE; // Default: 75
			//Verilog Ports in definition order:
			this->O = O; // OUTPUT
			this->C = C; // INPUT
			this->CE = CE; // INPUT
			this->I = I; // INPUT
			this->INC = INC; // INPUT
			this->RST = RST; // INPUT
		
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
