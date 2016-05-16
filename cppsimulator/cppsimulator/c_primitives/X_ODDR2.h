/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_ODDR2_H
#define X_ODDR2_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_ODDR2: public Primitive{

		//Verilog Parameters:
		parameter_string_t DDR_ALIGNMENT;
		parameter_int_t INIT;
		parameter_string_t LOC;
		parameter_string_t SRTYPE;
		//Verilog Ports in definition order:
		NetFlow* Q_A0_B; // net ID: Q lsb: 0  msb: 0 OUTPUT
		NetFlow* C0_A0_B; // net ID: C0 lsb: 0  msb: 0 INPUT
		NetFlow* C1_A0_B; // net ID: C1 lsb: 0  msb: 0 INPUT
		NetFlow* CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* D0_A0_B; // net ID: D0 lsb: 0  msb: 0 INPUT
		NetFlow* D1_A0_B; // net ID: D1 lsb: 0  msb: 0 INPUT
		NetFlow* R_A0_B; // net ID: R lsb: 0  msb: 0 INPUT
		NetFlow* S_A0_B; // net ID: S lsb: 0  msb: 0 INPUT
		
		public: X_ODDR2(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DDR_ALIGNMENT, // Default: "NONE"
			parameter_int_t INIT, // Default: 1'b0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t SRTYPE, // Default: "SYNC"
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
			this->DDR_ALIGNMENT = DDR_ALIGNMENT; // Default: "NONE"
			this->INIT = INIT; // Default: 1'b0
			this->LOC = LOC; // Default: "UNPLACED"
			this->SRTYPE = SRTYPE; // Default: "SYNC"
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
#endif // X_ODDR2_H
