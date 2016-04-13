/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_CRC32: public Primitive{

		//Verilog Parameters:
		parameter_string_t CRC_INIT;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CRCOUT; // net ID: CRCOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CRCCLK; // net ID: CRCCLK lsb: 0  msb: 0 INPUT
		NetFlow* CRCDATAVALID; // net ID: CRCDATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* CRCDATAWIDTH; // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
		NetFlow* CRCIN; // net ID: CRCIN lsb: 0  msb: 31 INPUT
		NetFlow* CRCRESET; // net ID: CRCRESET lsb: 0  msb: 0 INPUT
		
		X_CRC32(
			const char * name,
			//Verilog Parameters:
			parameter_string_t CRC_INIT, // Default: 32'hFFFFFFFF
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* CRCOUT, // net ID: CRCOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CRCCLK, // net ID: CRCCLK lsb: 0  msb: 0 INPUT
			NetFlow* CRCDATAVALID, // net ID: CRCDATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* CRCDATAWIDTH, // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
			NetFlow* CRCIN, // net ID: CRCIN lsb: 0  msb: 31 INPUT
			NetFlow* CRCRESET // net ID: CRCRESET lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->CRC_INIT = CRC_INIT; // Default: 32'hFFFFFFFF
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->CRCOUT = CRCOUT; // net ID: CRCOUT lsb: 0  msb: 0 OUTPUT
			this->CRCCLK = CRCCLK; // net ID: CRCCLK lsb: 0  msb: 0 INPUT
			this->CRCDATAVALID = CRCDATAVALID; // net ID: CRCDATAVALID lsb: 0  msb: 0 INPUT
			this->CRCDATAWIDTH = CRCDATAWIDTH; // net ID: CRCDATAWIDTH lsb: 0  msb: 2 INPUT
			this->CRCIN = CRCIN; // net ID: CRCIN lsb: 0  msb: 31 INPUT
			this->CRCRESET = CRCRESET; // net ID: CRCRESET lsb: 0  msb: 0 INPUT
			
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
