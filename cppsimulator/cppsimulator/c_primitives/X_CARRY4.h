/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_CARRY4_H
#define X_CARRY4_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_CARRY4: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CO_A0_B; // net ID: CO lsb: 0  msb: 0 OUTPUT
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* CI_A0_B; // net ID: CI lsb: 0  msb: 0 INPUT
		NetFlow* CYINIT_A0_B; // net ID: CYINIT lsb: 0  msb: 0 INPUT
		NetFlow* DI_A0_B; // net ID: DI lsb: 0  msb: 3 INPUT
		NetFlow* DI_A1_B; // net ID: DI lsb: 0  msb: 3 INPUT
		NetFlow* DI_A2_B; // net ID: DI lsb: 0  msb: 3 INPUT
		NetFlow* DI_A3_B; // net ID: DI lsb: 0  msb: 3 INPUT
		NetFlow* S_A0_B; // net ID: S lsb: 0  msb: 3 INPUT
		NetFlow* S_A1_B; // net ID: S lsb: 0  msb: 3 INPUT
		NetFlow* S_A2_B; // net ID: S lsb: 0  msb: 3 INPUT
		NetFlow* S_A3_B; // net ID: S lsb: 0  msb: 3 INPUT
		
		public: X_CARRY4(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CO_A0_B, // net ID: CO lsb: 0  msb: 0 OUTPUT
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* CI_A0_B, // net ID: CI lsb: 0  msb: 0 INPUT
			NetFlow* CYINIT_A0_B, // net ID: CYINIT lsb: 0  msb: 0 INPUT
			NetFlow* DI_A0_B, // net ID: DI lsb: 0  msb: 3 INPUT
			NetFlow* DI_A1_B, // net ID: DI lsb: 0  msb: 3 INPUT
			NetFlow* DI_A2_B, // net ID: DI lsb: 0  msb: 3 INPUT
			NetFlow* DI_A3_B, // net ID: DI lsb: 0  msb: 3 INPUT
			NetFlow* S_A0_B, // net ID: S lsb: 0  msb: 3 INPUT
			NetFlow* S_A1_B, // net ID: S lsb: 0  msb: 3 INPUT
			NetFlow* S_A2_B, // net ID: S lsb: 0  msb: 3 INPUT
			NetFlow* S_A3_B // net ID: S lsb: 0  msb: 3 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CO_A0_B = CO_A0_B; // net ID: CO lsb: 0  msb: 0 OUTPUT
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->CI_A0_B = CI_A0_B; // net ID: CI lsb: 0  msb: 0 INPUT
			this->CYINIT_A0_B = CYINIT_A0_B; // net ID: CYINIT lsb: 0  msb: 0 INPUT
			this->DI_A0_B = DI_A0_B; // net ID: DI lsb: 0  msb: 3 INPUT
			this->DI_A1_B = DI_A1_B; // net ID: DI lsb: 0  msb: 3 INPUT
			this->DI_A2_B = DI_A2_B; // net ID: DI lsb: 0  msb: 3 INPUT
			this->DI_A3_B = DI_A3_B; // net ID: DI lsb: 0  msb: 3 INPUT
			this->S_A0_B = S_A0_B; // net ID: S lsb: 0  msb: 3 INPUT
			this->S_A1_B = S_A1_B; // net ID: S lsb: 0  msb: 3 INPUT
			this->S_A2_B = S_A2_B; // net ID: S lsb: 0  msb: 3 INPUT
			this->S_A3_B = S_A3_B; // net ID: S lsb: 0  msb: 3 INPUT
			
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
#endif // X_CARRY4_H
