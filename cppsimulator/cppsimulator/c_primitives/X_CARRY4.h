/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_CARRY4: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CO; // net ID: CO lsb: 0  msb: 0 OUTPUT
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* CI; // net ID: CI lsb: 0  msb: 0 INPUT
		NetFlow* CYINIT; // net ID: CYINIT lsb: 0  msb: 0 INPUT
		NetFlow* DI; // net ID: DI lsb: 0  msb: 3 INPUT
		NetFlow* S; // net ID: S lsb: 0  msb: 3 INPUT
		
		X_CARRY4(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CO, // net ID: CO lsb: 0  msb: 0 OUTPUT
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* CI, // net ID: CI lsb: 0  msb: 0 INPUT
			NetFlow* CYINIT, // net ID: CYINIT lsb: 0  msb: 0 INPUT
			NetFlow* DI, // net ID: DI lsb: 0  msb: 3 INPUT
			NetFlow* S // net ID: S lsb: 0  msb: 3 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CO = CO; // net ID: CO lsb: 0  msb: 0 OUTPUT
			this->O = O; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->CI = CI; // net ID: CI lsb: 0  msb: 0 INPUT
			this->CYINIT = CYINIT; // net ID: CYINIT lsb: 0  msb: 0 INPUT
			this->DI = DI; // net ID: DI lsb: 0  msb: 3 INPUT
			this->S = S; // net ID: S lsb: 0  msb: 3 INPUT
			
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
