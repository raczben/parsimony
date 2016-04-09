/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_IOBUFDS_DCIEN{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t DIFF_TERM;
		parameter_enum_t DQS_BIAS;
		parameter_enum_t IBUF_LOW_PWR;
		parameter_string_t IOSTANDARD;
		parameter_string_t SLEW;
		parameter_enum_t USE_IBUFDISABLE;
		//Verilog Ports in definition order:
		NetFlow* O; // OUTPUT
		NetFlow* IO; // INOUT
		NetFlow* IOB; // INOUT
		NetFlow* DCITERMDISABLE; // INPUT
		NetFlow* I; // INPUT
		NetFlow* IBUFDISABLE; // INPUT
		NetFlow* T; // INPUT
		
	
		X_IOBUFDS_DCIEN(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t DIFF_TERM, // Default: "FALSE"
			parameter_enum_t DQS_BIAS, // Default: "FALSE"
			parameter_enum_t IBUF_LOW_PWR, // Default: "TRUE"
			parameter_string_t IOSTANDARD, // Default: "DEFAULT"
			parameter_string_t SLEW, // Default: "SLOW"
			parameter_enum_t USE_IBUFDISABLE, // Default: "TRUE"
			//Verilog Ports in definition order:
			NetFlow* O, // OUTPUT
			NetFlow* IO, // INOUT
			NetFlow* IOB, // INOUT
			NetFlow* DCITERMDISABLE, // INPUT
			NetFlow* I, // INPUT
			NetFlow* IBUFDISABLE, // INPUT
			NetFlow* T // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->DIFF_TERM = DIFF_TERM; // Default: "FALSE"
			this->DQS_BIAS = DQS_BIAS; // Default: "FALSE"
			this->IBUF_LOW_PWR = IBUF_LOW_PWR; // Default: "TRUE"
			this->IOSTANDARD = IOSTANDARD; // Default: "DEFAULT"
			this->SLEW = SLEW; // Default: "SLOW"
			this->USE_IBUFDISABLE = USE_IBUFDISABLE; // Default: "TRUE"
			//Verilog Ports in definition order:
			this->O = O; // OUTPUT
			this->IO = IO; // INOUT
			this->IOB = IOB; // INOUT
			this->DCITERMDISABLE = DCITERMDISABLE; // INPUT
			this->I = I; // INPUT
			this->IBUFDISABLE = IBUFDISABLE; // INPUT
			this->T = T; // INPUT
		
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
