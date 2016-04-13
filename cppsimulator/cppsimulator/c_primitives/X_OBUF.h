/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_OBUF: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t CAPACITANCE;
		parameter_string_t DRIVE;
		parameter_string_t IOSTANDARD;
		parameter_string_t SLEW;
		//Verilog Ports in definition order:
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* I; // net ID: I lsb: 0  msb: 0 INPUT
		
		X_OBUF(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: " UNPLACED"
			parameter_string_t CAPACITANCE, // Default: "DONT_CARE"
			parameter_string_t DRIVE, // Default: 12
			parameter_string_t IOSTANDARD, // Default: "DEFAULT"
			parameter_string_t SLEW, // Default: "SLOW"
			//Verilog Ports in definition order:
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* I // net ID: I lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: " UNPLACED"
			this->CAPACITANCE = CAPACITANCE; // Default: "DONT_CARE"
			this->DRIVE = DRIVE; // Default: 12
			this->IOSTANDARD = IOSTANDARD; // Default: "DEFAULT"
			this->SLEW = SLEW; // Default: "SLOW"
			//Verilog Ports in definition order:
			this->O = O; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->I = I; // net ID: I lsb: 0  msb: 0 INPUT
			
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
