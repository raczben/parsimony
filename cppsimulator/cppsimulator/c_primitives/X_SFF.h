/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_SFF_H
#define X_SFF_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_SFF: public Primitive{

		//Verilog Parameters:
		parameter_int_t INIT;
		parameter_string_t LOC;
		parameter_enum_t XON;
		parameter_enum_t MSGON;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* SET_A0_B; // net ID: SET lsb: 0  msb: 0 INPUT
		NetFlow* SRST_A0_B; // net ID: SRST lsb: 0  msb: 0 INPUT
		NetFlow* SSET_A0_B; // net ID: SSET lsb: 0  msb: 0 INPUT
		
		public: X_SFF(
			const char * name,
			//Verilog Parameters:
			parameter_int_t INIT, // Default: 1'b0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t XON, // Default: "TRUE"
			parameter_enum_t MSGON, // Default: "TRUE"
			//Verilog Ports in definition order:
			NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* CE_A0_B, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* CLK_A0_B, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* I_A0_B, // net ID: I lsb: 0  msb: 0 INPUT
			NetFlow* RST_A0_B, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* SET_A0_B, // net ID: SET lsb: 0  msb: 0 INPUT
			NetFlow* SRST_A0_B, // net ID: SRST lsb: 0  msb: 0 INPUT
			NetFlow* SSET_A0_B // net ID: SSET lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT; // Default: 1'b0
			this->LOC = LOC; // Default: "UNPLACED"
			this->XON = XON; // Default: "TRUE"
			this->MSGON = MSGON; // Default: "TRUE"
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->CE_A0_B = CE_A0_B; // net ID: CE lsb: 0  msb: 0 INPUT
			this->CLK_A0_B = CLK_A0_B; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->I_A0_B = I_A0_B; // net ID: I lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B; // net ID: RST lsb: 0  msb: 0 INPUT
			this->SET_A0_B = SET_A0_B; // net ID: SET lsb: 0  msb: 0 INPUT
			this->SRST_A0_B = SRST_A0_B; // net ID: SRST lsb: 0  msb: 0 INPUT
			this->SSET_A0_B = SSET_A0_B; // net ID: SSET lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
			CLK_A0_B->register_event_reader(this);
			RST_A0_B->register_event_reader(this);
			SET_A0_B->register_event_reader(this);
		}
		
		void calculate(int time){
			if (RST_A0_B->is_equal_at(HIGH, time)) {
				O_A0_B->set_at(
					LOW,
					time
					);
				return;
			}
			// Async SET
			if (SET_A0_B->is_equal_at(HIGH, time)) {
				O_A0_B->set_at(
					HIGH,
					time
					);
				return;
			}

			/**
			*  (01)   0      1    0     0       ?    :   ?  :  0;
			*  (01)   1      1    0     0       ?    :   ?  :  1;
			*  (01)   x      1    0     0       ?    :   ?  :  x;
			*/
			if (CLK_A0_B->posedge_at(time)) {
				if (CE_A0_B->is_equal_prev(HIGH, time)) {
					if (SRST_A0_B->is_equal_prev(HIGH, time)) {
						O_A0_B->set_at(
							LOW,
							time
							);
						return;
					}
					if (SSET_A0_B->is_equal_prev(HIGH, time)) {
						O_A0_B->set_at(
							HIGH,
							time
							);
						return;
					}
					O_A0_B->set_at(
						I_A0_B->get_value_prev(time),
						time
						);
					return;
				}
			}
		}

		};
		
}
#endif // X_SFF_H
