/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_BUFPLL_MCB: public Primitive{

		//Verilog Parameters:
		parameter_string_t DIVIDE;
		parameter_string_t LOCK_SRC;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* IOCLK0; // net ID: IOCLK0 lsb: 0  msb: 0 OUTPUT
		NetFlow* IOCLK1; // net ID: IOCLK1 lsb: 0  msb: 0 OUTPUT
		NetFlow* LOCK; // net ID: LOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* SERDESSTROBE0; // net ID: SERDESSTROBE0 lsb: 0  msb: 0 OUTPUT
		NetFlow* SERDESSTROBE1; // net ID: SERDESSTROBE1 lsb: 0  msb: 0 OUTPUT
		NetFlow* GCLK; // net ID: GCLK lsb: 0  msb: 0 INPUT
		NetFlow* LOCKED; // net ID: LOCKED lsb: 0  msb: 0 INPUT
		NetFlow* PLLIN0; // net ID: PLLIN0 lsb: 0  msb: 0 INPUT
		NetFlow* PLLIN1; // net ID: PLLIN1 lsb: 0  msb: 0 INPUT
		
		X_BUFPLL_MCB(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DIVIDE, // Default: 2
			parameter_string_t LOCK_SRC, // Default: "LOCK_TO_0"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* IOCLK0, // net ID: IOCLK0 lsb: 0  msb: 0 OUTPUT
			NetFlow* IOCLK1, // net ID: IOCLK1 lsb: 0  msb: 0 OUTPUT
			NetFlow* LOCK, // net ID: LOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* SERDESSTROBE0, // net ID: SERDESSTROBE0 lsb: 0  msb: 0 OUTPUT
			NetFlow* SERDESSTROBE1, // net ID: SERDESSTROBE1 lsb: 0  msb: 0 OUTPUT
			NetFlow* GCLK, // net ID: GCLK lsb: 0  msb: 0 INPUT
			NetFlow* LOCKED, // net ID: LOCKED lsb: 0  msb: 0 INPUT
			NetFlow* PLLIN0, // net ID: PLLIN0 lsb: 0  msb: 0 INPUT
			NetFlow* PLLIN1 // net ID: PLLIN1 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DIVIDE = DIVIDE; // Default: 2
			this->LOCK_SRC = LOCK_SRC; // Default: "LOCK_TO_0"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->IOCLK0 = IOCLK0; // net ID: IOCLK0 lsb: 0  msb: 0 OUTPUT
			this->IOCLK1 = IOCLK1; // net ID: IOCLK1 lsb: 0  msb: 0 OUTPUT
			this->LOCK = LOCK; // net ID: LOCK lsb: 0  msb: 0 OUTPUT
			this->SERDESSTROBE0 = SERDESSTROBE0; // net ID: SERDESSTROBE0 lsb: 0  msb: 0 OUTPUT
			this->SERDESSTROBE1 = SERDESSTROBE1; // net ID: SERDESSTROBE1 lsb: 0  msb: 0 OUTPUT
			this->GCLK = GCLK; // net ID: GCLK lsb: 0  msb: 0 INPUT
			this->LOCKED = LOCKED; // net ID: LOCKED lsb: 0  msb: 0 INPUT
			this->PLLIN0 = PLLIN0; // net ID: PLLIN0 lsb: 0  msb: 0 INPUT
			this->PLLIN1 = PLLIN1; // net ID: PLLIN1 lsb: 0  msb: 0 INPUT
			
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
