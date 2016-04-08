/******************************************************************************
* Generated Cpp template for simulation primitives.
* Author: Benedek Racz
******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

class prim_class_X_AND2 {
	//Verilog Parameters:
	parameter_string_t LOC;
	//Verilog Ports in definition order:
	NetFlow* O; // OUTPUT
	NetFlow* I0; // INPUT
	NetFlow* I1; // INPUT

	prim_class_X_AND2(
		//Verilog Parameters:
		parameter_string_t LOC, // Default: "UNPLACED"
								//Verilog Ports in definition order:
		NetFlow* O, // OUTPUT
		NetFlow* I0, // INPUT
		NetFlow* I1 // INPUT
		) {

		// Assign parameters and ports: 
		//Verilog Parameters:
		this->LOC = LOC; // Default: "UNPLACED"
						 //Verilog Ports in definition order:
		this->O = O; // OUTPUT
		this->I0 = I0; // INPUT
		this->I1 = I1; // INPUT

		register_wait_on_event_nets();

	}

	void register_wait_on_event_nets() {
		// TODO
	}
	void calculate(int time) {
		// TODO
	}
};


class prim_class_X_AND3 {
	//Verilog Parameters:
	parameter_string_t LOC;
	//Verilog Ports in definition order:
	NetFlow* O; // OUTPUT
	NetFlow* I0; // INPUT
	NetFlow* I1; // INPUT
	NetFlow* I2; // INPUT

	prim_class_X_AND3(
		//Verilog Parameters:
		parameter_string_t LOC, // Default: "UNPLACED"
								//Verilog Ports in definition order:
		NetFlow* O, // OUTPUT
		NetFlow* I0, // INPUT
		NetFlow* I1, // INPUT
		NetFlow* I2 // INPUT
		) {

		// Assign parameters and ports: 
		//Verilog Parameters:
		this->LOC = LOC; // Default: "UNPLACED"
						 //Verilog Ports in definition order:
		this->O = O; // OUTPUT
		this->I0 = I0; // INPUT
		this->I1 = I1; // INPUT
		this->I2 = I2; // INPUT

		register_wait_on_event_nets();

	}

	void register_wait_on_event_nets() {
		// TODO
	}
	void calculate(int time) {
		// TODO
	}
};
