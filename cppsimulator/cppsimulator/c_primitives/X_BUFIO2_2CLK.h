/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_BUFIO2_2CLK: public Primitive{

		//Verilog Parameters:
		parameter_string_t DIVIDE;
		parameter_enum_t I_INVERT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* DIVCLK; // net ID: DIVCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* IOCLK; // net ID: IOCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* SERDESSTROBE; // net ID: SERDESSTROBE lsb: 0  msb: 0 OUTPUT
		NetFlow* I; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* IB; // net ID: IB lsb: 0  msb: 0 INPUT
		
		X_BUFIO2_2CLK(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DIVIDE, // Default: 3
			parameter_enum_t I_INVERT, // Default: "FALSE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* DIVCLK, // net ID: DIVCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* IOCLK, // net ID: IOCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* SERDESSTROBE, // net ID: SERDESSTROBE lsb: 0  msb: 0 OUTPUT
			NetFlow* I, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* IB // net ID: IB lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DIVIDE = DIVIDE; // Default: 3
			this->I_INVERT = I_INVERT; // Default: "FALSE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->DIVCLK = DIVCLK; // net ID: DIVCLK lsb: 0  msb: 0 OUTPUT
			this->IOCLK = IOCLK; // net ID: IOCLK lsb: 0  msb: 0 OUTPUT
			this->SERDESSTROBE = SERDESSTROBE; // net ID: SERDESSTROBE lsb: 0  msb: 0 OUTPUT
			this->I = I; // net ID: I lsb: 0  msb: 0 INPUT
			this->IB = IB; // net ID: IB lsb: 0  msb: 0 INPUT
			
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
