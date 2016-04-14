/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef PLG_OSERDESE1_VLOG_H
#define PLG_OSERDESE1_VLOG_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class plg_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		parameter_int_t ffdcnt;
		parameter_int_t mxdcnt;
		parameter_int_t FFRST;
		//Verilog Ports in definition order:
		NetFlow* C23_A0_B; // net ID: c23 lsb: 0  msb: 0 INPUT
		NetFlow* C45_A0_B; // net ID: c45 lsb: 0  msb: 0 INPUT
		NetFlow* C67_A0_B; // net ID: c67 lsb: 0  msb: 0 INPUT
		NetFlow* SEL_A0_B; // net ID: sel lsb: 0  msb: 1 INPUT
		NetFlow* SEL_A1_B; // net ID: sel lsb: 0  msb: 1 INPUT
		NetFlow* CLK_A0_B; // net ID: clk lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV_A0_B; // net ID: clkdiv lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: rst lsb: 0  msb: 0 INPUT
		NetFlow* LOAD_A0_B; // net ID: load lsb: 0  msb: 0 OUTPUT
		NetFlow* IOCLK__GLITCH_A0_B; // net ID: IOCLK_GLITCH lsb: 0  msb: 0 OUTPUT
		
		public: plg_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			parameter_int_t ffdcnt, // Default: 1
			parameter_int_t mxdcnt, // Default: 1
			parameter_int_t FFRST, // Default: 145
			//Verilog Ports in definition order:
			NetFlow* C23_A0_B, // net ID: c23 lsb: 0  msb: 0 INPUT
			NetFlow* C45_A0_B, // net ID: c45 lsb: 0  msb: 0 INPUT
			NetFlow* C67_A0_B, // net ID: c67 lsb: 0  msb: 0 INPUT
			NetFlow* SEL_A0_B, // net ID: sel lsb: 0  msb: 1 INPUT
			NetFlow* SEL_A1_B, // net ID: sel lsb: 0  msb: 1 INPUT
			NetFlow* CLK_A0_B, // net ID: clk lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV_A0_B, // net ID: clkdiv lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B, // net ID: rst lsb: 0  msb: 0 INPUT
			NetFlow* LOAD_A0_B, // net ID: load lsb: 0  msb: 0 OUTPUT
			NetFlow* IOCLK__GLITCH_A0_B // net ID: IOCLK_GLITCH lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->ffdcnt = ffdcnt; // Default: 1
			this->mxdcnt = mxdcnt; // Default: 1
			this->FFRST = FFRST; // Default: 145
			//Verilog Ports in definition order:
			this->C23_A0_B = C23_A0_B; // net ID: c23 lsb: 0  msb: 0 INPUT
			this->C45_A0_B = C45_A0_B; // net ID: c45 lsb: 0  msb: 0 INPUT
			this->C67_A0_B = C67_A0_B; // net ID: c67 lsb: 0  msb: 0 INPUT
			this->SEL_A0_B = SEL_A0_B; // net ID: sel lsb: 0  msb: 1 INPUT
			this->SEL_A1_B = SEL_A1_B; // net ID: sel lsb: 0  msb: 1 INPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: clk lsb: 0  msb: 0 INPUT
			this->CLKDIV_A0_B = CLKDIV_A0_B; // net ID: clkdiv lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: rst lsb: 0  msb: 0 INPUT
			this->LOAD_A0_B = LOAD_A0_B; // net ID: load lsb: 0  msb: 0 OUTPUT
			this->IOCLK__GLITCH_A0_B = IOCLK__GLITCH_A0_B; // net ID: IOCLK_GLITCH lsb: 0  msb: 0 OUTPUT
			
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
#endif // PLG_OSERDESE1_VLOG_H
