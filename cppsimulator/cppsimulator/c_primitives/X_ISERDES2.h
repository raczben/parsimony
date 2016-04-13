/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_ISERDES2: public Primitive{

		//Verilog Parameters:
		parameter_enum_t BITSLIP_ENABLE;
		parameter_string_t DATA_RATE;
		parameter_string_t DATA_WIDTH;
		parameter_string_t INTERFACE_TYPE;
		parameter_string_t SERDES_MODE;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CFB0; // net ID: CFB0 lsb: 0  msb: 0 OUTPUT
		NetFlow* CFB1; // net ID: CFB1 lsb: 0  msb: 0 OUTPUT
		NetFlow* DFB; // net ID: DFB lsb: 0  msb: 0 OUTPUT
		NetFlow* FABRICOUT; // net ID: FABRICOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* INCDEC; // net ID: INCDEC lsb: 0  msb: 0 OUTPUT
		NetFlow* Q1; // net ID: Q1 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q2; // net ID: Q2 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q3; // net ID: Q3 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q4; // net ID: Q4 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT; // net ID: SHIFTOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* VALID; // net ID: VALID lsb: 0  msb: 0 OUTPUT
		NetFlow* BITSLIP; // net ID: BITSLIP lsb: 0  msb: 0 INPUT
		NetFlow* CE0; // net ID: CE0 lsb: 0  msb: 0 INPUT
		NetFlow* CLK0; // net ID: CLK0 lsb: 0  msb: 0 INPUT
		NetFlow* CLK1; // net ID: CLK1 lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
		NetFlow* D; // net ID: D lsb: 0  msb: 0 INPUT
		NetFlow* IOCE; // net ID: IOCE lsb: 0  msb: 0 INPUT
		NetFlow* RST; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN; // net ID: SHIFTIN lsb: 0  msb: 0 INPUT
		
		X_ISERDES2(
			const char * name,
			//Verilog Parameters:
			parameter_enum_t BITSLIP_ENABLE, // Default: "FALSE"
			parameter_string_t DATA_RATE, // Default: "SDR"
			parameter_string_t DATA_WIDTH, // Default: 1
			parameter_string_t INTERFACE_TYPE, // Default: "NETWORKING"
			parameter_string_t SERDES_MODE, // Default: "NONE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CFB0, // net ID: CFB0 lsb: 0  msb: 0 OUTPUT
			NetFlow* CFB1, // net ID: CFB1 lsb: 0  msb: 0 OUTPUT
			NetFlow* DFB, // net ID: DFB lsb: 0  msb: 0 OUTPUT
			NetFlow* FABRICOUT, // net ID: FABRICOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* INCDEC, // net ID: INCDEC lsb: 0  msb: 0 OUTPUT
			NetFlow* Q1, // net ID: Q1 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q2, // net ID: Q2 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q3, // net ID: Q3 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q4, // net ID: Q4 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT, // net ID: SHIFTOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* VALID, // net ID: VALID lsb: 0  msb: 0 OUTPUT
			NetFlow* BITSLIP, // net ID: BITSLIP lsb: 0  msb: 0 INPUT
			NetFlow* CE0, // net ID: CE0 lsb: 0  msb: 0 INPUT
			NetFlow* CLK0, // net ID: CLK0 lsb: 0  msb: 0 INPUT
			NetFlow* CLK1, // net ID: CLK1 lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV, // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			NetFlow* D, // net ID: D lsb: 0  msb: 0 INPUT
			NetFlow* IOCE, // net ID: IOCE lsb: 0  msb: 0 INPUT
			NetFlow* RST, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN // net ID: SHIFTIN lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->BITSLIP_ENABLE = BITSLIP_ENABLE; // Default: "FALSE"
			this->DATA_RATE = DATA_RATE; // Default: "SDR"
			this->DATA_WIDTH = DATA_WIDTH; // Default: 1
			this->INTERFACE_TYPE = INTERFACE_TYPE; // Default: "NETWORKING"
			this->SERDES_MODE = SERDES_MODE; // Default: "NONE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CFB0 = CFB0; // net ID: CFB0 lsb: 0  msb: 0 OUTPUT
			this->CFB1 = CFB1; // net ID: CFB1 lsb: 0  msb: 0 OUTPUT
			this->DFB = DFB; // net ID: DFB lsb: 0  msb: 0 OUTPUT
			this->FABRICOUT = FABRICOUT; // net ID: FABRICOUT lsb: 0  msb: 0 OUTPUT
			this->INCDEC = INCDEC; // net ID: INCDEC lsb: 0  msb: 0 OUTPUT
			this->Q1 = Q1; // net ID: Q1 lsb: 0  msb: 0 OUTPUT
			this->Q2 = Q2; // net ID: Q2 lsb: 0  msb: 0 OUTPUT
			this->Q3 = Q3; // net ID: Q3 lsb: 0  msb: 0 OUTPUT
			this->Q4 = Q4; // net ID: Q4 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT = SHIFTOUT; // net ID: SHIFTOUT lsb: 0  msb: 0 OUTPUT
			this->VALID = VALID; // net ID: VALID lsb: 0  msb: 0 OUTPUT
			this->BITSLIP = BITSLIP; // net ID: BITSLIP lsb: 0  msb: 0 INPUT
			this->CE0 = CE0; // net ID: CE0 lsb: 0  msb: 0 INPUT
			this->CLK0 = CLK0; // net ID: CLK0 lsb: 0  msb: 0 INPUT
			this->CLK1 = CLK1; // net ID: CLK1 lsb: 0  msb: 0 INPUT
			this->CLKDIV = CLKDIV; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			this->D = D; // net ID: D lsb: 0  msb: 0 INPUT
			this->IOCE = IOCE; // net ID: IOCE lsb: 0  msb: 0 INPUT
			this->RST = RST; // net ID: RST lsb: 0  msb: 0 INPUT
			this->SHIFTIN = SHIFTIN; // net ID: SHIFTIN lsb: 0  msb: 0 INPUT
			
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
