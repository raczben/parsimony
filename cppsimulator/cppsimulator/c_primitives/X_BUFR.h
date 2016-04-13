/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_BUFR: public Primitive{

		//Verilog Parameters:
		parameter_string_t BUFR_DIVIDE;
		parameter_string_t SIM_DEVICE;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* O; // net ID: O lsb: 0  msb: 0 OUTPUT
		NetFlow* CE; // net ID: CE lsb: 0  msb: 0 INPUT
		NetFlow* CLR; // net ID: CLR lsb: 0  msb: 0 INPUT
		NetFlow* I; // net ID: I lsb: 0  msb: 0 INPUT
		
		X_BUFR(
			const char * name,
			//Verilog Parameters:
			parameter_string_t BUFR_DIVIDE, // Default: "BYPASS"
			parameter_string_t SIM_DEVICE, // Default: "VIRTEX4"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* O, // net ID: O lsb: 0  msb: 0 OUTPUT
			NetFlow* CE, // net ID: CE lsb: 0  msb: 0 INPUT
			NetFlow* CLR, // net ID: CLR lsb: 0  msb: 0 INPUT
			NetFlow* I // net ID: I lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->BUFR_DIVIDE = BUFR_DIVIDE; // Default: "BYPASS"
			this->SIM_DEVICE = SIM_DEVICE; // Default: "VIRTEX4"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->O = O; // net ID: O lsb: 0  msb: 0 OUTPUT
			this->CE = CE; // net ID: CE lsb: 0  msb: 0 INPUT
			this->CLR = CLR; // net ID: CLR lsb: 0  msb: 0 INPUT
			this->I = I; // net ID: I lsb: 0  msb: 0 INPUT
			
			register_wait_on_event_nets();
			
		}
		
		void register_wait_on_event_nets(){
		// TODO
		}
		void calculate(int time){
		// TODO
		}
		};
		


}
