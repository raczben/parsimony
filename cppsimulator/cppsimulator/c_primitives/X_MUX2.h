/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_MUX2: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* IA; // net ID: IA lsb: 0  msb: 0 INPUT
		NetFlow* IB; // net ID: IB lsb: 0  msb: 0 INPUT
		NetFlow* SEL; // net ID: SEL lsb: 0  msb: 0 INPUT
		
		X_MUX2(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* IA, // net ID: IA lsb: 0  msb: 0 INPUT
			NetFlow* IB, // net ID: IB lsb: 0  msb: 0 INPUT
			NetFlow* SEL // net ID: SEL lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->IA = IA; // net ID: IA lsb: 0  msb: 0 INPUT
			this->IB = IB; // net ID: IB lsb: 0  msb: 0 INPUT
			this->SEL = SEL; // net ID: SEL lsb: 0  msb: 0 INPUT
			
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
