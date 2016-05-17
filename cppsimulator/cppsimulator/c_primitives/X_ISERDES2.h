/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_ISERDES2_H
#define X_ISERDES2_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_ISERDES2: public Primitive{

		//Verilog Parameters:
		parameter_enum_t BITSLIP_ENABLE;
		parameter_string_t DATA_RATE;
		parameter_int_t DATA_WIDTH;
		parameter_string_t INTERFACE_TYPE;
		parameter_string_t SERDES_MODE;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CFB0_A0_B; // net ID: CFB0 lsb: 0  msb: 0 OUTPUT
		NetFlow* CFB1_A0_B; // net ID: CFB1 lsb: 0  msb: 0 OUTPUT
		NetFlow* DFB_A0_B; // net ID: DFB lsb: 0  msb: 0 OUTPUT
		NetFlow* FABRICOUT_A0_B; // net ID: FABRICOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* INCDEC_A0_B; // net ID: INCDEC lsb: 0  msb: 0 OUTPUT
		NetFlow* Q1_A0_B; // net ID: Q1 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q2_A0_B; // net ID: Q2 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q3_A0_B; // net ID: Q3 lsb: 0  msb: 0 OUTPUT
		NetFlow* Q4_A0_B; // net ID: Q4 lsb: 0  msb: 0 OUTPUT
		NetFlow* SHIFTOUT_A0_B; // net ID: SHIFTOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* VALID_A0_B; // net ID: VALID lsb: 0  msb: 0 OUTPUT
		NetFlow* BITSLIP_A0_B; // net ID: BITSLIP lsb: 0  msb: 0 INPUT
		NetFlow* CE0_A0_B; // net ID: CE0 lsb: 0  msb: 0 INPUT
		NetFlow* CLK0_A0_B; // net ID: CLK0 lsb: 0  msb: 0 INPUT
		NetFlow* CLK1_A0_B; // net ID: CLK1 lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV_A0_B; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
		NetFlow* D_A0_B; // net ID: D lsb: 0  msb: 0 INPUT
		NetFlow* IOCE_A0_B; // net ID: IOCE lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* SHIFTIN_A0_B; // net ID: SHIFTIN lsb: 0  msb: 0 INPUT
		
		public: X_ISERDES2(
			const char * name,
			//Verilog Parameters:
			parameter_enum_t BITSLIP_ENABLE, // Default: "FALSE"
			parameter_string_t DATA_RATE, // Default: "SDR"
			parameter_int_t DATA_WIDTH, // Default: 1
			parameter_string_t INTERFACE_TYPE, // Default: "NETWORKING"
			parameter_string_t SERDES_MODE, // Default: "NONE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CFB0_A0_B, // net ID: CFB0 lsb: 0  msb: 0 OUTPUT
			NetFlow* CFB1_A0_B, // net ID: CFB1 lsb: 0  msb: 0 OUTPUT
			NetFlow* DFB_A0_B, // net ID: DFB lsb: 0  msb: 0 OUTPUT
			NetFlow* FABRICOUT_A0_B, // net ID: FABRICOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* INCDEC_A0_B, // net ID: INCDEC lsb: 0  msb: 0 OUTPUT
			NetFlow* Q1_A0_B, // net ID: Q1 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q2_A0_B, // net ID: Q2 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q3_A0_B, // net ID: Q3 lsb: 0  msb: 0 OUTPUT
			NetFlow* Q4_A0_B, // net ID: Q4 lsb: 0  msb: 0 OUTPUT
			NetFlow* SHIFTOUT_A0_B, // net ID: SHIFTOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* VALID_A0_B, // net ID: VALID lsb: 0  msb: 0 OUTPUT
			NetFlow* BITSLIP_A0_B, // net ID: BITSLIP lsb: 0  msb: 0 INPUT
			NetFlow* CE0_A0_B, // net ID: CE0 lsb: 0  msb: 0 INPUT
			NetFlow* CLK0_A0_B, // net ID: CLK0 lsb: 0  msb: 0 INPUT
			NetFlow* CLK1_A0_B, // net ID: CLK1 lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV_A0_B, // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			NetFlow* D_A0_B, // net ID: D lsb: 0  msb: 0 INPUT
			NetFlow* IOCE_A0_B, // net ID: IOCE lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* SHIFTIN_A0_B // net ID: SHIFTIN lsb: 0  msb: 0 INPUT
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
			this->CFB0_A0_B = CFB0_A0_B; // net ID: CFB0 lsb: 0  msb: 0 OUTPUT
			this->CFB1_A0_B = CFB1_A0_B; // net ID: CFB1 lsb: 0  msb: 0 OUTPUT
			this->DFB_A0_B = DFB_A0_B; // net ID: DFB lsb: 0  msb: 0 OUTPUT
			this->FABRICOUT_A0_B = FABRICOUT_A0_B; // net ID: FABRICOUT lsb: 0  msb: 0 OUTPUT
			this->INCDEC_A0_B = INCDEC_A0_B; // net ID: INCDEC lsb: 0  msb: 0 OUTPUT
			this->Q1_A0_B = Q1_A0_B; // net ID: Q1 lsb: 0  msb: 0 OUTPUT
			this->Q2_A0_B = Q2_A0_B; // net ID: Q2 lsb: 0  msb: 0 OUTPUT
			this->Q3_A0_B = Q3_A0_B; // net ID: Q3 lsb: 0  msb: 0 OUTPUT
			this->Q4_A0_B = Q4_A0_B; // net ID: Q4 lsb: 0  msb: 0 OUTPUT
			this->SHIFTOUT_A0_B = SHIFTOUT_A0_B; // net ID: SHIFTOUT lsb: 0  msb: 0 OUTPUT
			this->VALID_A0_B = VALID_A0_B; // net ID: VALID lsb: 0  msb: 0 OUTPUT
			this->BITSLIP_A0_B = BITSLIP_A0_B; // net ID: BITSLIP lsb: 0  msb: 0 INPUT
			this->CE0_A0_B = CE0_A0_B; // net ID: CE0 lsb: 0  msb: 0 INPUT
			this->CLK0_A0_B = CLK0_A0_B; // net ID: CLK0 lsb: 0  msb: 0 INPUT
			this->CLK1_A0_B = CLK1_A0_B; // net ID: CLK1 lsb: 0  msb: 0 INPUT
			this->CLKDIV_A0_B = CLKDIV_A0_B; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			this->D_A0_B = D_A0_B; // net ID: D lsb: 0  msb: 0 INPUT
			this->IOCE_A0_B = IOCE_A0_B; // net ID: IOCE lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
			this->SHIFTIN_A0_B = SHIFTIN_A0_B; // net ID: SHIFTIN lsb: 0  msb: 0 INPUT
			
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
#endif // X_ISERDES2_H
