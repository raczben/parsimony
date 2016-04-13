/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_FIFO36E1: public Primitive{

		//Verilog Parameters:
		parameter_string_t ALMOST_EMPTY_OFFSET;
		parameter_string_t ALMOST_FULL_OFFSET;
		parameter_string_t DATA_WIDTH;
		parameter_string_t DO_REG;
		parameter_enum_t EN_ECC_READ;
		parameter_enum_t EN_ECC_WRITE;
		parameter_enum_t EN_SYN;
		parameter_string_t FIFO_MODE;
		parameter_enum_t FIRST_WORD_FALL_THROUGH;
		parameter_string_t INIT;
		parameter_string_t LOC;
		parameter_string_t SIM_DEVICE;
		parameter_string_t SRVAL;
		//Verilog Ports in definition order:
		NetFlow* ALMOSTEMPTY; // net ID: ALMOSTEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* ALMOSTFULL; // net ID: ALMOSTFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* DBITERR; // net ID: DBITERR lsb: 0  msb: 0 OUTPUT
		NetFlow* DO; // net ID: DO lsb: 0  msb: 0 OUTPUT
		NetFlow* DOP; // net ID: DOP lsb: 0  msb: 0 OUTPUT
		NetFlow* ECCPARITY; // net ID: ECCPARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* EMPTY; // net ID: EMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* FULL; // net ID: FULL lsb: 0  msb: 0 OUTPUT
		NetFlow* RDCOUNT; // net ID: RDCOUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* RDERR; // net ID: RDERR lsb: 0  msb: 0 OUTPUT
		NetFlow* SBITERR; // net ID: SBITERR lsb: 0  msb: 0 OUTPUT
		NetFlow* WRCOUNT; // net ID: WRCOUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* WRERR; // net ID: WRERR lsb: 0  msb: 0 OUTPUT
		NetFlow* DI; // net ID: DI lsb: 0  msb: 63 INPUT
		NetFlow* DIP; // net ID: DIP lsb: 0  msb: 7 INPUT
		NetFlow* INJECTDBITERR; // net ID: INJECTDBITERR lsb: 0  msb: 0 INPUT
		NetFlow* INJECTSBITERR; // net ID: INJECTSBITERR lsb: 0  msb: 0 INPUT
		NetFlow* RDCLK; // net ID: RDCLK lsb: 0  msb: 0 INPUT
		NetFlow* RDEN; // net ID: RDEN lsb: 0  msb: 0 INPUT
		NetFlow* REGCE; // net ID: REGCE lsb: 0  msb: 0 INPUT
		NetFlow* RST; // net ID: RST lsb: 0  msb: 0 INPUT
		NetFlow* RSTREG; // net ID: RSTREG lsb: 0  msb: 0 INPUT
		NetFlow* WRCLK; // net ID: WRCLK lsb: 0  msb: 0 INPUT
		NetFlow* WREN; // net ID: WREN lsb: 0  msb: 0 INPUT
		
		X_FIFO36E1(
			const char * name,
			//Verilog Parameters:
			parameter_string_t ALMOST_EMPTY_OFFSET, // Default: 13'h0080
			parameter_string_t ALMOST_FULL_OFFSET, // Default: 13'h0080
			parameter_string_t DATA_WIDTH, // Default: 4
			parameter_string_t DO_REG, // Default: 1
			parameter_enum_t EN_ECC_READ, // Default: "FALSE"
			parameter_enum_t EN_ECC_WRITE, // Default: "FALSE"
			parameter_enum_t EN_SYN, // Default: "FALSE"
			parameter_string_t FIFO_MODE, // Default: "FIFO36"
			parameter_enum_t FIRST_WORD_FALL_THROUGH, // Default: "FALSE"
			parameter_string_t INIT, // Default: 72'h0
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t SIM_DEVICE, // Default: "VIRTEX6"
			parameter_string_t SRVAL, // Default: 72'h0
			//Verilog Ports in definition order:
			NetFlow* ALMOSTEMPTY, // net ID: ALMOSTEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* ALMOSTFULL, // net ID: ALMOSTFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* DBITERR, // net ID: DBITERR lsb: 0  msb: 0 OUTPUT
			NetFlow* DO, // net ID: DO lsb: 0  msb: 0 OUTPUT
			NetFlow* DOP, // net ID: DOP lsb: 0  msb: 0 OUTPUT
			NetFlow* ECCPARITY, // net ID: ECCPARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* EMPTY, // net ID: EMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* FULL, // net ID: FULL lsb: 0  msb: 0 OUTPUT
			NetFlow* RDCOUNT, // net ID: RDCOUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* RDERR, // net ID: RDERR lsb: 0  msb: 0 OUTPUT
			NetFlow* SBITERR, // net ID: SBITERR lsb: 0  msb: 0 OUTPUT
			NetFlow* WRCOUNT, // net ID: WRCOUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* WRERR, // net ID: WRERR lsb: 0  msb: 0 OUTPUT
			NetFlow* DI, // net ID: DI lsb: 0  msb: 63 INPUT
			NetFlow* DIP, // net ID: DIP lsb: 0  msb: 7 INPUT
			NetFlow* INJECTDBITERR, // net ID: INJECTDBITERR lsb: 0  msb: 0 INPUT
			NetFlow* INJECTSBITERR, // net ID: INJECTSBITERR lsb: 0  msb: 0 INPUT
			NetFlow* RDCLK, // net ID: RDCLK lsb: 0  msb: 0 INPUT
			NetFlow* RDEN, // net ID: RDEN lsb: 0  msb: 0 INPUT
			NetFlow* REGCE, // net ID: REGCE lsb: 0  msb: 0 INPUT
			NetFlow* RST, // net ID: RST lsb: 0  msb: 0 INPUT
			NetFlow* RSTREG, // net ID: RSTREG lsb: 0  msb: 0 INPUT
			NetFlow* WRCLK, // net ID: WRCLK lsb: 0  msb: 0 INPUT
			NetFlow* WREN // net ID: WREN lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->ALMOST_EMPTY_OFFSET = ALMOST_EMPTY_OFFSET; // Default: 13'h0080
			this->ALMOST_FULL_OFFSET = ALMOST_FULL_OFFSET; // Default: 13'h0080
			this->DATA_WIDTH = DATA_WIDTH; // Default: 4
			this->DO_REG = DO_REG; // Default: 1
			this->EN_ECC_READ = EN_ECC_READ; // Default: "FALSE"
			this->EN_ECC_WRITE = EN_ECC_WRITE; // Default: "FALSE"
			this->EN_SYN = EN_SYN; // Default: "FALSE"
			this->FIFO_MODE = FIFO_MODE; // Default: "FIFO36"
			this->FIRST_WORD_FALL_THROUGH = FIRST_WORD_FALL_THROUGH; // Default: "FALSE"
			this->INIT = INIT; // Default: 72'h0
			this->LOC = LOC; // Default: "UNPLACED"
			this->SIM_DEVICE = SIM_DEVICE; // Default: "VIRTEX6"
			this->SRVAL = SRVAL; // Default: 72'h0
			//Verilog Ports in definition order:
			this->ALMOSTEMPTY = ALMOSTEMPTY; // net ID: ALMOSTEMPTY lsb: 0  msb: 0 OUTPUT
			this->ALMOSTFULL = ALMOSTFULL; // net ID: ALMOSTFULL lsb: 0  msb: 0 OUTPUT
			this->DBITERR = DBITERR; // net ID: DBITERR lsb: 0  msb: 0 OUTPUT
			this->DO = DO; // net ID: DO lsb: 0  msb: 0 OUTPUT
			this->DOP = DOP; // net ID: DOP lsb: 0  msb: 0 OUTPUT
			this->ECCPARITY = ECCPARITY; // net ID: ECCPARITY lsb: 0  msb: 0 OUTPUT
			this->EMPTY = EMPTY; // net ID: EMPTY lsb: 0  msb: 0 OUTPUT
			this->FULL = FULL; // net ID: FULL lsb: 0  msb: 0 OUTPUT
			this->RDCOUNT = RDCOUNT; // net ID: RDCOUNT lsb: 0  msb: 0 OUTPUT
			this->RDERR = RDERR; // net ID: RDERR lsb: 0  msb: 0 OUTPUT
			this->SBITERR = SBITERR; // net ID: SBITERR lsb: 0  msb: 0 OUTPUT
			this->WRCOUNT = WRCOUNT; // net ID: WRCOUNT lsb: 0  msb: 0 OUTPUT
			this->WRERR = WRERR; // net ID: WRERR lsb: 0  msb: 0 OUTPUT
			this->DI = DI; // net ID: DI lsb: 0  msb: 63 INPUT
			this->DIP = DIP; // net ID: DIP lsb: 0  msb: 7 INPUT
			this->INJECTDBITERR = INJECTDBITERR; // net ID: INJECTDBITERR lsb: 0  msb: 0 INPUT
			this->INJECTSBITERR = INJECTSBITERR; // net ID: INJECTSBITERR lsb: 0  msb: 0 INPUT
			this->RDCLK = RDCLK; // net ID: RDCLK lsb: 0  msb: 0 INPUT
			this->RDEN = RDEN; // net ID: RDEN lsb: 0  msb: 0 INPUT
			this->REGCE = REGCE; // net ID: REGCE lsb: 0  msb: 0 INPUT
			this->RST = RST; // net ID: RST lsb: 0  msb: 0 INPUT
			this->RSTREG = RSTREG; // net ID: RSTREG lsb: 0  msb: 0 INPUT
			this->WRCLK = WRCLK; // net ID: WRCLK lsb: 0  msb: 0 INPUT
			this->WREN = WREN; // net ID: WREN lsb: 0  msb: 0 INPUT
			
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
