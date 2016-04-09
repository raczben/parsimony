/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_MCB{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_int_t ARB_NUM_TIME_SLOTS;
		parameter_int_t ARB_TIME_SLOT_0;
		parameter_int_t ARB_TIME_SLOT_1;
		parameter_int_t ARB_TIME_SLOT_10;
		parameter_int_t ARB_TIME_SLOT_11;
		parameter_int_t ARB_TIME_SLOT_2;
		parameter_int_t ARB_TIME_SLOT_3;
		parameter_int_t ARB_TIME_SLOT_4;
		parameter_int_t ARB_TIME_SLOT_5;
		parameter_int_t ARB_TIME_SLOT_6;
		parameter_int_t ARB_TIME_SLOT_7;
		parameter_int_t ARB_TIME_SLOT_8;
		parameter_int_t ARB_TIME_SLOT_9;
		parameter_int_t CAL_BA;
		parameter_string_t CAL_BYPASS;
		parameter_int_t CAL_CA;
		parameter_string_t CAL_CALIBRATION_MODE;
		parameter_int_t CAL_CLK_DIV;
		parameter_string_t CAL_DELAY;
		parameter_int_t CAL_RA;
		parameter_string_t MEM_ADDR_ORDER;
		parameter_int_t MEM_BA_SIZE;
		parameter_int_t MEM_BURST_LEN;
		parameter_int_t MEM_CAS_LATENCY;
		parameter_int_t MEM_CA_SIZE;
		parameter_string_t MEM_DDR1_2_ODS;
		parameter_string_t MEM_DDR2_3_HIGH_TEMP_SR;
		parameter_string_t MEM_DDR2_3_PA_SR;
		parameter_int_t MEM_DDR2_ADD_LATENCY;
		parameter_string_t MEM_DDR2_DIFF_DQS_EN;
		parameter_string_t MEM_DDR2_RTT;
		parameter_int_t MEM_DDR2_WRT_RECOVERY;
		parameter_string_t MEM_DDR3_ADD_LATENCY;
		parameter_string_t MEM_DDR3_AUTO_SR;
		parameter_int_t MEM_DDR3_CAS_LATENCY;
		parameter_int_t MEM_DDR3_CAS_WR_LATENCY;
		parameter_string_t MEM_DDR3_DYN_WRT_ODT;
		parameter_string_t MEM_DDR3_ODS;
		parameter_string_t MEM_DDR3_RTT;
		parameter_int_t MEM_DDR3_WRT_RECOVERY;
		parameter_string_t MEM_MDDR_ODS;
		parameter_string_t MEM_MOBILE_PA_SR;
		parameter_int_t MEM_MOBILE_TC_SR;
		parameter_int_t MEM_RAS_VAL;
		parameter_int_t MEM_RA_SIZE;
		parameter_int_t MEM_RCD_VAL;
		parameter_int_t MEM_REFI_VAL;
		parameter_int_t MEM_RFC_VAL;
		parameter_int_t MEM_RP_VAL;
		parameter_int_t MEM_RTP_VAL;
		parameter_string_t MEM_TYPE;
		parameter_int_t MEM_WIDTH;
		parameter_int_t MEM_WR_VAL;
		parameter_int_t MEM_WTR_VAL;
		parameter_string_t PORT_CONFIG;
		//Verilog Ports in definition order:
		NetFlow* ADDR; // OUTPUT
		NetFlow* BA; // OUTPUT
		NetFlow* CAS; // OUTPUT
		NetFlow* CKE; // OUTPUT
		NetFlow* DQIOWEN0; // OUTPUT
		NetFlow* DQON; // OUTPUT
		NetFlow* DQOP; // OUTPUT
		NetFlow* DQSIOWEN90N; // OUTPUT
		NetFlow* DQSIOWEN90P; // OUTPUT
		NetFlow* IOIDRPADD; // OUTPUT
		NetFlow* IOIDRPADDR; // OUTPUT
		NetFlow* IOIDRPBROADCAST; // OUTPUT
		NetFlow* IOIDRPCLK; // OUTPUT
		NetFlow* IOIDRPCS; // OUTPUT
		NetFlow* IOIDRPSDO; // OUTPUT
		NetFlow* IOIDRPTRAIN; // OUTPUT
		NetFlow* IOIDRPUPDATE; // OUTPUT
		NetFlow* LDMN; // OUTPUT
		NetFlow* LDMP; // OUTPUT
		NetFlow* ODT; // OUTPUT
		NetFlow* P0CMDEMPTY; // OUTPUT
		NetFlow* P0CMDFULL; // OUTPUT
		NetFlow* P0RDCOUNT; // OUTPUT
		NetFlow* P0RDDATA; // OUTPUT
		NetFlow* P0RDEMPTY; // OUTPUT
		NetFlow* P0RDERROR; // OUTPUT
		NetFlow* P0RDFULL; // OUTPUT
		NetFlow* P0RDOVERFLOW; // OUTPUT
		NetFlow* P0WRCOUNT; // OUTPUT
		NetFlow* P0WREMPTY; // OUTPUT
		NetFlow* P0WRERROR; // OUTPUT
		NetFlow* P0WRFULL; // OUTPUT
		NetFlow* P0WRUNDERRUN; // OUTPUT
		NetFlow* P1CMDEMPTY; // OUTPUT
		NetFlow* P1CMDFULL; // OUTPUT
		NetFlow* P1RDCOUNT; // OUTPUT
		NetFlow* P1RDDATA; // OUTPUT
		NetFlow* P1RDEMPTY; // OUTPUT
		NetFlow* P1RDERROR; // OUTPUT
		NetFlow* P1RDFULL; // OUTPUT
		NetFlow* P1RDOVERFLOW; // OUTPUT
		NetFlow* P1WRCOUNT; // OUTPUT
		NetFlow* P1WREMPTY; // OUTPUT
		NetFlow* P1WRERROR; // OUTPUT
		NetFlow* P1WRFULL; // OUTPUT
		NetFlow* P1WRUNDERRUN; // OUTPUT
		NetFlow* P2CMDEMPTY; // OUTPUT
		NetFlow* P2CMDFULL; // OUTPUT
		NetFlow* P2COUNT; // OUTPUT
		NetFlow* P2EMPTY; // OUTPUT
		NetFlow* P2ERROR; // OUTPUT
		NetFlow* P2FULL; // OUTPUT
		NetFlow* P2RDDATA; // OUTPUT
		NetFlow* P2RDOVERFLOW; // OUTPUT
		NetFlow* P2WRUNDERRUN; // OUTPUT
		NetFlow* P3CMDEMPTY; // OUTPUT
		NetFlow* P3CMDFULL; // OUTPUT
		NetFlow* P3COUNT; // OUTPUT
		NetFlow* P3EMPTY; // OUTPUT
		NetFlow* P3ERROR; // OUTPUT
		NetFlow* P3FULL; // OUTPUT
		NetFlow* P3RDDATA; // OUTPUT
		NetFlow* P3RDOVERFLOW; // OUTPUT
		NetFlow* P3WRUNDERRUN; // OUTPUT
		NetFlow* P4CMDEMPTY; // OUTPUT
		NetFlow* P4CMDFULL; // OUTPUT
		NetFlow* P4COUNT; // OUTPUT
		NetFlow* P4EMPTY; // OUTPUT
		NetFlow* P4ERROR; // OUTPUT
		NetFlow* P4FULL; // OUTPUT
		NetFlow* P4RDDATA; // OUTPUT
		NetFlow* P4RDOVERFLOW; // OUTPUT
		NetFlow* P4WRUNDERRUN; // OUTPUT
		NetFlow* P5CMDEMPTY; // OUTPUT
		NetFlow* P5CMDFULL; // OUTPUT
		NetFlow* P5COUNT; // OUTPUT
		NetFlow* P5EMPTY; // OUTPUT
		NetFlow* P5ERROR; // OUTPUT
		NetFlow* P5FULL; // OUTPUT
		NetFlow* P5RDDATA; // OUTPUT
		NetFlow* P5RDOVERFLOW; // OUTPUT
		NetFlow* P5WRUNDERRUN; // OUTPUT
		NetFlow* RAS; // OUTPUT
		NetFlow* RST; // OUTPUT
		NetFlow* SELFREFRESHMODE; // OUTPUT
		NetFlow* STATUS; // OUTPUT
		NetFlow* UDMN; // OUTPUT
		NetFlow* UDMP; // OUTPUT
		NetFlow* UOCALSTART; // OUTPUT
		NetFlow* UOCMDREADYIN; // OUTPUT
		NetFlow* UODATA; // OUTPUT
		NetFlow* UODATAVALID; // OUTPUT
		NetFlow* UODONECAL; // OUTPUT
		NetFlow* UOREFRSHFLAG; // OUTPUT
		NetFlow* UOSDO; // OUTPUT
		NetFlow* WE; // OUTPUT
		NetFlow* DQI; // INPUT
		NetFlow* DQSIOIN; // INPUT
		NetFlow* DQSIOIP; // INPUT
		NetFlow* IOIDRPSDI; // INPUT
		NetFlow* P0ARBEN; // INPUT
		NetFlow* P0CMDBA; // INPUT
		NetFlow* P0CMDBL; // INPUT
		NetFlow* P0CMDCA; // INPUT
		NetFlow* P0CMDCLK; // INPUT
		NetFlow* P0CMDEN; // INPUT
		NetFlow* P0CMDINSTR; // INPUT
		NetFlow* P0CMDRA; // INPUT
		NetFlow* P0RDCLK; // INPUT
		NetFlow* P0RDEN; // INPUT
		NetFlow* P0RWRMASK; // INPUT
		NetFlow* P0WRCLK; // INPUT
		NetFlow* P0WRDATA; // INPUT
		NetFlow* P0WREN; // INPUT
		NetFlow* P1ARBEN; // INPUT
		NetFlow* P1CMDBA; // INPUT
		NetFlow* P1CMDBL; // INPUT
		NetFlow* P1CMDCA; // INPUT
		NetFlow* P1CMDCLK; // INPUT
		NetFlow* P1CMDEN; // INPUT
		NetFlow* P1CMDINSTR; // INPUT
		NetFlow* P1CMDRA; // INPUT
		NetFlow* P1RDCLK; // INPUT
		NetFlow* P1RDEN; // INPUT
		NetFlow* P1RWRMASK; // INPUT
		NetFlow* P1WRCLK; // INPUT
		NetFlow* P1WRDATA; // INPUT
		NetFlow* P1WREN; // INPUT
		NetFlow* P2ARBEN; // INPUT
		NetFlow* P2CLK; // INPUT
		NetFlow* P2CMDBA; // INPUT
		NetFlow* P2CMDBL; // INPUT
		NetFlow* P2CMDCA; // INPUT
		NetFlow* P2CMDCLK; // INPUT
		NetFlow* P2CMDEN; // INPUT
		NetFlow* P2CMDINSTR; // INPUT
		NetFlow* P2CMDRA; // INPUT
		NetFlow* P2EN; // INPUT
		NetFlow* P2WRDATA; // INPUT
		NetFlow* P2WRMASK; // INPUT
		NetFlow* P3ARBEN; // INPUT
		NetFlow* P3CLK; // INPUT
		NetFlow* P3CMDBA; // INPUT
		NetFlow* P3CMDBL; // INPUT
		NetFlow* P3CMDCA; // INPUT
		NetFlow* P3CMDCLK; // INPUT
		NetFlow* P3CMDEN; // INPUT
		NetFlow* P3CMDINSTR; // INPUT
		NetFlow* P3CMDRA; // INPUT
		NetFlow* P3EN; // INPUT
		NetFlow* P3WRDATA; // INPUT
		NetFlow* P3WRMASK; // INPUT
		NetFlow* P4ARBEN; // INPUT
		NetFlow* P4CLK; // INPUT
		NetFlow* P4CMDBA; // INPUT
		NetFlow* P4CMDBL; // INPUT
		NetFlow* P4CMDCA; // INPUT
		NetFlow* P4CMDCLK; // INPUT
		NetFlow* P4CMDEN; // INPUT
		NetFlow* P4CMDINSTR; // INPUT
		NetFlow* P4CMDRA; // INPUT
		NetFlow* P4EN; // INPUT
		NetFlow* P4WRDATA; // INPUT
		NetFlow* P4WRMASK; // INPUT
		NetFlow* P5ARBEN; // INPUT
		NetFlow* P5CLK; // INPUT
		NetFlow* P5CMDBA; // INPUT
		NetFlow* P5CMDBL; // INPUT
		NetFlow* P5CMDCA; // INPUT
		NetFlow* P5CMDCLK; // INPUT
		NetFlow* P5CMDEN; // INPUT
		NetFlow* P5CMDINSTR; // INPUT
		NetFlow* P5CMDRA; // INPUT
		NetFlow* P5EN; // INPUT
		NetFlow* P5WRDATA; // INPUT
		NetFlow* P5WRMASK; // INPUT
		NetFlow* PLLCE; // INPUT
		NetFlow* PLLCLK; // INPUT
		NetFlow* PLLLOCK; // INPUT
		NetFlow* RECAL; // INPUT
		NetFlow* SELFREFRESHENTER; // INPUT
		NetFlow* SYSRST; // INPUT
		NetFlow* UDQSIOIN; // INPUT
		NetFlow* UDQSIOIP; // INPUT
		NetFlow* UIADD; // INPUT
		NetFlow* UIADDR; // INPUT
		NetFlow* UIBROADCAST; // INPUT
		NetFlow* UICLK; // INPUT
		NetFlow* UICMD; // INPUT
		NetFlow* UICMDEN; // INPUT
		NetFlow* UICMDIN; // INPUT
		NetFlow* UICS; // INPUT
		NetFlow* UIDONECAL; // INPUT
		NetFlow* UIDQCOUNT; // INPUT
		NetFlow* UIDQLOWERDEC; // INPUT
		NetFlow* UIDQLOWERINC; // INPUT
		NetFlow* UIDQUPPERDEC; // INPUT
		NetFlow* UIDQUPPERINC; // INPUT
		NetFlow* UIDRPUPDATE; // INPUT
		NetFlow* UILDQSDEC; // INPUT
		NetFlow* UILDQSINC; // INPUT
		NetFlow* UIREAD; // INPUT
		NetFlow* UISDI; // INPUT
		NetFlow* UIUDQSDEC; // INPUT
		NetFlow* UIUDQSINC; // INPUT
		
	
		X_MCB(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t ARB_NUM_TIME_SLOTS, // Default: 12
			parameter_int_t ARB_TIME_SLOT_0, // Default: 18'b111111111111111111
			parameter_int_t ARB_TIME_SLOT_1, // Default: 18'b111111111111111111
			parameter_int_t ARB_TIME_SLOT_10, // Default: 18'b111111111111111111
			parameter_int_t ARB_TIME_SLOT_11, // Default: 18'b111111111111111111
			parameter_int_t ARB_TIME_SLOT_2, // Default: 18'b111111111111111111
			parameter_int_t ARB_TIME_SLOT_3, // Default: 18'b111111111111111111
			parameter_int_t ARB_TIME_SLOT_4, // Default: 18'b111111111111111111
			parameter_int_t ARB_TIME_SLOT_5, // Default: 18'b111111111111111111
			parameter_int_t ARB_TIME_SLOT_6, // Default: 18'b111111111111111111
			parameter_int_t ARB_TIME_SLOT_7, // Default: 18'b111111111111111111
			parameter_int_t ARB_TIME_SLOT_8, // Default: 18'b111111111111111111
			parameter_int_t ARB_TIME_SLOT_9, // Default: 18'b111111111111111111
			parameter_int_t CAL_BA, // Default: 3'h0
			parameter_string_t CAL_BYPASS, // Default: "YES"
			parameter_int_t CAL_CA, // Default: 12'h000
			parameter_string_t CAL_CALIBRATION_MODE, // Default: "NOCALIBRATION"
			parameter_int_t CAL_CLK_DIV, // Default: 1
			parameter_string_t CAL_DELAY, // Default: "QUARTER"
			parameter_int_t CAL_RA, // Default: 15'h0000
			parameter_string_t MEM_ADDR_ORDER, // Default: "BANK_ROW_COLUMN"
			parameter_int_t MEM_BA_SIZE, // Default: 3
			parameter_int_t MEM_BURST_LEN, // Default: 8
			parameter_int_t MEM_CAS_LATENCY, // Default: 4
			parameter_int_t MEM_CA_SIZE, // Default: 11
			parameter_string_t MEM_DDR1_2_ODS, // Default: "FULL"
			parameter_string_t MEM_DDR2_3_HIGH_TEMP_SR, // Default: "NORMAL"
			parameter_string_t MEM_DDR2_3_PA_SR, // Default: "FULL"
			parameter_int_t MEM_DDR2_ADD_LATENCY, // Default: 0
			parameter_string_t MEM_DDR2_DIFF_DQS_EN, // Default: "YES"
			parameter_string_t MEM_DDR2_RTT, // Default: "50OHMS"
			parameter_int_t MEM_DDR2_WRT_RECOVERY, // Default: 4
			parameter_string_t MEM_DDR3_ADD_LATENCY, // Default: "OFF"
			parameter_string_t MEM_DDR3_AUTO_SR, // Default: "ENABLED"
			parameter_int_t MEM_DDR3_CAS_LATENCY, // Default: 7
			parameter_int_t MEM_DDR3_CAS_WR_LATENCY, // Default: 5
			parameter_string_t MEM_DDR3_DYN_WRT_ODT, // Default: "OFF"
			parameter_string_t MEM_DDR3_ODS, // Default: "DIV7"
			parameter_string_t MEM_DDR3_RTT, // Default: "DIV2"
			parameter_int_t MEM_DDR3_WRT_RECOVERY, // Default: 7
			parameter_string_t MEM_MDDR_ODS, // Default: "FULL"
			parameter_string_t MEM_MOBILE_PA_SR, // Default: "FULL"
			parameter_int_t MEM_MOBILE_TC_SR, // Default: 0
			parameter_int_t MEM_RAS_VAL, // Default: 0
			parameter_int_t MEM_RA_SIZE, // Default: 13
			parameter_int_t MEM_RCD_VAL, // Default: 1
			parameter_int_t MEM_REFI_VAL, // Default: 0
			parameter_int_t MEM_RFC_VAL, // Default: 0
			parameter_int_t MEM_RP_VAL, // Default: 0
			parameter_int_t MEM_RTP_VAL, // Default: 0
			parameter_string_t MEM_TYPE, // Default: "DDR3"
			parameter_int_t MEM_WIDTH, // Default: 4
			parameter_int_t MEM_WR_VAL, // Default: 0
			parameter_int_t MEM_WTR_VAL, // Default: 3
			parameter_string_t PORT_CONFIG, // Default: "B32_B32_B32_B32"
			//Verilog Ports in definition order:
			NetFlow* ADDR, // OUTPUT
			NetFlow* BA, // OUTPUT
			NetFlow* CAS, // OUTPUT
			NetFlow* CKE, // OUTPUT
			NetFlow* DQIOWEN0, // OUTPUT
			NetFlow* DQON, // OUTPUT
			NetFlow* DQOP, // OUTPUT
			NetFlow* DQSIOWEN90N, // OUTPUT
			NetFlow* DQSIOWEN90P, // OUTPUT
			NetFlow* IOIDRPADD, // OUTPUT
			NetFlow* IOIDRPADDR, // OUTPUT
			NetFlow* IOIDRPBROADCAST, // OUTPUT
			NetFlow* IOIDRPCLK, // OUTPUT
			NetFlow* IOIDRPCS, // OUTPUT
			NetFlow* IOIDRPSDO, // OUTPUT
			NetFlow* IOIDRPTRAIN, // OUTPUT
			NetFlow* IOIDRPUPDATE, // OUTPUT
			NetFlow* LDMN, // OUTPUT
			NetFlow* LDMP, // OUTPUT
			NetFlow* ODT, // OUTPUT
			NetFlow* P0CMDEMPTY, // OUTPUT
			NetFlow* P0CMDFULL, // OUTPUT
			NetFlow* P0RDCOUNT, // OUTPUT
			NetFlow* P0RDDATA, // OUTPUT
			NetFlow* P0RDEMPTY, // OUTPUT
			NetFlow* P0RDERROR, // OUTPUT
			NetFlow* P0RDFULL, // OUTPUT
			NetFlow* P0RDOVERFLOW, // OUTPUT
			NetFlow* P0WRCOUNT, // OUTPUT
			NetFlow* P0WREMPTY, // OUTPUT
			NetFlow* P0WRERROR, // OUTPUT
			NetFlow* P0WRFULL, // OUTPUT
			NetFlow* P0WRUNDERRUN, // OUTPUT
			NetFlow* P1CMDEMPTY, // OUTPUT
			NetFlow* P1CMDFULL, // OUTPUT
			NetFlow* P1RDCOUNT, // OUTPUT
			NetFlow* P1RDDATA, // OUTPUT
			NetFlow* P1RDEMPTY, // OUTPUT
			NetFlow* P1RDERROR, // OUTPUT
			NetFlow* P1RDFULL, // OUTPUT
			NetFlow* P1RDOVERFLOW, // OUTPUT
			NetFlow* P1WRCOUNT, // OUTPUT
			NetFlow* P1WREMPTY, // OUTPUT
			NetFlow* P1WRERROR, // OUTPUT
			NetFlow* P1WRFULL, // OUTPUT
			NetFlow* P1WRUNDERRUN, // OUTPUT
			NetFlow* P2CMDEMPTY, // OUTPUT
			NetFlow* P2CMDFULL, // OUTPUT
			NetFlow* P2COUNT, // OUTPUT
			NetFlow* P2EMPTY, // OUTPUT
			NetFlow* P2ERROR, // OUTPUT
			NetFlow* P2FULL, // OUTPUT
			NetFlow* P2RDDATA, // OUTPUT
			NetFlow* P2RDOVERFLOW, // OUTPUT
			NetFlow* P2WRUNDERRUN, // OUTPUT
			NetFlow* P3CMDEMPTY, // OUTPUT
			NetFlow* P3CMDFULL, // OUTPUT
			NetFlow* P3COUNT, // OUTPUT
			NetFlow* P3EMPTY, // OUTPUT
			NetFlow* P3ERROR, // OUTPUT
			NetFlow* P3FULL, // OUTPUT
			NetFlow* P3RDDATA, // OUTPUT
			NetFlow* P3RDOVERFLOW, // OUTPUT
			NetFlow* P3WRUNDERRUN, // OUTPUT
			NetFlow* P4CMDEMPTY, // OUTPUT
			NetFlow* P4CMDFULL, // OUTPUT
			NetFlow* P4COUNT, // OUTPUT
			NetFlow* P4EMPTY, // OUTPUT
			NetFlow* P4ERROR, // OUTPUT
			NetFlow* P4FULL, // OUTPUT
			NetFlow* P4RDDATA, // OUTPUT
			NetFlow* P4RDOVERFLOW, // OUTPUT
			NetFlow* P4WRUNDERRUN, // OUTPUT
			NetFlow* P5CMDEMPTY, // OUTPUT
			NetFlow* P5CMDFULL, // OUTPUT
			NetFlow* P5COUNT, // OUTPUT
			NetFlow* P5EMPTY, // OUTPUT
			NetFlow* P5ERROR, // OUTPUT
			NetFlow* P5FULL, // OUTPUT
			NetFlow* P5RDDATA, // OUTPUT
			NetFlow* P5RDOVERFLOW, // OUTPUT
			NetFlow* P5WRUNDERRUN, // OUTPUT
			NetFlow* RAS, // OUTPUT
			NetFlow* RST, // OUTPUT
			NetFlow* SELFREFRESHMODE, // OUTPUT
			NetFlow* STATUS, // OUTPUT
			NetFlow* UDMN, // OUTPUT
			NetFlow* UDMP, // OUTPUT
			NetFlow* UOCALSTART, // OUTPUT
			NetFlow* UOCMDREADYIN, // OUTPUT
			NetFlow* UODATA, // OUTPUT
			NetFlow* UODATAVALID, // OUTPUT
			NetFlow* UODONECAL, // OUTPUT
			NetFlow* UOREFRSHFLAG, // OUTPUT
			NetFlow* UOSDO, // OUTPUT
			NetFlow* WE, // OUTPUT
			NetFlow* DQI, // INPUT
			NetFlow* DQSIOIN, // INPUT
			NetFlow* DQSIOIP, // INPUT
			NetFlow* IOIDRPSDI, // INPUT
			NetFlow* P0ARBEN, // INPUT
			NetFlow* P0CMDBA, // INPUT
			NetFlow* P0CMDBL, // INPUT
			NetFlow* P0CMDCA, // INPUT
			NetFlow* P0CMDCLK, // INPUT
			NetFlow* P0CMDEN, // INPUT
			NetFlow* P0CMDINSTR, // INPUT
			NetFlow* P0CMDRA, // INPUT
			NetFlow* P0RDCLK, // INPUT
			NetFlow* P0RDEN, // INPUT
			NetFlow* P0RWRMASK, // INPUT
			NetFlow* P0WRCLK, // INPUT
			NetFlow* P0WRDATA, // INPUT
			NetFlow* P0WREN, // INPUT
			NetFlow* P1ARBEN, // INPUT
			NetFlow* P1CMDBA, // INPUT
			NetFlow* P1CMDBL, // INPUT
			NetFlow* P1CMDCA, // INPUT
			NetFlow* P1CMDCLK, // INPUT
			NetFlow* P1CMDEN, // INPUT
			NetFlow* P1CMDINSTR, // INPUT
			NetFlow* P1CMDRA, // INPUT
			NetFlow* P1RDCLK, // INPUT
			NetFlow* P1RDEN, // INPUT
			NetFlow* P1RWRMASK, // INPUT
			NetFlow* P1WRCLK, // INPUT
			NetFlow* P1WRDATA, // INPUT
			NetFlow* P1WREN, // INPUT
			NetFlow* P2ARBEN, // INPUT
			NetFlow* P2CLK, // INPUT
			NetFlow* P2CMDBA, // INPUT
			NetFlow* P2CMDBL, // INPUT
			NetFlow* P2CMDCA, // INPUT
			NetFlow* P2CMDCLK, // INPUT
			NetFlow* P2CMDEN, // INPUT
			NetFlow* P2CMDINSTR, // INPUT
			NetFlow* P2CMDRA, // INPUT
			NetFlow* P2EN, // INPUT
			NetFlow* P2WRDATA, // INPUT
			NetFlow* P2WRMASK, // INPUT
			NetFlow* P3ARBEN, // INPUT
			NetFlow* P3CLK, // INPUT
			NetFlow* P3CMDBA, // INPUT
			NetFlow* P3CMDBL, // INPUT
			NetFlow* P3CMDCA, // INPUT
			NetFlow* P3CMDCLK, // INPUT
			NetFlow* P3CMDEN, // INPUT
			NetFlow* P3CMDINSTR, // INPUT
			NetFlow* P3CMDRA, // INPUT
			NetFlow* P3EN, // INPUT
			NetFlow* P3WRDATA, // INPUT
			NetFlow* P3WRMASK, // INPUT
			NetFlow* P4ARBEN, // INPUT
			NetFlow* P4CLK, // INPUT
			NetFlow* P4CMDBA, // INPUT
			NetFlow* P4CMDBL, // INPUT
			NetFlow* P4CMDCA, // INPUT
			NetFlow* P4CMDCLK, // INPUT
			NetFlow* P4CMDEN, // INPUT
			NetFlow* P4CMDINSTR, // INPUT
			NetFlow* P4CMDRA, // INPUT
			NetFlow* P4EN, // INPUT
			NetFlow* P4WRDATA, // INPUT
			NetFlow* P4WRMASK, // INPUT
			NetFlow* P5ARBEN, // INPUT
			NetFlow* P5CLK, // INPUT
			NetFlow* P5CMDBA, // INPUT
			NetFlow* P5CMDBL, // INPUT
			NetFlow* P5CMDCA, // INPUT
			NetFlow* P5CMDCLK, // INPUT
			NetFlow* P5CMDEN, // INPUT
			NetFlow* P5CMDINSTR, // INPUT
			NetFlow* P5CMDRA, // INPUT
			NetFlow* P5EN, // INPUT
			NetFlow* P5WRDATA, // INPUT
			NetFlow* P5WRMASK, // INPUT
			NetFlow* PLLCE, // INPUT
			NetFlow* PLLCLK, // INPUT
			NetFlow* PLLLOCK, // INPUT
			NetFlow* RECAL, // INPUT
			NetFlow* SELFREFRESHENTER, // INPUT
			NetFlow* SYSRST, // INPUT
			NetFlow* UDQSIOIN, // INPUT
			NetFlow* UDQSIOIP, // INPUT
			NetFlow* UIADD, // INPUT
			NetFlow* UIADDR, // INPUT
			NetFlow* UIBROADCAST, // INPUT
			NetFlow* UICLK, // INPUT
			NetFlow* UICMD, // INPUT
			NetFlow* UICMDEN, // INPUT
			NetFlow* UICMDIN, // INPUT
			NetFlow* UICS, // INPUT
			NetFlow* UIDONECAL, // INPUT
			NetFlow* UIDQCOUNT, // INPUT
			NetFlow* UIDQLOWERDEC, // INPUT
			NetFlow* UIDQLOWERINC, // INPUT
			NetFlow* UIDQUPPERDEC, // INPUT
			NetFlow* UIDQUPPERINC, // INPUT
			NetFlow* UIDRPUPDATE, // INPUT
			NetFlow* UILDQSDEC, // INPUT
			NetFlow* UILDQSINC, // INPUT
			NetFlow* UIREAD, // INPUT
			NetFlow* UISDI, // INPUT
			NetFlow* UIUDQSDEC, // INPUT
			NetFlow* UIUDQSINC // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->ARB_NUM_TIME_SLOTS = ARB_NUM_TIME_SLOTS; // Default: 12
			this->ARB_TIME_SLOT_0 = ARB_TIME_SLOT_0; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_1 = ARB_TIME_SLOT_1; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_10 = ARB_TIME_SLOT_10; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_11 = ARB_TIME_SLOT_11; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_2 = ARB_TIME_SLOT_2; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_3 = ARB_TIME_SLOT_3; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_4 = ARB_TIME_SLOT_4; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_5 = ARB_TIME_SLOT_5; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_6 = ARB_TIME_SLOT_6; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_7 = ARB_TIME_SLOT_7; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_8 = ARB_TIME_SLOT_8; // Default: 18'b111111111111111111
			this->ARB_TIME_SLOT_9 = ARB_TIME_SLOT_9; // Default: 18'b111111111111111111
			this->CAL_BA = CAL_BA; // Default: 3'h0
			this->CAL_BYPASS = CAL_BYPASS; // Default: "YES"
			this->CAL_CA = CAL_CA; // Default: 12'h000
			this->CAL_CALIBRATION_MODE = CAL_CALIBRATION_MODE; // Default: "NOCALIBRATION"
			this->CAL_CLK_DIV = CAL_CLK_DIV; // Default: 1
			this->CAL_DELAY = CAL_DELAY; // Default: "QUARTER"
			this->CAL_RA = CAL_RA; // Default: 15'h0000
			this->MEM_ADDR_ORDER = MEM_ADDR_ORDER; // Default: "BANK_ROW_COLUMN"
			this->MEM_BA_SIZE = MEM_BA_SIZE; // Default: 3
			this->MEM_BURST_LEN = MEM_BURST_LEN; // Default: 8
			this->MEM_CAS_LATENCY = MEM_CAS_LATENCY; // Default: 4
			this->MEM_CA_SIZE = MEM_CA_SIZE; // Default: 11
			this->MEM_DDR1_2_ODS = MEM_DDR1_2_ODS; // Default: "FULL"
			this->MEM_DDR2_3_HIGH_TEMP_SR = MEM_DDR2_3_HIGH_TEMP_SR; // Default: "NORMAL"
			this->MEM_DDR2_3_PA_SR = MEM_DDR2_3_PA_SR; // Default: "FULL"
			this->MEM_DDR2_ADD_LATENCY = MEM_DDR2_ADD_LATENCY; // Default: 0
			this->MEM_DDR2_DIFF_DQS_EN = MEM_DDR2_DIFF_DQS_EN; // Default: "YES"
			this->MEM_DDR2_RTT = MEM_DDR2_RTT; // Default: "50OHMS"
			this->MEM_DDR2_WRT_RECOVERY = MEM_DDR2_WRT_RECOVERY; // Default: 4
			this->MEM_DDR3_ADD_LATENCY = MEM_DDR3_ADD_LATENCY; // Default: "OFF"
			this->MEM_DDR3_AUTO_SR = MEM_DDR3_AUTO_SR; // Default: "ENABLED"
			this->MEM_DDR3_CAS_LATENCY = MEM_DDR3_CAS_LATENCY; // Default: 7
			this->MEM_DDR3_CAS_WR_LATENCY = MEM_DDR3_CAS_WR_LATENCY; // Default: 5
			this->MEM_DDR3_DYN_WRT_ODT = MEM_DDR3_DYN_WRT_ODT; // Default: "OFF"
			this->MEM_DDR3_ODS = MEM_DDR3_ODS; // Default: "DIV7"
			this->MEM_DDR3_RTT = MEM_DDR3_RTT; // Default: "DIV2"
			this->MEM_DDR3_WRT_RECOVERY = MEM_DDR3_WRT_RECOVERY; // Default: 7
			this->MEM_MDDR_ODS = MEM_MDDR_ODS; // Default: "FULL"
			this->MEM_MOBILE_PA_SR = MEM_MOBILE_PA_SR; // Default: "FULL"
			this->MEM_MOBILE_TC_SR = MEM_MOBILE_TC_SR; // Default: 0
			this->MEM_RAS_VAL = MEM_RAS_VAL; // Default: 0
			this->MEM_RA_SIZE = MEM_RA_SIZE; // Default: 13
			this->MEM_RCD_VAL = MEM_RCD_VAL; // Default: 1
			this->MEM_REFI_VAL = MEM_REFI_VAL; // Default: 0
			this->MEM_RFC_VAL = MEM_RFC_VAL; // Default: 0
			this->MEM_RP_VAL = MEM_RP_VAL; // Default: 0
			this->MEM_RTP_VAL = MEM_RTP_VAL; // Default: 0
			this->MEM_TYPE = MEM_TYPE; // Default: "DDR3"
			this->MEM_WIDTH = MEM_WIDTH; // Default: 4
			this->MEM_WR_VAL = MEM_WR_VAL; // Default: 0
			this->MEM_WTR_VAL = MEM_WTR_VAL; // Default: 3
			this->PORT_CONFIG = PORT_CONFIG; // Default: "B32_B32_B32_B32"
			//Verilog Ports in definition order:
			this->ADDR = ADDR; // OUTPUT
			this->BA = BA; // OUTPUT
			this->CAS = CAS; // OUTPUT
			this->CKE = CKE; // OUTPUT
			this->DQIOWEN0 = DQIOWEN0; // OUTPUT
			this->DQON = DQON; // OUTPUT
			this->DQOP = DQOP; // OUTPUT
			this->DQSIOWEN90N = DQSIOWEN90N; // OUTPUT
			this->DQSIOWEN90P = DQSIOWEN90P; // OUTPUT
			this->IOIDRPADD = IOIDRPADD; // OUTPUT
			this->IOIDRPADDR = IOIDRPADDR; // OUTPUT
			this->IOIDRPBROADCAST = IOIDRPBROADCAST; // OUTPUT
			this->IOIDRPCLK = IOIDRPCLK; // OUTPUT
			this->IOIDRPCS = IOIDRPCS; // OUTPUT
			this->IOIDRPSDO = IOIDRPSDO; // OUTPUT
			this->IOIDRPTRAIN = IOIDRPTRAIN; // OUTPUT
			this->IOIDRPUPDATE = IOIDRPUPDATE; // OUTPUT
			this->LDMN = LDMN; // OUTPUT
			this->LDMP = LDMP; // OUTPUT
			this->ODT = ODT; // OUTPUT
			this->P0CMDEMPTY = P0CMDEMPTY; // OUTPUT
			this->P0CMDFULL = P0CMDFULL; // OUTPUT
			this->P0RDCOUNT = P0RDCOUNT; // OUTPUT
			this->P0RDDATA = P0RDDATA; // OUTPUT
			this->P0RDEMPTY = P0RDEMPTY; // OUTPUT
			this->P0RDERROR = P0RDERROR; // OUTPUT
			this->P0RDFULL = P0RDFULL; // OUTPUT
			this->P0RDOVERFLOW = P0RDOVERFLOW; // OUTPUT
			this->P0WRCOUNT = P0WRCOUNT; // OUTPUT
			this->P0WREMPTY = P0WREMPTY; // OUTPUT
			this->P0WRERROR = P0WRERROR; // OUTPUT
			this->P0WRFULL = P0WRFULL; // OUTPUT
			this->P0WRUNDERRUN = P0WRUNDERRUN; // OUTPUT
			this->P1CMDEMPTY = P1CMDEMPTY; // OUTPUT
			this->P1CMDFULL = P1CMDFULL; // OUTPUT
			this->P1RDCOUNT = P1RDCOUNT; // OUTPUT
			this->P1RDDATA = P1RDDATA; // OUTPUT
			this->P1RDEMPTY = P1RDEMPTY; // OUTPUT
			this->P1RDERROR = P1RDERROR; // OUTPUT
			this->P1RDFULL = P1RDFULL; // OUTPUT
			this->P1RDOVERFLOW = P1RDOVERFLOW; // OUTPUT
			this->P1WRCOUNT = P1WRCOUNT; // OUTPUT
			this->P1WREMPTY = P1WREMPTY; // OUTPUT
			this->P1WRERROR = P1WRERROR; // OUTPUT
			this->P1WRFULL = P1WRFULL; // OUTPUT
			this->P1WRUNDERRUN = P1WRUNDERRUN; // OUTPUT
			this->P2CMDEMPTY = P2CMDEMPTY; // OUTPUT
			this->P2CMDFULL = P2CMDFULL; // OUTPUT
			this->P2COUNT = P2COUNT; // OUTPUT
			this->P2EMPTY = P2EMPTY; // OUTPUT
			this->P2ERROR = P2ERROR; // OUTPUT
			this->P2FULL = P2FULL; // OUTPUT
			this->P2RDDATA = P2RDDATA; // OUTPUT
			this->P2RDOVERFLOW = P2RDOVERFLOW; // OUTPUT
			this->P2WRUNDERRUN = P2WRUNDERRUN; // OUTPUT
			this->P3CMDEMPTY = P3CMDEMPTY; // OUTPUT
			this->P3CMDFULL = P3CMDFULL; // OUTPUT
			this->P3COUNT = P3COUNT; // OUTPUT
			this->P3EMPTY = P3EMPTY; // OUTPUT
			this->P3ERROR = P3ERROR; // OUTPUT
			this->P3FULL = P3FULL; // OUTPUT
			this->P3RDDATA = P3RDDATA; // OUTPUT
			this->P3RDOVERFLOW = P3RDOVERFLOW; // OUTPUT
			this->P3WRUNDERRUN = P3WRUNDERRUN; // OUTPUT
			this->P4CMDEMPTY = P4CMDEMPTY; // OUTPUT
			this->P4CMDFULL = P4CMDFULL; // OUTPUT
			this->P4COUNT = P4COUNT; // OUTPUT
			this->P4EMPTY = P4EMPTY; // OUTPUT
			this->P4ERROR = P4ERROR; // OUTPUT
			this->P4FULL = P4FULL; // OUTPUT
			this->P4RDDATA = P4RDDATA; // OUTPUT
			this->P4RDOVERFLOW = P4RDOVERFLOW; // OUTPUT
			this->P4WRUNDERRUN = P4WRUNDERRUN; // OUTPUT
			this->P5CMDEMPTY = P5CMDEMPTY; // OUTPUT
			this->P5CMDFULL = P5CMDFULL; // OUTPUT
			this->P5COUNT = P5COUNT; // OUTPUT
			this->P5EMPTY = P5EMPTY; // OUTPUT
			this->P5ERROR = P5ERROR; // OUTPUT
			this->P5FULL = P5FULL; // OUTPUT
			this->P5RDDATA = P5RDDATA; // OUTPUT
			this->P5RDOVERFLOW = P5RDOVERFLOW; // OUTPUT
			this->P5WRUNDERRUN = P5WRUNDERRUN; // OUTPUT
			this->RAS = RAS; // OUTPUT
			this->RST = RST; // OUTPUT
			this->SELFREFRESHMODE = SELFREFRESHMODE; // OUTPUT
			this->STATUS = STATUS; // OUTPUT
			this->UDMN = UDMN; // OUTPUT
			this->UDMP = UDMP; // OUTPUT
			this->UOCALSTART = UOCALSTART; // OUTPUT
			this->UOCMDREADYIN = UOCMDREADYIN; // OUTPUT
			this->UODATA = UODATA; // OUTPUT
			this->UODATAVALID = UODATAVALID; // OUTPUT
			this->UODONECAL = UODONECAL; // OUTPUT
			this->UOREFRSHFLAG = UOREFRSHFLAG; // OUTPUT
			this->UOSDO = UOSDO; // OUTPUT
			this->WE = WE; // OUTPUT
			this->DQI = DQI; // INPUT
			this->DQSIOIN = DQSIOIN; // INPUT
			this->DQSIOIP = DQSIOIP; // INPUT
			this->IOIDRPSDI = IOIDRPSDI; // INPUT
			this->P0ARBEN = P0ARBEN; // INPUT
			this->P0CMDBA = P0CMDBA; // INPUT
			this->P0CMDBL = P0CMDBL; // INPUT
			this->P0CMDCA = P0CMDCA; // INPUT
			this->P0CMDCLK = P0CMDCLK; // INPUT
			this->P0CMDEN = P0CMDEN; // INPUT
			this->P0CMDINSTR = P0CMDINSTR; // INPUT
			this->P0CMDRA = P0CMDRA; // INPUT
			this->P0RDCLK = P0RDCLK; // INPUT
			this->P0RDEN = P0RDEN; // INPUT
			this->P0RWRMASK = P0RWRMASK; // INPUT
			this->P0WRCLK = P0WRCLK; // INPUT
			this->P0WRDATA = P0WRDATA; // INPUT
			this->P0WREN = P0WREN; // INPUT
			this->P1ARBEN = P1ARBEN; // INPUT
			this->P1CMDBA = P1CMDBA; // INPUT
			this->P1CMDBL = P1CMDBL; // INPUT
			this->P1CMDCA = P1CMDCA; // INPUT
			this->P1CMDCLK = P1CMDCLK; // INPUT
			this->P1CMDEN = P1CMDEN; // INPUT
			this->P1CMDINSTR = P1CMDINSTR; // INPUT
			this->P1CMDRA = P1CMDRA; // INPUT
			this->P1RDCLK = P1RDCLK; // INPUT
			this->P1RDEN = P1RDEN; // INPUT
			this->P1RWRMASK = P1RWRMASK; // INPUT
			this->P1WRCLK = P1WRCLK; // INPUT
			this->P1WRDATA = P1WRDATA; // INPUT
			this->P1WREN = P1WREN; // INPUT
			this->P2ARBEN = P2ARBEN; // INPUT
			this->P2CLK = P2CLK; // INPUT
			this->P2CMDBA = P2CMDBA; // INPUT
			this->P2CMDBL = P2CMDBL; // INPUT
			this->P2CMDCA = P2CMDCA; // INPUT
			this->P2CMDCLK = P2CMDCLK; // INPUT
			this->P2CMDEN = P2CMDEN; // INPUT
			this->P2CMDINSTR = P2CMDINSTR; // INPUT
			this->P2CMDRA = P2CMDRA; // INPUT
			this->P2EN = P2EN; // INPUT
			this->P2WRDATA = P2WRDATA; // INPUT
			this->P2WRMASK = P2WRMASK; // INPUT
			this->P3ARBEN = P3ARBEN; // INPUT
			this->P3CLK = P3CLK; // INPUT
			this->P3CMDBA = P3CMDBA; // INPUT
			this->P3CMDBL = P3CMDBL; // INPUT
			this->P3CMDCA = P3CMDCA; // INPUT
			this->P3CMDCLK = P3CMDCLK; // INPUT
			this->P3CMDEN = P3CMDEN; // INPUT
			this->P3CMDINSTR = P3CMDINSTR; // INPUT
			this->P3CMDRA = P3CMDRA; // INPUT
			this->P3EN = P3EN; // INPUT
			this->P3WRDATA = P3WRDATA; // INPUT
			this->P3WRMASK = P3WRMASK; // INPUT
			this->P4ARBEN = P4ARBEN; // INPUT
			this->P4CLK = P4CLK; // INPUT
			this->P4CMDBA = P4CMDBA; // INPUT
			this->P4CMDBL = P4CMDBL; // INPUT
			this->P4CMDCA = P4CMDCA; // INPUT
			this->P4CMDCLK = P4CMDCLK; // INPUT
			this->P4CMDEN = P4CMDEN; // INPUT
			this->P4CMDINSTR = P4CMDINSTR; // INPUT
			this->P4CMDRA = P4CMDRA; // INPUT
			this->P4EN = P4EN; // INPUT
			this->P4WRDATA = P4WRDATA; // INPUT
			this->P4WRMASK = P4WRMASK; // INPUT
			this->P5ARBEN = P5ARBEN; // INPUT
			this->P5CLK = P5CLK; // INPUT
			this->P5CMDBA = P5CMDBA; // INPUT
			this->P5CMDBL = P5CMDBL; // INPUT
			this->P5CMDCA = P5CMDCA; // INPUT
			this->P5CMDCLK = P5CMDCLK; // INPUT
			this->P5CMDEN = P5CMDEN; // INPUT
			this->P5CMDINSTR = P5CMDINSTR; // INPUT
			this->P5CMDRA = P5CMDRA; // INPUT
			this->P5EN = P5EN; // INPUT
			this->P5WRDATA = P5WRDATA; // INPUT
			this->P5WRMASK = P5WRMASK; // INPUT
			this->PLLCE = PLLCE; // INPUT
			this->PLLCLK = PLLCLK; // INPUT
			this->PLLLOCK = PLLLOCK; // INPUT
			this->RECAL = RECAL; // INPUT
			this->SELFREFRESHENTER = SELFREFRESHENTER; // INPUT
			this->SYSRST = SYSRST; // INPUT
			this->UDQSIOIN = UDQSIOIN; // INPUT
			this->UDQSIOIP = UDQSIOIP; // INPUT
			this->UIADD = UIADD; // INPUT
			this->UIADDR = UIADDR; // INPUT
			this->UIBROADCAST = UIBROADCAST; // INPUT
			this->UICLK = UICLK; // INPUT
			this->UICMD = UICMD; // INPUT
			this->UICMDEN = UICMDEN; // INPUT
			this->UICMDIN = UICMDIN; // INPUT
			this->UICS = UICS; // INPUT
			this->UIDONECAL = UIDONECAL; // INPUT
			this->UIDQCOUNT = UIDQCOUNT; // INPUT
			this->UIDQLOWERDEC = UIDQLOWERDEC; // INPUT
			this->UIDQLOWERINC = UIDQLOWERINC; // INPUT
			this->UIDQUPPERDEC = UIDQUPPERDEC; // INPUT
			this->UIDQUPPERINC = UIDQUPPERINC; // INPUT
			this->UIDRPUPDATE = UIDRPUPDATE; // INPUT
			this->UILDQSDEC = UILDQSDEC; // INPUT
			this->UILDQSINC = UILDQSINC; // INPUT
			this->UIREAD = UIREAD; // INPUT
			this->UISDI = UISDI; // INPUT
			this->UIUDQSDEC = UIUDQSDEC; // INPUT
			this->UIUDQSINC = UIUDQSINC; // INPUT
		
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
