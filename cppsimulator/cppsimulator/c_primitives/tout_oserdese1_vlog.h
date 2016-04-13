/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class tout_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		parameter_string_t ffd;
		parameter_string_t mxd;
		//Verilog Ports in definition order:
		NetFlow* data1; // net ID: data1 lsb: 0  msb: 0 INPUT
		NetFlow* data2; // net ID: data2 lsb: 0  msb: 0 INPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* BUFO; // net ID: BUFO lsb: 0  msb: 0 INPUT
		NetFlow* SR; // net ID: SR lsb: 0  msb: 0 INPUT
		NetFlow* TCE; // net ID: TCE lsb: 0  msb: 0 INPUT
		NetFlow* DATA_RATE_TQ; // net ID: DATA_RATE_TQ lsb: 0  msb: 1 INPUT
		NetFlow* TRISTATE_WIDTH; // net ID: TRISTATE_WIDTH lsb: 0  msb: 1 INPUT
		NetFlow* INIT_TQ; // net ID: INIT_TQ lsb: 0  msb: 0 INPUT
		NetFlow* SRVAL_TQ; // net ID: SRVAL_TQ lsb: 0  msb: 0 INPUT
		NetFlow* TQ; // net ID: TQ lsb: 0  msb: 0 OUTPUT
		NetFlow* DDR3_MODE; // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
		
		tout_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			parameter_string_t ffd, // Default: 1
			parameter_string_t mxd, // Default: 1
			//Verilog Ports in definition order:
			NetFlow* data1, // net ID: data1 lsb: 0  msb: 0 INPUT
			NetFlow* data2, // net ID: data2 lsb: 0  msb: 0 INPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* BUFO, // net ID: BUFO lsb: 0  msb: 0 INPUT
			NetFlow* SR, // net ID: SR lsb: 0  msb: 0 INPUT
			NetFlow* TCE, // net ID: TCE lsb: 0  msb: 0 INPUT
			NetFlow* DATA_RATE_TQ, // net ID: DATA_RATE_TQ lsb: 0  msb: 1 INPUT
			NetFlow* TRISTATE_WIDTH, // net ID: TRISTATE_WIDTH lsb: 0  msb: 1 INPUT
			NetFlow* INIT_TQ, // net ID: INIT_TQ lsb: 0  msb: 0 INPUT
			NetFlow* SRVAL_TQ, // net ID: SRVAL_TQ lsb: 0  msb: 0 INPUT
			NetFlow* TQ, // net ID: TQ lsb: 0  msb: 0 OUTPUT
			NetFlow* DDR3_MODE // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->ffd = ffd; // Default: 1
			this->mxd = mxd; // Default: 1
			//Verilog Ports in definition order:
			this->data1 = data1; // net ID: data1 lsb: 0  msb: 0 INPUT
			this->data2 = data2; // net ID: data2 lsb: 0  msb: 0 INPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->BUFO = BUFO; // net ID: BUFO lsb: 0  msb: 0 INPUT
			this->SR = SR; // net ID: SR lsb: 0  msb: 0 INPUT
			this->TCE = TCE; // net ID: TCE lsb: 0  msb: 0 INPUT
			this->DATA_RATE_TQ = DATA_RATE_TQ; // net ID: DATA_RATE_TQ lsb: 0  msb: 1 INPUT
			this->TRISTATE_WIDTH = TRISTATE_WIDTH; // net ID: TRISTATE_WIDTH lsb: 0  msb: 1 INPUT
			this->INIT_TQ = INIT_TQ; // net ID: INIT_TQ lsb: 0  msb: 0 INPUT
			this->SRVAL_TQ = SRVAL_TQ; // net ID: SRVAL_TQ lsb: 0  msb: 0 INPUT
			this->TQ = TQ; // net ID: TQ lsb: 0  msb: 0 OUTPUT
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
