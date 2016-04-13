/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class dout_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		parameter_string_t FFD;
		parameter_string_t FFCD;
		parameter_string_t MXD;
		parameter_string_t MXR1;
		//Verilog Ports in definition order:
		NetFlow* data1; // net ID: data1 lsb: 0  msb: 0 INPUT
		NetFlow* data2; // net ID: data2 lsb: 0  msb: 0 INPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* BUFO; // net ID: BUFO lsb: 0  msb: 0 INPUT
		NetFlow* SR; // net ID: SR lsb: 0  msb: 0 INPUT
		NetFlow* OCE; // net ID: OCE lsb: 0  msb: 0 INPUT
		NetFlow* OQ; // net ID: OQ lsb: 0  msb: 0 OUTPUT
		NetFlow* d2rnk2; // net ID: d2rnk2 lsb: 0  msb: 0 OUTPUT
		NetFlow* DATA_RATE_OQ; // net ID: DATA_RATE_OQ lsb: 0  msb: 0 INPUT
		NetFlow* INIT_OQ; // net ID: INIT_OQ lsb: 0  msb: 0 INPUT
		NetFlow* SRVAL_OQ; // net ID: SRVAL_OQ lsb: 0  msb: 0 INPUT
		NetFlow* DDR3_MODE; // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
		
		dout_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			parameter_string_t FFD, // Default: 1
			parameter_string_t FFCD, // Default: 1
			parameter_string_t MXD, // Default: 1
			parameter_string_t MXR1, // Default: 1
			//Verilog Ports in definition order:
			NetFlow* data1, // net ID: data1 lsb: 0  msb: 0 INPUT
			NetFlow* data2, // net ID: data2 lsb: 0  msb: 0 INPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* BUFO, // net ID: BUFO lsb: 0  msb: 0 INPUT
			NetFlow* SR, // net ID: SR lsb: 0  msb: 0 INPUT
			NetFlow* OCE, // net ID: OCE lsb: 0  msb: 0 INPUT
			NetFlow* OQ, // net ID: OQ lsb: 0  msb: 0 OUTPUT
			NetFlow* d2rnk2, // net ID: d2rnk2 lsb: 0  msb: 0 OUTPUT
			NetFlow* DATA_RATE_OQ, // net ID: DATA_RATE_OQ lsb: 0  msb: 0 INPUT
			NetFlow* INIT_OQ, // net ID: INIT_OQ lsb: 0  msb: 0 INPUT
			NetFlow* SRVAL_OQ, // net ID: SRVAL_OQ lsb: 0  msb: 0 INPUT
			NetFlow* DDR3_MODE // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->FFD = FFD; // Default: 1
			this->FFCD = FFCD; // Default: 1
			this->MXD = MXD; // Default: 1
			this->MXR1 = MXR1; // Default: 1
			//Verilog Ports in definition order:
			this->data1 = data1; // net ID: data1 lsb: 0  msb: 0 INPUT
			this->data2 = data2; // net ID: data2 lsb: 0  msb: 0 INPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->BUFO = BUFO; // net ID: BUFO lsb: 0  msb: 0 INPUT
			this->SR = SR; // net ID: SR lsb: 0  msb: 0 INPUT
			this->OCE = OCE; // net ID: OCE lsb: 0  msb: 0 INPUT
			this->OQ = OQ; // net ID: OQ lsb: 0  msb: 0 OUTPUT
			this->d2rnk2 = d2rnk2; // net ID: d2rnk2 lsb: 0  msb: 0 OUTPUT
			this->DATA_RATE_OQ = DATA_RATE_OQ; // net ID: DATA_RATE_OQ lsb: 0  msb: 0 INPUT
			this->INIT_OQ = INIT_OQ; // net ID: INIT_OQ lsb: 0  msb: 0 INPUT
			this->SRVAL_OQ = SRVAL_OQ; // net ID: SRVAL_OQ lsb: 0  msb: 0 INPUT
			this->DDR3_MODE = DDR3_MODE; // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
			
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
