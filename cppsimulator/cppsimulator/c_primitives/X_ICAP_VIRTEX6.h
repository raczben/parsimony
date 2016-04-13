/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_ICAP_VIRTEX6: public Primitive{

		//Verilog Parameters:
		parameter_string_t DEVICE_ID;
		parameter_string_t LOC;
		parameter_string_t ICAP_WIDTH;
		parameter_string_t SIM_CFG_FILE_NAME;
		//Verilog Ports in definition order:
		NetFlow* BUSY; // net ID: BUSY lsb: 0  msb: 0 OUTPUT
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* CSB; // net ID: CSB lsb: 0  msb: 0 INPUT
		NetFlow* I; // net ID: I lsb: 0  msb: 31 INPUT
		NetFlow* RDWRB; // net ID: RDWRB lsb: 0  msb: 0 INPUT
		
		X_ICAP_VIRTEX6(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DEVICE_ID, // Default: 32'h04244093
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t ICAP_WIDTH, // Default: "X8"
			parameter_string_t SIM_CFG_FILE_NAME, // Default: "NONE"
			//Verilog Ports in definition order:
			NetFlow* BUSY, // net ID: BUSY lsb: 0  msb: 0 OUTPUT
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* CSB, // net ID: CSB lsb: 0  msb: 0 INPUT
			NetFlow* I, // net ID: I lsb: 0  msb: 31 INPUT
			NetFlow* RDWRB // net ID: RDWRB lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DEVICE_ID = DEVICE_ID; // Default: 32'h04244093
			this->LOC = LOC; // Default: "UNPLACED"
			this->ICAP_WIDTH = ICAP_WIDTH; // Default: "X8"
			this->SIM_CFG_FILE_NAME = SIM_CFG_FILE_NAME; // Default: "NONE"
			//Verilog Ports in definition order:
			this->BUSY = BUSY; // net ID: BUSY lsb: 0  msb: 0 OUTPUT
			this->O = O; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->CSB = CSB; // net ID: CSB lsb: 0  msb: 0 INPUT
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
