/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef DOUT_OSERDESE1_VLOG_H
#define DOUT_OSERDESE1_VLOG_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class dout_oserdese1_vlog: public Primitive{

		//Verilog Parameters:
		parameter_int_t FFD;
		parameter_int_t FFCD;
		parameter_int_t MXD;
		parameter_int_t MXR1;
		//Verilog Ports in definition order:
		NetFlow* DATA1_A0_B; // net ID: data1 lsb: 0  msb: 0 INPUT
		NetFlow* DATA2_A0_B; // net ID: data2 lsb: 0  msb: 0 INPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* BUFO_A0_B; // net ID: BUFO lsb: 0  msb: 0 INPUT
		NetFlow* SR_A0_B; // net ID: SR lsb: 0  msb: 0 INPUT
		NetFlow* OCE_A0_B; // net ID: OCE lsb: 0  msb: 0 INPUT
		NetFlow* OQ_A0_B; // net ID: OQ lsb: 0  msb: 0 OUTPUT
		NetFlow* D2RNK2_A0_B; // net ID: d2rnk2 lsb: 0  msb: 0 OUTPUT
		NetFlow* DATA__RATE__OQ_A0_B; // net ID: DATA_RATE_OQ lsb: 0  msb: 0 INPUT
		NetFlow* INIT__OQ_A0_B; // net ID: INIT_OQ lsb: 0  msb: 0 INPUT
		NetFlow* SRVAL__OQ_A0_B; // net ID: SRVAL_OQ lsb: 0  msb: 0 INPUT
		NetFlow* DDR3__MODE_A0_B; // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
		
		public: dout_oserdese1_vlog(
			const char * name,
			//Verilog Parameters:
			parameter_int_t FFD, // Default: 1
			parameter_int_t FFCD, // Default: 1
			parameter_int_t MXD, // Default: 1
			parameter_int_t MXR1, // Default: 1
			//Verilog Ports in definition order:
			NetFlow* DATA1_A0_B, // net ID: data1 lsb: 0  msb: 0 INPUT
			NetFlow* DATA2_A0_B, // net ID: data2 lsb: 0  msb: 0 INPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* BUFO_A0_B, // net ID: BUFO lsb: 0  msb: 0 INPUT
			NetFlow* SR_A0_B, // net ID: SR lsb: 0  msb: 0 INPUT
			NetFlow* OCE_A0_B, // net ID: OCE lsb: 0  msb: 0 INPUT
			NetFlow* OQ_A0_B, // net ID: OQ lsb: 0  msb: 0 OUTPUT
			NetFlow* D2RNK2_A0_B, // net ID: d2rnk2 lsb: 0  msb: 0 OUTPUT
			NetFlow* DATA__RATE__OQ_A0_B, // net ID: DATA_RATE_OQ lsb: 0  msb: 0 INPUT
			NetFlow* INIT__OQ_A0_B, // net ID: INIT_OQ lsb: 0  msb: 0 INPUT
			NetFlow* SRVAL__OQ_A0_B, // net ID: SRVAL_OQ lsb: 0  msb: 0 INPUT
			NetFlow* DDR3__MODE_A0_B // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->FFD = FFD; // Default: 1
			this->FFCD = FFCD; // Default: 1
			this->MXD = MXD; // Default: 1
			this->MXR1 = MXR1; // Default: 1
			//Verilog Ports in definition order:
			this->DATA1_A0_B = DATA1_A0_B; // net ID: data1 lsb: 0  msb: 0 INPUT
			this->DATA2_A0_B = DATA2_A0_B; // net ID: data2 lsb: 0  msb: 0 INPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->BUFO_A0_B = BUFO_A0_B; // net ID: BUFO lsb: 0  msb: 0 INPUT
			this->SR_A0_B = SR_A0_B; // net ID: SR lsb: 0  msb: 0 INPUT
			this->OCE_A0_B = OCE_A0_B; // net ID: OCE lsb: 0  msb: 0 INPUT
			this->OQ_A0_B = OQ_A0_B; // net ID: OQ lsb: 0  msb: 0 OUTPUT
			this->D2RNK2_A0_B = D2RNK2_A0_B; // net ID: d2rnk2 lsb: 0  msb: 0 OUTPUT
			this->DATA__RATE__OQ_A0_B = DATA__RATE__OQ_A0_B; // net ID: DATA_RATE_OQ lsb: 0  msb: 0 INPUT
			this->INIT__OQ_A0_B = INIT__OQ_A0_B; // net ID: INIT_OQ lsb: 0  msb: 0 INPUT
			this->SRVAL__OQ_A0_B = SRVAL__OQ_A0_B; // net ID: SRVAL_OQ lsb: 0  msb: 0 INPUT
			this->DDR3__MODE_A0_B = DDR3__MODE_A0_B; // net ID: DDR3_MODE lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		void calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // DOUT_OSERDESE1_VLOG_H
