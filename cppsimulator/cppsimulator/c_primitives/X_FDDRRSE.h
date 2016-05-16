/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_FDDRRSE_H
#define X_FDDRRSE_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_FDDRRSE: public Primitive{

		//Verilog Parameters:
		parameter_int_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* Q_A0_B; // net ID: Q lsb: 0  msb: 0 OUTPUT
		NetFlow* C0_A0_B; // net ID: C0 lsb: 0  msb: 0 INPUT
		NetFlow* C1_A0_B; // net ID: C1 lsb: 0  msb: 0 INPUT
		NetFlow* CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* D0_A0_B; // net ID: D0 lsb: 0  msb: 0 INPUT
		NetFlow* D1_A0_B; // net ID: D1 lsb: 0  msb: 0 INPUT
		NetFlow* R_A0_B; // net ID: R lsb: 0  msb: 0 INPUT
		NetFlow* S_A0_B; // net ID: S lsb: 0  msb: 0 INPUT
		
		public: X_FDDRRSE(
			const char * name,
			//Verilog Parameters:
			parameter_int_t INIT, // Default: 1'b0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* Q_A0_B, // net ID: Q lsb: 0  msb: 0 OUTPUT
			NetFlow* C0_A0_B, // net ID: C0 lsb: 0  msb: 0 INPUT
			NetFlow* C1_A0_B, // net ID: C1 lsb: 0  msb: 0 INPUT
			NetFlow* CE_A0_B, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* D0_A0_B, // net ID: D0 lsb: 0  msb: 0 INPUT
			NetFlow* D1_A0_B, // net ID: D1 lsb: 0  msb: 0 INPUT
			NetFlow* R_A0_B, // net ID: R lsb: 0  msb: 0 INPUT
			NetFlow* S_A0_B // net ID: S lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 1'b0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->Q_A0_B = Q_A0_B; // net ID: Q lsb: 0  msb: 0 OUTPUT
			this->C0_A0_B = C0_A0_B; // net ID: C0 lsb: 0  msb: 0 INPUT
			this->C1_A0_B = C1_A0_B; // net ID: C1 lsb: 0  msb: 0 INPUT
			this->CE_A0_B = CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
			this->D0_A0_B = D0_A0_B; // net ID: D0 lsb: 0  msb: 0 INPUT
			this->D1_A0_B = D1_A0_B; // net ID: D1 lsb: 0  msb: 0 INPUT
			this->R_A0_B = R_A0_B; // net ID: R lsb: 0  msb: 0 INPUT
			this->S_A0_B = S_A0_B; // net ID: S lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		void calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_FDDRRSE_H
