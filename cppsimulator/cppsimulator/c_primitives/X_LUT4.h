/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_LUT4: public Primitive{

		//Verilog Parameters:
		parameter_string_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* ADR0; // net ID: ADR0 lsb: 0  msb: 0 INPUT
		NetFlow* ADR1; // net ID: ADR1 lsb: 0  msb: 0 INPUT
		NetFlow* ADR2; // net ID: ADR2 lsb: 0  msb: 0 INPUT
		NetFlow* ADR3; // net ID: ADR3 lsb: 0  msb: 0 INPUT
		
		X_LUT4(
			const char * name,
			//Verilog Parameters:
			parameter_string_t INIT, // Default: 16'h0000
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* ADR0, // net ID: ADR0 lsb: 0  msb: 0 INPUT
			NetFlow* ADR1, // net ID: ADR1 lsb: 0  msb: 0 INPUT
			NetFlow* ADR2, // net ID: ADR2 lsb: 0  msb: 0 INPUT
			NetFlow* ADR3 // net ID: ADR3 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 16'h0000
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->ADR0 = ADR0; // net ID: ADR0 lsb: 0  msb: 0 INPUT
			this->ADR1 = ADR1; // net ID: ADR1 lsb: 0  msb: 0 INPUT
			this->ADR2 = ADR2; // net ID: ADR2 lsb: 0  msb: 0 INPUT
			this->ADR3 = ADR3; // net ID: ADR3 lsb: 0  msb: 0 INPUT
			
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
