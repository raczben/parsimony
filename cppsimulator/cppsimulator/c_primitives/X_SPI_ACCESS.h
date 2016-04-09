/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_SPI_ACCESS{

		//Verilog Parameters:
		parameter_string_t SIM_DELAY_TYPE;
		parameter_string_t SIM_DEVICE;
		parameter_int_t SIM_FACTORY_ID;
		parameter_int_t SIM_USER_ID;
		parameter_string_t SIM_MEM_FILE;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* MISO; // OUTPUT
		NetFlow* CLK; // INPUT
		NetFlow* CSB; // INPUT
		NetFlow* MOSI; // INPUT
		
	
		X_SPI_ACCESS(
			//Verilog Parameters:
			parameter_string_t SIM_DELAY_TYPE, // Default: "SCALED"
			parameter_string_t SIM_DEVICE, // Default: "3S1400AN"
			parameter_int_t SIM_FACTORY_ID, // Default: 512'h00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
			parameter_int_t SIM_USER_ID, // Default: 512'hFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
			parameter_string_t SIM_MEM_FILE, // Default: "NONE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* MISO, // OUTPUT
			NetFlow* CLK, // INPUT
			NetFlow* CSB, // INPUT
			NetFlow* MOSI // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->SIM_DELAY_TYPE = SIM_DELAY_TYPE; // Default: "SCALED"
			this->SIM_DEVICE = SIM_DEVICE; // Default: "3S1400AN"
			this->SIM_FACTORY_ID = SIM_FACTORY_ID; // Default: 512'h00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
			this->SIM_USER_ID = SIM_USER_ID; // Default: 512'hFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
			this->SIM_MEM_FILE = SIM_MEM_FILE; // Default: "NONE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->MISO = MISO; // OUTPUT
			this->CLK = CLK; // INPUT
			this->CSB = CSB; // INPUT
			this->MOSI = MOSI; // INPUT
		
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
