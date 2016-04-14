/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef TRIF_OSERDESE1_VLOG_H
#define TRIF_OSERDESE1_VLOG_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class trif_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		parameter_int_t ffd;
		parameter_int_t mxd;
		//Verilog Ports in definition order:
		NetFlow* T1_A0_B; // net ID: T1 lsb: 0  msb: 0 INPUT
		NetFlow* T2_A0_B; // net ID: T2 lsb: 0  msb: 0 INPUT
		NetFlow* T3_A0_B; // net ID: T3 lsb: 0  msb: 0 INPUT
		NetFlow* T4_A0_B; // net ID: T4 lsb: 0  msb: 0 INPUT
		NetFlow* LOAD_A0_B; // net ID: load lsb: 0  msb: 0 INPUT
		NetFlow* C_A0_B; // net ID: C lsb: 0  msb: 0 INPUT
		NetFlow* CLKDIV_A0_B; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
		NetFlow* SR_A0_B; // net ID: SR lsb: 0  msb: 0 INPUT
		NetFlow* TCE_A0_B; // net ID: TCE lsb: 0  msb: 0 INPUT
		NetFlow* DATA__RATE__TQ_A0_B; // net ID: DATA_RATE_TQ lsb: 0  msb: 1 INPUT
		NetFlow* DATA__RATE__TQ_A1_B; // net ID: DATA_RATE_TQ lsb: 0  msb: 1 INPUT
		NetFlow* TRISTATE__WIDTH_A0_B; // net ID: TRISTATE_WIDTH lsb: 0  msb: 1 INPUT
		NetFlow* TRISTATE__WIDTH_A1_B; // net ID: TRISTATE_WIDTH lsb: 0  msb: 1 INPUT
		NetFlow* INIT__TQ_A0_B; // net ID: INIT_TQ lsb: 0  msb: 0 INPUT
		NetFlow* SRVAL__TQ_A0_B; // net ID: SRVAL_TQ lsb: 0  msb: 0 INPUT
		NetFlow* DATA1_A0_B; // net ID: data1 lsb: 0  msb: 0 OUTPUT
		NetFlow* DATA2_A0_B; // net ID: data2 lsb: 0  msb: 0 OUTPUT
		
		public: trif_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			parameter_int_t ffd, // Default: 1
			parameter_int_t mxd, // Default: 1
			//Verilog Ports in definition order:
			NetFlow* T1_A0_B, // net ID: T1 lsb: 0  msb: 0 INPUT
			NetFlow* T2_A0_B, // net ID: T2 lsb: 0  msb: 0 INPUT
			NetFlow* T3_A0_B, // net ID: T3 lsb: 0  msb: 0 INPUT
			NetFlow* T4_A0_B, // net ID: T4 lsb: 0  msb: 0 INPUT
			NetFlow* LOAD_A0_B, // net ID: load lsb: 0  msb: 0 INPUT
			NetFlow* C_A0_B, // net ID: C lsb: 0  msb: 0 INPUT
			NetFlow* CLKDIV_A0_B, // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			NetFlow* SR_A0_B, // net ID: SR lsb: 0  msb: 0 INPUT
			NetFlow* TCE_A0_B, // net ID: TCE lsb: 0  msb: 0 INPUT
			NetFlow* DATA__RATE__TQ_A0_B, // net ID: DATA_RATE_TQ lsb: 0  msb: 1 INPUT
			NetFlow* DATA__RATE__TQ_A1_B, // net ID: DATA_RATE_TQ lsb: 0  msb: 1 INPUT
			NetFlow* TRISTATE__WIDTH_A0_B, // net ID: TRISTATE_WIDTH lsb: 0  msb: 1 INPUT
			NetFlow* TRISTATE__WIDTH_A1_B, // net ID: TRISTATE_WIDTH lsb: 0  msb: 1 INPUT
			NetFlow* INIT__TQ_A0_B, // net ID: INIT_TQ lsb: 0  msb: 0 INPUT
			NetFlow* SRVAL__TQ_A0_B, // net ID: SRVAL_TQ lsb: 0  msb: 0 INPUT
			NetFlow* DATA1_A0_B, // net ID: data1 lsb: 0  msb: 0 OUTPUT
			NetFlow* DATA2_A0_B // net ID: data2 lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->ffd = ffd; // Default: 1
			this->mxd = mxd; // Default: 1
			//Verilog Ports in definition order:
			this->T1_A0_B = T1_A0_B; // net ID: T1 lsb: 0  msb: 0 INPUT
			this->T2_A0_B = T2_A0_B; // net ID: T2 lsb: 0  msb: 0 INPUT
			this->T3_A0_B = T3_A0_B; // net ID: T3 lsb: 0  msb: 0 INPUT
			this->T4_A0_B = T4_A0_B; // net ID: T4 lsb: 0  msb: 0 INPUT
			this->LOAD_A0_B = LOAD_A0_B; // net ID: load lsb: 0  msb: 0 INPUT
			this->C_A0_B = C_A0_B; // net ID: C lsb: 0  msb: 0 INPUT
			this->CLKDIV_A0_B = CLKDIV_A0_B; // net ID: CLKDIV lsb: 0  msb: 0 INPUT
			this->SR_A0_B = SR_A0_B; // net ID: SR lsb: 0  msb: 0 INPUT
			this->TCE_A0_B = TCE_A0_B; // net ID: TCE lsb: 0  msb: 0 INPUT
			this->DATA__RATE__TQ_A0_B = DATA__RATE__TQ_A0_B; // net ID: DATA_RATE_TQ lsb: 0  msb: 1 INPUT
			this->DATA__RATE__TQ_A1_B = DATA__RATE__TQ_A1_B; // net ID: DATA_RATE_TQ lsb: 0  msb: 1 INPUT
			this->TRISTATE__WIDTH_A0_B = TRISTATE__WIDTH_A0_B; // net ID: TRISTATE_WIDTH lsb: 0  msb: 1 INPUT
			this->TRISTATE__WIDTH_A1_B = TRISTATE__WIDTH_A1_B; // net ID: TRISTATE_WIDTH lsb: 0  msb: 1 INPUT
			this->INIT__TQ_A0_B = INIT__TQ_A0_B; // net ID: INIT_TQ lsb: 0  msb: 0 INPUT
			this->SRVAL__TQ_A0_B = SRVAL__TQ_A0_B; // net ID: SRVAL_TQ lsb: 0  msb: 0 INPUT
			this->DATA1_A0_B = DATA1_A0_B; // net ID: data1 lsb: 0  msb: 0 OUTPUT
			this->DATA2_A0_B = DATA2_A0_B; // net ID: data2 lsb: 0  msb: 0 OUTPUT
			
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
#endif // TRIF_OSERDESE1_VLOG_H
