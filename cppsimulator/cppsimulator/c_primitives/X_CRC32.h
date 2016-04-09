/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_CRC32{

		//Verilog Parameters:
		parameter_int_t CRC_INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CRCOUT; // OUTPUT
		NetFlow* CRCCLK; // INPUT
		NetFlow* CRCDATAVALID; // INPUT
		NetFlow* CRCDATAWIDTH; // INPUT
		NetFlow* CRCIN; // INPUT
		NetFlow* CRCRESET; // INPUT
		
	
		X_CRC32(
			//Verilog Parameters:
			parameter_int_t CRC_INIT, // Default: 32'hFFFFFFFF
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CRCOUT, // OUTPUT
			NetFlow* CRCCLK, // INPUT
			NetFlow* CRCDATAVALID, // INPUT
			NetFlow* CRCDATAWIDTH, // INPUT
			NetFlow* CRCIN, // INPUT
			NetFlow* CRCRESET // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->CRC_INIT = CRC_INIT; // Default: 32'hFFFFFFFF
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CRCOUT = CRCOUT; // OUTPUT
			this->CRCCLK = CRCCLK; // INPUT
			this->CRCDATAVALID = CRCDATAVALID; // INPUT
			this->CRCDATAWIDTH = CRCDATAWIDTH; // INPUT
			this->CRCIN = CRCIN; // INPUT
			this->CRCRESET = CRCRESET; // INPUT
		
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
