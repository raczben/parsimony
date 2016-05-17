/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_RAMD32_H
#define X_RAMD32_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_RAMD32: public Primitive{

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
		NetFlow* WADR0_A0_B; // net ID: WADR0 lsb: 0  msb: 0 INPUT
		NetFlow* WADR1_A0_B; // net ID: WADR1 lsb: 0  msb: 0 INPUT
		NetFlow* WADR2_A0_B; // net ID: WADR2 lsb: 0  msb: 0 INPUT
		NetFlow* WADR3_A0_B; // net ID: WADR3 lsb: 0  msb: 0 INPUT
		NetFlow* WADR4_A0_B; // net ID: WADR4 lsb: 0  msb: 0 INPUT
		NetFlow* WE_A0_B; // net ID: WE lsb: 0  msb: 0 INPUT
		
		public: X_RAMD32(
			const char * name,
			//Verilog Parameters:
			parameter_int_t INIT, // Default: 32'h00000000
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
			NetFlow* WADR0_A0_B, // net ID: WADR0 lsb: 0  msb: 0 INPUT
			NetFlow* WADR1_A0_B, // net ID: WADR1 lsb: 0  msb: 0 INPUT
			NetFlow* WADR2_A0_B, // net ID: WADR2 lsb: 0  msb: 0 INPUT
			NetFlow* WADR3_A0_B, // net ID: WADR3 lsb: 0  msb: 0 INPUT
			NetFlow* WADR4_A0_B, // net ID: WADR4 lsb: 0  msb: 0 INPUT
			NetFlow* WE_A0_B // net ID: WE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 32'h00000000
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
			this->WADR0_A0_B = WADR0_A0_B; // net ID: WADR0 lsb: 0  msb: 0 INPUT
			this->WADR1_A0_B = WADR1_A0_B; // net ID: WADR1 lsb: 0  msb: 0 INPUT
			this->WADR2_A0_B = WADR2_A0_B; // net ID: WADR2 lsb: 0  msb: 0 INPUT
			this->WADR3_A0_B = WADR3_A0_B; // net ID: WADR3 lsb: 0  msb: 0 INPUT
			this->WADR4_A0_B = WADR4_A0_B; // net ID: WADR4 lsb: 0  msb: 0 INPUT
			this->WE_A0_B = WE_A0_B; // net ID: WE lsb: 0  msb: 0 INPUT
			
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
#endif // X_RAMD32_H
