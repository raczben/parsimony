/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_POST_CRC_INTERNAL_H
#define X_POST_CRC_INTERNAL_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_POST_CRC_INTERNAL: public Primitive{

		//Verilog Parameters:
		//Verilog Ports in definition order:
		NetFlow* CRCERROR_A0_B; // net ID: CRCERROR lsb: 0  msb: 0 OUTPUT
		
		public: X_POST_CRC_INTERNAL(
			const char * name,
			//Verilog Parameters:
			//Verilog Ports in definition order:
			NetFlow* CRCERROR_A0_B // net ID: CRCERROR lsb: 0  msb: 0 OUTPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			//Verilog Ports in definition order:
			this->CRCERROR_A0_B = CRCERROR_A0_B; // net ID: CRCERROR lsb: 0  msb: 0 OUTPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		
		bool calculate(simtime_t time){
		// TODO
		}
		};
		
}
#endif // X_POST_CRC_INTERNAL_H
