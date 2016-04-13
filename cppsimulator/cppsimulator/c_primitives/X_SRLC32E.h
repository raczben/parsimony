/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_SRLC32E: public Primitive{

		//Verilog Parameters:
		parameter_string_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* Q; // net ID: Q lsb: 0  msb: 0 OUTPUT
		NetFlow* Q31; // net ID: Q31 lsb: 0  msb: 0 OUTPUT
		NetFlow* A; // net ID: A lsb: 0  msb: 4 INPUT
		NetFlow* CE; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* D; // net ID: D lsb: 0  msb: 0 INPUT
		
		X_SRLC32E(
			const char * name,
			//Verilog Parameters:
			parameter_string_t INIT, // Default: 32'h00000000
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* Q, // net ID: Q lsb: 0  msb: 0 OUTPUT
			NetFlow* Q31, // net ID: Q31 lsb: 0  msb: 0 OUTPUT
			NetFlow* A, // net ID: A lsb: 0  msb: 4 INPUT
			NetFlow* CE, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* D // net ID: D lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 32'h00000000
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->Q = Q; // net ID: Q lsb: 0  msb: 0 OUTPUT
			this->Q31 = Q31; // net ID: Q31 lsb: 0  msb: 0 OUTPUT
			this->A = A; // net ID: A lsb: 0  msb: 4 INPUT
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
