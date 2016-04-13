/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_RAMD32: public Primitive{

		//Verilog Parameters:
		parameter_string_t INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* I; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* RADR0; // net ID: RADR0 lsb: 0  msb: 0 INPUT
		NetFlow* RADR1; // net ID: RADR1 lsb: 0  msb: 0 INPUT
		NetFlow* RADR2; // net ID: RADR2 lsb: 0  msb: 0 INPUT
		NetFlow* RADR3; // net ID: RADR3 lsb: 0  msb: 0 INPUT
		NetFlow* RADR4; // net ID: RADR4 lsb: 0  msb: 0 INPUT
		NetFlow* WADR0; // net ID: WADR0 lsb: 0  msb: 0 INPUT
		NetFlow* WADR1; // net ID: WADR1 lsb: 0  msb: 0 INPUT
		NetFlow* WADR2; // net ID: WADR2 lsb: 0  msb: 0 INPUT
		NetFlow* WADR3; // net ID: WADR3 lsb: 0  msb: 0 INPUT
		NetFlow* WADR4; // net ID: WADR4 lsb: 0  msb: 0 INPUT
		NetFlow* WE; // net ID: WE lsb: 0  msb: 0 INPUT
		
		X_RAMD32(
			const char * name,
			//Verilog Parameters:
			parameter_string_t INIT, // Default: 32'h00000000
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* I, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* RADR0, // net ID: RADR0 lsb: 0  msb: 0 INPUT
			NetFlow* RADR1, // net ID: RADR1 lsb: 0  msb: 0 INPUT
			NetFlow* RADR2, // net ID: RADR2 lsb: 0  msb: 0 INPUT
			NetFlow* RADR3, // net ID: RADR3 lsb: 0  msb: 0 INPUT
			NetFlow* RADR4, // net ID: RADR4 lsb: 0  msb: 0 INPUT
			NetFlow* WADR0, // net ID: WADR0 lsb: 0  msb: 0 INPUT
			NetFlow* WADR1, // net ID: WADR1 lsb: 0  msb: 0 INPUT
			NetFlow* WADR2, // net ID: WADR2 lsb: 0  msb: 0 INPUT
			NetFlow* WADR3, // net ID: WADR3 lsb: 0  msb: 0 INPUT
			NetFlow* WADR4, // net ID: WADR4 lsb: 0  msb: 0 INPUT
			NetFlow* WE // net ID: WE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 32'h00000000
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->I = I; // net ID: I lsb: 0  msb: 0 INPUT
			this->RADR0 = RADR0; // net ID: RADR0 lsb: 0  msb: 0 INPUT
			this->RADR1 = RADR1; // net ID: RADR1 lsb: 0  msb: 0 INPUT
			this->RADR2 = RADR2; // net ID: RADR2 lsb: 0  msb: 0 INPUT
			this->RADR3 = RADR3; // net ID: RADR3 lsb: 0  msb: 0 INPUT
			this->RADR4 = RADR4; // net ID: RADR4 lsb: 0  msb: 0 INPUT
			this->WADR0 = WADR0; // net ID: WADR0 lsb: 0  msb: 0 INPUT
			this->WADR1 = WADR1; // net ID: WADR1 lsb: 0  msb: 0 INPUT
			this->WADR2 = WADR2; // net ID: WADR2 lsb: 0  msb: 0 INPUT
			this->WADR3 = WADR3; // net ID: WADR3 lsb: 0  msb: 0 INPUT
			this->WADR4 = WADR4; // net ID: WADR4 lsb: 0  msb: 0 INPUT
			this->WE = WE; // net ID: WE lsb: 0  msb: 0 INPUT
			
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
