/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef TOUT_OSERDESE1_VLOG_H
#define TOUT_OSERDESE1_VLOG_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class tout_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		parameter_int_t ffd;
		parameter_int_t mxd;
		//Verilog Ports in definition order:
		NetFlow* DATA1_A0_B; // net ID: data1 lsb: 0  msb: 0 INPUT
		NetFlow* DATA2_A0_B; // net ID: data2 lsb: 0  msb: 0 INPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* BUFO_A0_B; // net ID: BUFO lsb: 0  msb: 0 INPUT
		NetFlow* SR_A0_B; // net ID: SR lsb: 0  msb: 0 INPUT
		NetFlow* TCE_A0_B; // net ID: TCE lsb: 0  msb: 0 INPUT
		NetFlow* DATA__RATE__TQ_A0_B; // net ID: DATA_RATE_TQ lsb: 0  msb: 1 INPUT
		NetFlow* DATA__RATE__TQ_A1_B; // net ID: DATA_RATE_TQ lsb: 0  msb: 1 INPUT
		NetFlow* TRISTATE__WIDTH_A0_B; // net ID: TRISTATE_WIDTH lsb: 0  msb: 1 INPUT
		NetFlow* TRISTATE__WIDTH_A1_B; // net ID: TRISTATE_WIDTH lsb: 0  msb: 1 INPUT
		NetFlow* INIT__TQ_A0_B; // net ID: INIT_TQ lsb: 0  msb: 0 INPUT
		NetFlow* SRVAL__TQ_A0_B; // net ID: SRVAL_TQ lsb: 0  msb: 0 INPUT
		NetFlow* TQ_A0_B; // net ID: TQ lsb: 0  msb: 0 OUTPUT
		NetFlow* DDR3__MODE_A0_B; // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
		
		public: tout_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			parameter_int_t ffd, // Default: 1
			parameter_int_t mxd, // Default: 1
			//Verilog Ports in definition order:
			NetFlow* DATA1_A0_B, // net ID: data1 lsb: 0  msb: 0 INPUT
			NetFlow* DATA2_A0_B, // net ID: data2 lsb: 0  msb: 0 INPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* BUFO_A0_B, // net ID: BUFO lsb: 0  msb: 0 INPUT
			NetFlow* SR_A0_B, // net ID: SR lsb: 0  msb: 0 INPUT
			NetFlow* TCE_A0_B, // net ID: TCE lsb: 0  msb: 0 INPUT
			NetFlow* DATA__RATE__TQ_A0_B, // net ID: DATA_RATE_TQ lsb: 0  msb: 1 INPUT
			NetFlow* DATA__RATE__TQ_A1_B, // net ID: DATA_RATE_TQ lsb: 0  msb: 1 INPUT
			NetFlow* TRISTATE__WIDTH_A0_B, // net ID: TRISTATE_WIDTH lsb: 0  msb: 1 INPUT
			NetFlow* TRISTATE__WIDTH_A1_B, // net ID: TRISTATE_WIDTH lsb: 0  msb: 1 INPUT
			NetFlow* INIT__TQ_A0_B, // net ID: INIT_TQ lsb: 0  msb: 0 INPUT
			NetFlow* SRVAL__TQ_A0_B, // net ID: SRVAL_TQ lsb: 0  msb: 0 INPUT
			NetFlow* TQ_A0_B, // net ID: TQ lsb: 0  msb: 0 OUTPUT
			NetFlow* DDR3__MODE_A0_B // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->ffd = ffd; // Default: 1
			this->mxd = mxd; // Default: 1
			//Verilog Ports in definition order:
			this->DATA1_A0_B = DATA1_A0_B; // net ID: data1 lsb: 0  msb: 0 INPUT
			this->DATA2_A0_B = DATA2_A0_B; // net ID: data2 lsb: 0  msb: 0 INPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->BUFO_A0_B = BUFO_A0_B; // net ID: BUFO lsb: 0  msb: 0 INPUT
			this->SR_A0_B = SR_A0_B; // net ID: SR lsb: 0  msb: 0 INPUT
			this->TCE_A0_B = TCE_A0_B; // net ID: TCE lsb: 0  msb: 0 INPUT
			this->DATA__RATE__TQ_A0_B = DATA__RATE__TQ_A0_B; // net ID: DATA_RATE_TQ lsb: 0  msb: 1 INPUT
			this->DATA__RATE__TQ_A1_B = DATA__RATE__TQ_A1_B; // net ID: DATA_RATE_TQ lsb: 0  msb: 1 INPUT
			this->TRISTATE__WIDTH_A0_B = TRISTATE__WIDTH_A0_B; // net ID: TRISTATE_WIDTH lsb: 0  msb: 1 INPUT
			this->TRISTATE__WIDTH_A1_B = TRISTATE__WIDTH_A1_B; // net ID: TRISTATE_WIDTH lsb: 0  msb: 1 INPUT
			this->INIT__TQ_A0_B = INIT__TQ_A0_B; // net ID: INIT_TQ lsb: 0  msb: 0 INPUT
			this->SRVAL__TQ_A0_B = SRVAL__TQ_A0_B; // net ID: SRVAL_TQ lsb: 0  msb: 0 INPUT
			this->TQ_A0_B = TQ_A0_B; // net ID: TQ lsb: 0  msb: 0 OUTPUT
			this->DDR3__MODE_A0_B = DDR3__MODE_A0_B; // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
			
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
#endif // TOUT_OSERDESE1_VLOG_H
