/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_OBUFTDS_DCIEN: public Primitive{

		//Verilog Parameters:
		parameter_string_t IOSTANDARD;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* OB; // net ID: OB lsb: 0  msb: 0 OUTPUT
		NetFlow* DCITERMDISABLE; // net ID: DCITERMDISABLE lsb: 0  msb: 0 INPUT
		NetFlow* I; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* T; // net ID: T lsb: 0  msb: 0 INPUT
		
		X_OBUFTDS_DCIEN(
			const char * name,
			//Verilog Parameters:
			parameter_string_t IOSTANDARD, // Default: "DEFAULT"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* OB, // net ID: OB lsb: 0  msb: 0 OUTPUT
			NetFlow* DCITERMDISABLE, // net ID: DCITERMDISABLE lsb: 0  msb: 0 INPUT
			NetFlow* I, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* T // net ID: T lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->IOSTANDARD = IOSTANDARD; // Default: "DEFAULT"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->OB = OB; // net ID: OB lsb: 0  msb: 0 OUTPUT
			this->DCITERMDISABLE = DCITERMDISABLE; // net ID: DCITERMDISABLE lsb: 0  msb: 0 INPUT
			this->I = I; // net ID: I lsb: 0  msb: 0 INPUT
			this->T = T; // net ID: T lsb: 0  msb: 0 INPUT
			
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
