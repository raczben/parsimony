/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_MULT18X18: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* P; // net ID: P lsb: 0  msb: 0 OUTPUT
		NetFlow* A; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* B; // net ID: B lsb: 0  msb: 17 INPUT
		
		X_MULT18X18(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* P, // net ID: P lsb: 0  msb: 0 OUTPUT
			NetFlow* A, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* B // net ID: B lsb: 0  msb: 17 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->P = P; // net ID: P lsb: 0  msb: 0 OUTPUT
			this->A = A; // net ID: A lsb: 0  msb: 17 INPUT
			this->B = B; // net ID: B lsb: 0  msb: 17 INPUT
			
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
