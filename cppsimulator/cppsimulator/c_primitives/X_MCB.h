/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_MCB_H
#define X_MCB_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_MCB: public Primitive{

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
		NetFlow* ADDR_A0_B; // net ID: ADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* BA_A0_B; // net ID: BA lsb: 0  msb: 0 OUTPUT
		NetFlow* CAS_A0_B; // net ID: CAS lsb: 0  msb: 0 OUTPUT
		NetFlow* CKE_A0_B; // net ID: CKE lsb: 0  msb: 0 OUTPUT
		NetFlow* DQIOWEN0_A0_B; // net ID: DQIOWEN0 lsb: 0  msb: 0 OUTPUT
		NetFlow* DQON_A0_B; // net ID: DQON lsb: 0  msb: 0 OUTPUT
		NetFlow* DQOP_A0_B; // net ID: DQOP lsb: 0  msb: 0 OUTPUT
		NetFlow* DQSIOWEN90N_A0_B; // net ID: DQSIOWEN90N lsb: 0  msb: 0 OUTPUT
		NetFlow* DQSIOWEN90P_A0_B; // net ID: DQSIOWEN90P lsb: 0  msb: 0 OUTPUT
		NetFlow* IOIDRPADD_A0_B; // net ID: IOIDRPADD lsb: 0  msb: 0 OUTPUT
		NetFlow* IOIDRPADDR_A0_B; // net ID: IOIDRPADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* IOIDRPBROADCAST_A0_B; // net ID: IOIDRPBROADCAST lsb: 0  msb: 0 OUTPUT
		NetFlow* IOIDRPCLK_A0_B; // net ID: IOIDRPCLK lsb: 0  msb: 0 OUTPUT
		NetFlow* IOIDRPCS_A0_B; // net ID: IOIDRPCS lsb: 0  msb: 0 OUTPUT
		NetFlow* IOIDRPSDO_A0_B; // net ID: IOIDRPSDO lsb: 0  msb: 0 OUTPUT
		NetFlow* IOIDRPTRAIN_A0_B; // net ID: IOIDRPTRAIN lsb: 0  msb: 0 OUTPUT
		NetFlow* IOIDRPUPDATE_A0_B; // net ID: IOIDRPUPDATE lsb: 0  msb: 0 OUTPUT
		NetFlow* LDMN_A0_B; // net ID: LDMN lsb: 0  msb: 0 OUTPUT
		NetFlow* LDMP_A0_B; // net ID: LDMP lsb: 0  msb: 0 OUTPUT
		NetFlow* ODT_A0_B; // net ID: ODT lsb: 0  msb: 0 OUTPUT
		NetFlow* P0CMDEMPTY_A0_B; // net ID: P0CMDEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P0CMDFULL_A0_B; // net ID: P0CMDFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P0RDCOUNT_A0_B; // net ID: P0RDCOUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* P0RDDATA_A0_B; // net ID: P0RDDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* P0RDEMPTY_A0_B; // net ID: P0RDEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P0RDERROR_A0_B; // net ID: P0RDERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* P0RDFULL_A0_B; // net ID: P0RDFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P0RDOVERFLOW_A0_B; // net ID: P0RDOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* P0WRCOUNT_A0_B; // net ID: P0WRCOUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* P0WREMPTY_A0_B; // net ID: P0WREMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P0WRERROR_A0_B; // net ID: P0WRERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* P0WRFULL_A0_B; // net ID: P0WRFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P0WRUNDERRUN_A0_B; // net ID: P0WRUNDERRUN lsb: 0  msb: 0 OUTPUT
		NetFlow* P1CMDEMPTY_A0_B; // net ID: P1CMDEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P1CMDFULL_A0_B; // net ID: P1CMDFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P1RDCOUNT_A0_B; // net ID: P1RDCOUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* P1RDDATA_A0_B; // net ID: P1RDDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* P1RDEMPTY_A0_B; // net ID: P1RDEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P1RDERROR_A0_B; // net ID: P1RDERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* P1RDFULL_A0_B; // net ID: P1RDFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P1RDOVERFLOW_A0_B; // net ID: P1RDOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* P1WRCOUNT_A0_B; // net ID: P1WRCOUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* P1WREMPTY_A0_B; // net ID: P1WREMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P1WRERROR_A0_B; // net ID: P1WRERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* P1WRFULL_A0_B; // net ID: P1WRFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P1WRUNDERRUN_A0_B; // net ID: P1WRUNDERRUN lsb: 0  msb: 0 OUTPUT
		NetFlow* P2CMDEMPTY_A0_B; // net ID: P2CMDEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P2CMDFULL_A0_B; // net ID: P2CMDFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P2COUNT_A0_B; // net ID: P2COUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* P2EMPTY_A0_B; // net ID: P2EMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P2ERROR_A0_B; // net ID: P2ERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* P2FULL_A0_B; // net ID: P2FULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P2RDDATA_A0_B; // net ID: P2RDDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* P2RDOVERFLOW_A0_B; // net ID: P2RDOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* P2WRUNDERRUN_A0_B; // net ID: P2WRUNDERRUN lsb: 0  msb: 0 OUTPUT
		NetFlow* P3CMDEMPTY_A0_B; // net ID: P3CMDEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P3CMDFULL_A0_B; // net ID: P3CMDFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P3COUNT_A0_B; // net ID: P3COUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* P3EMPTY_A0_B; // net ID: P3EMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P3ERROR_A0_B; // net ID: P3ERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* P3FULL_A0_B; // net ID: P3FULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P3RDDATA_A0_B; // net ID: P3RDDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* P3RDOVERFLOW_A0_B; // net ID: P3RDOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* P3WRUNDERRUN_A0_B; // net ID: P3WRUNDERRUN lsb: 0  msb: 0 OUTPUT
		NetFlow* P4CMDEMPTY_A0_B; // net ID: P4CMDEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P4CMDFULL_A0_B; // net ID: P4CMDFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P4COUNT_A0_B; // net ID: P4COUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* P4EMPTY_A0_B; // net ID: P4EMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P4ERROR_A0_B; // net ID: P4ERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* P4FULL_A0_B; // net ID: P4FULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P4RDDATA_A0_B; // net ID: P4RDDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* P4RDOVERFLOW_A0_B; // net ID: P4RDOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* P4WRUNDERRUN_A0_B; // net ID: P4WRUNDERRUN lsb: 0  msb: 0 OUTPUT
		NetFlow* P5CMDEMPTY_A0_B; // net ID: P5CMDEMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P5CMDFULL_A0_B; // net ID: P5CMDFULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P5COUNT_A0_B; // net ID: P5COUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* P5EMPTY_A0_B; // net ID: P5EMPTY lsb: 0  msb: 0 OUTPUT
		NetFlow* P5ERROR_A0_B; // net ID: P5ERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* P5FULL_A0_B; // net ID: P5FULL lsb: 0  msb: 0 OUTPUT
		NetFlow* P5RDDATA_A0_B; // net ID: P5RDDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* P5RDOVERFLOW_A0_B; // net ID: P5RDOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* P5WRUNDERRUN_A0_B; // net ID: P5WRUNDERRUN lsb: 0  msb: 0 OUTPUT
		NetFlow* RAS_A0_B; // net ID: RAS lsb: 0  msb: 0 OUTPUT
		NetFlow* RST_A0_B; // net ID: RST lsb: 0  msb: 0 OUTPUT
		NetFlow* SELFREFRESHMODE_A0_B; // net ID: SELFREFRESHMODE lsb: 0  msb: 0 OUTPUT
		NetFlow* STATUS_A0_B; // net ID: STATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* UDMN_A0_B; // net ID: UDMN lsb: 0  msb: 0 OUTPUT
		NetFlow* UDMP_A0_B; // net ID: UDMP lsb: 0  msb: 0 OUTPUT
		NetFlow* UOCALSTART_A0_B; // net ID: UOCALSTART lsb: 0  msb: 0 OUTPUT
		NetFlow* UOCMDREADYIN_A0_B; // net ID: UOCMDREADYIN lsb: 0  msb: 0 OUTPUT
		NetFlow* UODATA_A0_B; // net ID: UODATA lsb: 0  msb: 0 OUTPUT
		NetFlow* UODATAVALID_A0_B; // net ID: UODATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* UODONECAL_A0_B; // net ID: UODONECAL lsb: 0  msb: 0 OUTPUT
		NetFlow* UOREFRSHFLAG_A0_B; // net ID: UOREFRSHFLAG lsb: 0  msb: 0 OUTPUT
		NetFlow* UOSDO_A0_B; // net ID: UOSDO lsb: 0  msb: 0 OUTPUT
		NetFlow* WE_A0_B; // net ID: WE lsb: 0  msb: 0 OUTPUT
		NetFlow* DQI_A0_B; // net ID: DQI lsb: 0  msb: 15 INPUT
		NetFlow* DQI_A1_B; // net ID: DQI lsb: 0  msb: 15 INPUT
		NetFlow* DQI_A2_B; // net ID: DQI lsb: 0  msb: 15 INPUT
		NetFlow* DQI_A3_B; // net ID: DQI lsb: 0  msb: 15 INPUT
		NetFlow* DQI_A4_B; // net ID: DQI lsb: 0  msb: 15 INPUT
		NetFlow* DQI_A5_B; // net ID: DQI lsb: 0  msb: 15 INPUT
		NetFlow* DQI_A6_B; // net ID: DQI lsb: 0  msb: 15 INPUT
		NetFlow* DQI_A7_B; // net ID: DQI lsb: 0  msb: 15 INPUT
		NetFlow* DQI_A8_B; // net ID: DQI lsb: 0  msb: 15 INPUT
		NetFlow* DQI_A9_B; // net ID: DQI lsb: 0  msb: 15 INPUT
		NetFlow* DQI_A10_B; // net ID: DQI lsb: 0  msb: 15 INPUT
		NetFlow* DQI_A11_B; // net ID: DQI lsb: 0  msb: 15 INPUT
		NetFlow* DQI_A12_B; // net ID: DQI lsb: 0  msb: 15 INPUT
		NetFlow* DQI_A13_B; // net ID: DQI lsb: 0  msb: 15 INPUT
		NetFlow* DQI_A14_B; // net ID: DQI lsb: 0  msb: 15 INPUT
		NetFlow* DQI_A15_B; // net ID: DQI lsb: 0  msb: 15 INPUT
		NetFlow* DQSIOIN_A0_B; // net ID: DQSIOIN lsb: 0  msb: 0 INPUT
		NetFlow* DQSIOIP_A0_B; // net ID: DQSIOIP lsb: 0  msb: 0 INPUT
		NetFlow* IOIDRPSDI_A0_B; // net ID: IOIDRPSDI lsb: 0  msb: 0 INPUT
		NetFlow* P0ARBEN_A0_B; // net ID: P0ARBEN lsb: 0  msb: 0 INPUT
		NetFlow* P0CMDBA_A0_B; // net ID: P0CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P0CMDBA_A1_B; // net ID: P0CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P0CMDBA_A2_B; // net ID: P0CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P0CMDBL_A0_B; // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P0CMDBL_A1_B; // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P0CMDBL_A2_B; // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P0CMDBL_A3_B; // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P0CMDBL_A4_B; // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P0CMDBL_A5_B; // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P0CMDCA_A0_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P0CMDCA_A1_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P0CMDCA_A2_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P0CMDCA_A3_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P0CMDCA_A4_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P0CMDCA_A5_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P0CMDCA_A6_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P0CMDCA_A7_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P0CMDCA_A8_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P0CMDCA_A9_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P0CMDCA_A10_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P0CMDCA_A11_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P0CMDCLK_A0_B; // net ID: P0CMDCLK lsb: 0  msb: 0 INPUT
		NetFlow* P0CMDEN_A0_B; // net ID: P0CMDEN lsb: 0  msb: 0 INPUT
		NetFlow* P0CMDINSTR_A0_B; // net ID: P0CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P0CMDINSTR_A1_B; // net ID: P0CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P0CMDINSTR_A2_B; // net ID: P0CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P0CMDRA_A0_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P0CMDRA_A1_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P0CMDRA_A2_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P0CMDRA_A3_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P0CMDRA_A4_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P0CMDRA_A5_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P0CMDRA_A6_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P0CMDRA_A7_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P0CMDRA_A8_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P0CMDRA_A9_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P0CMDRA_A10_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P0CMDRA_A11_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P0CMDRA_A12_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P0CMDRA_A13_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P0CMDRA_A14_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P0RDCLK_A0_B; // net ID: P0RDCLK lsb: 0  msb: 0 INPUT
		NetFlow* P0RDEN_A0_B; // net ID: P0RDEN lsb: 0  msb: 0 INPUT
		NetFlow* P0RWRMASK_A0_B; // net ID: P0RWRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P0RWRMASK_A1_B; // net ID: P0RWRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P0RWRMASK_A2_B; // net ID: P0RWRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P0RWRMASK_A3_B; // net ID: P0RWRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P0WRCLK_A0_B; // net ID: P0WRCLK lsb: 0  msb: 0 INPUT
		NetFlow* P0WRDATA_A0_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A1_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A2_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A3_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A4_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A5_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A6_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A7_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A8_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A9_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A10_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A11_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A12_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A13_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A14_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A15_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A16_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A17_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A18_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A19_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A20_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A21_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A22_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A23_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A24_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A25_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A26_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A27_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A28_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A29_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A30_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WRDATA_A31_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P0WREN_A0_B; // net ID: P0WREN lsb: 0  msb: 0 INPUT
		NetFlow* P1ARBEN_A0_B; // net ID: P1ARBEN lsb: 0  msb: 0 INPUT
		NetFlow* P1CMDBA_A0_B; // net ID: P1CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P1CMDBA_A1_B; // net ID: P1CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P1CMDBA_A2_B; // net ID: P1CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P1CMDBL_A0_B; // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P1CMDBL_A1_B; // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P1CMDBL_A2_B; // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P1CMDBL_A3_B; // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P1CMDBL_A4_B; // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P1CMDBL_A5_B; // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P1CMDCA_A0_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P1CMDCA_A1_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P1CMDCA_A2_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P1CMDCA_A3_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P1CMDCA_A4_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P1CMDCA_A5_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P1CMDCA_A6_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P1CMDCA_A7_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P1CMDCA_A8_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P1CMDCA_A9_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P1CMDCA_A10_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P1CMDCA_A11_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P1CMDCLK_A0_B; // net ID: P1CMDCLK lsb: 0  msb: 0 INPUT
		NetFlow* P1CMDEN_A0_B; // net ID: P1CMDEN lsb: 0  msb: 0 INPUT
		NetFlow* P1CMDINSTR_A0_B; // net ID: P1CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P1CMDINSTR_A1_B; // net ID: P1CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P1CMDINSTR_A2_B; // net ID: P1CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P1CMDRA_A0_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P1CMDRA_A1_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P1CMDRA_A2_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P1CMDRA_A3_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P1CMDRA_A4_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P1CMDRA_A5_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P1CMDRA_A6_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P1CMDRA_A7_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P1CMDRA_A8_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P1CMDRA_A9_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P1CMDRA_A10_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P1CMDRA_A11_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P1CMDRA_A12_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P1CMDRA_A13_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P1CMDRA_A14_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P1RDCLK_A0_B; // net ID: P1RDCLK lsb: 0  msb: 0 INPUT
		NetFlow* P1RDEN_A0_B; // net ID: P1RDEN lsb: 0  msb: 0 INPUT
		NetFlow* P1RWRMASK_A0_B; // net ID: P1RWRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P1RWRMASK_A1_B; // net ID: P1RWRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P1RWRMASK_A2_B; // net ID: P1RWRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P1RWRMASK_A3_B; // net ID: P1RWRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P1WRCLK_A0_B; // net ID: P1WRCLK lsb: 0  msb: 0 INPUT
		NetFlow* P1WRDATA_A0_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A1_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A2_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A3_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A4_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A5_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A6_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A7_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A8_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A9_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A10_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A11_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A12_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A13_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A14_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A15_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A16_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A17_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A18_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A19_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A20_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A21_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A22_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A23_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A24_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A25_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A26_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A27_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A28_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A29_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A30_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WRDATA_A31_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P1WREN_A0_B; // net ID: P1WREN lsb: 0  msb: 0 INPUT
		NetFlow* P2ARBEN_A0_B; // net ID: P2ARBEN lsb: 0  msb: 0 INPUT
		NetFlow* P2CLK_A0_B; // net ID: P2CLK lsb: 0  msb: 0 INPUT
		NetFlow* P2CMDBA_A0_B; // net ID: P2CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P2CMDBA_A1_B; // net ID: P2CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P2CMDBA_A2_B; // net ID: P2CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P2CMDBL_A0_B; // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P2CMDBL_A1_B; // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P2CMDBL_A2_B; // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P2CMDBL_A3_B; // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P2CMDBL_A4_B; // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P2CMDBL_A5_B; // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P2CMDCA_A0_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P2CMDCA_A1_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P2CMDCA_A2_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P2CMDCA_A3_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P2CMDCA_A4_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P2CMDCA_A5_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P2CMDCA_A6_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P2CMDCA_A7_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P2CMDCA_A8_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P2CMDCA_A9_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P2CMDCA_A10_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P2CMDCA_A11_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P2CMDCLK_A0_B; // net ID: P2CMDCLK lsb: 0  msb: 0 INPUT
		NetFlow* P2CMDEN_A0_B; // net ID: P2CMDEN lsb: 0  msb: 0 INPUT
		NetFlow* P2CMDINSTR_A0_B; // net ID: P2CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P2CMDINSTR_A1_B; // net ID: P2CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P2CMDINSTR_A2_B; // net ID: P2CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P2CMDRA_A0_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P2CMDRA_A1_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P2CMDRA_A2_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P2CMDRA_A3_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P2CMDRA_A4_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P2CMDRA_A5_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P2CMDRA_A6_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P2CMDRA_A7_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P2CMDRA_A8_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P2CMDRA_A9_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P2CMDRA_A10_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P2CMDRA_A11_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P2CMDRA_A12_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P2CMDRA_A13_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P2CMDRA_A14_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P2EN_A0_B; // net ID: P2EN lsb: 0  msb: 0 INPUT
		NetFlow* P2WRDATA_A0_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A1_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A2_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A3_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A4_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A5_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A6_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A7_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A8_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A9_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A10_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A11_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A12_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A13_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A14_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A15_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A16_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A17_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A18_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A19_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A20_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A21_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A22_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A23_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A24_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A25_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A26_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A27_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A28_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A29_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A30_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRDATA_A31_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P2WRMASK_A0_B; // net ID: P2WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P2WRMASK_A1_B; // net ID: P2WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P2WRMASK_A2_B; // net ID: P2WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P2WRMASK_A3_B; // net ID: P2WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P3ARBEN_A0_B; // net ID: P3ARBEN lsb: 0  msb: 0 INPUT
		NetFlow* P3CLK_A0_B; // net ID: P3CLK lsb: 0  msb: 0 INPUT
		NetFlow* P3CMDBA_A0_B; // net ID: P3CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P3CMDBA_A1_B; // net ID: P3CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P3CMDBA_A2_B; // net ID: P3CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P3CMDBL_A0_B; // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P3CMDBL_A1_B; // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P3CMDBL_A2_B; // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P3CMDBL_A3_B; // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P3CMDBL_A4_B; // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P3CMDBL_A5_B; // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P3CMDCA_A0_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P3CMDCA_A1_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P3CMDCA_A2_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P3CMDCA_A3_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P3CMDCA_A4_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P3CMDCA_A5_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P3CMDCA_A6_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P3CMDCA_A7_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P3CMDCA_A8_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P3CMDCA_A9_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P3CMDCA_A10_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P3CMDCA_A11_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P3CMDCLK_A0_B; // net ID: P3CMDCLK lsb: 0  msb: 0 INPUT
		NetFlow* P3CMDEN_A0_B; // net ID: P3CMDEN lsb: 0  msb: 0 INPUT
		NetFlow* P3CMDINSTR_A0_B; // net ID: P3CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P3CMDINSTR_A1_B; // net ID: P3CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P3CMDINSTR_A2_B; // net ID: P3CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P3CMDRA_A0_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P3CMDRA_A1_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P3CMDRA_A2_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P3CMDRA_A3_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P3CMDRA_A4_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P3CMDRA_A5_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P3CMDRA_A6_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P3CMDRA_A7_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P3CMDRA_A8_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P3CMDRA_A9_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P3CMDRA_A10_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P3CMDRA_A11_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P3CMDRA_A12_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P3CMDRA_A13_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P3CMDRA_A14_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P3EN_A0_B; // net ID: P3EN lsb: 0  msb: 0 INPUT
		NetFlow* P3WRDATA_A0_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A1_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A2_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A3_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A4_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A5_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A6_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A7_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A8_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A9_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A10_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A11_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A12_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A13_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A14_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A15_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A16_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A17_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A18_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A19_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A20_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A21_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A22_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A23_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A24_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A25_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A26_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A27_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A28_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A29_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A30_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRDATA_A31_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P3WRMASK_A0_B; // net ID: P3WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P3WRMASK_A1_B; // net ID: P3WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P3WRMASK_A2_B; // net ID: P3WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P3WRMASK_A3_B; // net ID: P3WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P4ARBEN_A0_B; // net ID: P4ARBEN lsb: 0  msb: 0 INPUT
		NetFlow* P4CLK_A0_B; // net ID: P4CLK lsb: 0  msb: 0 INPUT
		NetFlow* P4CMDBA_A0_B; // net ID: P4CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P4CMDBA_A1_B; // net ID: P4CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P4CMDBA_A2_B; // net ID: P4CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P4CMDBL_A0_B; // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P4CMDBL_A1_B; // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P4CMDBL_A2_B; // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P4CMDBL_A3_B; // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P4CMDBL_A4_B; // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P4CMDBL_A5_B; // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P4CMDCA_A0_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P4CMDCA_A1_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P4CMDCA_A2_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P4CMDCA_A3_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P4CMDCA_A4_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P4CMDCA_A5_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P4CMDCA_A6_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P4CMDCA_A7_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P4CMDCA_A8_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P4CMDCA_A9_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P4CMDCA_A10_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P4CMDCA_A11_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P4CMDCLK_A0_B; // net ID: P4CMDCLK lsb: 0  msb: 0 INPUT
		NetFlow* P4CMDEN_A0_B; // net ID: P4CMDEN lsb: 0  msb: 0 INPUT
		NetFlow* P4CMDINSTR_A0_B; // net ID: P4CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P4CMDINSTR_A1_B; // net ID: P4CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P4CMDINSTR_A2_B; // net ID: P4CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P4CMDRA_A0_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P4CMDRA_A1_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P4CMDRA_A2_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P4CMDRA_A3_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P4CMDRA_A4_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P4CMDRA_A5_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P4CMDRA_A6_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P4CMDRA_A7_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P4CMDRA_A8_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P4CMDRA_A9_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P4CMDRA_A10_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P4CMDRA_A11_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P4CMDRA_A12_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P4CMDRA_A13_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P4CMDRA_A14_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P4EN_A0_B; // net ID: P4EN lsb: 0  msb: 0 INPUT
		NetFlow* P4WRDATA_A0_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A1_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A2_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A3_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A4_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A5_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A6_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A7_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A8_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A9_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A10_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A11_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A12_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A13_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A14_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A15_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A16_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A17_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A18_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A19_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A20_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A21_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A22_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A23_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A24_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A25_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A26_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A27_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A28_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A29_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A30_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRDATA_A31_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P4WRMASK_A0_B; // net ID: P4WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P4WRMASK_A1_B; // net ID: P4WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P4WRMASK_A2_B; // net ID: P4WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P4WRMASK_A3_B; // net ID: P4WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P5ARBEN_A0_B; // net ID: P5ARBEN lsb: 0  msb: 0 INPUT
		NetFlow* P5CLK_A0_B; // net ID: P5CLK lsb: 0  msb: 0 INPUT
		NetFlow* P5CMDBA_A0_B; // net ID: P5CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P5CMDBA_A1_B; // net ID: P5CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P5CMDBA_A2_B; // net ID: P5CMDBA lsb: 0  msb: 2 INPUT
		NetFlow* P5CMDBL_A0_B; // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P5CMDBL_A1_B; // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P5CMDBL_A2_B; // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P5CMDBL_A3_B; // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P5CMDBL_A4_B; // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P5CMDBL_A5_B; // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
		NetFlow* P5CMDCA_A0_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P5CMDCA_A1_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P5CMDCA_A2_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P5CMDCA_A3_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P5CMDCA_A4_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P5CMDCA_A5_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P5CMDCA_A6_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P5CMDCA_A7_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P5CMDCA_A8_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P5CMDCA_A9_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P5CMDCA_A10_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P5CMDCA_A11_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
		NetFlow* P5CMDCLK_A0_B; // net ID: P5CMDCLK lsb: 0  msb: 0 INPUT
		NetFlow* P5CMDEN_A0_B; // net ID: P5CMDEN lsb: 0  msb: 0 INPUT
		NetFlow* P5CMDINSTR_A0_B; // net ID: P5CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P5CMDINSTR_A1_B; // net ID: P5CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P5CMDINSTR_A2_B; // net ID: P5CMDINSTR lsb: 0  msb: 2 INPUT
		NetFlow* P5CMDRA_A0_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P5CMDRA_A1_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P5CMDRA_A2_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P5CMDRA_A3_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P5CMDRA_A4_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P5CMDRA_A5_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P5CMDRA_A6_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P5CMDRA_A7_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P5CMDRA_A8_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P5CMDRA_A9_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P5CMDRA_A10_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P5CMDRA_A11_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P5CMDRA_A12_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P5CMDRA_A13_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P5CMDRA_A14_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
		NetFlow* P5EN_A0_B; // net ID: P5EN lsb: 0  msb: 0 INPUT
		NetFlow* P5WRDATA_A0_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A1_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A2_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A3_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A4_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A5_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A6_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A7_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A8_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A9_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A10_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A11_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A12_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A13_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A14_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A15_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A16_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A17_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A18_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A19_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A20_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A21_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A22_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A23_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A24_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A25_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A26_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A27_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A28_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A29_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A30_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRDATA_A31_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
		NetFlow* P5WRMASK_A0_B; // net ID: P5WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P5WRMASK_A1_B; // net ID: P5WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P5WRMASK_A2_B; // net ID: P5WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* P5WRMASK_A3_B; // net ID: P5WRMASK lsb: 0  msb: 3 INPUT
		NetFlow* PLLCE_A0_B; // net ID: PLLCE lsb: 0  msb: 1 INPUT
		NetFlow* PLLCE_A1_B; // net ID: PLLCE lsb: 0  msb: 1 INPUT
		NetFlow* PLLCLK_A0_B; // net ID: PLLCLK lsb: 0  msb: 1 INPUT
		NetFlow* PLLCLK_A1_B; // net ID: PLLCLK lsb: 0  msb: 1 INPUT
		NetFlow* PLLLOCK_A0_B; // net ID: PLLLOCK lsb: 0  msb: 0 INPUT
		NetFlow* RECAL_A0_B; // net ID: RECAL lsb: 0  msb: 0 INPUT
		NetFlow* SELFREFRESHENTER_A0_B; // net ID: SELFREFRESHENTER lsb: 0  msb: 0 INPUT
		NetFlow* SYSRST_A0_B; // net ID: SYSRST lsb: 0  msb: 0 INPUT
		NetFlow* UDQSIOIN_A0_B; // net ID: UDQSIOIN lsb: 0  msb: 0 INPUT
		NetFlow* UDQSIOIP_A0_B; // net ID: UDQSIOIP lsb: 0  msb: 0 INPUT
		NetFlow* UIADD_A0_B; // net ID: UIADD lsb: 0  msb: 0 INPUT
		NetFlow* UIADDR_A0_B; // net ID: UIADDR lsb: 0  msb: 4 INPUT
		NetFlow* UIADDR_A1_B; // net ID: UIADDR lsb: 0  msb: 4 INPUT
		NetFlow* UIADDR_A2_B; // net ID: UIADDR lsb: 0  msb: 4 INPUT
		NetFlow* UIADDR_A3_B; // net ID: UIADDR lsb: 0  msb: 4 INPUT
		NetFlow* UIADDR_A4_B; // net ID: UIADDR lsb: 0  msb: 4 INPUT
		NetFlow* UIBROADCAST_A0_B; // net ID: UIBROADCAST lsb: 0  msb: 0 INPUT
		NetFlow* UICLK_A0_B; // net ID: UICLK lsb: 0  msb: 0 INPUT
		NetFlow* UICMD_A0_B; // net ID: UICMD lsb: 0  msb: 0 INPUT
		NetFlow* UICMDEN_A0_B; // net ID: UICMDEN lsb: 0  msb: 0 INPUT
		NetFlow* UICMDIN_A0_B; // net ID: UICMDIN lsb: 0  msb: 0 INPUT
		NetFlow* UICS_A0_B; // net ID: UICS lsb: 0  msb: 0 INPUT
		NetFlow* UIDONECAL_A0_B; // net ID: UIDONECAL lsb: 0  msb: 0 INPUT
		NetFlow* UIDQCOUNT_A0_B; // net ID: UIDQCOUNT lsb: 0  msb: 3 INPUT
		NetFlow* UIDQCOUNT_A1_B; // net ID: UIDQCOUNT lsb: 0  msb: 3 INPUT
		NetFlow* UIDQCOUNT_A2_B; // net ID: UIDQCOUNT lsb: 0  msb: 3 INPUT
		NetFlow* UIDQCOUNT_A3_B; // net ID: UIDQCOUNT lsb: 0  msb: 3 INPUT
		NetFlow* UIDQLOWERDEC_A0_B; // net ID: UIDQLOWERDEC lsb: 0  msb: 0 INPUT
		NetFlow* UIDQLOWERINC_A0_B; // net ID: UIDQLOWERINC lsb: 0  msb: 0 INPUT
		NetFlow* UIDQUPPERDEC_A0_B; // net ID: UIDQUPPERDEC lsb: 0  msb: 0 INPUT
		NetFlow* UIDQUPPERINC_A0_B; // net ID: UIDQUPPERINC lsb: 0  msb: 0 INPUT
		NetFlow* UIDRPUPDATE_A0_B; // net ID: UIDRPUPDATE lsb: 0  msb: 0 INPUT
		NetFlow* UILDQSDEC_A0_B; // net ID: UILDQSDEC lsb: 0  msb: 0 INPUT
		NetFlow* UILDQSINC_A0_B; // net ID: UILDQSINC lsb: 0  msb: 0 INPUT
		NetFlow* UIREAD_A0_B; // net ID: UIREAD lsb: 0  msb: 0 INPUT
		NetFlow* UISDI_A0_B; // net ID: UISDI lsb: 0  msb: 0 INPUT
		NetFlow* UIUDQSDEC_A0_B; // net ID: UIUDQSDEC lsb: 0  msb: 0 INPUT
		NetFlow* UIUDQSINC_A0_B; // net ID: UIUDQSINC lsb: 0  msb: 0 INPUT
		
		public: X_MCB(
			const char * name,
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
			NetFlow* ADDR_A0_B, // net ID: ADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* BA_A0_B, // net ID: BA lsb: 0  msb: 0 OUTPUT
			NetFlow* CAS_A0_B, // net ID: CAS lsb: 0  msb: 0 OUTPUT
			NetFlow* CKE_A0_B, // net ID: CKE lsb: 0  msb: 0 OUTPUT
			NetFlow* DQIOWEN0_A0_B, // net ID: DQIOWEN0 lsb: 0  msb: 0 OUTPUT
			NetFlow* DQON_A0_B, // net ID: DQON lsb: 0  msb: 0 OUTPUT
			NetFlow* DQOP_A0_B, // net ID: DQOP lsb: 0  msb: 0 OUTPUT
			NetFlow* DQSIOWEN90N_A0_B, // net ID: DQSIOWEN90N lsb: 0  msb: 0 OUTPUT
			NetFlow* DQSIOWEN90P_A0_B, // net ID: DQSIOWEN90P lsb: 0  msb: 0 OUTPUT
			NetFlow* IOIDRPADD_A0_B, // net ID: IOIDRPADD lsb: 0  msb: 0 OUTPUT
			NetFlow* IOIDRPADDR_A0_B, // net ID: IOIDRPADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* IOIDRPBROADCAST_A0_B, // net ID: IOIDRPBROADCAST lsb: 0  msb: 0 OUTPUT
			NetFlow* IOIDRPCLK_A0_B, // net ID: IOIDRPCLK lsb: 0  msb: 0 OUTPUT
			NetFlow* IOIDRPCS_A0_B, // net ID: IOIDRPCS lsb: 0  msb: 0 OUTPUT
			NetFlow* IOIDRPSDO_A0_B, // net ID: IOIDRPSDO lsb: 0  msb: 0 OUTPUT
			NetFlow* IOIDRPTRAIN_A0_B, // net ID: IOIDRPTRAIN lsb: 0  msb: 0 OUTPUT
			NetFlow* IOIDRPUPDATE_A0_B, // net ID: IOIDRPUPDATE lsb: 0  msb: 0 OUTPUT
			NetFlow* LDMN_A0_B, // net ID: LDMN lsb: 0  msb: 0 OUTPUT
			NetFlow* LDMP_A0_B, // net ID: LDMP lsb: 0  msb: 0 OUTPUT
			NetFlow* ODT_A0_B, // net ID: ODT lsb: 0  msb: 0 OUTPUT
			NetFlow* P0CMDEMPTY_A0_B, // net ID: P0CMDEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P0CMDFULL_A0_B, // net ID: P0CMDFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P0RDCOUNT_A0_B, // net ID: P0RDCOUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* P0RDDATA_A0_B, // net ID: P0RDDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* P0RDEMPTY_A0_B, // net ID: P0RDEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P0RDERROR_A0_B, // net ID: P0RDERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* P0RDFULL_A0_B, // net ID: P0RDFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P0RDOVERFLOW_A0_B, // net ID: P0RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* P0WRCOUNT_A0_B, // net ID: P0WRCOUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* P0WREMPTY_A0_B, // net ID: P0WREMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P0WRERROR_A0_B, // net ID: P0WRERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* P0WRFULL_A0_B, // net ID: P0WRFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P0WRUNDERRUN_A0_B, // net ID: P0WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			NetFlow* P1CMDEMPTY_A0_B, // net ID: P1CMDEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P1CMDFULL_A0_B, // net ID: P1CMDFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P1RDCOUNT_A0_B, // net ID: P1RDCOUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* P1RDDATA_A0_B, // net ID: P1RDDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* P1RDEMPTY_A0_B, // net ID: P1RDEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P1RDERROR_A0_B, // net ID: P1RDERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* P1RDFULL_A0_B, // net ID: P1RDFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P1RDOVERFLOW_A0_B, // net ID: P1RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* P1WRCOUNT_A0_B, // net ID: P1WRCOUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* P1WREMPTY_A0_B, // net ID: P1WREMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P1WRERROR_A0_B, // net ID: P1WRERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* P1WRFULL_A0_B, // net ID: P1WRFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P1WRUNDERRUN_A0_B, // net ID: P1WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			NetFlow* P2CMDEMPTY_A0_B, // net ID: P2CMDEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P2CMDFULL_A0_B, // net ID: P2CMDFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P2COUNT_A0_B, // net ID: P2COUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* P2EMPTY_A0_B, // net ID: P2EMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P2ERROR_A0_B, // net ID: P2ERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* P2FULL_A0_B, // net ID: P2FULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P2RDDATA_A0_B, // net ID: P2RDDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* P2RDOVERFLOW_A0_B, // net ID: P2RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* P2WRUNDERRUN_A0_B, // net ID: P2WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			NetFlow* P3CMDEMPTY_A0_B, // net ID: P3CMDEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P3CMDFULL_A0_B, // net ID: P3CMDFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P3COUNT_A0_B, // net ID: P3COUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* P3EMPTY_A0_B, // net ID: P3EMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P3ERROR_A0_B, // net ID: P3ERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* P3FULL_A0_B, // net ID: P3FULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P3RDDATA_A0_B, // net ID: P3RDDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* P3RDOVERFLOW_A0_B, // net ID: P3RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* P3WRUNDERRUN_A0_B, // net ID: P3WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			NetFlow* P4CMDEMPTY_A0_B, // net ID: P4CMDEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P4CMDFULL_A0_B, // net ID: P4CMDFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P4COUNT_A0_B, // net ID: P4COUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* P4EMPTY_A0_B, // net ID: P4EMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P4ERROR_A0_B, // net ID: P4ERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* P4FULL_A0_B, // net ID: P4FULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P4RDDATA_A0_B, // net ID: P4RDDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* P4RDOVERFLOW_A0_B, // net ID: P4RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* P4WRUNDERRUN_A0_B, // net ID: P4WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			NetFlow* P5CMDEMPTY_A0_B, // net ID: P5CMDEMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P5CMDFULL_A0_B, // net ID: P5CMDFULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P5COUNT_A0_B, // net ID: P5COUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* P5EMPTY_A0_B, // net ID: P5EMPTY lsb: 0  msb: 0 OUTPUT
			NetFlow* P5ERROR_A0_B, // net ID: P5ERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* P5FULL_A0_B, // net ID: P5FULL lsb: 0  msb: 0 OUTPUT
			NetFlow* P5RDDATA_A0_B, // net ID: P5RDDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* P5RDOVERFLOW_A0_B, // net ID: P5RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* P5WRUNDERRUN_A0_B, // net ID: P5WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			NetFlow* RAS_A0_B, // net ID: RAS lsb: 0  msb: 0 OUTPUT
			NetFlow* RST_A0_B, // net ID: RST lsb: 0  msb: 0 OUTPUT
			NetFlow* SELFREFRESHMODE_A0_B, // net ID: SELFREFRESHMODE lsb: 0  msb: 0 OUTPUT
			NetFlow* STATUS_A0_B, // net ID: STATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* UDMN_A0_B, // net ID: UDMN lsb: 0  msb: 0 OUTPUT
			NetFlow* UDMP_A0_B, // net ID: UDMP lsb: 0  msb: 0 OUTPUT
			NetFlow* UOCALSTART_A0_B, // net ID: UOCALSTART lsb: 0  msb: 0 OUTPUT
			NetFlow* UOCMDREADYIN_A0_B, // net ID: UOCMDREADYIN lsb: 0  msb: 0 OUTPUT
			NetFlow* UODATA_A0_B, // net ID: UODATA lsb: 0  msb: 0 OUTPUT
			NetFlow* UODATAVALID_A0_B, // net ID: UODATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* UODONECAL_A0_B, // net ID: UODONECAL lsb: 0  msb: 0 OUTPUT
			NetFlow* UOREFRSHFLAG_A0_B, // net ID: UOREFRSHFLAG lsb: 0  msb: 0 OUTPUT
			NetFlow* UOSDO_A0_B, // net ID: UOSDO lsb: 0  msb: 0 OUTPUT
			NetFlow* WE_A0_B, // net ID: WE lsb: 0  msb: 0 OUTPUT
			NetFlow* DQI_A0_B, // net ID: DQI lsb: 0  msb: 15 INPUT
			NetFlow* DQI_A1_B, // net ID: DQI lsb: 0  msb: 15 INPUT
			NetFlow* DQI_A2_B, // net ID: DQI lsb: 0  msb: 15 INPUT
			NetFlow* DQI_A3_B, // net ID: DQI lsb: 0  msb: 15 INPUT
			NetFlow* DQI_A4_B, // net ID: DQI lsb: 0  msb: 15 INPUT
			NetFlow* DQI_A5_B, // net ID: DQI lsb: 0  msb: 15 INPUT
			NetFlow* DQI_A6_B, // net ID: DQI lsb: 0  msb: 15 INPUT
			NetFlow* DQI_A7_B, // net ID: DQI lsb: 0  msb: 15 INPUT
			NetFlow* DQI_A8_B, // net ID: DQI lsb: 0  msb: 15 INPUT
			NetFlow* DQI_A9_B, // net ID: DQI lsb: 0  msb: 15 INPUT
			NetFlow* DQI_A10_B, // net ID: DQI lsb: 0  msb: 15 INPUT
			NetFlow* DQI_A11_B, // net ID: DQI lsb: 0  msb: 15 INPUT
			NetFlow* DQI_A12_B, // net ID: DQI lsb: 0  msb: 15 INPUT
			NetFlow* DQI_A13_B, // net ID: DQI lsb: 0  msb: 15 INPUT
			NetFlow* DQI_A14_B, // net ID: DQI lsb: 0  msb: 15 INPUT
			NetFlow* DQI_A15_B, // net ID: DQI lsb: 0  msb: 15 INPUT
			NetFlow* DQSIOIN_A0_B, // net ID: DQSIOIN lsb: 0  msb: 0 INPUT
			NetFlow* DQSIOIP_A0_B, // net ID: DQSIOIP lsb: 0  msb: 0 INPUT
			NetFlow* IOIDRPSDI_A0_B, // net ID: IOIDRPSDI lsb: 0  msb: 0 INPUT
			NetFlow* P0ARBEN_A0_B, // net ID: P0ARBEN lsb: 0  msb: 0 INPUT
			NetFlow* P0CMDBA_A0_B, // net ID: P0CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P0CMDBA_A1_B, // net ID: P0CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P0CMDBA_A2_B, // net ID: P0CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P0CMDBL_A0_B, // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P0CMDBL_A1_B, // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P0CMDBL_A2_B, // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P0CMDBL_A3_B, // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P0CMDBL_A4_B, // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P0CMDBL_A5_B, // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P0CMDCA_A0_B, // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P0CMDCA_A1_B, // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P0CMDCA_A2_B, // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P0CMDCA_A3_B, // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P0CMDCA_A4_B, // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P0CMDCA_A5_B, // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P0CMDCA_A6_B, // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P0CMDCA_A7_B, // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P0CMDCA_A8_B, // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P0CMDCA_A9_B, // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P0CMDCA_A10_B, // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P0CMDCA_A11_B, // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P0CMDCLK_A0_B, // net ID: P0CMDCLK lsb: 0  msb: 0 INPUT
			NetFlow* P0CMDEN_A0_B, // net ID: P0CMDEN lsb: 0  msb: 0 INPUT
			NetFlow* P0CMDINSTR_A0_B, // net ID: P0CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P0CMDINSTR_A1_B, // net ID: P0CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P0CMDINSTR_A2_B, // net ID: P0CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P0CMDRA_A0_B, // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P0CMDRA_A1_B, // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P0CMDRA_A2_B, // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P0CMDRA_A3_B, // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P0CMDRA_A4_B, // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P0CMDRA_A5_B, // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P0CMDRA_A6_B, // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P0CMDRA_A7_B, // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P0CMDRA_A8_B, // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P0CMDRA_A9_B, // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P0CMDRA_A10_B, // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P0CMDRA_A11_B, // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P0CMDRA_A12_B, // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P0CMDRA_A13_B, // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P0CMDRA_A14_B, // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P0RDCLK_A0_B, // net ID: P0RDCLK lsb: 0  msb: 0 INPUT
			NetFlow* P0RDEN_A0_B, // net ID: P0RDEN lsb: 0  msb: 0 INPUT
			NetFlow* P0RWRMASK_A0_B, // net ID: P0RWRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P0RWRMASK_A1_B, // net ID: P0RWRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P0RWRMASK_A2_B, // net ID: P0RWRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P0RWRMASK_A3_B, // net ID: P0RWRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P0WRCLK_A0_B, // net ID: P0WRCLK lsb: 0  msb: 0 INPUT
			NetFlow* P0WRDATA_A0_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A1_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A2_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A3_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A4_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A5_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A6_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A7_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A8_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A9_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A10_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A11_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A12_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A13_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A14_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A15_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A16_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A17_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A18_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A19_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A20_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A21_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A22_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A23_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A24_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A25_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A26_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A27_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A28_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A29_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A30_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WRDATA_A31_B, // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P0WREN_A0_B, // net ID: P0WREN lsb: 0  msb: 0 INPUT
			NetFlow* P1ARBEN_A0_B, // net ID: P1ARBEN lsb: 0  msb: 0 INPUT
			NetFlow* P1CMDBA_A0_B, // net ID: P1CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P1CMDBA_A1_B, // net ID: P1CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P1CMDBA_A2_B, // net ID: P1CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P1CMDBL_A0_B, // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P1CMDBL_A1_B, // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P1CMDBL_A2_B, // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P1CMDBL_A3_B, // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P1CMDBL_A4_B, // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P1CMDBL_A5_B, // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P1CMDCA_A0_B, // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P1CMDCA_A1_B, // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P1CMDCA_A2_B, // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P1CMDCA_A3_B, // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P1CMDCA_A4_B, // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P1CMDCA_A5_B, // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P1CMDCA_A6_B, // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P1CMDCA_A7_B, // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P1CMDCA_A8_B, // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P1CMDCA_A9_B, // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P1CMDCA_A10_B, // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P1CMDCA_A11_B, // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P1CMDCLK_A0_B, // net ID: P1CMDCLK lsb: 0  msb: 0 INPUT
			NetFlow* P1CMDEN_A0_B, // net ID: P1CMDEN lsb: 0  msb: 0 INPUT
			NetFlow* P1CMDINSTR_A0_B, // net ID: P1CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P1CMDINSTR_A1_B, // net ID: P1CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P1CMDINSTR_A2_B, // net ID: P1CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P1CMDRA_A0_B, // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P1CMDRA_A1_B, // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P1CMDRA_A2_B, // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P1CMDRA_A3_B, // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P1CMDRA_A4_B, // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P1CMDRA_A5_B, // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P1CMDRA_A6_B, // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P1CMDRA_A7_B, // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P1CMDRA_A8_B, // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P1CMDRA_A9_B, // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P1CMDRA_A10_B, // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P1CMDRA_A11_B, // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P1CMDRA_A12_B, // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P1CMDRA_A13_B, // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P1CMDRA_A14_B, // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P1RDCLK_A0_B, // net ID: P1RDCLK lsb: 0  msb: 0 INPUT
			NetFlow* P1RDEN_A0_B, // net ID: P1RDEN lsb: 0  msb: 0 INPUT
			NetFlow* P1RWRMASK_A0_B, // net ID: P1RWRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P1RWRMASK_A1_B, // net ID: P1RWRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P1RWRMASK_A2_B, // net ID: P1RWRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P1RWRMASK_A3_B, // net ID: P1RWRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P1WRCLK_A0_B, // net ID: P1WRCLK lsb: 0  msb: 0 INPUT
			NetFlow* P1WRDATA_A0_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A1_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A2_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A3_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A4_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A5_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A6_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A7_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A8_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A9_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A10_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A11_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A12_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A13_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A14_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A15_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A16_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A17_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A18_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A19_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A20_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A21_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A22_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A23_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A24_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A25_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A26_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A27_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A28_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A29_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A30_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WRDATA_A31_B, // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P1WREN_A0_B, // net ID: P1WREN lsb: 0  msb: 0 INPUT
			NetFlow* P2ARBEN_A0_B, // net ID: P2ARBEN lsb: 0  msb: 0 INPUT
			NetFlow* P2CLK_A0_B, // net ID: P2CLK lsb: 0  msb: 0 INPUT
			NetFlow* P2CMDBA_A0_B, // net ID: P2CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P2CMDBA_A1_B, // net ID: P2CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P2CMDBA_A2_B, // net ID: P2CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P2CMDBL_A0_B, // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P2CMDBL_A1_B, // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P2CMDBL_A2_B, // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P2CMDBL_A3_B, // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P2CMDBL_A4_B, // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P2CMDBL_A5_B, // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P2CMDCA_A0_B, // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P2CMDCA_A1_B, // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P2CMDCA_A2_B, // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P2CMDCA_A3_B, // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P2CMDCA_A4_B, // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P2CMDCA_A5_B, // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P2CMDCA_A6_B, // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P2CMDCA_A7_B, // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P2CMDCA_A8_B, // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P2CMDCA_A9_B, // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P2CMDCA_A10_B, // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P2CMDCA_A11_B, // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P2CMDCLK_A0_B, // net ID: P2CMDCLK lsb: 0  msb: 0 INPUT
			NetFlow* P2CMDEN_A0_B, // net ID: P2CMDEN lsb: 0  msb: 0 INPUT
			NetFlow* P2CMDINSTR_A0_B, // net ID: P2CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P2CMDINSTR_A1_B, // net ID: P2CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P2CMDINSTR_A2_B, // net ID: P2CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P2CMDRA_A0_B, // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P2CMDRA_A1_B, // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P2CMDRA_A2_B, // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P2CMDRA_A3_B, // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P2CMDRA_A4_B, // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P2CMDRA_A5_B, // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P2CMDRA_A6_B, // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P2CMDRA_A7_B, // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P2CMDRA_A8_B, // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P2CMDRA_A9_B, // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P2CMDRA_A10_B, // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P2CMDRA_A11_B, // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P2CMDRA_A12_B, // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P2CMDRA_A13_B, // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P2CMDRA_A14_B, // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P2EN_A0_B, // net ID: P2EN lsb: 0  msb: 0 INPUT
			NetFlow* P2WRDATA_A0_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A1_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A2_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A3_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A4_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A5_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A6_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A7_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A8_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A9_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A10_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A11_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A12_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A13_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A14_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A15_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A16_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A17_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A18_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A19_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A20_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A21_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A22_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A23_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A24_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A25_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A26_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A27_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A28_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A29_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A30_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRDATA_A31_B, // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P2WRMASK_A0_B, // net ID: P2WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P2WRMASK_A1_B, // net ID: P2WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P2WRMASK_A2_B, // net ID: P2WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P2WRMASK_A3_B, // net ID: P2WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P3ARBEN_A0_B, // net ID: P3ARBEN lsb: 0  msb: 0 INPUT
			NetFlow* P3CLK_A0_B, // net ID: P3CLK lsb: 0  msb: 0 INPUT
			NetFlow* P3CMDBA_A0_B, // net ID: P3CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P3CMDBA_A1_B, // net ID: P3CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P3CMDBA_A2_B, // net ID: P3CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P3CMDBL_A0_B, // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P3CMDBL_A1_B, // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P3CMDBL_A2_B, // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P3CMDBL_A3_B, // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P3CMDBL_A4_B, // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P3CMDBL_A5_B, // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P3CMDCA_A0_B, // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P3CMDCA_A1_B, // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P3CMDCA_A2_B, // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P3CMDCA_A3_B, // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P3CMDCA_A4_B, // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P3CMDCA_A5_B, // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P3CMDCA_A6_B, // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P3CMDCA_A7_B, // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P3CMDCA_A8_B, // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P3CMDCA_A9_B, // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P3CMDCA_A10_B, // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P3CMDCA_A11_B, // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P3CMDCLK_A0_B, // net ID: P3CMDCLK lsb: 0  msb: 0 INPUT
			NetFlow* P3CMDEN_A0_B, // net ID: P3CMDEN lsb: 0  msb: 0 INPUT
			NetFlow* P3CMDINSTR_A0_B, // net ID: P3CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P3CMDINSTR_A1_B, // net ID: P3CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P3CMDINSTR_A2_B, // net ID: P3CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P3CMDRA_A0_B, // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P3CMDRA_A1_B, // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P3CMDRA_A2_B, // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P3CMDRA_A3_B, // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P3CMDRA_A4_B, // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P3CMDRA_A5_B, // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P3CMDRA_A6_B, // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P3CMDRA_A7_B, // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P3CMDRA_A8_B, // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P3CMDRA_A9_B, // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P3CMDRA_A10_B, // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P3CMDRA_A11_B, // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P3CMDRA_A12_B, // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P3CMDRA_A13_B, // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P3CMDRA_A14_B, // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P3EN_A0_B, // net ID: P3EN lsb: 0  msb: 0 INPUT
			NetFlow* P3WRDATA_A0_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A1_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A2_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A3_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A4_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A5_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A6_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A7_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A8_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A9_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A10_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A11_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A12_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A13_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A14_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A15_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A16_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A17_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A18_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A19_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A20_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A21_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A22_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A23_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A24_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A25_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A26_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A27_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A28_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A29_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A30_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRDATA_A31_B, // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P3WRMASK_A0_B, // net ID: P3WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P3WRMASK_A1_B, // net ID: P3WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P3WRMASK_A2_B, // net ID: P3WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P3WRMASK_A3_B, // net ID: P3WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P4ARBEN_A0_B, // net ID: P4ARBEN lsb: 0  msb: 0 INPUT
			NetFlow* P4CLK_A0_B, // net ID: P4CLK lsb: 0  msb: 0 INPUT
			NetFlow* P4CMDBA_A0_B, // net ID: P4CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P4CMDBA_A1_B, // net ID: P4CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P4CMDBA_A2_B, // net ID: P4CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P4CMDBL_A0_B, // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P4CMDBL_A1_B, // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P4CMDBL_A2_B, // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P4CMDBL_A3_B, // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P4CMDBL_A4_B, // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P4CMDBL_A5_B, // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P4CMDCA_A0_B, // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P4CMDCA_A1_B, // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P4CMDCA_A2_B, // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P4CMDCA_A3_B, // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P4CMDCA_A4_B, // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P4CMDCA_A5_B, // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P4CMDCA_A6_B, // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P4CMDCA_A7_B, // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P4CMDCA_A8_B, // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P4CMDCA_A9_B, // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P4CMDCA_A10_B, // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P4CMDCA_A11_B, // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P4CMDCLK_A0_B, // net ID: P4CMDCLK lsb: 0  msb: 0 INPUT
			NetFlow* P4CMDEN_A0_B, // net ID: P4CMDEN lsb: 0  msb: 0 INPUT
			NetFlow* P4CMDINSTR_A0_B, // net ID: P4CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P4CMDINSTR_A1_B, // net ID: P4CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P4CMDINSTR_A2_B, // net ID: P4CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P4CMDRA_A0_B, // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P4CMDRA_A1_B, // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P4CMDRA_A2_B, // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P4CMDRA_A3_B, // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P4CMDRA_A4_B, // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P4CMDRA_A5_B, // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P4CMDRA_A6_B, // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P4CMDRA_A7_B, // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P4CMDRA_A8_B, // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P4CMDRA_A9_B, // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P4CMDRA_A10_B, // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P4CMDRA_A11_B, // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P4CMDRA_A12_B, // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P4CMDRA_A13_B, // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P4CMDRA_A14_B, // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P4EN_A0_B, // net ID: P4EN lsb: 0  msb: 0 INPUT
			NetFlow* P4WRDATA_A0_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A1_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A2_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A3_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A4_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A5_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A6_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A7_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A8_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A9_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A10_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A11_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A12_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A13_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A14_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A15_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A16_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A17_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A18_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A19_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A20_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A21_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A22_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A23_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A24_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A25_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A26_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A27_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A28_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A29_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A30_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRDATA_A31_B, // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P4WRMASK_A0_B, // net ID: P4WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P4WRMASK_A1_B, // net ID: P4WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P4WRMASK_A2_B, // net ID: P4WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P4WRMASK_A3_B, // net ID: P4WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P5ARBEN_A0_B, // net ID: P5ARBEN lsb: 0  msb: 0 INPUT
			NetFlow* P5CLK_A0_B, // net ID: P5CLK lsb: 0  msb: 0 INPUT
			NetFlow* P5CMDBA_A0_B, // net ID: P5CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P5CMDBA_A1_B, // net ID: P5CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P5CMDBA_A2_B, // net ID: P5CMDBA lsb: 0  msb: 2 INPUT
			NetFlow* P5CMDBL_A0_B, // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P5CMDBL_A1_B, // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P5CMDBL_A2_B, // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P5CMDBL_A3_B, // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P5CMDBL_A4_B, // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P5CMDBL_A5_B, // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
			NetFlow* P5CMDCA_A0_B, // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P5CMDCA_A1_B, // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P5CMDCA_A2_B, // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P5CMDCA_A3_B, // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P5CMDCA_A4_B, // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P5CMDCA_A5_B, // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P5CMDCA_A6_B, // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P5CMDCA_A7_B, // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P5CMDCA_A8_B, // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P5CMDCA_A9_B, // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P5CMDCA_A10_B, // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P5CMDCA_A11_B, // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			NetFlow* P5CMDCLK_A0_B, // net ID: P5CMDCLK lsb: 0  msb: 0 INPUT
			NetFlow* P5CMDEN_A0_B, // net ID: P5CMDEN lsb: 0  msb: 0 INPUT
			NetFlow* P5CMDINSTR_A0_B, // net ID: P5CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P5CMDINSTR_A1_B, // net ID: P5CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P5CMDINSTR_A2_B, // net ID: P5CMDINSTR lsb: 0  msb: 2 INPUT
			NetFlow* P5CMDRA_A0_B, // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P5CMDRA_A1_B, // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P5CMDRA_A2_B, // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P5CMDRA_A3_B, // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P5CMDRA_A4_B, // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P5CMDRA_A5_B, // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P5CMDRA_A6_B, // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P5CMDRA_A7_B, // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P5CMDRA_A8_B, // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P5CMDRA_A9_B, // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P5CMDRA_A10_B, // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P5CMDRA_A11_B, // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P5CMDRA_A12_B, // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P5CMDRA_A13_B, // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P5CMDRA_A14_B, // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			NetFlow* P5EN_A0_B, // net ID: P5EN lsb: 0  msb: 0 INPUT
			NetFlow* P5WRDATA_A0_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A1_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A2_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A3_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A4_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A5_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A6_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A7_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A8_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A9_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A10_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A11_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A12_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A13_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A14_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A15_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A16_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A17_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A18_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A19_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A20_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A21_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A22_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A23_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A24_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A25_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A26_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A27_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A28_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A29_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A30_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRDATA_A31_B, // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			NetFlow* P5WRMASK_A0_B, // net ID: P5WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P5WRMASK_A1_B, // net ID: P5WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P5WRMASK_A2_B, // net ID: P5WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* P5WRMASK_A3_B, // net ID: P5WRMASK lsb: 0  msb: 3 INPUT
			NetFlow* PLLCE_A0_B, // net ID: PLLCE lsb: 0  msb: 1 INPUT
			NetFlow* PLLCE_A1_B, // net ID: PLLCE lsb: 0  msb: 1 INPUT
			NetFlow* PLLCLK_A0_B, // net ID: PLLCLK lsb: 0  msb: 1 INPUT
			NetFlow* PLLCLK_A1_B, // net ID: PLLCLK lsb: 0  msb: 1 INPUT
			NetFlow* PLLLOCK_A0_B, // net ID: PLLLOCK lsb: 0  msb: 0 INPUT
			NetFlow* RECAL_A0_B, // net ID: RECAL lsb: 0  msb: 0 INPUT
			NetFlow* SELFREFRESHENTER_A0_B, // net ID: SELFREFRESHENTER lsb: 0  msb: 0 INPUT
			NetFlow* SYSRST_A0_B, // net ID: SYSRST lsb: 0  msb: 0 INPUT
			NetFlow* UDQSIOIN_A0_B, // net ID: UDQSIOIN lsb: 0  msb: 0 INPUT
			NetFlow* UDQSIOIP_A0_B, // net ID: UDQSIOIP lsb: 0  msb: 0 INPUT
			NetFlow* UIADD_A0_B, // net ID: UIADD lsb: 0  msb: 0 INPUT
			NetFlow* UIADDR_A0_B, // net ID: UIADDR lsb: 0  msb: 4 INPUT
			NetFlow* UIADDR_A1_B, // net ID: UIADDR lsb: 0  msb: 4 INPUT
			NetFlow* UIADDR_A2_B, // net ID: UIADDR lsb: 0  msb: 4 INPUT
			NetFlow* UIADDR_A3_B, // net ID: UIADDR lsb: 0  msb: 4 INPUT
			NetFlow* UIADDR_A4_B, // net ID: UIADDR lsb: 0  msb: 4 INPUT
			NetFlow* UIBROADCAST_A0_B, // net ID: UIBROADCAST lsb: 0  msb: 0 INPUT
			NetFlow* UICLK_A0_B, // net ID: UICLK lsb: 0  msb: 0 INPUT
			NetFlow* UICMD_A0_B, // net ID: UICMD lsb: 0  msb: 0 INPUT
			NetFlow* UICMDEN_A0_B, // net ID: UICMDEN lsb: 0  msb: 0 INPUT
			NetFlow* UICMDIN_A0_B, // net ID: UICMDIN lsb: 0  msb: 0 INPUT
			NetFlow* UICS_A0_B, // net ID: UICS lsb: 0  msb: 0 INPUT
			NetFlow* UIDONECAL_A0_B, // net ID: UIDONECAL lsb: 0  msb: 0 INPUT
			NetFlow* UIDQCOUNT_A0_B, // net ID: UIDQCOUNT lsb: 0  msb: 3 INPUT
			NetFlow* UIDQCOUNT_A1_B, // net ID: UIDQCOUNT lsb: 0  msb: 3 INPUT
			NetFlow* UIDQCOUNT_A2_B, // net ID: UIDQCOUNT lsb: 0  msb: 3 INPUT
			NetFlow* UIDQCOUNT_A3_B, // net ID: UIDQCOUNT lsb: 0  msb: 3 INPUT
			NetFlow* UIDQLOWERDEC_A0_B, // net ID: UIDQLOWERDEC lsb: 0  msb: 0 INPUT
			NetFlow* UIDQLOWERINC_A0_B, // net ID: UIDQLOWERINC lsb: 0  msb: 0 INPUT
			NetFlow* UIDQUPPERDEC_A0_B, // net ID: UIDQUPPERDEC lsb: 0  msb: 0 INPUT
			NetFlow* UIDQUPPERINC_A0_B, // net ID: UIDQUPPERINC lsb: 0  msb: 0 INPUT
			NetFlow* UIDRPUPDATE_A0_B, // net ID: UIDRPUPDATE lsb: 0  msb: 0 INPUT
			NetFlow* UILDQSDEC_A0_B, // net ID: UILDQSDEC lsb: 0  msb: 0 INPUT
			NetFlow* UILDQSINC_A0_B, // net ID: UILDQSINC lsb: 0  msb: 0 INPUT
			NetFlow* UIREAD_A0_B, // net ID: UIREAD lsb: 0  msb: 0 INPUT
			NetFlow* UISDI_A0_B, // net ID: UISDI lsb: 0  msb: 0 INPUT
			NetFlow* UIUDQSDEC_A0_B, // net ID: UIUDQSDEC lsb: 0  msb: 0 INPUT
			NetFlow* UIUDQSINC_A0_B // net ID: UIUDQSINC lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
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
			this->ADDR_A0_B = ADDR_A0_B; // net ID: ADDR lsb: 0  msb: 0 OUTPUT
			this->BA_A0_B = BA_A0_B; // net ID: BA lsb: 0  msb: 0 OUTPUT
			this->CAS_A0_B = CAS_A0_B; // net ID: CAS lsb: 0  msb: 0 OUTPUT
			this->CKE_A0_B = CKE_A0_B; // net ID: CKE lsb: 0  msb: 0 OUTPUT
			this->DQIOWEN0_A0_B = DQIOWEN0_A0_B; // net ID: DQIOWEN0 lsb: 0  msb: 0 OUTPUT
			this->DQON_A0_B = DQON_A0_B; // net ID: DQON lsb: 0  msb: 0 OUTPUT
			this->DQOP_A0_B = DQOP_A0_B; // net ID: DQOP lsb: 0  msb: 0 OUTPUT
			this->DQSIOWEN90N_A0_B = DQSIOWEN90N_A0_B; // net ID: DQSIOWEN90N lsb: 0  msb: 0 OUTPUT
			this->DQSIOWEN90P_A0_B = DQSIOWEN90P_A0_B; // net ID: DQSIOWEN90P lsb: 0  msb: 0 OUTPUT
			this->IOIDRPADD_A0_B = IOIDRPADD_A0_B; // net ID: IOIDRPADD lsb: 0  msb: 0 OUTPUT
			this->IOIDRPADDR_A0_B = IOIDRPADDR_A0_B; // net ID: IOIDRPADDR lsb: 0  msb: 0 OUTPUT
			this->IOIDRPBROADCAST_A0_B = IOIDRPBROADCAST_A0_B; // net ID: IOIDRPBROADCAST lsb: 0  msb: 0 OUTPUT
			this->IOIDRPCLK_A0_B = IOIDRPCLK_A0_B; // net ID: IOIDRPCLK lsb: 0  msb: 0 OUTPUT
			this->IOIDRPCS_A0_B = IOIDRPCS_A0_B; // net ID: IOIDRPCS lsb: 0  msb: 0 OUTPUT
			this->IOIDRPSDO_A0_B = IOIDRPSDO_A0_B; // net ID: IOIDRPSDO lsb: 0  msb: 0 OUTPUT
			this->IOIDRPTRAIN_A0_B = IOIDRPTRAIN_A0_B; // net ID: IOIDRPTRAIN lsb: 0  msb: 0 OUTPUT
			this->IOIDRPUPDATE_A0_B = IOIDRPUPDATE_A0_B; // net ID: IOIDRPUPDATE lsb: 0  msb: 0 OUTPUT
			this->LDMN_A0_B = LDMN_A0_B; // net ID: LDMN lsb: 0  msb: 0 OUTPUT
			this->LDMP_A0_B = LDMP_A0_B; // net ID: LDMP lsb: 0  msb: 0 OUTPUT
			this->ODT_A0_B = ODT_A0_B; // net ID: ODT lsb: 0  msb: 0 OUTPUT
			this->P0CMDEMPTY_A0_B = P0CMDEMPTY_A0_B; // net ID: P0CMDEMPTY lsb: 0  msb: 0 OUTPUT
			this->P0CMDFULL_A0_B = P0CMDFULL_A0_B; // net ID: P0CMDFULL lsb: 0  msb: 0 OUTPUT
			this->P0RDCOUNT_A0_B = P0RDCOUNT_A0_B; // net ID: P0RDCOUNT lsb: 0  msb: 0 OUTPUT
			this->P0RDDATA_A0_B = P0RDDATA_A0_B; // net ID: P0RDDATA lsb: 0  msb: 0 OUTPUT
			this->P0RDEMPTY_A0_B = P0RDEMPTY_A0_B; // net ID: P0RDEMPTY lsb: 0  msb: 0 OUTPUT
			this->P0RDERROR_A0_B = P0RDERROR_A0_B; // net ID: P0RDERROR lsb: 0  msb: 0 OUTPUT
			this->P0RDFULL_A0_B = P0RDFULL_A0_B; // net ID: P0RDFULL lsb: 0  msb: 0 OUTPUT
			this->P0RDOVERFLOW_A0_B = P0RDOVERFLOW_A0_B; // net ID: P0RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->P0WRCOUNT_A0_B = P0WRCOUNT_A0_B; // net ID: P0WRCOUNT lsb: 0  msb: 0 OUTPUT
			this->P0WREMPTY_A0_B = P0WREMPTY_A0_B; // net ID: P0WREMPTY lsb: 0  msb: 0 OUTPUT
			this->P0WRERROR_A0_B = P0WRERROR_A0_B; // net ID: P0WRERROR lsb: 0  msb: 0 OUTPUT
			this->P0WRFULL_A0_B = P0WRFULL_A0_B; // net ID: P0WRFULL lsb: 0  msb: 0 OUTPUT
			this->P0WRUNDERRUN_A0_B = P0WRUNDERRUN_A0_B; // net ID: P0WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			this->P1CMDEMPTY_A0_B = P1CMDEMPTY_A0_B; // net ID: P1CMDEMPTY lsb: 0  msb: 0 OUTPUT
			this->P1CMDFULL_A0_B = P1CMDFULL_A0_B; // net ID: P1CMDFULL lsb: 0  msb: 0 OUTPUT
			this->P1RDCOUNT_A0_B = P1RDCOUNT_A0_B; // net ID: P1RDCOUNT lsb: 0  msb: 0 OUTPUT
			this->P1RDDATA_A0_B = P1RDDATA_A0_B; // net ID: P1RDDATA lsb: 0  msb: 0 OUTPUT
			this->P1RDEMPTY_A0_B = P1RDEMPTY_A0_B; // net ID: P1RDEMPTY lsb: 0  msb: 0 OUTPUT
			this->P1RDERROR_A0_B = P1RDERROR_A0_B; // net ID: P1RDERROR lsb: 0  msb: 0 OUTPUT
			this->P1RDFULL_A0_B = P1RDFULL_A0_B; // net ID: P1RDFULL lsb: 0  msb: 0 OUTPUT
			this->P1RDOVERFLOW_A0_B = P1RDOVERFLOW_A0_B; // net ID: P1RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->P1WRCOUNT_A0_B = P1WRCOUNT_A0_B; // net ID: P1WRCOUNT lsb: 0  msb: 0 OUTPUT
			this->P1WREMPTY_A0_B = P1WREMPTY_A0_B; // net ID: P1WREMPTY lsb: 0  msb: 0 OUTPUT
			this->P1WRERROR_A0_B = P1WRERROR_A0_B; // net ID: P1WRERROR lsb: 0  msb: 0 OUTPUT
			this->P1WRFULL_A0_B = P1WRFULL_A0_B; // net ID: P1WRFULL lsb: 0  msb: 0 OUTPUT
			this->P1WRUNDERRUN_A0_B = P1WRUNDERRUN_A0_B; // net ID: P1WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			this->P2CMDEMPTY_A0_B = P2CMDEMPTY_A0_B; // net ID: P2CMDEMPTY lsb: 0  msb: 0 OUTPUT
			this->P2CMDFULL_A0_B = P2CMDFULL_A0_B; // net ID: P2CMDFULL lsb: 0  msb: 0 OUTPUT
			this->P2COUNT_A0_B = P2COUNT_A0_B; // net ID: P2COUNT lsb: 0  msb: 0 OUTPUT
			this->P2EMPTY_A0_B = P2EMPTY_A0_B; // net ID: P2EMPTY lsb: 0  msb: 0 OUTPUT
			this->P2ERROR_A0_B = P2ERROR_A0_B; // net ID: P2ERROR lsb: 0  msb: 0 OUTPUT
			this->P2FULL_A0_B = P2FULL_A0_B; // net ID: P2FULL lsb: 0  msb: 0 OUTPUT
			this->P2RDDATA_A0_B = P2RDDATA_A0_B; // net ID: P2RDDATA lsb: 0  msb: 0 OUTPUT
			this->P2RDOVERFLOW_A0_B = P2RDOVERFLOW_A0_B; // net ID: P2RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->P2WRUNDERRUN_A0_B = P2WRUNDERRUN_A0_B; // net ID: P2WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			this->P3CMDEMPTY_A0_B = P3CMDEMPTY_A0_B; // net ID: P3CMDEMPTY lsb: 0  msb: 0 OUTPUT
			this->P3CMDFULL_A0_B = P3CMDFULL_A0_B; // net ID: P3CMDFULL lsb: 0  msb: 0 OUTPUT
			this->P3COUNT_A0_B = P3COUNT_A0_B; // net ID: P3COUNT lsb: 0  msb: 0 OUTPUT
			this->P3EMPTY_A0_B = P3EMPTY_A0_B; // net ID: P3EMPTY lsb: 0  msb: 0 OUTPUT
			this->P3ERROR_A0_B = P3ERROR_A0_B; // net ID: P3ERROR lsb: 0  msb: 0 OUTPUT
			this->P3FULL_A0_B = P3FULL_A0_B; // net ID: P3FULL lsb: 0  msb: 0 OUTPUT
			this->P3RDDATA_A0_B = P3RDDATA_A0_B; // net ID: P3RDDATA lsb: 0  msb: 0 OUTPUT
			this->P3RDOVERFLOW_A0_B = P3RDOVERFLOW_A0_B; // net ID: P3RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->P3WRUNDERRUN_A0_B = P3WRUNDERRUN_A0_B; // net ID: P3WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			this->P4CMDEMPTY_A0_B = P4CMDEMPTY_A0_B; // net ID: P4CMDEMPTY lsb: 0  msb: 0 OUTPUT
			this->P4CMDFULL_A0_B = P4CMDFULL_A0_B; // net ID: P4CMDFULL lsb: 0  msb: 0 OUTPUT
			this->P4COUNT_A0_B = P4COUNT_A0_B; // net ID: P4COUNT lsb: 0  msb: 0 OUTPUT
			this->P4EMPTY_A0_B = P4EMPTY_A0_B; // net ID: P4EMPTY lsb: 0  msb: 0 OUTPUT
			this->P4ERROR_A0_B = P4ERROR_A0_B; // net ID: P4ERROR lsb: 0  msb: 0 OUTPUT
			this->P4FULL_A0_B = P4FULL_A0_B; // net ID: P4FULL lsb: 0  msb: 0 OUTPUT
			this->P4RDDATA_A0_B = P4RDDATA_A0_B; // net ID: P4RDDATA lsb: 0  msb: 0 OUTPUT
			this->P4RDOVERFLOW_A0_B = P4RDOVERFLOW_A0_B; // net ID: P4RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->P4WRUNDERRUN_A0_B = P4WRUNDERRUN_A0_B; // net ID: P4WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			this->P5CMDEMPTY_A0_B = P5CMDEMPTY_A0_B; // net ID: P5CMDEMPTY lsb: 0  msb: 0 OUTPUT
			this->P5CMDFULL_A0_B = P5CMDFULL_A0_B; // net ID: P5CMDFULL lsb: 0  msb: 0 OUTPUT
			this->P5COUNT_A0_B = P5COUNT_A0_B; // net ID: P5COUNT lsb: 0  msb: 0 OUTPUT
			this->P5EMPTY_A0_B = P5EMPTY_A0_B; // net ID: P5EMPTY lsb: 0  msb: 0 OUTPUT
			this->P5ERROR_A0_B = P5ERROR_A0_B; // net ID: P5ERROR lsb: 0  msb: 0 OUTPUT
			this->P5FULL_A0_B = P5FULL_A0_B; // net ID: P5FULL lsb: 0  msb: 0 OUTPUT
			this->P5RDDATA_A0_B = P5RDDATA_A0_B; // net ID: P5RDDATA lsb: 0  msb: 0 OUTPUT
			this->P5RDOVERFLOW_A0_B = P5RDOVERFLOW_A0_B; // net ID: P5RDOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->P5WRUNDERRUN_A0_B = P5WRUNDERRUN_A0_B; // net ID: P5WRUNDERRUN lsb: 0  msb: 0 OUTPUT
			this->RAS_A0_B = RAS_A0_B; // net ID: RAS lsb: 0  msb: 0 OUTPUT
			this->RST_A0_B = RST_A0_B; // net ID: RST lsb: 0  msb: 0 OUTPUT
			this->SELFREFRESHMODE_A0_B = SELFREFRESHMODE_A0_B; // net ID: SELFREFRESHMODE lsb: 0  msb: 0 OUTPUT
			this->STATUS_A0_B = STATUS_A0_B; // net ID: STATUS lsb: 0  msb: 0 OUTPUT
			this->UDMN_A0_B = UDMN_A0_B; // net ID: UDMN lsb: 0  msb: 0 OUTPUT
			this->UDMP_A0_B = UDMP_A0_B; // net ID: UDMP lsb: 0  msb: 0 OUTPUT
			this->UOCALSTART_A0_B = UOCALSTART_A0_B; // net ID: UOCALSTART lsb: 0  msb: 0 OUTPUT
			this->UOCMDREADYIN_A0_B = UOCMDREADYIN_A0_B; // net ID: UOCMDREADYIN lsb: 0  msb: 0 OUTPUT
			this->UODATA_A0_B = UODATA_A0_B; // net ID: UODATA lsb: 0  msb: 0 OUTPUT
			this->UODATAVALID_A0_B = UODATAVALID_A0_B; // net ID: UODATAVALID lsb: 0  msb: 0 OUTPUT
			this->UODONECAL_A0_B = UODONECAL_A0_B; // net ID: UODONECAL lsb: 0  msb: 0 OUTPUT
			this->UOREFRSHFLAG_A0_B = UOREFRSHFLAG_A0_B; // net ID: UOREFRSHFLAG lsb: 0  msb: 0 OUTPUT
			this->UOSDO_A0_B = UOSDO_A0_B; // net ID: UOSDO lsb: 0  msb: 0 OUTPUT
			this->WE_A0_B = WE_A0_B; // net ID: WE lsb: 0  msb: 0 OUTPUT
			this->DQI_A0_B = DQI_A0_B; // net ID: DQI lsb: 0  msb: 15 INPUT
			this->DQI_A1_B = DQI_A1_B; // net ID: DQI lsb: 0  msb: 15 INPUT
			this->DQI_A2_B = DQI_A2_B; // net ID: DQI lsb: 0  msb: 15 INPUT
			this->DQI_A3_B = DQI_A3_B; // net ID: DQI lsb: 0  msb: 15 INPUT
			this->DQI_A4_B = DQI_A4_B; // net ID: DQI lsb: 0  msb: 15 INPUT
			this->DQI_A5_B = DQI_A5_B; // net ID: DQI lsb: 0  msb: 15 INPUT
			this->DQI_A6_B = DQI_A6_B; // net ID: DQI lsb: 0  msb: 15 INPUT
			this->DQI_A7_B = DQI_A7_B; // net ID: DQI lsb: 0  msb: 15 INPUT
			this->DQI_A8_B = DQI_A8_B; // net ID: DQI lsb: 0  msb: 15 INPUT
			this->DQI_A9_B = DQI_A9_B; // net ID: DQI lsb: 0  msb: 15 INPUT
			this->DQI_A10_B = DQI_A10_B; // net ID: DQI lsb: 0  msb: 15 INPUT
			this->DQI_A11_B = DQI_A11_B; // net ID: DQI lsb: 0  msb: 15 INPUT
			this->DQI_A12_B = DQI_A12_B; // net ID: DQI lsb: 0  msb: 15 INPUT
			this->DQI_A13_B = DQI_A13_B; // net ID: DQI lsb: 0  msb: 15 INPUT
			this->DQI_A14_B = DQI_A14_B; // net ID: DQI lsb: 0  msb: 15 INPUT
			this->DQI_A15_B = DQI_A15_B; // net ID: DQI lsb: 0  msb: 15 INPUT
			this->DQSIOIN_A0_B = DQSIOIN_A0_B; // net ID: DQSIOIN lsb: 0  msb: 0 INPUT
			this->DQSIOIP_A0_B = DQSIOIP_A0_B; // net ID: DQSIOIP lsb: 0  msb: 0 INPUT
			this->IOIDRPSDI_A0_B = IOIDRPSDI_A0_B; // net ID: IOIDRPSDI lsb: 0  msb: 0 INPUT
			this->P0ARBEN_A0_B = P0ARBEN_A0_B; // net ID: P0ARBEN lsb: 0  msb: 0 INPUT
			this->P0CMDBA_A0_B = P0CMDBA_A0_B; // net ID: P0CMDBA lsb: 0  msb: 2 INPUT
			this->P0CMDBA_A1_B = P0CMDBA_A1_B; // net ID: P0CMDBA lsb: 0  msb: 2 INPUT
			this->P0CMDBA_A2_B = P0CMDBA_A2_B; // net ID: P0CMDBA lsb: 0  msb: 2 INPUT
			this->P0CMDBL_A0_B = P0CMDBL_A0_B; // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
			this->P0CMDBL_A1_B = P0CMDBL_A1_B; // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
			this->P0CMDBL_A2_B = P0CMDBL_A2_B; // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
			this->P0CMDBL_A3_B = P0CMDBL_A3_B; // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
			this->P0CMDBL_A4_B = P0CMDBL_A4_B; // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
			this->P0CMDBL_A5_B = P0CMDBL_A5_B; // net ID: P0CMDBL lsb: 0  msb: 5 INPUT
			this->P0CMDCA_A0_B = P0CMDCA_A0_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			this->P0CMDCA_A1_B = P0CMDCA_A1_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			this->P0CMDCA_A2_B = P0CMDCA_A2_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			this->P0CMDCA_A3_B = P0CMDCA_A3_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			this->P0CMDCA_A4_B = P0CMDCA_A4_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			this->P0CMDCA_A5_B = P0CMDCA_A5_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			this->P0CMDCA_A6_B = P0CMDCA_A6_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			this->P0CMDCA_A7_B = P0CMDCA_A7_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			this->P0CMDCA_A8_B = P0CMDCA_A8_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			this->P0CMDCA_A9_B = P0CMDCA_A9_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			this->P0CMDCA_A10_B = P0CMDCA_A10_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			this->P0CMDCA_A11_B = P0CMDCA_A11_B; // net ID: P0CMDCA lsb: 0  msb: 11 INPUT
			this->P0CMDCLK_A0_B = P0CMDCLK_A0_B; // net ID: P0CMDCLK lsb: 0  msb: 0 INPUT
			this->P0CMDEN_A0_B = P0CMDEN_A0_B; // net ID: P0CMDEN lsb: 0  msb: 0 INPUT
			this->P0CMDINSTR_A0_B = P0CMDINSTR_A0_B; // net ID: P0CMDINSTR lsb: 0  msb: 2 INPUT
			this->P0CMDINSTR_A1_B = P0CMDINSTR_A1_B; // net ID: P0CMDINSTR lsb: 0  msb: 2 INPUT
			this->P0CMDINSTR_A2_B = P0CMDINSTR_A2_B; // net ID: P0CMDINSTR lsb: 0  msb: 2 INPUT
			this->P0CMDRA_A0_B = P0CMDRA_A0_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			this->P0CMDRA_A1_B = P0CMDRA_A1_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			this->P0CMDRA_A2_B = P0CMDRA_A2_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			this->P0CMDRA_A3_B = P0CMDRA_A3_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			this->P0CMDRA_A4_B = P0CMDRA_A4_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			this->P0CMDRA_A5_B = P0CMDRA_A5_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			this->P0CMDRA_A6_B = P0CMDRA_A6_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			this->P0CMDRA_A7_B = P0CMDRA_A7_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			this->P0CMDRA_A8_B = P0CMDRA_A8_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			this->P0CMDRA_A9_B = P0CMDRA_A9_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			this->P0CMDRA_A10_B = P0CMDRA_A10_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			this->P0CMDRA_A11_B = P0CMDRA_A11_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			this->P0CMDRA_A12_B = P0CMDRA_A12_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			this->P0CMDRA_A13_B = P0CMDRA_A13_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			this->P0CMDRA_A14_B = P0CMDRA_A14_B; // net ID: P0CMDRA lsb: 0  msb: 14 INPUT
			this->P0RDCLK_A0_B = P0RDCLK_A0_B; // net ID: P0RDCLK lsb: 0  msb: 0 INPUT
			this->P0RDEN_A0_B = P0RDEN_A0_B; // net ID: P0RDEN lsb: 0  msb: 0 INPUT
			this->P0RWRMASK_A0_B = P0RWRMASK_A0_B; // net ID: P0RWRMASK lsb: 0  msb: 3 INPUT
			this->P0RWRMASK_A1_B = P0RWRMASK_A1_B; // net ID: P0RWRMASK lsb: 0  msb: 3 INPUT
			this->P0RWRMASK_A2_B = P0RWRMASK_A2_B; // net ID: P0RWRMASK lsb: 0  msb: 3 INPUT
			this->P0RWRMASK_A3_B = P0RWRMASK_A3_B; // net ID: P0RWRMASK lsb: 0  msb: 3 INPUT
			this->P0WRCLK_A0_B = P0WRCLK_A0_B; // net ID: P0WRCLK lsb: 0  msb: 0 INPUT
			this->P0WRDATA_A0_B = P0WRDATA_A0_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A1_B = P0WRDATA_A1_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A2_B = P0WRDATA_A2_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A3_B = P0WRDATA_A3_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A4_B = P0WRDATA_A4_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A5_B = P0WRDATA_A5_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A6_B = P0WRDATA_A6_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A7_B = P0WRDATA_A7_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A8_B = P0WRDATA_A8_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A9_B = P0WRDATA_A9_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A10_B = P0WRDATA_A10_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A11_B = P0WRDATA_A11_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A12_B = P0WRDATA_A12_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A13_B = P0WRDATA_A13_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A14_B = P0WRDATA_A14_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A15_B = P0WRDATA_A15_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A16_B = P0WRDATA_A16_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A17_B = P0WRDATA_A17_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A18_B = P0WRDATA_A18_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A19_B = P0WRDATA_A19_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A20_B = P0WRDATA_A20_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A21_B = P0WRDATA_A21_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A22_B = P0WRDATA_A22_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A23_B = P0WRDATA_A23_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A24_B = P0WRDATA_A24_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A25_B = P0WRDATA_A25_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A26_B = P0WRDATA_A26_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A27_B = P0WRDATA_A27_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A28_B = P0WRDATA_A28_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A29_B = P0WRDATA_A29_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A30_B = P0WRDATA_A30_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WRDATA_A31_B = P0WRDATA_A31_B; // net ID: P0WRDATA lsb: 0  msb: 31 INPUT
			this->P0WREN_A0_B = P0WREN_A0_B; // net ID: P0WREN lsb: 0  msb: 0 INPUT
			this->P1ARBEN_A0_B = P1ARBEN_A0_B; // net ID: P1ARBEN lsb: 0  msb: 0 INPUT
			this->P1CMDBA_A0_B = P1CMDBA_A0_B; // net ID: P1CMDBA lsb: 0  msb: 2 INPUT
			this->P1CMDBA_A1_B = P1CMDBA_A1_B; // net ID: P1CMDBA lsb: 0  msb: 2 INPUT
			this->P1CMDBA_A2_B = P1CMDBA_A2_B; // net ID: P1CMDBA lsb: 0  msb: 2 INPUT
			this->P1CMDBL_A0_B = P1CMDBL_A0_B; // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
			this->P1CMDBL_A1_B = P1CMDBL_A1_B; // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
			this->P1CMDBL_A2_B = P1CMDBL_A2_B; // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
			this->P1CMDBL_A3_B = P1CMDBL_A3_B; // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
			this->P1CMDBL_A4_B = P1CMDBL_A4_B; // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
			this->P1CMDBL_A5_B = P1CMDBL_A5_B; // net ID: P1CMDBL lsb: 0  msb: 5 INPUT
			this->P1CMDCA_A0_B = P1CMDCA_A0_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			this->P1CMDCA_A1_B = P1CMDCA_A1_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			this->P1CMDCA_A2_B = P1CMDCA_A2_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			this->P1CMDCA_A3_B = P1CMDCA_A3_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			this->P1CMDCA_A4_B = P1CMDCA_A4_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			this->P1CMDCA_A5_B = P1CMDCA_A5_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			this->P1CMDCA_A6_B = P1CMDCA_A6_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			this->P1CMDCA_A7_B = P1CMDCA_A7_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			this->P1CMDCA_A8_B = P1CMDCA_A8_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			this->P1CMDCA_A9_B = P1CMDCA_A9_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			this->P1CMDCA_A10_B = P1CMDCA_A10_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			this->P1CMDCA_A11_B = P1CMDCA_A11_B; // net ID: P1CMDCA lsb: 0  msb: 11 INPUT
			this->P1CMDCLK_A0_B = P1CMDCLK_A0_B; // net ID: P1CMDCLK lsb: 0  msb: 0 INPUT
			this->P1CMDEN_A0_B = P1CMDEN_A0_B; // net ID: P1CMDEN lsb: 0  msb: 0 INPUT
			this->P1CMDINSTR_A0_B = P1CMDINSTR_A0_B; // net ID: P1CMDINSTR lsb: 0  msb: 2 INPUT
			this->P1CMDINSTR_A1_B = P1CMDINSTR_A1_B; // net ID: P1CMDINSTR lsb: 0  msb: 2 INPUT
			this->P1CMDINSTR_A2_B = P1CMDINSTR_A2_B; // net ID: P1CMDINSTR lsb: 0  msb: 2 INPUT
			this->P1CMDRA_A0_B = P1CMDRA_A0_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			this->P1CMDRA_A1_B = P1CMDRA_A1_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			this->P1CMDRA_A2_B = P1CMDRA_A2_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			this->P1CMDRA_A3_B = P1CMDRA_A3_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			this->P1CMDRA_A4_B = P1CMDRA_A4_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			this->P1CMDRA_A5_B = P1CMDRA_A5_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			this->P1CMDRA_A6_B = P1CMDRA_A6_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			this->P1CMDRA_A7_B = P1CMDRA_A7_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			this->P1CMDRA_A8_B = P1CMDRA_A8_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			this->P1CMDRA_A9_B = P1CMDRA_A9_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			this->P1CMDRA_A10_B = P1CMDRA_A10_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			this->P1CMDRA_A11_B = P1CMDRA_A11_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			this->P1CMDRA_A12_B = P1CMDRA_A12_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			this->P1CMDRA_A13_B = P1CMDRA_A13_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			this->P1CMDRA_A14_B = P1CMDRA_A14_B; // net ID: P1CMDRA lsb: 0  msb: 14 INPUT
			this->P1RDCLK_A0_B = P1RDCLK_A0_B; // net ID: P1RDCLK lsb: 0  msb: 0 INPUT
			this->P1RDEN_A0_B = P1RDEN_A0_B; // net ID: P1RDEN lsb: 0  msb: 0 INPUT
			this->P1RWRMASK_A0_B = P1RWRMASK_A0_B; // net ID: P1RWRMASK lsb: 0  msb: 3 INPUT
			this->P1RWRMASK_A1_B = P1RWRMASK_A1_B; // net ID: P1RWRMASK lsb: 0  msb: 3 INPUT
			this->P1RWRMASK_A2_B = P1RWRMASK_A2_B; // net ID: P1RWRMASK lsb: 0  msb: 3 INPUT
			this->P1RWRMASK_A3_B = P1RWRMASK_A3_B; // net ID: P1RWRMASK lsb: 0  msb: 3 INPUT
			this->P1WRCLK_A0_B = P1WRCLK_A0_B; // net ID: P1WRCLK lsb: 0  msb: 0 INPUT
			this->P1WRDATA_A0_B = P1WRDATA_A0_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A1_B = P1WRDATA_A1_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A2_B = P1WRDATA_A2_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A3_B = P1WRDATA_A3_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A4_B = P1WRDATA_A4_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A5_B = P1WRDATA_A5_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A6_B = P1WRDATA_A6_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A7_B = P1WRDATA_A7_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A8_B = P1WRDATA_A8_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A9_B = P1WRDATA_A9_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A10_B = P1WRDATA_A10_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A11_B = P1WRDATA_A11_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A12_B = P1WRDATA_A12_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A13_B = P1WRDATA_A13_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A14_B = P1WRDATA_A14_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A15_B = P1WRDATA_A15_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A16_B = P1WRDATA_A16_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A17_B = P1WRDATA_A17_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A18_B = P1WRDATA_A18_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A19_B = P1WRDATA_A19_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A20_B = P1WRDATA_A20_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A21_B = P1WRDATA_A21_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A22_B = P1WRDATA_A22_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A23_B = P1WRDATA_A23_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A24_B = P1WRDATA_A24_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A25_B = P1WRDATA_A25_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A26_B = P1WRDATA_A26_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A27_B = P1WRDATA_A27_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A28_B = P1WRDATA_A28_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A29_B = P1WRDATA_A29_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A30_B = P1WRDATA_A30_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WRDATA_A31_B = P1WRDATA_A31_B; // net ID: P1WRDATA lsb: 0  msb: 31 INPUT
			this->P1WREN_A0_B = P1WREN_A0_B; // net ID: P1WREN lsb: 0  msb: 0 INPUT
			this->P2ARBEN_A0_B = P2ARBEN_A0_B; // net ID: P2ARBEN lsb: 0  msb: 0 INPUT
			this->P2CLK_A0_B = P2CLK_A0_B; // net ID: P2CLK lsb: 0  msb: 0 INPUT
			this->P2CMDBA_A0_B = P2CMDBA_A0_B; // net ID: P2CMDBA lsb: 0  msb: 2 INPUT
			this->P2CMDBA_A1_B = P2CMDBA_A1_B; // net ID: P2CMDBA lsb: 0  msb: 2 INPUT
			this->P2CMDBA_A2_B = P2CMDBA_A2_B; // net ID: P2CMDBA lsb: 0  msb: 2 INPUT
			this->P2CMDBL_A0_B = P2CMDBL_A0_B; // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
			this->P2CMDBL_A1_B = P2CMDBL_A1_B; // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
			this->P2CMDBL_A2_B = P2CMDBL_A2_B; // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
			this->P2CMDBL_A3_B = P2CMDBL_A3_B; // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
			this->P2CMDBL_A4_B = P2CMDBL_A4_B; // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
			this->P2CMDBL_A5_B = P2CMDBL_A5_B; // net ID: P2CMDBL lsb: 0  msb: 5 INPUT
			this->P2CMDCA_A0_B = P2CMDCA_A0_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			this->P2CMDCA_A1_B = P2CMDCA_A1_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			this->P2CMDCA_A2_B = P2CMDCA_A2_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			this->P2CMDCA_A3_B = P2CMDCA_A3_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			this->P2CMDCA_A4_B = P2CMDCA_A4_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			this->P2CMDCA_A5_B = P2CMDCA_A5_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			this->P2CMDCA_A6_B = P2CMDCA_A6_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			this->P2CMDCA_A7_B = P2CMDCA_A7_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			this->P2CMDCA_A8_B = P2CMDCA_A8_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			this->P2CMDCA_A9_B = P2CMDCA_A9_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			this->P2CMDCA_A10_B = P2CMDCA_A10_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			this->P2CMDCA_A11_B = P2CMDCA_A11_B; // net ID: P2CMDCA lsb: 0  msb: 11 INPUT
			this->P2CMDCLK_A0_B = P2CMDCLK_A0_B; // net ID: P2CMDCLK lsb: 0  msb: 0 INPUT
			this->P2CMDEN_A0_B = P2CMDEN_A0_B; // net ID: P2CMDEN lsb: 0  msb: 0 INPUT
			this->P2CMDINSTR_A0_B = P2CMDINSTR_A0_B; // net ID: P2CMDINSTR lsb: 0  msb: 2 INPUT
			this->P2CMDINSTR_A1_B = P2CMDINSTR_A1_B; // net ID: P2CMDINSTR lsb: 0  msb: 2 INPUT
			this->P2CMDINSTR_A2_B = P2CMDINSTR_A2_B; // net ID: P2CMDINSTR lsb: 0  msb: 2 INPUT
			this->P2CMDRA_A0_B = P2CMDRA_A0_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			this->P2CMDRA_A1_B = P2CMDRA_A1_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			this->P2CMDRA_A2_B = P2CMDRA_A2_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			this->P2CMDRA_A3_B = P2CMDRA_A3_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			this->P2CMDRA_A4_B = P2CMDRA_A4_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			this->P2CMDRA_A5_B = P2CMDRA_A5_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			this->P2CMDRA_A6_B = P2CMDRA_A6_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			this->P2CMDRA_A7_B = P2CMDRA_A7_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			this->P2CMDRA_A8_B = P2CMDRA_A8_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			this->P2CMDRA_A9_B = P2CMDRA_A9_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			this->P2CMDRA_A10_B = P2CMDRA_A10_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			this->P2CMDRA_A11_B = P2CMDRA_A11_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			this->P2CMDRA_A12_B = P2CMDRA_A12_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			this->P2CMDRA_A13_B = P2CMDRA_A13_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			this->P2CMDRA_A14_B = P2CMDRA_A14_B; // net ID: P2CMDRA lsb: 0  msb: 14 INPUT
			this->P2EN_A0_B = P2EN_A0_B; // net ID: P2EN lsb: 0  msb: 0 INPUT
			this->P2WRDATA_A0_B = P2WRDATA_A0_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A1_B = P2WRDATA_A1_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A2_B = P2WRDATA_A2_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A3_B = P2WRDATA_A3_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A4_B = P2WRDATA_A4_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A5_B = P2WRDATA_A5_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A6_B = P2WRDATA_A6_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A7_B = P2WRDATA_A7_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A8_B = P2WRDATA_A8_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A9_B = P2WRDATA_A9_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A10_B = P2WRDATA_A10_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A11_B = P2WRDATA_A11_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A12_B = P2WRDATA_A12_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A13_B = P2WRDATA_A13_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A14_B = P2WRDATA_A14_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A15_B = P2WRDATA_A15_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A16_B = P2WRDATA_A16_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A17_B = P2WRDATA_A17_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A18_B = P2WRDATA_A18_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A19_B = P2WRDATA_A19_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A20_B = P2WRDATA_A20_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A21_B = P2WRDATA_A21_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A22_B = P2WRDATA_A22_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A23_B = P2WRDATA_A23_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A24_B = P2WRDATA_A24_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A25_B = P2WRDATA_A25_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A26_B = P2WRDATA_A26_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A27_B = P2WRDATA_A27_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A28_B = P2WRDATA_A28_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A29_B = P2WRDATA_A29_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A30_B = P2WRDATA_A30_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRDATA_A31_B = P2WRDATA_A31_B; // net ID: P2WRDATA lsb: 0  msb: 31 INPUT
			this->P2WRMASK_A0_B = P2WRMASK_A0_B; // net ID: P2WRMASK lsb: 0  msb: 3 INPUT
			this->P2WRMASK_A1_B = P2WRMASK_A1_B; // net ID: P2WRMASK lsb: 0  msb: 3 INPUT
			this->P2WRMASK_A2_B = P2WRMASK_A2_B; // net ID: P2WRMASK lsb: 0  msb: 3 INPUT
			this->P2WRMASK_A3_B = P2WRMASK_A3_B; // net ID: P2WRMASK lsb: 0  msb: 3 INPUT
			this->P3ARBEN_A0_B = P3ARBEN_A0_B; // net ID: P3ARBEN lsb: 0  msb: 0 INPUT
			this->P3CLK_A0_B = P3CLK_A0_B; // net ID: P3CLK lsb: 0  msb: 0 INPUT
			this->P3CMDBA_A0_B = P3CMDBA_A0_B; // net ID: P3CMDBA lsb: 0  msb: 2 INPUT
			this->P3CMDBA_A1_B = P3CMDBA_A1_B; // net ID: P3CMDBA lsb: 0  msb: 2 INPUT
			this->P3CMDBA_A2_B = P3CMDBA_A2_B; // net ID: P3CMDBA lsb: 0  msb: 2 INPUT
			this->P3CMDBL_A0_B = P3CMDBL_A0_B; // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
			this->P3CMDBL_A1_B = P3CMDBL_A1_B; // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
			this->P3CMDBL_A2_B = P3CMDBL_A2_B; // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
			this->P3CMDBL_A3_B = P3CMDBL_A3_B; // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
			this->P3CMDBL_A4_B = P3CMDBL_A4_B; // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
			this->P3CMDBL_A5_B = P3CMDBL_A5_B; // net ID: P3CMDBL lsb: 0  msb: 5 INPUT
			this->P3CMDCA_A0_B = P3CMDCA_A0_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			this->P3CMDCA_A1_B = P3CMDCA_A1_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			this->P3CMDCA_A2_B = P3CMDCA_A2_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			this->P3CMDCA_A3_B = P3CMDCA_A3_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			this->P3CMDCA_A4_B = P3CMDCA_A4_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			this->P3CMDCA_A5_B = P3CMDCA_A5_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			this->P3CMDCA_A6_B = P3CMDCA_A6_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			this->P3CMDCA_A7_B = P3CMDCA_A7_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			this->P3CMDCA_A8_B = P3CMDCA_A8_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			this->P3CMDCA_A9_B = P3CMDCA_A9_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			this->P3CMDCA_A10_B = P3CMDCA_A10_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			this->P3CMDCA_A11_B = P3CMDCA_A11_B; // net ID: P3CMDCA lsb: 0  msb: 11 INPUT
			this->P3CMDCLK_A0_B = P3CMDCLK_A0_B; // net ID: P3CMDCLK lsb: 0  msb: 0 INPUT
			this->P3CMDEN_A0_B = P3CMDEN_A0_B; // net ID: P3CMDEN lsb: 0  msb: 0 INPUT
			this->P3CMDINSTR_A0_B = P3CMDINSTR_A0_B; // net ID: P3CMDINSTR lsb: 0  msb: 2 INPUT
			this->P3CMDINSTR_A1_B = P3CMDINSTR_A1_B; // net ID: P3CMDINSTR lsb: 0  msb: 2 INPUT
			this->P3CMDINSTR_A2_B = P3CMDINSTR_A2_B; // net ID: P3CMDINSTR lsb: 0  msb: 2 INPUT
			this->P3CMDRA_A0_B = P3CMDRA_A0_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			this->P3CMDRA_A1_B = P3CMDRA_A1_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			this->P3CMDRA_A2_B = P3CMDRA_A2_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			this->P3CMDRA_A3_B = P3CMDRA_A3_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			this->P3CMDRA_A4_B = P3CMDRA_A4_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			this->P3CMDRA_A5_B = P3CMDRA_A5_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			this->P3CMDRA_A6_B = P3CMDRA_A6_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			this->P3CMDRA_A7_B = P3CMDRA_A7_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			this->P3CMDRA_A8_B = P3CMDRA_A8_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			this->P3CMDRA_A9_B = P3CMDRA_A9_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			this->P3CMDRA_A10_B = P3CMDRA_A10_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			this->P3CMDRA_A11_B = P3CMDRA_A11_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			this->P3CMDRA_A12_B = P3CMDRA_A12_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			this->P3CMDRA_A13_B = P3CMDRA_A13_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			this->P3CMDRA_A14_B = P3CMDRA_A14_B; // net ID: P3CMDRA lsb: 0  msb: 14 INPUT
			this->P3EN_A0_B = P3EN_A0_B; // net ID: P3EN lsb: 0  msb: 0 INPUT
			this->P3WRDATA_A0_B = P3WRDATA_A0_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A1_B = P3WRDATA_A1_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A2_B = P3WRDATA_A2_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A3_B = P3WRDATA_A3_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A4_B = P3WRDATA_A4_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A5_B = P3WRDATA_A5_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A6_B = P3WRDATA_A6_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A7_B = P3WRDATA_A7_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A8_B = P3WRDATA_A8_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A9_B = P3WRDATA_A9_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A10_B = P3WRDATA_A10_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A11_B = P3WRDATA_A11_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A12_B = P3WRDATA_A12_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A13_B = P3WRDATA_A13_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A14_B = P3WRDATA_A14_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A15_B = P3WRDATA_A15_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A16_B = P3WRDATA_A16_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A17_B = P3WRDATA_A17_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A18_B = P3WRDATA_A18_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A19_B = P3WRDATA_A19_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A20_B = P3WRDATA_A20_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A21_B = P3WRDATA_A21_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A22_B = P3WRDATA_A22_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A23_B = P3WRDATA_A23_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A24_B = P3WRDATA_A24_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A25_B = P3WRDATA_A25_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A26_B = P3WRDATA_A26_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A27_B = P3WRDATA_A27_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A28_B = P3WRDATA_A28_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A29_B = P3WRDATA_A29_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A30_B = P3WRDATA_A30_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRDATA_A31_B = P3WRDATA_A31_B; // net ID: P3WRDATA lsb: 0  msb: 31 INPUT
			this->P3WRMASK_A0_B = P3WRMASK_A0_B; // net ID: P3WRMASK lsb: 0  msb: 3 INPUT
			this->P3WRMASK_A1_B = P3WRMASK_A1_B; // net ID: P3WRMASK lsb: 0  msb: 3 INPUT
			this->P3WRMASK_A2_B = P3WRMASK_A2_B; // net ID: P3WRMASK lsb: 0  msb: 3 INPUT
			this->P3WRMASK_A3_B = P3WRMASK_A3_B; // net ID: P3WRMASK lsb: 0  msb: 3 INPUT
			this->P4ARBEN_A0_B = P4ARBEN_A0_B; // net ID: P4ARBEN lsb: 0  msb: 0 INPUT
			this->P4CLK_A0_B = P4CLK_A0_B; // net ID: P4CLK lsb: 0  msb: 0 INPUT
			this->P4CMDBA_A0_B = P4CMDBA_A0_B; // net ID: P4CMDBA lsb: 0  msb: 2 INPUT
			this->P4CMDBA_A1_B = P4CMDBA_A1_B; // net ID: P4CMDBA lsb: 0  msb: 2 INPUT
			this->P4CMDBA_A2_B = P4CMDBA_A2_B; // net ID: P4CMDBA lsb: 0  msb: 2 INPUT
			this->P4CMDBL_A0_B = P4CMDBL_A0_B; // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
			this->P4CMDBL_A1_B = P4CMDBL_A1_B; // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
			this->P4CMDBL_A2_B = P4CMDBL_A2_B; // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
			this->P4CMDBL_A3_B = P4CMDBL_A3_B; // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
			this->P4CMDBL_A4_B = P4CMDBL_A4_B; // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
			this->P4CMDBL_A5_B = P4CMDBL_A5_B; // net ID: P4CMDBL lsb: 0  msb: 5 INPUT
			this->P4CMDCA_A0_B = P4CMDCA_A0_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			this->P4CMDCA_A1_B = P4CMDCA_A1_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			this->P4CMDCA_A2_B = P4CMDCA_A2_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			this->P4CMDCA_A3_B = P4CMDCA_A3_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			this->P4CMDCA_A4_B = P4CMDCA_A4_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			this->P4CMDCA_A5_B = P4CMDCA_A5_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			this->P4CMDCA_A6_B = P4CMDCA_A6_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			this->P4CMDCA_A7_B = P4CMDCA_A7_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			this->P4CMDCA_A8_B = P4CMDCA_A8_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			this->P4CMDCA_A9_B = P4CMDCA_A9_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			this->P4CMDCA_A10_B = P4CMDCA_A10_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			this->P4CMDCA_A11_B = P4CMDCA_A11_B; // net ID: P4CMDCA lsb: 0  msb: 11 INPUT
			this->P4CMDCLK_A0_B = P4CMDCLK_A0_B; // net ID: P4CMDCLK lsb: 0  msb: 0 INPUT
			this->P4CMDEN_A0_B = P4CMDEN_A0_B; // net ID: P4CMDEN lsb: 0  msb: 0 INPUT
			this->P4CMDINSTR_A0_B = P4CMDINSTR_A0_B; // net ID: P4CMDINSTR lsb: 0  msb: 2 INPUT
			this->P4CMDINSTR_A1_B = P4CMDINSTR_A1_B; // net ID: P4CMDINSTR lsb: 0  msb: 2 INPUT
			this->P4CMDINSTR_A2_B = P4CMDINSTR_A2_B; // net ID: P4CMDINSTR lsb: 0  msb: 2 INPUT
			this->P4CMDRA_A0_B = P4CMDRA_A0_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			this->P4CMDRA_A1_B = P4CMDRA_A1_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			this->P4CMDRA_A2_B = P4CMDRA_A2_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			this->P4CMDRA_A3_B = P4CMDRA_A3_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			this->P4CMDRA_A4_B = P4CMDRA_A4_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			this->P4CMDRA_A5_B = P4CMDRA_A5_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			this->P4CMDRA_A6_B = P4CMDRA_A6_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			this->P4CMDRA_A7_B = P4CMDRA_A7_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			this->P4CMDRA_A8_B = P4CMDRA_A8_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			this->P4CMDRA_A9_B = P4CMDRA_A9_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			this->P4CMDRA_A10_B = P4CMDRA_A10_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			this->P4CMDRA_A11_B = P4CMDRA_A11_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			this->P4CMDRA_A12_B = P4CMDRA_A12_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			this->P4CMDRA_A13_B = P4CMDRA_A13_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			this->P4CMDRA_A14_B = P4CMDRA_A14_B; // net ID: P4CMDRA lsb: 0  msb: 14 INPUT
			this->P4EN_A0_B = P4EN_A0_B; // net ID: P4EN lsb: 0  msb: 0 INPUT
			this->P4WRDATA_A0_B = P4WRDATA_A0_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A1_B = P4WRDATA_A1_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A2_B = P4WRDATA_A2_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A3_B = P4WRDATA_A3_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A4_B = P4WRDATA_A4_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A5_B = P4WRDATA_A5_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A6_B = P4WRDATA_A6_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A7_B = P4WRDATA_A7_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A8_B = P4WRDATA_A8_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A9_B = P4WRDATA_A9_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A10_B = P4WRDATA_A10_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A11_B = P4WRDATA_A11_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A12_B = P4WRDATA_A12_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A13_B = P4WRDATA_A13_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A14_B = P4WRDATA_A14_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A15_B = P4WRDATA_A15_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A16_B = P4WRDATA_A16_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A17_B = P4WRDATA_A17_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A18_B = P4WRDATA_A18_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A19_B = P4WRDATA_A19_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A20_B = P4WRDATA_A20_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A21_B = P4WRDATA_A21_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A22_B = P4WRDATA_A22_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A23_B = P4WRDATA_A23_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A24_B = P4WRDATA_A24_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A25_B = P4WRDATA_A25_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A26_B = P4WRDATA_A26_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A27_B = P4WRDATA_A27_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A28_B = P4WRDATA_A28_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A29_B = P4WRDATA_A29_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A30_B = P4WRDATA_A30_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRDATA_A31_B = P4WRDATA_A31_B; // net ID: P4WRDATA lsb: 0  msb: 31 INPUT
			this->P4WRMASK_A0_B = P4WRMASK_A0_B; // net ID: P4WRMASK lsb: 0  msb: 3 INPUT
			this->P4WRMASK_A1_B = P4WRMASK_A1_B; // net ID: P4WRMASK lsb: 0  msb: 3 INPUT
			this->P4WRMASK_A2_B = P4WRMASK_A2_B; // net ID: P4WRMASK lsb: 0  msb: 3 INPUT
			this->P4WRMASK_A3_B = P4WRMASK_A3_B; // net ID: P4WRMASK lsb: 0  msb: 3 INPUT
			this->P5ARBEN_A0_B = P5ARBEN_A0_B; // net ID: P5ARBEN lsb: 0  msb: 0 INPUT
			this->P5CLK_A0_B = P5CLK_A0_B; // net ID: P5CLK lsb: 0  msb: 0 INPUT
			this->P5CMDBA_A0_B = P5CMDBA_A0_B; // net ID: P5CMDBA lsb: 0  msb: 2 INPUT
			this->P5CMDBA_A1_B = P5CMDBA_A1_B; // net ID: P5CMDBA lsb: 0  msb: 2 INPUT
			this->P5CMDBA_A2_B = P5CMDBA_A2_B; // net ID: P5CMDBA lsb: 0  msb: 2 INPUT
			this->P5CMDBL_A0_B = P5CMDBL_A0_B; // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
			this->P5CMDBL_A1_B = P5CMDBL_A1_B; // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
			this->P5CMDBL_A2_B = P5CMDBL_A2_B; // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
			this->P5CMDBL_A3_B = P5CMDBL_A3_B; // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
			this->P5CMDBL_A4_B = P5CMDBL_A4_B; // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
			this->P5CMDBL_A5_B = P5CMDBL_A5_B; // net ID: P5CMDBL lsb: 0  msb: 5 INPUT
			this->P5CMDCA_A0_B = P5CMDCA_A0_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			this->P5CMDCA_A1_B = P5CMDCA_A1_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			this->P5CMDCA_A2_B = P5CMDCA_A2_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			this->P5CMDCA_A3_B = P5CMDCA_A3_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			this->P5CMDCA_A4_B = P5CMDCA_A4_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			this->P5CMDCA_A5_B = P5CMDCA_A5_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			this->P5CMDCA_A6_B = P5CMDCA_A6_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			this->P5CMDCA_A7_B = P5CMDCA_A7_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			this->P5CMDCA_A8_B = P5CMDCA_A8_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			this->P5CMDCA_A9_B = P5CMDCA_A9_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			this->P5CMDCA_A10_B = P5CMDCA_A10_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			this->P5CMDCA_A11_B = P5CMDCA_A11_B; // net ID: P5CMDCA lsb: 0  msb: 11 INPUT
			this->P5CMDCLK_A0_B = P5CMDCLK_A0_B; // net ID: P5CMDCLK lsb: 0  msb: 0 INPUT
			this->P5CMDEN_A0_B = P5CMDEN_A0_B; // net ID: P5CMDEN lsb: 0  msb: 0 INPUT
			this->P5CMDINSTR_A0_B = P5CMDINSTR_A0_B; // net ID: P5CMDINSTR lsb: 0  msb: 2 INPUT
			this->P5CMDINSTR_A1_B = P5CMDINSTR_A1_B; // net ID: P5CMDINSTR lsb: 0  msb: 2 INPUT
			this->P5CMDINSTR_A2_B = P5CMDINSTR_A2_B; // net ID: P5CMDINSTR lsb: 0  msb: 2 INPUT
			this->P5CMDRA_A0_B = P5CMDRA_A0_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			this->P5CMDRA_A1_B = P5CMDRA_A1_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			this->P5CMDRA_A2_B = P5CMDRA_A2_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			this->P5CMDRA_A3_B = P5CMDRA_A3_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			this->P5CMDRA_A4_B = P5CMDRA_A4_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			this->P5CMDRA_A5_B = P5CMDRA_A5_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			this->P5CMDRA_A6_B = P5CMDRA_A6_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			this->P5CMDRA_A7_B = P5CMDRA_A7_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			this->P5CMDRA_A8_B = P5CMDRA_A8_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			this->P5CMDRA_A9_B = P5CMDRA_A9_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			this->P5CMDRA_A10_B = P5CMDRA_A10_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			this->P5CMDRA_A11_B = P5CMDRA_A11_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			this->P5CMDRA_A12_B = P5CMDRA_A12_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			this->P5CMDRA_A13_B = P5CMDRA_A13_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			this->P5CMDRA_A14_B = P5CMDRA_A14_B; // net ID: P5CMDRA lsb: 0  msb: 14 INPUT
			this->P5EN_A0_B = P5EN_A0_B; // net ID: P5EN lsb: 0  msb: 0 INPUT
			this->P5WRDATA_A0_B = P5WRDATA_A0_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A1_B = P5WRDATA_A1_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A2_B = P5WRDATA_A2_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A3_B = P5WRDATA_A3_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A4_B = P5WRDATA_A4_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A5_B = P5WRDATA_A5_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A6_B = P5WRDATA_A6_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A7_B = P5WRDATA_A7_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A8_B = P5WRDATA_A8_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A9_B = P5WRDATA_A9_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A10_B = P5WRDATA_A10_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A11_B = P5WRDATA_A11_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A12_B = P5WRDATA_A12_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A13_B = P5WRDATA_A13_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A14_B = P5WRDATA_A14_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A15_B = P5WRDATA_A15_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A16_B = P5WRDATA_A16_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A17_B = P5WRDATA_A17_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A18_B = P5WRDATA_A18_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A19_B = P5WRDATA_A19_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A20_B = P5WRDATA_A20_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A21_B = P5WRDATA_A21_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A22_B = P5WRDATA_A22_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A23_B = P5WRDATA_A23_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A24_B = P5WRDATA_A24_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A25_B = P5WRDATA_A25_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A26_B = P5WRDATA_A26_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A27_B = P5WRDATA_A27_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A28_B = P5WRDATA_A28_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A29_B = P5WRDATA_A29_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A30_B = P5WRDATA_A30_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRDATA_A31_B = P5WRDATA_A31_B; // net ID: P5WRDATA lsb: 0  msb: 31 INPUT
			this->P5WRMASK_A0_B = P5WRMASK_A0_B; // net ID: P5WRMASK lsb: 0  msb: 3 INPUT
			this->P5WRMASK_A1_B = P5WRMASK_A1_B; // net ID: P5WRMASK lsb: 0  msb: 3 INPUT
			this->P5WRMASK_A2_B = P5WRMASK_A2_B; // net ID: P5WRMASK lsb: 0  msb: 3 INPUT
			this->P5WRMASK_A3_B = P5WRMASK_A3_B; // net ID: P5WRMASK lsb: 0  msb: 3 INPUT
			this->PLLCE_A0_B = PLLCE_A0_B; // net ID: PLLCE lsb: 0  msb: 1 INPUT
			this->PLLCE_A1_B = PLLCE_A1_B; // net ID: PLLCE lsb: 0  msb: 1 INPUT
			this->PLLCLK_A0_B = PLLCLK_A0_B; // net ID: PLLCLK lsb: 0  msb: 1 INPUT
			this->PLLCLK_A1_B = PLLCLK_A1_B; // net ID: PLLCLK lsb: 0  msb: 1 INPUT
			this->PLLLOCK_A0_B = PLLLOCK_A0_B; // net ID: PLLLOCK lsb: 0  msb: 0 INPUT
			this->RECAL_A0_B = RECAL_A0_B; // net ID: RECAL lsb: 0  msb: 0 INPUT
			this->SELFREFRESHENTER_A0_B = SELFREFRESHENTER_A0_B; // net ID: SELFREFRESHENTER lsb: 0  msb: 0 INPUT
			this->SYSRST_A0_B = SYSRST_A0_B; // net ID: SYSRST lsb: 0  msb: 0 INPUT
			this->UDQSIOIN_A0_B = UDQSIOIN_A0_B; // net ID: UDQSIOIN lsb: 0  msb: 0 INPUT
			this->UDQSIOIP_A0_B = UDQSIOIP_A0_B; // net ID: UDQSIOIP lsb: 0  msb: 0 INPUT
			this->UIADD_A0_B = UIADD_A0_B; // net ID: UIADD lsb: 0  msb: 0 INPUT
			this->UIADDR_A0_B = UIADDR_A0_B; // net ID: UIADDR lsb: 0  msb: 4 INPUT
			this->UIADDR_A1_B = UIADDR_A1_B; // net ID: UIADDR lsb: 0  msb: 4 INPUT
			this->UIADDR_A2_B = UIADDR_A2_B; // net ID: UIADDR lsb: 0  msb: 4 INPUT
			this->UIADDR_A3_B = UIADDR_A3_B; // net ID: UIADDR lsb: 0  msb: 4 INPUT
			this->UIADDR_A4_B = UIADDR_A4_B; // net ID: UIADDR lsb: 0  msb: 4 INPUT
			this->UIBROADCAST_A0_B = UIBROADCAST_A0_B; // net ID: UIBROADCAST lsb: 0  msb: 0 INPUT
			this->UICLK_A0_B = UICLK_A0_B; // net ID: UICLK lsb: 0  msb: 0 INPUT
			this->UICMD_A0_B = UICMD_A0_B; // net ID: UICMD lsb: 0  msb: 0 INPUT
			this->UICMDEN_A0_B = UICMDEN_A0_B; // net ID: UICMDEN lsb: 0  msb: 0 INPUT
			this->UICMDIN_A0_B = UICMDIN_A0_B; // net ID: UICMDIN lsb: 0  msb: 0 INPUT
			this->UICS_A0_B = UICS_A0_B; // net ID: UICS lsb: 0  msb: 0 INPUT
			this->UIDONECAL_A0_B = UIDONECAL_A0_B; // net ID: UIDONECAL lsb: 0  msb: 0 INPUT
			this->UIDQCOUNT_A0_B = UIDQCOUNT_A0_B; // net ID: UIDQCOUNT lsb: 0  msb: 3 INPUT
			this->UIDQCOUNT_A1_B = UIDQCOUNT_A1_B; // net ID: UIDQCOUNT lsb: 0  msb: 3 INPUT
			this->UIDQCOUNT_A2_B = UIDQCOUNT_A2_B; // net ID: UIDQCOUNT lsb: 0  msb: 3 INPUT
			this->UIDQCOUNT_A3_B = UIDQCOUNT_A3_B; // net ID: UIDQCOUNT lsb: 0  msb: 3 INPUT
			this->UIDQLOWERDEC_A0_B = UIDQLOWERDEC_A0_B; // net ID: UIDQLOWERDEC lsb: 0  msb: 0 INPUT
			this->UIDQLOWERINC_A0_B = UIDQLOWERINC_A0_B; // net ID: UIDQLOWERINC lsb: 0  msb: 0 INPUT
			this->UIDQUPPERDEC_A0_B = UIDQUPPERDEC_A0_B; // net ID: UIDQUPPERDEC lsb: 0  msb: 0 INPUT
			this->UIDQUPPERINC_A0_B = UIDQUPPERINC_A0_B; // net ID: UIDQUPPERINC lsb: 0  msb: 0 INPUT
			this->UIDRPUPDATE_A0_B = UIDRPUPDATE_A0_B; // net ID: UIDRPUPDATE lsb: 0  msb: 0 INPUT
			this->UILDQSDEC_A0_B = UILDQSDEC_A0_B; // net ID: UILDQSDEC lsb: 0  msb: 0 INPUT
			this->UILDQSINC_A0_B = UILDQSINC_A0_B; // net ID: UILDQSINC lsb: 0  msb: 0 INPUT
			this->UIREAD_A0_B = UIREAD_A0_B; // net ID: UIREAD lsb: 0  msb: 0 INPUT
			this->UISDI_A0_B = UISDI_A0_B; // net ID: UISDI lsb: 0  msb: 0 INPUT
			this->UIUDQSDEC_A0_B = UIUDQSDEC_A0_B; // net ID: UIUDQSDEC lsb: 0  msb: 0 INPUT
			this->UIUDQSINC_A0_B = UIUDQSINC_A0_B; // net ID: UIUDQSINC lsb: 0  msb: 0 INPUT
			
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
#endif // X_MCB_H
