/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_FF_H
#define X_FF_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_FF : public Primitive {

		//Verilog Parameters:
		parameter_int_t INIT;
		parameter_string_t LOC;
		parameter_enum_t XON;
		parameter_enum_t MSGON;
		//Verilog Ports in definition order:
		NetFlow* O_A0_B;				// net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* CE_A0_B;				// net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* CLK_A0_B;				// net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* I_A0_B;				// net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B;				// net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* SET_A0_B;				// net ID: SET lsb: 0  msb: 0 INPUT

	public: X_FF(
		const char * name,
		//Verilog Parameters:
		parameter_int_t INIT,			// Default: 1'b0
		parameter_string_t LOC,			// Default: "UNPLACED"
		parameter_enum_t XON,			// Default: "TRUE"
		parameter_enum_t MSGON,			// Default: "TRUE"
		//Verilog Ports in definition order:
		NetFlow* O_A0_B,				// net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* CE_A0_B,				// net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* CLK_A0_B,				// net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* I_A0_B,				// net ID: I lsb: 0  msb: 0 INPUT
		NetFlow* RST_A0_B,				// net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* SET_A0_B				// net ID: SET lsb: 0  msb: 0 INPUT
		) :Primitive(name) {

			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT = INIT;			// Default: 1'b0
			this->LOC = LOC;			// Default: "UNPLACED"
			this->XON = XON;			// Default: "TRUE"
			this->MSGON = MSGON;		// Default: "TRUE"
			//Verilog Ports in definition order:
			this->O_A0_B = O_A0_B;		// net ID: O lsb: 0  msb: 0 OUTPUT
			this->CE_A0_B = CE_A0_B;	// net ID: CE lsb: 0  msb: 0 INPUT
			this->CLK_A0_B = CLK_A0_B;	// net ID: CLK lsb: 0  msb: 0 INPUT
			this->I_A0_B = I_A0_B;		// net ID: I lsb: 0  msb: 0 INPUT
			this->RST_A0_B = RST_A0_B;	// net ID: RST lsb: 0  msb: 0 INPUT
			this->SET_A0_B = SET_A0_B;	// net ID: SET lsb: 0  msb: 0 INPUT

			register_wait_on_event_nets();

		}
		
		void register_wait_on_event_nets(){
			CLK_A0_B->register_event_reader(this);
			RST_A0_B->register_event_reader(this);
			SET_A0_B->register_event_reader(this);
		}

		void calculate(int time){
			// Async RESET
			if (RST_A0_B->is_equal_at(HIGH, time)) {
				O_A0_B->set_at(
					new_net_level(LOW),
					time
					);
				return;
			}
			// Async SET
			if (SET_A0_B->is_equal_at(HIGH, time)) {
				O_A0_B->set_at(
					new_net_level(HIGH),
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
					O_A0_B->set_at(
						new_net_level(I_A0_B->get_value_prev(time)),
						time
						);
					return;
				}
			}


		}

		bool if_AND_d_ce_set_rst(
			simtime_t time,
			value_t d_val,
			value_t ce_val,
			value_t set_val,
			value_t reset_val
			) {
			if (d_val >= 0) {
				if (!I_A0_B->is_equal_at(d_val, time)) {
					return false;
				}
			}
			if (ce_val >= 0) {
				if (!CE_A0_B->is_equal_at(ce_val, time)) {
					return false;
				}
			}
			if (set_val >= 0) {
				if (!SET_A0_B->is_equal_at(set_val, time)) {
					return false;
				}
			}
			if (reset_val >= 0) {
				if (!RST_A0_B->is_equal_at(reset_val, time)) {
					return false;
				}
			}
			return true;
		}

	};
		
}
#endif // X_FF_H
