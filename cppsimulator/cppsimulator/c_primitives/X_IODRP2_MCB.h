/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_IODRP2_MCB: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t DATA_RATE;
		parameter_string_t IDELAY_VALUE;
		parameter_string_t MCB_ADDRESS;
		parameter_string_t ODELAY_VALUE;
		parameter_string_t SERDES_MODE;
		parameter_string_t SIM_TAPDELAY_VALUE;
		//Verilog Ports in definition order:
		NetFlow* AUXSDO; // net ID: AUXSDO lsb: 0  msb: 0 OUTPUT
		NetFlow* DATAOUT; // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* DATAOUT2; // net ID: DATAOUT2 lsb: 0  msb: 0 OUTPUT
		NetFlow* DOUT; // net ID: DOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* DQSOUTN; // net ID: DQSOUTN lsb: 0  msb: 0 OUTPUT
		NetFlow* DQSOUTP; // net ID: DQSOUTP lsb: 0  msb: 0 OUTPUT
		NetFlow* SDO; // net ID: SDO lsb: 0  msb: 0 OUTPUT
		NetFlow* TOUT; // net ID: TOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* ADD; // net ID: ADD lsb: 0  msb: 0 INPUT
		NetFlow* AUXADDR; // net ID: AUXADDR lsb: 0  msb: 4 INPUT
		NetFlow* AUXSDOIN; // net ID: AUXSDOIN lsb: 0  msb: 0 INPUT
		NetFlow* BKST; // net ID: BKST lsb: 0  msb: 0 INPUT
		NetFlow* CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
		NetFlow* CS; // net ID: CS lsb: 0  msb: 0 INPUT
		NetFlow* IDATAIN; // net ID: IDATAIN lsb: 0  msb: 0 INPUT
		NetFlow* IOCLK0; // net ID: IOCLK0 lsb: 0  msb: 0 INPUT
		NetFlow* IOCLK1; // net ID: IOCLK1 lsb: 0  msb: 0 INPUT
		NetFlow* MEMUPDATE; // net ID: MEMUPDATE lsb: 0  msb: 0 INPUT
		NetFlow* ODATAIN; // net ID: ODATAIN lsb: 0  msb: 0 INPUT
		NetFlow* SDI; // net ID: SDI lsb: 0  msb: 0 INPUT
		NetFlow* T; // net ID: T lsb: 0  msb: 0 INPUT
		
		X_IODRP2_MCB(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t DATA_RATE, // Default: "SDR";       // "SDR", "DDR"
			parameter_string_t IDELAY_VALUE, // Default: 0
			parameter_string_t MCB_ADDRESS, // Default: 0
			parameter_string_t ODELAY_VALUE, // Default: 0
			parameter_string_t SERDES_MODE, // Default: "NONE";       // "NONE", "MASTER", "SLAVE"
			parameter_string_t SIM_TAPDELAY_VALUE, // Default: 75
			//Verilog Ports in definition order:
			NetFlow* AUXSDO, // net ID: AUXSDO lsb: 0  msb: 0 OUTPUT
			NetFlow* DATAOUT, // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* DATAOUT2, // net ID: DATAOUT2 lsb: 0  msb: 0 OUTPUT
			NetFlow* DOUT, // net ID: DOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* DQSOUTN, // net ID: DQSOUTN lsb: 0  msb: 0 OUTPUT
			NetFlow* DQSOUTP, // net ID: DQSOUTP lsb: 0  msb: 0 OUTPUT
			NetFlow* SDO, // net ID: SDO lsb: 0  msb: 0 OUTPUT
			NetFlow* TOUT, // net ID: TOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* ADD, // net ID: ADD lsb: 0  msb: 0 INPUT
			NetFlow* AUXADDR, // net ID: AUXADDR lsb: 0  msb: 4 INPUT
			NetFlow* AUXSDOIN, // net ID: AUXSDOIN lsb: 0  msb: 0 INPUT
			NetFlow* BKST, // net ID: BKST lsb: 0  msb: 0 INPUT
			NetFlow* CLK, // net ID: CLK lsb: 0  msb: 0 INPUT
			NetFlow* CS, // net ID: CS lsb: 0  msb: 0 INPUT
			NetFlow* IDATAIN, // net ID: IDATAIN lsb: 0  msb: 0 INPUT
			NetFlow* IOCLK0, // net ID: IOCLK0 lsb: 0  msb: 0 INPUT
			NetFlow* IOCLK1, // net ID: IOCLK1 lsb: 0  msb: 0 INPUT
			NetFlow* MEMUPDATE, // net ID: MEMUPDATE lsb: 0  msb: 0 INPUT
			NetFlow* ODATAIN, // net ID: ODATAIN lsb: 0  msb: 0 INPUT
			NetFlow* SDI, // net ID: SDI lsb: 0  msb: 0 INPUT
			NetFlow* T // net ID: T lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->DATA_RATE = DATA_RATE; // Default: "SDR";       // "SDR", "DDR"
			this->IDELAY_VALUE = IDELAY_VALUE; // Default: 0
			this->MCB_ADDRESS = MCB_ADDRESS; // Default: 0
			this->ODELAY_VALUE = ODELAY_VALUE; // Default: 0
			this->SERDES_MODE = SERDES_MODE; // Default: "NONE";       // "NONE", "MASTER", "SLAVE"
			this->SIM_TAPDELAY_VALUE = SIM_TAPDELAY_VALUE; // Default: 75
			//Verilog Ports in definition order:
			this->AUXSDO = AUXSDO; // net ID: AUXSDO lsb: 0  msb: 0 OUTPUT
			this->DATAOUT = DATAOUT; // net ID: DATAOUT lsb: 0  msb: 0 OUTPUT
			this->DATAOUT2 = DATAOUT2; // net ID: DATAOUT2 lsb: 0  msb: 0 OUTPUT
			this->DOUT = DOUT; // net ID: DOUT lsb: 0  msb: 0 OUTPUT
			this->DQSOUTN = DQSOUTN; // net ID: DQSOUTN lsb: 0  msb: 0 OUTPUT
			this->DQSOUTP = DQSOUTP; // net ID: DQSOUTP lsb: 0  msb: 0 OUTPUT
			this->SDO = SDO; // net ID: SDO lsb: 0  msb: 0 OUTPUT
			this->TOUT = TOUT; // net ID: TOUT lsb: 0  msb: 0 OUTPUT
			this->ADD = ADD; // net ID: ADD lsb: 0  msb: 0 INPUT
			this->AUXADDR = AUXADDR; // net ID: AUXADDR lsb: 0  msb: 4 INPUT
			this->AUXSDOIN = AUXSDOIN; // net ID: AUXSDOIN lsb: 0  msb: 0 INPUT
			this->BKST = BKST; // net ID: BKST lsb: 0  msb: 0 INPUT
			this->CLK = CLK; // net ID: CLK lsb: 0  msb: 0 INPUT
			this->CS = CS; // net ID: CS lsb: 0  msb: 0 INPUT
			this->IDATAIN = IDATAIN; // net ID: IDATAIN lsb: 0  msb: 0 INPUT
			this->IOCLK0 = IOCLK0; // net ID: IOCLK0 lsb: 0  msb: 0 INPUT
			this->IOCLK1 = IOCLK1; // net ID: IOCLK1 lsb: 0  msb: 0 INPUT
			this->MEMUPDATE = MEMUPDATE; // net ID: MEMUPDATE lsb: 0  msb: 0 INPUT
			this->ODATAIN = ODATAIN; // net ID: ODATAIN lsb: 0  msb: 0 INPUT
			this->SDI = SDI; // net ID: SDI lsb: 0  msb: 0 INPUT
			this->T = T; // net ID: T lsb: 0  msb: 0 INPUT
			
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
