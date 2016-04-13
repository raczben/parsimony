/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_MULT18X18SIO: public Primitive{

		//Verilog Parameters:
		parameter_string_t AREG;
		parameter_string_t BREG;
		parameter_string_t B_INPUT;
		parameter_string_t LOC;
		parameter_string_t PREG;
		//Verilog Ports in definition order:
		NetFlow* BCOUT; // net ID: BCOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* P; // net ID: P lsb: 0  msb: 0 OUTPUT
		NetFlow* A; // net ID: A lsb: 0  msb: 17 INPUT
		NetFlow* B; // net ID: B lsb: 0  msb: 17 INPUT
		NetFlow* BCIN; // net ID: BCIN lsb: 0  msb: 17 INPUT
		NetFlow* CEA; // net ID: CEA lsb: 0  msb: 0 INPUT
		NetFlow* CEB; // net ID: CEB lsb: 0  msb: 0 INPUT
		NetFlow* CEP; // net ID: CEP lsb: 0  msb: 0 INPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* RSTA; // net ID: RSTA lsb: 0  msb: 0 INPUT
		NetFlow* RSTB; // net ID: RSTB lsb: 0  msb: 0 INPUT
		NetFlow* RSTP; // net ID: RSTP lsb: 0  msb: 0 INPUT
		
		X_MULT18X18SIO(
			const char * name,
			//Verilog Parameters:
			parameter_string_t AREG, // Default: 1
			parameter_string_t BREG, // Default: 1
			parameter_string_t B_INPUT, // Default: "DIRECT"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t PREG, // Default: 1
			//Verilog Ports in definition order:
			NetFlow* BCOUT, // net ID: BCOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* P, // net ID: P lsb: 0  msb: 0 OUTPUT
			NetFlow* A, // net ID: A lsb: 0  msb: 17 INPUT
			NetFlow* B, // net ID: B lsb: 0  msb: 17 INPUT
			NetFlow* BCIN, // net ID: BCIN lsb: 0  msb: 17 INPUT
			NetFlow* CEA, // net ID: CEA lsb: 0  msb: 0 INPUT
			NetFlow* CEB, // net ID: CEB lsb: 0  msb: 0 INPUT
			NetFlow* CEP, // net ID: CEP lsb: 0  msb: 0 INPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* RSTA, // net ID: RSTA lsb: 0  msb: 0 INPUT
			NetFlow* RSTB, // net ID: RSTB lsb: 0  msb: 0 INPUT
			NetFlow* RSTP // net ID: RSTP lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->AREG = AREG; // Default: 1
			this->BREG = BREG; // Default: 1
			this->B_INPUT = B_INPUT; // Default: "DIRECT"
			this->LOC = LOC; // Default: "UNPLACED"
			this->PREG = PREG; // Default: 1
			//Verilog Ports in definition order:
			this->BCOUT = BCOUT; // net ID: BCOUT lsb: 0  msb: 0 OUTPUT
			this->P = P; // net ID: P lsb: 0  msb: 0 OUTPUT
			this->A = A; // net ID: A lsb: 0  msb: 17 INPUT
			this->B = B; // net ID: B lsb: 0  msb: 17 INPUT
			this->BCIN = BCIN; // net ID: BCIN lsb: 0  msb: 17 INPUT
			this->CEA = CEA; // net ID: CEA lsb: 0  msb: 0 INPUT
			this->CEB = CEB; // net ID: CEB lsb: 0  msb: 0 INPUT
			this->CEP = CEP; // net ID: CEP lsb: 0  msb: 0 INPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->RSTA = RSTA; // net ID: RSTA lsb: 0  msb: 0 INPUT
			this->RSTB = RSTB; // net ID: RSTB lsb: 0  msb: 0 INPUT
			this->RSTP = RSTP; // net ID: RSTP lsb: 0  msb: 0 INPUT
			
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
