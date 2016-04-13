/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class trif_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		parameter_string_t ffd;
		parameter_string_t mxd;
		//Verilog Ports in definition order:
		NetFlow* T1; // net ID: T1 lsb: 0  msb: 0 INPUT
		NetFlow* T2; // net ID: T2 lsb: 0  msb: 0 INPUT
		NetFlow* T3; // net ID: T3 lsb: 0  msb: 0 INPUT
		NetFlow* T4; // net ID: T4 lsb: 0  msb: 0 INPUT
		NetFlow* load; // net ID: load lsb: 0  msb: 0 INPUT
		NetFlow* C; // net ID: C lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
		NetFlow* SR; // net ID: SR lsb: 0  msb: 0 INPUT
		NetFlow* TCE; // net ID: TCE lsb: 0  msb: 0 INPUT
		NetFlow* DATA_RATE_TQ; // net ID: DATA_RATE_TQ lsb: 0  msb: 1 INPUT
		NetFlow* TRISTATE_WIDTH; // net ID: TRISTATE_WIDTH lsb: 0  msb: 1 INPUT
		NetFlow* INIT_TQ; // net ID: INIT_TQ lsb: 0  msb: 0 INPUT
		NetFlow* SRVAL_TQ; // net ID: SRVAL_TQ lsb: 0  msb: 0 INPUT
		NetFlow* data1; // net ID: data1 lsb: 0  msb: 0 OUTPUT
		NetFlow* data2; // net ID: data2 lsb: 0  msb: 0 OUTPUT
		
		trif_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			parameter_string_t ffd, // Default: 1
			parameter_string_t mxd, // Default: 1
			//Verilog Ports in definition order:
			NetFlow* T1, // net ID: T1 lsb: 0  msb: 0 INPUT
			NetFlow* T2, // net ID: T2 lsb: 0  msb: 0 INPUT
			NetFlow* T3, // net ID: T3 lsb: 0  msb: 0 INPUT
			NetFlow* T4, // net ID: T4 lsb: 0  msb: 0 INPUT
			NetFlow* load, // net ID: load lsb: 0  msb: 0 INPUT
			NetFlow* C, // net ID: C lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV, // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			NetFlow* SR, // net ID: SR lsb: 0  msb: 0 INPUT
			NetFlow* TCE, // net ID: TCE lsb: 0  msb: 0 INPUT
			NetFlow* DATA_RATE_TQ, // net ID: DATA_RATE_TQ lsb: 0  msb: 1 INPUT
			NetFlow* TRISTATE_WIDTH, // net ID: TRISTATE_WIDTH lsb: 0  msb: 1 INPUT
			NetFlow* INIT_TQ, // net ID: INIT_TQ lsb: 0  msb: 0 INPUT
			NetFlow* SRVAL_TQ, // net ID: SRVAL_TQ lsb: 0  msb: 0 INPUT
			NetFlow* data1, // net ID: data1 lsb: 0  msb: 0 OUTPUT
			NetFlow* data2 // net ID: data2 lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->ffd = ffd; // Default: 1
			this->mxd = mxd; // Default: 1
			//Verilog Ports in definition order:
			this->T1 = T1; // net ID: T1 lsb: 0  msb: 0 INPUT
			this->T2 = T2; // net ID: T2 lsb: 0  msb: 0 INPUT
			this->T3 = T3; // net ID: T3 lsb: 0  msb: 0 INPUT
			this->T4 = T4; // net ID: T4 lsb: 0  msb: 0 INPUT
			this->load = load; // net ID: load lsb: 0  msb: 0 INPUT
			this->C = C; // net ID: C lsb: 0  msb: 0 INPUT
			this->CLKDIV = CLKDIV; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			this->SR = SR; // net ID: SR lsb: 0  msb: 0 INPUT
			this->TCE = TCE; // net ID: TCE lsb: 0  msb: 0 INPUT
			this->DATA_RATE_TQ = DATA_RATE_TQ; // net ID: DATA_RATE_TQ lsb: 0  msb: 1 INPUT
			this->TRISTATE_WIDTH = TRISTATE_WIDTH; // net ID: TRISTATE_WIDTH lsb: 0  msb: 1 INPUT
			this->INIT_TQ = INIT_TQ; // net ID: INIT_TQ lsb: 0  msb: 0 INPUT
			this->SRVAL_TQ = SRVAL_TQ; // net ID: SRVAL_TQ lsb: 0  msb: 0 INPUT
			this->data1 = data1; // net ID: data1 lsb: 0  msb: 0 OUTPUT
			this->data2 = data2; // net ID: data2 lsb: 0  msb: 0 OUTPUT
			
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
