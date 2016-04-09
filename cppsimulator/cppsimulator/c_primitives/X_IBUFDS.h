/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_IBUFDS{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t CAPACITANCE;
		parameter_enum_t DIFF_TERM;
		parameter_enum_t DQS_BIAS;
		parameter_string_t IBUF_DELAY_VALUE;
		parameter_string_t IFD_DELAY_VALUE;
		parameter_string_t IOSTANDARD;
		//Verilog Ports in definition order:
		NetFlow* O; // OUTPUT
		NetFlow* I; // INPUT
		NetFlow* IB; // INPUT
		
	
		X_IBUFDS(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t CAPACITANCE, // Default: "DONT_CARE"
			parameter_enum_t DIFF_TERM, // Default: "FALSE"
			parameter_enum_t DQS_BIAS, // Default: "FALSE"
			parameter_string_t IBUF_DELAY_VALUE, // Default: "0"
			parameter_string_t IFD_DELAY_VALUE, // Default: "AUTO"
			parameter_string_t IOSTANDARD, // Default: "DEFAULT"
			//Verilog Ports in definition order:
			NetFlow* O, // OUTPUT
			NetFlow* I, // INPUT
			NetFlow* IB // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->CAPACITANCE = CAPACITANCE; // Default: "DONT_CARE"
			this->DIFF_TERM = DIFF_TERM; // Default: "FALSE"
			this->DQS_BIAS = DQS_BIAS; // Default: "FALSE"
			this->IBUF_DELAY_VALUE = IBUF_DELAY_VALUE; // Default: "0"
			this->IFD_DELAY_VALUE = IFD_DELAY_VALUE; // Default: "AUTO"
			this->IOSTANDARD = IOSTANDARD; // Default: "DEFAULT"
			//Verilog Ports in definition order:
			this->O = O; // OUTPUT
			this->I = I; // INPUT
			this->IB = IB; // INPUT
		
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
