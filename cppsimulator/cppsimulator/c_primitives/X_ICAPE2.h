/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_ICAPE2: public Primitive{

		//Verilog Parameters:
		parameter_string_t DEVICE_ID;
		parameter_string_t ICAP_WIDTH;
		parameter_string_t SIM_CFG_FILE_NAME;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* CSIB; // net ID: CSIB lsb: 0  msb: 0 INPUT
		NetFlow* I; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* RDWRB; // net ID: RDWRB lsb: 0  msb: 0 INPUT
		
		X_ICAPE2(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DEVICE_ID, // Default: 32'h03651093
			parameter_string_t ICAP_WIDTH, // Default: "X32"
			parameter_string_t SIM_CFG_FILE_NAME, // Default: "NONE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* CSIB, // net ID: CSIB lsb: 0  msb: 0 INPUT
			NetFlow* I, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* RDWRB // net ID: RDWRB lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DEVICE_ID = DEVICE_ID; // Default: 32'h03651093
			this->ICAP_WIDTH = ICAP_WIDTH; // Default: "X32"
			this->SIM_CFG_FILE_NAME = SIM_CFG_FILE_NAME; // Default: "NONE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->CSIB = CSIB; // net ID: CSIB lsb: 0  msb: 0 INPUT
			this->I = I; // net ID: I lsb: 0  msb: 31 INPUT
			this->RDWRB = RDWRB; // net ID: RDWRB lsb: 0  msb: 0 INPUT
			
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
