/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_DNA_PORT_H
#define X_DNA_PORT_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_DNA_PORT: public Primitive{

		//Verilog Parameters:
		parameter_int_t SIM_DNA_VALUE;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* DOUT_A0_B; // net ID: DOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* DIN_A0_B; // net ID: DIN lsb: 0  msb: 0 INPUT
		NetFlow* READ_A0_B; // net ID: READ lsb: 0  msb: 0 INPUT
		NetFlow* SHIFT_A0_B; // net ID: SHIFT lsb: 0  msb: 0 INPUT
		
		public: X_DNA_PORT(
			const char * name,
			//Verilog Parameters:
			parameter_int_t SIM_DNA_VALUE, // Default: 57'h0
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* DOUT_A0_B, // net ID: DOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* DIN_A0_B, // net ID: DIN lsb: 0  msb: 0 INPUT
			NetFlow* READ_A0_B, // net ID: READ lsb: 0  msb: 0 INPUT
			NetFlow* SHIFT_A0_B // net ID: SHIFT lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->SIM_DNA_VALUE = SIM_DNA_VALUE; // Default: 57'h0
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->DOUT_A0_B = DOUT_A0_B; // net ID: DOUT lsb: 0  msb: 0 OUTPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->DIN_A0_B = DIN_A0_B; // net ID: DIN lsb: 0  msb: 0 INPUT
			this->READ_A0_B = READ_A0_B; // net ID: READ lsb: 0  msb: 0 INPUT
			this->SHIFT_A0_B = SHIFT_A0_B; // net ID: SHIFT lsb: 0  msb: 0 INPUT
			
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
#endif // X_DNA_PORT_H
