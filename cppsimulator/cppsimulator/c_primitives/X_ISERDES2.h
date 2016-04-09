/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_ISERDES2{

		//Verilog Parameters:
		parameter_enum_t BITSLIP_ENABLE;
		parameter_string_t DATA_RATE;
		parameter_int_t DATA_WIDTH;
		parameter_string_t INTERFACE_TYPE;
		parameter_string_t SERDES_MODE;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CFB0; // OUTPUT
		NetFlow* CFB1; // OUTPUT
		NetFlow* DFB; // OUTPUT
		NetFlow* FABRICOUT; // OUTPUT
		NetFlow* INCDEC; // OUTPUT
		NetFlow* Q1; // OUTPUT
		NetFlow* Q2; // OUTPUT
		NetFlow* Q3; // OUTPUT
		NetFlow* Q4; // OUTPUT
		NetFlow* SHIFTOUT; // OUTPUT
		NetFlow* VALID; // OUTPUT
		NetFlow* BITSLIP; // INPUT
		NetFlow* CE0; // INPUT
		NetFlow* CLK0; // INPUT
		NetFlow* CLK1; // INPUT
		NetFlow* CLKDIV; // INPUT
		NetFlow* D; // INPUT
		NetFlow* IOCE; // INPUT
		NetFlow* RST; // INPUT
		NetFlow* SHIFTIN; // INPUT
		
	
		X_ISERDES2(
			//Verilog Parameters:
			parameter_enum_t BITSLIP_ENABLE, // Default: "FALSE"
			parameter_string_t DATA_RATE, // Default: "SDR"
			parameter_int_t DATA_WIDTH, // Default: 1
			parameter_string_t INTERFACE_TYPE, // Default: "NETWORKING"
			parameter_string_t SERDES_MODE, // Default: "NONE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CFB0, // OUTPUT
			NetFlow* CFB1, // OUTPUT
			NetFlow* DFB, // OUTPUT
			NetFlow* FABRICOUT, // OUTPUT
			NetFlow* INCDEC, // OUTPUT
			NetFlow* Q1, // OUTPUT
			NetFlow* Q2, // OUTPUT
			NetFlow* Q3, // OUTPUT
			NetFlow* Q4, // OUTPUT
			NetFlow* SHIFTOUT, // OUTPUT
			NetFlow* VALID, // OUTPUT
			NetFlow* BITSLIP, // INPUT
			NetFlow* CE0, // INPUT
			NetFlow* CLK0, // INPUT
			NetFlow* CLK1, // INPUT
			NetFlow* CLKDIV, // INPUT
			NetFlow* D, // INPUT
			NetFlow* IOCE, // INPUT
			NetFlow* RST, // INPUT
			NetFlow* SHIFTIN // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->BITSLIP_ENABLE = BITSLIP_ENABLE; // Default: "FALSE"
			this->DATA_RATE = DATA_RATE; // Default: "SDR"
			this->DATA_WIDTH = DATA_WIDTH; // Default: 1
			this->INTERFACE_TYPE = INTERFACE_TYPE; // Default: "NETWORKING"
			this->SERDES_MODE = SERDES_MODE; // Default: "NONE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CFB0 = CFB0; // OUTPUT
			this->CFB1 = CFB1; // OUTPUT
			this->DFB = DFB; // OUTPUT
			this->FABRICOUT = FABRICOUT; // OUTPUT
			this->INCDEC = INCDEC; // OUTPUT
			this->Q1 = Q1; // OUTPUT
			this->Q2 = Q2; // OUTPUT
			this->Q3 = Q3; // OUTPUT
			this->Q4 = Q4; // OUTPUT
			this->SHIFTOUT = SHIFTOUT; // OUTPUT
			this->VALID = VALID; // OUTPUT
			this->BITSLIP = BITSLIP; // INPUT
			this->CE0 = CE0; // INPUT
			this->CLK0 = CLK0; // INPUT
			this->CLK1 = CLK1; // INPUT
			this->CLKDIV = CLKDIV; // INPUT
			this->D = D; // INPUT
			this->IOCE = IOCE; // INPUT
			this->RST = RST; // INPUT
			this->SHIFTIN = SHIFTIN; // INPUT
		
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
