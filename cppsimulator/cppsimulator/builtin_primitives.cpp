#include "built_in_primitives.h"

void calculate_LUT(simtime_t time,
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
		out->set_at(
			new_net_level(out_val),
			time);
		return;
	}

	int bit_select = a0 + (a1 << 1) + (a2 << 2) + (a3 << 3) + (a4 << 4) + (a4 << 5);
	lut = (lut >> bit_select);
	out_val = static_cast<value_t>(lut & 1 );

	out->set_at(
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