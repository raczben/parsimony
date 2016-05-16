/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_IBUFDS_H
#define X_IBUFDS_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_IBUFDS: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t CAPACITANCE;
		parameter_enum_t DIFF_TERM;
		parameter_enum_t DQS_BIAS;
		parameter_string_t IBUF_DELAY_VALUE;
		parameter_string_t IFD_DELAY_VALUE;
		parameter_string_t IOSTANDARD;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* IB_A0_B; // net ID: IB lsb: 0  msb: 0 INPUT
		
		public: X_IBUFDS(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t CAPACITANCE, // Default: "DONT_CARE"
			parameter_enum_t DIFF_TERM, // Default: "FALSE"
			parameter_enum_t DQS_BIAS, // Default: "FALSE"
			parameter_string_t IBUF_DELAY_VALUE, // Default: "0"
			parameter_string_t IFD_DELAY_VALUE, // Default: "AUTO"
			parameter_string_t IOSTANDARD, // Default: "DEFAULT"
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* I_A0_B, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* IB_A0_B // net ID: IB lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
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
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->I_A0_B = I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
			this->IB_A0_B = IB_A0_B; // net ID: IB lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		void calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_IBUFDS_H
