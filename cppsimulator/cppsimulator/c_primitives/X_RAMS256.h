/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_RAMS256: public Primitive{

		//Verilog Parameters:
		parameter_string_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* ADR0; // net ID: ADR0 lsb: 0  msb: 0 INPUT
		NetFlow* ADR1; // net ID: ADR1 lsb: 0  msb: 0 INPUT
		NetFlow* ADR2; // net ID: ADR2 lsb: 0  msb: 0 INPUT
		NetFlow* ADR3; // net ID: ADR3 lsb: 0  msb: 0 INPUT
		NetFlow* ADR4; // net ID: ADR4 lsb: 0  msb: 0 INPUT
		NetFlow* ADR5; // net ID: ADR5 lsb: 0  msb: 0 INPUT
		NetFlow* ADR6; // net ID: ADR6 lsb: 0  msb: 0 INPUT
		NetFlow* ADR7; // net ID: ADR7 lsb: 0  msb: 0 INPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* I; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* WE; // net ID: WE lsb: 0  msb: 0 INPUT
		
		X_RAMS256(
			const char * name,
			//Verilog Parameters:
			parameter_string_t INIT, // Default: 256'h0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* ADR0, // net ID: ADR0 lsb: 0  msb: 0 INPUT
			NetFlow* ADR1, // net ID: ADR1 lsb: 0  msb: 0 INPUT
			NetFlow* ADR2, // net ID: ADR2 lsb: 0  msb: 0 INPUT
			NetFlow* ADR3, // net ID: ADR3 lsb: 0  msb: 0 INPUT
			NetFlow* ADR4, // net ID: ADR4 lsb: 0  msb: 0 INPUT
			NetFlow* ADR5, // net ID: ADR5 lsb: 0  msb: 0 INPUT
			NetFlow* ADR6, // net ID: ADR6 lsb: 0  msb: 0 INPUT
			NetFlow* ADR7, // net ID: ADR7 lsb: 0  msb: 0 INPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* I, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* WE // net ID: WE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 256'h0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->ADR0 = ADR0; // net ID: ADR0 lsb: 0  msb: 0 INPUT
			this->ADR1 = ADR1; // net ID: ADR1 lsb: 0  msb: 0 INPUT
			this->ADR2 = ADR2; // net ID: ADR2 lsb: 0  msb: 0 INPUT
			this->ADR3 = ADR3; // net ID: ADR3 lsb: 0  msb: 0 INPUT
			this->ADR4 = ADR4; // net ID: ADR4 lsb: 0  msb: 0 INPUT
			this->ADR5 = ADR5; // net ID: ADR5 lsb: 0  msb: 0 INPUT
			this->ADR6 = ADR6; // net ID: ADR6 lsb: 0  msb: 0 INPUT
			this->ADR7 = ADR7; // net ID: ADR7 lsb: 0  msb: 0 INPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->I = I; // net ID: I lsb: 0  msb: 0 INPUT
			this->WE = WE; // net ID: WE lsb: 0  msb: 0 INPUT
			
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
