/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_IBUFDS_IBUFDISABLE_H
#define X_IBUFDS_IBUFDISABLE_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_IBUFDS_IBUFDISABLE: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t DIFF_TERM;
		parameter_enum_t DQS_BIAS;
		parameter_enum_t IBUF_LOW_PWR;
		parameter_string_t IOSTANDARD;
		parameter_enum_t USE_IBUFDISABLE;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* IB_A0_B; // net ID: IB lsb: 0  msb: 0 INPUT
		NetFlow* IBUFDISABLE_A0_B; // net ID: IBUFDISABLE lsb: 0  msb: 0 INPUT
		
		public: X_IBUFDS_IBUFDISABLE(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t DIFF_TERM, // Default: "FALSE"
			parameter_enum_t DQS_BIAS, // Default: "FALSE"
			parameter_enum_t IBUF_LOW_PWR, // Default: "TRUE"
			parameter_string_t IOSTANDARD, // Default: "DEFAULT"
			parameter_enum_t USE_IBUFDISABLE, // Default: "TRUE"
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* I_A0_B, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* IB_A0_B, // net ID: IB lsb: 0  msb: 0 INPUT
			NetFlow* IBUFDISABLE_A0_B // net ID: IBUFDISABLE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->DIFF_TERM = DIFF_TERM; // Default: "FALSE"
			this->DQS_BIAS = DQS_BIAS; // Default: "FALSE"
			this->IBUF_LOW_PWR = IBUF_LOW_PWR; // Default: "TRUE"
			this->IOSTANDARD = IOSTANDARD; // Default: "DEFAULT"
			this->USE_IBUFDISABLE = USE_IBUFDISABLE; // Default: "TRUE"
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->I_A0_B = I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
			this->IB_A0_B = IB_A0_B; // net ID: IB lsb: 0  msb: 0 INPUT
			this->IBUFDISABLE_A0_B = IBUFDISABLE_A0_B; // net ID: IBUFDISABLE lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		bool calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_IBUFDS_IBUFDISABLE_H
