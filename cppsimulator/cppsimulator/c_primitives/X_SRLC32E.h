/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_SRLC32E_H
#define X_SRLC32E_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_SRLC32E: public Primitive{

		//Verilog Parameters:
		parameter_int_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* Q_A0_B; // net ID: Q lsb: 0  msb: 0 OUTPUT
		NetFlow* Q31_A0_B; // net ID: Q31 lsb: 0  msb: 0 OUTPUT
		NetFlow* A_A4_B; // net ID: A lsb: 0  msb: 4 INPUT
		NetFlow* A_A3_B; // net ID: A lsb: 0  msb: 4 INPUT
		NetFlow* A_A2_B; // net ID: A lsb: 0  msb: 4 INPUT
		NetFlow* A_A1_B; // net ID: A lsb: 0  msb: 4 INPUT
		NetFlow* A_A0_B; // net ID: A lsb: 0  msb: 4 INPUT
		NetFlow* CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* D_A0_B; // net ID: D lsb: 0  msb: 0 INPUT
		
		public: X_SRLC32E(
			const char * name,
			//Verilog Parameters:
			parameter_int_t INIT, // Default: 32'h00000000
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* Q_A0_B, // net ID: Q lsb: 0  msb: 0 OUTPUT
			NetFlow* Q31_A0_B, // net ID: Q31 lsb: 0  msb: 0 OUTPUT
			NetFlow* A_A4_B, // net ID: A lsb: 0  msb: 4 INPUT
			NetFlow* A_A3_B, // net ID: A lsb: 0  msb: 4 INPUT
			NetFlow* A_A2_B, // net ID: A lsb: 0  msb: 4 INPUT
			NetFlow* A_A1_B, // net ID: A lsb: 0  msb: 4 INPUT
			NetFlow* A_A0_B, // net ID: A lsb: 0  msb: 4 INPUT
			NetFlow* CE_A0_B, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* D_A0_B // net ID: D lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 32'h00000000
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->Q_A0_B = Q_A0_B; // net ID: Q lsb: 0  msb: 0 OUTPUT
			this->Q31_A0_B = Q31_A0_B; // net ID: Q31 lsb: 0  msb: 0 OUTPUT
			this->A_A4_B = A_A4_B; // net ID: A lsb: 0  msb: 4 INPUT
			this->A_A3_B = A_A3_B; // net ID: A lsb: 0  msb: 4 INPUT
			this->A_A2_B = A_A2_B; // net ID: A lsb: 0  msb: 4 INPUT
			this->A_A1_B = A_A1_B; // net ID: A lsb: 0  msb: 4 INPUT
			this->A_A0_B = A_A0_B; // net ID: A lsb: 0  msb: 4 INPUT
			this->CE_A0_B = CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->D_A0_B = D_A0_B; // net ID: D lsb: 0  msb: 0 INPUT
			
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
#endif // X_SRLC32E_H
