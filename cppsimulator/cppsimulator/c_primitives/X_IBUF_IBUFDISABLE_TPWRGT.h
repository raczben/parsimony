/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_IBUF_IBUFDISABLE_TPWRGT_H
#define X_IBUF_IBUFDISABLE_TPWRGT_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_IBUF_IBUFDISABLE_TPWRGT: public Primitive{

		//Verilog Parameters:
		parameter_enum_t IBUF_LOW_PWR;
		parameter_string_t IOSTANDARD;
		parameter_string_t LOC;
		parameter_enum_t USE_IBUFDISABLE;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* IBUFDISABLE_A0_B; // net ID: IBUFDISABLE lsb: 0  msb: 0 INPUT
		NetFlow* TPWRGT_A0_B; // net ID: TPWRGT lsb: 0  msb: 0 INPUT
		
		public: X_IBUF_IBUFDISABLE_TPWRGT(
			const char * name,
			//Verilog Parameters:
			parameter_enum_t IBUF_LOW_PWR, // Default: "TRUE"
			parameter_string_t IOSTANDARD, // Default: "DEFAULT"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t USE_IBUFDISABLE, // Default: "TRUE"
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* I_A0_B, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* IBUFDISABLE_A0_B, // net ID: IBUFDISABLE lsb: 0  msb: 0 INPUT
			NetFlow* TPWRGT_A0_B // net ID: TPWRGT lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->IBUF_LOW_PWR = IBUF_LOW_PWR; // Default: "TRUE"
			this->IOSTANDARD = IOSTANDARD; // Default: "DEFAULT"
			this->LOC = LOC; // Default: "UNPLACED"
			this->USE_IBUFDISABLE = USE_IBUFDISABLE; // Default: "TRUE"
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->I_A0_B = I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
			this->IBUFDISABLE_A0_B = IBUFDISABLE_A0_B; // net ID: IBUFDISABLE lsb: 0  msb: 0 INPUT
			this->TPWRGT_A0_B = TPWRGT_A0_B; // net ID: TPWRGT lsb: 0  msb: 0 INPUT
			
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
#endif // X_IBUF_IBUFDISABLE_TPWRGT_H
