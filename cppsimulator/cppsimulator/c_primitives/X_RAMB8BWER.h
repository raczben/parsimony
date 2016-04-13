/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_RAMB8BWER: public Primitive{

		//Verilog Parameters:
		parameter_string_t DATA_WIDTH_A;
		parameter_string_t DATA_WIDTH_B;
		parameter_string_t DOA_REG;
		parameter_string_t DOB_REG;
		parameter_enum_t EN_RSTRAM_A;
		parameter_enum_t EN_RSTRAM_B;
		parameter_string_t INITP_00;
		parameter_string_t INITP_01;
		parameter_string_t INITP_02;
		parameter_string_t INITP_03;
		parameter_string_t INIT_00;
		parameter_string_t INIT_01;
		parameter_string_t INIT_02;
		parameter_string_t INIT_03;
		parameter_string_t INIT_04;
		parameter_string_t INIT_05;
		parameter_string_t INIT_06;
		parameter_string_t INIT_07;
		parameter_string_t INIT_08;
		parameter_string_t INIT_09;
		parameter_string_t INIT_0A;
		parameter_string_t INIT_0B;
		parameter_string_t INIT_0C;
		parameter_string_t INIT_0D;
		parameter_string_t INIT_0E;
		parameter_string_t INIT_0F;
		parameter_string_t INIT_10;
		parameter_string_t INIT_11;
		parameter_string_t INIT_12;
		parameter_string_t INIT_13;
		parameter_string_t INIT_14;
		parameter_string_t INIT_15;
		parameter_string_t INIT_16;
		parameter_string_t INIT_17;
		parameter_string_t INIT_18;
		parameter_string_t INIT_19;
		parameter_string_t INIT_1A;
		parameter_string_t INIT_1B;
		parameter_string_t INIT_1C;
		parameter_string_t INIT_1D;
		parameter_string_t INIT_1E;
		parameter_string_t INIT_1F;
		parameter_string_t INIT_A;
		parameter_string_t INIT_B;
		parameter_string_t INIT_FILE;
		parameter_string_t LOC;
		parameter_string_t RAM_MODE;
		parameter_string_t RSTTYPE;
		parameter_string_t RST_PRIORITY_A;
		parameter_string_t RST_PRIORITY_B;
		parameter_string_t SETUP_ALL;
		parameter_string_t SETUP_READ_FIRST;
		parameter_string_t SIM_COLLISION_CHECK;
		parameter_string_t SRVAL_A;
		parameter_string_t SRVAL_B;
		parameter_string_t WRITE_MODE_A;
		parameter_string_t WRITE_MODE_B;
		//Verilog Ports in definition order:
		NetFlow* DOADO; // net ID: DOADO lsb: 0  msb: 0 OUTPUT
		NetFlow* DOBDO; // net ID: DOBDO lsb: 0  msb: 0 OUTPUT
		NetFlow* DOPADOP; // net ID: DOPADOP lsb: 0  msb: 0 OUTPUT
		NetFlow* DOPBDOP; // net ID: DOPBDOP lsb: 0  msb: 0 OUTPUT
		NetFlow* ADDRAWRADDR; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
		NetFlow* ADDRBRDADDR; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
		NetFlow* CLKAWRCLK; // net ID: CLKAWRCLK lsb: 0  msb: 0 INPUT
		NetFlow* CLKBRDCLK; // net ID: CLKBRDCLK lsb: 0  msb: 0 INPUT
		NetFlow* DIADI; // net ID: DIADI lsb: 0  msb: 15 INPUT
		NetFlow* DIBDI; // net ID: DIBDI lsb: 0  msb: 15 INPUT
		NetFlow* DIPADIP; // net ID: DIPADIP lsb: 0  msb: 1 INPUT
		NetFlow* DIPBDIP; // net ID: DIPBDIP lsb: 0  msb: 1 INPUT
		NetFlow* ENAWREN; // net ID: ENAWREN lsb: 0  msb: 0 INPUT
		NetFlow* ENBRDEN; // net ID: ENBRDEN lsb: 0  msb: 0 INPUT
		NetFlow* REGCEA; // net ID: REGCEA lsb: 0  msb: 0 INPUT
		NetFlow* REGCEBREGCE; // net ID: REGCEBREGCE lsb: 0  msb: 0 INPUT
		NetFlow* RSTA; // net ID: RSTA lsb: 0  msb: 0 INPUT
		NetFlow* RSTBRST; // net ID: RSTBRST lsb: 0  msb: 0 INPUT
		NetFlow* WEAWEL; // net ID: WEAWEL lsb: 0  msb: 1 INPUT
		NetFlow* WEBWEU; // net ID: WEBWEU lsb: 0  msb: 1 INPUT
		
		X_RAMB8BWER(
			const char * name,
			//Verilog Parameters:
			parameter_string_t DATA_WIDTH_A, // Default: 0
			parameter_string_t DATA_WIDTH_B, // Default: 0
			parameter_string_t DOA_REG, // Default: 0
			parameter_string_t DOB_REG, // Default: 0
			parameter_enum_t EN_RSTRAM_A, // Default: "TRUE"
			parameter_enum_t EN_RSTRAM_B, // Default: "TRUE"
			parameter_string_t INITP_00, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INITP_01, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INITP_02, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INITP_03, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_00, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_01, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_02, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_03, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_04, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_05, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_06, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_07, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_08, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_09, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_0A, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_0B, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_0C, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_0D, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_0E, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_0F, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_10, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_11, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_12, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_13, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_14, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_15, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_16, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_17, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_18, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_19, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_1A, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_1B, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_1C, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_1D, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_1E, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_1F, // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			parameter_string_t INIT_A, // Default: 18'h0
			parameter_string_t INIT_B, // Default: 18'h0
			parameter_string_t INIT_FILE, // Default: "NONE"
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t RAM_MODE, // Default: "TDP"
			parameter_string_t RSTTYPE, // Default: "SYNC"
			parameter_string_t RST_PRIORITY_A, // Default: "CE"
			parameter_string_t RST_PRIORITY_B, // Default: "CE"
			parameter_string_t SETUP_ALL, // Default: 1000
			parameter_string_t SETUP_READ_FIRST, // Default: 3000
			parameter_string_t SIM_COLLISION_CHECK, // Default: "ALL"
			parameter_string_t SRVAL_A, // Default: 18'h0
			parameter_string_t SRVAL_B, // Default: 18'h0
			parameter_string_t WRITE_MODE_A, // Default: "WRITE_FIRST"
			parameter_string_t WRITE_MODE_B, // Default: "WRITE_FIRST"
			//Verilog Ports in definition order:
			NetFlow* DOADO, // net ID: DOADO lsb: 0  msb: 0 OUTPUT
			NetFlow* DOBDO, // net ID: DOBDO lsb: 0  msb: 0 OUTPUT
			NetFlow* DOPADOP, // net ID: DOPADOP lsb: 0  msb: 0 OUTPUT
			NetFlow* DOPBDOP, // net ID: DOPBDOP lsb: 0  msb: 0 OUTPUT
			NetFlow* ADDRAWRADDR, // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			NetFlow* ADDRBRDADDR, // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			NetFlow* CLKAWRCLK, // net ID: CLKAWRCLK lsb: 0  msb: 0 INPUT
			NetFlow* CLKBRDCLK, // net ID: CLKBRDCLK lsb: 0  msb: 0 INPUT
			NetFlow* DIADI, // net ID: DIADI lsb: 0  msb: 15 INPUT
			NetFlow* DIBDI, // net ID: DIBDI lsb: 0  msb: 15 INPUT
			NetFlow* DIPADIP, // net ID: DIPADIP lsb: 0  msb: 1 INPUT
			NetFlow* DIPBDIP, // net ID: DIPBDIP lsb: 0  msb: 1 INPUT
			NetFlow* ENAWREN, // net ID: ENAWREN lsb: 0  msb: 0 INPUT
			NetFlow* ENBRDEN, // net ID: ENBRDEN lsb: 0  msb: 0 INPUT
			NetFlow* REGCEA, // net ID: REGCEA lsb: 0  msb: 0 INPUT
			NetFlow* REGCEBREGCE, // net ID: REGCEBREGCE lsb: 0  msb: 0 INPUT
			NetFlow* RSTA, // net ID: RSTA lsb: 0  msb: 0 INPUT
			NetFlow* RSTBRST, // net ID: RSTBRST lsb: 0  msb: 0 INPUT
			NetFlow* WEAWEL, // net ID: WEAWEL lsb: 0  msb: 1 INPUT
			NetFlow* WEBWEU // net ID: WEBWEU lsb: 0  msb: 1 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->DATA_WIDTH_A = DATA_WIDTH_A; // Default: 0
			this->DATA_WIDTH_B = DATA_WIDTH_B; // Default: 0
			this->DOA_REG = DOA_REG; // Default: 0
			this->DOB_REG = DOB_REG; // Default: 0
			this->EN_RSTRAM_A = EN_RSTRAM_A; // Default: "TRUE"
			this->EN_RSTRAM_B = EN_RSTRAM_B; // Default: "TRUE"
			this->INITP_00 = INITP_00; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_01 = INITP_01; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_02 = INITP_02; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INITP_03 = INITP_03; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_00 = INIT_00; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_01 = INIT_01; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_02 = INIT_02; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_03 = INIT_03; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_04 = INIT_04; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_05 = INIT_05; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_06 = INIT_06; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_07 = INIT_07; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_08 = INIT_08; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_09 = INIT_09; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_0A = INIT_0A; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_0B = INIT_0B; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_0C = INIT_0C; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_0D = INIT_0D; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_0E = INIT_0E; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_0F = INIT_0F; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_10 = INIT_10; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_11 = INIT_11; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_12 = INIT_12; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_13 = INIT_13; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_14 = INIT_14; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_15 = INIT_15; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_16 = INIT_16; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_17 = INIT_17; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_18 = INIT_18; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_19 = INIT_19; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_1A = INIT_1A; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_1B = INIT_1B; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_1C = INIT_1C; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_1D = INIT_1D; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_1E = INIT_1E; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_1F = INIT_1F; // Default: 256'h0000000000000000000000000000000000000000000000000000000000000000
			this->INIT_A = INIT_A; // Default: 18'h0
			this->INIT_B = INIT_B; // Default: 18'h0
			this->INIT_FILE = INIT_FILE; // Default: "NONE"
			this->LOC = LOC; // Default: "UNPLACED"
			this->RAM_MODE = RAM_MODE; // Default: "TDP"
			this->RSTTYPE = RSTTYPE; // Default: "SYNC"
			this->RST_PRIORITY_A = RST_PRIORITY_A; // Default: "CE"
			this->RST_PRIORITY_B = RST_PRIORITY_B; // Default: "CE"
			this->SETUP_ALL = SETUP_ALL; // Default: 1000
			this->SETUP_READ_FIRST = SETUP_READ_FIRST; // Default: 3000
			this->SIM_COLLISION_CHECK = SIM_COLLISION_CHECK; // Default: "ALL"
			this->SRVAL_A = SRVAL_A; // Default: 18'h0
			this->SRVAL_B = SRVAL_B; // Default: 18'h0
			this->WRITE_MODE_A = WRITE_MODE_A; // Default: "WRITE_FIRST"
			this->WRITE_MODE_B = WRITE_MODE_B; // Default: "WRITE_FIRST"
			//Verilog Ports in definition order:
			this->DOADO = DOADO; // net ID: DOADO lsb: 0  msb: 0 OUTPUT
			this->DOBDO = DOBDO; // net ID: DOBDO lsb: 0  msb: 0 OUTPUT
			this->DOPADOP = DOPADOP; // net ID: DOPADOP lsb: 0  msb: 0 OUTPUT
			this->DOPBDOP = DOPBDOP; // net ID: DOPBDOP lsb: 0  msb: 0 OUTPUT
			this->ADDRAWRADDR = ADDRAWRADDR; // net ID: ADDRAWRADDR lsb: 0  msb: 12 INPUT
			this->ADDRBRDADDR = ADDRBRDADDR; // net ID: ADDRBRDADDR lsb: 0  msb: 12 INPUT
			this->CLKAWRCLK = CLKAWRCLK; // net ID: CLKAWRCLK lsb: 0  msb: 0 INPUT
			this->CLKBRDCLK = CLKBRDCLK; // net ID: CLKBRDCLK lsb: 0  msb: 0 INPUT
			this->DIADI = DIADI; // net ID: DIADI lsb: 0  msb: 15 INPUT
			this->DIBDI = DIBDI; // net ID: DIBDI lsb: 0  msb: 15 INPUT
			this->DIPADIP = DIPADIP; // net ID: DIPADIP lsb: 0  msb: 1 INPUT
			this->DIPBDIP = DIPBDIP; // net ID: DIPBDIP lsb: 0  msb: 1 INPUT
			this->ENAWREN = ENAWREN; // net ID: ENAWREN lsb: 0  msb: 0 INPUT
			this->ENBRDEN = ENBRDEN; // net ID: ENBRDEN lsb: 0  msb: 0 INPUT
			this->REGCEA = REGCEA; // net ID: REGCEA lsb: 0  msb: 0 INPUT
			this->REGCEBREGCE = REGCEBREGCE; // net ID: REGCEBREGCE lsb: 0  msb: 0 INPUT
			this->RSTA = RSTA; // net ID: RSTA lsb: 0  msb: 0 INPUT
			this->RSTBRST = RSTBRST; // net ID: RSTBRST lsb: 0  msb: 0 INPUT
			this->WEAWEL = WEAWEL; // net ID: WEAWEL lsb: 0  msb: 1 INPUT
			this->WEBWEU = WEBWEU; // net ID: WEBWEU lsb: 0  msb: 1 INPUT
			
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
