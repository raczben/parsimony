/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_BUFIO2_H
#define X_BUFIO2_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_BUFIO2: public Primitive{

		//Verilog Parameters:
		parameter_enum_t DIVIDE_BYPASS;
		parameter_int_t DIVIDE;
		parameter_enum_t I_INVERT;
		parameter_enum_t USE_DOUBLER;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* DIVCLK_A0_B; // net ID: DIVCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* IOCLK_A0_B; // net ID: IOCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* SERDESSTROBE_A0_B; // net ID: SERDESSTROBE lsb: 0  msb: 0 OUTPUT
		NetFlow* I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
		
		public: X_BUFIO2(
			const char * name,
			//Verilog Parameters:
			parameter_enum_t DIVIDE_BYPASS, // Default: "TRUE"
			parameter_int_t DIVIDE, // Default: 1
			parameter_enum_t I_INVERT, // Default: "FALSE"
			parameter_enum_t USE_DOUBLER, // Default: "FALSE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* DIVCLK_A0_B, // net ID: DIVCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* IOCLK_A0_B, // net ID: IOCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* SERDESSTROBE_A0_B, // net ID: SERDESSTROBE lsb: 0  msb: 0 OUTPUT
			NetFlow* I_A0_B // net ID: I lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DIVIDE_BYPASS = DIVIDE_BYPASS; // Default: "TRUE"
			this->DIVIDE = DIVIDE; // Default: 1
			this->I_INVERT = I_INVERT; // Default: "FALSE"
			this->USE_DOUBLER = USE_DOUBLER; // Default: "FALSE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->DIVCLK_A0_B = DIVCLK_A0_B; // net ID: DIVCLK lsb: 0  msb: 0 OUTPUT
			this->IOCLK_A0_B = IOCLK_A0_B; // net ID: IOCLK lsb: 0  msb: 0 OUTPUT
			this->SERDESSTROBE_A0_B = SERDESSTROBE_A0_B; // net ID: SERDESSTROBE lsb: 0  msb: 0 OUTPUT
			this->I_A0_B = I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
			
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
#endif // X_BUFIO2_H
