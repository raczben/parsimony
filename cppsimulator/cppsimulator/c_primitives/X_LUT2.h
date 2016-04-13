/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_LUT2: public Primitive{

		//Verilog Parameters:
		parameter_string_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* ADR0; // net ID: ADR0 lsb: 0  msb: 0 INPUT
		NetFlow* ADR1; // net ID: ADR1 lsb: 0  msb: 0 INPUT
		
		X_LUT2(
			const char * name,
			//Verilog Parameters:
			parameter_string_t INIT, // Default: 4'h0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* ADR0, // net ID: ADR0 lsb: 0  msb: 0 INPUT
			NetFlow* ADR1 // net ID: ADR1 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 4'h0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->ADR0 = ADR0; // net ID: ADR0 lsb: 0  msb: 0 INPUT
			this->ADR1 = ADR1; // net ID: ADR1 lsb: 0  msb: 0 INPUT
			
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
