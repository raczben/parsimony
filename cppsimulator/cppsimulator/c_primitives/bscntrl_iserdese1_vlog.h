/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef BSCNTRL_ISERDESE1_VLOG_H
#define BSCNTRL_ISERDESE1_VLOG_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class bscntrl_iserdese1_vlog: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* C23_A0_B; // net ID: c23 lsb: 0  msb: 0 INPUT
		NetFlow* C45_A0_B; // net ID: c45 lsb: 0  msb: 0 INPUT
		NetFlow* C67_A0_B; // net ID: c67 lsb: 0  msb: 0 INPUT
		NetFlow* SEL_A0_B; // net ID: sel lsb: 0  msb: 1 INPUT
		NetFlow* SEL_A1_B; // net ID: sel lsb: 0  msb: 1 INPUT
		NetFlow* DATA__RATE_A0_B; // net ID: DATA_RATE lsb: 0  msb: 0 INPUT
		NetFlow* BITSLIP_A0_B; // net ID: bitslip lsb: 0  msb: 0 INPUT
		NetFlow* CLK_A0_B; // net ID: clk lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV_A0_B; // net ID: clkdiv lsb: 0  msb: 0 INPUT
		NetFlow* R_A0_B; // net ID: r lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV__INT_A0_B; // net ID: clkdiv_int lsb: 0  msb: 0 OUTPUT
		NetFlow* MUXC_A0_B; // net ID: muxc lsb: 0  msb: 0 OUTPUT
		
		public: bscntrl_iserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* C23_A0_B, // net ID: c23 lsb: 0  msb: 0 INPUT
			NetFlow* C45_A0_B, // net ID: c45 lsb: 0  msb: 0 INPUT
			NetFlow* C67_A0_B, // net ID: c67 lsb: 0  msb: 0 INPUT
			NetFlow* SEL_A0_B, // net ID: sel lsb: 0  msb: 1 INPUT
			NetFlow* SEL_A1_B, // net ID: sel lsb: 0  msb: 1 INPUT
			NetFlow* DATA__RATE_A0_B, // net ID: DATA_RATE lsb: 0  msb: 0 INPUT
			NetFlow* BITSLIP_A0_B, // net ID: bitslip lsb: 0  msb: 0 INPUT
			NetFlow* CLK_A0_B, // net ID: clk lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV_A0_B, // net ID: clkdiv lsb: 0  msb: 0 INPUT
			NetFlow* R_A0_B, // net ID: r lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV__INT_A0_B, // net ID: clkdiv_int lsb: 0  msb: 0 OUTPUT
			NetFlow* MUXC_A0_B // net ID: muxc lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->C23_A0_B = C23_A0_B; // net ID: c23 lsb: 0  msb: 0 INPUT
			this->C45_A0_B = C45_A0_B; // net ID: c45 lsb: 0  msb: 0 INPUT
			this->C67_A0_B = C67_A0_B; // net ID: c67 lsb: 0  msb: 0 INPUT
			this->SEL_A0_B = SEL_A0_B; // net ID: sel lsb: 0  msb: 1 INPUT
			this->SEL_A1_B = SEL_A1_B; // net ID: sel lsb: 0  msb: 1 INPUT
			this->DATA__RATE_A0_B = DATA__RATE_A0_B; // net ID: DATA_RATE lsb: 0  msb: 0 INPUT
			this->BITSLIP_A0_B = BITSLIP_A0_B; // net ID: bitslip lsb: 0  msb: 0 INPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: clk lsb: 0  msb: 0 INPUT
			this->CLKDIV_A0_B = CLKDIV_A0_B; // net ID: clkdiv lsb: 0  msb: 0 INPUT
			this->R_A0_B = R_A0_B; // net ID: r lsb: 0  msb: 0 INPUT
			this->CLKDIV__INT_A0_B = CLKDIV__INT_A0_B; // net ID: clkdiv_int lsb: 0  msb: 0 OUTPUT
			this->MUXC_A0_B = MUXC_A0_B; // net ID: muxc lsb: 0  msb: 0 OUTPUT
			
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
#endif // BSCNTRL_ISERDESE1_VLOG_H
