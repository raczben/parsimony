/******************************************************************************
 * built_in_primitives.h
 * 
 * This header contains functions to help implement a primitive. These are
 * generic primitives so they can be used in several simulation primitives.
 *
 * created by: Benedek Racz
 *       date: 2016. 05. 11.
 *****************************************************************************/

#ifndef BUILT_IN_PRIMITIVES_H
#define BUILT_IN_PRIMITIVES_H

#include "NetFlow.h"
#include "sim_types.h"

class NetFlow;

/*********************************************
 * is_undefined() returns false if the given
 * value is HIGH or LOW, else it returns true
 *********************************************/
bool is_undefined(value_t net_val);


/*******************************************************************************
 * get_value() Generic wrapper function for getting a net value at a given time.
 * It handles the nullptr of nets too.
 * If the ptr of the net is valid (not null) it returns the value of the net
 * else it returns the atNull (default LOW) parameter.
*******************************************************************************/
value_t get_value(const NetFlow* const net, simtime_t time, value_t atNull = LOW);


/*************************************************
 * calculate_LUT() is a generic calculator for LUTs
 * it can be used up to LUT 6
 *************************************************/
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


/*******************************************************************************
 * calculate_BUF() is a generic function for calculate a BUFFER.
 * It copies the input to the output without delay.
 *******************************************************************************/
void calculate_BUF(simtime_t time,
	NetFlow* out,
	const NetFlow* const in
	);


/*******************************************************************************
 * or_gate() is a generic function for calculate an OR gate. With no delay.
 * Truth table:
 *   in1    in2    return
 *  HIGH     -	   HIGH
 *    -    HIGH     HIGH
 *  LOW    LOW      LOW
 *     else         UNDEFINED
 *******************************************************************************/
value_t or_gate(value_t in1, value_t in2);


/*******************************************************************************
 * xor_gate() is a generic function for calculate a XOR gate. With no delay.
 *******************************************************************************/
value_t xor_gate(value_t in1, value_t in2);


/*******************************************************************************
 * mux2() is a generic function for calculate a MULTIPLEXER. With no delay.
 *  If address is low it returns in0.
 *  If address is high it returns in1.
 *  Else it returns UNDEFINED.
 *******************************************************************************/
value_t mux2(value_t address, value_t in0, value_t in1);



#endif // BUILT_IN_PRIMITIVES_H