/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_SRLC16E: public Primitive{

		//Verilog Parameters:
		parameter_string_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* Q; // net ID: Q lsb: 0  msb: 0 OUTPUT
		NetFlow* Q15; // net ID: Q15 lsb: 0  msb: 0 OUTPUT
		NetFlow* A0; // net ID: A0 lsb: 0  msb: 0 INPUT
		NetFlow* A1; // net ID: A1 lsb: 0  msb: 0 INPUT
		NetFlow* A2; // net ID: A2 lsb: 0  msb: 0 INPUT
		NetFlow* A3; // net ID: A3 lsb: 0  msb: 0 INPUT
		NetFlow* CE; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* D; // net ID: D lsb: 0  msb: 0 INPUT
		
		X_SRLC16E(
			const char * name,
			//Verilog Parameters:
			parameter_string_t INIT, // Default: 16'h0000
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* Q, // net ID: Q lsb: 0  msb: 0 OUTPUT
			NetFlow* Q15, // net ID: Q15 lsb: 0  msb: 0 OUTPUT
			NetFlow* A0, // net ID: A0 lsb: 0  msb: 0 INPUT
			NetFlow* A1, // net ID: A1 lsb: 0  msb: 0 INPUT
			NetFlow* A2, // net ID: A2 lsb: 0  msb: 0 INPUT
			NetFlow* A3, // net ID: A3 lsb: 0  msb: 0 INPUT
			NetFlow* CE, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* D // net ID: D lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 16'h0000
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->Q = Q; // net ID: Q lsb: 0  msb: 0 OUTPUT
			this->Q15 = Q15; // net ID: Q15 lsb: 0  msb: 0 OUTPUT
			this->A0 = A0; // net ID: A0 lsb: 0  msb: 0 INPUT
			this->A1 = A1; // net ID: A1 lsb: 0  msb: 0 INPUT
			this->A2 = A2; // net ID: A2 lsb: 0  msb: 0 INPUT
			this->A3 = A3; // net ID: A3 lsb: 0  msb: 0 INPUT
			this->CE = CE; // net ID: CE lsb: 0  msb: 0 INPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->D = D; // net ID: D lsb: 0  msb: 0 INPUT
			
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
