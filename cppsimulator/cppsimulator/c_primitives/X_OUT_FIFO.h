/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_OUT_FIFO_H
#define X_OUT_FIFO_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_OUT_FIFO: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_int_t ALMOST_EMPTY_VALUE;
		parameter_int_t ALMOST_FULL_VALUE;
		parameter_string_t ARRAY_MODE;
		parameter_enum_t OUTPUT_DISABLE;
		parameter_enum_t SYNCHRONOUS_MODE;
		//Verilog Ports in definition order:
		NetFlow* ALMOSTEMPTY_A0_B; // net ID: ALMOSTEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* ALMOSTFULL_A0_B; // net ID: ALMOSTFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* EMPTY_A0_B; // net ID: EMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* FULL_A0_B; // net ID: FULL lsb: 0  msb: 0 OUTPUT
		NetFlow* Q0_A0_B; // net ID: Q0 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q0_A1_B; // net ID: Q0 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q0_A2_B; // net ID: Q0 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q0_A3_B; // net ID: Q0 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q1_A0_B; // net ID: Q1 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q1_A1_B; // net ID: Q1 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q1_A2_B; // net ID: Q1 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q1_A3_B; // net ID: Q1 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q2_A0_B; // net ID: Q2 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q2_A1_B; // net ID: Q2 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q2_A2_B; // net ID: Q2 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q2_A3_B; // net ID: Q2 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q3_A0_B; // net ID: Q3 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q3_A1_B; // net ID: Q3 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q3_A2_B; // net ID: Q3 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q3_A3_B; // net ID: Q3 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q4_A0_B; // net ID: Q4 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q4_A1_B; // net ID: Q4 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q4_A2_B; // net ID: Q4 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q4_A3_B; // net ID: Q4 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q5_A0_B; // net ID: Q5 lsb: 0  msb: 7 OUTPUT
		NetFlow* Q5_A1_B; // net ID: Q5 lsb: 0  msb: 7 OUTPUT
		NetFlow* Q5_A2_B; // net ID: Q5 lsb: 0  msb: 7 OUTPUT
		NetFlow* Q5_A3_B; // net ID: Q5 lsb: 0  msb: 7 OUTPUT
		NetFlow* Q5_A4_B; // net ID: Q5 lsb: 0  msb: 7 OUTPUT
		NetFlow* Q5_A5_B; // net ID: Q5 lsb: 0  msb: 7 OUTPUT
		NetFlow* Q5_A6_B; // net ID: Q5 lsb: 0  msb: 7 OUTPUT
		NetFlow* Q5_A7_B; // net ID: Q5 lsb: 0  msb: 7 OUTPUT
		NetFlow* Q6_A0_B; // net ID: Q6 lsb: 0  msb: 7 OUTPUT
		NetFlow* Q6_A1_B; // net ID: Q6 lsb: 0  msb: 7 OUTPUT
		NetFlow* Q6_A2_B; // net ID: Q6 lsb: 0  msb: 7 OUTPUT
		NetFlow* Q6_A3_B; // net ID: Q6 lsb: 0  msb: 7 OUTPUT
		NetFlow* Q6_A4_B; // net ID: Q6 lsb: 0  msb: 7 OUTPUT
		NetFlow* Q6_A5_B; // net ID: Q6 lsb: 0  msb: 7 OUTPUT
		NetFlow* Q6_A6_B; // net ID: Q6 lsb: 0  msb: 7 OUTPUT
		NetFlow* Q6_A7_B; // net ID: Q6 lsb: 0  msb: 7 OUTPUT
		NetFlow* Q7_A0_B; // net ID: Q7 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q7_A1_B; // net ID: Q7 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q7_A2_B; // net ID: Q7 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q7_A3_B; // net ID: Q7 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q8_A0_B; // net ID: Q8 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q8_A1_B; // net ID: Q8 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q8_A2_B; // net ID: Q8 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q8_A3_B; // net ID: Q8 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q9_A0_B; // net ID: Q9 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q9_A1_B; // net ID: Q9 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q9_A2_B; // net ID: Q9 lsb: 0  msb: 3 OUTPUT
		NetFlow* Q9_A3_B; // net ID: Q9 lsb: 0  msb: 3 OUTPUT
		NetFlow* D0_A0_B; // net ID: D0 lsb: 0  msb: 7 INPUT
		NetFlow* D0_A1_B; // net ID: D0 lsb: 0  msb: 7 INPUT
		NetFlow* D0_A2_B; // net ID: D0 lsb: 0  msb: 7 INPUT
		NetFlow* D0_A3_B; // net ID: D0 lsb: 0  msb: 7 INPUT
		NetFlow* D0_A4_B; // net ID: D0 lsb: 0  msb: 7 INPUT
		NetFlow* D0_A5_B; // net ID: D0 lsb: 0  msb: 7 INPUT
		NetFlow* D0_A6_B; // net ID: D0 lsb: 0  msb: 7 INPUT
		NetFlow* D0_A7_B; // net ID: D0 lsb: 0  msb: 7 INPUT
		NetFlow* D1_A0_B; // net ID: D1 lsb: 0  msb: 7 INPUT
		NetFlow* D1_A1_B; // net ID: D1 lsb: 0  msb: 7 INPUT
		NetFlow* D1_A2_B; // net ID: D1 lsb: 0  msb: 7 INPUT
		NetFlow* D1_A3_B; // net ID: D1 lsb: 0  msb: 7 INPUT
		NetFlow* D1_A4_B; // net ID: D1 lsb: 0  msb: 7 INPUT
		NetFlow* D1_A5_B; // net ID: D1 lsb: 0  msb: 7 INPUT
		NetFlow* D1_A6_B; // net ID: D1 lsb: 0  msb: 7 INPUT
		NetFlow* D1_A7_B; // net ID: D1 lsb: 0  msb: 7 INPUT
		NetFlow* D2_A0_B; // net ID: D2 lsb: 0  msb: 7 INPUT
		NetFlow* D2_A1_B; // net ID: D2 lsb: 0  msb: 7 INPUT
		NetFlow* D2_A2_B; // net ID: D2 lsb: 0  msb: 7 INPUT
		NetFlow* D2_A3_B; // net ID: D2 lsb: 0  msb: 7 INPUT
		NetFlow* D2_A4_B; // net ID: D2 lsb: 0  msb: 7 INPUT
		NetFlow* D2_A5_B; // net ID: D2 lsb: 0  msb: 7 INPUT
		NetFlow* D2_A6_B; // net ID: D2 lsb: 0  msb: 7 INPUT
		NetFlow* D2_A7_B; // net ID: D2 lsb: 0  msb: 7 INPUT
		NetFlow* D3_A0_B; // net ID: D3 lsb: 0  msb: 7 INPUT
		NetFlow* D3_A1_B; // net ID: D3 lsb: 0  msb: 7 INPUT
		NetFlow* D3_A2_B; // net ID: D3 lsb: 0  msb: 7 INPUT
		NetFlow* D3_A3_B; // net ID: D3 lsb: 0  msb: 7 INPUT
		NetFlow* D3_A4_B; // net ID: D3 lsb: 0  msb: 7 INPUT
		NetFlow* D3_A5_B; // net ID: D3 lsb: 0  msb: 7 INPUT
		NetFlow* D3_A6_B; // net ID: D3 lsb: 0  msb: 7 INPUT
		NetFlow* D3_A7_B; // net ID: D3 lsb: 0  msb: 7 INPUT
		NetFlow* D4_A0_B; // net ID: D4 lsb: 0  msb: 7 INPUT
		NetFlow* D4_A1_B; // net ID: D4 lsb: 0  msb: 7 INPUT
		NetFlow* D4_A2_B; // net ID: D4 lsb: 0  msb: 7 INPUT
		NetFlow* D4_A3_B; // net ID: D4 lsb: 0  msb: 7 INPUT
		NetFlow* D4_A4_B; // net ID: D4 lsb: 0  msb: 7 INPUT
		NetFlow* D4_A5_B; // net ID: D4 lsb: 0  msb: 7 INPUT
		NetFlow* D4_A6_B; // net ID: D4 lsb: 0  msb: 7 INPUT
		NetFlow* D4_A7_B; // net ID: D4 lsb: 0  msb: 7 INPUT
		NetFlow* D5_A0_B; // net ID: D5 lsb: 0  msb: 7 INPUT
		NetFlow* D5_A1_B; // net ID: D5 lsb: 0  msb: 7 INPUT
		NetFlow* D5_A2_B; // net ID: D5 lsb: 0  msb: 7 INPUT
		NetFlow* D5_A3_B; // net ID: D5 lsb: 0  msb: 7 INPUT
		NetFlow* D5_A4_B; // net ID: D5 lsb: 0  msb: 7 INPUT
		NetFlow* D5_A5_B; // net ID: D5 lsb: 0  msb: 7 INPUT
		NetFlow* D5_A6_B; // net ID: D5 lsb: 0  msb: 7 INPUT
		NetFlow* D5_A7_B; // net ID: D5 lsb: 0  msb: 7 INPUT
		NetFlow* D6_A0_B; // net ID: D6 lsb: 0  msb: 7 INPUT
		NetFlow* D6_A1_B; // net ID: D6 lsb: 0  msb: 7 INPUT
		NetFlow* D6_A2_B; // net ID: D6 lsb: 0  msb: 7 INPUT
		NetFlow* D6_A3_B; // net ID: D6 lsb: 0  msb: 7 INPUT
		NetFlow* D6_A4_B; // net ID: D6 lsb: 0  msb: 7 INPUT
		NetFlow* D6_A5_B; // net ID: D6 lsb: 0  msb: 7 INPUT
		NetFlow* D6_A6_B; // net ID: D6 lsb: 0  msb: 7 INPUT
		NetFlow* D6_A7_B; // net ID: D6 lsb: 0  msb: 7 INPUT
		NetFlow* D7_A0_B; // net ID: D7 lsb: 0  msb: 7 INPUT
		NetFlow* D7_A1_B; // net ID: D7 lsb: 0  msb: 7 INPUT
		NetFlow* D7_A2_B; // net ID: D7 lsb: 0  msb: 7 INPUT
		NetFlow* D7_A3_B; // net ID: D7 lsb: 0  msb: 7 INPUT
		NetFlow* D7_A4_B; // net ID: D7 lsb: 0  msb: 7 INPUT
		NetFlow* D7_A5_B; // net ID: D7 lsb: 0  msb: 7 INPUT
		NetFlow* D7_A6_B; // net ID: D7 lsb: 0  msb: 7 INPUT
		NetFlow* D7_A7_B; // net ID: D7 lsb: 0  msb: 7 INPUT
		NetFlow* D8_A0_B; // net ID: D8 lsb: 0  msb: 7 INPUT
		NetFlow* D8_A1_B; // net ID: D8 lsb: 0  msb: 7 INPUT
		NetFlow* D8_A2_B; // net ID: D8 lsb: 0  msb: 7 INPUT
		NetFlow* D8_A3_B; // net ID: D8 lsb: 0  msb: 7 INPUT
		NetFlow* D8_A4_B; // net ID: D8 lsb: 0  msb: 7 INPUT
		NetFlow* D8_A5_B; // net ID: D8 lsb: 0  msb: 7 INPUT
		NetFlow* D8_A6_B; // net ID: D8 lsb: 0  msb: 7 INPUT
		NetFlow* D8_A7_B; // net ID: D8 lsb: 0  msb: 7 INPUT
		NetFlow* D9_A0_B; // net ID: D9 lsb: 0  msb: 7 INPUT
		NetFlow* D9_A1_B; // net ID: D9 lsb: 0  msb: 7 INPUT
		NetFlow* D9_A2_B; // net ID: D9 lsb: 0  msb: 7 INPUT
		NetFlow* D9_A3_B; // net ID: D9 lsb: 0  msb: 7 INPUT
		NetFlow* D9_A4_B; // net ID: D9 lsb: 0  msb: 7 INPUT
		NetFlow* D9_A5_B; // net ID: D9 lsb: 0  msb: 7 INPUT
		NetFlow* D9_A6_B; // net ID: D9 lsb: 0  msb: 7 INPUT
		NetFlow* D9_A7_B; // net ID: D9 lsb: 0  msb: 7 INPUT
		NetFlow* RDCLK_A0_B; // net ID: RDCLK lsb: 0  msb: 0 INPUT
		NetFlow* RDEN_A0_B; // net ID: RDEN lsb: 0  msb: 0 INPUT
		NetFlow* RESET_A0_B; // net ID: RESET lsb: 0  msb: 0 INPUT
		NetFlow* WRCLK_A0_B; // net ID: WRCLK lsb: 0  msb: 0 INPUT
		NetFlow* WREN_A0_B; // net ID: WREN lsb: 0  msb: 0 INPUT
		
		public: X_OUT_FIFO(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t ALMOST_EMPTY_VALUE, // Default: 1
			parameter_int_t ALMOST_FULL_VALUE, // Default: 1
			parameter_string_t ARRAY_MODE, // Default: "ARRAY_MODE_8_X_4"
			parameter_enum_t OUTPUT_DISABLE, // Default: "FALSE"
			parameter_enum_t SYNCHRONOUS_MODE, // Default: "FALSE"
			//Verilog Ports in definition order:
			NetFlow* ALMOSTEMPTY_A0_B, // net ID: ALMOSTEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* ALMOSTFULL_A0_B, // net ID: ALMOSTFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* EMPTY_A0_B, // net ID: EMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* FULL_A0_B, // net ID: FULL lsb: 0  msb: 0 OUTPUT
			NetFlow* Q0_A0_B, // net ID: Q0 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q0_A1_B, // net ID: Q0 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q0_A2_B, // net ID: Q0 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q0_A3_B, // net ID: Q0 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q1_A0_B, // net ID: Q1 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q1_A1_B, // net ID: Q1 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q1_A2_B, // net ID: Q1 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q1_A3_B, // net ID: Q1 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q2_A0_B, // net ID: Q2 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q2_A1_B, // net ID: Q2 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q2_A2_B, // net ID: Q2 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q2_A3_B, // net ID: Q2 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q3_A0_B, // net ID: Q3 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q3_A1_B, // net ID: Q3 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q3_A2_B, // net ID: Q3 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q3_A3_B, // net ID: Q3 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q4_A0_B, // net ID: Q4 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q4_A1_B, // net ID: Q4 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q4_A2_B, // net ID: Q4 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q4_A3_B, // net ID: Q4 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q5_A0_B, // net ID: Q5 lsb: 0  msb: 7 OUTPUT
			NetFlow* Q5_A1_B, // net ID: Q5 lsb: 0  msb: 7 OUTPUT
			NetFlow* Q5_A2_B, // net ID: Q5 lsb: 0  msb: 7 OUTPUT
			NetFlow* Q5_A3_B, // net ID: Q5 lsb: 0  msb: 7 OUTPUT
			NetFlow* Q5_A4_B, // net ID: Q5 lsb: 0  msb: 7 OUTPUT
			NetFlow* Q5_A5_B, // net ID: Q5 lsb: 0  msb: 7 OUTPUT
			NetFlow* Q5_A6_B, // net ID: Q5 lsb: 0  msb: 7 OUTPUT
			NetFlow* Q5_A7_B, // net ID: Q5 lsb: 0  msb: 7 OUTPUT
			NetFlow* Q6_A0_B, // net ID: Q6 lsb: 0  msb: 7 OUTPUT
			NetFlow* Q6_A1_B, // net ID: Q6 lsb: 0  msb: 7 OUTPUT
			NetFlow* Q6_A2_B, // net ID: Q6 lsb: 0  msb: 7 OUTPUT
			NetFlow* Q6_A3_B, // net ID: Q6 lsb: 0  msb: 7 OUTPUT
			NetFlow* Q6_A4_B, // net ID: Q6 lsb: 0  msb: 7 OUTPUT
			NetFlow* Q6_A5_B, // net ID: Q6 lsb: 0  msb: 7 OUTPUT
			NetFlow* Q6_A6_B, // net ID: Q6 lsb: 0  msb: 7 OUTPUT
			NetFlow* Q6_A7_B, // net ID: Q6 lsb: 0  msb: 7 OUTPUT
			NetFlow* Q7_A0_B, // net ID: Q7 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q7_A1_B, // net ID: Q7 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q7_A2_B, // net ID: Q7 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q7_A3_B, // net ID: Q7 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q8_A0_B, // net ID: Q8 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q8_A1_B, // net ID: Q8 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q8_A2_B, // net ID: Q8 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q8_A3_B, // net ID: Q8 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q9_A0_B, // net ID: Q9 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q9_A1_B, // net ID: Q9 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q9_A2_B, // net ID: Q9 lsb: 0  msb: 3 OUTPUT
			NetFlow* Q9_A3_B, // net ID: Q9 lsb: 0  msb: 3 OUTPUT
			NetFlow* D0_A0_B, // net ID: D0 lsb: 0  msb: 7 INPUT
			NetFlow* D0_A1_B, // net ID: D0 lsb: 0  msb: 7 INPUT
			NetFlow* D0_A2_B, // net ID: D0 lsb: 0  msb: 7 INPUT
			NetFlow* D0_A3_B, // net ID: D0 lsb: 0  msb: 7 INPUT
			NetFlow* D0_A4_B, // net ID: D0 lsb: 0  msb: 7 INPUT
			NetFlow* D0_A5_B, // net ID: D0 lsb: 0  msb: 7 INPUT
			NetFlow* D0_A6_B, // net ID: D0 lsb: 0  msb: 7 INPUT
			NetFlow* D0_A7_B, // net ID: D0 lsb: 0  msb: 7 INPUT
			NetFlow* D1_A0_B, // net ID: D1 lsb: 0  msb: 7 INPUT
			NetFlow* D1_A1_B, // net ID: D1 lsb: 0  msb: 7 INPUT
			NetFlow* D1_A2_B, // net ID: D1 lsb: 0  msb: 7 INPUT
			NetFlow* D1_A3_B, // net ID: D1 lsb: 0  msb: 7 INPUT
			NetFlow* D1_A4_B, // net ID: D1 lsb: 0  msb: 7 INPUT
			NetFlow* D1_A5_B, // net ID: D1 lsb: 0  msb: 7 INPUT
			NetFlow* D1_A6_B, // net ID: D1 lsb: 0  msb: 7 INPUT
			NetFlow* D1_A7_B, // net ID: D1 lsb: 0  msb: 7 INPUT
			NetFlow* D2_A0_B, // net ID: D2 lsb: 0  msb: 7 INPUT
			NetFlow* D2_A1_B, // net ID: D2 lsb: 0  msb: 7 INPUT
			NetFlow* D2_A2_B, // net ID: D2 lsb: 0  msb: 7 INPUT
			NetFlow* D2_A3_B, // net ID: D2 lsb: 0  msb: 7 INPUT
			NetFlow* D2_A4_B, // net ID: D2 lsb: 0  msb: 7 INPUT
			NetFlow* D2_A5_B, // net ID: D2 lsb: 0  msb: 7 INPUT
			NetFlow* D2_A6_B, // net ID: D2 lsb: 0  msb: 7 INPUT
			NetFlow* D2_A7_B, // net ID: D2 lsb: 0  msb: 7 INPUT
			NetFlow* D3_A0_B, // net ID: D3 lsb: 0  msb: 7 INPUT
			NetFlow* D3_A1_B, // net ID: D3 lsb: 0  msb: 7 INPUT
			NetFlow* D3_A2_B, // net ID: D3 lsb: 0  msb: 7 INPUT
			NetFlow* D3_A3_B, // net ID: D3 lsb: 0  msb: 7 INPUT
			NetFlow* D3_A4_B, // net ID: D3 lsb: 0  msb: 7 INPUT
			NetFlow* D3_A5_B, // net ID: D3 lsb: 0  msb: 7 INPUT
			NetFlow* D3_A6_B, // net ID: D3 lsb: 0  msb: 7 INPUT
			NetFlow* D3_A7_B, // net ID: D3 lsb: 0  msb: 7 INPUT
			NetFlow* D4_A0_B, // net ID: D4 lsb: 0  msb: 7 INPUT
			NetFlow* D4_A1_B, // net ID: D4 lsb: 0  msb: 7 INPUT
			NetFlow* D4_A2_B, // net ID: D4 lsb: 0  msb: 7 INPUT
			NetFlow* D4_A3_B, // net ID: D4 lsb: 0  msb: 7 INPUT
			NetFlow* D4_A4_B, // net ID: D4 lsb: 0  msb: 7 INPUT
			NetFlow* D4_A5_B, // net ID: D4 lsb: 0  msb: 7 INPUT
			NetFlow* D4_A6_B, // net ID: D4 lsb: 0  msb: 7 INPUT
			NetFlow* D4_A7_B, // net ID: D4 lsb: 0  msb: 7 INPUT
			NetFlow* D5_A0_B, // net ID: D5 lsb: 0  msb: 7 INPUT
			NetFlow* D5_A1_B, // net ID: D5 lsb: 0  msb: 7 INPUT
			NetFlow* D5_A2_B, // net ID: D5 lsb: 0  msb: 7 INPUT
			NetFlow* D5_A3_B, // net ID: D5 lsb: 0  msb: 7 INPUT
			NetFlow* D5_A4_B, // net ID: D5 lsb: 0  msb: 7 INPUT
			NetFlow* D5_A5_B, // net ID: D5 lsb: 0  msb: 7 INPUT
			NetFlow* D5_A6_B, // net ID: D5 lsb: 0  msb: 7 INPUT
			NetFlow* D5_A7_B, // net ID: D5 lsb: 0  msb: 7 INPUT
			NetFlow* D6_A0_B, // net ID: D6 lsb: 0  msb: 7 INPUT
			NetFlow* D6_A1_B, // net ID: D6 lsb: 0  msb: 7 INPUT
			NetFlow* D6_A2_B, // net ID: D6 lsb: 0  msb: 7 INPUT
			NetFlow* D6_A3_B, // net ID: D6 lsb: 0  msb: 7 INPUT
			NetFlow* D6_A4_B, // net ID: D6 lsb: 0  msb: 7 INPUT
			NetFlow* D6_A5_B, // net ID: D6 lsb: 0  msb: 7 INPUT
			NetFlow* D6_A6_B, // net ID: D6 lsb: 0  msb: 7 INPUT
			NetFlow* D6_A7_B, // net ID: D6 lsb: 0  msb: 7 INPUT
			NetFlow* D7_A0_B, // net ID: D7 lsb: 0  msb: 7 INPUT
			NetFlow* D7_A1_B, // net ID: D7 lsb: 0  msb: 7 INPUT
			NetFlow* D7_A2_B, // net ID: D7 lsb: 0  msb: 7 INPUT
			NetFlow* D7_A3_B, // net ID: D7 lsb: 0  msb: 7 INPUT
			NetFlow* D7_A4_B, // net ID: D7 lsb: 0  msb: 7 INPUT
			NetFlow* D7_A5_B, // net ID: D7 lsb: 0  msb: 7 INPUT
			NetFlow* D7_A6_B, // net ID: D7 lsb: 0  msb: 7 INPUT
			NetFlow* D7_A7_B, // net ID: D7 lsb: 0  msb: 7 INPUT
			NetFlow* D8_A0_B, // net ID: D8 lsb: 0  msb: 7 INPUT
			NetFlow* D8_A1_B, // net ID: D8 lsb: 0  msb: 7 INPUT
			NetFlow* D8_A2_B, // net ID: D8 lsb: 0  msb: 7 INPUT
			NetFlow* D8_A3_B, // net ID: D8 lsb: 0  msb: 7 INPUT
			NetFlow* D8_A4_B, // net ID: D8 lsb: 0  msb: 7 INPUT
			NetFlow* D8_A5_B, // net ID: D8 lsb: 0  msb: 7 INPUT
			NetFlow* D8_A6_B, // net ID: D8 lsb: 0  msb: 7 INPUT
			NetFlow* D8_A7_B, // net ID: D8 lsb: 0  msb: 7 INPUT
			NetFlow* D9_A0_B, // net ID: D9 lsb: 0  msb: 7 INPUT
			NetFlow* D9_A1_B, // net ID: D9 lsb: 0  msb: 7 INPUT
			NetFlow* D9_A2_B, // net ID: D9 lsb: 0  msb: 7 INPUT
			NetFlow* D9_A3_B, // net ID: D9 lsb: 0  msb: 7 INPUT
			NetFlow* D9_A4_B, // net ID: D9 lsb: 0  msb: 7 INPUT
			NetFlow* D9_A5_B, // net ID: D9 lsb: 0  msb: 7 INPUT
			NetFlow* D9_A6_B, // net ID: D9 lsb: 0  msb: 7 INPUT
			NetFlow* D9_A7_B, // net ID: D9 lsb: 0  msb: 7 INPUT
			NetFlow* RDCLK_A0_B, // net ID: RDCLK lsb: 0  msb: 0 INPUT
			NetFlow* RDEN_A0_B, // net ID: RDEN lsb: 0  msb: 0 INPUT
			NetFlow* RESET_A0_B, // net ID: RESET lsb: 0  msb: 0 INPUT
			NetFlow* WRCLK_A0_B, // net ID: WRCLK lsb: 0  msb: 0 INPUT
			NetFlow* WREN_A0_B // net ID: WREN lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->ALMOST_EMPTY_VALUE = ALMOST_EMPTY_VALUE; // Default: 1
			this->ALMOST_FULL_VALUE = ALMOST_FULL_VALUE; // Default: 1
			this->ARRAY_MODE = ARRAY_MODE; // Default: "ARRAY_MODE_8_X_4"
			this->OUTPUT_DISABLE = OUTPUT_DISABLE; // Default: "FALSE"
			this->SYNCHRONOUS_MODE = SYNCHRONOUS_MODE; // Default: "FALSE"
			//Verilog Ports in definition order:
			this->ALMOSTEMPTY_A0_B = ALMOSTEMPTY_A0_B; // net ID: ALMOSTEMPTY lsb: 0  msb: 0 OUTPUT
			this->ALMOSTFULL_A0_B = ALMOSTFULL_A0_B; // net ID: ALMOSTFULL lsb: 0  msb: 0 OUTPUT
			this->EMPTY_A0_B = EMPTY_A0_B; // net ID: EMPTY lsb: 0  msb: 0 OUTPUT
			this->FULL_A0_B = FULL_A0_B; // net ID: FULL lsb: 0  msb: 0 OUTPUT
			this->Q0_A0_B = Q0_A0_B; // net ID: Q0 lsb: 0  msb: 3 OUTPUT
			this->Q0_A1_B = Q0_A1_B; // net ID: Q0 lsb: 0  msb: 3 OUTPUT
			this->Q0_A2_B = Q0_A2_B; // net ID: Q0 lsb: 0  msb: 3 OUTPUT
			this->Q0_A3_B = Q0_A3_B; // net ID: Q0 lsb: 0  msb: 3 OUTPUT
			this->Q1_A0_B = Q1_A0_B; // net ID: Q1 lsb: 0  msb: 3 OUTPUT
			this->Q1_A1_B = Q1_A1_B; // net ID: Q1 lsb: 0  msb: 3 OUTPUT
			this->Q1_A2_B = Q1_A2_B; // net ID: Q1 lsb: 0  msb: 3 OUTPUT
			this->Q1_A3_B = Q1_A3_B; // net ID: Q1 lsb: 0  msb: 3 OUTPUT
			this->Q2_A0_B = Q2_A0_B; // net ID: Q2 lsb: 0  msb: 3 OUTPUT
			this->Q2_A1_B = Q2_A1_B; // net ID: Q2 lsb: 0  msb: 3 OUTPUT
			this->Q2_A2_B = Q2_A2_B; // net ID: Q2 lsb: 0  msb: 3 OUTPUT
			this->Q2_A3_B = Q2_A3_B; // net ID: Q2 lsb: 0  msb: 3 OUTPUT
			this->Q3_A0_B = Q3_A0_B; // net ID: Q3 lsb: 0  msb: 3 OUTPUT
			this->Q3_A1_B = Q3_A1_B; // net ID: Q3 lsb: 0  msb: 3 OUTPUT
			this->Q3_A2_B = Q3_A2_B; // net ID: Q3 lsb: 0  msb: 3 OUTPUT
			this->Q3_A3_B = Q3_A3_B; // net ID: Q3 lsb: 0  msb: 3 OUTPUT
			this->Q4_A0_B = Q4_A0_B; // net ID: Q4 lsb: 0  msb: 3 OUTPUT
			this->Q4_A1_B = Q4_A1_B; // net ID: Q4 lsb: 0  msb: 3 OUTPUT
			this->Q4_A2_B = Q4_A2_B; // net ID: Q4 lsb: 0  msb: 3 OUTPUT
			this->Q4_A3_B = Q4_A3_B; // net ID: Q4 lsb: 0  msb: 3 OUTPUT
			this->Q5_A0_B = Q5_A0_B; // net ID: Q5 lsb: 0  msb: 7 OUTPUT
			this->Q5_A1_B = Q5_A1_B; // net ID: Q5 lsb: 0  msb: 7 OUTPUT
			this->Q5_A2_B = Q5_A2_B; // net ID: Q5 lsb: 0  msb: 7 OUTPUT
			this->Q5_A3_B = Q5_A3_B; // net ID: Q5 lsb: 0  msb: 7 OUTPUT
			this->Q5_A4_B = Q5_A4_B; // net ID: Q5 lsb: 0  msb: 7 OUTPUT
			this->Q5_A5_B = Q5_A5_B; // net ID: Q5 lsb: 0  msb: 7 OUTPUT
			this->Q5_A6_B = Q5_A6_B; // net ID: Q5 lsb: 0  msb: 7 OUTPUT
			this->Q5_A7_B = Q5_A7_B; // net ID: Q5 lsb: 0  msb: 7 OUTPUT
			this->Q6_A0_B = Q6_A0_B; // net ID: Q6 lsb: 0  msb: 7 OUTPUT
			this->Q6_A1_B = Q6_A1_B; // net ID: Q6 lsb: 0  msb: 7 OUTPUT
			this->Q6_A2_B = Q6_A2_B; // net ID: Q6 lsb: 0  msb: 7 OUTPUT
			this->Q6_A3_B = Q6_A3_B; // net ID: Q6 lsb: 0  msb: 7 OUTPUT
			this->Q6_A4_B = Q6_A4_B; // net ID: Q6 lsb: 0  msb: 7 OUTPUT
			this->Q6_A5_B = Q6_A5_B; // net ID: Q6 lsb: 0  msb: 7 OUTPUT
			this->Q6_A6_B = Q6_A6_B; // net ID: Q6 lsb: 0  msb: 7 OUTPUT
			this->Q6_A7_B = Q6_A7_B; // net ID: Q6 lsb: 0  msb: 7 OUTPUT
			this->Q7_A0_B = Q7_A0_B; // net ID: Q7 lsb: 0  msb: 3 OUTPUT
			this->Q7_A1_B = Q7_A1_B; // net ID: Q7 lsb: 0  msb: 3 OUTPUT
			this->Q7_A2_B = Q7_A2_B; // net ID: Q7 lsb: 0  msb: 3 OUTPUT
			this->Q7_A3_B = Q7_A3_B; // net ID: Q7 lsb: 0  msb: 3 OUTPUT
			this->Q8_A0_B = Q8_A0_B; // net ID: Q8 lsb: 0  msb: 3 OUTPUT
			this->Q8_A1_B = Q8_A1_B; // net ID: Q8 lsb: 0  msb: 3 OUTPUT
			this->Q8_A2_B = Q8_A2_B; // net ID: Q8 lsb: 0  msb: 3 OUTPUT
			this->Q8_A3_B = Q8_A3_B; // net ID: Q8 lsb: 0  msb: 3 OUTPUT
			this->Q9_A0_B = Q9_A0_B; // net ID: Q9 lsb: 0  msb: 3 OUTPUT
			this->Q9_A1_B = Q9_A1_B; // net ID: Q9 lsb: 0  msb: 3 OUTPUT
			this->Q9_A2_B = Q9_A2_B; // net ID: Q9 lsb: 0  msb: 3 OUTPUT
			this->Q9_A3_B = Q9_A3_B; // net ID: Q9 lsb: 0  msb: 3 OUTPUT
			this->D0_A0_B = D0_A0_B; // net ID: D0 lsb: 0  msb: 7 INPUT
			this->D0_A1_B = D0_A1_B; // net ID: D0 lsb: 0  msb: 7 INPUT
			this->D0_A2_B = D0_A2_B; // net ID: D0 lsb: 0  msb: 7 INPUT
			this->D0_A3_B = D0_A3_B; // net ID: D0 lsb: 0  msb: 7 INPUT
			this->D0_A4_B = D0_A4_B; // net ID: D0 lsb: 0  msb: 7 INPUT
			this->D0_A5_B = D0_A5_B; // net ID: D0 lsb: 0  msb: 7 INPUT
			this->D0_A6_B = D0_A6_B; // net ID: D0 lsb: 0  msb: 7 INPUT
			this->D0_A7_B = D0_A7_B; // net ID: D0 lsb: 0  msb: 7 INPUT
			this->D1_A0_B = D1_A0_B; // net ID: D1 lsb: 0  msb: 7 INPUT
			this->D1_A1_B = D1_A1_B; // net ID: D1 lsb: 0  msb: 7 INPUT
			this->D1_A2_B = D1_A2_B; // net ID: D1 lsb: 0  msb: 7 INPUT
			this->D1_A3_B = D1_A3_B; // net ID: D1 lsb: 0  msb: 7 INPUT
			this->D1_A4_B = D1_A4_B; // net ID: D1 lsb: 0  msb: 7 INPUT
			this->D1_A5_B = D1_A5_B; // net ID: D1 lsb: 0  msb: 7 INPUT
			this->D1_A6_B = D1_A6_B; // net ID: D1 lsb: 0  msb: 7 INPUT
			this->D1_A7_B = D1_A7_B; // net ID: D1 lsb: 0  msb: 7 INPUT
			this->D2_A0_B = D2_A0_B; // net ID: D2 lsb: 0  msb: 7 INPUT
			this->D2_A1_B = D2_A1_B; // net ID: D2 lsb: 0  msb: 7 INPUT
			this->D2_A2_B = D2_A2_B; // net ID: D2 lsb: 0  msb: 7 INPUT
			this->D2_A3_B = D2_A3_B; // net ID: D2 lsb: 0  msb: 7 INPUT
			this->D2_A4_B = D2_A4_B; // net ID: D2 lsb: 0  msb: 7 INPUT
			this->D2_A5_B = D2_A5_B; // net ID: D2 lsb: 0  msb: 7 INPUT
			this->D2_A6_B = D2_A6_B; // net ID: D2 lsb: 0  msb: 7 INPUT
			this->D2_A7_B = D2_A7_B; // net ID: D2 lsb: 0  msb: 7 INPUT
			this->D3_A0_B = D3_A0_B; // net ID: D3 lsb: 0  msb: 7 INPUT
			this->D3_A1_B = D3_A1_B; // net ID: D3 lsb: 0  msb: 7 INPUT
			this->D3_A2_B = D3_A2_B; // net ID: D3 lsb: 0  msb: 7 INPUT
			this->D3_A3_B = D3_A3_B; // net ID: D3 lsb: 0  msb: 7 INPUT
			this->D3_A4_B = D3_A4_B; // net ID: D3 lsb: 0  msb: 7 INPUT
			this->D3_A5_B = D3_A5_B; // net ID: D3 lsb: 0  msb: 7 INPUT
			this->D3_A6_B = D3_A6_B; // net ID: D3 lsb: 0  msb: 7 INPUT
			this->D3_A7_B = D3_A7_B; // net ID: D3 lsb: 0  msb: 7 INPUT
			this->D4_A0_B = D4_A0_B; // net ID: D4 lsb: 0  msb: 7 INPUT
			this->D4_A1_B = D4_A1_B; // net ID: D4 lsb: 0  msb: 7 INPUT
			this->D4_A2_B = D4_A2_B; // net ID: D4 lsb: 0  msb: 7 INPUT
			this->D4_A3_B = D4_A3_B; // net ID: D4 lsb: 0  msb: 7 INPUT
			this->D4_A4_B = D4_A4_B; // net ID: D4 lsb: 0  msb: 7 INPUT
			this->D4_A5_B = D4_A5_B; // net ID: D4 lsb: 0  msb: 7 INPUT
			this->D4_A6_B = D4_A6_B; // net ID: D4 lsb: 0  msb: 7 INPUT
			this->D4_A7_B = D4_A7_B; // net ID: D4 lsb: 0  msb: 7 INPUT
			this->D5_A0_B = D5_A0_B; // net ID: D5 lsb: 0  msb: 7 INPUT
			this->D5_A1_B = D5_A1_B; // net ID: D5 lsb: 0  msb: 7 INPUT
			this->D5_A2_B = D5_A2_B; // net ID: D5 lsb: 0  msb: 7 INPUT
			this->D5_A3_B = D5_A3_B; // net ID: D5 lsb: 0  msb: 7 INPUT
			this->D5_A4_B = D5_A4_B; // net ID: D5 lsb: 0  msb: 7 INPUT
			this->D5_A5_B = D5_A5_B; // net ID: D5 lsb: 0  msb: 7 INPUT
			this->D5_A6_B = D5_A6_B; // net ID: D5 lsb: 0  msb: 7 INPUT
			this->D5_A7_B = D5_A7_B; // net ID: D5 lsb: 0  msb: 7 INPUT
			this->D6_A0_B = D6_A0_B; // net ID: D6 lsb: 0  msb: 7 INPUT
			this->D6_A1_B = D6_A1_B; // net ID: D6 lsb: 0  msb: 7 INPUT
			this->D6_A2_B = D6_A2_B; // net ID: D6 lsb: 0  msb: 7 INPUT
			this->D6_A3_B = D6_A3_B; // net ID: D6 lsb: 0  msb: 7 INPUT
			this->D6_A4_B = D6_A4_B; // net ID: D6 lsb: 0  msb: 7 INPUT
			this->D6_A5_B = D6_A5_B; // net ID: D6 lsb: 0  msb: 7 INPUT
			this->D6_A6_B = D6_A6_B; // net ID: D6 lsb: 0  msb: 7 INPUT
			this->D6_A7_B = D6_A7_B; // net ID: D6 lsb: 0  msb: 7 INPUT
			this->D7_A0_B = D7_A0_B; // net ID: D7 lsb: 0  msb: 7 INPUT
			this->D7_A1_B = D7_A1_B; // net ID: D7 lsb: 0  msb: 7 INPUT
			this->D7_A2_B = D7_A2_B; // net ID: D7 lsb: 0  msb: 7 INPUT
			this->D7_A3_B = D7_A3_B; // net ID: D7 lsb: 0  msb: 7 INPUT
			this->D7_A4_B = D7_A4_B; // net ID: D7 lsb: 0  msb: 7 INPUT
			this->D7_A5_B = D7_A5_B; // net ID: D7 lsb: 0  msb: 7 INPUT
			this->D7_A6_B = D7_A6_B; // net ID: D7 lsb: 0  msb: 7 INPUT
			this->D7_A7_B = D7_A7_B; // net ID: D7 lsb: 0  msb: 7 INPUT
			this->D8_A0_B = D8_A0_B; // net ID: D8 lsb: 0  msb: 7 INPUT
			this->D8_A1_B = D8_A1_B; // net ID: D8 lsb: 0  msb: 7 INPUT
			this->D8_A2_B = D8_A2_B; // net ID: D8 lsb: 0  msb: 7 INPUT
			this->D8_A3_B = D8_A3_B; // net ID: D8 lsb: 0  msb: 7 INPUT
			this->D8_A4_B = D8_A4_B; // net ID: D8 lsb: 0  msb: 7 INPUT
			this->D8_A5_B = D8_A5_B; // net ID: D8 lsb: 0  msb: 7 INPUT
			this->D8_A6_B = D8_A6_B; // net ID: D8 lsb: 0  msb: 7 INPUT
			this->D8_A7_B = D8_A7_B; // net ID: D8 lsb: 0  msb: 7 INPUT
			this->D9_A0_B = D9_A0_B; // net ID: D9 lsb: 0  msb: 7 INPUT
			this->D9_A1_B = D9_A1_B; // net ID: D9 lsb: 0  msb: 7 INPUT
			this->D9_A2_B = D9_A2_B; // net ID: D9 lsb: 0  msb: 7 INPUT
			this->D9_A3_B = D9_A3_B; // net ID: D9 lsb: 0  msb: 7 INPUT
			this->D9_A4_B = D9_A4_B; // net ID: D9 lsb: 0  msb: 7 INPUT
			this->D9_A5_B = D9_A5_B; // net ID: D9 lsb: 0  msb: 7 INPUT
			this->D9_A6_B = D9_A6_B; // net ID: D9 lsb: 0  msb: 7 INPUT
			this->D9_A7_B = D9_A7_B; // net ID: D9 lsb: 0  msb: 7 INPUT
			this->RDCLK_A0_B = RDCLK_A0_B; // net ID: RDCLK lsb: 0  msb: 0 INPUT
			this->RDEN_A0_B = RDEN_A0_B; // net ID: RDEN lsb: 0  msb: 0 INPUT
			this->RESET_A0_B = RESET_A0_B; // net ID: RESET lsb: 0  msb: 0 INPUT
			this->WRCLK_A0_B = WRCLK_A0_B; // net ID: WRCLK lsb: 0  msb: 0 INPUT
			this->WREN_A0_B = WREN_A0_B; // net ID: WREN lsb: 0  msb: 0 INPUT
			
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
#endif // X_OUT_FIFO_H
