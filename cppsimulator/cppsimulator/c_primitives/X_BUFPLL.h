/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_BUFPLL: public Primitive{

		//Verilog Parameters:
		parameter_string_t DIVIDE;
		parameter_enum_t ENABLE_SYNC;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* IOCLK; // net ID: IOCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* LOCK; // net ID: LOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* SERDESSTROBE; // net ID: SERDESSTROBE lsb: 0  msb: 0 OUTPUT
		NetFlow* GCLK; // net ID: GCLK lsb: 0  msb: 0 INPUT
		NetFlow* LOCKED; // net ID: LOCKED lsb: 0  msb: 0 INPUT
		NetFlow* PLLIN; // net ID: PLLIN lsb: 0  msb: 0 INPUT
		
		X_BUFPLL(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DIVIDE, // Default: 1
			parameter_enum_t ENABLE_SYNC, // Default: "TRUE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* IOCLK, // net ID: IOCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* LOCK, // net ID: LOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* SERDESSTROBE, // net ID: SERDESSTROBE lsb: 0  msb: 0 OUTPUT
			NetFlow* GCLK, // net ID: GCLK lsb: 0  msb: 0 INPUT
			NetFlow* LOCKED, // net ID: LOCKED lsb: 0  msb: 0 INPUT
			NetFlow* PLLIN // net ID: PLLIN lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DIVIDE = DIVIDE; // Default: 1
			this->ENABLE_SYNC = ENABLE_SYNC; // Default: "TRUE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->IOCLK = IOCLK; // net ID: IOCLK lsb: 0  msb: 0 OUTPUT
			this->LOCK = LOCK; // net ID: LOCK lsb: 0  msb: 0 OUTPUT
			this->SERDESSTROBE = SERDESSTROBE; // net ID: SERDESSTROBE lsb: 0  msb: 0 OUTPUT
			this->GCLK = GCLK; // net ID: GCLK lsb: 0  msb: 0 INPUT
			this->LOCKED = LOCKED; // net ID: LOCKED lsb: 0  msb: 0 INPUT
			this->PLLIN = PLLIN; // net ID: PLLIN lsb: 0  msb: 0 INPUT
			
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
