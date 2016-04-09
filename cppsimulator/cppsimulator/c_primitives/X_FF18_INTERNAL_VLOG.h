/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_FF18_INTERNAL_VLOG{

		//Verilog Parameters:
		parameter_int_t DATA_WIDTH;
		parameter_int_t DO_REG;
		parameter_enum_t EN_SYN;
		parameter_string_t FIFO_MODE;
		parameter_enum_t FIRST_WORD_FALL_THROUGH;
		parameter_int_t ALMOST_EMPTY_OFFSET;
		parameter_int_t ALMOST_FULL_OFFSET;
		parameter_enum_t EN_ECC_WRITE;
		parameter_enum_t EN_ECC_READ;
		parameter_int_t INIT;
		parameter_string_t SIM_DEVICE;
		parameter_int_t SRVAL;
		parameter_int_t FIFO_SIZE;
		//Verilog Ports in definition order:
		NetFlow* ALMOSTEMPTY; // OUTPUT
		NetFlow* ALMOSTFULL; // OUTPUT
		NetFlow* DBITERR; // OUTPUT
		NetFlow* DO; // OUTPUT
		NetFlow* DOP; // OUTPUT
		NetFlow* ECCPARITY; // OUTPUT
		NetFlow* EMPTY; // OUTPUT
		NetFlow* FULL; // OUTPUT
		NetFlow* RDCOUNT; // OUTPUT
		NetFlow* RDERR; // OUTPUT
		NetFlow* SBITERR; // OUTPUT
		NetFlow* WRCOUNT; // OUTPUT
		NetFlow* WRERR; // OUTPUT
		NetFlow* DI; // INPUT
		NetFlow* DIP; // INPUT
		NetFlow* GSR; // INPUT
		NetFlow* INJECTDBITERR; // INPUT
		NetFlow* INJECTSBITERR; // INPUT
		NetFlow* RDCLK; // INPUT
		NetFlow* RDEN; // INPUT
		NetFlow* REGCE; // INPUT
		NetFlow* RST; // INPUT
		NetFlow* RSTREG; // INPUT
		NetFlow* WRCLK; // INPUT
		NetFlow* WREN; // INPUT
		
	
		X_FF18_INTERNAL_VLOG(
			//Verilog Parameters:
			parameter_int_t DATA_WIDTH, // Default: 4
			parameter_int_t DO_REG, // Default: 1
			parameter_enum_t EN_SYN, // Default: "FALSE"
			parameter_string_t FIFO_MODE, // Default: "FIFO36"
			parameter_enum_t FIRST_WORD_FALL_THROUGH, // Default: "FALSE"
			parameter_int_t ALMOST_EMPTY_OFFSET, // Default: 13'h0080
			parameter_int_t ALMOST_FULL_OFFSET, // Default: 13'h0080
			parameter_enum_t EN_ECC_WRITE, // Default: "FALSE"
			parameter_enum_t EN_ECC_READ, // Default: "FALSE"
			parameter_int_t INIT, // Default: 72'h0
			parameter_string_t SIM_DEVICE, // Default: "VIRTEX6"
			parameter_int_t SRVAL, // Default: 72'h0
			parameter_int_t FIFO_SIZE, // Default: 36
			//Verilog Ports in definition order:
			NetFlow* ALMOSTEMPTY, // OUTPUT
			NetFlow* ALMOSTFULL, // OUTPUT
			NetFlow* DBITERR, // OUTPUT
			NetFlow* DO, // OUTPUT
			NetFlow* DOP, // OUTPUT
			NetFlow* ECCPARITY, // OUTPUT
			NetFlow* EMPTY, // OUTPUT
			NetFlow* FULL, // OUTPUT
			NetFlow* RDCOUNT, // OUTPUT
			NetFlow* RDERR, // OUTPUT
			NetFlow* SBITERR, // OUTPUT
			NetFlow* WRCOUNT, // OUTPUT
			NetFlow* WRERR, // OUTPUT
			NetFlow* DI, // INPUT
			NetFlow* DIP, // INPUT
			NetFlow* GSR, // INPUT
			NetFlow* INJECTDBITERR, // INPUT
			NetFlow* INJECTSBITERR, // INPUT
			NetFlow* RDCLK, // INPUT
			NetFlow* RDEN, // INPUT
			NetFlow* REGCE, // INPUT
			NetFlow* RST, // INPUT
			NetFlow* RSTREG, // INPUT
			NetFlow* WRCLK, // INPUT
			NetFlow* WREN // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DATA_WIDTH = DATA_WIDTH; // Default: 4
			this->DO_REG = DO_REG; // Default: 1
			this->EN_SYN = EN_SYN; // Default: "FALSE"
			this->FIFO_MODE = FIFO_MODE; // Default: "FIFO36"
			this->FIRST_WORD_FALL_THROUGH = FIRST_WORD_FALL_THROUGH; // Default: "FALSE"
			this->ALMOST_EMPTY_OFFSET = ALMOST_EMPTY_OFFSET; // Default: 13'h0080
			this->ALMOST_FULL_OFFSET = ALMOST_FULL_OFFSET; // Default: 13'h0080
			this->EN_ECC_WRITE = EN_ECC_WRITE; // Default: "FALSE"
			this->EN_ECC_READ = EN_ECC_READ; // Default: "FALSE"
			this->INIT = INIT; // Default: 72'h0
			this->SIM_DEVICE = SIM_DEVICE; // Default: "VIRTEX6"
			this->SRVAL = SRVAL; // Default: 72'h0
			this->FIFO_SIZE = FIFO_SIZE; // Default: 36
			//Verilog Ports in definition order:
			this->ALMOSTEMPTY = ALMOSTEMPTY; // OUTPUT
			this->ALMOSTFULL = ALMOSTFULL; // OUTPUT
			this->DBITERR = DBITERR; // OUTPUT
			this->DO = DO; // OUTPUT
			this->DOP = DOP; // OUTPUT
			this->ECCPARITY = ECCPARITY; // OUTPUT
			this->EMPTY = EMPTY; // OUTPUT
			this->FULL = FULL; // OUTPUT
			this->RDCOUNT = RDCOUNT; // OUTPUT
			this->RDERR = RDERR; // OUTPUT
			this->SBITERR = SBITERR; // OUTPUT
			this->WRCOUNT = WRCOUNT; // OUTPUT
			this->WRERR = WRERR; // OUTPUT
			this->DI = DI; // INPUT
			this->DIP = DIP; // INPUT
			this->GSR = GSR; // INPUT
			this->INJECTDBITERR = INJECTDBITERR; // INPUT
			this->INJECTSBITERR = INJECTSBITERR; // INPUT
			this->RDCLK = RDCLK; // INPUT
			this->RDEN = RDEN; // INPUT
			this->REGCE = REGCE; // INPUT
			this->RST = RST; // INPUT
			this->RSTREG = RSTREG; // INPUT
			this->WRCLK = WRCLK; // INPUT
			this->WREN = WREN; // INPUT
		
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
