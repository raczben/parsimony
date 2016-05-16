/******************************************************************************
* built_in_primitives.cpp
*
* created by: Benedek Racz
*       date: 2016. 05. 11.
*****************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "built_in_primitives.h"


bool calculate_LUT(simtime_t time,
	uint64_t lut,
	NetFlow* out,
	const NetFlow* const in0,
	const NetFlow* const in1,
	const NetFlow* const in2,
	const NetFlow* const in3,
	const NetFlow* const in4,
	const NetFlow* const in5
	) {

	bit_t a0, a1, a2, a3, a4, a5;


	a0 = get_value(in0, time);
	a1 = get_value(in1, time);
	a2 = get_value(in2, time);
	a3 = get_value(in3, time);
	a4 = get_value(in4, time);
	a5 = get_value(in5, time);

	value_t out_val = UNDEFINED;

	/**
	* If any of input nets is undefined or in high impedance state.
	*/
	if (a0 > 1 || a1 > 1 || a2 > 1 || a3 > 1 || a4 > 1 || a5 > 1) {
		return out->set_at(
			new_net_level(out_val),
			time);
	}

	int bit_select = a0 + (a1 << 1) + (a2 << 2) + (a3 << 3) + (a4 << 4) + (a5 << 5);
	lut = (lut >> bit_select);
	out_val = static_cast<value_t>(lut & 1 );

	return out->set_at(
		new_net_level(out_val),
		time
		);
}


value_t get_value(const NetFlow* const net, simtime_t time, value_t atNull) {
	if (NULL != net) {
		return net->get_value_at(time);
	}
	return atNull;
}


bool calculate_BUF(simtime_t time,
	NetFlow* out,
	const NetFlow* const in
	) {
	return out->set_at(
		in->get_at(time),
		time
		);
}


bool is_undefined(value_t net_val) {
	return net_val > 1;
}



/**
*
*/
value_t or_gate(value_t in1, value_t in2) {
	if ( (HIGH == in1) | (HIGH == in2) ) {
		return HIGH;
	}
	if ( (LOW == in1) | (LOW == in2) ) {
		return LOW;
	}
	return UNDEFINED;
}

/**
*
*/
value_t xor_gate(value_t in1, value_t in2) {
	if (is_undefined(in1) | is_undefined(in2)) {
		return UNDEFINED;
	}
	if ( (LOW == in1) & (LOW == in2) ) {
		return LOW;
	}
	if ( (HIGH == in1) & (HIGH == in2) ) {
		return LOW;
	}
	return HIGH;
}


/**
*
*/
value_t mux2(value_t address, value_t in0, value_t in1) {
	if (HIGH == address) {
		if (HIGH_Z == in1) {
			return UNDEFINED;
		}
		return in1;
	}
	if (LOW == address) {
		if (HIGH_Z == in0) {
			return UNDEFINED;
		}
		return in0;
	}
	return UNDEFINED;
}
