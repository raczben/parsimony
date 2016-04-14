/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_BUFPLL_MCB_H
#define X_BUFPLL_MCB_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_BUFPLL_MCB: public Primitive{

		//Verilog Parameters:
		parameter_int_t DIVIDE;
		parameter_string_t LOCK_SRC;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* IOCLK0_A0_B; // net ID: IOCLK0 lsb: 0  msb: 0 OUTPUT
		NetFlow* IOCLK1_A0_B; // net ID: IOCLK1 lsb: 0  msb: 0 OUTPUT
		NetFlow* LOCK_A0_B; // net ID: LOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* SERDESSTROBE0_A0_B; // net ID: SERDESSTROBE0 lsb: 0  msb: 0 OUTPUT
		NetFlow* SERDESSTROBE1_A0_B; // net ID: SERDESSTROBE1 lsb: 0  msb: 0 OUTPUT
		NetFlow* GCLK_A0_B; // net ID: GCLK lsb: 0  msb: 0 INPUT
		NetFlow* LOCKED_A0_B; // net ID: LOCKED lsb: 0  msb: 0 INPUT
		NetFlow* PLLIN0_A0_B; // net ID: PLLIN0 lsb: 0  msb: 0 INPUT
		NetFlow* PLLIN1_A0_B; // net ID: PLLIN1 lsb: 0  msb: 0 INPUT
		
		public: X_BUFPLL_MCB(
			const char * name,
			//Verilog Parameters:
			parameter_int_t DIVIDE, // Default: 2
			parameter_string_t LOCK_SRC, // Default: "LOCK_TO_0"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* IOCLK0_A0_B, // net ID: IOCLK0 lsb: 0  msb: 0 OUTPUT
			NetFlow* IOCLK1_A0_B, // net ID: IOCLK1 lsb: 0  msb: 0 OUTPUT
			NetFlow* LOCK_A0_B, // net ID: LOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* SERDESSTROBE0_A0_B, // net ID: SERDESSTROBE0 lsb: 0  msb: 0 OUTPUT
			NetFlow* SERDESSTROBE1_A0_B, // net ID: SERDESSTROBE1 lsb: 0  msb: 0 OUTPUT
			NetFlow* GCLK_A0_B, // net ID: GCLK lsb: 0  msb: 0 INPUT
			NetFlow* LOCKED_A0_B, // net ID: LOCKED lsb: 0  msb: 0 INPUT
			NetFlow* PLLIN0_A0_B, // net ID: PLLIN0 lsb: 0  msb: 0 INPUT
			NetFlow* PLLIN1_A0_B // net ID: PLLIN1 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DIVIDE = DIVIDE; // Default: 2
			this->LOCK_SRC = LOCK_SRC; // Default: "LOCK_TO_0"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->IOCLK0_A0_B = IOCLK0_A0_B; // net ID: IOCLK0 lsb: 0  msb: 0 OUTPUT
			this->IOCLK1_A0_B = IOCLK1_A0_B; // net ID: IOCLK1 lsb: 0  msb: 0 OUTPUT
			this->LOCK_A0_B = LOCK_A0_B; // net ID: LOCK lsb: 0  msb: 0 OUTPUT
			this->SERDESSTROBE0_A0_B = SERDESSTROBE0_A0_B; // net ID: SERDESSTROBE0 lsb: 0  msb: 0 OUTPUT
			this->SERDESSTROBE1_A0_B = SERDESSTROBE1_A0_B; // net ID: SERDESSTROBE1 lsb: 0  msb: 0 OUTPUT
			this->GCLK_A0_B = GCLK_A0_B; // net ID: GCLK lsb: 0  msb: 0 INPUT
			this->LOCKED_A0_B = LOCKED_A0_B; // net ID: LOCKED lsb: 0  msb: 0 INPUT
			this->PLLIN0_A0_B = PLLIN0_A0_B; // net ID: PLLIN0 lsb: 0  msb: 0 INPUT
			this->PLLIN1_A0_B = PLLIN1_A0_B; // net ID: PLLIN1 lsb: 0  msb: 0 INPUT
			
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
#endif // X_BUFPLL_MCB_H
