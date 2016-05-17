/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_ICAP_SPARTAN6_H
#define X_ICAP_SPARTAN6_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_ICAP_SPARTAN6: public Primitive{

		//Verilog Parameters:
		parameter_int_t DEVICE_ID;
		parameter_string_t LOC;
		parameter_string_t SIM_CFG_FILE_NAME;
		//Verilog Ports in definition order:
		NetFlow* BUSY_A0_B; // net ID: BUSY lsb: 0  msb: 0 OUTPUT
		NetFlow* O_A15_B; // net ID: O lsb: 0  msb: 15 OUTPUT
		NetFlow* O_A14_B; // net ID: O lsb: 0  msb: 15 OUTPUT
		NetFlow* O_A13_B; // net ID: O lsb: 0  msb: 15 OUTPUT
		NetFlow* O_A12_B; // net ID: O lsb: 0  msb: 15 OUTPUT
		NetFlow* O_A11_B; // net ID: O lsb: 0  msb: 15 OUTPUT
		NetFlow* O_A10_B; // net ID: O lsb: 0  msb: 15 OUTPUT
		NetFlow* O_A9_B; // net ID: O lsb: 0  msb: 15 OUTPUT
		NetFlow* O_A8_B; // net ID: O lsb: 0  msb: 15 OUTPUT
		NetFlow* O_A7_B; // net ID: O lsb: 0  msb: 15 OUTPUT
		NetFlow* O_A6_B; // net ID: O lsb: 0  msb: 15 OUTPUT
		NetFlow* O_A5_B; // net ID: O lsb: 0  msb: 15 OUTPUT
		NetFlow* O_A4_B; // net ID: O lsb: 0  msb: 15 OUTPUT
		NetFlow* O_A3_B; // net ID: O lsb: 0  msb: 15 OUTPUT
		NetFlow* O_A2_B; // net ID: O lsb: 0  msb: 15 OUTPUT
		NetFlow* O_A1_B; // net ID: O lsb: 0  msb: 15 OUTPUT
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 15 OUTPUT
		NetFlow* CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* I_A15_B; // net ID: I lsb: 0  msb: 15 INPUT
		NetFlow* I_A14_B; // net ID: I lsb: 0  msb: 15 INPUT
		NetFlow* I_A13_B; // net ID: I lsb: 0  msb: 15 INPUT
		NetFlow* I_A12_B; // net ID: I lsb: 0  msb: 15 INPUT
		NetFlow* I_A11_B; // net ID: I lsb: 0  msb: 15 INPUT
		NetFlow* I_A10_B; // net ID: I lsb: 0  msb: 15 INPUT
		NetFlow* I_A9_B; // net ID: I lsb: 0  msb: 15 INPUT
		NetFlow* I_A8_B; // net ID: I lsb: 0  msb: 15 INPUT
		NetFlow* I_A7_B; // net ID: I lsb: 0  msb: 15 INPUT
		NetFlow* I_A6_B; // net ID: I lsb: 0  msb: 15 INPUT
		NetFlow* I_A5_B; // net ID: I lsb: 0  msb: 15 INPUT
		NetFlow* I_A4_B; // net ID: I lsb: 0  msb: 15 INPUT
		NetFlow* I_A3_B; // net ID: I lsb: 0  msb: 15 INPUT
		NetFlow* I_A2_B; // net ID: I lsb: 0  msb: 15 INPUT
		NetFlow* I_A1_B; // net ID: I lsb: 0  msb: 15 INPUT
		NetFlow* I_A0_B; // net ID: I lsb: 0  msb: 15 INPUT
		NetFlow* WRITE_A0_B; // net ID: WRITE lsb: 0  msb: 0 INPUT
		
		public: X_ICAP_SPARTAN6(
			const char * name,
			//Verilog Parameters:
			parameter_int_t DEVICE_ID, // Default: 32'h04000093
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t SIM_CFG_FILE_NAME, // Default: "NONE"
			//Verilog Ports in definition order:
			NetFlow* BUSY_A0_B, // net ID: BUSY lsb: 0  msb: 0 OUTPUT
			NetFlow* O_A15_B, // net ID: O lsb: 0  msb: 15 OUTPUT
			NetFlow* O_A14_B, // net ID: O lsb: 0  msb: 15 OUTPUT
			NetFlow* O_A13_B, // net ID: O lsb: 0  msb: 15 OUTPUT
			NetFlow* O_A12_B, // net ID: O lsb: 0  msb: 15 OUTPUT
			NetFlow* O_A11_B, // net ID: O lsb: 0  msb: 15 OUTPUT
			NetFlow* O_A10_B, // net ID: O lsb: 0  msb: 15 OUTPUT
			NetFlow* O_A9_B, // net ID: O lsb: 0  msb: 15 OUTPUT
			NetFlow* O_A8_B, // net ID: O lsb: 0  msb: 15 OUTPUT
			NetFlow* O_A7_B, // net ID: O lsb: 0  msb: 15 OUTPUT
			NetFlow* O_A6_B, // net ID: O lsb: 0  msb: 15 OUTPUT
			NetFlow* O_A5_B, // net ID: O lsb: 0  msb: 15 OUTPUT
			NetFlow* O_A4_B, // net ID: O lsb: 0  msb: 15 OUTPUT
			NetFlow* O_A3_B, // net ID: O lsb: 0  msb: 15 OUTPUT
			NetFlow* O_A2_B, // net ID: O lsb: 0  msb: 15 OUTPUT
			NetFlow* O_A1_B, // net ID: O lsb: 0  msb: 15 OUTPUT
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 15 OUTPUT
			NetFlow* CE_A0_B, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* I_A15_B, // net ID: I lsb: 0  msb: 15 INPUT
			NetFlow* I_A14_B, // net ID: I lsb: 0  msb: 15 INPUT
			NetFlow* I_A13_B, // net ID: I lsb: 0  msb: 15 INPUT
			NetFlow* I_A12_B, // net ID: I lsb: 0  msb: 15 INPUT
			NetFlow* I_A11_B, // net ID: I lsb: 0  msb: 15 INPUT
			NetFlow* I_A10_B, // net ID: I lsb: 0  msb: 15 INPUT
			NetFlow* I_A9_B, // net ID: I lsb: 0  msb: 15 INPUT
			NetFlow* I_A8_B, // net ID: I lsb: 0  msb: 15 INPUT
			NetFlow* I_A7_B, // net ID: I lsb: 0  msb: 15 INPUT
			NetFlow* I_A6_B, // net ID: I lsb: 0  msb: 15 INPUT
			NetFlow* I_A5_B, // net ID: I lsb: 0  msb: 15 INPUT
			NetFlow* I_A4_B, // net ID: I lsb: 0  msb: 15 INPUT
			NetFlow* I_A3_B, // net ID: I lsb: 0  msb: 15 INPUT
			NetFlow* I_A2_B, // net ID: I lsb: 0  msb: 15 INPUT
			NetFlow* I_A1_B, // net ID: I lsb: 0  msb: 15 INPUT
			NetFlow* I_A0_B, // net ID: I lsb: 0  msb: 15 INPUT
			NetFlow* WRITE_A0_B // net ID: WRITE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DEVICE_ID = DEVICE_ID; // Default: 32'h04000093
			this->LOC = LOC; // Default: "UNPLACED"
			this->SIM_CFG_FILE_NAME = SIM_CFG_FILE_NAME; // Default: "NONE"
			//Verilog Ports in definition order:
			this->BUSY_A0_B = BUSY_A0_B; // net ID: BUSY lsb: 0  msb: 0 OUTPUT
			this->O_A15_B = O_A15_B; // net ID: O lsb: 0  msb: 15 OUTPUT
			this->O_A14_B = O_A14_B; // net ID: O lsb: 0  msb: 15 OUTPUT
			this->O_A13_B = O_A13_B; // net ID: O lsb: 0  msb: 15 OUTPUT
			this->O_A12_B = O_A12_B; // net ID: O lsb: 0  msb: 15 OUTPUT
			this->O_A11_B = O_A11_B; // net ID: O lsb: 0  msb: 15 OUTPUT
			this->O_A10_B = O_A10_B; // net ID: O lsb: 0  msb: 15 OUTPUT
			this->O_A9_B = O_A9_B; // net ID: O lsb: 0  msb: 15 OUTPUT
			this->O_A8_B = O_A8_B; // net ID: O lsb: 0  msb: 15 OUTPUT
			this->O_A7_B = O_A7_B; // net ID: O lsb: 0  msb: 15 OUTPUT
			this->O_A6_B = O_A6_B; // net ID: O lsb: 0  msb: 15 OUTPUT
			this->O_A5_B = O_A5_B; // net ID: O lsb: 0  msb: 15 OUTPUT
			this->O_A4_B = O_A4_B; // net ID: O lsb: 0  msb: 15 OUTPUT
			this->O_A3_B = O_A3_B; // net ID: O lsb: 0  msb: 15 OUTPUT
			this->O_A2_B = O_A2_B; // net ID: O lsb: 0  msb: 15 OUTPUT
			this->O_A1_B = O_A1_B; // net ID: O lsb: 0  msb: 15 OUTPUT
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 15 OUTPUT
			this->CE_A0_B = CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->I_A15_B = I_A15_B; // net ID: I lsb: 0  msb: 15 INPUT
			this->I_A14_B = I_A14_B; // net ID: I lsb: 0  msb: 15 INPUT
			this->I_A13_B = I_A13_B; // net ID: I lsb: 0  msb: 15 INPUT
			this->I_A12_B = I_A12_B; // net ID: I lsb: 0  msb: 15 INPUT
			this->I_A11_B = I_A11_B; // net ID: I lsb: 0  msb: 15 INPUT
			this->I_A10_B = I_A10_B; // net ID: I lsb: 0  msb: 15 INPUT
			this->I_A9_B = I_A9_B; // net ID: I lsb: 0  msb: 15 INPUT
			this->I_A8_B = I_A8_B; // net ID: I lsb: 0  msb: 15 INPUT
			this->I_A7_B = I_A7_B; // net ID: I lsb: 0  msb: 15 INPUT
			this->I_A6_B = I_A6_B; // net ID: I lsb: 0  msb: 15 INPUT
			this->I_A5_B = I_A5_B; // net ID: I lsb: 0  msb: 15 INPUT
			this->I_A4_B = I_A4_B; // net ID: I lsb: 0  msb: 15 INPUT
			this->I_A3_B = I_A3_B; // net ID: I lsb: 0  msb: 15 INPUT
			this->I_A2_B = I_A2_B; // net ID: I lsb: 0  msb: 15 INPUT
			this->I_A1_B = I_A1_B; // net ID: I lsb: 0  msb: 15 INPUT
			this->I_A0_B = I_A0_B; // net ID: I lsb: 0  msb: 15 INPUT
			this->WRITE_A0_B = WRITE_A0_B; // net ID: WRITE lsb: 0  msb: 0 INPUT
			
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
#endif // X_ICAP_SPARTAN6_H
