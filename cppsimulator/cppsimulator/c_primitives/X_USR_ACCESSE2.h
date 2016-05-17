/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_USR_ACCESSE2_H
#define X_USR_ACCESSE2_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_USR_ACCESSE2: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CFGCLK_A0_B; // net ID: CFGCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* DATA_A31_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A30_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A29_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A28_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A27_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A26_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A25_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A24_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A23_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A22_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A21_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A20_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A19_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A18_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A17_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A16_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A15_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A14_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A13_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A12_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A11_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A10_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A9_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A8_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A7_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A6_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A5_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A4_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A3_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A2_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A1_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATA_A0_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
		NetFlow* DATAVALID_A0_B; // net ID: DATAVALID lsb: 0  msb: 0 OUTPUT
		
		public: X_USR_ACCESSE2(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CFGCLK_A0_B, // net ID: CFGCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* DATA_A31_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A30_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A29_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A28_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A27_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A26_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A25_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A24_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A23_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A22_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A21_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A20_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A19_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A18_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A17_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A16_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A15_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A14_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A13_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A12_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A11_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A10_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A9_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A8_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A7_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A6_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A5_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A4_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A3_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A2_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A1_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATA_A0_B, // net ID: DATA lsb: 0  msb: 31 OUTPUT
			NetFlow* DATAVALID_A0_B // net ID: DATAVALID lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CFGCLK_A0_B = CFGCLK_A0_B; // net ID: CFGCLK lsb: 0  msb: 0 OUTPUT
			this->DATA_A31_B = DATA_A31_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A30_B = DATA_A30_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A29_B = DATA_A29_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A28_B = DATA_A28_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A27_B = DATA_A27_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A26_B = DATA_A26_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A25_B = DATA_A25_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A24_B = DATA_A24_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A23_B = DATA_A23_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A22_B = DATA_A22_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A21_B = DATA_A21_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A20_B = DATA_A20_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A19_B = DATA_A19_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A18_B = DATA_A18_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A17_B = DATA_A17_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A16_B = DATA_A16_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A15_B = DATA_A15_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A14_B = DATA_A14_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A13_B = DATA_A13_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A12_B = DATA_A12_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A11_B = DATA_A11_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A10_B = DATA_A10_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A9_B = DATA_A9_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A8_B = DATA_A8_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A7_B = DATA_A7_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A6_B = DATA_A6_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A5_B = DATA_A5_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A4_B = DATA_A4_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A3_B = DATA_A3_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A2_B = DATA_A2_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A1_B = DATA_A1_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATA_A0_B = DATA_A0_B; // net ID: DATA lsb: 0  msb: 31 OUTPUT
			this->DATAVALID_A0_B = DATAVALID_A0_B; // net ID: DATAVALID lsb: 0  msb: 0 OUTPUT
			
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
#endif // X_USR_ACCESSE2_H
