/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_FF_CPLD_H
#define X_FF_CPLD_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_FF_CPLD: public Primitive{

		//Verilog Parameters:
		parameter_int_t INIT;
		parameter_string_t LOC;
		parameter_enum_t XON;
		parameter_enum_t MSGON;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* SET_A0_B; // net ID: SET lsb: 0  msb: 0 INPUT
		
		public: X_FF_CPLD(
			const char * name,
			//Verilog Parameters:
			parameter_int_t INIT, // Default: 1'b0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t XON, // Default: "TRUE"
			parameter_enum_t MSGON, // Default: "TRUE"
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* CE_A0_B, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* I_A0_B, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* SET_A0_B // net ID: SET lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 1'b0
			this->LOC = LOC; // Default: "UNPLACED"
			this->XON = XON; // Default: "TRUE"
			this->MSGON = MSGON; // Default: "TRUE"
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->CE_A0_B = CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->I_A0_B = I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
			this->SET_A0_B = SET_A0_B; // net ID: SET lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		void calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_FF_CPLD_H
