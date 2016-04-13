/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_DNA_PORT: public Primitive{

		//Verilog Parameters:
		parameter_string_t SIM_DNA_VALUE;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* DOUT; // net ID: DOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* DIN; // net ID: DIN lsb: 0  msb: 0 INPUT
		NetFlow* READ; // net ID: READ lsb: 0  msb: 0 INPUT
		NetFlow* SHIFT; // net ID: SHIFT lsb: 0  msb: 0 INPUT
		
		X_DNA_PORT(
			const char * name,
			//Verilog Parameters:
			parameter_string_t SIM_DNA_VALUE, // Default: 57'h0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* DOUT, // net ID: DOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* DIN, // net ID: DIN lsb: 0  msb: 0 INPUT
			NetFlow* READ, // net ID: READ lsb: 0  msb: 0 INPUT
			NetFlow* SHIFT // net ID: SHIFT lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->SIM_DNA_VALUE = SIM_DNA_VALUE; // Default: 57'h0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->DOUT = DOUT; // net ID: DOUT lsb: 0  msb: 0 OUTPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->DIN = DIN; // net ID: DIN lsb: 0  msb: 0 INPUT
			this->READ = READ; // net ID: READ lsb: 0  msb: 0 INPUT
			this->SHIFT = SHIFT; // net ID: SHIFT lsb: 0  msb: 0 INPUT
			
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
