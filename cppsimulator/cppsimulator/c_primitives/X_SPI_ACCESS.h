/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_SPI_ACCESS: public Primitive{

		//Verilog Parameters:
		parameter_string_t SIM_DELAY_TYPE;
		parameter_string_t SIM_DEVICE;
		parameter_string_t SIM_FACTORY_ID;
		parameter_string_t SIM_USER_ID;
		parameter_string_t SIM_MEM_FILE;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* MISO; // net ID: MISO lsb: 0  msb: 0 OUTPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* CSB; // net ID: CSB lsb: 0  msb: 0 INPUT
		NetFlow* MOSI; // net ID: MOSI lsb: 0  msb: 0 INPUT
		
		X_SPI_ACCESS(
			const char * name,
			//Verilog Parameters:
			parameter_string_t SIM_DELAY_TYPE, // Default: "SCALED"
			parameter_string_t SIM_DEVICE, // Default: "3S1400AN"
			parameter_string_t SIM_FACTORY_ID, // Default: 512'h00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t SIM_USER_ID, // Default: 512'hFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
			parameter_string_t SIM_MEM_FILE, // Default: "NONE"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* MISO, // net ID: MISO lsb: 0  msb: 0 OUTPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* CSB, // net ID: CSB lsb: 0  msb: 0 INPUT
			NetFlow* MOSI // net ID: MOSI lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->SIM_DELAY_TYPE = SIM_DELAY_TYPE; // Default: "SCALED"
			this->SIM_DEVICE = SIM_DEVICE; // Default: "3S1400AN"
			this->SIM_FACTORY_ID = SIM_FACTORY_ID; // Default: 512'h00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
			this->SIM_USER_ID = SIM_USER_ID; // Default: 512'hFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF
			this->SIM_MEM_FILE = SIM_MEM_FILE; // Default: "NONE"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->MISO = MISO; // net ID: MISO lsb: 0  msb: 0 OUTPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->CSB = CSB; // net ID: CSB lsb: 0  msb: 0 INPUT
			this->MOSI = MOSI; // net ID: MOSI lsb: 0  msb: 0 INPUT
			
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
