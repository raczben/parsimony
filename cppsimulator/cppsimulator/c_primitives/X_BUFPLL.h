/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_BUFPLL_H
#define X_BUFPLL_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_BUFPLL: public Primitive{

		//Verilog Parameters:
		parameter_int_t DIVIDE;
		parameter_enum_t ENABLE_SYNC;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* IOCLK_A0_B; // net ID: IOCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* LOCK_A0_B; // net ID: LOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* SERDESSTROBE_A0_B; // net ID: SERDESSTROBE lsb: 0  msb: 0 OUTPUT
		NetFlow* GCLK_A0_B; // net ID: GCLK lsb: 0  msb: 0 INPUT
		NetFlow* LOCKED_A0_B; // net ID: LOCKED lsb: 0  msb: 0 INPUT
		NetFlow* PLLIN_A0_B; // net ID: PLLIN lsb: 0  msb: 0 INPUT
		
		public: X_BUFPLL(
			const char * name,
			//Verilog Parameters:
			parameter_int_t DIVIDE, // Default: 1
			parameter_enum_t ENABLE_SYNC, // Default: "TRUE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* IOCLK_A0_B, // net ID: IOCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* LOCK_A0_B, // net ID: LOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* SERDESSTROBE_A0_B, // net ID: SERDESSTROBE lsb: 0  msb: 0 OUTPUT
			NetFlow* GCLK_A0_B, // net ID: GCLK lsb: 0  msb: 0 INPUT
			NetFlow* LOCKED_A0_B, // net ID: LOCKED lsb: 0  msb: 0 INPUT
			NetFlow* PLLIN_A0_B // net ID: PLLIN lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DIVIDE = DIVIDE; // Default: 1
			this->ENABLE_SYNC = ENABLE_SYNC; // Default: "TRUE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->IOCLK_A0_B = IOCLK_A0_B; // net ID: IOCLK lsb: 0  msb: 0 OUTPUT
			this->LOCK_A0_B = LOCK_A0_B; // net ID: LOCK lsb: 0  msb: 0 OUTPUT
			this->SERDESSTROBE_A0_B = SERDESSTROBE_A0_B; // net ID: SERDESSTROBE lsb: 0  msb: 0 OUTPUT
			this->GCLK_A0_B = GCLK_A0_B; // net ID: GCLK lsb: 0  msb: 0 INPUT
			this->LOCKED_A0_B = LOCKED_A0_B; // net ID: LOCKED lsb: 0  msb: 0 INPUT
			this->PLLIN_A0_B = PLLIN_A0_B; // net ID: PLLIN lsb: 0  msb: 0 INPUT
			
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
#endif // X_BUFPLL_H
