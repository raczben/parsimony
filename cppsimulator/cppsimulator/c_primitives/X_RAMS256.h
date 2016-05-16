/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_RAMS256_H
#define X_RAMS256_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_RAMS256: public Primitive{

		//Verilog Parameters:
		parameter_int_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* ADR0_A0_B; // net ID: ADR0 lsb: 0  msb: 0 INPUT
		NetFlow* ADR1_A0_B; // net ID: ADR1 lsb: 0  msb: 0 INPUT
		NetFlow* ADR2_A0_B; // net ID: ADR2 lsb: 0  msb: 0 INPUT
		NetFlow* ADR3_A0_B; // net ID: ADR3 lsb: 0  msb: 0 INPUT
		NetFlow* ADR4_A0_B; // net ID: ADR4 lsb: 0  msb: 0 INPUT
		NetFlow* ADR5_A0_B; // net ID: ADR5 lsb: 0  msb: 0 INPUT
		NetFlow* ADR6_A0_B; // net ID: ADR6 lsb: 0  msb: 0 INPUT
		NetFlow* ADR7_A0_B; // net ID: ADR7 lsb: 0  msb: 0 INPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* WE_A0_B; // net ID: WE lsb: 0  msb: 0 INPUT
		
		public: X_RAMS256(
			const char * name,
			//Verilog Parameters:
			parameter_int_t INIT, // Default: 256'h0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* ADR0_A0_B, // net ID: ADR0 lsb: 0  msb: 0 INPUT
			NetFlow* ADR1_A0_B, // net ID: ADR1 lsb: 0  msb: 0 INPUT
			NetFlow* ADR2_A0_B, // net ID: ADR2 lsb: 0  msb: 0 INPUT
			NetFlow* ADR3_A0_B, // net ID: ADR3 lsb: 0  msb: 0 INPUT
			NetFlow* ADR4_A0_B, // net ID: ADR4 lsb: 0  msb: 0 INPUT
			NetFlow* ADR5_A0_B, // net ID: ADR5 lsb: 0  msb: 0 INPUT
			NetFlow* ADR6_A0_B, // net ID: ADR6 lsb: 0  msb: 0 INPUT
			NetFlow* ADR7_A0_B, // net ID: ADR7 lsb: 0  msb: 0 INPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* I_A0_B, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* WE_A0_B // net ID: WE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 256'h0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->ADR0_A0_B = ADR0_A0_B; // net ID: ADR0 lsb: 0  msb: 0 INPUT
			this->ADR1_A0_B = ADR1_A0_B; // net ID: ADR1 lsb: 0  msb: 0 INPUT
			this->ADR2_A0_B = ADR2_A0_B; // net ID: ADR2 lsb: 0  msb: 0 INPUT
			this->ADR3_A0_B = ADR3_A0_B; // net ID: ADR3 lsb: 0  msb: 0 INPUT
			this->ADR4_A0_B = ADR4_A0_B; // net ID: ADR4 lsb: 0  msb: 0 INPUT
			this->ADR5_A0_B = ADR5_A0_B; // net ID: ADR5 lsb: 0  msb: 0 INPUT
			this->ADR6_A0_B = ADR6_A0_B; // net ID: ADR6 lsb: 0  msb: 0 INPUT
			this->ADR7_A0_B = ADR7_A0_B; // net ID: ADR7 lsb: 0  msb: 0 INPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->I_A0_B = I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
			this->WE_A0_B = WE_A0_B; // net ID: WE lsb: 0  msb: 0 INPUT
			
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
#endif // X_RAMS256_H
