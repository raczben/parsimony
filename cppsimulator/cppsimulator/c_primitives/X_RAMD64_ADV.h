/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_RAMD64_ADV_H
#define X_RAMD64_ADV_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_RAMD64_ADV: public Primitive{

		//Verilog Parameters:
		parameter_int_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* RADR0_A0_B; // net ID: RADR0 lsb: 0  msb: 0 INPUT
		NetFlow* RADR1_A0_B; // net ID: RADR1 lsb: 0  msb: 0 INPUT
		NetFlow* RADR2_A0_B; // net ID: RADR2 lsb: 0  msb: 0 INPUT
		NetFlow* RADR3_A0_B; // net ID: RADR3 lsb: 0  msb: 0 INPUT
		NetFlow* RADR4_A0_B; // net ID: RADR4 lsb: 0  msb: 0 INPUT
		NetFlow* RADR5_A0_B; // net ID: RADR5 lsb: 0  msb: 0 INPUT
		NetFlow* WADR0_A0_B; // net ID: WADR0 lsb: 0  msb: 0 INPUT
		NetFlow* WADR1_A0_B; // net ID: WADR1 lsb: 0  msb: 0 INPUT
		NetFlow* WADR2_A0_B; // net ID: WADR2 lsb: 0  msb: 0 INPUT
		NetFlow* WADR3_A0_B; // net ID: WADR3 lsb: 0  msb: 0 INPUT
		NetFlow* WADR4_A0_B; // net ID: WADR4 lsb: 0  msb: 0 INPUT
		NetFlow* WADR5_A0_B; // net ID: WADR5 lsb: 0  msb: 0 INPUT
		NetFlow* WE_A0_B; // net ID: WE lsb: 0  msb: 0 INPUT
		NetFlow* WE1_A0_B; // net ID: WE1 lsb: 0  msb: 0 INPUT
		NetFlow* WE2_A0_B; // net ID: WE2 lsb: 0  msb: 0 INPUT
		
		public: X_RAMD64_ADV(
			const char * name,
			//Verilog Parameters:
			parameter_int_t INIT, // Default: 64'h0000000000000000
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* I_A0_B, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* RADR0_A0_B, // net ID: RADR0 lsb: 0  msb: 0 INPUT
			NetFlow* RADR1_A0_B, // net ID: RADR1 lsb: 0  msb: 0 INPUT
			NetFlow* RADR2_A0_B, // net ID: RADR2 lsb: 0  msb: 0 INPUT
			NetFlow* RADR3_A0_B, // net ID: RADR3 lsb: 0  msb: 0 INPUT
			NetFlow* RADR4_A0_B, // net ID: RADR4 lsb: 0  msb: 0 INPUT
			NetFlow* RADR5_A0_B, // net ID: RADR5 lsb: 0  msb: 0 INPUT
			NetFlow* WADR0_A0_B, // net ID: WADR0 lsb: 0  msb: 0 INPUT
			NetFlow* WADR1_A0_B, // net ID: WADR1 lsb: 0  msb: 0 INPUT
			NetFlow* WADR2_A0_B, // net ID: WADR2 lsb: 0  msb: 0 INPUT
			NetFlow* WADR3_A0_B, // net ID: WADR3 lsb: 0  msb: 0 INPUT
			NetFlow* WADR4_A0_B, // net ID: WADR4 lsb: 0  msb: 0 INPUT
			NetFlow* WADR5_A0_B, // net ID: WADR5 lsb: 0  msb: 0 INPUT
			NetFlow* WE_A0_B, // net ID: WE lsb: 0  msb: 0 INPUT
			NetFlow* WE1_A0_B, // net ID: WE1 lsb: 0  msb: 0 INPUT
			NetFlow* WE2_A0_B // net ID: WE2 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 64'h0000000000000000
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->I_A0_B = I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
			this->RADR0_A0_B = RADR0_A0_B; // net ID: RADR0 lsb: 0  msb: 0 INPUT
			this->RADR1_A0_B = RADR1_A0_B; // net ID: RADR1 lsb: 0  msb: 0 INPUT
			this->RADR2_A0_B = RADR2_A0_B; // net ID: RADR2 lsb: 0  msb: 0 INPUT
			this->RADR3_A0_B = RADR3_A0_B; // net ID: RADR3 lsb: 0  msb: 0 INPUT
			this->RADR4_A0_B = RADR4_A0_B; // net ID: RADR4 lsb: 0  msb: 0 INPUT
			this->RADR5_A0_B = RADR5_A0_B; // net ID: RADR5 lsb: 0  msb: 0 INPUT
			this->WADR0_A0_B = WADR0_A0_B; // net ID: WADR0 lsb: 0  msb: 0 INPUT
			this->WADR1_A0_B = WADR1_A0_B; // net ID: WADR1 lsb: 0  msb: 0 INPUT
			this->WADR2_A0_B = WADR2_A0_B; // net ID: WADR2 lsb: 0  msb: 0 INPUT
			this->WADR3_A0_B = WADR3_A0_B; // net ID: WADR3 lsb: 0  msb: 0 INPUT
			this->WADR4_A0_B = WADR4_A0_B; // net ID: WADR4 lsb: 0  msb: 0 INPUT
			this->WADR5_A0_B = WADR5_A0_B; // net ID: WADR5 lsb: 0  msb: 0 INPUT
			this->WE_A0_B = WE_A0_B; // net ID: WE lsb: 0  msb: 0 INPUT
			this->WE1_A0_B = WE1_A0_B; // net ID: WE1 lsb: 0  msb: 0 INPUT
			this->WE2_A0_B = WE2_A0_B; // net ID: WE2 lsb: 0  msb: 0 INPUT
			
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
#endif // X_RAMD64_ADV_H
