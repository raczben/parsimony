/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_ICAPE2_H
#define X_ICAPE2_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_ICAPE2: public Primitive{

		//Verilog Parameters:
		parameter_int_t DEVICE_ID;
		parameter_string_t ICAP_WIDTH;
		parameter_string_t SIM_CFG_FILE_NAME;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O_A31_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A30_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A29_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A28_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A27_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A26_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A25_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A24_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A23_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A22_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A21_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A20_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A19_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A18_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A17_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A16_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A15_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A14_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A13_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A12_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A11_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A10_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A9_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A8_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A7_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A6_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A5_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A4_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A3_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A2_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A1_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 31 OUTPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* CSIB_A0_B; // net ID: CSIB lsb: 0  msb: 0 INPUT
		NetFlow* I_A31_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A30_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A29_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A28_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A27_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A26_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A25_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A24_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A23_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A22_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A21_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A20_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A19_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A18_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A17_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A16_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A15_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A14_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A13_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A12_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A11_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A10_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A9_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A8_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A7_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A6_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A5_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A4_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A3_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A2_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A1_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* I_A0_B; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* RDWRB_A0_B; // net ID: RDWRB lsb: 0  msb: 0 INPUT
		
		public: X_ICAPE2(
			const char * name,
			//Verilog Parameters:
			parameter_int_t DEVICE_ID, // Default: 32'h03651093
			parameter_string_t ICAP_WIDTH, // Default: "X32"
			parameter_string_t SIM_CFG_FILE_NAME, // Default: "NONE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O_A31_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A30_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A29_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A28_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A27_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A26_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A25_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A24_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A23_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A22_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A21_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A20_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A19_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A18_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A17_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A16_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A15_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A14_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A13_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A12_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A11_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A10_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A9_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A8_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A7_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A6_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A5_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A4_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A3_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A2_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A1_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 31 OUTPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* CSIB_A0_B, // net ID: CSIB lsb: 0  msb: 0 INPUT
			NetFlow* I_A31_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A30_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A29_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A28_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A27_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A26_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A25_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A24_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A23_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A22_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A21_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A20_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A19_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A18_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A17_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A16_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A15_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A14_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A13_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A12_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A11_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A10_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A9_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A8_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A7_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A6_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A5_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A4_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A3_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A2_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A1_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* I_A0_B, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* RDWRB_A0_B // net ID: RDWRB lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DEVICE_ID = DEVICE_ID; // Default: 32'h03651093
			this->ICAP_WIDTH = ICAP_WIDTH; // Default: "X32"
			this->SIM_CFG_FILE_NAME = SIM_CFG_FILE_NAME; // Default: "NONE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O_A31_B = O_A31_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A30_B = O_A30_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A29_B = O_A29_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A28_B = O_A28_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A27_B = O_A27_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A26_B = O_A26_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A25_B = O_A25_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A24_B = O_A24_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A23_B = O_A23_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A22_B = O_A22_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A21_B = O_A21_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A20_B = O_A20_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A19_B = O_A19_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A18_B = O_A18_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A17_B = O_A17_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A16_B = O_A16_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A15_B = O_A15_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A14_B = O_A14_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A13_B = O_A13_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A12_B = O_A12_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A11_B = O_A11_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A10_B = O_A10_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A9_B = O_A9_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A8_B = O_A8_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A7_B = O_A7_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A6_B = O_A6_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A5_B = O_A5_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A4_B = O_A4_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A3_B = O_A3_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A2_B = O_A2_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A1_B = O_A1_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 31 OUTPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->CSIB_A0_B = CSIB_A0_B; // net ID: CSIB lsb: 0  msb: 0 INPUT
			this->I_A31_B = I_A31_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A30_B = I_A30_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A29_B = I_A29_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A28_B = I_A28_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A27_B = I_A27_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A26_B = I_A26_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A25_B = I_A25_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A24_B = I_A24_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A23_B = I_A23_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A22_B = I_A22_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A21_B = I_A21_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A20_B = I_A20_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A19_B = I_A19_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A18_B = I_A18_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A17_B = I_A17_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A16_B = I_A16_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A15_B = I_A15_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A14_B = I_A14_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A13_B = I_A13_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A12_B = I_A12_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A11_B = I_A11_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A10_B = I_A10_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A9_B = I_A9_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A8_B = I_A8_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A7_B = I_A7_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A6_B = I_A6_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A5_B = I_A5_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A4_B = I_A4_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A3_B = I_A3_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A2_B = I_A2_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A1_B = I_A1_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->I_A0_B = I_A0_B; // net ID: I lsb: 0  msb: 31 INPUT
			this->RDWRB_A0_B = RDWRB_A0_B; // net ID: RDWRB lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		void calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_ICAPE2_H
