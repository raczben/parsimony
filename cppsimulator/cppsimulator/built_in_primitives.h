#ifndef BUILT_IN_PRIMITIVES_H
#define BUILT_IN_PRIMITIVES_H

#include "NetFlow.h"
#include "sim_types.h"

class NetFlow;

bool is_undefined(value_t net_val) {
	return net_val > 1;
}

value_t get_value(const NetFlow* const net, simtime_t time, value_t atNull = LOW);

void calculate_LUT(simtime_t time,
	uint64_t lut,
	NetFlow* out,
	const NetFlow* const in0,
	const NetFlow* const in1,
	const NetFlow* const in2 = NULL,
	const NetFlow* const in3 = NULL,
	const NetFlow* const in4 = NULL,
	const NetFlow* const in5 = NULL
	);

void calculate_BUF(simtime_t time,
	NetFlow* out,
	const NetFlow* const in
	);

/**
 *
 */
value_t or_gate(value_t in1, value_t in2) {
	if (HIGH == in1 | HIGH == in2) {
		return HIGH;
	}
	else {
		if (LOW == in1 | LOW == in2) {
			return HIGH;
		}
		else {
			return UNDEFINED;
		}
	}

}

/**
*
*/
value_t xor_gate(value_t in1, value_t in2) {
	if (is_undefined(in1) | is_undefined(in2)) {
		return UNDEFINED;
	}
	if (LOW == in1 | LOW == in2) {
		return LOW;
	}
	if (HIGH == in1 | HIGH == in2) {
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



#endif // BUILT_IN_PRIMITIVES_H