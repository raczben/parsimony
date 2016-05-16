/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_OBUFDS_H
#define X_OBUFDS_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_OBUFDS: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t CAPACITANCE;
		parameter_string_t IOSTANDARD;
		parameter_string_t SLEW;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* OB_A0_B; // net ID: OB lsb: 0  msb: 0 OUTPUT
		NetFlow* I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
		
		public: X_OBUFDS(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: " UNPLACED"
			parameter_string_t CAPACITANCE, // Default: "DONT_CARE"
			parameter_string_t IOSTANDARD, // Default: "DEFAULT"
			parameter_string_t SLEW, // Default: "SLOW"
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* OB_A0_B, // net ID: OB lsb: 0  msb: 0 OUTPUT
			NetFlow* I_A0_B // net ID: I lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: " UNPLACED"
			this->CAPACITANCE = CAPACITANCE; // Default: "DONT_CARE"
			this->IOSTANDARD = IOSTANDARD; // Default: "DEFAULT"
			this->SLEW = SLEW; // Default: "SLOW"
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->OB_A0_B = OB_A0_B; // net ID: OB lsb: 0  msb: 0 OUTPUT
			this->I_A0_B = I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
			
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
#endif // X_OBUFDS_H
