/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_BUFGMUX: public Primitive{

		//Verilog Parameters:
		parameter_string_t CLK_SEL_TYPE;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* I0; // net ID: I0 lsb: 0  msb: 0 INPUT
		NetFlow* I1; // net ID: I1 lsb: 0  msb: 0 INPUT
		NetFlow* S; // net ID: S lsb: 0  msb: 0 INPUT
		
		X_BUFGMUX(
			const char * name,
			//Verilog Parameters:
			parameter_string_t CLK_SEL_TYPE, // Default: "SYNC"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* I0, // net ID: I0 lsb: 0  msb: 0 INPUT
			NetFlow* I1, // net ID: I1 lsb: 0  msb: 0 INPUT
			NetFlow* S // net ID: S lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->CLK_SEL_TYPE = CLK_SEL_TYPE; // Default: "SYNC"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->I0 = I0; // net ID: I0 lsb: 0  msb: 0 INPUT
			this->I1 = I1; // net ID: I1 lsb: 0  msb: 0 INPUT
			this->S = S; // net ID: S lsb: 0  msb: 0 INPUT
			
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
