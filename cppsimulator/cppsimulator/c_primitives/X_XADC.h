/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_XADC: public Primitive{

		//Verilog Parameters:
		parameter_string_t INIT_40;
		parameter_string_t INIT_41;
		parameter_string_t INIT_42;
		parameter_string_t INIT_43;
		parameter_string_t INIT_44;
		parameter_string_t INIT_45;
		parameter_string_t INIT_46;
		parameter_string_t INIT_47;
		parameter_string_t INIT_48;
		parameter_string_t INIT_49;
		parameter_string_t INIT_4A;
		parameter_string_t INIT_4B;
		parameter_string_t INIT_4C;
		parameter_string_t INIT_4D;
		parameter_string_t INIT_4E;
		parameter_string_t INIT_4F;
		parameter_string_t INIT_50;
		parameter_string_t INIT_51;
		parameter_string_t INIT_52;
		parameter_string_t INIT_53;
		parameter_string_t INIT_54;
		parameter_string_t INIT_55;
		parameter_string_t INIT_56;
		parameter_string_t INIT_57;
		parameter_string_t INIT_58;
		parameter_string_t INIT_59;
		parameter_string_t INIT_5A;
		parameter_string_t INIT_5B;
		parameter_string_t INIT_5C;
		parameter_string_t INIT_5D;
		parameter_string_t INIT_5E;
		parameter_string_t INIT_5F;
		parameter_string_t SIM_DEVICE;
		parameter_string_t SIM_MONITOR_FILE;
		parameter_string_t LOC;
		//Verilog Ports in definition order:
		NetFlow* ALM; // net ID: ALM lsb: 0  msb: 0 OUTPUT
		NetFlow* BUSY; // net ID: BUSY lsb: 0  msb: 0 OUTPUT
		NetFlow* CHANNEL; // net ID: CHANNEL lsb: 0  msb: 0 OUTPUT
		NetFlow* DO; // net ID: DO lsb: 0  msb: 0 OUTPUT
		NetFlow* DRDY; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* EOC; // net ID: EOC lsb: 0  msb: 0 OUTPUT
		NetFlow* EOS; // net ID: EOS lsb: 0  msb: 0 OUTPUT
		NetFlow* JTAGBUSY; // net ID: JTAGBUSY lsb: 0  msb: 0 OUTPUT
		NetFlow* JTAGLOCKED; // net ID: JTAGLOCKED lsb: 0  msb: 0 OUTPUT
		NetFlow* JTAGMODIFIED; // net ID: JTAGMODIFIED lsb: 0  msb: 0 OUTPUT
		NetFlow* MUXADDR; // net ID: MUXADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* OT; // net ID: OT lsb: 0  msb: 0 OUTPUT
		NetFlow* CONVST; // net ID: CONVST lsb: 0  msb: 0 INPUT
		NetFlow* CONVSTCLK; // net ID: CONVSTCLK lsb: 0  msb: 0 INPUT
		NetFlow* DADDR; // net ID: DADDR lsb: 0  msb: 6 INPUT
		NetFlow* DCLK; // net ID: DCLK lsb: 0  msb: 0 INPUT
		NetFlow* DEN; // net ID: DEN lsb: 0  msb: 0 INPUT
		NetFlow* DI; // net ID: DI lsb: 0  msb: 15 INPUT
		NetFlow* DWE; // net ID: DWE lsb: 0  msb: 0 INPUT
		NetFlow* RESET; // net ID: RESET lsb: 0  msb: 0 INPUT
		NetFlow* VAUXN; // net ID: VAUXN lsb: 0  msb: 15 INPUT
		NetFlow* VAUXP; // net ID: VAUXP lsb: 0  msb: 15 INPUT
		NetFlow* VN; // net ID: VN lsb: 0  msb: 0 INPUT
		NetFlow* VP; // net ID: VP lsb: 0  msb: 0 INPUT
		
		X_XADC(
			const char * name,
			//Verilog Parameters:
			parameter_string_t INIT_40, // Default: 16'h0
			parameter_string_t INIT_41, // Default: 16'h0
			parameter_string_t INIT_42, // Default: 16'h0800
			parameter_string_t INIT_43, // Default: 16'h0
			parameter_string_t INIT_44, // Default: 16'h0
			parameter_string_t INIT_45, // Default: 16'h0
			parameter_string_t INIT_46, // Default: 16'h0
			parameter_string_t INIT_47, // Default: 16'h0
			parameter_string_t INIT_48, // Default: 16'h0
			parameter_string_t INIT_49, // Default: 16'h0
			parameter_string_t INIT_4A, // Default: 16'h0
			parameter_string_t INIT_4B, // Default: 16'h0
			parameter_string_t INIT_4C, // Default: 16'h0
			parameter_string_t INIT_4D, // Default: 16'h0
			parameter_string_t INIT_4E, // Default: 16'h0
			parameter_string_t INIT_4F, // Default: 16'h0
			parameter_string_t INIT_50, // Default: 16'h0
			parameter_string_t INIT_51, // Default: 16'h0
			parameter_string_t INIT_52, // Default: 16'h0
			parameter_string_t INIT_53, // Default: 16'h0
			parameter_string_t INIT_54, // Default: 16'h0
			parameter_string_t INIT_55, // Default: 16'h0
			parameter_string_t INIT_56, // Default: 16'h0
			parameter_string_t INIT_57, // Default: 16'h0
			parameter_string_t INIT_58, // Default: 16'h0
			parameter_string_t INIT_59, // Default: 16'h0
			parameter_string_t INIT_5A, // Default: 16'h0
			parameter_string_t INIT_5B, // Default: 16'h0
			parameter_string_t INIT_5C, // Default: 16'h0
			parameter_string_t INIT_5D, // Default: 16'h0
			parameter_string_t INIT_5E, // Default: 16'h0
			parameter_string_t INIT_5F, // Default: 16'h0
			parameter_string_t SIM_DEVICE, // Default: "7SERIES"
			parameter_string_t SIM_MONITOR_FILE, // Default: "design.txt"
			parameter_string_t LOC, // Default: "UNPLACED"
			//Verilog Ports in definition order:
			NetFlow* ALM, // net ID: ALM lsb: 0  msb: 0 OUTPUT
			NetFlow* BUSY, // net ID: BUSY lsb: 0  msb: 0 OUTPUT
			NetFlow* CHANNEL, // net ID: CHANNEL lsb: 0  msb: 0 OUTPUT
			NetFlow* DO, // net ID: DO lsb: 0  msb: 0 OUTPUT
			NetFlow* DRDY, // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* EOC, // net ID: EOC lsb: 0  msb: 0 OUTPUT
			NetFlow* EOS, // net ID: EOS lsb: 0  msb: 0 OUTPUT
			NetFlow* JTAGBUSY, // net ID: JTAGBUSY lsb: 0  msb: 0 OUTPUT
			NetFlow* JTAGLOCKED, // net ID: JTAGLOCKED lsb: 0  msb: 0 OUTPUT
			NetFlow* JTAGMODIFIED, // net ID: JTAGMODIFIED lsb: 0  msb: 0 OUTPUT
			NetFlow* MUXADDR, // net ID: MUXADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* OT, // net ID: OT lsb: 0  msb: 0 OUTPUT
			NetFlow* CONVST, // net ID: CONVST lsb: 0  msb: 0 INPUT
			NetFlow* CONVSTCLK, // net ID: CONVSTCLK lsb: 0  msb: 0 INPUT
			NetFlow* DADDR, // net ID: DADDR lsb: 0  msb: 6 INPUT
			NetFlow* DCLK, // net ID: DCLK lsb: 0  msb: 0 INPUT
			NetFlow* DEN, // net ID: DEN lsb: 0  msb: 0 INPUT
			NetFlow* DI, // net ID: DI lsb: 0  msb: 15 INPUT
			NetFlow* DWE, // net ID: DWE lsb: 0  msb: 0 INPUT
			NetFlow* RESET, // net ID: RESET lsb: 0  msb: 0 INPUT
			NetFlow* VAUXN, // net ID: VAUXN lsb: 0  msb: 15 INPUT
			NetFlow* VAUXP, // net ID: VAUXP lsb: 0  msb: 15 INPUT
			NetFlow* VN, // net ID: VN lsb: 0  msb: 0 INPUT
			NetFlow* VP // net ID: VP lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->INIT_40 = INIT_40; // Default: 16'h0
			this->INIT_41 = INIT_41; // Default: 16'h0
			this->INIT_42 = INIT_42; // Default: 16'h0800
			this->INIT_43 = INIT_43; // Default: 16'h0
			this->INIT_44 = INIT_44; // Default: 16'h0
			this->INIT_45 = INIT_45; // Default: 16'h0
			this->INIT_46 = INIT_46; // Default: 16'h0
			this->INIT_47 = INIT_47; // Default: 16'h0
			this->INIT_48 = INIT_48; // Default: 16'h0
			this->INIT_49 = INIT_49; // Default: 16'h0
			this->INIT_4A = INIT_4A; // Default: 16'h0
			this->INIT_4B = INIT_4B; // Default: 16'h0
			this->INIT_4C = INIT_4C; // Default: 16'h0
			this->INIT_4D = INIT_4D; // Default: 16'h0
			this->INIT_4E = INIT_4E; // Default: 16'h0
			this->INIT_4F = INIT_4F; // Default: 16'h0
			this->INIT_50 = INIT_50; // Default: 16'h0
			this->INIT_51 = INIT_51; // Default: 16'h0
			this->INIT_52 = INIT_52; // Default: 16'h0
			this->INIT_53 = INIT_53; // Default: 16'h0
			this->INIT_54 = INIT_54; // Default: 16'h0
			this->INIT_55 = INIT_55; // Default: 16'h0
			this->INIT_56 = INIT_56; // Default: 16'h0
			this->INIT_57 = INIT_57; // Default: 16'h0
			this->INIT_58 = INIT_58; // Default: 16'h0
			this->INIT_59 = INIT_59; // Default: 16'h0
			this->INIT_5A = INIT_5A; // Default: 16'h0
			this->INIT_5B = INIT_5B; // Default: 16'h0
			this->INIT_5C = INIT_5C; // Default: 16'h0
			this->INIT_5D = INIT_5D; // Default: 16'h0
			this->INIT_5E = INIT_5E; // Default: 16'h0
			this->INIT_5F = INIT_5F; // Default: 16'h0
			this->SIM_DEVICE = SIM_DEVICE; // Default: "7SERIES"
			this->SIM_MONITOR_FILE = SIM_MONITOR_FILE; // Default: "design.txt"
			this->LOC = LOC; // Default: "UNPLACED"
			//Verilog Ports in definition order:
			this->ALM = ALM; // net ID: ALM lsb: 0  msb: 0 OUTPUT
			this->BUSY = BUSY; // net ID: BUSY lsb: 0  msb: 0 OUTPUT
			this->CHANNEL = CHANNEL; // net ID: CHANNEL lsb: 0  msb: 0 OUTPUT
			this->DO = DO; // net ID: DO lsb: 0  msb: 0 OUTPUT
			this->DRDY = DRDY; // net ID: DRDY lsb: 0  msb: 0 OUTPUT
			this->EOC = EOC; // net ID: EOC lsb: 0  msb: 0 OUTPUT
			this->EOS = EOS; // net ID: EOS lsb: 0  msb: 0 OUTPUT
			this->JTAGBUSY = JTAGBUSY; // net ID: JTAGBUSY lsb: 0  msb: 0 OUTPUT
			this->JTAGLOCKED = JTAGLOCKED; // net ID: JTAGLOCKED lsb: 0  msb: 0 OUTPUT
			this->JTAGMODIFIED = JTAGMODIFIED; // net ID: JTAGMODIFIED lsb: 0  msb: 0 OUTPUT
			this->MUXADDR = MUXADDR; // net ID: MUXADDR lsb: 0  msb: 0 OUTPUT
			this->OT = OT; // net ID: OT lsb: 0  msb: 0 OUTPUT
			this->CONVST = CONVST; // net ID: CONVST lsb: 0  msb: 0 INPUT
			this->CONVSTCLK = CONVSTCLK; // net ID: CONVSTCLK lsb: 0  msb: 0 INPUT
			this->DADDR = DADDR; // net ID: DADDR lsb: 0  msb: 6 INPUT
			this->DCLK = DCLK; // net ID: DCLK lsb: 0  msb: 0 INPUT
			this->DEN = DEN; // net ID: DEN lsb: 0  msb: 0 INPUT
			this->DI = DI; // net ID: DI lsb: 0  msb: 15 INPUT
			this->DWE = DWE; // net ID: DWE lsb: 0  msb: 0 INPUT
			this->RESET = RESET; // net ID: RESET lsb: 0  msb: 0 INPUT
			this->VAUXN = VAUXN; // net ID: VAUXN lsb: 0  msb: 15 INPUT
			this->VAUXP = VAUXP; // net ID: VAUXP lsb: 0  msb: 15 INPUT
			this->VN = VN; // net ID: VN lsb: 0  msb: 0 INPUT
			this->VP = VP; // net ID: VP lsb: 0  msb: 0 INPUT
			
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
