/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef SELFHEAL_OSERDESE1_VLOG_H
#define SELFHEAL_OSERDESE1_VLOG_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class selfheal_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		parameter_int_t FFD;
		parameter_int_t FFCD;
		parameter_int_t MXD;
		parameter_int_t MXR1;
		//Verilog Ports in definition order:
		NetFlow* DQ3_A0_B; // net ID: dq3 lsb: 0  msb: 0 INPUT
		NetFlow* DQ2_A0_B; // net ID: dq2 lsb: 0  msb: 0 INPUT
		NetFlow* DQ1_A0_B; // net ID: dq1 lsb: 0  msb: 0 INPUT
		NetFlow* DQ0_A0_B; // net ID: dq0 lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV_A0_B; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
		NetFlow* SRINT_A0_B; // net ID: srint lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: rst lsb: 0  msb: 0 INPUT
		NetFlow* SHO_A0_B; // net ID: SHO lsb: 0  msb: 0 OUTPUT
		
		public: selfheal_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			parameter_int_t FFD, // Default: 10
			parameter_int_t FFCD, // Default: 10
			parameter_int_t MXD, // Default: 10
			parameter_int_t MXR1, // Default: 10
			//Verilog Ports in definition order:
			NetFlow* DQ3_A0_B, // net ID: dq3 lsb: 0  msb: 0 INPUT
			NetFlow* DQ2_A0_B, // net ID: dq2 lsb: 0  msb: 0 INPUT
			NetFlow* DQ1_A0_B, // net ID: dq1 lsb: 0  msb: 0 INPUT
			NetFlow* DQ0_A0_B, // net ID: dq0 lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV_A0_B, // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			NetFlow* SRINT_A0_B, // net ID: srint lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B, // net ID: rst lsb: 0  msb: 0 INPUT
			NetFlow* SHO_A0_B // net ID: SHO lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->FFD = FFD; // Default: 10
			this->FFCD = FFCD; // Default: 10
			this->MXD = MXD; // Default: 10
			this->MXR1 = MXR1; // Default: 10
			//Verilog Ports in definition order:
			this->DQ3_A0_B = DQ3_A0_B; // net ID: dq3 lsb: 0  msb: 0 INPUT
			this->DQ2_A0_B = DQ2_A0_B; // net ID: dq2 lsb: 0  msb: 0 INPUT
			this->DQ1_A0_B = DQ1_A0_B; // net ID: dq1 lsb: 0  msb: 0 INPUT
			this->DQ0_A0_B = DQ0_A0_B; // net ID: dq0 lsb: 0  msb: 0 INPUT
			this->CLKDIV_A0_B = CLKDIV_A0_B; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			this->SRINT_A0_B = SRINT_A0_B; // net ID: srint lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: rst lsb: 0  msb: 0 INPUT
			this->SHO_A0_B = SHO_A0_B; // net ID: SHO lsb: 0  msb: 0 OUTPUT
			
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
#endif // SELFHEAL_OSERDESE1_VLOG_H
