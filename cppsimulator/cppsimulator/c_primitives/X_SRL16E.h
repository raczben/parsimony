/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_SRL16E_H
#define X_SRL16E_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_SRL16E: public Primitive{

		//Verilog Parameters:
		parameter_int_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* Q_A0_B; // net ID: Q lsb: 0  msb: 0 OUTPUT
		NetFlow* A0_A0_B; // net ID: A0 lsb: 0  msb: 0 INPUT
		NetFlow* A1_A0_B; // net ID: A1 lsb: 0  msb: 0 INPUT
		NetFlow* A2_A0_B; // net ID: A2 lsb: 0  msb: 0 INPUT
		NetFlow* A3_A0_B; // net ID: A3 lsb: 0  msb: 0 INPUT
		NetFlow* CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* D_A0_B; // net ID: D lsb: 0  msb: 0 INPUT
		
		public: X_SRL16E(
			const char * name,
			//Verilog Parameters:
			parameter_int_t INIT, // Default: 16'h0000
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* Q_A0_B, // net ID: Q lsb: 0  msb: 0 OUTPUT
			NetFlow* A0_A0_B, // net ID: A0 lsb: 0  msb: 0 INPUT
			NetFlow* A1_A0_B, // net ID: A1 lsb: 0  msb: 0 INPUT
			NetFlow* A2_A0_B, // net ID: A2 lsb: 0  msb: 0 INPUT
			NetFlow* A3_A0_B, // net ID: A3 lsb: 0  msb: 0 INPUT
			NetFlow* CE_A0_B, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* D_A0_B // net ID: D lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 16'h0000
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->Q_A0_B = Q_A0_B; // net ID: Q lsb: 0  msb: 0 OUTPUT
			this->A0_A0_B = A0_A0_B; // net ID: A0 lsb: 0  msb: 0 INPUT
			this->A1_A0_B = A1_A0_B; // net ID: A1 lsb: 0  msb: 0 INPUT
			this->A2_A0_B = A2_A0_B; // net ID: A2 lsb: 0  msb: 0 INPUT
			this->A3_A0_B = A3_A0_B; // net ID: A3 lsb: 0  msb: 0 INPUT
			this->CE_A0_B = CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->D_A0_B = D_A0_B; // net ID: D lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		bool calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_SRL16E_H
