/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_FDDRCPE: public Primitive{

		//Verilog Parameters:
		parameter_string_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* Q; // net ID: Q lsb: 0  msb: 0 OUTPUT
		NetFlow* C0; // net ID: C0 lsb: 0  msb: 0 INPUT
		NetFlow* C1; // net ID: C1 lsb: 0  msb: 0 INPUT
		NetFlow* CE; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* CLR; // net ID: CLR lsb: 0  msb: 0 INPUT
		NetFlow* D0; // net ID: D0 lsb: 0  msb: 0 INPUT
		NetFlow* D1; // net ID: D1 lsb: 0  msb: 0 INPUT
		NetFlow* PRE; // net ID: PRE lsb: 0  msb: 0 INPUT
		
		X_FDDRCPE(
			const char * name,
			//Verilog Parameters:
			parameter_string_t INIT, // Default: 1'b0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* Q, // net ID: Q lsb: 0  msb: 0 OUTPUT
			NetFlow* C0, // net ID: C0 lsb: 0  msb: 0 INPUT
			NetFlow* C1, // net ID: C1 lsb: 0  msb: 0 INPUT
			NetFlow* CE, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* CLR, // net ID: CLR lsb: 0  msb: 0 INPUT
			NetFlow* D0, // net ID: D0 lsb: 0  msb: 0 INPUT
			NetFlow* D1, // net ID: D1 lsb: 0  msb: 0 INPUT
			NetFlow* PRE // net ID: PRE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 1'b0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->Q = Q; // net ID: Q lsb: 0  msb: 0 OUTPUT
			this->C0 = C0; // net ID: C0 lsb: 0  msb: 0 INPUT
			this->C1 = C1; // net ID: C1 lsb: 0  msb: 0 INPUT
			this->CE = CE; // net ID: CE lsb: 0  msb: 0 INPUT
			this->CLR = CLR; // net ID: CLR lsb: 0  msb: 0 INPUT
			this->D0 = D0; // net ID: D0 lsb: 0  msb: 0 INPUT
			this->D1 = D1; // net ID: D1 lsb: 0  msb: 0 INPUT
			this->PRE = PRE; // net ID: PRE lsb: 0  msb: 0 INPUT
			
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
