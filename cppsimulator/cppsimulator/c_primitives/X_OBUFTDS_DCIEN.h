/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_OBUFTDS_DCIEN_H
#define X_OBUFTDS_DCIEN_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_OBUFTDS_DCIEN: public Primitive{

		//Verilog Parameters:
		parameter_string_t IOSTANDARD;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* OB_A0_B; // net ID: OB lsb: 0  msb: 0 OUTPUT
		NetFlow* DCITERMDISABLE_A0_B; // net ID: DCITERMDISABLE lsb: 0  msb: 0 INPUT
		NetFlow* I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* T_A0_B; // net ID: T lsb: 0  msb: 0 INPUT
		
		public: X_OBUFTDS_DCIEN(
			const char * name,
			//Verilog Parameters:
			parameter_string_t IOSTANDARD, // Default: "DEFAULT"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* OB_A0_B, // net ID: OB lsb: 0  msb: 0 OUTPUT
			NetFlow* DCITERMDISABLE_A0_B, // net ID: DCITERMDISABLE lsb: 0  msb: 0 INPUT
			NetFlow* I_A0_B, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* T_A0_B // net ID: T lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->IOSTANDARD = IOSTANDARD; // Default: "DEFAULT"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->OB_A0_B = OB_A0_B; // net ID: OB lsb: 0  msb: 0 OUTPUT
			this->DCITERMDISABLE_A0_B = DCITERMDISABLE_A0_B; // net ID: DCITERMDISABLE lsb: 0  msb: 0 INPUT
			this->I_A0_B = I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
			this->T_A0_B = T_A0_B; // net ID: T lsb: 0  msb: 0 INPUT
			
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
#endif // X_OBUFTDS_DCIEN_H
