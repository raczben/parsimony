/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_AND2B1L_H
#define X_AND2B1L_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_AND2B1L: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* SRI_A0_B; // net ID: SRI lsb: 0  msb: 0 INPUT
		NetFlow* DI_A0_B; // net ID: DI lsb: 0  msb: 0 INPUT
		
		public: X_AND2B1L(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* SRI_A0_B, // net ID: SRI lsb: 0  msb: 0 INPUT
			NetFlow* DI_A0_B // net ID: DI lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->SRI_A0_B = SRI_A0_B; // net ID: SRI lsb: 0  msb: 0 INPUT
			this->DI_A0_B = DI_A0_B; // net ID: DI lsb: 0  msb: 0 INPUT
			
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
#endif // X_AND2B1L_H
