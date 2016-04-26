/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_CARRY4_H
#define X_CARRY4_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
#include "built_in_primitives.h"

namespace CPrimitives {

	class X_CARRY4 : public Primitive {

		//Verilog Parameters:
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* CO_A0_B; // net ID: CO lsb: 0  msb: 3 OUTPUT
		NetFlow* CO_A1_B; // net ID: CO lsb: 0  msb: 3 OUTPUT
		NetFlow* CO_A2_B; // net ID: CO lsb: 0  msb: 3 OUTPUT
		NetFlow* CO_A3_B; // net ID: CO lsb: 0  msb: 3 OUTPUT
		NetFlow* O_A0_B; // net ID: O lsb: 0  msb: 3 OUTPUT
		NetFlow* O_A1_B; // net ID: O lsb: 0  msb: 3 OUTPUT
		NetFlow* O_A2_B; // net ID: O lsb: 0  msb: 3 OUTPUT
		NetFlow* O_A3_B; // net ID: O lsb: 0  msb: 3 OUTPUT
		NetFlow* CI_A0_B; // net ID: CI lsb: 0  msb: 0 INPUT
		NetFlow* CYINIT_A0_B; // net ID: CYINIT lsb: 0  msb: 0 INPUT
		NetFlow* DI_A0_B; // net ID: DI lsb: 0  msb: 3 INPUT
		NetFlow* DI_A1_B; // net ID: DI lsb: 0  msb: 3 INPUT
		NetFlow* DI_A2_B; // net ID: DI lsb: 0  msb: 3 INPUT
		NetFlow* DI_A3_B; // net ID: DI lsb: 0  msb: 3 INPUT
		NetFlow* S_A0_B; // net ID: S lsb: 0  msb: 3 INPUT
		NetFlow* S_A1_B; // net ID: S lsb: 0  msb: 3 INPUT
		NetFlow* S_A2_B; // net ID: S lsb: 0  msb: 3 INPUT
		NetFlow* S_A3_B; // net ID: S lsb: 0  msb: 3 INPUT

	public: X_CARRY4(
		const char * name,
		//Verilog Parameters:
		parameter_string_t LOC, // Default: "UNPLACED"
								//Verilog Ports in definition order:
		NetFlow* CO_A0_B, // net ID: CO lsb: 0  msb: 3 OUTPUT
		NetFlow* CO_A1_B, // net ID: CO lsb: 0  msb: 3 OUTPUT
		NetFlow* CO_A2_B, // net ID: CO lsb: 0  msb: 3 OUTPUT
		NetFlow* CO_A3_B, // net ID: CO lsb: 0  msb: 3 OUTPUT
		NetFlow* O_A0_B, // net ID: O lsb: 0  msb: 3 OUTPUT
		NetFlow* O_A1_B, // net ID: O lsb: 0  msb: 3 OUTPUT
		NetFlow* O_A2_B, // net ID: O lsb: 0  msb: 3 OUTPUT
		NetFlow* O_A3_B, // net ID: O lsb: 0  msb: 3 OUTPUT
		NetFlow* CI_A0_B, // net ID: CI lsb: 0  msb: 0 INPUT
		NetFlow* CYINIT_A0_B, // net ID: CYINIT lsb: 0  msb: 0 INPUT
		NetFlow* DI_A0_B, // net ID: DI lsb: 0  msb: 3 INPUT
		NetFlow* DI_A1_B, // net ID: DI lsb: 0  msb: 3 INPUT
		NetFlow* DI_A2_B, // net ID: DI lsb: 0  msb: 3 INPUT
		NetFlow* DI_A3_B, // net ID: DI lsb: 0  msb: 3 INPUT
		NetFlow* S_A0_B, // net ID: S lsb: 0  msb: 3 INPUT
		NetFlow* S_A1_B, // net ID: S lsb: 0  msb: 3 INPUT
		NetFlow* S_A2_B, // net ID: S lsb: 0  msb: 3 INPUT
		NetFlow* S_A3_B // net ID: S lsb: 0  msb: 3 INPUT
		):Primitive(name) {

		// Assign parameters and ports: 
		//Verilog Parameters:
		this->LOC = LOC; // Default: "UNPLACED"
						 //Verilog Ports in definition order:
		this->CO_A0_B = CO_A0_B; // net ID: CO lsb: 0  msb: 3 OUTPUT
		this->CO_A1_B = CO_A1_B; // net ID: CO lsb: 0  msb: 3 OUTPUT
		this->CO_A2_B = CO_A2_B; // net ID: CO lsb: 0  msb: 3 OUTPUT
		this->CO_A3_B = CO_A3_B; // net ID: CO lsb: 0  msb: 3 OUTPUT
		this->O_A0_B = O_A0_B; // net ID: O lsb: 0  msb: 3 OUTPUT
		this->O_A1_B = O_A1_B; // net ID: O lsb: 0  msb: 3 OUTPUT
		this->O_A2_B = O_A2_B; // net ID: O lsb: 0  msb: 3 OUTPUT
		this->O_A3_B = O_A3_B; // net ID: O lsb: 0  msb: 3 OUTPUT
		this->CI_A0_B = CI_A0_B; // net ID: CI lsb: 0  msb: 0 INPUT
		this->CYINIT_A0_B = CYINIT_A0_B; // net ID: CYINIT lsb: 0  msb: 0 INPUT
		this->DI_A0_B = DI_A0_B; // net ID: DI lsb: 0  msb: 3 INPUT
		this->DI_A1_B = DI_A1_B; // net ID: DI lsb: 0  msb: 3 INPUT
		this->DI_A2_B = DI_A2_B; // net ID: DI lsb: 0  msb: 3 INPUT
		this->DI_A3_B = DI_A3_B; // net ID: DI lsb: 0  msb: 3 INPUT
		this->S_A0_B = S_A0_B; // net ID: S lsb: 0  msb: 3 INPUT
		this->S_A1_B = S_A1_B; // net ID: S lsb: 0  msb: 3 INPUT
		this->S_A2_B = S_A2_B; // net ID: S lsb: 0  msb: 3 INPUT
		this->S_A3_B = S_A3_B; // net ID: S lsb: 0  msb: 3 INPUT

			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
			CI_A0_B->register_event_reader(this);			// net ID: CI lsb: 0  msb: 0 INPUT
			CYINIT_A0_B->register_event_reader(this);	// net ID: CYINIT lsb: 0  msb: 0 INPUT
			DI_A0_B->register_event_reader(this);			// net ID: DI lsb: 0  msb: 3 INPUT
			DI_A1_B->register_event_reader(this);			// net ID: DI lsb: 0  msb: 3 INPUT
			DI_A2_B->register_event_reader(this);			// net ID: DI lsb: 0  msb: 3 INPUT
			DI_A3_B->register_event_reader(this);			// net ID: DI lsb: 0  msb: 3 INPUT
			S_A0_B->register_event_reader(this);
			S_A1_B->register_event_reader(this);
			S_A2_B->register_event_reader(this);
			S_A3_B->register_event_reader(this);
		}

		void calculate(int time){
			value_t ci_or_cyinit;
			value_t di_in_0, di_in_1, di_in_2, di_in_3;
			value_t s_in_0, s_in_1, s_in_2, s_in_3;
			value_t o_out_0, o_out_1, o_out_2, o_out_3;
			value_t co_out_0, co_out_1, co_out_2, co_out_3;
			value_t ci_in;
			value_t cyinit_in;

			//Get net levels
			di_in_0 = DI_A0_B->get_value_at(time);
			di_in_1 = DI_A1_B->get_value_at(time);
			di_in_2 = DI_A2_B->get_value_at(time);
			di_in_3 = DI_A3_B->get_value_at(time);
			s_in_0 = S_A0_B->get_value_at(time);
			s_in_1 = S_A1_B->get_value_at(time);
			s_in_2 = S_A2_B->get_value_at(time);
			s_in_3 = S_A3_B->get_value_at(time);
			cyinit_in = CYINIT_A0_B->get_value_at(time);
			ci_in = CI_A0_B->get_value_at(time);

			/*
			assign  ci_or_cyinit = ci_in | cyinit_in;
			*/
			ci_or_cyinit = or_gate(ci_in, cyinit_in);

			/*
			assign co_out[0] = s_in[0] ? ci_or_cyinit : di_in[0];
			assign co_out[1] = s_in[1] ? co_out[0] : di_in[1];
			assign co_out[2] = s_in[2] ? co_out[1] : di_in[2];
			assign co_out[3] = s_in[3] ? co_out[2] : di_in[3];
			*/
			co_out_0 = mux2(s_in_0, di_in_0, ci_or_cyinit);
			co_out_1 = mux2(s_in_1, di_in_1, co_out_0);
			co_out_2 = mux2(s_in_2, di_in_2, co_out_1);
			co_out_3 = mux2(s_in_3, di_in_3, co_out_2);

			/*
			assign o_out = s_in ^{ co_out[2:0], ci_or_cyinit };
			*/
			o_out_0 = xor_gate(s_in_0, ci_or_cyinit);
			o_out_1 = xor_gate(s_in_1, co_out_0);
			o_out_2 = xor_gate(s_in_2, co_out_1);
			o_out_3 = xor_gate(s_in_3, co_out_2);


			//Set net levels
			O_A0_B->set_at(new_net_level(o_out_0));
			O_A1_B->set_at(new_net_level(o_out_1));
			O_A2_B->set_at(new_net_level(o_out_2));
			O_A3_B->set_at(new_net_level(o_out_3));
			CO_A0_B->set_at(new_net_level(co_out_0));
			CO_A1_B->set_at(new_net_level(co_out_1));
			CO_A2_B->set_at(new_net_level(co_out_2));
			CO_A3_B->set_at(new_net_level(co_out_3));
			 
		}

	};
		
}
#endif // X_CARRY4_H
