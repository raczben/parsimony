/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_PCIE_2_1_H
#define X_PCIE_2_1_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_PCIE_2_1: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_int_t AER_BASE_PTR;
		parameter_enum_t AER_CAP_ECRC_CHECK_CAPABLE;
		parameter_enum_t AER_CAP_ECRC_GEN_CAPABLE;
		parameter_int_t AER_CAP_ID;
		parameter_enum_t AER_CAP_MULTIHEADER;
		parameter_int_t AER_CAP_NEXTPTR;
		parameter_enum_t AER_CAP_ON;
		parameter_int_t AER_CAP_OPTIONAL_ERR_SUPPORT;
		parameter_enum_t AER_CAP_PERMIT_ROOTERR_UPDATE;
		parameter_int_t AER_CAP_VERSION;
		parameter_enum_t ALLOW_X8_GEN2;
		parameter_int_t BAR0;
		parameter_int_t BAR1;
		parameter_int_t BAR2;
		parameter_int_t BAR3;
		parameter_int_t BAR4;
		parameter_int_t BAR5;
		parameter_int_t CAPABILITIES_PTR;
		parameter_int_t CARDBUS_CIS_POINTER;
		parameter_int_t CFG_ECRC_ERR_CPLSTAT;
		parameter_int_t CLASS_CODE;
		parameter_enum_t CMD_INTX_IMPLEMENTED;
		parameter_enum_t CPL_TIMEOUT_DISABLE_SUPPORTED;
		parameter_int_t CPL_TIMEOUT_RANGES_SUPPORTED;
		parameter_int_t CRM_MODULE_RSTS;
		parameter_enum_t DEV_CAP2_ARI_FORWARDING_SUPPORTED;
		parameter_enum_t DEV_CAP2_ATOMICOP32_COMPLETER_SUPPORTED;
		parameter_enum_t DEV_CAP2_ATOMICOP64_COMPLETER_SUPPORTED;
		parameter_enum_t DEV_CAP2_ATOMICOP_ROUTING_SUPPORTED;
		parameter_enum_t DEV_CAP2_CAS128_COMPLETER_SUPPORTED;
		parameter_enum_t DEV_CAP2_ENDEND_TLP_PREFIX_SUPPORTED;
		parameter_enum_t DEV_CAP2_EXTENDED_FMT_FIELD_SUPPORTED;
		parameter_enum_t DEV_CAP2_LTR_MECHANISM_SUPPORTED;
		parameter_int_t DEV_CAP2_MAX_ENDEND_TLP_PREFIXES;
		parameter_enum_t DEV_CAP2_NO_RO_ENABLED_PRPR_PASSING;
		parameter_int_t DEV_CAP2_TPH_COMPLETER_SUPPORTED;
		parameter_enum_t DEV_CAP_ENABLE_SLOT_PWR_LIMIT_SCALE;
		parameter_enum_t DEV_CAP_ENABLE_SLOT_PWR_LIMIT_VALUE;
		parameter_int_t DEV_CAP_ENDPOINT_L0S_LATENCY;
		parameter_int_t DEV_CAP_ENDPOINT_L1_LATENCY;
		parameter_enum_t DEV_CAP_EXT_TAG_SUPPORTED;
		parameter_enum_t DEV_CAP_FUNCTION_LEVEL_RESET_CAPABLE;
		parameter_int_t DEV_CAP_MAX_PAYLOAD_SUPPORTED;
		parameter_int_t DEV_CAP_PHANTOM_FUNCTIONS_SUPPORT;
		parameter_enum_t DEV_CAP_ROLE_BASED_ERROR;
		parameter_int_t DEV_CAP_RSVD_14_12;
		parameter_int_t DEV_CAP_RSVD_17_16;
		parameter_int_t DEV_CAP_RSVD_31_29;
		parameter_enum_t DEV_CONTROL_AUX_POWER_SUPPORTED;
		parameter_enum_t DEV_CONTROL_EXT_TAG_DEFAULT;
		parameter_enum_t DISABLE_ASPM_L1_TIMER;
		parameter_enum_t DISABLE_BAR_FILTERING;
		parameter_enum_t DISABLE_ERR_MSG;
		parameter_enum_t DISABLE_ID_CHECK;
		parameter_enum_t DISABLE_LANE_REVERSAL;
		parameter_enum_t DISABLE_LOCKED_FILTER;
		parameter_enum_t DISABLE_PPM_FILTER;
		parameter_enum_t DISABLE_RX_POISONED_RESP;
		parameter_enum_t DISABLE_RX_TC_FILTER;
		parameter_enum_t DISABLE_SCRAMBLING;
		parameter_int_t DNSTREAM_LINK_NUM;
		parameter_int_t DSN_BASE_PTR;
		parameter_int_t DSN_CAP_ID;
		parameter_int_t DSN_CAP_NEXTPTR;
		parameter_enum_t DSN_CAP_ON;
		parameter_int_t DSN_CAP_VERSION;
		parameter_int_t ENABLE_MSG_ROUTE;
		parameter_enum_t ENABLE_RX_TD_ECRC_TRIM;
		parameter_enum_t ENDEND_TLP_PREFIX_FORWARDING_SUPPORTED;
		parameter_enum_t ENTER_RVRY_EI_L0;
		parameter_enum_t EXIT_LOOPBACK_ON_EI;
		parameter_int_t EXPANSION_ROM;
		parameter_int_t EXT_CFG_CAP_PTR;
		parameter_int_t EXT_CFG_XP_CAP_PTR;
		parameter_int_t HEADER_TYPE;
		parameter_int_t INFER_EI;
		parameter_int_t INTERRUPT_PIN;
		parameter_enum_t INTERRUPT_STAT_AUTO;
		parameter_enum_t IS_SWITCH;
		parameter_int_t LAST_CONFIG_DWORD;
		parameter_enum_t LINK_CAP_ASPM_OPTIONALITY;
		parameter_int_t LINK_CAP_ASPM_SUPPORT;
		parameter_enum_t LINK_CAP_CLOCK_POWER_MANAGEMENT;
		parameter_enum_t LINK_CAP_DLL_LINK_ACTIVE_REPORTING_CAP;
		parameter_int_t LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN1;
		parameter_int_t LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN2;
		parameter_int_t LINK_CAP_L0S_EXIT_LATENCY_GEN1;
		parameter_int_t LINK_CAP_L0S_EXIT_LATENCY_GEN2;
		parameter_int_t LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN1;
		parameter_int_t LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN2;
		parameter_int_t LINK_CAP_L1_EXIT_LATENCY_GEN1;
		parameter_int_t LINK_CAP_L1_EXIT_LATENCY_GEN2;
		parameter_enum_t LINK_CAP_LINK_BANDWIDTH_NOTIFICATION_CAP;
		parameter_int_t LINK_CAP_MAX_LINK_SPEED;
		parameter_int_t LINK_CAP_MAX_LINK_WIDTH;
		parameter_int_t LINK_CAP_RSVD_23;
		parameter_enum_t LINK_CAP_SURPRISE_DOWN_ERROR_CAPABLE;
		parameter_int_t LINK_CONTROL_RCB;
		parameter_enum_t LINK_CTRL2_DEEMPHASIS;
		parameter_enum_t LINK_CTRL2_HW_AUTONOMOUS_SPEED_DISABLE;
		parameter_int_t LINK_CTRL2_TARGET_LINK_SPEED;
		parameter_enum_t LINK_STATUS_SLOT_CLOCK_CONFIG;
		parameter_int_t LL_ACK_TIMEOUT;
		parameter_enum_t LL_ACK_TIMEOUT_EN;
		parameter_int_t LL_ACK_TIMEOUT_FUNC;
		parameter_int_t LL_REPLAY_TIMEOUT;
		parameter_enum_t LL_REPLAY_TIMEOUT_EN;
		parameter_int_t LL_REPLAY_TIMEOUT_FUNC;
		parameter_int_t LTSSM_MAX_LINK_WIDTH;
		parameter_enum_t MPS_FORCE;
		parameter_int_t MSIX_BASE_PTR;
		parameter_int_t MSIX_CAP_ID;
		parameter_int_t MSIX_CAP_NEXTPTR;
		parameter_enum_t MSIX_CAP_ON;
		parameter_int_t MSIX_CAP_PBA_BIR;
		parameter_int_t MSIX_CAP_PBA_OFFSET;
		parameter_int_t MSIX_CAP_TABLE_BIR;
		parameter_int_t MSIX_CAP_TABLE_OFFSET;
		parameter_int_t MSIX_CAP_TABLE_SIZE;
		parameter_int_t MSI_BASE_PTR;
		parameter_enum_t MSI_CAP_64_BIT_ADDR_CAPABLE;
		parameter_int_t MSI_CAP_ID;
		parameter_int_t MSI_CAP_MULTIMSGCAP;
		parameter_int_t MSI_CAP_MULTIMSG_EXTENSION;
		parameter_int_t MSI_CAP_NEXTPTR;
		parameter_enum_t MSI_CAP_ON;
		parameter_enum_t MSI_CAP_PER_VECTOR_MASKING_CAPABLE;
		parameter_int_t N_FTS_COMCLK_GEN1;
		parameter_int_t N_FTS_COMCLK_GEN2;
		parameter_int_t N_FTS_GEN1;
		parameter_int_t N_FTS_GEN2;
		parameter_int_t PCIE_BASE_PTR;
		parameter_int_t PCIE_CAP_CAPABILITY_ID;
		parameter_int_t PCIE_CAP_CAPABILITY_VERSION;
		parameter_int_t PCIE_CAP_DEVICE_PORT_TYPE;
		parameter_int_t PCIE_CAP_NEXTPTR;
		parameter_enum_t PCIE_CAP_ON;
		parameter_int_t PCIE_CAP_RSVD_15_14;
		parameter_enum_t PCIE_CAP_SLOT_IMPLEMENTED;
		parameter_int_t PCIE_REVISION;
		parameter_int_t PL_AUTO_CONFIG;
		parameter_enum_t PL_FAST_TRAIN;
		parameter_int_t PM_ASPML0S_TIMEOUT;
		parameter_enum_t PM_ASPML0S_TIMEOUT_EN;
		parameter_int_t PM_ASPML0S_TIMEOUT_FUNC;
		parameter_enum_t PM_ASPM_FASTEXIT;
		parameter_int_t PM_BASE_PTR;
		parameter_int_t PM_CAP_AUXCURRENT;
		parameter_enum_t PM_CAP_D1SUPPORT;
		parameter_enum_t PM_CAP_D2SUPPORT;
		parameter_enum_t PM_CAP_DSI;
		parameter_int_t PM_CAP_ID;
		parameter_int_t PM_CAP_NEXTPTR;
		parameter_enum_t PM_CAP_ON;
		parameter_int_t PM_CAP_PMESUPPORT;
		parameter_enum_t PM_CAP_PME_CLOCK;
		parameter_int_t PM_CAP_RSVD_04;
		parameter_int_t PM_CAP_VERSION;
		parameter_enum_t PM_CSR_B2B3;
		parameter_enum_t PM_CSR_BPCCEN;
		parameter_enum_t PM_CSR_NOSOFTRST;
		parameter_int_t PM_DATA0;
		parameter_int_t PM_DATA1;
		parameter_int_t PM_DATA2;
		parameter_int_t PM_DATA3;
		parameter_int_t PM_DATA4;
		parameter_int_t PM_DATA5;
		parameter_int_t PM_DATA6;
		parameter_int_t PM_DATA7;
		parameter_int_t PM_DATA_SCALE0;
		parameter_int_t PM_DATA_SCALE1;
		parameter_int_t PM_DATA_SCALE2;
		parameter_int_t PM_DATA_SCALE3;
		parameter_int_t PM_DATA_SCALE4;
		parameter_int_t PM_DATA_SCALE5;
		parameter_int_t PM_DATA_SCALE6;
		parameter_int_t PM_DATA_SCALE7;
		parameter_enum_t PM_MF;
		parameter_int_t RBAR_BASE_PTR;
		parameter_int_t RBAR_CAP_CONTROL_ENCODEDBAR0;
		parameter_int_t RBAR_CAP_CONTROL_ENCODEDBAR1;
		parameter_int_t RBAR_CAP_CONTROL_ENCODEDBAR2;
		parameter_int_t RBAR_CAP_CONTROL_ENCODEDBAR3;
		parameter_int_t RBAR_CAP_CONTROL_ENCODEDBAR4;
		parameter_int_t RBAR_CAP_CONTROL_ENCODEDBAR5;
		parameter_int_t RBAR_CAP_ID;
		parameter_int_t RBAR_CAP_INDEX0;
		parameter_int_t RBAR_CAP_INDEX1;
		parameter_int_t RBAR_CAP_INDEX2;
		parameter_int_t RBAR_CAP_INDEX3;
		parameter_int_t RBAR_CAP_INDEX4;
		parameter_int_t RBAR_CAP_INDEX5;
		parameter_int_t RBAR_CAP_NEXTPTR;
		parameter_enum_t RBAR_CAP_ON;
		parameter_int_t RBAR_CAP_SUP0;
		parameter_int_t RBAR_CAP_SUP1;
		parameter_int_t RBAR_CAP_SUP2;
		parameter_int_t RBAR_CAP_SUP3;
		parameter_int_t RBAR_CAP_SUP4;
		parameter_int_t RBAR_CAP_SUP5;
		parameter_int_t RBAR_CAP_VERSION;
		parameter_int_t RBAR_NUM;
		parameter_int_t RECRC_CHK;
		parameter_enum_t RECRC_CHK_TRIM;
		parameter_enum_t ROOT_CAP_CRS_SW_VISIBILITY;
		parameter_int_t RP_AUTO_SPD;
		parameter_int_t RP_AUTO_SPD_LOOPCNT;
		parameter_enum_t SELECT_DLL_IF;
		parameter_string_t SIM_VERSION;
		parameter_enum_t SLOT_CAP_ATT_BUTTON_PRESENT;
		parameter_enum_t SLOT_CAP_ATT_INDICATOR_PRESENT;
		parameter_enum_t SLOT_CAP_ELEC_INTERLOCK_PRESENT;
		parameter_enum_t SLOT_CAP_HOTPLUG_CAPABLE;
		parameter_enum_t SLOT_CAP_HOTPLUG_SURPRISE;
		parameter_enum_t SLOT_CAP_MRL_SENSOR_PRESENT;
		parameter_enum_t SLOT_CAP_NO_CMD_COMPLETED_SUPPORT;
		parameter_int_t SLOT_CAP_PHYSICAL_SLOT_NUM;
		parameter_enum_t SLOT_CAP_POWER_CONTROLLER_PRESENT;
		parameter_enum_t SLOT_CAP_POWER_INDICATOR_PRESENT;
		parameter_int_t SLOT_CAP_SLOT_POWER_LIMIT_SCALE;
		parameter_int_t SLOT_CAP_SLOT_POWER_LIMIT_VALUE;
		parameter_int_t SPARE_BIT0;
		parameter_int_t SPARE_BIT1;
		parameter_int_t SPARE_BIT2;
		parameter_int_t SPARE_BIT3;
		parameter_int_t SPARE_BIT4;
		parameter_int_t SPARE_BIT5;
		parameter_int_t SPARE_BIT6;
		parameter_int_t SPARE_BIT7;
		parameter_int_t SPARE_BIT8;
		parameter_int_t SPARE_BYTE0;
		parameter_int_t SPARE_BYTE1;
		parameter_int_t SPARE_BYTE2;
		parameter_int_t SPARE_BYTE3;
		parameter_int_t SPARE_WORD0;
		parameter_int_t SPARE_WORD1;
		parameter_int_t SPARE_WORD2;
		parameter_int_t SPARE_WORD3;
		parameter_enum_t SSL_MESSAGE_AUTO;
		parameter_enum_t TECRC_EP_INV;
		parameter_enum_t TL_RBYPASS;
		parameter_int_t TL_RX_RAM_RADDR_LATENCY;
		parameter_int_t TL_RX_RAM_RDATA_LATENCY;
		parameter_int_t TL_RX_RAM_WRITE_LATENCY;
		parameter_enum_t TL_TFC_DISABLE;
		parameter_enum_t TL_TX_CHECKS_DISABLE;
		parameter_int_t TL_TX_RAM_RADDR_LATENCY;
		parameter_int_t TL_TX_RAM_RDATA_LATENCY;
		parameter_int_t TL_TX_RAM_WRITE_LATENCY;
		parameter_enum_t TRN_DW;
		parameter_enum_t TRN_NP_FC;
		parameter_enum_t UPCONFIG_CAPABLE;
		parameter_enum_t UPSTREAM_FACING;
		parameter_enum_t UR_ATOMIC;
		parameter_enum_t UR_CFG1;
		parameter_enum_t UR_INV_REQ;
		parameter_enum_t UR_PRS_RESPONSE;
		parameter_enum_t USER_CLK2_DIV2;
		parameter_int_t USER_CLK_FREQ;
		parameter_enum_t USE_RID_PINS;
		parameter_enum_t VC0_CPL_INFINITE;
		parameter_int_t VC0_RX_RAM_LIMIT;
		parameter_int_t VC0_TOTAL_CREDITS_CD;
		parameter_int_t VC0_TOTAL_CREDITS_CH;
		parameter_int_t VC0_TOTAL_CREDITS_NPD;
		parameter_int_t VC0_TOTAL_CREDITS_NPH;
		parameter_int_t VC0_TOTAL_CREDITS_PD;
		parameter_int_t VC0_TOTAL_CREDITS_PH;
		parameter_int_t VC0_TX_LASTPACKET;
		parameter_int_t VC_BASE_PTR;
		parameter_int_t VC_CAP_ID;
		parameter_int_t VC_CAP_NEXTPTR;
		parameter_enum_t VC_CAP_ON;
		parameter_enum_t VC_CAP_REJECT_SNOOP_TRANSACTIONS;
		parameter_int_t VC_CAP_VERSION;
		parameter_int_t VSEC_BASE_PTR;
		parameter_int_t VSEC_CAP_HDR_ID;
		parameter_int_t VSEC_CAP_HDR_LENGTH;
		parameter_int_t VSEC_CAP_HDR_REVISION;
		parameter_int_t VSEC_CAP_ID;
		parameter_enum_t VSEC_CAP_IS_LINK_VISIBLE;
		parameter_int_t VSEC_CAP_NEXTPTR;
		parameter_enum_t VSEC_CAP_ON;
		parameter_int_t VSEC_CAP_VERSION;
		//Verilog Ports in definition order:
		NetFlow* CFGAERECRCCHECKEN_A0_B; // net ID: CFGAERECRCCHECKEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGAERECRCGENEN_A0_B; // net ID: CFGAERECRCGENEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGAERROOTERRCORRERRRECEIVED_A0_B; // net ID: CFGAERROOTERRCORRERRRECEIVED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGAERROOTERRCORRERRREPORTINGEN_A0_B; // net ID: CFGAERROOTERRCORRERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGAERROOTERRFATALERRRECEIVED_A0_B; // net ID: CFGAERROOTERRFATALERRRECEIVED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGAERROOTERRFATALERRREPORTINGEN_A0_B; // net ID: CFGAERROOTERRFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGAERROOTERRNONFATALERRRECEIVED_A0_B; // net ID: CFGAERROOTERRNONFATALERRRECEIVED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGAERROOTERRNONFATALERRREPORTINGEN_A0_B; // net ID: CFGAERROOTERRNONFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGBRIDGESERREN_A0_B; // net ID: CFGBRIDGESERREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCOMMANDBUSMASTERENABLE_A0_B; // net ID: CFGCOMMANDBUSMASTERENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCOMMANDINTERRUPTDISABLE_A0_B; // net ID: CFGCOMMANDINTERRUPTDISABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCOMMANDIOENABLE_A0_B; // net ID: CFGCOMMANDIOENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCOMMANDMEMENABLE_A0_B; // net ID: CFGCOMMANDMEMENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCOMMANDSERREN_A0_B; // net ID: CFGCOMMANDSERREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROL2ARIFORWARDEN_A0_B; // net ID: CFGDEVCONTROL2ARIFORWARDEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROL2ATOMICEGRESSBLOCK_A0_B; // net ID: CFGDEVCONTROL2ATOMICEGRESSBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROL2ATOMICREQUESTEREN_A0_B; // net ID: CFGDEVCONTROL2ATOMICREQUESTEREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROL2CPLTIMEOUTDIS_A0_B; // net ID: CFGDEVCONTROL2CPLTIMEOUTDIS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROL2CPLTIMEOUTVAL_A0_B; // net ID: CFGDEVCONTROL2CPLTIMEOUTVAL lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROL2IDOCPLEN_A0_B; // net ID: CFGDEVCONTROL2IDOCPLEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROL2IDOREQEN_A0_B; // net ID: CFGDEVCONTROL2IDOREQEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROL2LTREN_A0_B; // net ID: CFGDEVCONTROL2LTREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROL2TLPPREFIXBLOCK_A0_B; // net ID: CFGDEVCONTROL2TLPPREFIXBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLAUXPOWEREN_A0_B; // net ID: CFGDEVCONTROLAUXPOWEREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLCORRERRREPORTINGEN_A0_B; // net ID: CFGDEVCONTROLCORRERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLENABLERO_A0_B; // net ID: CFGDEVCONTROLENABLERO lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLEXTTAGEN_A0_B; // net ID: CFGDEVCONTROLEXTTAGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLFATALERRREPORTINGEN_A0_B; // net ID: CFGDEVCONTROLFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLMAXPAYLOAD_A0_B; // net ID: CFGDEVCONTROLMAXPAYLOAD lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLMAXREADREQ_A0_B; // net ID: CFGDEVCONTROLMAXREADREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLNONFATALREPORTINGEN_A0_B; // net ID: CFGDEVCONTROLNONFATALREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLNOSNOOPEN_A0_B; // net ID: CFGDEVCONTROLNOSNOOPEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLPHANTOMEN_A0_B; // net ID: CFGDEVCONTROLPHANTOMEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLURERRREPORTINGEN_A0_B; // net ID: CFGDEVCONTROLURERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVSTATUSCORRERRDETECTED_A0_B; // net ID: CFGDEVSTATUSCORRERRDETECTED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVSTATUSFATALERRDETECTED_A0_B; // net ID: CFGDEVSTATUSFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVSTATUSNONFATALERRDETECTED_A0_B; // net ID: CFGDEVSTATUSNONFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVSTATUSURDETECTED_A0_B; // net ID: CFGDEVSTATUSURDETECTED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGERRAERHEADERLOGSETN_A0_B; // net ID: CFGERRAERHEADERLOGSETN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGERRCPLRDYN_A0_B; // net ID: CFGERRCPLRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTDO_A0_B; // net ID: CFGINTERRUPTDO lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMMENABLE_A0_B; // net ID: CFGINTERRUPTMMENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIENABLE_A0_B; // net ID: CFGINTERRUPTMSIENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIXENABLE_A0_B; // net ID: CFGINTERRUPTMSIXENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIXFM_A0_B; // net ID: CFGINTERRUPTMSIXFM lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTRDYN_A0_B; // net ID: CFGINTERRUPTRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLASPMCONTROL_A0_B; // net ID: CFGLINKCONTROLASPMCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLAUTOBANDWIDTHINTEN_A0_B; // net ID: CFGLINKCONTROLAUTOBANDWIDTHINTEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLBANDWIDTHINTEN_A0_B; // net ID: CFGLINKCONTROLBANDWIDTHINTEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLCLOCKPMEN_A0_B; // net ID: CFGLINKCONTROLCLOCKPMEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLCOMMONCLOCK_A0_B; // net ID: CFGLINKCONTROLCOMMONCLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLEXTENDEDSYNC_A0_B; // net ID: CFGLINKCONTROLEXTENDEDSYNC lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLHWAUTOWIDTHDIS_A0_B; // net ID: CFGLINKCONTROLHWAUTOWIDTHDIS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLLINKDISABLE_A0_B; // net ID: CFGLINKCONTROLLINKDISABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLRCB_A0_B; // net ID: CFGLINKCONTROLRCB lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLRETRAINLINK_A0_B; // net ID: CFGLINKCONTROLRETRAINLINK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKSTATUSAUTOBANDWIDTHSTATUS_A0_B; // net ID: CFGLINKSTATUSAUTOBANDWIDTHSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKSTATUSBANDWIDTHSTATUS_A0_B; // net ID: CFGLINKSTATUSBANDWIDTHSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKSTATUSCURRENTSPEED_A0_B; // net ID: CFGLINKSTATUSCURRENTSPEED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKSTATUSDLLACTIVE_A0_B; // net ID: CFGLINKSTATUSDLLACTIVE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKSTATUSLINKTRAINING_A0_B; // net ID: CFGLINKSTATUSLINKTRAINING lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKSTATUSNEGOTIATEDWIDTH_A0_B; // net ID: CFGLINKSTATUSNEGOTIATEDWIDTH lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMGMTDO_A0_B; // net ID: CFGMGMTDO lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMGMTRDWRDONEN_A0_B; // net ID: CFGMGMTRDWRDONEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGDATA_A0_B; // net ID: CFGMSGDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVED_A0_B; // net ID: CFGMSGRECEIVED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDASSERTINTA_A0_B; // net ID: CFGMSGRECEIVEDASSERTINTA lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDASSERTINTB_A0_B; // net ID: CFGMSGRECEIVEDASSERTINTB lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDASSERTINTC_A0_B; // net ID: CFGMSGRECEIVEDASSERTINTC lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDASSERTINTD_A0_B; // net ID: CFGMSGRECEIVEDASSERTINTD lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDDEASSERTINTA_A0_B; // net ID: CFGMSGRECEIVEDDEASSERTINTA lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDDEASSERTINTB_A0_B; // net ID: CFGMSGRECEIVEDDEASSERTINTB lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDDEASSERTINTC_A0_B; // net ID: CFGMSGRECEIVEDDEASSERTINTC lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDDEASSERTINTD_A0_B; // net ID: CFGMSGRECEIVEDDEASSERTINTD lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDERRCOR_A0_B; // net ID: CFGMSGRECEIVEDERRCOR lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDERRFATAL_A0_B; // net ID: CFGMSGRECEIVEDERRFATAL lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDERRNONFATAL_A0_B; // net ID: CFGMSGRECEIVEDERRNONFATAL lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDPMASNAK_A0_B; // net ID: CFGMSGRECEIVEDPMASNAK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDPMETO_A0_B; // net ID: CFGMSGRECEIVEDPMETO lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDPMETOACK_A0_B; // net ID: CFGMSGRECEIVEDPMETOACK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDPMPME_A0_B; // net ID: CFGMSGRECEIVEDPMPME lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDSETSLOTPOWERLIMIT_A0_B; // net ID: CFGMSGRECEIVEDSETSLOTPOWERLIMIT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDUNLOCK_A0_B; // net ID: CFGMSGRECEIVEDUNLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPCIELINKSTATE_A0_B; // net ID: CFGPCIELINKSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPMCSRPMEEN_A0_B; // net ID: CFGPMCSRPMEEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPMCSRPMESTATUS_A0_B; // net ID: CFGPMCSRPMESTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPMCSRPOWERSTATE_A0_B; // net ID: CFGPMCSRPOWERSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPMRCVASREQL1N_A0_B; // net ID: CFGPMRCVASREQL1N lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPMRCVENTERL1N_A0_B; // net ID: CFGPMRCVENTERL1N lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPMRCVENTERL23N_A0_B; // net ID: CFGPMRCVENTERL23N lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPMRCVREQACKN_A0_B; // net ID: CFGPMRCVREQACKN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGROOTCONTROLPMEINTEN_A0_B; // net ID: CFGROOTCONTROLPMEINTEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGROOTCONTROLSYSERRCORRERREN_A0_B; // net ID: CFGROOTCONTROLSYSERRCORRERREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGROOTCONTROLSYSERRFATALERREN_A0_B; // net ID: CFGROOTCONTROLSYSERRFATALERREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGROOTCONTROLSYSERRNONFATALERREN_A0_B; // net ID: CFGROOTCONTROLSYSERRNONFATALERREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGSLOTCONTROLELECTROMECHILCTLPULSE_A0_B; // net ID: CFGSLOTCONTROLELECTROMECHILCTLPULSE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTRANSACTION_A0_B; // net ID: CFGTRANSACTION lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTRANSACTIONADDR_A0_B; // net ID: CFGTRANSACTIONADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTRANSACTIONTYPE_A0_B; // net ID: CFGTRANSACTIONTYPE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGVCTCVCMAP_A0_B; // net ID: CFGVCTCVCMAP lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRA_A0_B; // net ID: DBGSCLRA lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRB_A0_B; // net ID: DBGSCLRB lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRC_A0_B; // net ID: DBGSCLRC lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRD_A0_B; // net ID: DBGSCLRD lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRE_A0_B; // net ID: DBGSCLRE lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRF_A0_B; // net ID: DBGSCLRF lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRG_A0_B; // net ID: DBGSCLRG lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRH_A0_B; // net ID: DBGSCLRH lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRI_A0_B; // net ID: DBGSCLRI lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRJ_A0_B; // net ID: DBGSCLRJ lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRK_A0_B; // net ID: DBGSCLRK lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGVECA_A0_B; // net ID: DBGVECA lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGVECB_A0_B; // net ID: DBGVECB lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGVECC_A0_B; // net ID: DBGVECC lsb: 0  msb: 0 OUTPUT
		NetFlow* DRPDO_A0_B; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
		NetFlow* DRPRDY_A0_B; // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2BADDLLPERR_A0_B; // net ID: LL2BADDLLPERR lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2BADTLPERR_A0_B; // net ID: LL2BADTLPERR lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2LINKSTATUS_A0_B; // net ID: LL2LINKSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2PROTOCOLERR_A0_B; // net ID: LL2PROTOCOLERR lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2RECEIVERERR_A0_B; // net ID: LL2RECEIVERERR lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2REPLAYROERR_A0_B; // net ID: LL2REPLAYROERR lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2REPLAYTOERR_A0_B; // net ID: LL2REPLAYTOERR lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2SUSPENDOK_A0_B; // net ID: LL2SUSPENDOK lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2TFCINIT1SEQ_A0_B; // net ID: LL2TFCINIT1SEQ lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2TFCINIT2SEQ_A0_B; // net ID: LL2TFCINIT2SEQ lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2TXIDLE_A0_B; // net ID: LL2TXIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* LNKCLKEN_A0_B; // net ID: LNKCLKEN lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMRXRADDR_A0_B; // net ID: MIMRXRADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMRXREN_A0_B; // net ID: MIMRXREN lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMRXWADDR_A0_B; // net ID: MIMRXWADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMRXWDATA_A0_B; // net ID: MIMRXWDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMRXWEN_A0_B; // net ID: MIMRXWEN lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMTXRADDR_A0_B; // net ID: MIMTXRADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMTXREN_A0_B; // net ID: MIMTXREN lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMTXWADDR_A0_B; // net ID: MIMTXWADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMTXWDATA_A0_B; // net ID: MIMTXWDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMTXWEN_A0_B; // net ID: MIMTXWEN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX0POLARITY_A0_B; // net ID: PIPERX0POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX1POLARITY_A0_B; // net ID: PIPERX1POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX2POLARITY_A0_B; // net ID: PIPERX2POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX3POLARITY_A0_B; // net ID: PIPERX3POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX4POLARITY_A0_B; // net ID: PIPERX4POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX5POLARITY_A0_B; // net ID: PIPERX5POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX6POLARITY_A0_B; // net ID: PIPERX6POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX7POLARITY_A0_B; // net ID: PIPERX7POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0CHARISK_A0_B; // net ID: PIPETX0CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0COMPLIANCE_A0_B; // net ID: PIPETX0COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0DATA_A0_B; // net ID: PIPETX0DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0ELECIDLE_A0_B; // net ID: PIPETX0ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0POWERDOWN_A0_B; // net ID: PIPETX0POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1CHARISK_A0_B; // net ID: PIPETX1CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1COMPLIANCE_A0_B; // net ID: PIPETX1COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1DATA_A0_B; // net ID: PIPETX1DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1ELECIDLE_A0_B; // net ID: PIPETX1ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1POWERDOWN_A0_B; // net ID: PIPETX1POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2CHARISK_A0_B; // net ID: PIPETX2CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2COMPLIANCE_A0_B; // net ID: PIPETX2COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2DATA_A0_B; // net ID: PIPETX2DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2ELECIDLE_A0_B; // net ID: PIPETX2ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2POWERDOWN_A0_B; // net ID: PIPETX2POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3CHARISK_A0_B; // net ID: PIPETX3CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3COMPLIANCE_A0_B; // net ID: PIPETX3COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3DATA_A0_B; // net ID: PIPETX3DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3ELECIDLE_A0_B; // net ID: PIPETX3ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3POWERDOWN_A0_B; // net ID: PIPETX3POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4CHARISK_A0_B; // net ID: PIPETX4CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4COMPLIANCE_A0_B; // net ID: PIPETX4COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4DATA_A0_B; // net ID: PIPETX4DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4ELECIDLE_A0_B; // net ID: PIPETX4ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4POWERDOWN_A0_B; // net ID: PIPETX4POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5CHARISK_A0_B; // net ID: PIPETX5CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5COMPLIANCE_A0_B; // net ID: PIPETX5COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5DATA_A0_B; // net ID: PIPETX5DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5ELECIDLE_A0_B; // net ID: PIPETX5ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5POWERDOWN_A0_B; // net ID: PIPETX5POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6CHARISK_A0_B; // net ID: PIPETX6CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6COMPLIANCE_A0_B; // net ID: PIPETX6COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6DATA_A0_B; // net ID: PIPETX6DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6ELECIDLE_A0_B; // net ID: PIPETX6ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6POWERDOWN_A0_B; // net ID: PIPETX6POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7CHARISK_A0_B; // net ID: PIPETX7CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7COMPLIANCE_A0_B; // net ID: PIPETX7COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7DATA_A0_B; // net ID: PIPETX7DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7ELECIDLE_A0_B; // net ID: PIPETX7ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7POWERDOWN_A0_B; // net ID: PIPETX7POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXDEEMPH_A0_B; // net ID: PIPETXDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXMARGIN_A0_B; // net ID: PIPETXMARGIN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXRATE_A0_B; // net ID: PIPETXRATE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXRCVRDET_A0_B; // net ID: PIPETXRCVRDET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXRESET_A0_B; // net ID: PIPETXRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PL2L0REQ_A0_B; // net ID: PL2L0REQ lsb: 0  msb: 0 OUTPUT
		NetFlow* PL2LINKUP_A0_B; // net ID: PL2LINKUP lsb: 0  msb: 0 OUTPUT
		NetFlow* PL2RECEIVERERR_A0_B; // net ID: PL2RECEIVERERR lsb: 0  msb: 0 OUTPUT
		NetFlow* PL2RECOVERY_A0_B; // net ID: PL2RECOVERY lsb: 0  msb: 0 OUTPUT
		NetFlow* PL2RXELECIDLE_A0_B; // net ID: PL2RXELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PL2RXPMSTATE_A0_B; // net ID: PL2RXPMSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* PL2SUSPENDOK_A0_B; // net ID: PL2SUSPENDOK lsb: 0  msb: 0 OUTPUT
		NetFlow* PLDBGVEC_A0_B; // net ID: PLDBGVEC lsb: 0  msb: 0 OUTPUT
		NetFlow* PLDIRECTEDCHANGEDONE_A0_B; // net ID: PLDIRECTEDCHANGEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* PLINITIALLINKWIDTH_A0_B; // net ID: PLINITIALLINKWIDTH lsb: 0  msb: 0 OUTPUT
		NetFlow* PLLANEREVERSALMODE_A0_B; // net ID: PLLANEREVERSALMODE lsb: 0  msb: 0 OUTPUT
		NetFlow* PLLINKGEN2CAP_A0_B; // net ID: PLLINKGEN2CAP lsb: 0  msb: 0 OUTPUT
		NetFlow* PLLINKPARTNERGEN2SUPPORTED_A0_B; // net ID: PLLINKPARTNERGEN2SUPPORTED lsb: 0  msb: 0 OUTPUT
		NetFlow* PLLINKUPCFGCAP_A0_B; // net ID: PLLINKUPCFGCAP lsb: 0  msb: 0 OUTPUT
		NetFlow* PLLTSSMSTATE_A0_B; // net ID: PLLTSSMSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* PLPHYLNKUPN_A0_B; // net ID: PLPHYLNKUPN lsb: 0  msb: 0 OUTPUT
		NetFlow* PLRECEIVEDHOTRST_A0_B; // net ID: PLRECEIVEDHOTRST lsb: 0  msb: 0 OUTPUT
		NetFlow* PLRXPMSTATE_A0_B; // net ID: PLRXPMSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* PLSELLNKRATE_A0_B; // net ID: PLSELLNKRATE lsb: 0  msb: 0 OUTPUT
		NetFlow* PLSELLNKWIDTH_A0_B; // net ID: PLSELLNKWIDTH lsb: 0  msb: 0 OUTPUT
		NetFlow* PLTXPMSTATE_A0_B; // net ID: PLTXPMSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* RECEIVEDFUNCLVLRSTN_A0_B; // net ID: RECEIVEDFUNCLVLRSTN lsb: 0  msb: 0 OUTPUT
		NetFlow* TL2ASPMSUSPENDCREDITCHECKOK_A0_B; // net ID: TL2ASPMSUSPENDCREDITCHECKOK lsb: 0  msb: 0 OUTPUT
		NetFlow* TL2ASPMSUSPENDREQ_A0_B; // net ID: TL2ASPMSUSPENDREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* TL2ERRFCPE_A0_B; // net ID: TL2ERRFCPE lsb: 0  msb: 0 OUTPUT
		NetFlow* TL2ERRHDR_A0_B; // net ID: TL2ERRHDR lsb: 0  msb: 0 OUTPUT
		NetFlow* TL2ERRMALFORMED_A0_B; // net ID: TL2ERRMALFORMED lsb: 0  msb: 0 OUTPUT
		NetFlow* TL2ERRRXOVERFLOW_A0_B; // net ID: TL2ERRRXOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* TL2PPMSUSPENDOK_A0_B; // net ID: TL2PPMSUSPENDOK lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNFCCPLD_A0_B; // net ID: TRNFCCPLD lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNFCCPLH_A0_B; // net ID: TRNFCCPLH lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNFCNPD_A0_B; // net ID: TRNFCNPD lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNFCNPH_A0_B; // net ID: TRNFCNPH lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNFCPD_A0_B; // net ID: TRNFCPD lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNFCPH_A0_B; // net ID: TRNFCPH lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNLNKUP_A0_B; // net ID: TRNLNKUP lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRBARHIT_A0_B; // net ID: TRNRBARHIT lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRD_A0_B; // net ID: TRNRD lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRDLLPDATA_A0_B; // net ID: TRNRDLLPDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRDLLPSRCRDY_A0_B; // net ID: TRNRDLLPSRCRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRECRCERR_A0_B; // net ID: TRNRECRCERR lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNREOF_A0_B; // net ID: TRNREOF lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRERRFWD_A0_B; // net ID: TRNRERRFWD lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRREM_A0_B; // net ID: TRNRREM lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRSOF_A0_B; // net ID: TRNRSOF lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRSRCDSC_A0_B; // net ID: TRNRSRCDSC lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRSRCRDY_A0_B; // net ID: TRNRSRCRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNTBUFAV_A0_B; // net ID: TRNTBUFAV lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNTCFGREQ_A0_B; // net ID: TRNTCFGREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNTDLLPDSTRDY_A0_B; // net ID: TRNTDLLPDSTRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNTDSTRDY_A0_B; // net ID: TRNTDSTRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNTERRDROP_A0_B; // net ID: TRNTERRDROP lsb: 0  msb: 0 OUTPUT
		NetFlow* USERRSTN_A0_B; // net ID: USERRSTN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGAERINTERRUPTMSGNUM_A0_B; // net ID: CFGAERINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
		NetFlow* CFGAERINTERRUPTMSGNUM_A1_B; // net ID: CFGAERINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
		NetFlow* CFGAERINTERRUPTMSGNUM_A2_B; // net ID: CFGAERINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
		NetFlow* CFGAERINTERRUPTMSGNUM_A3_B; // net ID: CFGAERINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
		NetFlow* CFGAERINTERRUPTMSGNUM_A4_B; // net ID: CFGAERINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
		NetFlow* CFGDEVID_A0_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A1_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A2_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A3_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A4_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A5_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A6_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A7_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A8_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A9_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A10_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A11_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A12_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A13_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A14_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDEVID_A15_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDSBUSNUMBER_A0_B; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGDSBUSNUMBER_A1_B; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGDSBUSNUMBER_A2_B; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGDSBUSNUMBER_A3_B; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGDSBUSNUMBER_A4_B; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGDSBUSNUMBER_A5_B; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGDSBUSNUMBER_A6_B; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGDSBUSNUMBER_A7_B; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGDSDEVICENUMBER_A0_B; // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
		NetFlow* CFGDSDEVICENUMBER_A1_B; // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
		NetFlow* CFGDSDEVICENUMBER_A2_B; // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
		NetFlow* CFGDSDEVICENUMBER_A3_B; // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
		NetFlow* CFGDSDEVICENUMBER_A4_B; // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
		NetFlow* CFGDSFUNCTIONNUMBER_A0_B; // net ID: CFGDSFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
		NetFlow* CFGDSFUNCTIONNUMBER_A1_B; // net ID: CFGDSFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
		NetFlow* CFGDSFUNCTIONNUMBER_A2_B; // net ID: CFGDSFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
		NetFlow* CFGDSN_A0_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A1_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A2_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A3_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A4_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A5_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A6_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A7_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A8_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A9_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A10_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A11_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A12_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A13_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A14_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A15_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A16_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A17_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A18_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A19_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A20_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A21_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A22_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A23_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A24_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A25_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A26_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A27_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A28_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A29_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A30_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A31_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A32_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A33_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A34_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A35_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A36_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A37_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A38_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A39_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A40_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A41_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A42_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A43_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A44_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A45_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A46_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A47_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A48_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A49_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A50_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A51_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A52_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A53_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A54_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A55_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A56_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A57_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A58_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A59_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A60_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A61_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A62_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGDSN_A63_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGERRACSN_A0_B; // net ID: CFGERRACSN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRAERHEADERLOG_A0_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A1_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A2_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A3_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A4_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A5_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A6_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A7_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A8_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A9_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A10_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A11_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A12_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A13_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A14_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A15_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A16_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A17_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A18_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A19_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A20_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A21_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A22_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A23_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A24_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A25_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A26_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A27_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A28_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A29_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A30_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A31_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A32_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A33_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A34_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A35_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A36_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A37_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A38_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A39_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A40_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A41_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A42_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A43_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A44_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A45_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A46_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A47_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A48_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A49_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A50_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A51_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A52_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A53_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A54_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A55_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A56_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A57_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A58_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A59_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A60_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A61_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A62_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A63_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A64_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A65_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A66_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A67_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A68_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A69_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A70_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A71_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A72_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A73_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A74_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A75_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A76_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A77_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A78_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A79_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A80_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A81_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A82_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A83_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A84_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A85_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A86_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A87_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A88_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A89_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A90_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A91_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A92_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A93_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A94_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A95_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A96_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A97_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A98_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A99_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A100_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A101_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A102_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A103_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A104_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A105_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A106_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A107_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A108_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A109_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A110_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A111_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A112_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A113_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A114_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A115_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A116_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A117_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A118_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A119_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A120_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A121_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A122_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A123_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A124_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A125_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A126_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRAERHEADERLOG_A127_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRATOMICEGRESSBLOCKEDN_A0_B; // net ID: CFGERRATOMICEGRESSBLOCKEDN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRCORN_A0_B; // net ID: CFGERRCORN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRCPLABORTN_A0_B; // net ID: CFGERRCPLABORTN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRCPLTIMEOUTN_A0_B; // net ID: CFGERRCPLTIMEOUTN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRCPLUNEXPECTN_A0_B; // net ID: CFGERRCPLUNEXPECTN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRECRCN_A0_B; // net ID: CFGERRECRCN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRINTERNALCORN_A0_B; // net ID: CFGERRINTERNALCORN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRINTERNALUNCORN_A0_B; // net ID: CFGERRINTERNALUNCORN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRLOCKEDN_A0_B; // net ID: CFGERRLOCKEDN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRMALFORMEDN_A0_B; // net ID: CFGERRMALFORMEDN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRMCBLOCKEDN_A0_B; // net ID: CFGERRMCBLOCKEDN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRNORECOVERYN_A0_B; // net ID: CFGERRNORECOVERYN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRPOISONEDN_A0_B; // net ID: CFGERRPOISONEDN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRPOSTEDN_A0_B; // net ID: CFGERRPOSTEDN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A0_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A1_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A2_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A3_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A4_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A5_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A6_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A7_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A8_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A9_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A10_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A11_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A12_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A13_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A14_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A15_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A16_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A17_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A18_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A19_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A20_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A21_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A22_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A23_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A24_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A25_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A26_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A27_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A28_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A29_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A30_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A31_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A32_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A33_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A34_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A35_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A36_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A37_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A38_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A39_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A40_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A41_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A42_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A43_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A44_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A45_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A46_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRTLPCPLHEADER_A47_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRURN_A0_B; // net ID: CFGERRURN lsb: 0  msb: 0 INPUT
		NetFlow* CFGFORCECOMMONCLOCKOFF_A0_B; // net ID: CFGFORCECOMMONCLOCKOFF lsb: 0  msb: 0 INPUT
		NetFlow* CFGFORCEEXTENDEDSYNCON_A0_B; // net ID: CFGFORCEEXTENDEDSYNCON lsb: 0  msb: 0 INPUT
		NetFlow* CFGFORCEMPS_A0_B; // net ID: CFGFORCEMPS lsb: 0  msb: 2 INPUT
		NetFlow* CFGFORCEMPS_A1_B; // net ID: CFGFORCEMPS lsb: 0  msb: 2 INPUT
		NetFlow* CFGFORCEMPS_A2_B; // net ID: CFGFORCEMPS lsb: 0  msb: 2 INPUT
		NetFlow* CFGINTERRUPTASSERTN_A0_B; // net ID: CFGINTERRUPTASSERTN lsb: 0  msb: 0 INPUT
		NetFlow* CFGINTERRUPTDI_A0_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
		NetFlow* CFGINTERRUPTDI_A1_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
		NetFlow* CFGINTERRUPTDI_A2_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
		NetFlow* CFGINTERRUPTDI_A3_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
		NetFlow* CFGINTERRUPTDI_A4_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
		NetFlow* CFGINTERRUPTDI_A5_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
		NetFlow* CFGINTERRUPTDI_A6_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
		NetFlow* CFGINTERRUPTDI_A7_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
		NetFlow* CFGINTERRUPTN_A0_B; // net ID: CFGINTERRUPTN lsb: 0  msb: 0 INPUT
		NetFlow* CFGINTERRUPTSTATN_A0_B; // net ID: CFGINTERRUPTSTATN lsb: 0  msb: 0 INPUT
		NetFlow* CFGMGMTBYTEENN_A0_B; // net ID: CFGMGMTBYTEENN lsb: 0  msb: 3 INPUT
		NetFlow* CFGMGMTBYTEENN_A1_B; // net ID: CFGMGMTBYTEENN lsb: 0  msb: 3 INPUT
		NetFlow* CFGMGMTBYTEENN_A2_B; // net ID: CFGMGMTBYTEENN lsb: 0  msb: 3 INPUT
		NetFlow* CFGMGMTBYTEENN_A3_B; // net ID: CFGMGMTBYTEENN lsb: 0  msb: 3 INPUT
		NetFlow* CFGMGMTDI_A0_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A1_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A2_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A3_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A4_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A5_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A6_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A7_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A8_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A9_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A10_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A11_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A12_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A13_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A14_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A15_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A16_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A17_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A18_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A19_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A20_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A21_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A22_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A23_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A24_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A25_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A26_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A27_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A28_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A29_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A30_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDI_A31_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDWADDR_A0_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGMGMTDWADDR_A1_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGMGMTDWADDR_A2_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGMGMTDWADDR_A3_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGMGMTDWADDR_A4_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGMGMTDWADDR_A5_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGMGMTDWADDR_A6_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGMGMTDWADDR_A7_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGMGMTDWADDR_A8_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGMGMTDWADDR_A9_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGMGMTRDENN_A0_B; // net ID: CFGMGMTRDENN lsb: 0  msb: 0 INPUT
		NetFlow* CFGMGMTWRENN_A0_B; // net ID: CFGMGMTWRENN lsb: 0  msb: 0 INPUT
		NetFlow* CFGMGMTWRREADONLYN_A0_B; // net ID: CFGMGMTWRREADONLYN lsb: 0  msb: 0 INPUT
		NetFlow* CFGMGMTWRRW1CASRWN_A0_B; // net ID: CFGMGMTWRRW1CASRWN lsb: 0  msb: 0 INPUT
		NetFlow* CFGPCIECAPINTERRUPTMSGNUM_A0_B; // net ID: CFGPCIECAPINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
		NetFlow* CFGPCIECAPINTERRUPTMSGNUM_A1_B; // net ID: CFGPCIECAPINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
		NetFlow* CFGPCIECAPINTERRUPTMSGNUM_A2_B; // net ID: CFGPCIECAPINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
		NetFlow* CFGPCIECAPINTERRUPTMSGNUM_A3_B; // net ID: CFGPCIECAPINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
		NetFlow* CFGPCIECAPINTERRUPTMSGNUM_A4_B; // net ID: CFGPCIECAPINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
		NetFlow* CFGPMFORCESTATE_A0_B; // net ID: CFGPMFORCESTATE lsb: 0  msb: 1 INPUT
		NetFlow* CFGPMFORCESTATE_A1_B; // net ID: CFGPMFORCESTATE lsb: 0  msb: 1 INPUT
		NetFlow* CFGPMFORCESTATEENN_A0_B; // net ID: CFGPMFORCESTATEENN lsb: 0  msb: 0 INPUT
		NetFlow* CFGPMHALTASPML0SN_A0_B; // net ID: CFGPMHALTASPML0SN lsb: 0  msb: 0 INPUT
		NetFlow* CFGPMHALTASPML1N_A0_B; // net ID: CFGPMHALTASPML1N lsb: 0  msb: 0 INPUT
		NetFlow* CFGPMSENDPMETON_A0_B; // net ID: CFGPMSENDPMETON lsb: 0  msb: 0 INPUT
		NetFlow* CFGPMTURNOFFOKN_A0_B; // net ID: CFGPMTURNOFFOKN lsb: 0  msb: 0 INPUT
		NetFlow* CFGPMWAKEN_A0_B; // net ID: CFGPMWAKEN lsb: 0  msb: 0 INPUT
		NetFlow* CFGPORTNUMBER_A0_B; // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGPORTNUMBER_A1_B; // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGPORTNUMBER_A2_B; // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGPORTNUMBER_A3_B; // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGPORTNUMBER_A4_B; // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGPORTNUMBER_A5_B; // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGPORTNUMBER_A6_B; // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGPORTNUMBER_A7_B; // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGREVID_A0_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
		NetFlow* CFGREVID_A1_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
		NetFlow* CFGREVID_A2_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
		NetFlow* CFGREVID_A3_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
		NetFlow* CFGREVID_A4_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
		NetFlow* CFGREVID_A5_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
		NetFlow* CFGREVID_A6_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
		NetFlow* CFGREVID_A7_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
		NetFlow* CFGSUBSYSID_A0_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A1_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A2_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A3_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A4_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A5_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A6_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A7_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A8_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A9_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A10_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A11_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A12_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A13_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A14_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSID_A15_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENDID_A0_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENDID_A1_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENDID_A2_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENDID_A3_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENDID_A4_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENDID_A5_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENDID_A6_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENDID_A7_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENDID_A8_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENDID_A9_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENDID_A10_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENDID_A11_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENDID_A12_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENDID_A13_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENDID_A14_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENDID_A15_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGTRNPENDINGN_A0_B; // net ID: CFGTRNPENDINGN lsb: 0  msb: 0 INPUT
		NetFlow* CFGVENDID_A0_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENDID_A1_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENDID_A2_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENDID_A3_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENDID_A4_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENDID_A5_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENDID_A6_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENDID_A7_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENDID_A8_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENDID_A9_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENDID_A10_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENDID_A11_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENDID_A12_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENDID_A13_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENDID_A14_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGVENDID_A15_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CMRSTN_A0_B; // net ID: CMRSTN lsb: 0  msb: 0 INPUT
		NetFlow* CMSTICKYRSTN_A0_B; // net ID: CMSTICKYRSTN lsb: 0  msb: 0 INPUT
		NetFlow* DBGMODE_A0_B; // net ID: DBGMODE lsb: 0  msb: 1 INPUT
		NetFlow* DBGMODE_A1_B; // net ID: DBGMODE lsb: 0  msb: 1 INPUT
		NetFlow* DBGSUBMODE_A0_B; // net ID: DBGSUBMODE lsb: 0  msb: 0 INPUT
		NetFlow* DLRSTN_A0_B; // net ID: DLRSTN lsb: 0  msb: 0 INPUT
		NetFlow* DRPADDR_A0_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPADDR_A1_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPADDR_A2_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPADDR_A3_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPADDR_A4_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPADDR_A5_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPADDR_A6_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPADDR_A7_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPADDR_A8_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPCLK_A0_B; // net ID: DRPCLK lsb: 0  msb: 0 INPUT
		NetFlow* DRPDI_A0_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A1_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A2_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A3_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A4_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A5_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A6_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A7_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A8_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A9_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A10_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A11_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A12_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A13_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A14_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPDI_A15_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPEN_A0_B; // net ID: DRPEN lsb: 0  msb: 0 INPUT
		NetFlow* DRPWE_A0_B; // net ID: DRPWE lsb: 0  msb: 0 INPUT
		NetFlow* FUNCLVLRSTN_A0_B; // net ID: FUNCLVLRSTN lsb: 0  msb: 0 INPUT
		NetFlow* LL2SENDASREQL1_A0_B; // net ID: LL2SENDASREQL1 lsb: 0  msb: 0 INPUT
		NetFlow* LL2SENDENTERL1_A0_B; // net ID: LL2SENDENTERL1 lsb: 0  msb: 0 INPUT
		NetFlow* LL2SENDENTERL23_A0_B; // net ID: LL2SENDENTERL23 lsb: 0  msb: 0 INPUT
		NetFlow* LL2SENDPMACK_A0_B; // net ID: LL2SENDPMACK lsb: 0  msb: 0 INPUT
		NetFlow* LL2SUSPENDNOW_A0_B; // net ID: LL2SUSPENDNOW lsb: 0  msb: 0 INPUT
		NetFlow* LL2TLPRCV_A0_B; // net ID: LL2TLPRCV lsb: 0  msb: 0 INPUT
		NetFlow* MIMRXRDATA_A0_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A1_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A2_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A3_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A4_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A5_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A6_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A7_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A8_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A9_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A10_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A11_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A12_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A13_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A14_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A15_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A16_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A17_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A18_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A19_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A20_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A21_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A22_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A23_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A24_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A25_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A26_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A27_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A28_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A29_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A30_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A31_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A32_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A33_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A34_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A35_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A36_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A37_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A38_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A39_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A40_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A41_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A42_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A43_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A44_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A45_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A46_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A47_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A48_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A49_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A50_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A51_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A52_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A53_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A54_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A55_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A56_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A57_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A58_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A59_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A60_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A61_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A62_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A63_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A64_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A65_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A66_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMRXRDATA_A67_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMTXRDATA_A0_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A1_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A2_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A3_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A4_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A5_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A6_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A7_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A8_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A9_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A10_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A11_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A12_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A13_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A14_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A15_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A16_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A17_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A18_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A19_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A20_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A21_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A22_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A23_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A24_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A25_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A26_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A27_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A28_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A29_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A30_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A31_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A32_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A33_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A34_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A35_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A36_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A37_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A38_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A39_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A40_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A41_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A42_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A43_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A44_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A45_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A46_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A47_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A48_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A49_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A50_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A51_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A52_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A53_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A54_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A55_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A56_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A57_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A58_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A59_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A60_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A61_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A62_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A63_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A64_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A65_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A66_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A67_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* MIMTXRDATA_A68_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* PIPECLK_A0_B; // net ID: PIPECLK lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0CHANISALIGNED_A0_B; // net ID: PIPERX0CHANISALIGNED lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0CHARISK_A0_B; // net ID: PIPERX0CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX0CHARISK_A1_B; // net ID: PIPERX0CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX0DATA_A0_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX0DATA_A1_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX0DATA_A2_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX0DATA_A3_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX0DATA_A4_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX0DATA_A5_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX0DATA_A6_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX0DATA_A7_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX0DATA_A8_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX0DATA_A9_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX0DATA_A10_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX0DATA_A11_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX0DATA_A12_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX0DATA_A13_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX0DATA_A14_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX0DATA_A15_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX0ELECIDLE_A0_B; // net ID: PIPERX0ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0PHYSTATUS_A0_B; // net ID: PIPERX0PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0STATUS_A0_B; // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX0STATUS_A1_B; // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX0STATUS_A2_B; // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX0VALID_A0_B; // net ID: PIPERX0VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1CHANISALIGNED_A0_B; // net ID: PIPERX1CHANISALIGNED lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1CHARISK_A0_B; // net ID: PIPERX1CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX1CHARISK_A1_B; // net ID: PIPERX1CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX1DATA_A0_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX1DATA_A1_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX1DATA_A2_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX1DATA_A3_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX1DATA_A4_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX1DATA_A5_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX1DATA_A6_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX1DATA_A7_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX1DATA_A8_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX1DATA_A9_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX1DATA_A10_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX1DATA_A11_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX1DATA_A12_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX1DATA_A13_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX1DATA_A14_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX1DATA_A15_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX1ELECIDLE_A0_B; // net ID: PIPERX1ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1PHYSTATUS_A0_B; // net ID: PIPERX1PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1STATUS_A0_B; // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX1STATUS_A1_B; // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX1STATUS_A2_B; // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX1VALID_A0_B; // net ID: PIPERX1VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2CHANISALIGNED_A0_B; // net ID: PIPERX2CHANISALIGNED lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2CHARISK_A0_B; // net ID: PIPERX2CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX2CHARISK_A1_B; // net ID: PIPERX2CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX2DATA_A0_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX2DATA_A1_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX2DATA_A2_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX2DATA_A3_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX2DATA_A4_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX2DATA_A5_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX2DATA_A6_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX2DATA_A7_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX2DATA_A8_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX2DATA_A9_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX2DATA_A10_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX2DATA_A11_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX2DATA_A12_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX2DATA_A13_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX2DATA_A14_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX2DATA_A15_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX2ELECIDLE_A0_B; // net ID: PIPERX2ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2PHYSTATUS_A0_B; // net ID: PIPERX2PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2STATUS_A0_B; // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX2STATUS_A1_B; // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX2STATUS_A2_B; // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX2VALID_A0_B; // net ID: PIPERX2VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3CHANISALIGNED_A0_B; // net ID: PIPERX3CHANISALIGNED lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3CHARISK_A0_B; // net ID: PIPERX3CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX3CHARISK_A1_B; // net ID: PIPERX3CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX3DATA_A0_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX3DATA_A1_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX3DATA_A2_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX3DATA_A3_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX3DATA_A4_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX3DATA_A5_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX3DATA_A6_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX3DATA_A7_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX3DATA_A8_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX3DATA_A9_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX3DATA_A10_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX3DATA_A11_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX3DATA_A12_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX3DATA_A13_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX3DATA_A14_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX3DATA_A15_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX3ELECIDLE_A0_B; // net ID: PIPERX3ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3PHYSTATUS_A0_B; // net ID: PIPERX3PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3STATUS_A0_B; // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX3STATUS_A1_B; // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX3STATUS_A2_B; // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX3VALID_A0_B; // net ID: PIPERX3VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4CHANISALIGNED_A0_B; // net ID: PIPERX4CHANISALIGNED lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4CHARISK_A0_B; // net ID: PIPERX4CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX4CHARISK_A1_B; // net ID: PIPERX4CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX4DATA_A0_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX4DATA_A1_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX4DATA_A2_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX4DATA_A3_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX4DATA_A4_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX4DATA_A5_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX4DATA_A6_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX4DATA_A7_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX4DATA_A8_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX4DATA_A9_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX4DATA_A10_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX4DATA_A11_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX4DATA_A12_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX4DATA_A13_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX4DATA_A14_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX4DATA_A15_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX4ELECIDLE_A0_B; // net ID: PIPERX4ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4PHYSTATUS_A0_B; // net ID: PIPERX4PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4STATUS_A0_B; // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX4STATUS_A1_B; // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX4STATUS_A2_B; // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX4VALID_A0_B; // net ID: PIPERX4VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5CHANISALIGNED_A0_B; // net ID: PIPERX5CHANISALIGNED lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5CHARISK_A0_B; // net ID: PIPERX5CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX5CHARISK_A1_B; // net ID: PIPERX5CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX5DATA_A0_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX5DATA_A1_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX5DATA_A2_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX5DATA_A3_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX5DATA_A4_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX5DATA_A5_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX5DATA_A6_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX5DATA_A7_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX5DATA_A8_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX5DATA_A9_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX5DATA_A10_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX5DATA_A11_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX5DATA_A12_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX5DATA_A13_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX5DATA_A14_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX5DATA_A15_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX5ELECIDLE_A0_B; // net ID: PIPERX5ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5PHYSTATUS_A0_B; // net ID: PIPERX5PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5STATUS_A0_B; // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX5STATUS_A1_B; // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX5STATUS_A2_B; // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX5VALID_A0_B; // net ID: PIPERX5VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6CHANISALIGNED_A0_B; // net ID: PIPERX6CHANISALIGNED lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6CHARISK_A0_B; // net ID: PIPERX6CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX6CHARISK_A1_B; // net ID: PIPERX6CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX6DATA_A0_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX6DATA_A1_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX6DATA_A2_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX6DATA_A3_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX6DATA_A4_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX6DATA_A5_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX6DATA_A6_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX6DATA_A7_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX6DATA_A8_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX6DATA_A9_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX6DATA_A10_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX6DATA_A11_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX6DATA_A12_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX6DATA_A13_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX6DATA_A14_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX6DATA_A15_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX6ELECIDLE_A0_B; // net ID: PIPERX6ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6PHYSTATUS_A0_B; // net ID: PIPERX6PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6STATUS_A0_B; // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX6STATUS_A1_B; // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX6STATUS_A2_B; // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX6VALID_A0_B; // net ID: PIPERX6VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7CHANISALIGNED_A0_B; // net ID: PIPERX7CHANISALIGNED lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7CHARISK_A0_B; // net ID: PIPERX7CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX7CHARISK_A1_B; // net ID: PIPERX7CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX7DATA_A0_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX7DATA_A1_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX7DATA_A2_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX7DATA_A3_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX7DATA_A4_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX7DATA_A5_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX7DATA_A6_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX7DATA_A7_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX7DATA_A8_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX7DATA_A9_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX7DATA_A10_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX7DATA_A11_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX7DATA_A12_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX7DATA_A13_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX7DATA_A14_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX7DATA_A15_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX7ELECIDLE_A0_B; // net ID: PIPERX7ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7PHYSTATUS_A0_B; // net ID: PIPERX7PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7STATUS_A0_B; // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX7STATUS_A1_B; // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX7STATUS_A2_B; // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX7VALID_A0_B; // net ID: PIPERX7VALID lsb: 0  msb: 0 INPUT
		NetFlow* PL2DIRECTEDLSTATE_A0_B; // net ID: PL2DIRECTEDLSTATE lsb: 0  msb: 4 INPUT
		NetFlow* PL2DIRECTEDLSTATE_A1_B; // net ID: PL2DIRECTEDLSTATE lsb: 0  msb: 4 INPUT
		NetFlow* PL2DIRECTEDLSTATE_A2_B; // net ID: PL2DIRECTEDLSTATE lsb: 0  msb: 4 INPUT
		NetFlow* PL2DIRECTEDLSTATE_A3_B; // net ID: PL2DIRECTEDLSTATE lsb: 0  msb: 4 INPUT
		NetFlow* PL2DIRECTEDLSTATE_A4_B; // net ID: PL2DIRECTEDLSTATE lsb: 0  msb: 4 INPUT
		NetFlow* PLDBGMODE_A0_B; // net ID: PLDBGMODE lsb: 0  msb: 2 INPUT
		NetFlow* PLDBGMODE_A1_B; // net ID: PLDBGMODE lsb: 0  msb: 2 INPUT
		NetFlow* PLDBGMODE_A2_B; // net ID: PLDBGMODE lsb: 0  msb: 2 INPUT
		NetFlow* PLDIRECTEDLINKAUTON_A0_B; // net ID: PLDIRECTEDLINKAUTON lsb: 0  msb: 0 INPUT
		NetFlow* PLDIRECTEDLINKCHANGE_A0_B; // net ID: PLDIRECTEDLINKCHANGE lsb: 0  msb: 1 INPUT
		NetFlow* PLDIRECTEDLINKCHANGE_A1_B; // net ID: PLDIRECTEDLINKCHANGE lsb: 0  msb: 1 INPUT
		NetFlow* PLDIRECTEDLINKSPEED_A0_B; // net ID: PLDIRECTEDLINKSPEED lsb: 0  msb: 0 INPUT
		NetFlow* PLDIRECTEDLINKWIDTH_A0_B; // net ID: PLDIRECTEDLINKWIDTH lsb: 0  msb: 1 INPUT
		NetFlow* PLDIRECTEDLINKWIDTH_A1_B; // net ID: PLDIRECTEDLINKWIDTH lsb: 0  msb: 1 INPUT
		NetFlow* PLDIRECTEDLTSSMNEW_A0_B; // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
		NetFlow* PLDIRECTEDLTSSMNEW_A1_B; // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
		NetFlow* PLDIRECTEDLTSSMNEW_A2_B; // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
		NetFlow* PLDIRECTEDLTSSMNEW_A3_B; // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
		NetFlow* PLDIRECTEDLTSSMNEW_A4_B; // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
		NetFlow* PLDIRECTEDLTSSMNEW_A5_B; // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
		NetFlow* PLDIRECTEDLTSSMNEWVLD_A0_B; // net ID: PLDIRECTEDLTSSMNEWVLD lsb: 0  msb: 0 INPUT
		NetFlow* PLDIRECTEDLTSSMSTALL_A0_B; // net ID: PLDIRECTEDLTSSMSTALL lsb: 0  msb: 0 INPUT
		NetFlow* PLDOWNSTREAMDEEMPHSOURCE_A0_B; // net ID: PLDOWNSTREAMDEEMPHSOURCE lsb: 0  msb: 0 INPUT
		NetFlow* PLRSTN_A0_B; // net ID: PLRSTN lsb: 0  msb: 0 INPUT
		NetFlow* PLTRANSMITHOTRST_A0_B; // net ID: PLTRANSMITHOTRST lsb: 0  msb: 0 INPUT
		NetFlow* PLUPSTREAMPREFERDEEMPH_A0_B; // net ID: PLUPSTREAMPREFERDEEMPH lsb: 0  msb: 0 INPUT
		NetFlow* SYSRSTN_A0_B; // net ID: SYSRSTN lsb: 0  msb: 0 INPUT
		NetFlow* TL2ASPMSUSPENDCREDITCHECK_A0_B; // net ID: TL2ASPMSUSPENDCREDITCHECK lsb: 0  msb: 0 INPUT
		NetFlow* TL2PPMSUSPENDREQ_A0_B; // net ID: TL2PPMSUSPENDREQ lsb: 0  msb: 0 INPUT
		NetFlow* TLRSTN_A0_B; // net ID: TLRSTN lsb: 0  msb: 0 INPUT
		NetFlow* TRNFCSEL_A0_B; // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
		NetFlow* TRNFCSEL_A1_B; // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
		NetFlow* TRNFCSEL_A2_B; // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
		NetFlow* TRNRDSTRDY_A0_B; // net ID: TRNRDSTRDY lsb: 0  msb: 0 INPUT
		NetFlow* TRNRFCPRET_A0_B; // net ID: TRNRFCPRET lsb: 0  msb: 0 INPUT
		NetFlow* TRNRNPOK_A0_B; // net ID: TRNRNPOK lsb: 0  msb: 0 INPUT
		NetFlow* TRNRNPREQ_A0_B; // net ID: TRNRNPREQ lsb: 0  msb: 0 INPUT
		NetFlow* TRNTCFGGNT_A0_B; // net ID: TRNTCFGGNT lsb: 0  msb: 0 INPUT
		NetFlow* TRNTD_A0_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A1_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A2_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A3_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A4_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A5_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A6_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A7_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A8_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A9_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A10_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A11_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A12_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A13_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A14_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A15_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A16_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A17_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A18_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A19_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A20_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A21_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A22_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A23_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A24_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A25_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A26_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A27_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A28_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A29_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A30_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A31_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A32_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A33_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A34_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A35_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A36_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A37_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A38_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A39_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A40_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A41_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A42_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A43_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A44_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A45_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A46_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A47_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A48_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A49_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A50_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A51_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A52_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A53_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A54_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A55_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A56_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A57_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A58_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A59_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A60_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A61_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A62_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A63_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A64_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A65_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A66_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A67_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A68_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A69_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A70_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A71_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A72_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A73_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A74_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A75_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A76_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A77_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A78_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A79_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A80_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A81_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A82_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A83_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A84_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A85_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A86_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A87_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A88_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A89_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A90_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A91_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A92_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A93_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A94_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A95_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A96_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A97_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A98_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A99_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A100_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A101_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A102_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A103_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A104_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A105_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A106_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A107_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A108_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A109_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A110_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A111_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A112_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A113_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A114_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A115_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A116_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A117_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A118_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A119_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A120_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A121_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A122_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A123_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A124_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A125_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A126_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTD_A127_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTDLLPDATA_A0_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A1_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A2_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A3_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A4_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A5_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A6_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A7_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A8_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A9_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A10_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A11_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A12_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A13_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A14_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A15_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A16_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A17_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A18_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A19_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A20_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A21_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A22_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A23_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A24_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A25_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A26_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A27_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A28_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A29_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A30_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPDATA_A31_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPSRCRDY_A0_B; // net ID: TRNTDLLPSRCRDY lsb: 0  msb: 0 INPUT
		NetFlow* TRNTECRCGEN_A0_B; // net ID: TRNTECRCGEN lsb: 0  msb: 0 INPUT
		NetFlow* TRNTEOF_A0_B; // net ID: TRNTEOF lsb: 0  msb: 0 INPUT
		NetFlow* TRNTERRFWD_A0_B; // net ID: TRNTERRFWD lsb: 0  msb: 0 INPUT
		NetFlow* TRNTREM_A0_B; // net ID: TRNTREM lsb: 0  msb: 1 INPUT
		NetFlow* TRNTREM_A1_B; // net ID: TRNTREM lsb: 0  msb: 1 INPUT
		NetFlow* TRNTSOF_A0_B; // net ID: TRNTSOF lsb: 0  msb: 0 INPUT
		NetFlow* TRNTSRCDSC_A0_B; // net ID: TRNTSRCDSC lsb: 0  msb: 0 INPUT
		NetFlow* TRNTSRCRDY_A0_B; // net ID: TRNTSRCRDY lsb: 0  msb: 0 INPUT
		NetFlow* TRNTSTR_A0_B; // net ID: TRNTSTR lsb: 0  msb: 0 INPUT
		NetFlow* USERCLK_A0_B; // net ID: USERCLK lsb: 0  msb: 0 INPUT
		NetFlow* USERCLK2_A0_B; // net ID: USERCLK2 lsb: 0  msb: 0 INPUT
		
		public: X_PCIE_2_1(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_int_t AER_BASE_PTR, // Default: 12'h140
			parameter_enum_t AER_CAP_ECRC_CHECK_CAPABLE, // Default: "FALSE"
			parameter_enum_t AER_CAP_ECRC_GEN_CAPABLE, // Default: "FALSE"
			parameter_int_t AER_CAP_ID, // Default: 16'h0001
			parameter_enum_t AER_CAP_MULTIHEADER, // Default: "FALSE"
			parameter_int_t AER_CAP_NEXTPTR, // Default: 12'h178
			parameter_enum_t AER_CAP_ON, // Default: "FALSE"
			parameter_int_t AER_CAP_OPTIONAL_ERR_SUPPORT, // Default: 24'h000000
			parameter_enum_t AER_CAP_PERMIT_ROOTERR_UPDATE, // Default: "TRUE"
			parameter_int_t AER_CAP_VERSION, // Default: 4'h2
			parameter_enum_t ALLOW_X8_GEN2, // Default: "FALSE"
			parameter_int_t BAR0, // Default: 32'hFFFFFF00
			parameter_int_t BAR1, // Default: 32'hFFFF0000
			parameter_int_t BAR2, // Default: 32'hFFFF000C
			parameter_int_t BAR3, // Default: 32'hFFFFFFFF
			parameter_int_t BAR4, // Default: 32'h00000000
			parameter_int_t BAR5, // Default: 32'h00000000
			parameter_int_t CAPABILITIES_PTR, // Default: 8'h40
			parameter_int_t CARDBUS_CIS_POINTER, // Default: 32'h00000000
			parameter_int_t CFG_ECRC_ERR_CPLSTAT, // Default: 0
			parameter_int_t CLASS_CODE, // Default: 24'h000000
			parameter_enum_t CMD_INTX_IMPLEMENTED, // Default: "TRUE"
			parameter_enum_t CPL_TIMEOUT_DISABLE_SUPPORTED, // Default: "FALSE"
			parameter_int_t CPL_TIMEOUT_RANGES_SUPPORTED, // Default: 4'h0
			parameter_int_t CRM_MODULE_RSTS, // Default: 7'h00
			parameter_enum_t DEV_CAP2_ARI_FORWARDING_SUPPORTED, // Default: "FALSE"
			parameter_enum_t DEV_CAP2_ATOMICOP32_COMPLETER_SUPPORTED, // Default: "FALSE"
			parameter_enum_t DEV_CAP2_ATOMICOP64_COMPLETER_SUPPORTED, // Default: "FALSE"
			parameter_enum_t DEV_CAP2_ATOMICOP_ROUTING_SUPPORTED, // Default: "FALSE"
			parameter_enum_t DEV_CAP2_CAS128_COMPLETER_SUPPORTED, // Default: "FALSE"
			parameter_enum_t DEV_CAP2_ENDEND_TLP_PREFIX_SUPPORTED, // Default: "FALSE"
			parameter_enum_t DEV_CAP2_EXTENDED_FMT_FIELD_SUPPORTED, // Default: "FALSE"
			parameter_enum_t DEV_CAP2_LTR_MECHANISM_SUPPORTED, // Default: "FALSE"
			parameter_int_t DEV_CAP2_MAX_ENDEND_TLP_PREFIXES, // Default: 2'h0
			parameter_enum_t DEV_CAP2_NO_RO_ENABLED_PRPR_PASSING, // Default: "FALSE"
			parameter_int_t DEV_CAP2_TPH_COMPLETER_SUPPORTED, // Default: 2'h0
			parameter_enum_t DEV_CAP_ENABLE_SLOT_PWR_LIMIT_SCALE, // Default: "TRUE"
			parameter_enum_t DEV_CAP_ENABLE_SLOT_PWR_LIMIT_VALUE, // Default: "TRUE"
			parameter_int_t DEV_CAP_ENDPOINT_L0S_LATENCY, // Default: 0
			parameter_int_t DEV_CAP_ENDPOINT_L1_LATENCY, // Default: 0
			parameter_enum_t DEV_CAP_EXT_TAG_SUPPORTED, // Default: "TRUE"
			parameter_enum_t DEV_CAP_FUNCTION_LEVEL_RESET_CAPABLE, // Default: "FALSE"
			parameter_int_t DEV_CAP_MAX_PAYLOAD_SUPPORTED, // Default: 2
			parameter_int_t DEV_CAP_PHANTOM_FUNCTIONS_SUPPORT, // Default: 0
			parameter_enum_t DEV_CAP_ROLE_BASED_ERROR, // Default: "TRUE"
			parameter_int_t DEV_CAP_RSVD_14_12, // Default: 0
			parameter_int_t DEV_CAP_RSVD_17_16, // Default: 0
			parameter_int_t DEV_CAP_RSVD_31_29, // Default: 0
			parameter_enum_t DEV_CONTROL_AUX_POWER_SUPPORTED, // Default: "FALSE"
			parameter_enum_t DEV_CONTROL_EXT_TAG_DEFAULT, // Default: "FALSE"
			parameter_enum_t DISABLE_ASPM_L1_TIMER, // Default: "FALSE"
			parameter_enum_t DISABLE_BAR_FILTERING, // Default: "FALSE"
			parameter_enum_t DISABLE_ERR_MSG, // Default: "FALSE"
			parameter_enum_t DISABLE_ID_CHECK, // Default: "FALSE"
			parameter_enum_t DISABLE_LANE_REVERSAL, // Default: "FALSE"
			parameter_enum_t DISABLE_LOCKED_FILTER, // Default: "FALSE"
			parameter_enum_t DISABLE_PPM_FILTER, // Default: "FALSE"
			parameter_enum_t DISABLE_RX_POISONED_RESP, // Default: "FALSE"
			parameter_enum_t DISABLE_RX_TC_FILTER, // Default: "FALSE"
			parameter_enum_t DISABLE_SCRAMBLING, // Default: "FALSE"
			parameter_int_t DNSTREAM_LINK_NUM, // Default: 8'h00
			parameter_int_t DSN_BASE_PTR, // Default: 12'h100
			parameter_int_t DSN_CAP_ID, // Default: 16'h0003
			parameter_int_t DSN_CAP_NEXTPTR, // Default: 12'h10C
			parameter_enum_t DSN_CAP_ON, // Default: "TRUE"
			parameter_int_t DSN_CAP_VERSION, // Default: 4'h1
			parameter_int_t ENABLE_MSG_ROUTE, // Default: 11'h000
			parameter_enum_t ENABLE_RX_TD_ECRC_TRIM, // Default: "FALSE"
			parameter_enum_t ENDEND_TLP_PREFIX_FORWARDING_SUPPORTED, // Default: "FALSE"
			parameter_enum_t ENTER_RVRY_EI_L0, // Default: "TRUE"
			parameter_enum_t EXIT_LOOPBACK_ON_EI, // Default: "TRUE"
			parameter_int_t EXPANSION_ROM, // Default: 32'hFFFFF001
			parameter_int_t EXT_CFG_CAP_PTR, // Default: 6'h3F
			parameter_int_t EXT_CFG_XP_CAP_PTR, // Default: 10'h3FF
			parameter_int_t HEADER_TYPE, // Default: 8'h00
			parameter_int_t INFER_EI, // Default: 5'h00
			parameter_int_t INTERRUPT_PIN, // Default: 8'h01
			parameter_enum_t INTERRUPT_STAT_AUTO, // Default: "TRUE"
			parameter_enum_t IS_SWITCH, // Default: "FALSE"
			parameter_int_t LAST_CONFIG_DWORD, // Default: 10'h3FF
			parameter_enum_t LINK_CAP_ASPM_OPTIONALITY, // Default: "TRUE"
			parameter_int_t LINK_CAP_ASPM_SUPPORT, // Default: 1
			parameter_enum_t LINK_CAP_CLOCK_POWER_MANAGEMENT, // Default: "FALSE"
			parameter_enum_t LINK_CAP_DLL_LINK_ACTIVE_REPORTING_CAP, // Default: "FALSE"
			parameter_int_t LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN1, // Default: 7
			parameter_int_t LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN2, // Default: 7
			parameter_int_t LINK_CAP_L0S_EXIT_LATENCY_GEN1, // Default: 7
			parameter_int_t LINK_CAP_L0S_EXIT_LATENCY_GEN2, // Default: 7
			parameter_int_t LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN1, // Default: 7
			parameter_int_t LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN2, // Default: 7
			parameter_int_t LINK_CAP_L1_EXIT_LATENCY_GEN1, // Default: 7
			parameter_int_t LINK_CAP_L1_EXIT_LATENCY_GEN2, // Default: 7
			parameter_enum_t LINK_CAP_LINK_BANDWIDTH_NOTIFICATION_CAP, // Default: "FALSE"
			parameter_int_t LINK_CAP_MAX_LINK_SPEED, // Default: 4'h1
			parameter_int_t LINK_CAP_MAX_LINK_WIDTH, // Default: 6'h08
			parameter_int_t LINK_CAP_RSVD_23, // Default: 0
			parameter_enum_t LINK_CAP_SURPRISE_DOWN_ERROR_CAPABLE, // Default: "FALSE"
			parameter_int_t LINK_CONTROL_RCB, // Default: 0
			parameter_enum_t LINK_CTRL2_DEEMPHASIS, // Default: "FALSE"
			parameter_enum_t LINK_CTRL2_HW_AUTONOMOUS_SPEED_DISABLE, // Default: "FALSE"
			parameter_int_t LINK_CTRL2_TARGET_LINK_SPEED, // Default: 4'h2
			parameter_enum_t LINK_STATUS_SLOT_CLOCK_CONFIG, // Default: "TRUE"
			parameter_int_t LL_ACK_TIMEOUT, // Default: 15'h0000
			parameter_enum_t LL_ACK_TIMEOUT_EN, // Default: "FALSE"
			parameter_int_t LL_ACK_TIMEOUT_FUNC, // Default: 0
			parameter_int_t LL_REPLAY_TIMEOUT, // Default: 15'h0000
			parameter_enum_t LL_REPLAY_TIMEOUT_EN, // Default: "FALSE"
			parameter_int_t LL_REPLAY_TIMEOUT_FUNC, // Default: 0
			parameter_int_t LTSSM_MAX_LINK_WIDTH, // Default: 6'h01
			parameter_enum_t MPS_FORCE, // Default: "FALSE"
			parameter_int_t MSIX_BASE_PTR, // Default: 8'h9C
			parameter_int_t MSIX_CAP_ID, // Default: 8'h11
			parameter_int_t MSIX_CAP_NEXTPTR, // Default: 8'h00
			parameter_enum_t MSIX_CAP_ON, // Default: "FALSE"
			parameter_int_t MSIX_CAP_PBA_BIR, // Default: 0
			parameter_int_t MSIX_CAP_PBA_OFFSET, // Default: 29'h00000050
			parameter_int_t MSIX_CAP_TABLE_BIR, // Default: 0
			parameter_int_t MSIX_CAP_TABLE_OFFSET, // Default: 29'h00000040
			parameter_int_t MSIX_CAP_TABLE_SIZE, // Default: 11'h000
			parameter_int_t MSI_BASE_PTR, // Default: 8'h48
			parameter_enum_t MSI_CAP_64_BIT_ADDR_CAPABLE, // Default: "TRUE"
			parameter_int_t MSI_CAP_ID, // Default: 8'h05
			parameter_int_t MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_int_t MSI_CAP_MULTIMSG_EXTENSION, // Default: 0
			parameter_int_t MSI_CAP_NEXTPTR, // Default: 8'h60
			parameter_enum_t MSI_CAP_ON, // Default: "FALSE"
			parameter_enum_t MSI_CAP_PER_VECTOR_MASKING_CAPABLE, // Default: "TRUE"
			parameter_int_t N_FTS_COMCLK_GEN1, // Default: 255
			parameter_int_t N_FTS_COMCLK_GEN2, // Default: 255
			parameter_int_t N_FTS_GEN1, // Default: 255
			parameter_int_t N_FTS_GEN2, // Default: 255
			parameter_int_t PCIE_BASE_PTR, // Default: 8'h60
			parameter_int_t PCIE_CAP_CAPABILITY_ID, // Default: 8'h10
			parameter_int_t PCIE_CAP_CAPABILITY_VERSION, // Default: 4'h2
			parameter_int_t PCIE_CAP_DEVICE_PORT_TYPE, // Default: 4'h0
			parameter_int_t PCIE_CAP_NEXTPTR, // Default: 8'h9C
			parameter_enum_t PCIE_CAP_ON, // Default: "TRUE"
			parameter_int_t PCIE_CAP_RSVD_15_14, // Default: 0
			parameter_enum_t PCIE_CAP_SLOT_IMPLEMENTED, // Default: "FALSE"
			parameter_int_t PCIE_REVISION, // Default: 2
			parameter_int_t PL_AUTO_CONFIG, // Default: 0
			parameter_enum_t PL_FAST_TRAIN, // Default: "FALSE"
			parameter_int_t PM_ASPML0S_TIMEOUT, // Default: 15'h0000
			parameter_enum_t PM_ASPML0S_TIMEOUT_EN, // Default: "FALSE"
			parameter_int_t PM_ASPML0S_TIMEOUT_FUNC, // Default: 0
			parameter_enum_t PM_ASPM_FASTEXIT, // Default: "FALSE"
			parameter_int_t PM_BASE_PTR, // Default: 8'h40
			parameter_int_t PM_CAP_AUXCURRENT, // Default: 0
			parameter_enum_t PM_CAP_D1SUPPORT, // Default: "TRUE"
			parameter_enum_t PM_CAP_D2SUPPORT, // Default: "TRUE"
			parameter_enum_t PM_CAP_DSI, // Default: "FALSE"
			parameter_int_t PM_CAP_ID, // Default: 8'h01
			parameter_int_t PM_CAP_NEXTPTR, // Default: 8'h48
			parameter_enum_t PM_CAP_ON, // Default: "TRUE"
			parameter_int_t PM_CAP_PMESUPPORT, // Default: 5'h0F
			parameter_enum_t PM_CAP_PME_CLOCK, // Default: "FALSE"
			parameter_int_t PM_CAP_RSVD_04, // Default: 0
			parameter_int_t PM_CAP_VERSION, // Default: 3
			parameter_enum_t PM_CSR_B2B3, // Default: "FALSE"
			parameter_enum_t PM_CSR_BPCCEN, // Default: "FALSE"
			parameter_enum_t PM_CSR_NOSOFTRST, // Default: "TRUE"
			parameter_int_t PM_DATA0, // Default: 8'h01
			parameter_int_t PM_DATA1, // Default: 8'h01
			parameter_int_t PM_DATA2, // Default: 8'h01
			parameter_int_t PM_DATA3, // Default: 8'h01
			parameter_int_t PM_DATA4, // Default: 8'h01
			parameter_int_t PM_DATA5, // Default: 8'h01
			parameter_int_t PM_DATA6, // Default: 8'h01
			parameter_int_t PM_DATA7, // Default: 8'h01
			parameter_int_t PM_DATA_SCALE0, // Default: 2'h1
			parameter_int_t PM_DATA_SCALE1, // Default: 2'h1
			parameter_int_t PM_DATA_SCALE2, // Default: 2'h1
			parameter_int_t PM_DATA_SCALE3, // Default: 2'h1
			parameter_int_t PM_DATA_SCALE4, // Default: 2'h1
			parameter_int_t PM_DATA_SCALE5, // Default: 2'h1
			parameter_int_t PM_DATA_SCALE6, // Default: 2'h1
			parameter_int_t PM_DATA_SCALE7, // Default: 2'h1
			parameter_enum_t PM_MF, // Default: "FALSE"
			parameter_int_t RBAR_BASE_PTR, // Default: 12'h178
			parameter_int_t RBAR_CAP_CONTROL_ENCODEDBAR0, // Default: 5'h00
			parameter_int_t RBAR_CAP_CONTROL_ENCODEDBAR1, // Default: 5'h00
			parameter_int_t RBAR_CAP_CONTROL_ENCODEDBAR2, // Default: 5'h00
			parameter_int_t RBAR_CAP_CONTROL_ENCODEDBAR3, // Default: 5'h00
			parameter_int_t RBAR_CAP_CONTROL_ENCODEDBAR4, // Default: 5'h00
			parameter_int_t RBAR_CAP_CONTROL_ENCODEDBAR5, // Default: 5'h00
			parameter_int_t RBAR_CAP_ID, // Default: 16'h0015
			parameter_int_t RBAR_CAP_INDEX0, // Default: 3'h0
			parameter_int_t RBAR_CAP_INDEX1, // Default: 3'h0
			parameter_int_t RBAR_CAP_INDEX2, // Default: 3'h0
			parameter_int_t RBAR_CAP_INDEX3, // Default: 3'h0
			parameter_int_t RBAR_CAP_INDEX4, // Default: 3'h0
			parameter_int_t RBAR_CAP_INDEX5, // Default: 3'h0
			parameter_int_t RBAR_CAP_NEXTPTR, // Default: 12'h000
			parameter_enum_t RBAR_CAP_ON, // Default: "FALSE"
			parameter_int_t RBAR_CAP_SUP0, // Default: 32'h00000000
			parameter_int_t RBAR_CAP_SUP1, // Default: 32'h00000000
			parameter_int_t RBAR_CAP_SUP2, // Default: 32'h00000000
			parameter_int_t RBAR_CAP_SUP3, // Default: 32'h00000000
			parameter_int_t RBAR_CAP_SUP4, // Default: 32'h00000000
			parameter_int_t RBAR_CAP_SUP5, // Default: 32'h00000000
			parameter_int_t RBAR_CAP_VERSION, // Default: 4'h1
			parameter_int_t RBAR_NUM, // Default: 3'h1
			parameter_int_t RECRC_CHK, // Default: 0
			parameter_enum_t RECRC_CHK_TRIM, // Default: "FALSE"
			parameter_enum_t ROOT_CAP_CRS_SW_VISIBILITY, // Default: "FALSE"
			parameter_int_t RP_AUTO_SPD, // Default: 2'h1
			parameter_int_t RP_AUTO_SPD_LOOPCNT, // Default: 5'h1F
			parameter_enum_t SELECT_DLL_IF, // Default: "FALSE"
			parameter_string_t SIM_VERSION, // Default: "1.0"
			parameter_enum_t SLOT_CAP_ATT_BUTTON_PRESENT, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_ATT_INDICATOR_PRESENT, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_ELEC_INTERLOCK_PRESENT, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_HOTPLUG_CAPABLE, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_HOTPLUG_SURPRISE, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_MRL_SENSOR_PRESENT, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_NO_CMD_COMPLETED_SUPPORT, // Default: "FALSE"
			parameter_int_t SLOT_CAP_PHYSICAL_SLOT_NUM, // Default: 13'h0000
			parameter_enum_t SLOT_CAP_POWER_CONTROLLER_PRESENT, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_POWER_INDICATOR_PRESENT, // Default: "FALSE"
			parameter_int_t SLOT_CAP_SLOT_POWER_LIMIT_SCALE, // Default: 0
			parameter_int_t SLOT_CAP_SLOT_POWER_LIMIT_VALUE, // Default: 8'h00
			parameter_int_t SPARE_BIT0, // Default: 0
			parameter_int_t SPARE_BIT1, // Default: 0
			parameter_int_t SPARE_BIT2, // Default: 0
			parameter_int_t SPARE_BIT3, // Default: 0
			parameter_int_t SPARE_BIT4, // Default: 0
			parameter_int_t SPARE_BIT5, // Default: 0
			parameter_int_t SPARE_BIT6, // Default: 0
			parameter_int_t SPARE_BIT7, // Default: 0
			parameter_int_t SPARE_BIT8, // Default: 0
			parameter_int_t SPARE_BYTE0, // Default: 8'h00
			parameter_int_t SPARE_BYTE1, // Default: 8'h00
			parameter_int_t SPARE_BYTE2, // Default: 8'h00
			parameter_int_t SPARE_BYTE3, // Default: 8'h00
			parameter_int_t SPARE_WORD0, // Default: 32'h00000000
			parameter_int_t SPARE_WORD1, // Default: 32'h00000000
			parameter_int_t SPARE_WORD2, // Default: 32'h00000000
			parameter_int_t SPARE_WORD3, // Default: 32'h00000000
			parameter_enum_t SSL_MESSAGE_AUTO, // Default: "FALSE"
			parameter_enum_t TECRC_EP_INV, // Default: "FALSE"
			parameter_enum_t TL_RBYPASS, // Default: "FALSE"
			parameter_int_t TL_RX_RAM_RADDR_LATENCY, // Default: 0
			parameter_int_t TL_RX_RAM_RDATA_LATENCY, // Default: 2
			parameter_int_t TL_RX_RAM_WRITE_LATENCY, // Default: 0
			parameter_enum_t TL_TFC_DISABLE, // Default: "FALSE"
			parameter_enum_t TL_TX_CHECKS_DISABLE, // Default: "FALSE"
			parameter_int_t TL_TX_RAM_RADDR_LATENCY, // Default: 0
			parameter_int_t TL_TX_RAM_RDATA_LATENCY, // Default: 2
			parameter_int_t TL_TX_RAM_WRITE_LATENCY, // Default: 0
			parameter_enum_t TRN_DW, // Default: "FALSE"
			parameter_enum_t TRN_NP_FC, // Default: "FALSE"
			parameter_enum_t UPCONFIG_CAPABLE, // Default: "TRUE"
			parameter_enum_t UPSTREAM_FACING, // Default: "TRUE"
			parameter_enum_t UR_ATOMIC, // Default: "TRUE"
			parameter_enum_t UR_CFG1, // Default: "TRUE"
			parameter_enum_t UR_INV_REQ, // Default: "TRUE"
			parameter_enum_t UR_PRS_RESPONSE, // Default: "TRUE"
			parameter_enum_t USER_CLK2_DIV2, // Default: "FALSE"
			parameter_int_t USER_CLK_FREQ, // Default: 3
			parameter_enum_t USE_RID_PINS, // Default: "FALSE"
			parameter_enum_t VC0_CPL_INFINITE, // Default: "TRUE"
			parameter_int_t VC0_RX_RAM_LIMIT, // Default: 13'h03FF
			parameter_int_t VC0_TOTAL_CREDITS_CD, // Default: 127
			parameter_int_t VC0_TOTAL_CREDITS_CH, // Default: 31
			parameter_int_t VC0_TOTAL_CREDITS_NPD, // Default: 24
			parameter_int_t VC0_TOTAL_CREDITS_NPH, // Default: 12
			parameter_int_t VC0_TOTAL_CREDITS_PD, // Default: 288
			parameter_int_t VC0_TOTAL_CREDITS_PH, // Default: 32
			parameter_int_t VC0_TX_LASTPACKET, // Default: 31
			parameter_int_t VC_BASE_PTR, // Default: 12'h10C
			parameter_int_t VC_CAP_ID, // Default: 16'h0002
			parameter_int_t VC_CAP_NEXTPTR, // Default: 12'h000
			parameter_enum_t VC_CAP_ON, // Default: "FALSE"
			parameter_enum_t VC_CAP_REJECT_SNOOP_TRANSACTIONS, // Default: "FALSE"
			parameter_int_t VC_CAP_VERSION, // Default: 4'h1
			parameter_int_t VSEC_BASE_PTR, // Default: 12'h128
			parameter_int_t VSEC_CAP_HDR_ID, // Default: 16'h1234
			parameter_int_t VSEC_CAP_HDR_LENGTH, // Default: 12'h018
			parameter_int_t VSEC_CAP_HDR_REVISION, // Default: 4'h1
			parameter_int_t VSEC_CAP_ID, // Default: 16'h000B
			parameter_enum_t VSEC_CAP_IS_LINK_VISIBLE, // Default: "TRUE"
			parameter_int_t VSEC_CAP_NEXTPTR, // Default: 12'h140
			parameter_enum_t VSEC_CAP_ON, // Default: "FALSE"
			parameter_int_t VSEC_CAP_VERSION, // Default: 4'h1
			//Verilog Ports in definition order:
			NetFlow* CFGAERECRCCHECKEN_A0_B, // net ID: CFGAERECRCCHECKEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGAERECRCGENEN_A0_B, // net ID: CFGAERECRCGENEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGAERROOTERRCORRERRRECEIVED_A0_B, // net ID: CFGAERROOTERRCORRERRRECEIVED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGAERROOTERRCORRERRREPORTINGEN_A0_B, // net ID: CFGAERROOTERRCORRERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGAERROOTERRFATALERRRECEIVED_A0_B, // net ID: CFGAERROOTERRFATALERRRECEIVED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGAERROOTERRFATALERRREPORTINGEN_A0_B, // net ID: CFGAERROOTERRFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGAERROOTERRNONFATALERRRECEIVED_A0_B, // net ID: CFGAERROOTERRNONFATALERRRECEIVED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGAERROOTERRNONFATALERRREPORTINGEN_A0_B, // net ID: CFGAERROOTERRNONFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGBRIDGESERREN_A0_B, // net ID: CFGBRIDGESERREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCOMMANDBUSMASTERENABLE_A0_B, // net ID: CFGCOMMANDBUSMASTERENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCOMMANDINTERRUPTDISABLE_A0_B, // net ID: CFGCOMMANDINTERRUPTDISABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCOMMANDIOENABLE_A0_B, // net ID: CFGCOMMANDIOENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCOMMANDMEMENABLE_A0_B, // net ID: CFGCOMMANDMEMENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCOMMANDSERREN_A0_B, // net ID: CFGCOMMANDSERREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROL2ARIFORWARDEN_A0_B, // net ID: CFGDEVCONTROL2ARIFORWARDEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROL2ATOMICEGRESSBLOCK_A0_B, // net ID: CFGDEVCONTROL2ATOMICEGRESSBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROL2ATOMICREQUESTEREN_A0_B, // net ID: CFGDEVCONTROL2ATOMICREQUESTEREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROL2CPLTIMEOUTDIS_A0_B, // net ID: CFGDEVCONTROL2CPLTIMEOUTDIS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROL2CPLTIMEOUTVAL_A0_B, // net ID: CFGDEVCONTROL2CPLTIMEOUTVAL lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROL2IDOCPLEN_A0_B, // net ID: CFGDEVCONTROL2IDOCPLEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROL2IDOREQEN_A0_B, // net ID: CFGDEVCONTROL2IDOREQEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROL2LTREN_A0_B, // net ID: CFGDEVCONTROL2LTREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROL2TLPPREFIXBLOCK_A0_B, // net ID: CFGDEVCONTROL2TLPPREFIXBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLAUXPOWEREN_A0_B, // net ID: CFGDEVCONTROLAUXPOWEREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLCORRERRREPORTINGEN_A0_B, // net ID: CFGDEVCONTROLCORRERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLENABLERO_A0_B, // net ID: CFGDEVCONTROLENABLERO lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLEXTTAGEN_A0_B, // net ID: CFGDEVCONTROLEXTTAGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLFATALERRREPORTINGEN_A0_B, // net ID: CFGDEVCONTROLFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLMAXPAYLOAD_A0_B, // net ID: CFGDEVCONTROLMAXPAYLOAD lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLMAXREADREQ_A0_B, // net ID: CFGDEVCONTROLMAXREADREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLNONFATALREPORTINGEN_A0_B, // net ID: CFGDEVCONTROLNONFATALREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLNOSNOOPEN_A0_B, // net ID: CFGDEVCONTROLNOSNOOPEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLPHANTOMEN_A0_B, // net ID: CFGDEVCONTROLPHANTOMEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLURERRREPORTINGEN_A0_B, // net ID: CFGDEVCONTROLURERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVSTATUSCORRERRDETECTED_A0_B, // net ID: CFGDEVSTATUSCORRERRDETECTED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVSTATUSFATALERRDETECTED_A0_B, // net ID: CFGDEVSTATUSFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVSTATUSNONFATALERRDETECTED_A0_B, // net ID: CFGDEVSTATUSNONFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVSTATUSURDETECTED_A0_B, // net ID: CFGDEVSTATUSURDETECTED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGERRAERHEADERLOGSETN_A0_B, // net ID: CFGERRAERHEADERLOGSETN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGERRCPLRDYN_A0_B, // net ID: CFGERRCPLRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTDO_A0_B, // net ID: CFGINTERRUPTDO lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMMENABLE_A0_B, // net ID: CFGINTERRUPTMMENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIENABLE_A0_B, // net ID: CFGINTERRUPTMSIENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIXENABLE_A0_B, // net ID: CFGINTERRUPTMSIXENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIXFM_A0_B, // net ID: CFGINTERRUPTMSIXFM lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTRDYN_A0_B, // net ID: CFGINTERRUPTRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLASPMCONTROL_A0_B, // net ID: CFGLINKCONTROLASPMCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLAUTOBANDWIDTHINTEN_A0_B, // net ID: CFGLINKCONTROLAUTOBANDWIDTHINTEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLBANDWIDTHINTEN_A0_B, // net ID: CFGLINKCONTROLBANDWIDTHINTEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLCLOCKPMEN_A0_B, // net ID: CFGLINKCONTROLCLOCKPMEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLCOMMONCLOCK_A0_B, // net ID: CFGLINKCONTROLCOMMONCLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLEXTENDEDSYNC_A0_B, // net ID: CFGLINKCONTROLEXTENDEDSYNC lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLHWAUTOWIDTHDIS_A0_B, // net ID: CFGLINKCONTROLHWAUTOWIDTHDIS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLLINKDISABLE_A0_B, // net ID: CFGLINKCONTROLLINKDISABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLRCB_A0_B, // net ID: CFGLINKCONTROLRCB lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLRETRAINLINK_A0_B, // net ID: CFGLINKCONTROLRETRAINLINK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKSTATUSAUTOBANDWIDTHSTATUS_A0_B, // net ID: CFGLINKSTATUSAUTOBANDWIDTHSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKSTATUSBANDWIDTHSTATUS_A0_B, // net ID: CFGLINKSTATUSBANDWIDTHSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKSTATUSCURRENTSPEED_A0_B, // net ID: CFGLINKSTATUSCURRENTSPEED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKSTATUSDLLACTIVE_A0_B, // net ID: CFGLINKSTATUSDLLACTIVE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKSTATUSLINKTRAINING_A0_B, // net ID: CFGLINKSTATUSLINKTRAINING lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKSTATUSNEGOTIATEDWIDTH_A0_B, // net ID: CFGLINKSTATUSNEGOTIATEDWIDTH lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMGMTDO_A0_B, // net ID: CFGMGMTDO lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMGMTRDWRDONEN_A0_B, // net ID: CFGMGMTRDWRDONEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGDATA_A0_B, // net ID: CFGMSGDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVED_A0_B, // net ID: CFGMSGRECEIVED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDASSERTINTA_A0_B, // net ID: CFGMSGRECEIVEDASSERTINTA lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDASSERTINTB_A0_B, // net ID: CFGMSGRECEIVEDASSERTINTB lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDASSERTINTC_A0_B, // net ID: CFGMSGRECEIVEDASSERTINTC lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDASSERTINTD_A0_B, // net ID: CFGMSGRECEIVEDASSERTINTD lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDDEASSERTINTA_A0_B, // net ID: CFGMSGRECEIVEDDEASSERTINTA lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDDEASSERTINTB_A0_B, // net ID: CFGMSGRECEIVEDDEASSERTINTB lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDDEASSERTINTC_A0_B, // net ID: CFGMSGRECEIVEDDEASSERTINTC lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDDEASSERTINTD_A0_B, // net ID: CFGMSGRECEIVEDDEASSERTINTD lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDERRCOR_A0_B, // net ID: CFGMSGRECEIVEDERRCOR lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDERRFATAL_A0_B, // net ID: CFGMSGRECEIVEDERRFATAL lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDERRNONFATAL_A0_B, // net ID: CFGMSGRECEIVEDERRNONFATAL lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDPMASNAK_A0_B, // net ID: CFGMSGRECEIVEDPMASNAK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDPMETO_A0_B, // net ID: CFGMSGRECEIVEDPMETO lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDPMETOACK_A0_B, // net ID: CFGMSGRECEIVEDPMETOACK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDPMPME_A0_B, // net ID: CFGMSGRECEIVEDPMPME lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDSETSLOTPOWERLIMIT_A0_B, // net ID: CFGMSGRECEIVEDSETSLOTPOWERLIMIT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDUNLOCK_A0_B, // net ID: CFGMSGRECEIVEDUNLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPCIELINKSTATE_A0_B, // net ID: CFGPCIELINKSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPMCSRPMEEN_A0_B, // net ID: CFGPMCSRPMEEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPMCSRPMESTATUS_A0_B, // net ID: CFGPMCSRPMESTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPMCSRPOWERSTATE_A0_B, // net ID: CFGPMCSRPOWERSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPMRCVASREQL1N_A0_B, // net ID: CFGPMRCVASREQL1N lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPMRCVENTERL1N_A0_B, // net ID: CFGPMRCVENTERL1N lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPMRCVENTERL23N_A0_B, // net ID: CFGPMRCVENTERL23N lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPMRCVREQACKN_A0_B, // net ID: CFGPMRCVREQACKN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGROOTCONTROLPMEINTEN_A0_B, // net ID: CFGROOTCONTROLPMEINTEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGROOTCONTROLSYSERRCORRERREN_A0_B, // net ID: CFGROOTCONTROLSYSERRCORRERREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGROOTCONTROLSYSERRFATALERREN_A0_B, // net ID: CFGROOTCONTROLSYSERRFATALERREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGROOTCONTROLSYSERRNONFATALERREN_A0_B, // net ID: CFGROOTCONTROLSYSERRNONFATALERREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGSLOTCONTROLELECTROMECHILCTLPULSE_A0_B, // net ID: CFGSLOTCONTROLELECTROMECHILCTLPULSE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTRANSACTION_A0_B, // net ID: CFGTRANSACTION lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTRANSACTIONADDR_A0_B, // net ID: CFGTRANSACTIONADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTRANSACTIONTYPE_A0_B, // net ID: CFGTRANSACTIONTYPE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGVCTCVCMAP_A0_B, // net ID: CFGVCTCVCMAP lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRA_A0_B, // net ID: DBGSCLRA lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRB_A0_B, // net ID: DBGSCLRB lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRC_A0_B, // net ID: DBGSCLRC lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRD_A0_B, // net ID: DBGSCLRD lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRE_A0_B, // net ID: DBGSCLRE lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRF_A0_B, // net ID: DBGSCLRF lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRG_A0_B, // net ID: DBGSCLRG lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRH_A0_B, // net ID: DBGSCLRH lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRI_A0_B, // net ID: DBGSCLRI lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRJ_A0_B, // net ID: DBGSCLRJ lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRK_A0_B, // net ID: DBGSCLRK lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGVECA_A0_B, // net ID: DBGVECA lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGVECB_A0_B, // net ID: DBGVECB lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGVECC_A0_B, // net ID: DBGVECC lsb: 0  msb: 0 OUTPUT
			NetFlow* DRPDO_A0_B, // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			NetFlow* DRPRDY_A0_B, // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2BADDLLPERR_A0_B, // net ID: LL2BADDLLPERR lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2BADTLPERR_A0_B, // net ID: LL2BADTLPERR lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2LINKSTATUS_A0_B, // net ID: LL2LINKSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2PROTOCOLERR_A0_B, // net ID: LL2PROTOCOLERR lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2RECEIVERERR_A0_B, // net ID: LL2RECEIVERERR lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2REPLAYROERR_A0_B, // net ID: LL2REPLAYROERR lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2REPLAYTOERR_A0_B, // net ID: LL2REPLAYTOERR lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2SUSPENDOK_A0_B, // net ID: LL2SUSPENDOK lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2TFCINIT1SEQ_A0_B, // net ID: LL2TFCINIT1SEQ lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2TFCINIT2SEQ_A0_B, // net ID: LL2TFCINIT2SEQ lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2TXIDLE_A0_B, // net ID: LL2TXIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* LNKCLKEN_A0_B, // net ID: LNKCLKEN lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMRXRADDR_A0_B, // net ID: MIMRXRADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMRXREN_A0_B, // net ID: MIMRXREN lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMRXWADDR_A0_B, // net ID: MIMRXWADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMRXWDATA_A0_B, // net ID: MIMRXWDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMRXWEN_A0_B, // net ID: MIMRXWEN lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMTXRADDR_A0_B, // net ID: MIMTXRADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMTXREN_A0_B, // net ID: MIMTXREN lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMTXWADDR_A0_B, // net ID: MIMTXWADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMTXWDATA_A0_B, // net ID: MIMTXWDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMTXWEN_A0_B, // net ID: MIMTXWEN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX0POLARITY_A0_B, // net ID: PIPERX0POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX1POLARITY_A0_B, // net ID: PIPERX1POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX2POLARITY_A0_B, // net ID: PIPERX2POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX3POLARITY_A0_B, // net ID: PIPERX3POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX4POLARITY_A0_B, // net ID: PIPERX4POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX5POLARITY_A0_B, // net ID: PIPERX5POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX6POLARITY_A0_B, // net ID: PIPERX6POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX7POLARITY_A0_B, // net ID: PIPERX7POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0CHARISK_A0_B, // net ID: PIPETX0CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0COMPLIANCE_A0_B, // net ID: PIPETX0COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0DATA_A0_B, // net ID: PIPETX0DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0ELECIDLE_A0_B, // net ID: PIPETX0ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0POWERDOWN_A0_B, // net ID: PIPETX0POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1CHARISK_A0_B, // net ID: PIPETX1CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1COMPLIANCE_A0_B, // net ID: PIPETX1COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1DATA_A0_B, // net ID: PIPETX1DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1ELECIDLE_A0_B, // net ID: PIPETX1ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1POWERDOWN_A0_B, // net ID: PIPETX1POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2CHARISK_A0_B, // net ID: PIPETX2CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2COMPLIANCE_A0_B, // net ID: PIPETX2COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2DATA_A0_B, // net ID: PIPETX2DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2ELECIDLE_A0_B, // net ID: PIPETX2ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2POWERDOWN_A0_B, // net ID: PIPETX2POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3CHARISK_A0_B, // net ID: PIPETX3CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3COMPLIANCE_A0_B, // net ID: PIPETX3COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3DATA_A0_B, // net ID: PIPETX3DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3ELECIDLE_A0_B, // net ID: PIPETX3ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3POWERDOWN_A0_B, // net ID: PIPETX3POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4CHARISK_A0_B, // net ID: PIPETX4CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4COMPLIANCE_A0_B, // net ID: PIPETX4COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4DATA_A0_B, // net ID: PIPETX4DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4ELECIDLE_A0_B, // net ID: PIPETX4ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4POWERDOWN_A0_B, // net ID: PIPETX4POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5CHARISK_A0_B, // net ID: PIPETX5CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5COMPLIANCE_A0_B, // net ID: PIPETX5COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5DATA_A0_B, // net ID: PIPETX5DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5ELECIDLE_A0_B, // net ID: PIPETX5ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5POWERDOWN_A0_B, // net ID: PIPETX5POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6CHARISK_A0_B, // net ID: PIPETX6CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6COMPLIANCE_A0_B, // net ID: PIPETX6COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6DATA_A0_B, // net ID: PIPETX6DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6ELECIDLE_A0_B, // net ID: PIPETX6ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6POWERDOWN_A0_B, // net ID: PIPETX6POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7CHARISK_A0_B, // net ID: PIPETX7CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7COMPLIANCE_A0_B, // net ID: PIPETX7COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7DATA_A0_B, // net ID: PIPETX7DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7ELECIDLE_A0_B, // net ID: PIPETX7ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7POWERDOWN_A0_B, // net ID: PIPETX7POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXDEEMPH_A0_B, // net ID: PIPETXDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXMARGIN_A0_B, // net ID: PIPETXMARGIN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXRATE_A0_B, // net ID: PIPETXRATE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXRCVRDET_A0_B, // net ID: PIPETXRCVRDET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXRESET_A0_B, // net ID: PIPETXRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PL2L0REQ_A0_B, // net ID: PL2L0REQ lsb: 0  msb: 0 OUTPUT
			NetFlow* PL2LINKUP_A0_B, // net ID: PL2LINKUP lsb: 0  msb: 0 OUTPUT
			NetFlow* PL2RECEIVERERR_A0_B, // net ID: PL2RECEIVERERR lsb: 0  msb: 0 OUTPUT
			NetFlow* PL2RECOVERY_A0_B, // net ID: PL2RECOVERY lsb: 0  msb: 0 OUTPUT
			NetFlow* PL2RXELECIDLE_A0_B, // net ID: PL2RXELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PL2RXPMSTATE_A0_B, // net ID: PL2RXPMSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* PL2SUSPENDOK_A0_B, // net ID: PL2SUSPENDOK lsb: 0  msb: 0 OUTPUT
			NetFlow* PLDBGVEC_A0_B, // net ID: PLDBGVEC lsb: 0  msb: 0 OUTPUT
			NetFlow* PLDIRECTEDCHANGEDONE_A0_B, // net ID: PLDIRECTEDCHANGEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* PLINITIALLINKWIDTH_A0_B, // net ID: PLINITIALLINKWIDTH lsb: 0  msb: 0 OUTPUT
			NetFlow* PLLANEREVERSALMODE_A0_B, // net ID: PLLANEREVERSALMODE lsb: 0  msb: 0 OUTPUT
			NetFlow* PLLINKGEN2CAP_A0_B, // net ID: PLLINKGEN2CAP lsb: 0  msb: 0 OUTPUT
			NetFlow* PLLINKPARTNERGEN2SUPPORTED_A0_B, // net ID: PLLINKPARTNERGEN2SUPPORTED lsb: 0  msb: 0 OUTPUT
			NetFlow* PLLINKUPCFGCAP_A0_B, // net ID: PLLINKUPCFGCAP lsb: 0  msb: 0 OUTPUT
			NetFlow* PLLTSSMSTATE_A0_B, // net ID: PLLTSSMSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* PLPHYLNKUPN_A0_B, // net ID: PLPHYLNKUPN lsb: 0  msb: 0 OUTPUT
			NetFlow* PLRECEIVEDHOTRST_A0_B, // net ID: PLRECEIVEDHOTRST lsb: 0  msb: 0 OUTPUT
			NetFlow* PLRXPMSTATE_A0_B, // net ID: PLRXPMSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* PLSELLNKRATE_A0_B, // net ID: PLSELLNKRATE lsb: 0  msb: 0 OUTPUT
			NetFlow* PLSELLNKWIDTH_A0_B, // net ID: PLSELLNKWIDTH lsb: 0  msb: 0 OUTPUT
			NetFlow* PLTXPMSTATE_A0_B, // net ID: PLTXPMSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* RECEIVEDFUNCLVLRSTN_A0_B, // net ID: RECEIVEDFUNCLVLRSTN lsb: 0  msb: 0 OUTPUT
			NetFlow* TL2ASPMSUSPENDCREDITCHECKOK_A0_B, // net ID: TL2ASPMSUSPENDCREDITCHECKOK lsb: 0  msb: 0 OUTPUT
			NetFlow* TL2ASPMSUSPENDREQ_A0_B, // net ID: TL2ASPMSUSPENDREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* TL2ERRFCPE_A0_B, // net ID: TL2ERRFCPE lsb: 0  msb: 0 OUTPUT
			NetFlow* TL2ERRHDR_A0_B, // net ID: TL2ERRHDR lsb: 0  msb: 0 OUTPUT
			NetFlow* TL2ERRMALFORMED_A0_B, // net ID: TL2ERRMALFORMED lsb: 0  msb: 0 OUTPUT
			NetFlow* TL2ERRRXOVERFLOW_A0_B, // net ID: TL2ERRRXOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* TL2PPMSUSPENDOK_A0_B, // net ID: TL2PPMSUSPENDOK lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNFCCPLD_A0_B, // net ID: TRNFCCPLD lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNFCCPLH_A0_B, // net ID: TRNFCCPLH lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNFCNPD_A0_B, // net ID: TRNFCNPD lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNFCNPH_A0_B, // net ID: TRNFCNPH lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNFCPD_A0_B, // net ID: TRNFCPD lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNFCPH_A0_B, // net ID: TRNFCPH lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNLNKUP_A0_B, // net ID: TRNLNKUP lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRBARHIT_A0_B, // net ID: TRNRBARHIT lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRD_A0_B, // net ID: TRNRD lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRDLLPDATA_A0_B, // net ID: TRNRDLLPDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRDLLPSRCRDY_A0_B, // net ID: TRNRDLLPSRCRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRECRCERR_A0_B, // net ID: TRNRECRCERR lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNREOF_A0_B, // net ID: TRNREOF lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRERRFWD_A0_B, // net ID: TRNRERRFWD lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRREM_A0_B, // net ID: TRNRREM lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRSOF_A0_B, // net ID: TRNRSOF lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRSRCDSC_A0_B, // net ID: TRNRSRCDSC lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRSRCRDY_A0_B, // net ID: TRNRSRCRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNTBUFAV_A0_B, // net ID: TRNTBUFAV lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNTCFGREQ_A0_B, // net ID: TRNTCFGREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNTDLLPDSTRDY_A0_B, // net ID: TRNTDLLPDSTRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNTDSTRDY_A0_B, // net ID: TRNTDSTRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNTERRDROP_A0_B, // net ID: TRNTERRDROP lsb: 0  msb: 0 OUTPUT
			NetFlow* USERRSTN_A0_B, // net ID: USERRSTN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGAERINTERRUPTMSGNUM_A0_B, // net ID: CFGAERINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			NetFlow* CFGAERINTERRUPTMSGNUM_A1_B, // net ID: CFGAERINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			NetFlow* CFGAERINTERRUPTMSGNUM_A2_B, // net ID: CFGAERINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			NetFlow* CFGAERINTERRUPTMSGNUM_A3_B, // net ID: CFGAERINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			NetFlow* CFGAERINTERRUPTMSGNUM_A4_B, // net ID: CFGAERINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			NetFlow* CFGDEVID_A0_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A1_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A2_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A3_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A4_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A5_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A6_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A7_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A8_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A9_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A10_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A11_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A12_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A13_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A14_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDEVID_A15_B, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDSBUSNUMBER_A0_B, // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGDSBUSNUMBER_A1_B, // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGDSBUSNUMBER_A2_B, // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGDSBUSNUMBER_A3_B, // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGDSBUSNUMBER_A4_B, // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGDSBUSNUMBER_A5_B, // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGDSBUSNUMBER_A6_B, // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGDSBUSNUMBER_A7_B, // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGDSDEVICENUMBER_A0_B, // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
			NetFlow* CFGDSDEVICENUMBER_A1_B, // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
			NetFlow* CFGDSDEVICENUMBER_A2_B, // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
			NetFlow* CFGDSDEVICENUMBER_A3_B, // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
			NetFlow* CFGDSDEVICENUMBER_A4_B, // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
			NetFlow* CFGDSFUNCTIONNUMBER_A0_B, // net ID: CFGDSFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			NetFlow* CFGDSFUNCTIONNUMBER_A1_B, // net ID: CFGDSFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			NetFlow* CFGDSFUNCTIONNUMBER_A2_B, // net ID: CFGDSFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			NetFlow* CFGDSN_A0_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A1_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A2_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A3_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A4_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A5_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A6_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A7_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A8_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A9_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A10_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A11_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A12_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A13_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A14_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A15_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A16_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A17_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A18_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A19_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A20_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A21_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A22_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A23_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A24_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A25_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A26_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A27_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A28_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A29_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A30_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A31_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A32_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A33_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A34_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A35_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A36_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A37_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A38_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A39_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A40_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A41_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A42_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A43_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A44_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A45_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A46_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A47_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A48_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A49_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A50_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A51_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A52_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A53_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A54_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A55_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A56_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A57_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A58_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A59_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A60_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A61_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A62_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGDSN_A63_B, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGERRACSN_A0_B, // net ID: CFGERRACSN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRAERHEADERLOG_A0_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A1_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A2_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A3_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A4_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A5_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A6_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A7_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A8_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A9_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A10_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A11_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A12_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A13_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A14_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A15_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A16_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A17_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A18_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A19_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A20_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A21_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A22_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A23_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A24_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A25_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A26_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A27_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A28_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A29_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A30_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A31_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A32_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A33_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A34_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A35_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A36_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A37_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A38_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A39_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A40_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A41_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A42_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A43_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A44_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A45_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A46_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A47_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A48_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A49_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A50_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A51_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A52_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A53_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A54_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A55_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A56_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A57_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A58_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A59_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A60_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A61_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A62_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A63_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A64_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A65_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A66_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A67_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A68_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A69_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A70_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A71_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A72_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A73_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A74_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A75_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A76_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A77_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A78_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A79_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A80_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A81_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A82_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A83_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A84_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A85_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A86_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A87_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A88_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A89_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A90_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A91_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A92_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A93_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A94_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A95_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A96_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A97_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A98_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A99_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A100_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A101_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A102_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A103_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A104_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A105_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A106_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A107_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A108_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A109_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A110_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A111_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A112_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A113_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A114_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A115_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A116_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A117_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A118_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A119_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A120_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A121_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A122_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A123_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A124_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A125_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A126_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRAERHEADERLOG_A127_B, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRATOMICEGRESSBLOCKEDN_A0_B, // net ID: CFGERRATOMICEGRESSBLOCKEDN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRCORN_A0_B, // net ID: CFGERRCORN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRCPLABORTN_A0_B, // net ID: CFGERRCPLABORTN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRCPLTIMEOUTN_A0_B, // net ID: CFGERRCPLTIMEOUTN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRCPLUNEXPECTN_A0_B, // net ID: CFGERRCPLUNEXPECTN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRECRCN_A0_B, // net ID: CFGERRECRCN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRINTERNALCORN_A0_B, // net ID: CFGERRINTERNALCORN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRINTERNALUNCORN_A0_B, // net ID: CFGERRINTERNALUNCORN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRLOCKEDN_A0_B, // net ID: CFGERRLOCKEDN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRMALFORMEDN_A0_B, // net ID: CFGERRMALFORMEDN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRMCBLOCKEDN_A0_B, // net ID: CFGERRMCBLOCKEDN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRNORECOVERYN_A0_B, // net ID: CFGERRNORECOVERYN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRPOISONEDN_A0_B, // net ID: CFGERRPOISONEDN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRPOSTEDN_A0_B, // net ID: CFGERRPOSTEDN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A0_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A1_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A2_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A3_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A4_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A5_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A6_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A7_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A8_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A9_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A10_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A11_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A12_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A13_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A14_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A15_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A16_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A17_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A18_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A19_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A20_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A21_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A22_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A23_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A24_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A25_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A26_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A27_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A28_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A29_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A30_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A31_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A32_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A33_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A34_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A35_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A36_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A37_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A38_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A39_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A40_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A41_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A42_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A43_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A44_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A45_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A46_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRTLPCPLHEADER_A47_B, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRURN_A0_B, // net ID: CFGERRURN lsb: 0  msb: 0 INPUT
			NetFlow* CFGFORCECOMMONCLOCKOFF_A0_B, // net ID: CFGFORCECOMMONCLOCKOFF lsb: 0  msb: 0 INPUT
			NetFlow* CFGFORCEEXTENDEDSYNCON_A0_B, // net ID: CFGFORCEEXTENDEDSYNCON lsb: 0  msb: 0 INPUT
			NetFlow* CFGFORCEMPS_A0_B, // net ID: CFGFORCEMPS lsb: 0  msb: 2 INPUT
			NetFlow* CFGFORCEMPS_A1_B, // net ID: CFGFORCEMPS lsb: 0  msb: 2 INPUT
			NetFlow* CFGFORCEMPS_A2_B, // net ID: CFGFORCEMPS lsb: 0  msb: 2 INPUT
			NetFlow* CFGINTERRUPTASSERTN_A0_B, // net ID: CFGINTERRUPTASSERTN lsb: 0  msb: 0 INPUT
			NetFlow* CFGINTERRUPTDI_A0_B, // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			NetFlow* CFGINTERRUPTDI_A1_B, // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			NetFlow* CFGINTERRUPTDI_A2_B, // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			NetFlow* CFGINTERRUPTDI_A3_B, // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			NetFlow* CFGINTERRUPTDI_A4_B, // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			NetFlow* CFGINTERRUPTDI_A5_B, // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			NetFlow* CFGINTERRUPTDI_A6_B, // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			NetFlow* CFGINTERRUPTDI_A7_B, // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			NetFlow* CFGINTERRUPTN_A0_B, // net ID: CFGINTERRUPTN lsb: 0  msb: 0 INPUT
			NetFlow* CFGINTERRUPTSTATN_A0_B, // net ID: CFGINTERRUPTSTATN lsb: 0  msb: 0 INPUT
			NetFlow* CFGMGMTBYTEENN_A0_B, // net ID: CFGMGMTBYTEENN lsb: 0  msb: 3 INPUT
			NetFlow* CFGMGMTBYTEENN_A1_B, // net ID: CFGMGMTBYTEENN lsb: 0  msb: 3 INPUT
			NetFlow* CFGMGMTBYTEENN_A2_B, // net ID: CFGMGMTBYTEENN lsb: 0  msb: 3 INPUT
			NetFlow* CFGMGMTBYTEENN_A3_B, // net ID: CFGMGMTBYTEENN lsb: 0  msb: 3 INPUT
			NetFlow* CFGMGMTDI_A0_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A1_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A2_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A3_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A4_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A5_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A6_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A7_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A8_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A9_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A10_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A11_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A12_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A13_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A14_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A15_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A16_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A17_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A18_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A19_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A20_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A21_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A22_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A23_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A24_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A25_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A26_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A27_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A28_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A29_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A30_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDI_A31_B, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDWADDR_A0_B, // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGMGMTDWADDR_A1_B, // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGMGMTDWADDR_A2_B, // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGMGMTDWADDR_A3_B, // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGMGMTDWADDR_A4_B, // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGMGMTDWADDR_A5_B, // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGMGMTDWADDR_A6_B, // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGMGMTDWADDR_A7_B, // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGMGMTDWADDR_A8_B, // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGMGMTDWADDR_A9_B, // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGMGMTRDENN_A0_B, // net ID: CFGMGMTRDENN lsb: 0  msb: 0 INPUT
			NetFlow* CFGMGMTWRENN_A0_B, // net ID: CFGMGMTWRENN lsb: 0  msb: 0 INPUT
			NetFlow* CFGMGMTWRREADONLYN_A0_B, // net ID: CFGMGMTWRREADONLYN lsb: 0  msb: 0 INPUT
			NetFlow* CFGMGMTWRRW1CASRWN_A0_B, // net ID: CFGMGMTWRRW1CASRWN lsb: 0  msb: 0 INPUT
			NetFlow* CFGPCIECAPINTERRUPTMSGNUM_A0_B, // net ID: CFGPCIECAPINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			NetFlow* CFGPCIECAPINTERRUPTMSGNUM_A1_B, // net ID: CFGPCIECAPINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			NetFlow* CFGPCIECAPINTERRUPTMSGNUM_A2_B, // net ID: CFGPCIECAPINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			NetFlow* CFGPCIECAPINTERRUPTMSGNUM_A3_B, // net ID: CFGPCIECAPINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			NetFlow* CFGPCIECAPINTERRUPTMSGNUM_A4_B, // net ID: CFGPCIECAPINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			NetFlow* CFGPMFORCESTATE_A0_B, // net ID: CFGPMFORCESTATE lsb: 0  msb: 1 INPUT
			NetFlow* CFGPMFORCESTATE_A1_B, // net ID: CFGPMFORCESTATE lsb: 0  msb: 1 INPUT
			NetFlow* CFGPMFORCESTATEENN_A0_B, // net ID: CFGPMFORCESTATEENN lsb: 0  msb: 0 INPUT
			NetFlow* CFGPMHALTASPML0SN_A0_B, // net ID: CFGPMHALTASPML0SN lsb: 0  msb: 0 INPUT
			NetFlow* CFGPMHALTASPML1N_A0_B, // net ID: CFGPMHALTASPML1N lsb: 0  msb: 0 INPUT
			NetFlow* CFGPMSENDPMETON_A0_B, // net ID: CFGPMSENDPMETON lsb: 0  msb: 0 INPUT
			NetFlow* CFGPMTURNOFFOKN_A0_B, // net ID: CFGPMTURNOFFOKN lsb: 0  msb: 0 INPUT
			NetFlow* CFGPMWAKEN_A0_B, // net ID: CFGPMWAKEN lsb: 0  msb: 0 INPUT
			NetFlow* CFGPORTNUMBER_A0_B, // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGPORTNUMBER_A1_B, // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGPORTNUMBER_A2_B, // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGPORTNUMBER_A3_B, // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGPORTNUMBER_A4_B, // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGPORTNUMBER_A5_B, // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGPORTNUMBER_A6_B, // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGPORTNUMBER_A7_B, // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGREVID_A0_B, // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			NetFlow* CFGREVID_A1_B, // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			NetFlow* CFGREVID_A2_B, // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			NetFlow* CFGREVID_A3_B, // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			NetFlow* CFGREVID_A4_B, // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			NetFlow* CFGREVID_A5_B, // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			NetFlow* CFGREVID_A6_B, // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			NetFlow* CFGREVID_A7_B, // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			NetFlow* CFGSUBSYSID_A0_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A1_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A2_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A3_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A4_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A5_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A6_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A7_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A8_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A9_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A10_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A11_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A12_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A13_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A14_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSID_A15_B, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENDID_A0_B, // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENDID_A1_B, // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENDID_A2_B, // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENDID_A3_B, // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENDID_A4_B, // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENDID_A5_B, // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENDID_A6_B, // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENDID_A7_B, // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENDID_A8_B, // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENDID_A9_B, // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENDID_A10_B, // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENDID_A11_B, // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENDID_A12_B, // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENDID_A13_B, // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENDID_A14_B, // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENDID_A15_B, // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGTRNPENDINGN_A0_B, // net ID: CFGTRNPENDINGN lsb: 0  msb: 0 INPUT
			NetFlow* CFGVENDID_A0_B, // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENDID_A1_B, // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENDID_A2_B, // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENDID_A3_B, // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENDID_A4_B, // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENDID_A5_B, // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENDID_A6_B, // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENDID_A7_B, // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENDID_A8_B, // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENDID_A9_B, // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENDID_A10_B, // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENDID_A11_B, // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENDID_A12_B, // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENDID_A13_B, // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENDID_A14_B, // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGVENDID_A15_B, // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CMRSTN_A0_B, // net ID: CMRSTN lsb: 0  msb: 0 INPUT
			NetFlow* CMSTICKYRSTN_A0_B, // net ID: CMSTICKYRSTN lsb: 0  msb: 0 INPUT
			NetFlow* DBGMODE_A0_B, // net ID: DBGMODE lsb: 0  msb: 1 INPUT
			NetFlow* DBGMODE_A1_B, // net ID: DBGMODE lsb: 0  msb: 1 INPUT
			NetFlow* DBGSUBMODE_A0_B, // net ID: DBGSUBMODE lsb: 0  msb: 0 INPUT
			NetFlow* DLRSTN_A0_B, // net ID: DLRSTN lsb: 0  msb: 0 INPUT
			NetFlow* DRPADDR_A0_B, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPADDR_A1_B, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPADDR_A2_B, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPADDR_A3_B, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPADDR_A4_B, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPADDR_A5_B, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPADDR_A6_B, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPADDR_A7_B, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPADDR_A8_B, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPCLK_A0_B, // net ID: DRPCLK lsb: 0  msb: 0 INPUT
			NetFlow* DRPDI_A0_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A1_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A2_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A3_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A4_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A5_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A6_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A7_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A8_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A9_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A10_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A11_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A12_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A13_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A14_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPDI_A15_B, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPEN_A0_B, // net ID: DRPEN lsb: 0  msb: 0 INPUT
			NetFlow* DRPWE_A0_B, // net ID: DRPWE lsb: 0  msb: 0 INPUT
			NetFlow* FUNCLVLRSTN_A0_B, // net ID: FUNCLVLRSTN lsb: 0  msb: 0 INPUT
			NetFlow* LL2SENDASREQL1_A0_B, // net ID: LL2SENDASREQL1 lsb: 0  msb: 0 INPUT
			NetFlow* LL2SENDENTERL1_A0_B, // net ID: LL2SENDENTERL1 lsb: 0  msb: 0 INPUT
			NetFlow* LL2SENDENTERL23_A0_B, // net ID: LL2SENDENTERL23 lsb: 0  msb: 0 INPUT
			NetFlow* LL2SENDPMACK_A0_B, // net ID: LL2SENDPMACK lsb: 0  msb: 0 INPUT
			NetFlow* LL2SUSPENDNOW_A0_B, // net ID: LL2SUSPENDNOW lsb: 0  msb: 0 INPUT
			NetFlow* LL2TLPRCV_A0_B, // net ID: LL2TLPRCV lsb: 0  msb: 0 INPUT
			NetFlow* MIMRXRDATA_A0_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A1_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A2_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A3_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A4_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A5_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A6_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A7_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A8_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A9_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A10_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A11_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A12_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A13_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A14_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A15_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A16_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A17_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A18_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A19_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A20_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A21_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A22_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A23_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A24_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A25_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A26_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A27_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A28_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A29_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A30_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A31_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A32_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A33_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A34_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A35_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A36_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A37_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A38_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A39_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A40_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A41_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A42_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A43_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A44_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A45_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A46_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A47_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A48_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A49_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A50_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A51_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A52_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A53_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A54_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A55_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A56_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A57_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A58_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A59_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A60_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A61_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A62_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A63_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A64_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A65_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A66_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMRXRDATA_A67_B, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMTXRDATA_A0_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A1_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A2_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A3_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A4_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A5_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A6_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A7_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A8_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A9_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A10_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A11_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A12_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A13_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A14_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A15_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A16_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A17_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A18_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A19_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A20_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A21_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A22_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A23_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A24_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A25_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A26_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A27_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A28_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A29_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A30_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A31_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A32_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A33_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A34_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A35_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A36_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A37_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A38_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A39_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A40_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A41_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A42_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A43_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A44_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A45_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A46_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A47_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A48_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A49_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A50_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A51_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A52_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A53_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A54_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A55_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A56_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A57_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A58_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A59_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A60_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A61_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A62_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A63_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A64_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A65_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A66_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A67_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* MIMTXRDATA_A68_B, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* PIPECLK_A0_B, // net ID: PIPECLK lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0CHANISALIGNED_A0_B, // net ID: PIPERX0CHANISALIGNED lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0CHARISK_A0_B, // net ID: PIPERX0CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX0CHARISK_A1_B, // net ID: PIPERX0CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX0DATA_A0_B, // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX0DATA_A1_B, // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX0DATA_A2_B, // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX0DATA_A3_B, // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX0DATA_A4_B, // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX0DATA_A5_B, // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX0DATA_A6_B, // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX0DATA_A7_B, // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX0DATA_A8_B, // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX0DATA_A9_B, // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX0DATA_A10_B, // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX0DATA_A11_B, // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX0DATA_A12_B, // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX0DATA_A13_B, // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX0DATA_A14_B, // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX0DATA_A15_B, // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX0ELECIDLE_A0_B, // net ID: PIPERX0ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0PHYSTATUS_A0_B, // net ID: PIPERX0PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0STATUS_A0_B, // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX0STATUS_A1_B, // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX0STATUS_A2_B, // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX0VALID_A0_B, // net ID: PIPERX0VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1CHANISALIGNED_A0_B, // net ID: PIPERX1CHANISALIGNED lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1CHARISK_A0_B, // net ID: PIPERX1CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX1CHARISK_A1_B, // net ID: PIPERX1CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX1DATA_A0_B, // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX1DATA_A1_B, // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX1DATA_A2_B, // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX1DATA_A3_B, // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX1DATA_A4_B, // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX1DATA_A5_B, // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX1DATA_A6_B, // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX1DATA_A7_B, // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX1DATA_A8_B, // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX1DATA_A9_B, // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX1DATA_A10_B, // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX1DATA_A11_B, // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX1DATA_A12_B, // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX1DATA_A13_B, // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX1DATA_A14_B, // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX1DATA_A15_B, // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX1ELECIDLE_A0_B, // net ID: PIPERX1ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1PHYSTATUS_A0_B, // net ID: PIPERX1PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1STATUS_A0_B, // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX1STATUS_A1_B, // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX1STATUS_A2_B, // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX1VALID_A0_B, // net ID: PIPERX1VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2CHANISALIGNED_A0_B, // net ID: PIPERX2CHANISALIGNED lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2CHARISK_A0_B, // net ID: PIPERX2CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX2CHARISK_A1_B, // net ID: PIPERX2CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX2DATA_A0_B, // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX2DATA_A1_B, // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX2DATA_A2_B, // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX2DATA_A3_B, // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX2DATA_A4_B, // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX2DATA_A5_B, // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX2DATA_A6_B, // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX2DATA_A7_B, // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX2DATA_A8_B, // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX2DATA_A9_B, // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX2DATA_A10_B, // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX2DATA_A11_B, // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX2DATA_A12_B, // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX2DATA_A13_B, // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX2DATA_A14_B, // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX2DATA_A15_B, // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX2ELECIDLE_A0_B, // net ID: PIPERX2ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2PHYSTATUS_A0_B, // net ID: PIPERX2PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2STATUS_A0_B, // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX2STATUS_A1_B, // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX2STATUS_A2_B, // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX2VALID_A0_B, // net ID: PIPERX2VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3CHANISALIGNED_A0_B, // net ID: PIPERX3CHANISALIGNED lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3CHARISK_A0_B, // net ID: PIPERX3CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX3CHARISK_A1_B, // net ID: PIPERX3CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX3DATA_A0_B, // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX3DATA_A1_B, // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX3DATA_A2_B, // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX3DATA_A3_B, // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX3DATA_A4_B, // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX3DATA_A5_B, // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX3DATA_A6_B, // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX3DATA_A7_B, // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX3DATA_A8_B, // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX3DATA_A9_B, // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX3DATA_A10_B, // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX3DATA_A11_B, // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX3DATA_A12_B, // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX3DATA_A13_B, // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX3DATA_A14_B, // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX3DATA_A15_B, // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX3ELECIDLE_A0_B, // net ID: PIPERX3ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3PHYSTATUS_A0_B, // net ID: PIPERX3PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3STATUS_A0_B, // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX3STATUS_A1_B, // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX3STATUS_A2_B, // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX3VALID_A0_B, // net ID: PIPERX3VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4CHANISALIGNED_A0_B, // net ID: PIPERX4CHANISALIGNED lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4CHARISK_A0_B, // net ID: PIPERX4CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX4CHARISK_A1_B, // net ID: PIPERX4CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX4DATA_A0_B, // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX4DATA_A1_B, // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX4DATA_A2_B, // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX4DATA_A3_B, // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX4DATA_A4_B, // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX4DATA_A5_B, // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX4DATA_A6_B, // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX4DATA_A7_B, // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX4DATA_A8_B, // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX4DATA_A9_B, // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX4DATA_A10_B, // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX4DATA_A11_B, // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX4DATA_A12_B, // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX4DATA_A13_B, // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX4DATA_A14_B, // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX4DATA_A15_B, // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX4ELECIDLE_A0_B, // net ID: PIPERX4ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4PHYSTATUS_A0_B, // net ID: PIPERX4PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4STATUS_A0_B, // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX4STATUS_A1_B, // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX4STATUS_A2_B, // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX4VALID_A0_B, // net ID: PIPERX4VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5CHANISALIGNED_A0_B, // net ID: PIPERX5CHANISALIGNED lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5CHARISK_A0_B, // net ID: PIPERX5CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX5CHARISK_A1_B, // net ID: PIPERX5CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX5DATA_A0_B, // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX5DATA_A1_B, // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX5DATA_A2_B, // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX5DATA_A3_B, // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX5DATA_A4_B, // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX5DATA_A5_B, // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX5DATA_A6_B, // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX5DATA_A7_B, // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX5DATA_A8_B, // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX5DATA_A9_B, // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX5DATA_A10_B, // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX5DATA_A11_B, // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX5DATA_A12_B, // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX5DATA_A13_B, // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX5DATA_A14_B, // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX5DATA_A15_B, // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX5ELECIDLE_A0_B, // net ID: PIPERX5ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5PHYSTATUS_A0_B, // net ID: PIPERX5PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5STATUS_A0_B, // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX5STATUS_A1_B, // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX5STATUS_A2_B, // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX5VALID_A0_B, // net ID: PIPERX5VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6CHANISALIGNED_A0_B, // net ID: PIPERX6CHANISALIGNED lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6CHARISK_A0_B, // net ID: PIPERX6CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX6CHARISK_A1_B, // net ID: PIPERX6CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX6DATA_A0_B, // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX6DATA_A1_B, // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX6DATA_A2_B, // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX6DATA_A3_B, // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX6DATA_A4_B, // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX6DATA_A5_B, // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX6DATA_A6_B, // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX6DATA_A7_B, // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX6DATA_A8_B, // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX6DATA_A9_B, // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX6DATA_A10_B, // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX6DATA_A11_B, // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX6DATA_A12_B, // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX6DATA_A13_B, // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX6DATA_A14_B, // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX6DATA_A15_B, // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX6ELECIDLE_A0_B, // net ID: PIPERX6ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6PHYSTATUS_A0_B, // net ID: PIPERX6PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6STATUS_A0_B, // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX6STATUS_A1_B, // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX6STATUS_A2_B, // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX6VALID_A0_B, // net ID: PIPERX6VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7CHANISALIGNED_A0_B, // net ID: PIPERX7CHANISALIGNED lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7CHARISK_A0_B, // net ID: PIPERX7CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX7CHARISK_A1_B, // net ID: PIPERX7CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX7DATA_A0_B, // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX7DATA_A1_B, // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX7DATA_A2_B, // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX7DATA_A3_B, // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX7DATA_A4_B, // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX7DATA_A5_B, // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX7DATA_A6_B, // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX7DATA_A7_B, // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX7DATA_A8_B, // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX7DATA_A9_B, // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX7DATA_A10_B, // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX7DATA_A11_B, // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX7DATA_A12_B, // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX7DATA_A13_B, // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX7DATA_A14_B, // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX7DATA_A15_B, // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX7ELECIDLE_A0_B, // net ID: PIPERX7ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7PHYSTATUS_A0_B, // net ID: PIPERX7PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7STATUS_A0_B, // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX7STATUS_A1_B, // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX7STATUS_A2_B, // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX7VALID_A0_B, // net ID: PIPERX7VALID lsb: 0  msb: 0 INPUT
			NetFlow* PL2DIRECTEDLSTATE_A0_B, // net ID: PL2DIRECTEDLSTATE lsb: 0  msb: 4 INPUT
			NetFlow* PL2DIRECTEDLSTATE_A1_B, // net ID: PL2DIRECTEDLSTATE lsb: 0  msb: 4 INPUT
			NetFlow* PL2DIRECTEDLSTATE_A2_B, // net ID: PL2DIRECTEDLSTATE lsb: 0  msb: 4 INPUT
			NetFlow* PL2DIRECTEDLSTATE_A3_B, // net ID: PL2DIRECTEDLSTATE lsb: 0  msb: 4 INPUT
			NetFlow* PL2DIRECTEDLSTATE_A4_B, // net ID: PL2DIRECTEDLSTATE lsb: 0  msb: 4 INPUT
			NetFlow* PLDBGMODE_A0_B, // net ID: PLDBGMODE lsb: 0  msb: 2 INPUT
			NetFlow* PLDBGMODE_A1_B, // net ID: PLDBGMODE lsb: 0  msb: 2 INPUT
			NetFlow* PLDBGMODE_A2_B, // net ID: PLDBGMODE lsb: 0  msb: 2 INPUT
			NetFlow* PLDIRECTEDLINKAUTON_A0_B, // net ID: PLDIRECTEDLINKAUTON lsb: 0  msb: 0 INPUT
			NetFlow* PLDIRECTEDLINKCHANGE_A0_B, // net ID: PLDIRECTEDLINKCHANGE lsb: 0  msb: 1 INPUT
			NetFlow* PLDIRECTEDLINKCHANGE_A1_B, // net ID: PLDIRECTEDLINKCHANGE lsb: 0  msb: 1 INPUT
			NetFlow* PLDIRECTEDLINKSPEED_A0_B, // net ID: PLDIRECTEDLINKSPEED lsb: 0  msb: 0 INPUT
			NetFlow* PLDIRECTEDLINKWIDTH_A0_B, // net ID: PLDIRECTEDLINKWIDTH lsb: 0  msb: 1 INPUT
			NetFlow* PLDIRECTEDLINKWIDTH_A1_B, // net ID: PLDIRECTEDLINKWIDTH lsb: 0  msb: 1 INPUT
			NetFlow* PLDIRECTEDLTSSMNEW_A0_B, // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
			NetFlow* PLDIRECTEDLTSSMNEW_A1_B, // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
			NetFlow* PLDIRECTEDLTSSMNEW_A2_B, // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
			NetFlow* PLDIRECTEDLTSSMNEW_A3_B, // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
			NetFlow* PLDIRECTEDLTSSMNEW_A4_B, // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
			NetFlow* PLDIRECTEDLTSSMNEW_A5_B, // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
			NetFlow* PLDIRECTEDLTSSMNEWVLD_A0_B, // net ID: PLDIRECTEDLTSSMNEWVLD lsb: 0  msb: 0 INPUT
			NetFlow* PLDIRECTEDLTSSMSTALL_A0_B, // net ID: PLDIRECTEDLTSSMSTALL lsb: 0  msb: 0 INPUT
			NetFlow* PLDOWNSTREAMDEEMPHSOURCE_A0_B, // net ID: PLDOWNSTREAMDEEMPHSOURCE lsb: 0  msb: 0 INPUT
			NetFlow* PLRSTN_A0_B, // net ID: PLRSTN lsb: 0  msb: 0 INPUT
			NetFlow* PLTRANSMITHOTRST_A0_B, // net ID: PLTRANSMITHOTRST lsb: 0  msb: 0 INPUT
			NetFlow* PLUPSTREAMPREFERDEEMPH_A0_B, // net ID: PLUPSTREAMPREFERDEEMPH lsb: 0  msb: 0 INPUT
			NetFlow* SYSRSTN_A0_B, // net ID: SYSRSTN lsb: 0  msb: 0 INPUT
			NetFlow* TL2ASPMSUSPENDCREDITCHECK_A0_B, // net ID: TL2ASPMSUSPENDCREDITCHECK lsb: 0  msb: 0 INPUT
			NetFlow* TL2PPMSUSPENDREQ_A0_B, // net ID: TL2PPMSUSPENDREQ lsb: 0  msb: 0 INPUT
			NetFlow* TLRSTN_A0_B, // net ID: TLRSTN lsb: 0  msb: 0 INPUT
			NetFlow* TRNFCSEL_A0_B, // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
			NetFlow* TRNFCSEL_A1_B, // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
			NetFlow* TRNFCSEL_A2_B, // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
			NetFlow* TRNRDSTRDY_A0_B, // net ID: TRNRDSTRDY lsb: 0  msb: 0 INPUT
			NetFlow* TRNRFCPRET_A0_B, // net ID: TRNRFCPRET lsb: 0  msb: 0 INPUT
			NetFlow* TRNRNPOK_A0_B, // net ID: TRNRNPOK lsb: 0  msb: 0 INPUT
			NetFlow* TRNRNPREQ_A0_B, // net ID: TRNRNPREQ lsb: 0  msb: 0 INPUT
			NetFlow* TRNTCFGGNT_A0_B, // net ID: TRNTCFGGNT lsb: 0  msb: 0 INPUT
			NetFlow* TRNTD_A0_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A1_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A2_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A3_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A4_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A5_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A6_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A7_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A8_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A9_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A10_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A11_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A12_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A13_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A14_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A15_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A16_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A17_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A18_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A19_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A20_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A21_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A22_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A23_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A24_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A25_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A26_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A27_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A28_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A29_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A30_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A31_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A32_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A33_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A34_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A35_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A36_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A37_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A38_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A39_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A40_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A41_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A42_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A43_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A44_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A45_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A46_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A47_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A48_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A49_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A50_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A51_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A52_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A53_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A54_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A55_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A56_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A57_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A58_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A59_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A60_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A61_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A62_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A63_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A64_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A65_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A66_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A67_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A68_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A69_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A70_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A71_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A72_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A73_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A74_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A75_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A76_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A77_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A78_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A79_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A80_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A81_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A82_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A83_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A84_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A85_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A86_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A87_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A88_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A89_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A90_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A91_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A92_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A93_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A94_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A95_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A96_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A97_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A98_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A99_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A100_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A101_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A102_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A103_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A104_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A105_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A106_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A107_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A108_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A109_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A110_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A111_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A112_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A113_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A114_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A115_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A116_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A117_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A118_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A119_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A120_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A121_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A122_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A123_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A124_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A125_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A126_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTD_A127_B, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTDLLPDATA_A0_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A1_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A2_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A3_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A4_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A5_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A6_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A7_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A8_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A9_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A10_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A11_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A12_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A13_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A14_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A15_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A16_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A17_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A18_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A19_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A20_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A21_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A22_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A23_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A24_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A25_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A26_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A27_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A28_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A29_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A30_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPDATA_A31_B, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPSRCRDY_A0_B, // net ID: TRNTDLLPSRCRDY lsb: 0  msb: 0 INPUT
			NetFlow* TRNTECRCGEN_A0_B, // net ID: TRNTECRCGEN lsb: 0  msb: 0 INPUT
			NetFlow* TRNTEOF_A0_B, // net ID: TRNTEOF lsb: 0  msb: 0 INPUT
			NetFlow* TRNTERRFWD_A0_B, // net ID: TRNTERRFWD lsb: 0  msb: 0 INPUT
			NetFlow* TRNTREM_A0_B, // net ID: TRNTREM lsb: 0  msb: 1 INPUT
			NetFlow* TRNTREM_A1_B, // net ID: TRNTREM lsb: 0  msb: 1 INPUT
			NetFlow* TRNTSOF_A0_B, // net ID: TRNTSOF lsb: 0  msb: 0 INPUT
			NetFlow* TRNTSRCDSC_A0_B, // net ID: TRNTSRCDSC lsb: 0  msb: 0 INPUT
			NetFlow* TRNTSRCRDY_A0_B, // net ID: TRNTSRCRDY lsb: 0  msb: 0 INPUT
			NetFlow* TRNTSTR_A0_B, // net ID: TRNTSTR lsb: 0  msb: 0 INPUT
			NetFlow* USERCLK_A0_B, // net ID: USERCLK lsb: 0  msb: 0 INPUT
			NetFlow* USERCLK2_A0_B // net ID: USERCLK2 lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->AER_BASE_PTR = AER_BASE_PTR; // Default: 12'h140
			this->AER_CAP_ECRC_CHECK_CAPABLE = AER_CAP_ECRC_CHECK_CAPABLE; // Default: "FALSE"
			this->AER_CAP_ECRC_GEN_CAPABLE = AER_CAP_ECRC_GEN_CAPABLE; // Default: "FALSE"
			this->AER_CAP_ID = AER_CAP_ID; // Default: 16'h0001
			this->AER_CAP_MULTIHEADER = AER_CAP_MULTIHEADER; // Default: "FALSE"
			this->AER_CAP_NEXTPTR = AER_CAP_NEXTPTR; // Default: 12'h178
			this->AER_CAP_ON = AER_CAP_ON; // Default: "FALSE"
			this->AER_CAP_OPTIONAL_ERR_SUPPORT = AER_CAP_OPTIONAL_ERR_SUPPORT; // Default: 24'h000000
			this->AER_CAP_PERMIT_ROOTERR_UPDATE = AER_CAP_PERMIT_ROOTERR_UPDATE; // Default: "TRUE"
			this->AER_CAP_VERSION = AER_CAP_VERSION; // Default: 4'h2
			this->ALLOW_X8_GEN2 = ALLOW_X8_GEN2; // Default: "FALSE"
			this->BAR0 = BAR0; // Default: 32'hFFFFFF00
			this->BAR1 = BAR1; // Default: 32'hFFFF0000
			this->BAR2 = BAR2; // Default: 32'hFFFF000C
			this->BAR3 = BAR3; // Default: 32'hFFFFFFFF
			this->BAR4 = BAR4; // Default: 32'h00000000
			this->BAR5 = BAR5; // Default: 32'h00000000
			this->CAPABILITIES_PTR = CAPABILITIES_PTR; // Default: 8'h40
			this->CARDBUS_CIS_POINTER = CARDBUS_CIS_POINTER; // Default: 32'h00000000
			this->CFG_ECRC_ERR_CPLSTAT = CFG_ECRC_ERR_CPLSTAT; // Default: 0
			this->CLASS_CODE = CLASS_CODE; // Default: 24'h000000
			this->CMD_INTX_IMPLEMENTED = CMD_INTX_IMPLEMENTED; // Default: "TRUE"
			this->CPL_TIMEOUT_DISABLE_SUPPORTED = CPL_TIMEOUT_DISABLE_SUPPORTED; // Default: "FALSE"
			this->CPL_TIMEOUT_RANGES_SUPPORTED = CPL_TIMEOUT_RANGES_SUPPORTED; // Default: 4'h0
			this->CRM_MODULE_RSTS = CRM_MODULE_RSTS; // Default: 7'h00
			this->DEV_CAP2_ARI_FORWARDING_SUPPORTED = DEV_CAP2_ARI_FORWARDING_SUPPORTED; // Default: "FALSE"
			this->DEV_CAP2_ATOMICOP32_COMPLETER_SUPPORTED = DEV_CAP2_ATOMICOP32_COMPLETER_SUPPORTED; // Default: "FALSE"
			this->DEV_CAP2_ATOMICOP64_COMPLETER_SUPPORTED = DEV_CAP2_ATOMICOP64_COMPLETER_SUPPORTED; // Default: "FALSE"
			this->DEV_CAP2_ATOMICOP_ROUTING_SUPPORTED = DEV_CAP2_ATOMICOP_ROUTING_SUPPORTED; // Default: "FALSE"
			this->DEV_CAP2_CAS128_COMPLETER_SUPPORTED = DEV_CAP2_CAS128_COMPLETER_SUPPORTED; // Default: "FALSE"
			this->DEV_CAP2_ENDEND_TLP_PREFIX_SUPPORTED = DEV_CAP2_ENDEND_TLP_PREFIX_SUPPORTED; // Default: "FALSE"
			this->DEV_CAP2_EXTENDED_FMT_FIELD_SUPPORTED = DEV_CAP2_EXTENDED_FMT_FIELD_SUPPORTED; // Default: "FALSE"
			this->DEV_CAP2_LTR_MECHANISM_SUPPORTED = DEV_CAP2_LTR_MECHANISM_SUPPORTED; // Default: "FALSE"
			this->DEV_CAP2_MAX_ENDEND_TLP_PREFIXES = DEV_CAP2_MAX_ENDEND_TLP_PREFIXES; // Default: 2'h0
			this->DEV_CAP2_NO_RO_ENABLED_PRPR_PASSING = DEV_CAP2_NO_RO_ENABLED_PRPR_PASSING; // Default: "FALSE"
			this->DEV_CAP2_TPH_COMPLETER_SUPPORTED = DEV_CAP2_TPH_COMPLETER_SUPPORTED; // Default: 2'h0
			this->DEV_CAP_ENABLE_SLOT_PWR_LIMIT_SCALE = DEV_CAP_ENABLE_SLOT_PWR_LIMIT_SCALE; // Default: "TRUE"
			this->DEV_CAP_ENABLE_SLOT_PWR_LIMIT_VALUE = DEV_CAP_ENABLE_SLOT_PWR_LIMIT_VALUE; // Default: "TRUE"
			this->DEV_CAP_ENDPOINT_L0S_LATENCY = DEV_CAP_ENDPOINT_L0S_LATENCY; // Default: 0
			this->DEV_CAP_ENDPOINT_L1_LATENCY = DEV_CAP_ENDPOINT_L1_LATENCY; // Default: 0
			this->DEV_CAP_EXT_TAG_SUPPORTED = DEV_CAP_EXT_TAG_SUPPORTED; // Default: "TRUE"
			this->DEV_CAP_FUNCTION_LEVEL_RESET_CAPABLE = DEV_CAP_FUNCTION_LEVEL_RESET_CAPABLE; // Default: "FALSE"
			this->DEV_CAP_MAX_PAYLOAD_SUPPORTED = DEV_CAP_MAX_PAYLOAD_SUPPORTED; // Default: 2
			this->DEV_CAP_PHANTOM_FUNCTIONS_SUPPORT = DEV_CAP_PHANTOM_FUNCTIONS_SUPPORT; // Default: 0
			this->DEV_CAP_ROLE_BASED_ERROR = DEV_CAP_ROLE_BASED_ERROR; // Default: "TRUE"
			this->DEV_CAP_RSVD_14_12 = DEV_CAP_RSVD_14_12; // Default: 0
			this->DEV_CAP_RSVD_17_16 = DEV_CAP_RSVD_17_16; // Default: 0
			this->DEV_CAP_RSVD_31_29 = DEV_CAP_RSVD_31_29; // Default: 0
			this->DEV_CONTROL_AUX_POWER_SUPPORTED = DEV_CONTROL_AUX_POWER_SUPPORTED; // Default: "FALSE"
			this->DEV_CONTROL_EXT_TAG_DEFAULT = DEV_CONTROL_EXT_TAG_DEFAULT; // Default: "FALSE"
			this->DISABLE_ASPM_L1_TIMER = DISABLE_ASPM_L1_TIMER; // Default: "FALSE"
			this->DISABLE_BAR_FILTERING = DISABLE_BAR_FILTERING; // Default: "FALSE"
			this->DISABLE_ERR_MSG = DISABLE_ERR_MSG; // Default: "FALSE"
			this->DISABLE_ID_CHECK = DISABLE_ID_CHECK; // Default: "FALSE"
			this->DISABLE_LANE_REVERSAL = DISABLE_LANE_REVERSAL; // Default: "FALSE"
			this->DISABLE_LOCKED_FILTER = DISABLE_LOCKED_FILTER; // Default: "FALSE"
			this->DISABLE_PPM_FILTER = DISABLE_PPM_FILTER; // Default: "FALSE"
			this->DISABLE_RX_POISONED_RESP = DISABLE_RX_POISONED_RESP; // Default: "FALSE"
			this->DISABLE_RX_TC_FILTER = DISABLE_RX_TC_FILTER; // Default: "FALSE"
			this->DISABLE_SCRAMBLING = DISABLE_SCRAMBLING; // Default: "FALSE"
			this->DNSTREAM_LINK_NUM = DNSTREAM_LINK_NUM; // Default: 8'h00
			this->DSN_BASE_PTR = DSN_BASE_PTR; // Default: 12'h100
			this->DSN_CAP_ID = DSN_CAP_ID; // Default: 16'h0003
			this->DSN_CAP_NEXTPTR = DSN_CAP_NEXTPTR; // Default: 12'h10C
			this->DSN_CAP_ON = DSN_CAP_ON; // Default: "TRUE"
			this->DSN_CAP_VERSION = DSN_CAP_VERSION; // Default: 4'h1
			this->ENABLE_MSG_ROUTE = ENABLE_MSG_ROUTE; // Default: 11'h000
			this->ENABLE_RX_TD_ECRC_TRIM = ENABLE_RX_TD_ECRC_TRIM; // Default: "FALSE"
			this->ENDEND_TLP_PREFIX_FORWARDING_SUPPORTED = ENDEND_TLP_PREFIX_FORWARDING_SUPPORTED; // Default: "FALSE"
			this->ENTER_RVRY_EI_L0 = ENTER_RVRY_EI_L0; // Default: "TRUE"
			this->EXIT_LOOPBACK_ON_EI = EXIT_LOOPBACK_ON_EI; // Default: "TRUE"
			this->EXPANSION_ROM = EXPANSION_ROM; // Default: 32'hFFFFF001
			this->EXT_CFG_CAP_PTR = EXT_CFG_CAP_PTR; // Default: 6'h3F
			this->EXT_CFG_XP_CAP_PTR = EXT_CFG_XP_CAP_PTR; // Default: 10'h3FF
			this->HEADER_TYPE = HEADER_TYPE; // Default: 8'h00
			this->INFER_EI = INFER_EI; // Default: 5'h00
			this->INTERRUPT_PIN = INTERRUPT_PIN; // Default: 8'h01
			this->INTERRUPT_STAT_AUTO = INTERRUPT_STAT_AUTO; // Default: "TRUE"
			this->IS_SWITCH = IS_SWITCH; // Default: "FALSE"
			this->LAST_CONFIG_DWORD = LAST_CONFIG_DWORD; // Default: 10'h3FF
			this->LINK_CAP_ASPM_OPTIONALITY = LINK_CAP_ASPM_OPTIONALITY; // Default: "TRUE"
			this->LINK_CAP_ASPM_SUPPORT = LINK_CAP_ASPM_SUPPORT; // Default: 1
			this->LINK_CAP_CLOCK_POWER_MANAGEMENT = LINK_CAP_CLOCK_POWER_MANAGEMENT; // Default: "FALSE"
			this->LINK_CAP_DLL_LINK_ACTIVE_REPORTING_CAP = LINK_CAP_DLL_LINK_ACTIVE_REPORTING_CAP; // Default: "FALSE"
			this->LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN1 = LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN1; // Default: 7
			this->LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN2 = LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN2; // Default: 7
			this->LINK_CAP_L0S_EXIT_LATENCY_GEN1 = LINK_CAP_L0S_EXIT_LATENCY_GEN1; // Default: 7
			this->LINK_CAP_L0S_EXIT_LATENCY_GEN2 = LINK_CAP_L0S_EXIT_LATENCY_GEN2; // Default: 7
			this->LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN1 = LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN1; // Default: 7
			this->LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN2 = LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN2; // Default: 7
			this->LINK_CAP_L1_EXIT_LATENCY_GEN1 = LINK_CAP_L1_EXIT_LATENCY_GEN1; // Default: 7
			this->LINK_CAP_L1_EXIT_LATENCY_GEN2 = LINK_CAP_L1_EXIT_LATENCY_GEN2; // Default: 7
			this->LINK_CAP_LINK_BANDWIDTH_NOTIFICATION_CAP = LINK_CAP_LINK_BANDWIDTH_NOTIFICATION_CAP; // Default: "FALSE"
			this->LINK_CAP_MAX_LINK_SPEED = LINK_CAP_MAX_LINK_SPEED; // Default: 4'h1
			this->LINK_CAP_MAX_LINK_WIDTH = LINK_CAP_MAX_LINK_WIDTH; // Default: 6'h08
			this->LINK_CAP_RSVD_23 = LINK_CAP_RSVD_23; // Default: 0
			this->LINK_CAP_SURPRISE_DOWN_ERROR_CAPABLE = LINK_CAP_SURPRISE_DOWN_ERROR_CAPABLE; // Default: "FALSE"
			this->LINK_CONTROL_RCB = LINK_CONTROL_RCB; // Default: 0
			this->LINK_CTRL2_DEEMPHASIS = LINK_CTRL2_DEEMPHASIS; // Default: "FALSE"
			this->LINK_CTRL2_HW_AUTONOMOUS_SPEED_DISABLE = LINK_CTRL2_HW_AUTONOMOUS_SPEED_DISABLE; // Default: "FALSE"
			this->LINK_CTRL2_TARGET_LINK_SPEED = LINK_CTRL2_TARGET_LINK_SPEED; // Default: 4'h2
			this->LINK_STATUS_SLOT_CLOCK_CONFIG = LINK_STATUS_SLOT_CLOCK_CONFIG; // Default: "TRUE"
			this->LL_ACK_TIMEOUT = LL_ACK_TIMEOUT; // Default: 15'h0000
			this->LL_ACK_TIMEOUT_EN = LL_ACK_TIMEOUT_EN; // Default: "FALSE"
			this->LL_ACK_TIMEOUT_FUNC = LL_ACK_TIMEOUT_FUNC; // Default: 0
			this->LL_REPLAY_TIMEOUT = LL_REPLAY_TIMEOUT; // Default: 15'h0000
			this->LL_REPLAY_TIMEOUT_EN = LL_REPLAY_TIMEOUT_EN; // Default: "FALSE"
			this->LL_REPLAY_TIMEOUT_FUNC = LL_REPLAY_TIMEOUT_FUNC; // Default: 0
			this->LTSSM_MAX_LINK_WIDTH = LTSSM_MAX_LINK_WIDTH; // Default: 6'h01
			this->MPS_FORCE = MPS_FORCE; // Default: "FALSE"
			this->MSIX_BASE_PTR = MSIX_BASE_PTR; // Default: 8'h9C
			this->MSIX_CAP_ID = MSIX_CAP_ID; // Default: 8'h11
			this->MSIX_CAP_NEXTPTR = MSIX_CAP_NEXTPTR; // Default: 8'h00
			this->MSIX_CAP_ON = MSIX_CAP_ON; // Default: "FALSE"
			this->MSIX_CAP_PBA_BIR = MSIX_CAP_PBA_BIR; // Default: 0
			this->MSIX_CAP_PBA_OFFSET = MSIX_CAP_PBA_OFFSET; // Default: 29'h00000050
			this->MSIX_CAP_TABLE_BIR = MSIX_CAP_TABLE_BIR; // Default: 0
			this->MSIX_CAP_TABLE_OFFSET = MSIX_CAP_TABLE_OFFSET; // Default: 29'h00000040
			this->MSIX_CAP_TABLE_SIZE = MSIX_CAP_TABLE_SIZE; // Default: 11'h000
			this->MSI_BASE_PTR = MSI_BASE_PTR; // Default: 8'h48
			this->MSI_CAP_64_BIT_ADDR_CAPABLE = MSI_CAP_64_BIT_ADDR_CAPABLE; // Default: "TRUE"
			this->MSI_CAP_ID = MSI_CAP_ID; // Default: 8'h05
			this->MSI_CAP_MULTIMSGCAP = MSI_CAP_MULTIMSGCAP; // Default: 0
			this->MSI_CAP_MULTIMSG_EXTENSION = MSI_CAP_MULTIMSG_EXTENSION; // Default: 0
			this->MSI_CAP_NEXTPTR = MSI_CAP_NEXTPTR; // Default: 8'h60
			this->MSI_CAP_ON = MSI_CAP_ON; // Default: "FALSE"
			this->MSI_CAP_PER_VECTOR_MASKING_CAPABLE = MSI_CAP_PER_VECTOR_MASKING_CAPABLE; // Default: "TRUE"
			this->N_FTS_COMCLK_GEN1 = N_FTS_COMCLK_GEN1; // Default: 255
			this->N_FTS_COMCLK_GEN2 = N_FTS_COMCLK_GEN2; // Default: 255
			this->N_FTS_GEN1 = N_FTS_GEN1; // Default: 255
			this->N_FTS_GEN2 = N_FTS_GEN2; // Default: 255
			this->PCIE_BASE_PTR = PCIE_BASE_PTR; // Default: 8'h60
			this->PCIE_CAP_CAPABILITY_ID = PCIE_CAP_CAPABILITY_ID; // Default: 8'h10
			this->PCIE_CAP_CAPABILITY_VERSION = PCIE_CAP_CAPABILITY_VERSION; // Default: 4'h2
			this->PCIE_CAP_DEVICE_PORT_TYPE = PCIE_CAP_DEVICE_PORT_TYPE; // Default: 4'h0
			this->PCIE_CAP_NEXTPTR = PCIE_CAP_NEXTPTR; // Default: 8'h9C
			this->PCIE_CAP_ON = PCIE_CAP_ON; // Default: "TRUE"
			this->PCIE_CAP_RSVD_15_14 = PCIE_CAP_RSVD_15_14; // Default: 0
			this->PCIE_CAP_SLOT_IMPLEMENTED = PCIE_CAP_SLOT_IMPLEMENTED; // Default: "FALSE"
			this->PCIE_REVISION = PCIE_REVISION; // Default: 2
			this->PL_AUTO_CONFIG = PL_AUTO_CONFIG; // Default: 0
			this->PL_FAST_TRAIN = PL_FAST_TRAIN; // Default: "FALSE"
			this->PM_ASPML0S_TIMEOUT = PM_ASPML0S_TIMEOUT; // Default: 15'h0000
			this->PM_ASPML0S_TIMEOUT_EN = PM_ASPML0S_TIMEOUT_EN; // Default: "FALSE"
			this->PM_ASPML0S_TIMEOUT_FUNC = PM_ASPML0S_TIMEOUT_FUNC; // Default: 0
			this->PM_ASPM_FASTEXIT = PM_ASPM_FASTEXIT; // Default: "FALSE"
			this->PM_BASE_PTR = PM_BASE_PTR; // Default: 8'h40
			this->PM_CAP_AUXCURRENT = PM_CAP_AUXCURRENT; // Default: 0
			this->PM_CAP_D1SUPPORT = PM_CAP_D1SUPPORT; // Default: "TRUE"
			this->PM_CAP_D2SUPPORT = PM_CAP_D2SUPPORT; // Default: "TRUE"
			this->PM_CAP_DSI = PM_CAP_DSI; // Default: "FALSE"
			this->PM_CAP_ID = PM_CAP_ID; // Default: 8'h01
			this->PM_CAP_NEXTPTR = PM_CAP_NEXTPTR; // Default: 8'h48
			this->PM_CAP_ON = PM_CAP_ON; // Default: "TRUE"
			this->PM_CAP_PMESUPPORT = PM_CAP_PMESUPPORT; // Default: 5'h0F
			this->PM_CAP_PME_CLOCK = PM_CAP_PME_CLOCK; // Default: "FALSE"
			this->PM_CAP_RSVD_04 = PM_CAP_RSVD_04; // Default: 0
			this->PM_CAP_VERSION = PM_CAP_VERSION; // Default: 3
			this->PM_CSR_B2B3 = PM_CSR_B2B3; // Default: "FALSE"
			this->PM_CSR_BPCCEN = PM_CSR_BPCCEN; // Default: "FALSE"
			this->PM_CSR_NOSOFTRST = PM_CSR_NOSOFTRST; // Default: "TRUE"
			this->PM_DATA0 = PM_DATA0; // Default: 8'h01
			this->PM_DATA1 = PM_DATA1; // Default: 8'h01
			this->PM_DATA2 = PM_DATA2; // Default: 8'h01
			this->PM_DATA3 = PM_DATA3; // Default: 8'h01
			this->PM_DATA4 = PM_DATA4; // Default: 8'h01
			this->PM_DATA5 = PM_DATA5; // Default: 8'h01
			this->PM_DATA6 = PM_DATA6; // Default: 8'h01
			this->PM_DATA7 = PM_DATA7; // Default: 8'h01
			this->PM_DATA_SCALE0 = PM_DATA_SCALE0; // Default: 2'h1
			this->PM_DATA_SCALE1 = PM_DATA_SCALE1; // Default: 2'h1
			this->PM_DATA_SCALE2 = PM_DATA_SCALE2; // Default: 2'h1
			this->PM_DATA_SCALE3 = PM_DATA_SCALE3; // Default: 2'h1
			this->PM_DATA_SCALE4 = PM_DATA_SCALE4; // Default: 2'h1
			this->PM_DATA_SCALE5 = PM_DATA_SCALE5; // Default: 2'h1
			this->PM_DATA_SCALE6 = PM_DATA_SCALE6; // Default: 2'h1
			this->PM_DATA_SCALE7 = PM_DATA_SCALE7; // Default: 2'h1
			this->PM_MF = PM_MF; // Default: "FALSE"
			this->RBAR_BASE_PTR = RBAR_BASE_PTR; // Default: 12'h178
			this->RBAR_CAP_CONTROL_ENCODEDBAR0 = RBAR_CAP_CONTROL_ENCODEDBAR0; // Default: 5'h00
			this->RBAR_CAP_CONTROL_ENCODEDBAR1 = RBAR_CAP_CONTROL_ENCODEDBAR1; // Default: 5'h00
			this->RBAR_CAP_CONTROL_ENCODEDBAR2 = RBAR_CAP_CONTROL_ENCODEDBAR2; // Default: 5'h00
			this->RBAR_CAP_CONTROL_ENCODEDBAR3 = RBAR_CAP_CONTROL_ENCODEDBAR3; // Default: 5'h00
			this->RBAR_CAP_CONTROL_ENCODEDBAR4 = RBAR_CAP_CONTROL_ENCODEDBAR4; // Default: 5'h00
			this->RBAR_CAP_CONTROL_ENCODEDBAR5 = RBAR_CAP_CONTROL_ENCODEDBAR5; // Default: 5'h00
			this->RBAR_CAP_ID = RBAR_CAP_ID; // Default: 16'h0015
			this->RBAR_CAP_INDEX0 = RBAR_CAP_INDEX0; // Default: 3'h0
			this->RBAR_CAP_INDEX1 = RBAR_CAP_INDEX1; // Default: 3'h0
			this->RBAR_CAP_INDEX2 = RBAR_CAP_INDEX2; // Default: 3'h0
			this->RBAR_CAP_INDEX3 = RBAR_CAP_INDEX3; // Default: 3'h0
			this->RBAR_CAP_INDEX4 = RBAR_CAP_INDEX4; // Default: 3'h0
			this->RBAR_CAP_INDEX5 = RBAR_CAP_INDEX5; // Default: 3'h0
			this->RBAR_CAP_NEXTPTR = RBAR_CAP_NEXTPTR; // Default: 12'h000
			this->RBAR_CAP_ON = RBAR_CAP_ON; // Default: "FALSE"
			this->RBAR_CAP_SUP0 = RBAR_CAP_SUP0; // Default: 32'h00000000
			this->RBAR_CAP_SUP1 = RBAR_CAP_SUP1; // Default: 32'h00000000
			this->RBAR_CAP_SUP2 = RBAR_CAP_SUP2; // Default: 32'h00000000
			this->RBAR_CAP_SUP3 = RBAR_CAP_SUP3; // Default: 32'h00000000
			this->RBAR_CAP_SUP4 = RBAR_CAP_SUP4; // Default: 32'h00000000
			this->RBAR_CAP_SUP5 = RBAR_CAP_SUP5; // Default: 32'h00000000
			this->RBAR_CAP_VERSION = RBAR_CAP_VERSION; // Default: 4'h1
			this->RBAR_NUM = RBAR_NUM; // Default: 3'h1
			this->RECRC_CHK = RECRC_CHK; // Default: 0
			this->RECRC_CHK_TRIM = RECRC_CHK_TRIM; // Default: "FALSE"
			this->ROOT_CAP_CRS_SW_VISIBILITY = ROOT_CAP_CRS_SW_VISIBILITY; // Default: "FALSE"
			this->RP_AUTO_SPD = RP_AUTO_SPD; // Default: 2'h1
			this->RP_AUTO_SPD_LOOPCNT = RP_AUTO_SPD_LOOPCNT; // Default: 5'h1F
			this->SELECT_DLL_IF = SELECT_DLL_IF; // Default: "FALSE"
			this->SIM_VERSION = SIM_VERSION; // Default: "1.0"
			this->SLOT_CAP_ATT_BUTTON_PRESENT = SLOT_CAP_ATT_BUTTON_PRESENT; // Default: "FALSE"
			this->SLOT_CAP_ATT_INDICATOR_PRESENT = SLOT_CAP_ATT_INDICATOR_PRESENT; // Default: "FALSE"
			this->SLOT_CAP_ELEC_INTERLOCK_PRESENT = SLOT_CAP_ELEC_INTERLOCK_PRESENT; // Default: "FALSE"
			this->SLOT_CAP_HOTPLUG_CAPABLE = SLOT_CAP_HOTPLUG_CAPABLE; // Default: "FALSE"
			this->SLOT_CAP_HOTPLUG_SURPRISE = SLOT_CAP_HOTPLUG_SURPRISE; // Default: "FALSE"
			this->SLOT_CAP_MRL_SENSOR_PRESENT = SLOT_CAP_MRL_SENSOR_PRESENT; // Default: "FALSE"
			this->SLOT_CAP_NO_CMD_COMPLETED_SUPPORT = SLOT_CAP_NO_CMD_COMPLETED_SUPPORT; // Default: "FALSE"
			this->SLOT_CAP_PHYSICAL_SLOT_NUM = SLOT_CAP_PHYSICAL_SLOT_NUM; // Default: 13'h0000
			this->SLOT_CAP_POWER_CONTROLLER_PRESENT = SLOT_CAP_POWER_CONTROLLER_PRESENT; // Default: "FALSE"
			this->SLOT_CAP_POWER_INDICATOR_PRESENT = SLOT_CAP_POWER_INDICATOR_PRESENT; // Default: "FALSE"
			this->SLOT_CAP_SLOT_POWER_LIMIT_SCALE = SLOT_CAP_SLOT_POWER_LIMIT_SCALE; // Default: 0
			this->SLOT_CAP_SLOT_POWER_LIMIT_VALUE = SLOT_CAP_SLOT_POWER_LIMIT_VALUE; // Default: 8'h00
			this->SPARE_BIT0 = SPARE_BIT0; // Default: 0
			this->SPARE_BIT1 = SPARE_BIT1; // Default: 0
			this->SPARE_BIT2 = SPARE_BIT2; // Default: 0
			this->SPARE_BIT3 = SPARE_BIT3; // Default: 0
			this->SPARE_BIT4 = SPARE_BIT4; // Default: 0
			this->SPARE_BIT5 = SPARE_BIT5; // Default: 0
			this->SPARE_BIT6 = SPARE_BIT6; // Default: 0
			this->SPARE_BIT7 = SPARE_BIT7; // Default: 0
			this->SPARE_BIT8 = SPARE_BIT8; // Default: 0
			this->SPARE_BYTE0 = SPARE_BYTE0; // Default: 8'h00
			this->SPARE_BYTE1 = SPARE_BYTE1; // Default: 8'h00
			this->SPARE_BYTE2 = SPARE_BYTE2; // Default: 8'h00
			this->SPARE_BYTE3 = SPARE_BYTE3; // Default: 8'h00
			this->SPARE_WORD0 = SPARE_WORD0; // Default: 32'h00000000
			this->SPARE_WORD1 = SPARE_WORD1; // Default: 32'h00000000
			this->SPARE_WORD2 = SPARE_WORD2; // Default: 32'h00000000
			this->SPARE_WORD3 = SPARE_WORD3; // Default: 32'h00000000
			this->SSL_MESSAGE_AUTO = SSL_MESSAGE_AUTO; // Default: "FALSE"
			this->TECRC_EP_INV = TECRC_EP_INV; // Default: "FALSE"
			this->TL_RBYPASS = TL_RBYPASS; // Default: "FALSE"
			this->TL_RX_RAM_RADDR_LATENCY = TL_RX_RAM_RADDR_LATENCY; // Default: 0
			this->TL_RX_RAM_RDATA_LATENCY = TL_RX_RAM_RDATA_LATENCY; // Default: 2
			this->TL_RX_RAM_WRITE_LATENCY = TL_RX_RAM_WRITE_LATENCY; // Default: 0
			this->TL_TFC_DISABLE = TL_TFC_DISABLE; // Default: "FALSE"
			this->TL_TX_CHECKS_DISABLE = TL_TX_CHECKS_DISABLE; // Default: "FALSE"
			this->TL_TX_RAM_RADDR_LATENCY = TL_TX_RAM_RADDR_LATENCY; // Default: 0
			this->TL_TX_RAM_RDATA_LATENCY = TL_TX_RAM_RDATA_LATENCY; // Default: 2
			this->TL_TX_RAM_WRITE_LATENCY = TL_TX_RAM_WRITE_LATENCY; // Default: 0
			this->TRN_DW = TRN_DW; // Default: "FALSE"
			this->TRN_NP_FC = TRN_NP_FC; // Default: "FALSE"
			this->UPCONFIG_CAPABLE = UPCONFIG_CAPABLE; // Default: "TRUE"
			this->UPSTREAM_FACING = UPSTREAM_FACING; // Default: "TRUE"
			this->UR_ATOMIC = UR_ATOMIC; // Default: "TRUE"
			this->UR_CFG1 = UR_CFG1; // Default: "TRUE"
			this->UR_INV_REQ = UR_INV_REQ; // Default: "TRUE"
			this->UR_PRS_RESPONSE = UR_PRS_RESPONSE; // Default: "TRUE"
			this->USER_CLK2_DIV2 = USER_CLK2_DIV2; // Default: "FALSE"
			this->USER_CLK_FREQ = USER_CLK_FREQ; // Default: 3
			this->USE_RID_PINS = USE_RID_PINS; // Default: "FALSE"
			this->VC0_CPL_INFINITE = VC0_CPL_INFINITE; // Default: "TRUE"
			this->VC0_RX_RAM_LIMIT = VC0_RX_RAM_LIMIT; // Default: 13'h03FF
			this->VC0_TOTAL_CREDITS_CD = VC0_TOTAL_CREDITS_CD; // Default: 127
			this->VC0_TOTAL_CREDITS_CH = VC0_TOTAL_CREDITS_CH; // Default: 31
			this->VC0_TOTAL_CREDITS_NPD = VC0_TOTAL_CREDITS_NPD; // Default: 24
			this->VC0_TOTAL_CREDITS_NPH = VC0_TOTAL_CREDITS_NPH; // Default: 12
			this->VC0_TOTAL_CREDITS_PD = VC0_TOTAL_CREDITS_PD; // Default: 288
			this->VC0_TOTAL_CREDITS_PH = VC0_TOTAL_CREDITS_PH; // Default: 32
			this->VC0_TX_LASTPACKET = VC0_TX_LASTPACKET; // Default: 31
			this->VC_BASE_PTR = VC_BASE_PTR; // Default: 12'h10C
			this->VC_CAP_ID = VC_CAP_ID; // Default: 16'h0002
			this->VC_CAP_NEXTPTR = VC_CAP_NEXTPTR; // Default: 12'h000
			this->VC_CAP_ON = VC_CAP_ON; // Default: "FALSE"
			this->VC_CAP_REJECT_SNOOP_TRANSACTIONS = VC_CAP_REJECT_SNOOP_TRANSACTIONS; // Default: "FALSE"
			this->VC_CAP_VERSION = VC_CAP_VERSION; // Default: 4'h1
			this->VSEC_BASE_PTR = VSEC_BASE_PTR; // Default: 12'h128
			this->VSEC_CAP_HDR_ID = VSEC_CAP_HDR_ID; // Default: 16'h1234
			this->VSEC_CAP_HDR_LENGTH = VSEC_CAP_HDR_LENGTH; // Default: 12'h018
			this->VSEC_CAP_HDR_REVISION = VSEC_CAP_HDR_REVISION; // Default: 4'h1
			this->VSEC_CAP_ID = VSEC_CAP_ID; // Default: 16'h000B
			this->VSEC_CAP_IS_LINK_VISIBLE = VSEC_CAP_IS_LINK_VISIBLE; // Default: "TRUE"
			this->VSEC_CAP_NEXTPTR = VSEC_CAP_NEXTPTR; // Default: 12'h140
			this->VSEC_CAP_ON = VSEC_CAP_ON; // Default: "FALSE"
			this->VSEC_CAP_VERSION = VSEC_CAP_VERSION; // Default: 4'h1
			//Verilog Ports in definition order:
			this->CFGAERECRCCHECKEN_A0_B = CFGAERECRCCHECKEN_A0_B; // net ID: CFGAERECRCCHECKEN lsb: 0  msb: 0 OUTPUT
			this->CFGAERECRCGENEN_A0_B = CFGAERECRCGENEN_A0_B; // net ID: CFGAERECRCGENEN lsb: 0  msb: 0 OUTPUT
			this->CFGAERROOTERRCORRERRRECEIVED_A0_B = CFGAERROOTERRCORRERRRECEIVED_A0_B; // net ID: CFGAERROOTERRCORRERRRECEIVED lsb: 0  msb: 0 OUTPUT
			this->CFGAERROOTERRCORRERRREPORTINGEN_A0_B = CFGAERROOTERRCORRERRREPORTINGEN_A0_B; // net ID: CFGAERROOTERRCORRERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGAERROOTERRFATALERRRECEIVED_A0_B = CFGAERROOTERRFATALERRRECEIVED_A0_B; // net ID: CFGAERROOTERRFATALERRRECEIVED lsb: 0  msb: 0 OUTPUT
			this->CFGAERROOTERRFATALERRREPORTINGEN_A0_B = CFGAERROOTERRFATALERRREPORTINGEN_A0_B; // net ID: CFGAERROOTERRFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGAERROOTERRNONFATALERRRECEIVED_A0_B = CFGAERROOTERRNONFATALERRRECEIVED_A0_B; // net ID: CFGAERROOTERRNONFATALERRRECEIVED lsb: 0  msb: 0 OUTPUT
			this->CFGAERROOTERRNONFATALERRREPORTINGEN_A0_B = CFGAERROOTERRNONFATALERRREPORTINGEN_A0_B; // net ID: CFGAERROOTERRNONFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGBRIDGESERREN_A0_B = CFGBRIDGESERREN_A0_B; // net ID: CFGBRIDGESERREN lsb: 0  msb: 0 OUTPUT
			this->CFGCOMMANDBUSMASTERENABLE_A0_B = CFGCOMMANDBUSMASTERENABLE_A0_B; // net ID: CFGCOMMANDBUSMASTERENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGCOMMANDINTERRUPTDISABLE_A0_B = CFGCOMMANDINTERRUPTDISABLE_A0_B; // net ID: CFGCOMMANDINTERRUPTDISABLE lsb: 0  msb: 0 OUTPUT
			this->CFGCOMMANDIOENABLE_A0_B = CFGCOMMANDIOENABLE_A0_B; // net ID: CFGCOMMANDIOENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGCOMMANDMEMENABLE_A0_B = CFGCOMMANDMEMENABLE_A0_B; // net ID: CFGCOMMANDMEMENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGCOMMANDSERREN_A0_B = CFGCOMMANDSERREN_A0_B; // net ID: CFGCOMMANDSERREN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROL2ARIFORWARDEN_A0_B = CFGDEVCONTROL2ARIFORWARDEN_A0_B; // net ID: CFGDEVCONTROL2ARIFORWARDEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROL2ATOMICEGRESSBLOCK_A0_B = CFGDEVCONTROL2ATOMICEGRESSBLOCK_A0_B; // net ID: CFGDEVCONTROL2ATOMICEGRESSBLOCK lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROL2ATOMICREQUESTEREN_A0_B = CFGDEVCONTROL2ATOMICREQUESTEREN_A0_B; // net ID: CFGDEVCONTROL2ATOMICREQUESTEREN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROL2CPLTIMEOUTDIS_A0_B = CFGDEVCONTROL2CPLTIMEOUTDIS_A0_B; // net ID: CFGDEVCONTROL2CPLTIMEOUTDIS lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROL2CPLTIMEOUTVAL_A0_B = CFGDEVCONTROL2CPLTIMEOUTVAL_A0_B; // net ID: CFGDEVCONTROL2CPLTIMEOUTVAL lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROL2IDOCPLEN_A0_B = CFGDEVCONTROL2IDOCPLEN_A0_B; // net ID: CFGDEVCONTROL2IDOCPLEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROL2IDOREQEN_A0_B = CFGDEVCONTROL2IDOREQEN_A0_B; // net ID: CFGDEVCONTROL2IDOREQEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROL2LTREN_A0_B = CFGDEVCONTROL2LTREN_A0_B; // net ID: CFGDEVCONTROL2LTREN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROL2TLPPREFIXBLOCK_A0_B = CFGDEVCONTROL2TLPPREFIXBLOCK_A0_B; // net ID: CFGDEVCONTROL2TLPPREFIXBLOCK lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLAUXPOWEREN_A0_B = CFGDEVCONTROLAUXPOWEREN_A0_B; // net ID: CFGDEVCONTROLAUXPOWEREN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLCORRERRREPORTINGEN_A0_B = CFGDEVCONTROLCORRERRREPORTINGEN_A0_B; // net ID: CFGDEVCONTROLCORRERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLENABLERO_A0_B = CFGDEVCONTROLENABLERO_A0_B; // net ID: CFGDEVCONTROLENABLERO lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLEXTTAGEN_A0_B = CFGDEVCONTROLEXTTAGEN_A0_B; // net ID: CFGDEVCONTROLEXTTAGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLFATALERRREPORTINGEN_A0_B = CFGDEVCONTROLFATALERRREPORTINGEN_A0_B; // net ID: CFGDEVCONTROLFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLMAXPAYLOAD_A0_B = CFGDEVCONTROLMAXPAYLOAD_A0_B; // net ID: CFGDEVCONTROLMAXPAYLOAD lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLMAXREADREQ_A0_B = CFGDEVCONTROLMAXREADREQ_A0_B; // net ID: CFGDEVCONTROLMAXREADREQ lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLNONFATALREPORTINGEN_A0_B = CFGDEVCONTROLNONFATALREPORTINGEN_A0_B; // net ID: CFGDEVCONTROLNONFATALREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLNOSNOOPEN_A0_B = CFGDEVCONTROLNOSNOOPEN_A0_B; // net ID: CFGDEVCONTROLNOSNOOPEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLPHANTOMEN_A0_B = CFGDEVCONTROLPHANTOMEN_A0_B; // net ID: CFGDEVCONTROLPHANTOMEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLURERRREPORTINGEN_A0_B = CFGDEVCONTROLURERRREPORTINGEN_A0_B; // net ID: CFGDEVCONTROLURERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVSTATUSCORRERRDETECTED_A0_B = CFGDEVSTATUSCORRERRDETECTED_A0_B; // net ID: CFGDEVSTATUSCORRERRDETECTED lsb: 0  msb: 0 OUTPUT
			this->CFGDEVSTATUSFATALERRDETECTED_A0_B = CFGDEVSTATUSFATALERRDETECTED_A0_B; // net ID: CFGDEVSTATUSFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
			this->CFGDEVSTATUSNONFATALERRDETECTED_A0_B = CFGDEVSTATUSNONFATALERRDETECTED_A0_B; // net ID: CFGDEVSTATUSNONFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
			this->CFGDEVSTATUSURDETECTED_A0_B = CFGDEVSTATUSURDETECTED_A0_B; // net ID: CFGDEVSTATUSURDETECTED lsb: 0  msb: 0 OUTPUT
			this->CFGERRAERHEADERLOGSETN_A0_B = CFGERRAERHEADERLOGSETN_A0_B; // net ID: CFGERRAERHEADERLOGSETN lsb: 0  msb: 0 OUTPUT
			this->CFGERRCPLRDYN_A0_B = CFGERRCPLRDYN_A0_B; // net ID: CFGERRCPLRDYN lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTDO_A0_B = CFGINTERRUPTDO_A0_B; // net ID: CFGINTERRUPTDO lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMMENABLE_A0_B = CFGINTERRUPTMMENABLE_A0_B; // net ID: CFGINTERRUPTMMENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIENABLE_A0_B = CFGINTERRUPTMSIENABLE_A0_B; // net ID: CFGINTERRUPTMSIENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIXENABLE_A0_B = CFGINTERRUPTMSIXENABLE_A0_B; // net ID: CFGINTERRUPTMSIXENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIXFM_A0_B = CFGINTERRUPTMSIXFM_A0_B; // net ID: CFGINTERRUPTMSIXFM lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTRDYN_A0_B = CFGINTERRUPTRDYN_A0_B; // net ID: CFGINTERRUPTRDYN lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLASPMCONTROL_A0_B = CFGLINKCONTROLASPMCONTROL_A0_B; // net ID: CFGLINKCONTROLASPMCONTROL lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLAUTOBANDWIDTHINTEN_A0_B = CFGLINKCONTROLAUTOBANDWIDTHINTEN_A0_B; // net ID: CFGLINKCONTROLAUTOBANDWIDTHINTEN lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLBANDWIDTHINTEN_A0_B = CFGLINKCONTROLBANDWIDTHINTEN_A0_B; // net ID: CFGLINKCONTROLBANDWIDTHINTEN lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLCLOCKPMEN_A0_B = CFGLINKCONTROLCLOCKPMEN_A0_B; // net ID: CFGLINKCONTROLCLOCKPMEN lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLCOMMONCLOCK_A0_B = CFGLINKCONTROLCOMMONCLOCK_A0_B; // net ID: CFGLINKCONTROLCOMMONCLOCK lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLEXTENDEDSYNC_A0_B = CFGLINKCONTROLEXTENDEDSYNC_A0_B; // net ID: CFGLINKCONTROLEXTENDEDSYNC lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLHWAUTOWIDTHDIS_A0_B = CFGLINKCONTROLHWAUTOWIDTHDIS_A0_B; // net ID: CFGLINKCONTROLHWAUTOWIDTHDIS lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLLINKDISABLE_A0_B = CFGLINKCONTROLLINKDISABLE_A0_B; // net ID: CFGLINKCONTROLLINKDISABLE lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLRCB_A0_B = CFGLINKCONTROLRCB_A0_B; // net ID: CFGLINKCONTROLRCB lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLRETRAINLINK_A0_B = CFGLINKCONTROLRETRAINLINK_A0_B; // net ID: CFGLINKCONTROLRETRAINLINK lsb: 0  msb: 0 OUTPUT
			this->CFGLINKSTATUSAUTOBANDWIDTHSTATUS_A0_B = CFGLINKSTATUSAUTOBANDWIDTHSTATUS_A0_B; // net ID: CFGLINKSTATUSAUTOBANDWIDTHSTATUS lsb: 0  msb: 0 OUTPUT
			this->CFGLINKSTATUSBANDWIDTHSTATUS_A0_B = CFGLINKSTATUSBANDWIDTHSTATUS_A0_B; // net ID: CFGLINKSTATUSBANDWIDTHSTATUS lsb: 0  msb: 0 OUTPUT
			this->CFGLINKSTATUSCURRENTSPEED_A0_B = CFGLINKSTATUSCURRENTSPEED_A0_B; // net ID: CFGLINKSTATUSCURRENTSPEED lsb: 0  msb: 0 OUTPUT
			this->CFGLINKSTATUSDLLACTIVE_A0_B = CFGLINKSTATUSDLLACTIVE_A0_B; // net ID: CFGLINKSTATUSDLLACTIVE lsb: 0  msb: 0 OUTPUT
			this->CFGLINKSTATUSLINKTRAINING_A0_B = CFGLINKSTATUSLINKTRAINING_A0_B; // net ID: CFGLINKSTATUSLINKTRAINING lsb: 0  msb: 0 OUTPUT
			this->CFGLINKSTATUSNEGOTIATEDWIDTH_A0_B = CFGLINKSTATUSNEGOTIATEDWIDTH_A0_B; // net ID: CFGLINKSTATUSNEGOTIATEDWIDTH lsb: 0  msb: 0 OUTPUT
			this->CFGMGMTDO_A0_B = CFGMGMTDO_A0_B; // net ID: CFGMGMTDO lsb: 0  msb: 0 OUTPUT
			this->CFGMGMTRDWRDONEN_A0_B = CFGMGMTRDWRDONEN_A0_B; // net ID: CFGMGMTRDWRDONEN lsb: 0  msb: 0 OUTPUT
			this->CFGMSGDATA_A0_B = CFGMSGDATA_A0_B; // net ID: CFGMSGDATA lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVED_A0_B = CFGMSGRECEIVED_A0_B; // net ID: CFGMSGRECEIVED lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDASSERTINTA_A0_B = CFGMSGRECEIVEDASSERTINTA_A0_B; // net ID: CFGMSGRECEIVEDASSERTINTA lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDASSERTINTB_A0_B = CFGMSGRECEIVEDASSERTINTB_A0_B; // net ID: CFGMSGRECEIVEDASSERTINTB lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDASSERTINTC_A0_B = CFGMSGRECEIVEDASSERTINTC_A0_B; // net ID: CFGMSGRECEIVEDASSERTINTC lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDASSERTINTD_A0_B = CFGMSGRECEIVEDASSERTINTD_A0_B; // net ID: CFGMSGRECEIVEDASSERTINTD lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDDEASSERTINTA_A0_B = CFGMSGRECEIVEDDEASSERTINTA_A0_B; // net ID: CFGMSGRECEIVEDDEASSERTINTA lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDDEASSERTINTB_A0_B = CFGMSGRECEIVEDDEASSERTINTB_A0_B; // net ID: CFGMSGRECEIVEDDEASSERTINTB lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDDEASSERTINTC_A0_B = CFGMSGRECEIVEDDEASSERTINTC_A0_B; // net ID: CFGMSGRECEIVEDDEASSERTINTC lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDDEASSERTINTD_A0_B = CFGMSGRECEIVEDDEASSERTINTD_A0_B; // net ID: CFGMSGRECEIVEDDEASSERTINTD lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDERRCOR_A0_B = CFGMSGRECEIVEDERRCOR_A0_B; // net ID: CFGMSGRECEIVEDERRCOR lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDERRFATAL_A0_B = CFGMSGRECEIVEDERRFATAL_A0_B; // net ID: CFGMSGRECEIVEDERRFATAL lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDERRNONFATAL_A0_B = CFGMSGRECEIVEDERRNONFATAL_A0_B; // net ID: CFGMSGRECEIVEDERRNONFATAL lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDPMASNAK_A0_B = CFGMSGRECEIVEDPMASNAK_A0_B; // net ID: CFGMSGRECEIVEDPMASNAK lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDPMETO_A0_B = CFGMSGRECEIVEDPMETO_A0_B; // net ID: CFGMSGRECEIVEDPMETO lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDPMETOACK_A0_B = CFGMSGRECEIVEDPMETOACK_A0_B; // net ID: CFGMSGRECEIVEDPMETOACK lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDPMPME_A0_B = CFGMSGRECEIVEDPMPME_A0_B; // net ID: CFGMSGRECEIVEDPMPME lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDSETSLOTPOWERLIMIT_A0_B = CFGMSGRECEIVEDSETSLOTPOWERLIMIT_A0_B; // net ID: CFGMSGRECEIVEDSETSLOTPOWERLIMIT lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDUNLOCK_A0_B = CFGMSGRECEIVEDUNLOCK_A0_B; // net ID: CFGMSGRECEIVEDUNLOCK lsb: 0  msb: 0 OUTPUT
			this->CFGPCIELINKSTATE_A0_B = CFGPCIELINKSTATE_A0_B; // net ID: CFGPCIELINKSTATE lsb: 0  msb: 0 OUTPUT
			this->CFGPMCSRPMEEN_A0_B = CFGPMCSRPMEEN_A0_B; // net ID: CFGPMCSRPMEEN lsb: 0  msb: 0 OUTPUT
			this->CFGPMCSRPMESTATUS_A0_B = CFGPMCSRPMESTATUS_A0_B; // net ID: CFGPMCSRPMESTATUS lsb: 0  msb: 0 OUTPUT
			this->CFGPMCSRPOWERSTATE_A0_B = CFGPMCSRPOWERSTATE_A0_B; // net ID: CFGPMCSRPOWERSTATE lsb: 0  msb: 0 OUTPUT
			this->CFGPMRCVASREQL1N_A0_B = CFGPMRCVASREQL1N_A0_B; // net ID: CFGPMRCVASREQL1N lsb: 0  msb: 0 OUTPUT
			this->CFGPMRCVENTERL1N_A0_B = CFGPMRCVENTERL1N_A0_B; // net ID: CFGPMRCVENTERL1N lsb: 0  msb: 0 OUTPUT
			this->CFGPMRCVENTERL23N_A0_B = CFGPMRCVENTERL23N_A0_B; // net ID: CFGPMRCVENTERL23N lsb: 0  msb: 0 OUTPUT
			this->CFGPMRCVREQACKN_A0_B = CFGPMRCVREQACKN_A0_B; // net ID: CFGPMRCVREQACKN lsb: 0  msb: 0 OUTPUT
			this->CFGROOTCONTROLPMEINTEN_A0_B = CFGROOTCONTROLPMEINTEN_A0_B; // net ID: CFGROOTCONTROLPMEINTEN lsb: 0  msb: 0 OUTPUT
			this->CFGROOTCONTROLSYSERRCORRERREN_A0_B = CFGROOTCONTROLSYSERRCORRERREN_A0_B; // net ID: CFGROOTCONTROLSYSERRCORRERREN lsb: 0  msb: 0 OUTPUT
			this->CFGROOTCONTROLSYSERRFATALERREN_A0_B = CFGROOTCONTROLSYSERRFATALERREN_A0_B; // net ID: CFGROOTCONTROLSYSERRFATALERREN lsb: 0  msb: 0 OUTPUT
			this->CFGROOTCONTROLSYSERRNONFATALERREN_A0_B = CFGROOTCONTROLSYSERRNONFATALERREN_A0_B; // net ID: CFGROOTCONTROLSYSERRNONFATALERREN lsb: 0  msb: 0 OUTPUT
			this->CFGSLOTCONTROLELECTROMECHILCTLPULSE_A0_B = CFGSLOTCONTROLELECTROMECHILCTLPULSE_A0_B; // net ID: CFGSLOTCONTROLELECTROMECHILCTLPULSE lsb: 0  msb: 0 OUTPUT
			this->CFGTRANSACTION_A0_B = CFGTRANSACTION_A0_B; // net ID: CFGTRANSACTION lsb: 0  msb: 0 OUTPUT
			this->CFGTRANSACTIONADDR_A0_B = CFGTRANSACTIONADDR_A0_B; // net ID: CFGTRANSACTIONADDR lsb: 0  msb: 0 OUTPUT
			this->CFGTRANSACTIONTYPE_A0_B = CFGTRANSACTIONTYPE_A0_B; // net ID: CFGTRANSACTIONTYPE lsb: 0  msb: 0 OUTPUT
			this->CFGVCTCVCMAP_A0_B = CFGVCTCVCMAP_A0_B; // net ID: CFGVCTCVCMAP lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRA_A0_B = DBGSCLRA_A0_B; // net ID: DBGSCLRA lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRB_A0_B = DBGSCLRB_A0_B; // net ID: DBGSCLRB lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRC_A0_B = DBGSCLRC_A0_B; // net ID: DBGSCLRC lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRD_A0_B = DBGSCLRD_A0_B; // net ID: DBGSCLRD lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRE_A0_B = DBGSCLRE_A0_B; // net ID: DBGSCLRE lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRF_A0_B = DBGSCLRF_A0_B; // net ID: DBGSCLRF lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRG_A0_B = DBGSCLRG_A0_B; // net ID: DBGSCLRG lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRH_A0_B = DBGSCLRH_A0_B; // net ID: DBGSCLRH lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRI_A0_B = DBGSCLRI_A0_B; // net ID: DBGSCLRI lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRJ_A0_B = DBGSCLRJ_A0_B; // net ID: DBGSCLRJ lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRK_A0_B = DBGSCLRK_A0_B; // net ID: DBGSCLRK lsb: 0  msb: 0 OUTPUT
			this->DBGVECA_A0_B = DBGVECA_A0_B; // net ID: DBGVECA lsb: 0  msb: 0 OUTPUT
			this->DBGVECB_A0_B = DBGVECB_A0_B; // net ID: DBGVECB lsb: 0  msb: 0 OUTPUT
			this->DBGVECC_A0_B = DBGVECC_A0_B; // net ID: DBGVECC lsb: 0  msb: 0 OUTPUT
			this->DRPDO_A0_B = DRPDO_A0_B; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			this->DRPRDY_A0_B = DRPRDY_A0_B; // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
			this->LL2BADDLLPERR_A0_B = LL2BADDLLPERR_A0_B; // net ID: LL2BADDLLPERR lsb: 0  msb: 0 OUTPUT
			this->LL2BADTLPERR_A0_B = LL2BADTLPERR_A0_B; // net ID: LL2BADTLPERR lsb: 0  msb: 0 OUTPUT
			this->LL2LINKSTATUS_A0_B = LL2LINKSTATUS_A0_B; // net ID: LL2LINKSTATUS lsb: 0  msb: 0 OUTPUT
			this->LL2PROTOCOLERR_A0_B = LL2PROTOCOLERR_A0_B; // net ID: LL2PROTOCOLERR lsb: 0  msb: 0 OUTPUT
			this->LL2RECEIVERERR_A0_B = LL2RECEIVERERR_A0_B; // net ID: LL2RECEIVERERR lsb: 0  msb: 0 OUTPUT
			this->LL2REPLAYROERR_A0_B = LL2REPLAYROERR_A0_B; // net ID: LL2REPLAYROERR lsb: 0  msb: 0 OUTPUT
			this->LL2REPLAYTOERR_A0_B = LL2REPLAYTOERR_A0_B; // net ID: LL2REPLAYTOERR lsb: 0  msb: 0 OUTPUT
			this->LL2SUSPENDOK_A0_B = LL2SUSPENDOK_A0_B; // net ID: LL2SUSPENDOK lsb: 0  msb: 0 OUTPUT
			this->LL2TFCINIT1SEQ_A0_B = LL2TFCINIT1SEQ_A0_B; // net ID: LL2TFCINIT1SEQ lsb: 0  msb: 0 OUTPUT
			this->LL2TFCINIT2SEQ_A0_B = LL2TFCINIT2SEQ_A0_B; // net ID: LL2TFCINIT2SEQ lsb: 0  msb: 0 OUTPUT
			this->LL2TXIDLE_A0_B = LL2TXIDLE_A0_B; // net ID: LL2TXIDLE lsb: 0  msb: 0 OUTPUT
			this->LNKCLKEN_A0_B = LNKCLKEN_A0_B; // net ID: LNKCLKEN lsb: 0  msb: 0 OUTPUT
			this->MIMRXRADDR_A0_B = MIMRXRADDR_A0_B; // net ID: MIMRXRADDR lsb: 0  msb: 0 OUTPUT
			this->MIMRXREN_A0_B = MIMRXREN_A0_B; // net ID: MIMRXREN lsb: 0  msb: 0 OUTPUT
			this->MIMRXWADDR_A0_B = MIMRXWADDR_A0_B; // net ID: MIMRXWADDR lsb: 0  msb: 0 OUTPUT
			this->MIMRXWDATA_A0_B = MIMRXWDATA_A0_B; // net ID: MIMRXWDATA lsb: 0  msb: 0 OUTPUT
			this->MIMRXWEN_A0_B = MIMRXWEN_A0_B; // net ID: MIMRXWEN lsb: 0  msb: 0 OUTPUT
			this->MIMTXRADDR_A0_B = MIMTXRADDR_A0_B; // net ID: MIMTXRADDR lsb: 0  msb: 0 OUTPUT
			this->MIMTXREN_A0_B = MIMTXREN_A0_B; // net ID: MIMTXREN lsb: 0  msb: 0 OUTPUT
			this->MIMTXWADDR_A0_B = MIMTXWADDR_A0_B; // net ID: MIMTXWADDR lsb: 0  msb: 0 OUTPUT
			this->MIMTXWDATA_A0_B = MIMTXWDATA_A0_B; // net ID: MIMTXWDATA lsb: 0  msb: 0 OUTPUT
			this->MIMTXWEN_A0_B = MIMTXWEN_A0_B; // net ID: MIMTXWEN lsb: 0  msb: 0 OUTPUT
			this->PIPERX0POLARITY_A0_B = PIPERX0POLARITY_A0_B; // net ID: PIPERX0POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX1POLARITY_A0_B = PIPERX1POLARITY_A0_B; // net ID: PIPERX1POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX2POLARITY_A0_B = PIPERX2POLARITY_A0_B; // net ID: PIPERX2POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX3POLARITY_A0_B = PIPERX3POLARITY_A0_B; // net ID: PIPERX3POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX4POLARITY_A0_B = PIPERX4POLARITY_A0_B; // net ID: PIPERX4POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX5POLARITY_A0_B = PIPERX5POLARITY_A0_B; // net ID: PIPERX5POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX6POLARITY_A0_B = PIPERX6POLARITY_A0_B; // net ID: PIPERX6POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX7POLARITY_A0_B = PIPERX7POLARITY_A0_B; // net ID: PIPERX7POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPETX0CHARISK_A0_B = PIPETX0CHARISK_A0_B; // net ID: PIPETX0CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX0COMPLIANCE_A0_B = PIPETX0COMPLIANCE_A0_B; // net ID: PIPETX0COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX0DATA_A0_B = PIPETX0DATA_A0_B; // net ID: PIPETX0DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX0ELECIDLE_A0_B = PIPETX0ELECIDLE_A0_B; // net ID: PIPETX0ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX0POWERDOWN_A0_B = PIPETX0POWERDOWN_A0_B; // net ID: PIPETX0POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX1CHARISK_A0_B = PIPETX1CHARISK_A0_B; // net ID: PIPETX1CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX1COMPLIANCE_A0_B = PIPETX1COMPLIANCE_A0_B; // net ID: PIPETX1COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX1DATA_A0_B = PIPETX1DATA_A0_B; // net ID: PIPETX1DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX1ELECIDLE_A0_B = PIPETX1ELECIDLE_A0_B; // net ID: PIPETX1ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX1POWERDOWN_A0_B = PIPETX1POWERDOWN_A0_B; // net ID: PIPETX1POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX2CHARISK_A0_B = PIPETX2CHARISK_A0_B; // net ID: PIPETX2CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX2COMPLIANCE_A0_B = PIPETX2COMPLIANCE_A0_B; // net ID: PIPETX2COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX2DATA_A0_B = PIPETX2DATA_A0_B; // net ID: PIPETX2DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX2ELECIDLE_A0_B = PIPETX2ELECIDLE_A0_B; // net ID: PIPETX2ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX2POWERDOWN_A0_B = PIPETX2POWERDOWN_A0_B; // net ID: PIPETX2POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX3CHARISK_A0_B = PIPETX3CHARISK_A0_B; // net ID: PIPETX3CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX3COMPLIANCE_A0_B = PIPETX3COMPLIANCE_A0_B; // net ID: PIPETX3COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX3DATA_A0_B = PIPETX3DATA_A0_B; // net ID: PIPETX3DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX3ELECIDLE_A0_B = PIPETX3ELECIDLE_A0_B; // net ID: PIPETX3ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX3POWERDOWN_A0_B = PIPETX3POWERDOWN_A0_B; // net ID: PIPETX3POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX4CHARISK_A0_B = PIPETX4CHARISK_A0_B; // net ID: PIPETX4CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX4COMPLIANCE_A0_B = PIPETX4COMPLIANCE_A0_B; // net ID: PIPETX4COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX4DATA_A0_B = PIPETX4DATA_A0_B; // net ID: PIPETX4DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX4ELECIDLE_A0_B = PIPETX4ELECIDLE_A0_B; // net ID: PIPETX4ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX4POWERDOWN_A0_B = PIPETX4POWERDOWN_A0_B; // net ID: PIPETX4POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX5CHARISK_A0_B = PIPETX5CHARISK_A0_B; // net ID: PIPETX5CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX5COMPLIANCE_A0_B = PIPETX5COMPLIANCE_A0_B; // net ID: PIPETX5COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX5DATA_A0_B = PIPETX5DATA_A0_B; // net ID: PIPETX5DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX5ELECIDLE_A0_B = PIPETX5ELECIDLE_A0_B; // net ID: PIPETX5ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX5POWERDOWN_A0_B = PIPETX5POWERDOWN_A0_B; // net ID: PIPETX5POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX6CHARISK_A0_B = PIPETX6CHARISK_A0_B; // net ID: PIPETX6CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX6COMPLIANCE_A0_B = PIPETX6COMPLIANCE_A0_B; // net ID: PIPETX6COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX6DATA_A0_B = PIPETX6DATA_A0_B; // net ID: PIPETX6DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX6ELECIDLE_A0_B = PIPETX6ELECIDLE_A0_B; // net ID: PIPETX6ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX6POWERDOWN_A0_B = PIPETX6POWERDOWN_A0_B; // net ID: PIPETX6POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX7CHARISK_A0_B = PIPETX7CHARISK_A0_B; // net ID: PIPETX7CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX7COMPLIANCE_A0_B = PIPETX7COMPLIANCE_A0_B; // net ID: PIPETX7COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX7DATA_A0_B = PIPETX7DATA_A0_B; // net ID: PIPETX7DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX7ELECIDLE_A0_B = PIPETX7ELECIDLE_A0_B; // net ID: PIPETX7ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX7POWERDOWN_A0_B = PIPETX7POWERDOWN_A0_B; // net ID: PIPETX7POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETXDEEMPH_A0_B = PIPETXDEEMPH_A0_B; // net ID: PIPETXDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETXMARGIN_A0_B = PIPETXMARGIN_A0_B; // net ID: PIPETXMARGIN lsb: 0  msb: 0 OUTPUT
			this->PIPETXRATE_A0_B = PIPETXRATE_A0_B; // net ID: PIPETXRATE lsb: 0  msb: 0 OUTPUT
			this->PIPETXRCVRDET_A0_B = PIPETXRCVRDET_A0_B; // net ID: PIPETXRCVRDET lsb: 0  msb: 0 OUTPUT
			this->PIPETXRESET_A0_B = PIPETXRESET_A0_B; // net ID: PIPETXRESET lsb: 0  msb: 0 OUTPUT
			this->PL2L0REQ_A0_B = PL2L0REQ_A0_B; // net ID: PL2L0REQ lsb: 0  msb: 0 OUTPUT
			this->PL2LINKUP_A0_B = PL2LINKUP_A0_B; // net ID: PL2LINKUP lsb: 0  msb: 0 OUTPUT
			this->PL2RECEIVERERR_A0_B = PL2RECEIVERERR_A0_B; // net ID: PL2RECEIVERERR lsb: 0  msb: 0 OUTPUT
			this->PL2RECOVERY_A0_B = PL2RECOVERY_A0_B; // net ID: PL2RECOVERY lsb: 0  msb: 0 OUTPUT
			this->PL2RXELECIDLE_A0_B = PL2RXELECIDLE_A0_B; // net ID: PL2RXELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PL2RXPMSTATE_A0_B = PL2RXPMSTATE_A0_B; // net ID: PL2RXPMSTATE lsb: 0  msb: 0 OUTPUT
			this->PL2SUSPENDOK_A0_B = PL2SUSPENDOK_A0_B; // net ID: PL2SUSPENDOK lsb: 0  msb: 0 OUTPUT
			this->PLDBGVEC_A0_B = PLDBGVEC_A0_B; // net ID: PLDBGVEC lsb: 0  msb: 0 OUTPUT
			this->PLDIRECTEDCHANGEDONE_A0_B = PLDIRECTEDCHANGEDONE_A0_B; // net ID: PLDIRECTEDCHANGEDONE lsb: 0  msb: 0 OUTPUT
			this->PLINITIALLINKWIDTH_A0_B = PLINITIALLINKWIDTH_A0_B; // net ID: PLINITIALLINKWIDTH lsb: 0  msb: 0 OUTPUT
			this->PLLANEREVERSALMODE_A0_B = PLLANEREVERSALMODE_A0_B; // net ID: PLLANEREVERSALMODE lsb: 0  msb: 0 OUTPUT
			this->PLLINKGEN2CAP_A0_B = PLLINKGEN2CAP_A0_B; // net ID: PLLINKGEN2CAP lsb: 0  msb: 0 OUTPUT
			this->PLLINKPARTNERGEN2SUPPORTED_A0_B = PLLINKPARTNERGEN2SUPPORTED_A0_B; // net ID: PLLINKPARTNERGEN2SUPPORTED lsb: 0  msb: 0 OUTPUT
			this->PLLINKUPCFGCAP_A0_B = PLLINKUPCFGCAP_A0_B; // net ID: PLLINKUPCFGCAP lsb: 0  msb: 0 OUTPUT
			this->PLLTSSMSTATE_A0_B = PLLTSSMSTATE_A0_B; // net ID: PLLTSSMSTATE lsb: 0  msb: 0 OUTPUT
			this->PLPHYLNKUPN_A0_B = PLPHYLNKUPN_A0_B; // net ID: PLPHYLNKUPN lsb: 0  msb: 0 OUTPUT
			this->PLRECEIVEDHOTRST_A0_B = PLRECEIVEDHOTRST_A0_B; // net ID: PLRECEIVEDHOTRST lsb: 0  msb: 0 OUTPUT
			this->PLRXPMSTATE_A0_B = PLRXPMSTATE_A0_B; // net ID: PLRXPMSTATE lsb: 0  msb: 0 OUTPUT
			this->PLSELLNKRATE_A0_B = PLSELLNKRATE_A0_B; // net ID: PLSELLNKRATE lsb: 0  msb: 0 OUTPUT
			this->PLSELLNKWIDTH_A0_B = PLSELLNKWIDTH_A0_B; // net ID: PLSELLNKWIDTH lsb: 0  msb: 0 OUTPUT
			this->PLTXPMSTATE_A0_B = PLTXPMSTATE_A0_B; // net ID: PLTXPMSTATE lsb: 0  msb: 0 OUTPUT
			this->RECEIVEDFUNCLVLRSTN_A0_B = RECEIVEDFUNCLVLRSTN_A0_B; // net ID: RECEIVEDFUNCLVLRSTN lsb: 0  msb: 0 OUTPUT
			this->TL2ASPMSUSPENDCREDITCHECKOK_A0_B = TL2ASPMSUSPENDCREDITCHECKOK_A0_B; // net ID: TL2ASPMSUSPENDCREDITCHECKOK lsb: 0  msb: 0 OUTPUT
			this->TL2ASPMSUSPENDREQ_A0_B = TL2ASPMSUSPENDREQ_A0_B; // net ID: TL2ASPMSUSPENDREQ lsb: 0  msb: 0 OUTPUT
			this->TL2ERRFCPE_A0_B = TL2ERRFCPE_A0_B; // net ID: TL2ERRFCPE lsb: 0  msb: 0 OUTPUT
			this->TL2ERRHDR_A0_B = TL2ERRHDR_A0_B; // net ID: TL2ERRHDR lsb: 0  msb: 0 OUTPUT
			this->TL2ERRMALFORMED_A0_B = TL2ERRMALFORMED_A0_B; // net ID: TL2ERRMALFORMED lsb: 0  msb: 0 OUTPUT
			this->TL2ERRRXOVERFLOW_A0_B = TL2ERRRXOVERFLOW_A0_B; // net ID: TL2ERRRXOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->TL2PPMSUSPENDOK_A0_B = TL2PPMSUSPENDOK_A0_B; // net ID: TL2PPMSUSPENDOK lsb: 0  msb: 0 OUTPUT
			this->TRNFCCPLD_A0_B = TRNFCCPLD_A0_B; // net ID: TRNFCCPLD lsb: 0  msb: 0 OUTPUT
			this->TRNFCCPLH_A0_B = TRNFCCPLH_A0_B; // net ID: TRNFCCPLH lsb: 0  msb: 0 OUTPUT
			this->TRNFCNPD_A0_B = TRNFCNPD_A0_B; // net ID: TRNFCNPD lsb: 0  msb: 0 OUTPUT
			this->TRNFCNPH_A0_B = TRNFCNPH_A0_B; // net ID: TRNFCNPH lsb: 0  msb: 0 OUTPUT
			this->TRNFCPD_A0_B = TRNFCPD_A0_B; // net ID: TRNFCPD lsb: 0  msb: 0 OUTPUT
			this->TRNFCPH_A0_B = TRNFCPH_A0_B; // net ID: TRNFCPH lsb: 0  msb: 0 OUTPUT
			this->TRNLNKUP_A0_B = TRNLNKUP_A0_B; // net ID: TRNLNKUP lsb: 0  msb: 0 OUTPUT
			this->TRNRBARHIT_A0_B = TRNRBARHIT_A0_B; // net ID: TRNRBARHIT lsb: 0  msb: 0 OUTPUT
			this->TRNRD_A0_B = TRNRD_A0_B; // net ID: TRNRD lsb: 0  msb: 0 OUTPUT
			this->TRNRDLLPDATA_A0_B = TRNRDLLPDATA_A0_B; // net ID: TRNRDLLPDATA lsb: 0  msb: 0 OUTPUT
			this->TRNRDLLPSRCRDY_A0_B = TRNRDLLPSRCRDY_A0_B; // net ID: TRNRDLLPSRCRDY lsb: 0  msb: 0 OUTPUT
			this->TRNRECRCERR_A0_B = TRNRECRCERR_A0_B; // net ID: TRNRECRCERR lsb: 0  msb: 0 OUTPUT
			this->TRNREOF_A0_B = TRNREOF_A0_B; // net ID: TRNREOF lsb: 0  msb: 0 OUTPUT
			this->TRNRERRFWD_A0_B = TRNRERRFWD_A0_B; // net ID: TRNRERRFWD lsb: 0  msb: 0 OUTPUT
			this->TRNRREM_A0_B = TRNRREM_A0_B; // net ID: TRNRREM lsb: 0  msb: 0 OUTPUT
			this->TRNRSOF_A0_B = TRNRSOF_A0_B; // net ID: TRNRSOF lsb: 0  msb: 0 OUTPUT
			this->TRNRSRCDSC_A0_B = TRNRSRCDSC_A0_B; // net ID: TRNRSRCDSC lsb: 0  msb: 0 OUTPUT
			this->TRNRSRCRDY_A0_B = TRNRSRCRDY_A0_B; // net ID: TRNRSRCRDY lsb: 0  msb: 0 OUTPUT
			this->TRNTBUFAV_A0_B = TRNTBUFAV_A0_B; // net ID: TRNTBUFAV lsb: 0  msb: 0 OUTPUT
			this->TRNTCFGREQ_A0_B = TRNTCFGREQ_A0_B; // net ID: TRNTCFGREQ lsb: 0  msb: 0 OUTPUT
			this->TRNTDLLPDSTRDY_A0_B = TRNTDLLPDSTRDY_A0_B; // net ID: TRNTDLLPDSTRDY lsb: 0  msb: 0 OUTPUT
			this->TRNTDSTRDY_A0_B = TRNTDSTRDY_A0_B; // net ID: TRNTDSTRDY lsb: 0  msb: 0 OUTPUT
			this->TRNTERRDROP_A0_B = TRNTERRDROP_A0_B; // net ID: TRNTERRDROP lsb: 0  msb: 0 OUTPUT
			this->USERRSTN_A0_B = USERRSTN_A0_B; // net ID: USERRSTN lsb: 0  msb: 0 OUTPUT
			this->CFGAERINTERRUPTMSGNUM_A0_B = CFGAERINTERRUPTMSGNUM_A0_B; // net ID: CFGAERINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			this->CFGAERINTERRUPTMSGNUM_A1_B = CFGAERINTERRUPTMSGNUM_A1_B; // net ID: CFGAERINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			this->CFGAERINTERRUPTMSGNUM_A2_B = CFGAERINTERRUPTMSGNUM_A2_B; // net ID: CFGAERINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			this->CFGAERINTERRUPTMSGNUM_A3_B = CFGAERINTERRUPTMSGNUM_A3_B; // net ID: CFGAERINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			this->CFGAERINTERRUPTMSGNUM_A4_B = CFGAERINTERRUPTMSGNUM_A4_B; // net ID: CFGAERINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			this->CFGDEVID_A0_B = CFGDEVID_A0_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A1_B = CFGDEVID_A1_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A2_B = CFGDEVID_A2_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A3_B = CFGDEVID_A3_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A4_B = CFGDEVID_A4_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A5_B = CFGDEVID_A5_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A6_B = CFGDEVID_A6_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A7_B = CFGDEVID_A7_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A8_B = CFGDEVID_A8_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A9_B = CFGDEVID_A9_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A10_B = CFGDEVID_A10_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A11_B = CFGDEVID_A11_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A12_B = CFGDEVID_A12_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A13_B = CFGDEVID_A13_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A14_B = CFGDEVID_A14_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDEVID_A15_B = CFGDEVID_A15_B; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDSBUSNUMBER_A0_B = CFGDSBUSNUMBER_A0_B; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			this->CFGDSBUSNUMBER_A1_B = CFGDSBUSNUMBER_A1_B; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			this->CFGDSBUSNUMBER_A2_B = CFGDSBUSNUMBER_A2_B; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			this->CFGDSBUSNUMBER_A3_B = CFGDSBUSNUMBER_A3_B; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			this->CFGDSBUSNUMBER_A4_B = CFGDSBUSNUMBER_A4_B; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			this->CFGDSBUSNUMBER_A5_B = CFGDSBUSNUMBER_A5_B; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			this->CFGDSBUSNUMBER_A6_B = CFGDSBUSNUMBER_A6_B; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			this->CFGDSBUSNUMBER_A7_B = CFGDSBUSNUMBER_A7_B; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			this->CFGDSDEVICENUMBER_A0_B = CFGDSDEVICENUMBER_A0_B; // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
			this->CFGDSDEVICENUMBER_A1_B = CFGDSDEVICENUMBER_A1_B; // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
			this->CFGDSDEVICENUMBER_A2_B = CFGDSDEVICENUMBER_A2_B; // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
			this->CFGDSDEVICENUMBER_A3_B = CFGDSDEVICENUMBER_A3_B; // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
			this->CFGDSDEVICENUMBER_A4_B = CFGDSDEVICENUMBER_A4_B; // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
			this->CFGDSFUNCTIONNUMBER_A0_B = CFGDSFUNCTIONNUMBER_A0_B; // net ID: CFGDSFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			this->CFGDSFUNCTIONNUMBER_A1_B = CFGDSFUNCTIONNUMBER_A1_B; // net ID: CFGDSFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			this->CFGDSFUNCTIONNUMBER_A2_B = CFGDSFUNCTIONNUMBER_A2_B; // net ID: CFGDSFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			this->CFGDSN_A0_B = CFGDSN_A0_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A1_B = CFGDSN_A1_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A2_B = CFGDSN_A2_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A3_B = CFGDSN_A3_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A4_B = CFGDSN_A4_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A5_B = CFGDSN_A5_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A6_B = CFGDSN_A6_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A7_B = CFGDSN_A7_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A8_B = CFGDSN_A8_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A9_B = CFGDSN_A9_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A10_B = CFGDSN_A10_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A11_B = CFGDSN_A11_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A12_B = CFGDSN_A12_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A13_B = CFGDSN_A13_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A14_B = CFGDSN_A14_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A15_B = CFGDSN_A15_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A16_B = CFGDSN_A16_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A17_B = CFGDSN_A17_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A18_B = CFGDSN_A18_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A19_B = CFGDSN_A19_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A20_B = CFGDSN_A20_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A21_B = CFGDSN_A21_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A22_B = CFGDSN_A22_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A23_B = CFGDSN_A23_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A24_B = CFGDSN_A24_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A25_B = CFGDSN_A25_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A26_B = CFGDSN_A26_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A27_B = CFGDSN_A27_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A28_B = CFGDSN_A28_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A29_B = CFGDSN_A29_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A30_B = CFGDSN_A30_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A31_B = CFGDSN_A31_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A32_B = CFGDSN_A32_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A33_B = CFGDSN_A33_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A34_B = CFGDSN_A34_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A35_B = CFGDSN_A35_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A36_B = CFGDSN_A36_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A37_B = CFGDSN_A37_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A38_B = CFGDSN_A38_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A39_B = CFGDSN_A39_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A40_B = CFGDSN_A40_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A41_B = CFGDSN_A41_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A42_B = CFGDSN_A42_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A43_B = CFGDSN_A43_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A44_B = CFGDSN_A44_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A45_B = CFGDSN_A45_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A46_B = CFGDSN_A46_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A47_B = CFGDSN_A47_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A48_B = CFGDSN_A48_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A49_B = CFGDSN_A49_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A50_B = CFGDSN_A50_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A51_B = CFGDSN_A51_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A52_B = CFGDSN_A52_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A53_B = CFGDSN_A53_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A54_B = CFGDSN_A54_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A55_B = CFGDSN_A55_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A56_B = CFGDSN_A56_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A57_B = CFGDSN_A57_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A58_B = CFGDSN_A58_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A59_B = CFGDSN_A59_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A60_B = CFGDSN_A60_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A61_B = CFGDSN_A61_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A62_B = CFGDSN_A62_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGDSN_A63_B = CFGDSN_A63_B; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGERRACSN_A0_B = CFGERRACSN_A0_B; // net ID: CFGERRACSN lsb: 0  msb: 0 INPUT
			this->CFGERRAERHEADERLOG_A0_B = CFGERRAERHEADERLOG_A0_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A1_B = CFGERRAERHEADERLOG_A1_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A2_B = CFGERRAERHEADERLOG_A2_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A3_B = CFGERRAERHEADERLOG_A3_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A4_B = CFGERRAERHEADERLOG_A4_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A5_B = CFGERRAERHEADERLOG_A5_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A6_B = CFGERRAERHEADERLOG_A6_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A7_B = CFGERRAERHEADERLOG_A7_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A8_B = CFGERRAERHEADERLOG_A8_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A9_B = CFGERRAERHEADERLOG_A9_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A10_B = CFGERRAERHEADERLOG_A10_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A11_B = CFGERRAERHEADERLOG_A11_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A12_B = CFGERRAERHEADERLOG_A12_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A13_B = CFGERRAERHEADERLOG_A13_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A14_B = CFGERRAERHEADERLOG_A14_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A15_B = CFGERRAERHEADERLOG_A15_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A16_B = CFGERRAERHEADERLOG_A16_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A17_B = CFGERRAERHEADERLOG_A17_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A18_B = CFGERRAERHEADERLOG_A18_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A19_B = CFGERRAERHEADERLOG_A19_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A20_B = CFGERRAERHEADERLOG_A20_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A21_B = CFGERRAERHEADERLOG_A21_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A22_B = CFGERRAERHEADERLOG_A22_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A23_B = CFGERRAERHEADERLOG_A23_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A24_B = CFGERRAERHEADERLOG_A24_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A25_B = CFGERRAERHEADERLOG_A25_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A26_B = CFGERRAERHEADERLOG_A26_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A27_B = CFGERRAERHEADERLOG_A27_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A28_B = CFGERRAERHEADERLOG_A28_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A29_B = CFGERRAERHEADERLOG_A29_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A30_B = CFGERRAERHEADERLOG_A30_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A31_B = CFGERRAERHEADERLOG_A31_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A32_B = CFGERRAERHEADERLOG_A32_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A33_B = CFGERRAERHEADERLOG_A33_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A34_B = CFGERRAERHEADERLOG_A34_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A35_B = CFGERRAERHEADERLOG_A35_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A36_B = CFGERRAERHEADERLOG_A36_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A37_B = CFGERRAERHEADERLOG_A37_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A38_B = CFGERRAERHEADERLOG_A38_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A39_B = CFGERRAERHEADERLOG_A39_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A40_B = CFGERRAERHEADERLOG_A40_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A41_B = CFGERRAERHEADERLOG_A41_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A42_B = CFGERRAERHEADERLOG_A42_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A43_B = CFGERRAERHEADERLOG_A43_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A44_B = CFGERRAERHEADERLOG_A44_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A45_B = CFGERRAERHEADERLOG_A45_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A46_B = CFGERRAERHEADERLOG_A46_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A47_B = CFGERRAERHEADERLOG_A47_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A48_B = CFGERRAERHEADERLOG_A48_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A49_B = CFGERRAERHEADERLOG_A49_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A50_B = CFGERRAERHEADERLOG_A50_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A51_B = CFGERRAERHEADERLOG_A51_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A52_B = CFGERRAERHEADERLOG_A52_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A53_B = CFGERRAERHEADERLOG_A53_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A54_B = CFGERRAERHEADERLOG_A54_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A55_B = CFGERRAERHEADERLOG_A55_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A56_B = CFGERRAERHEADERLOG_A56_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A57_B = CFGERRAERHEADERLOG_A57_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A58_B = CFGERRAERHEADERLOG_A58_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A59_B = CFGERRAERHEADERLOG_A59_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A60_B = CFGERRAERHEADERLOG_A60_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A61_B = CFGERRAERHEADERLOG_A61_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A62_B = CFGERRAERHEADERLOG_A62_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A63_B = CFGERRAERHEADERLOG_A63_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A64_B = CFGERRAERHEADERLOG_A64_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A65_B = CFGERRAERHEADERLOG_A65_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A66_B = CFGERRAERHEADERLOG_A66_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A67_B = CFGERRAERHEADERLOG_A67_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A68_B = CFGERRAERHEADERLOG_A68_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A69_B = CFGERRAERHEADERLOG_A69_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A70_B = CFGERRAERHEADERLOG_A70_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A71_B = CFGERRAERHEADERLOG_A71_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A72_B = CFGERRAERHEADERLOG_A72_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A73_B = CFGERRAERHEADERLOG_A73_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A74_B = CFGERRAERHEADERLOG_A74_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A75_B = CFGERRAERHEADERLOG_A75_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A76_B = CFGERRAERHEADERLOG_A76_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A77_B = CFGERRAERHEADERLOG_A77_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A78_B = CFGERRAERHEADERLOG_A78_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A79_B = CFGERRAERHEADERLOG_A79_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A80_B = CFGERRAERHEADERLOG_A80_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A81_B = CFGERRAERHEADERLOG_A81_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A82_B = CFGERRAERHEADERLOG_A82_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A83_B = CFGERRAERHEADERLOG_A83_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A84_B = CFGERRAERHEADERLOG_A84_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A85_B = CFGERRAERHEADERLOG_A85_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A86_B = CFGERRAERHEADERLOG_A86_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A87_B = CFGERRAERHEADERLOG_A87_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A88_B = CFGERRAERHEADERLOG_A88_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A89_B = CFGERRAERHEADERLOG_A89_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A90_B = CFGERRAERHEADERLOG_A90_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A91_B = CFGERRAERHEADERLOG_A91_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A92_B = CFGERRAERHEADERLOG_A92_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A93_B = CFGERRAERHEADERLOG_A93_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A94_B = CFGERRAERHEADERLOG_A94_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A95_B = CFGERRAERHEADERLOG_A95_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A96_B = CFGERRAERHEADERLOG_A96_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A97_B = CFGERRAERHEADERLOG_A97_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A98_B = CFGERRAERHEADERLOG_A98_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A99_B = CFGERRAERHEADERLOG_A99_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A100_B = CFGERRAERHEADERLOG_A100_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A101_B = CFGERRAERHEADERLOG_A101_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A102_B = CFGERRAERHEADERLOG_A102_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A103_B = CFGERRAERHEADERLOG_A103_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A104_B = CFGERRAERHEADERLOG_A104_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A105_B = CFGERRAERHEADERLOG_A105_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A106_B = CFGERRAERHEADERLOG_A106_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A107_B = CFGERRAERHEADERLOG_A107_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A108_B = CFGERRAERHEADERLOG_A108_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A109_B = CFGERRAERHEADERLOG_A109_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A110_B = CFGERRAERHEADERLOG_A110_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A111_B = CFGERRAERHEADERLOG_A111_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A112_B = CFGERRAERHEADERLOG_A112_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A113_B = CFGERRAERHEADERLOG_A113_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A114_B = CFGERRAERHEADERLOG_A114_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A115_B = CFGERRAERHEADERLOG_A115_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A116_B = CFGERRAERHEADERLOG_A116_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A117_B = CFGERRAERHEADERLOG_A117_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A118_B = CFGERRAERHEADERLOG_A118_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A119_B = CFGERRAERHEADERLOG_A119_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A120_B = CFGERRAERHEADERLOG_A120_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A121_B = CFGERRAERHEADERLOG_A121_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A122_B = CFGERRAERHEADERLOG_A122_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A123_B = CFGERRAERHEADERLOG_A123_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A124_B = CFGERRAERHEADERLOG_A124_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A125_B = CFGERRAERHEADERLOG_A125_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A126_B = CFGERRAERHEADERLOG_A126_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRAERHEADERLOG_A127_B = CFGERRAERHEADERLOG_A127_B; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRATOMICEGRESSBLOCKEDN_A0_B = CFGERRATOMICEGRESSBLOCKEDN_A0_B; // net ID: CFGERRATOMICEGRESSBLOCKEDN lsb: 0  msb: 0 INPUT
			this->CFGERRCORN_A0_B = CFGERRCORN_A0_B; // net ID: CFGERRCORN lsb: 0  msb: 0 INPUT
			this->CFGERRCPLABORTN_A0_B = CFGERRCPLABORTN_A0_B; // net ID: CFGERRCPLABORTN lsb: 0  msb: 0 INPUT
			this->CFGERRCPLTIMEOUTN_A0_B = CFGERRCPLTIMEOUTN_A0_B; // net ID: CFGERRCPLTIMEOUTN lsb: 0  msb: 0 INPUT
			this->CFGERRCPLUNEXPECTN_A0_B = CFGERRCPLUNEXPECTN_A0_B; // net ID: CFGERRCPLUNEXPECTN lsb: 0  msb: 0 INPUT
			this->CFGERRECRCN_A0_B = CFGERRECRCN_A0_B; // net ID: CFGERRECRCN lsb: 0  msb: 0 INPUT
			this->CFGERRINTERNALCORN_A0_B = CFGERRINTERNALCORN_A0_B; // net ID: CFGERRINTERNALCORN lsb: 0  msb: 0 INPUT
			this->CFGERRINTERNALUNCORN_A0_B = CFGERRINTERNALUNCORN_A0_B; // net ID: CFGERRINTERNALUNCORN lsb: 0  msb: 0 INPUT
			this->CFGERRLOCKEDN_A0_B = CFGERRLOCKEDN_A0_B; // net ID: CFGERRLOCKEDN lsb: 0  msb: 0 INPUT
			this->CFGERRMALFORMEDN_A0_B = CFGERRMALFORMEDN_A0_B; // net ID: CFGERRMALFORMEDN lsb: 0  msb: 0 INPUT
			this->CFGERRMCBLOCKEDN_A0_B = CFGERRMCBLOCKEDN_A0_B; // net ID: CFGERRMCBLOCKEDN lsb: 0  msb: 0 INPUT
			this->CFGERRNORECOVERYN_A0_B = CFGERRNORECOVERYN_A0_B; // net ID: CFGERRNORECOVERYN lsb: 0  msb: 0 INPUT
			this->CFGERRPOISONEDN_A0_B = CFGERRPOISONEDN_A0_B; // net ID: CFGERRPOISONEDN lsb: 0  msb: 0 INPUT
			this->CFGERRPOSTEDN_A0_B = CFGERRPOSTEDN_A0_B; // net ID: CFGERRPOSTEDN lsb: 0  msb: 0 INPUT
			this->CFGERRTLPCPLHEADER_A0_B = CFGERRTLPCPLHEADER_A0_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A1_B = CFGERRTLPCPLHEADER_A1_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A2_B = CFGERRTLPCPLHEADER_A2_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A3_B = CFGERRTLPCPLHEADER_A3_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A4_B = CFGERRTLPCPLHEADER_A4_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A5_B = CFGERRTLPCPLHEADER_A5_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A6_B = CFGERRTLPCPLHEADER_A6_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A7_B = CFGERRTLPCPLHEADER_A7_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A8_B = CFGERRTLPCPLHEADER_A8_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A9_B = CFGERRTLPCPLHEADER_A9_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A10_B = CFGERRTLPCPLHEADER_A10_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A11_B = CFGERRTLPCPLHEADER_A11_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A12_B = CFGERRTLPCPLHEADER_A12_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A13_B = CFGERRTLPCPLHEADER_A13_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A14_B = CFGERRTLPCPLHEADER_A14_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A15_B = CFGERRTLPCPLHEADER_A15_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A16_B = CFGERRTLPCPLHEADER_A16_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A17_B = CFGERRTLPCPLHEADER_A17_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A18_B = CFGERRTLPCPLHEADER_A18_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A19_B = CFGERRTLPCPLHEADER_A19_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A20_B = CFGERRTLPCPLHEADER_A20_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A21_B = CFGERRTLPCPLHEADER_A21_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A22_B = CFGERRTLPCPLHEADER_A22_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A23_B = CFGERRTLPCPLHEADER_A23_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A24_B = CFGERRTLPCPLHEADER_A24_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A25_B = CFGERRTLPCPLHEADER_A25_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A26_B = CFGERRTLPCPLHEADER_A26_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A27_B = CFGERRTLPCPLHEADER_A27_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A28_B = CFGERRTLPCPLHEADER_A28_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A29_B = CFGERRTLPCPLHEADER_A29_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A30_B = CFGERRTLPCPLHEADER_A30_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A31_B = CFGERRTLPCPLHEADER_A31_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A32_B = CFGERRTLPCPLHEADER_A32_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A33_B = CFGERRTLPCPLHEADER_A33_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A34_B = CFGERRTLPCPLHEADER_A34_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A35_B = CFGERRTLPCPLHEADER_A35_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A36_B = CFGERRTLPCPLHEADER_A36_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A37_B = CFGERRTLPCPLHEADER_A37_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A38_B = CFGERRTLPCPLHEADER_A38_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A39_B = CFGERRTLPCPLHEADER_A39_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A40_B = CFGERRTLPCPLHEADER_A40_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A41_B = CFGERRTLPCPLHEADER_A41_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A42_B = CFGERRTLPCPLHEADER_A42_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A43_B = CFGERRTLPCPLHEADER_A43_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A44_B = CFGERRTLPCPLHEADER_A44_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A45_B = CFGERRTLPCPLHEADER_A45_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A46_B = CFGERRTLPCPLHEADER_A46_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRTLPCPLHEADER_A47_B = CFGERRTLPCPLHEADER_A47_B; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRURN_A0_B = CFGERRURN_A0_B; // net ID: CFGERRURN lsb: 0  msb: 0 INPUT
			this->CFGFORCECOMMONCLOCKOFF_A0_B = CFGFORCECOMMONCLOCKOFF_A0_B; // net ID: CFGFORCECOMMONCLOCKOFF lsb: 0  msb: 0 INPUT
			this->CFGFORCEEXTENDEDSYNCON_A0_B = CFGFORCEEXTENDEDSYNCON_A0_B; // net ID: CFGFORCEEXTENDEDSYNCON lsb: 0  msb: 0 INPUT
			this->CFGFORCEMPS_A0_B = CFGFORCEMPS_A0_B; // net ID: CFGFORCEMPS lsb: 0  msb: 2 INPUT
			this->CFGFORCEMPS_A1_B = CFGFORCEMPS_A1_B; // net ID: CFGFORCEMPS lsb: 0  msb: 2 INPUT
			this->CFGFORCEMPS_A2_B = CFGFORCEMPS_A2_B; // net ID: CFGFORCEMPS lsb: 0  msb: 2 INPUT
			this->CFGINTERRUPTASSERTN_A0_B = CFGINTERRUPTASSERTN_A0_B; // net ID: CFGINTERRUPTASSERTN lsb: 0  msb: 0 INPUT
			this->CFGINTERRUPTDI_A0_B = CFGINTERRUPTDI_A0_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			this->CFGINTERRUPTDI_A1_B = CFGINTERRUPTDI_A1_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			this->CFGINTERRUPTDI_A2_B = CFGINTERRUPTDI_A2_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			this->CFGINTERRUPTDI_A3_B = CFGINTERRUPTDI_A3_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			this->CFGINTERRUPTDI_A4_B = CFGINTERRUPTDI_A4_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			this->CFGINTERRUPTDI_A5_B = CFGINTERRUPTDI_A5_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			this->CFGINTERRUPTDI_A6_B = CFGINTERRUPTDI_A6_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			this->CFGINTERRUPTDI_A7_B = CFGINTERRUPTDI_A7_B; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			this->CFGINTERRUPTN_A0_B = CFGINTERRUPTN_A0_B; // net ID: CFGINTERRUPTN lsb: 0  msb: 0 INPUT
			this->CFGINTERRUPTSTATN_A0_B = CFGINTERRUPTSTATN_A0_B; // net ID: CFGINTERRUPTSTATN lsb: 0  msb: 0 INPUT
			this->CFGMGMTBYTEENN_A0_B = CFGMGMTBYTEENN_A0_B; // net ID: CFGMGMTBYTEENN lsb: 0  msb: 3 INPUT
			this->CFGMGMTBYTEENN_A1_B = CFGMGMTBYTEENN_A1_B; // net ID: CFGMGMTBYTEENN lsb: 0  msb: 3 INPUT
			this->CFGMGMTBYTEENN_A2_B = CFGMGMTBYTEENN_A2_B; // net ID: CFGMGMTBYTEENN lsb: 0  msb: 3 INPUT
			this->CFGMGMTBYTEENN_A3_B = CFGMGMTBYTEENN_A3_B; // net ID: CFGMGMTBYTEENN lsb: 0  msb: 3 INPUT
			this->CFGMGMTDI_A0_B = CFGMGMTDI_A0_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A1_B = CFGMGMTDI_A1_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A2_B = CFGMGMTDI_A2_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A3_B = CFGMGMTDI_A3_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A4_B = CFGMGMTDI_A4_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A5_B = CFGMGMTDI_A5_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A6_B = CFGMGMTDI_A6_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A7_B = CFGMGMTDI_A7_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A8_B = CFGMGMTDI_A8_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A9_B = CFGMGMTDI_A9_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A10_B = CFGMGMTDI_A10_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A11_B = CFGMGMTDI_A11_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A12_B = CFGMGMTDI_A12_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A13_B = CFGMGMTDI_A13_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A14_B = CFGMGMTDI_A14_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A15_B = CFGMGMTDI_A15_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A16_B = CFGMGMTDI_A16_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A17_B = CFGMGMTDI_A17_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A18_B = CFGMGMTDI_A18_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A19_B = CFGMGMTDI_A19_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A20_B = CFGMGMTDI_A20_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A21_B = CFGMGMTDI_A21_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A22_B = CFGMGMTDI_A22_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A23_B = CFGMGMTDI_A23_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A24_B = CFGMGMTDI_A24_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A25_B = CFGMGMTDI_A25_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A26_B = CFGMGMTDI_A26_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A27_B = CFGMGMTDI_A27_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A28_B = CFGMGMTDI_A28_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A29_B = CFGMGMTDI_A29_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A30_B = CFGMGMTDI_A30_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDI_A31_B = CFGMGMTDI_A31_B; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDWADDR_A0_B = CFGMGMTDWADDR_A0_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			this->CFGMGMTDWADDR_A1_B = CFGMGMTDWADDR_A1_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			this->CFGMGMTDWADDR_A2_B = CFGMGMTDWADDR_A2_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			this->CFGMGMTDWADDR_A3_B = CFGMGMTDWADDR_A3_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			this->CFGMGMTDWADDR_A4_B = CFGMGMTDWADDR_A4_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			this->CFGMGMTDWADDR_A5_B = CFGMGMTDWADDR_A5_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			this->CFGMGMTDWADDR_A6_B = CFGMGMTDWADDR_A6_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			this->CFGMGMTDWADDR_A7_B = CFGMGMTDWADDR_A7_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			this->CFGMGMTDWADDR_A8_B = CFGMGMTDWADDR_A8_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			this->CFGMGMTDWADDR_A9_B = CFGMGMTDWADDR_A9_B; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			this->CFGMGMTRDENN_A0_B = CFGMGMTRDENN_A0_B; // net ID: CFGMGMTRDENN lsb: 0  msb: 0 INPUT
			this->CFGMGMTWRENN_A0_B = CFGMGMTWRENN_A0_B; // net ID: CFGMGMTWRENN lsb: 0  msb: 0 INPUT
			this->CFGMGMTWRREADONLYN_A0_B = CFGMGMTWRREADONLYN_A0_B; // net ID: CFGMGMTWRREADONLYN lsb: 0  msb: 0 INPUT
			this->CFGMGMTWRRW1CASRWN_A0_B = CFGMGMTWRRW1CASRWN_A0_B; // net ID: CFGMGMTWRRW1CASRWN lsb: 0  msb: 0 INPUT
			this->CFGPCIECAPINTERRUPTMSGNUM_A0_B = CFGPCIECAPINTERRUPTMSGNUM_A0_B; // net ID: CFGPCIECAPINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			this->CFGPCIECAPINTERRUPTMSGNUM_A1_B = CFGPCIECAPINTERRUPTMSGNUM_A1_B; // net ID: CFGPCIECAPINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			this->CFGPCIECAPINTERRUPTMSGNUM_A2_B = CFGPCIECAPINTERRUPTMSGNUM_A2_B; // net ID: CFGPCIECAPINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			this->CFGPCIECAPINTERRUPTMSGNUM_A3_B = CFGPCIECAPINTERRUPTMSGNUM_A3_B; // net ID: CFGPCIECAPINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			this->CFGPCIECAPINTERRUPTMSGNUM_A4_B = CFGPCIECAPINTERRUPTMSGNUM_A4_B; // net ID: CFGPCIECAPINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			this->CFGPMFORCESTATE_A0_B = CFGPMFORCESTATE_A0_B; // net ID: CFGPMFORCESTATE lsb: 0  msb: 1 INPUT
			this->CFGPMFORCESTATE_A1_B = CFGPMFORCESTATE_A1_B; // net ID: CFGPMFORCESTATE lsb: 0  msb: 1 INPUT
			this->CFGPMFORCESTATEENN_A0_B = CFGPMFORCESTATEENN_A0_B; // net ID: CFGPMFORCESTATEENN lsb: 0  msb: 0 INPUT
			this->CFGPMHALTASPML0SN_A0_B = CFGPMHALTASPML0SN_A0_B; // net ID: CFGPMHALTASPML0SN lsb: 0  msb: 0 INPUT
			this->CFGPMHALTASPML1N_A0_B = CFGPMHALTASPML1N_A0_B; // net ID: CFGPMHALTASPML1N lsb: 0  msb: 0 INPUT
			this->CFGPMSENDPMETON_A0_B = CFGPMSENDPMETON_A0_B; // net ID: CFGPMSENDPMETON lsb: 0  msb: 0 INPUT
			this->CFGPMTURNOFFOKN_A0_B = CFGPMTURNOFFOKN_A0_B; // net ID: CFGPMTURNOFFOKN lsb: 0  msb: 0 INPUT
			this->CFGPMWAKEN_A0_B = CFGPMWAKEN_A0_B; // net ID: CFGPMWAKEN lsb: 0  msb: 0 INPUT
			this->CFGPORTNUMBER_A0_B = CFGPORTNUMBER_A0_B; // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
			this->CFGPORTNUMBER_A1_B = CFGPORTNUMBER_A1_B; // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
			this->CFGPORTNUMBER_A2_B = CFGPORTNUMBER_A2_B; // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
			this->CFGPORTNUMBER_A3_B = CFGPORTNUMBER_A3_B; // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
			this->CFGPORTNUMBER_A4_B = CFGPORTNUMBER_A4_B; // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
			this->CFGPORTNUMBER_A5_B = CFGPORTNUMBER_A5_B; // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
			this->CFGPORTNUMBER_A6_B = CFGPORTNUMBER_A6_B; // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
			this->CFGPORTNUMBER_A7_B = CFGPORTNUMBER_A7_B; // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
			this->CFGREVID_A0_B = CFGREVID_A0_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			this->CFGREVID_A1_B = CFGREVID_A1_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			this->CFGREVID_A2_B = CFGREVID_A2_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			this->CFGREVID_A3_B = CFGREVID_A3_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			this->CFGREVID_A4_B = CFGREVID_A4_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			this->CFGREVID_A5_B = CFGREVID_A5_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			this->CFGREVID_A6_B = CFGREVID_A6_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			this->CFGREVID_A7_B = CFGREVID_A7_B; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			this->CFGSUBSYSID_A0_B = CFGSUBSYSID_A0_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A1_B = CFGSUBSYSID_A1_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A2_B = CFGSUBSYSID_A2_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A3_B = CFGSUBSYSID_A3_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A4_B = CFGSUBSYSID_A4_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A5_B = CFGSUBSYSID_A5_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A6_B = CFGSUBSYSID_A6_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A7_B = CFGSUBSYSID_A7_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A8_B = CFGSUBSYSID_A8_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A9_B = CFGSUBSYSID_A9_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A10_B = CFGSUBSYSID_A10_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A11_B = CFGSUBSYSID_A11_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A12_B = CFGSUBSYSID_A12_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A13_B = CFGSUBSYSID_A13_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A14_B = CFGSUBSYSID_A14_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSID_A15_B = CFGSUBSYSID_A15_B; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENDID_A0_B = CFGSUBSYSVENDID_A0_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENDID_A1_B = CFGSUBSYSVENDID_A1_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENDID_A2_B = CFGSUBSYSVENDID_A2_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENDID_A3_B = CFGSUBSYSVENDID_A3_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENDID_A4_B = CFGSUBSYSVENDID_A4_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENDID_A5_B = CFGSUBSYSVENDID_A5_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENDID_A6_B = CFGSUBSYSVENDID_A6_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENDID_A7_B = CFGSUBSYSVENDID_A7_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENDID_A8_B = CFGSUBSYSVENDID_A8_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENDID_A9_B = CFGSUBSYSVENDID_A9_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENDID_A10_B = CFGSUBSYSVENDID_A10_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENDID_A11_B = CFGSUBSYSVENDID_A11_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENDID_A12_B = CFGSUBSYSVENDID_A12_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENDID_A13_B = CFGSUBSYSVENDID_A13_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENDID_A14_B = CFGSUBSYSVENDID_A14_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENDID_A15_B = CFGSUBSYSVENDID_A15_B; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			this->CFGTRNPENDINGN_A0_B = CFGTRNPENDINGN_A0_B; // net ID: CFGTRNPENDINGN lsb: 0  msb: 0 INPUT
			this->CFGVENDID_A0_B = CFGVENDID_A0_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			this->CFGVENDID_A1_B = CFGVENDID_A1_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			this->CFGVENDID_A2_B = CFGVENDID_A2_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			this->CFGVENDID_A3_B = CFGVENDID_A3_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			this->CFGVENDID_A4_B = CFGVENDID_A4_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			this->CFGVENDID_A5_B = CFGVENDID_A5_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			this->CFGVENDID_A6_B = CFGVENDID_A6_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			this->CFGVENDID_A7_B = CFGVENDID_A7_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			this->CFGVENDID_A8_B = CFGVENDID_A8_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			this->CFGVENDID_A9_B = CFGVENDID_A9_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			this->CFGVENDID_A10_B = CFGVENDID_A10_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			this->CFGVENDID_A11_B = CFGVENDID_A11_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			this->CFGVENDID_A12_B = CFGVENDID_A12_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			this->CFGVENDID_A13_B = CFGVENDID_A13_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			this->CFGVENDID_A14_B = CFGVENDID_A14_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			this->CFGVENDID_A15_B = CFGVENDID_A15_B; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			this->CMRSTN_A0_B = CMRSTN_A0_B; // net ID: CMRSTN lsb: 0  msb: 0 INPUT
			this->CMSTICKYRSTN_A0_B = CMSTICKYRSTN_A0_B; // net ID: CMSTICKYRSTN lsb: 0  msb: 0 INPUT
			this->DBGMODE_A0_B = DBGMODE_A0_B; // net ID: DBGMODE lsb: 0  msb: 1 INPUT
			this->DBGMODE_A1_B = DBGMODE_A1_B; // net ID: DBGMODE lsb: 0  msb: 1 INPUT
			this->DBGSUBMODE_A0_B = DBGSUBMODE_A0_B; // net ID: DBGSUBMODE lsb: 0  msb: 0 INPUT
			this->DLRSTN_A0_B = DLRSTN_A0_B; // net ID: DLRSTN lsb: 0  msb: 0 INPUT
			this->DRPADDR_A0_B = DRPADDR_A0_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPADDR_A1_B = DRPADDR_A1_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPADDR_A2_B = DRPADDR_A2_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPADDR_A3_B = DRPADDR_A3_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPADDR_A4_B = DRPADDR_A4_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPADDR_A5_B = DRPADDR_A5_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPADDR_A6_B = DRPADDR_A6_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPADDR_A7_B = DRPADDR_A7_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPADDR_A8_B = DRPADDR_A8_B; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPCLK_A0_B = DRPCLK_A0_B; // net ID: DRPCLK lsb: 0  msb: 0 INPUT
			this->DRPDI_A0_B = DRPDI_A0_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A1_B = DRPDI_A1_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A2_B = DRPDI_A2_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A3_B = DRPDI_A3_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A4_B = DRPDI_A4_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A5_B = DRPDI_A5_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A6_B = DRPDI_A6_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A7_B = DRPDI_A7_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A8_B = DRPDI_A8_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A9_B = DRPDI_A9_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A10_B = DRPDI_A10_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A11_B = DRPDI_A11_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A12_B = DRPDI_A12_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A13_B = DRPDI_A13_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A14_B = DRPDI_A14_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPDI_A15_B = DRPDI_A15_B; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPEN_A0_B = DRPEN_A0_B; // net ID: DRPEN lsb: 0  msb: 0 INPUT
			this->DRPWE_A0_B = DRPWE_A0_B; // net ID: DRPWE lsb: 0  msb: 0 INPUT
			this->FUNCLVLRSTN_A0_B = FUNCLVLRSTN_A0_B; // net ID: FUNCLVLRSTN lsb: 0  msb: 0 INPUT
			this->LL2SENDASREQL1_A0_B = LL2SENDASREQL1_A0_B; // net ID: LL2SENDASREQL1 lsb: 0  msb: 0 INPUT
			this->LL2SENDENTERL1_A0_B = LL2SENDENTERL1_A0_B; // net ID: LL2SENDENTERL1 lsb: 0  msb: 0 INPUT
			this->LL2SENDENTERL23_A0_B = LL2SENDENTERL23_A0_B; // net ID: LL2SENDENTERL23 lsb: 0  msb: 0 INPUT
			this->LL2SENDPMACK_A0_B = LL2SENDPMACK_A0_B; // net ID: LL2SENDPMACK lsb: 0  msb: 0 INPUT
			this->LL2SUSPENDNOW_A0_B = LL2SUSPENDNOW_A0_B; // net ID: LL2SUSPENDNOW lsb: 0  msb: 0 INPUT
			this->LL2TLPRCV_A0_B = LL2TLPRCV_A0_B; // net ID: LL2TLPRCV lsb: 0  msb: 0 INPUT
			this->MIMRXRDATA_A0_B = MIMRXRDATA_A0_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A1_B = MIMRXRDATA_A1_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A2_B = MIMRXRDATA_A2_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A3_B = MIMRXRDATA_A3_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A4_B = MIMRXRDATA_A4_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A5_B = MIMRXRDATA_A5_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A6_B = MIMRXRDATA_A6_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A7_B = MIMRXRDATA_A7_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A8_B = MIMRXRDATA_A8_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A9_B = MIMRXRDATA_A9_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A10_B = MIMRXRDATA_A10_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A11_B = MIMRXRDATA_A11_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A12_B = MIMRXRDATA_A12_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A13_B = MIMRXRDATA_A13_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A14_B = MIMRXRDATA_A14_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A15_B = MIMRXRDATA_A15_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A16_B = MIMRXRDATA_A16_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A17_B = MIMRXRDATA_A17_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A18_B = MIMRXRDATA_A18_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A19_B = MIMRXRDATA_A19_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A20_B = MIMRXRDATA_A20_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A21_B = MIMRXRDATA_A21_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A22_B = MIMRXRDATA_A22_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A23_B = MIMRXRDATA_A23_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A24_B = MIMRXRDATA_A24_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A25_B = MIMRXRDATA_A25_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A26_B = MIMRXRDATA_A26_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A27_B = MIMRXRDATA_A27_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A28_B = MIMRXRDATA_A28_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A29_B = MIMRXRDATA_A29_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A30_B = MIMRXRDATA_A30_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A31_B = MIMRXRDATA_A31_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A32_B = MIMRXRDATA_A32_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A33_B = MIMRXRDATA_A33_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A34_B = MIMRXRDATA_A34_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A35_B = MIMRXRDATA_A35_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A36_B = MIMRXRDATA_A36_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A37_B = MIMRXRDATA_A37_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A38_B = MIMRXRDATA_A38_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A39_B = MIMRXRDATA_A39_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A40_B = MIMRXRDATA_A40_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A41_B = MIMRXRDATA_A41_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A42_B = MIMRXRDATA_A42_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A43_B = MIMRXRDATA_A43_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A44_B = MIMRXRDATA_A44_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A45_B = MIMRXRDATA_A45_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A46_B = MIMRXRDATA_A46_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A47_B = MIMRXRDATA_A47_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A48_B = MIMRXRDATA_A48_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A49_B = MIMRXRDATA_A49_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A50_B = MIMRXRDATA_A50_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A51_B = MIMRXRDATA_A51_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A52_B = MIMRXRDATA_A52_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A53_B = MIMRXRDATA_A53_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A54_B = MIMRXRDATA_A54_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A55_B = MIMRXRDATA_A55_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A56_B = MIMRXRDATA_A56_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A57_B = MIMRXRDATA_A57_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A58_B = MIMRXRDATA_A58_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A59_B = MIMRXRDATA_A59_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A60_B = MIMRXRDATA_A60_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A61_B = MIMRXRDATA_A61_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A62_B = MIMRXRDATA_A62_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A63_B = MIMRXRDATA_A63_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A64_B = MIMRXRDATA_A64_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A65_B = MIMRXRDATA_A65_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A66_B = MIMRXRDATA_A66_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMRXRDATA_A67_B = MIMRXRDATA_A67_B; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMTXRDATA_A0_B = MIMTXRDATA_A0_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A1_B = MIMTXRDATA_A1_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A2_B = MIMTXRDATA_A2_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A3_B = MIMTXRDATA_A3_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A4_B = MIMTXRDATA_A4_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A5_B = MIMTXRDATA_A5_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A6_B = MIMTXRDATA_A6_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A7_B = MIMTXRDATA_A7_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A8_B = MIMTXRDATA_A8_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A9_B = MIMTXRDATA_A9_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A10_B = MIMTXRDATA_A10_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A11_B = MIMTXRDATA_A11_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A12_B = MIMTXRDATA_A12_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A13_B = MIMTXRDATA_A13_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A14_B = MIMTXRDATA_A14_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A15_B = MIMTXRDATA_A15_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A16_B = MIMTXRDATA_A16_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A17_B = MIMTXRDATA_A17_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A18_B = MIMTXRDATA_A18_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A19_B = MIMTXRDATA_A19_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A20_B = MIMTXRDATA_A20_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A21_B = MIMTXRDATA_A21_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A22_B = MIMTXRDATA_A22_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A23_B = MIMTXRDATA_A23_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A24_B = MIMTXRDATA_A24_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A25_B = MIMTXRDATA_A25_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A26_B = MIMTXRDATA_A26_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A27_B = MIMTXRDATA_A27_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A28_B = MIMTXRDATA_A28_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A29_B = MIMTXRDATA_A29_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A30_B = MIMTXRDATA_A30_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A31_B = MIMTXRDATA_A31_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A32_B = MIMTXRDATA_A32_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A33_B = MIMTXRDATA_A33_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A34_B = MIMTXRDATA_A34_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A35_B = MIMTXRDATA_A35_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A36_B = MIMTXRDATA_A36_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A37_B = MIMTXRDATA_A37_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A38_B = MIMTXRDATA_A38_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A39_B = MIMTXRDATA_A39_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A40_B = MIMTXRDATA_A40_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A41_B = MIMTXRDATA_A41_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A42_B = MIMTXRDATA_A42_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A43_B = MIMTXRDATA_A43_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A44_B = MIMTXRDATA_A44_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A45_B = MIMTXRDATA_A45_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A46_B = MIMTXRDATA_A46_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A47_B = MIMTXRDATA_A47_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A48_B = MIMTXRDATA_A48_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A49_B = MIMTXRDATA_A49_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A50_B = MIMTXRDATA_A50_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A51_B = MIMTXRDATA_A51_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A52_B = MIMTXRDATA_A52_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A53_B = MIMTXRDATA_A53_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A54_B = MIMTXRDATA_A54_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A55_B = MIMTXRDATA_A55_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A56_B = MIMTXRDATA_A56_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A57_B = MIMTXRDATA_A57_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A58_B = MIMTXRDATA_A58_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A59_B = MIMTXRDATA_A59_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A60_B = MIMTXRDATA_A60_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A61_B = MIMTXRDATA_A61_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A62_B = MIMTXRDATA_A62_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A63_B = MIMTXRDATA_A63_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A64_B = MIMTXRDATA_A64_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A65_B = MIMTXRDATA_A65_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A66_B = MIMTXRDATA_A66_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A67_B = MIMTXRDATA_A67_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->MIMTXRDATA_A68_B = MIMTXRDATA_A68_B; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->PIPECLK_A0_B = PIPECLK_A0_B; // net ID: PIPECLK lsb: 0  msb: 0 INPUT
			this->PIPERX0CHANISALIGNED_A0_B = PIPERX0CHANISALIGNED_A0_B; // net ID: PIPERX0CHANISALIGNED lsb: 0  msb: 0 INPUT
			this->PIPERX0CHARISK_A0_B = PIPERX0CHARISK_A0_B; // net ID: PIPERX0CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX0CHARISK_A1_B = PIPERX0CHARISK_A1_B; // net ID: PIPERX0CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX0DATA_A0_B = PIPERX0DATA_A0_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			this->PIPERX0DATA_A1_B = PIPERX0DATA_A1_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			this->PIPERX0DATA_A2_B = PIPERX0DATA_A2_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			this->PIPERX0DATA_A3_B = PIPERX0DATA_A3_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			this->PIPERX0DATA_A4_B = PIPERX0DATA_A4_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			this->PIPERX0DATA_A5_B = PIPERX0DATA_A5_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			this->PIPERX0DATA_A6_B = PIPERX0DATA_A6_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			this->PIPERX0DATA_A7_B = PIPERX0DATA_A7_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			this->PIPERX0DATA_A8_B = PIPERX0DATA_A8_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			this->PIPERX0DATA_A9_B = PIPERX0DATA_A9_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			this->PIPERX0DATA_A10_B = PIPERX0DATA_A10_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			this->PIPERX0DATA_A11_B = PIPERX0DATA_A11_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			this->PIPERX0DATA_A12_B = PIPERX0DATA_A12_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			this->PIPERX0DATA_A13_B = PIPERX0DATA_A13_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			this->PIPERX0DATA_A14_B = PIPERX0DATA_A14_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			this->PIPERX0DATA_A15_B = PIPERX0DATA_A15_B; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			this->PIPERX0ELECIDLE_A0_B = PIPERX0ELECIDLE_A0_B; // net ID: PIPERX0ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX0PHYSTATUS_A0_B = PIPERX0PHYSTATUS_A0_B; // net ID: PIPERX0PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX0STATUS_A0_B = PIPERX0STATUS_A0_B; // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX0STATUS_A1_B = PIPERX0STATUS_A1_B; // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX0STATUS_A2_B = PIPERX0STATUS_A2_B; // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX0VALID_A0_B = PIPERX0VALID_A0_B; // net ID: PIPERX0VALID lsb: 0  msb: 0 INPUT
			this->PIPERX1CHANISALIGNED_A0_B = PIPERX1CHANISALIGNED_A0_B; // net ID: PIPERX1CHANISALIGNED lsb: 0  msb: 0 INPUT
			this->PIPERX1CHARISK_A0_B = PIPERX1CHARISK_A0_B; // net ID: PIPERX1CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX1CHARISK_A1_B = PIPERX1CHARISK_A1_B; // net ID: PIPERX1CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX1DATA_A0_B = PIPERX1DATA_A0_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			this->PIPERX1DATA_A1_B = PIPERX1DATA_A1_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			this->PIPERX1DATA_A2_B = PIPERX1DATA_A2_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			this->PIPERX1DATA_A3_B = PIPERX1DATA_A3_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			this->PIPERX1DATA_A4_B = PIPERX1DATA_A4_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			this->PIPERX1DATA_A5_B = PIPERX1DATA_A5_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			this->PIPERX1DATA_A6_B = PIPERX1DATA_A6_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			this->PIPERX1DATA_A7_B = PIPERX1DATA_A7_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			this->PIPERX1DATA_A8_B = PIPERX1DATA_A8_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			this->PIPERX1DATA_A9_B = PIPERX1DATA_A9_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			this->PIPERX1DATA_A10_B = PIPERX1DATA_A10_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			this->PIPERX1DATA_A11_B = PIPERX1DATA_A11_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			this->PIPERX1DATA_A12_B = PIPERX1DATA_A12_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			this->PIPERX1DATA_A13_B = PIPERX1DATA_A13_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			this->PIPERX1DATA_A14_B = PIPERX1DATA_A14_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			this->PIPERX1DATA_A15_B = PIPERX1DATA_A15_B; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			this->PIPERX1ELECIDLE_A0_B = PIPERX1ELECIDLE_A0_B; // net ID: PIPERX1ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX1PHYSTATUS_A0_B = PIPERX1PHYSTATUS_A0_B; // net ID: PIPERX1PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX1STATUS_A0_B = PIPERX1STATUS_A0_B; // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX1STATUS_A1_B = PIPERX1STATUS_A1_B; // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX1STATUS_A2_B = PIPERX1STATUS_A2_B; // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX1VALID_A0_B = PIPERX1VALID_A0_B; // net ID: PIPERX1VALID lsb: 0  msb: 0 INPUT
			this->PIPERX2CHANISALIGNED_A0_B = PIPERX2CHANISALIGNED_A0_B; // net ID: PIPERX2CHANISALIGNED lsb: 0  msb: 0 INPUT
			this->PIPERX2CHARISK_A0_B = PIPERX2CHARISK_A0_B; // net ID: PIPERX2CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX2CHARISK_A1_B = PIPERX2CHARISK_A1_B; // net ID: PIPERX2CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX2DATA_A0_B = PIPERX2DATA_A0_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			this->PIPERX2DATA_A1_B = PIPERX2DATA_A1_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			this->PIPERX2DATA_A2_B = PIPERX2DATA_A2_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			this->PIPERX2DATA_A3_B = PIPERX2DATA_A3_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			this->PIPERX2DATA_A4_B = PIPERX2DATA_A4_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			this->PIPERX2DATA_A5_B = PIPERX2DATA_A5_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			this->PIPERX2DATA_A6_B = PIPERX2DATA_A6_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			this->PIPERX2DATA_A7_B = PIPERX2DATA_A7_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			this->PIPERX2DATA_A8_B = PIPERX2DATA_A8_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			this->PIPERX2DATA_A9_B = PIPERX2DATA_A9_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			this->PIPERX2DATA_A10_B = PIPERX2DATA_A10_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			this->PIPERX2DATA_A11_B = PIPERX2DATA_A11_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			this->PIPERX2DATA_A12_B = PIPERX2DATA_A12_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			this->PIPERX2DATA_A13_B = PIPERX2DATA_A13_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			this->PIPERX2DATA_A14_B = PIPERX2DATA_A14_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			this->PIPERX2DATA_A15_B = PIPERX2DATA_A15_B; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			this->PIPERX2ELECIDLE_A0_B = PIPERX2ELECIDLE_A0_B; // net ID: PIPERX2ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX2PHYSTATUS_A0_B = PIPERX2PHYSTATUS_A0_B; // net ID: PIPERX2PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX2STATUS_A0_B = PIPERX2STATUS_A0_B; // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX2STATUS_A1_B = PIPERX2STATUS_A1_B; // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX2STATUS_A2_B = PIPERX2STATUS_A2_B; // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX2VALID_A0_B = PIPERX2VALID_A0_B; // net ID: PIPERX2VALID lsb: 0  msb: 0 INPUT
			this->PIPERX3CHANISALIGNED_A0_B = PIPERX3CHANISALIGNED_A0_B; // net ID: PIPERX3CHANISALIGNED lsb: 0  msb: 0 INPUT
			this->PIPERX3CHARISK_A0_B = PIPERX3CHARISK_A0_B; // net ID: PIPERX3CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX3CHARISK_A1_B = PIPERX3CHARISK_A1_B; // net ID: PIPERX3CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX3DATA_A0_B = PIPERX3DATA_A0_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			this->PIPERX3DATA_A1_B = PIPERX3DATA_A1_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			this->PIPERX3DATA_A2_B = PIPERX3DATA_A2_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			this->PIPERX3DATA_A3_B = PIPERX3DATA_A3_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			this->PIPERX3DATA_A4_B = PIPERX3DATA_A4_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			this->PIPERX3DATA_A5_B = PIPERX3DATA_A5_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			this->PIPERX3DATA_A6_B = PIPERX3DATA_A6_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			this->PIPERX3DATA_A7_B = PIPERX3DATA_A7_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			this->PIPERX3DATA_A8_B = PIPERX3DATA_A8_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			this->PIPERX3DATA_A9_B = PIPERX3DATA_A9_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			this->PIPERX3DATA_A10_B = PIPERX3DATA_A10_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			this->PIPERX3DATA_A11_B = PIPERX3DATA_A11_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			this->PIPERX3DATA_A12_B = PIPERX3DATA_A12_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			this->PIPERX3DATA_A13_B = PIPERX3DATA_A13_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			this->PIPERX3DATA_A14_B = PIPERX3DATA_A14_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			this->PIPERX3DATA_A15_B = PIPERX3DATA_A15_B; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			this->PIPERX3ELECIDLE_A0_B = PIPERX3ELECIDLE_A0_B; // net ID: PIPERX3ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX3PHYSTATUS_A0_B = PIPERX3PHYSTATUS_A0_B; // net ID: PIPERX3PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX3STATUS_A0_B = PIPERX3STATUS_A0_B; // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX3STATUS_A1_B = PIPERX3STATUS_A1_B; // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX3STATUS_A2_B = PIPERX3STATUS_A2_B; // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX3VALID_A0_B = PIPERX3VALID_A0_B; // net ID: PIPERX3VALID lsb: 0  msb: 0 INPUT
			this->PIPERX4CHANISALIGNED_A0_B = PIPERX4CHANISALIGNED_A0_B; // net ID: PIPERX4CHANISALIGNED lsb: 0  msb: 0 INPUT
			this->PIPERX4CHARISK_A0_B = PIPERX4CHARISK_A0_B; // net ID: PIPERX4CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX4CHARISK_A1_B = PIPERX4CHARISK_A1_B; // net ID: PIPERX4CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX4DATA_A0_B = PIPERX4DATA_A0_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			this->PIPERX4DATA_A1_B = PIPERX4DATA_A1_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			this->PIPERX4DATA_A2_B = PIPERX4DATA_A2_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			this->PIPERX4DATA_A3_B = PIPERX4DATA_A3_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			this->PIPERX4DATA_A4_B = PIPERX4DATA_A4_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			this->PIPERX4DATA_A5_B = PIPERX4DATA_A5_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			this->PIPERX4DATA_A6_B = PIPERX4DATA_A6_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			this->PIPERX4DATA_A7_B = PIPERX4DATA_A7_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			this->PIPERX4DATA_A8_B = PIPERX4DATA_A8_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			this->PIPERX4DATA_A9_B = PIPERX4DATA_A9_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			this->PIPERX4DATA_A10_B = PIPERX4DATA_A10_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			this->PIPERX4DATA_A11_B = PIPERX4DATA_A11_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			this->PIPERX4DATA_A12_B = PIPERX4DATA_A12_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			this->PIPERX4DATA_A13_B = PIPERX4DATA_A13_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			this->PIPERX4DATA_A14_B = PIPERX4DATA_A14_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			this->PIPERX4DATA_A15_B = PIPERX4DATA_A15_B; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			this->PIPERX4ELECIDLE_A0_B = PIPERX4ELECIDLE_A0_B; // net ID: PIPERX4ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX4PHYSTATUS_A0_B = PIPERX4PHYSTATUS_A0_B; // net ID: PIPERX4PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX4STATUS_A0_B = PIPERX4STATUS_A0_B; // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX4STATUS_A1_B = PIPERX4STATUS_A1_B; // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX4STATUS_A2_B = PIPERX4STATUS_A2_B; // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX4VALID_A0_B = PIPERX4VALID_A0_B; // net ID: PIPERX4VALID lsb: 0  msb: 0 INPUT
			this->PIPERX5CHANISALIGNED_A0_B = PIPERX5CHANISALIGNED_A0_B; // net ID: PIPERX5CHANISALIGNED lsb: 0  msb: 0 INPUT
			this->PIPERX5CHARISK_A0_B = PIPERX5CHARISK_A0_B; // net ID: PIPERX5CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX5CHARISK_A1_B = PIPERX5CHARISK_A1_B; // net ID: PIPERX5CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX5DATA_A0_B = PIPERX5DATA_A0_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			this->PIPERX5DATA_A1_B = PIPERX5DATA_A1_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			this->PIPERX5DATA_A2_B = PIPERX5DATA_A2_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			this->PIPERX5DATA_A3_B = PIPERX5DATA_A3_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			this->PIPERX5DATA_A4_B = PIPERX5DATA_A4_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			this->PIPERX5DATA_A5_B = PIPERX5DATA_A5_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			this->PIPERX5DATA_A6_B = PIPERX5DATA_A6_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			this->PIPERX5DATA_A7_B = PIPERX5DATA_A7_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			this->PIPERX5DATA_A8_B = PIPERX5DATA_A8_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			this->PIPERX5DATA_A9_B = PIPERX5DATA_A9_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			this->PIPERX5DATA_A10_B = PIPERX5DATA_A10_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			this->PIPERX5DATA_A11_B = PIPERX5DATA_A11_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			this->PIPERX5DATA_A12_B = PIPERX5DATA_A12_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			this->PIPERX5DATA_A13_B = PIPERX5DATA_A13_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			this->PIPERX5DATA_A14_B = PIPERX5DATA_A14_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			this->PIPERX5DATA_A15_B = PIPERX5DATA_A15_B; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			this->PIPERX5ELECIDLE_A0_B = PIPERX5ELECIDLE_A0_B; // net ID: PIPERX5ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX5PHYSTATUS_A0_B = PIPERX5PHYSTATUS_A0_B; // net ID: PIPERX5PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX5STATUS_A0_B = PIPERX5STATUS_A0_B; // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX5STATUS_A1_B = PIPERX5STATUS_A1_B; // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX5STATUS_A2_B = PIPERX5STATUS_A2_B; // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX5VALID_A0_B = PIPERX5VALID_A0_B; // net ID: PIPERX5VALID lsb: 0  msb: 0 INPUT
			this->PIPERX6CHANISALIGNED_A0_B = PIPERX6CHANISALIGNED_A0_B; // net ID: PIPERX6CHANISALIGNED lsb: 0  msb: 0 INPUT
			this->PIPERX6CHARISK_A0_B = PIPERX6CHARISK_A0_B; // net ID: PIPERX6CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX6CHARISK_A1_B = PIPERX6CHARISK_A1_B; // net ID: PIPERX6CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX6DATA_A0_B = PIPERX6DATA_A0_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			this->PIPERX6DATA_A1_B = PIPERX6DATA_A1_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			this->PIPERX6DATA_A2_B = PIPERX6DATA_A2_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			this->PIPERX6DATA_A3_B = PIPERX6DATA_A3_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			this->PIPERX6DATA_A4_B = PIPERX6DATA_A4_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			this->PIPERX6DATA_A5_B = PIPERX6DATA_A5_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			this->PIPERX6DATA_A6_B = PIPERX6DATA_A6_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			this->PIPERX6DATA_A7_B = PIPERX6DATA_A7_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			this->PIPERX6DATA_A8_B = PIPERX6DATA_A8_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			this->PIPERX6DATA_A9_B = PIPERX6DATA_A9_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			this->PIPERX6DATA_A10_B = PIPERX6DATA_A10_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			this->PIPERX6DATA_A11_B = PIPERX6DATA_A11_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			this->PIPERX6DATA_A12_B = PIPERX6DATA_A12_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			this->PIPERX6DATA_A13_B = PIPERX6DATA_A13_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			this->PIPERX6DATA_A14_B = PIPERX6DATA_A14_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			this->PIPERX6DATA_A15_B = PIPERX6DATA_A15_B; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			this->PIPERX6ELECIDLE_A0_B = PIPERX6ELECIDLE_A0_B; // net ID: PIPERX6ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX6PHYSTATUS_A0_B = PIPERX6PHYSTATUS_A0_B; // net ID: PIPERX6PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX6STATUS_A0_B = PIPERX6STATUS_A0_B; // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX6STATUS_A1_B = PIPERX6STATUS_A1_B; // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX6STATUS_A2_B = PIPERX6STATUS_A2_B; // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX6VALID_A0_B = PIPERX6VALID_A0_B; // net ID: PIPERX6VALID lsb: 0  msb: 0 INPUT
			this->PIPERX7CHANISALIGNED_A0_B = PIPERX7CHANISALIGNED_A0_B; // net ID: PIPERX7CHANISALIGNED lsb: 0  msb: 0 INPUT
			this->PIPERX7CHARISK_A0_B = PIPERX7CHARISK_A0_B; // net ID: PIPERX7CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX7CHARISK_A1_B = PIPERX7CHARISK_A1_B; // net ID: PIPERX7CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX7DATA_A0_B = PIPERX7DATA_A0_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			this->PIPERX7DATA_A1_B = PIPERX7DATA_A1_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			this->PIPERX7DATA_A2_B = PIPERX7DATA_A2_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			this->PIPERX7DATA_A3_B = PIPERX7DATA_A3_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			this->PIPERX7DATA_A4_B = PIPERX7DATA_A4_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			this->PIPERX7DATA_A5_B = PIPERX7DATA_A5_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			this->PIPERX7DATA_A6_B = PIPERX7DATA_A6_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			this->PIPERX7DATA_A7_B = PIPERX7DATA_A7_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			this->PIPERX7DATA_A8_B = PIPERX7DATA_A8_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			this->PIPERX7DATA_A9_B = PIPERX7DATA_A9_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			this->PIPERX7DATA_A10_B = PIPERX7DATA_A10_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			this->PIPERX7DATA_A11_B = PIPERX7DATA_A11_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			this->PIPERX7DATA_A12_B = PIPERX7DATA_A12_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			this->PIPERX7DATA_A13_B = PIPERX7DATA_A13_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			this->PIPERX7DATA_A14_B = PIPERX7DATA_A14_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			this->PIPERX7DATA_A15_B = PIPERX7DATA_A15_B; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			this->PIPERX7ELECIDLE_A0_B = PIPERX7ELECIDLE_A0_B; // net ID: PIPERX7ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX7PHYSTATUS_A0_B = PIPERX7PHYSTATUS_A0_B; // net ID: PIPERX7PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX7STATUS_A0_B = PIPERX7STATUS_A0_B; // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX7STATUS_A1_B = PIPERX7STATUS_A1_B; // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX7STATUS_A2_B = PIPERX7STATUS_A2_B; // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX7VALID_A0_B = PIPERX7VALID_A0_B; // net ID: PIPERX7VALID lsb: 0  msb: 0 INPUT
			this->PL2DIRECTEDLSTATE_A0_B = PL2DIRECTEDLSTATE_A0_B; // net ID: PL2DIRECTEDLSTATE lsb: 0  msb: 4 INPUT
			this->PL2DIRECTEDLSTATE_A1_B = PL2DIRECTEDLSTATE_A1_B; // net ID: PL2DIRECTEDLSTATE lsb: 0  msb: 4 INPUT
			this->PL2DIRECTEDLSTATE_A2_B = PL2DIRECTEDLSTATE_A2_B; // net ID: PL2DIRECTEDLSTATE lsb: 0  msb: 4 INPUT
			this->PL2DIRECTEDLSTATE_A3_B = PL2DIRECTEDLSTATE_A3_B; // net ID: PL2DIRECTEDLSTATE lsb: 0  msb: 4 INPUT
			this->PL2DIRECTEDLSTATE_A4_B = PL2DIRECTEDLSTATE_A4_B; // net ID: PL2DIRECTEDLSTATE lsb: 0  msb: 4 INPUT
			this->PLDBGMODE_A0_B = PLDBGMODE_A0_B; // net ID: PLDBGMODE lsb: 0  msb: 2 INPUT
			this->PLDBGMODE_A1_B = PLDBGMODE_A1_B; // net ID: PLDBGMODE lsb: 0  msb: 2 INPUT
			this->PLDBGMODE_A2_B = PLDBGMODE_A2_B; // net ID: PLDBGMODE lsb: 0  msb: 2 INPUT
			this->PLDIRECTEDLINKAUTON_A0_B = PLDIRECTEDLINKAUTON_A0_B; // net ID: PLDIRECTEDLINKAUTON lsb: 0  msb: 0 INPUT
			this->PLDIRECTEDLINKCHANGE_A0_B = PLDIRECTEDLINKCHANGE_A0_B; // net ID: PLDIRECTEDLINKCHANGE lsb: 0  msb: 1 INPUT
			this->PLDIRECTEDLINKCHANGE_A1_B = PLDIRECTEDLINKCHANGE_A1_B; // net ID: PLDIRECTEDLINKCHANGE lsb: 0  msb: 1 INPUT
			this->PLDIRECTEDLINKSPEED_A0_B = PLDIRECTEDLINKSPEED_A0_B; // net ID: PLDIRECTEDLINKSPEED lsb: 0  msb: 0 INPUT
			this->PLDIRECTEDLINKWIDTH_A0_B = PLDIRECTEDLINKWIDTH_A0_B; // net ID: PLDIRECTEDLINKWIDTH lsb: 0  msb: 1 INPUT
			this->PLDIRECTEDLINKWIDTH_A1_B = PLDIRECTEDLINKWIDTH_A1_B; // net ID: PLDIRECTEDLINKWIDTH lsb: 0  msb: 1 INPUT
			this->PLDIRECTEDLTSSMNEW_A0_B = PLDIRECTEDLTSSMNEW_A0_B; // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
			this->PLDIRECTEDLTSSMNEW_A1_B = PLDIRECTEDLTSSMNEW_A1_B; // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
			this->PLDIRECTEDLTSSMNEW_A2_B = PLDIRECTEDLTSSMNEW_A2_B; // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
			this->PLDIRECTEDLTSSMNEW_A3_B = PLDIRECTEDLTSSMNEW_A3_B; // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
			this->PLDIRECTEDLTSSMNEW_A4_B = PLDIRECTEDLTSSMNEW_A4_B; // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
			this->PLDIRECTEDLTSSMNEW_A5_B = PLDIRECTEDLTSSMNEW_A5_B; // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
			this->PLDIRECTEDLTSSMNEWVLD_A0_B = PLDIRECTEDLTSSMNEWVLD_A0_B; // net ID: PLDIRECTEDLTSSMNEWVLD lsb: 0  msb: 0 INPUT
			this->PLDIRECTEDLTSSMSTALL_A0_B = PLDIRECTEDLTSSMSTALL_A0_B; // net ID: PLDIRECTEDLTSSMSTALL lsb: 0  msb: 0 INPUT
			this->PLDOWNSTREAMDEEMPHSOURCE_A0_B = PLDOWNSTREAMDEEMPHSOURCE_A0_B; // net ID: PLDOWNSTREAMDEEMPHSOURCE lsb: 0  msb: 0 INPUT
			this->PLRSTN_A0_B = PLRSTN_A0_B; // net ID: PLRSTN lsb: 0  msb: 0 INPUT
			this->PLTRANSMITHOTRST_A0_B = PLTRANSMITHOTRST_A0_B; // net ID: PLTRANSMITHOTRST lsb: 0  msb: 0 INPUT
			this->PLUPSTREAMPREFERDEEMPH_A0_B = PLUPSTREAMPREFERDEEMPH_A0_B; // net ID: PLUPSTREAMPREFERDEEMPH lsb: 0  msb: 0 INPUT
			this->SYSRSTN_A0_B = SYSRSTN_A0_B; // net ID: SYSRSTN lsb: 0  msb: 0 INPUT
			this->TL2ASPMSUSPENDCREDITCHECK_A0_B = TL2ASPMSUSPENDCREDITCHECK_A0_B; // net ID: TL2ASPMSUSPENDCREDITCHECK lsb: 0  msb: 0 INPUT
			this->TL2PPMSUSPENDREQ_A0_B = TL2PPMSUSPENDREQ_A0_B; // net ID: TL2PPMSUSPENDREQ lsb: 0  msb: 0 INPUT
			this->TLRSTN_A0_B = TLRSTN_A0_B; // net ID: TLRSTN lsb: 0  msb: 0 INPUT
			this->TRNFCSEL_A0_B = TRNFCSEL_A0_B; // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
			this->TRNFCSEL_A1_B = TRNFCSEL_A1_B; // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
			this->TRNFCSEL_A2_B = TRNFCSEL_A2_B; // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
			this->TRNRDSTRDY_A0_B = TRNRDSTRDY_A0_B; // net ID: TRNRDSTRDY lsb: 0  msb: 0 INPUT
			this->TRNRFCPRET_A0_B = TRNRFCPRET_A0_B; // net ID: TRNRFCPRET lsb: 0  msb: 0 INPUT
			this->TRNRNPOK_A0_B = TRNRNPOK_A0_B; // net ID: TRNRNPOK lsb: 0  msb: 0 INPUT
			this->TRNRNPREQ_A0_B = TRNRNPREQ_A0_B; // net ID: TRNRNPREQ lsb: 0  msb: 0 INPUT
			this->TRNTCFGGNT_A0_B = TRNTCFGGNT_A0_B; // net ID: TRNTCFGGNT lsb: 0  msb: 0 INPUT
			this->TRNTD_A0_B = TRNTD_A0_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A1_B = TRNTD_A1_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A2_B = TRNTD_A2_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A3_B = TRNTD_A3_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A4_B = TRNTD_A4_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A5_B = TRNTD_A5_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A6_B = TRNTD_A6_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A7_B = TRNTD_A7_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A8_B = TRNTD_A8_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A9_B = TRNTD_A9_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A10_B = TRNTD_A10_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A11_B = TRNTD_A11_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A12_B = TRNTD_A12_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A13_B = TRNTD_A13_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A14_B = TRNTD_A14_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A15_B = TRNTD_A15_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A16_B = TRNTD_A16_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A17_B = TRNTD_A17_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A18_B = TRNTD_A18_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A19_B = TRNTD_A19_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A20_B = TRNTD_A20_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A21_B = TRNTD_A21_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A22_B = TRNTD_A22_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A23_B = TRNTD_A23_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A24_B = TRNTD_A24_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A25_B = TRNTD_A25_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A26_B = TRNTD_A26_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A27_B = TRNTD_A27_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A28_B = TRNTD_A28_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A29_B = TRNTD_A29_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A30_B = TRNTD_A30_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A31_B = TRNTD_A31_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A32_B = TRNTD_A32_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A33_B = TRNTD_A33_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A34_B = TRNTD_A34_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A35_B = TRNTD_A35_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A36_B = TRNTD_A36_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A37_B = TRNTD_A37_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A38_B = TRNTD_A38_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A39_B = TRNTD_A39_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A40_B = TRNTD_A40_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A41_B = TRNTD_A41_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A42_B = TRNTD_A42_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A43_B = TRNTD_A43_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A44_B = TRNTD_A44_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A45_B = TRNTD_A45_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A46_B = TRNTD_A46_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A47_B = TRNTD_A47_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A48_B = TRNTD_A48_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A49_B = TRNTD_A49_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A50_B = TRNTD_A50_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A51_B = TRNTD_A51_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A52_B = TRNTD_A52_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A53_B = TRNTD_A53_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A54_B = TRNTD_A54_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A55_B = TRNTD_A55_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A56_B = TRNTD_A56_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A57_B = TRNTD_A57_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A58_B = TRNTD_A58_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A59_B = TRNTD_A59_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A60_B = TRNTD_A60_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A61_B = TRNTD_A61_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A62_B = TRNTD_A62_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A63_B = TRNTD_A63_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A64_B = TRNTD_A64_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A65_B = TRNTD_A65_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A66_B = TRNTD_A66_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A67_B = TRNTD_A67_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A68_B = TRNTD_A68_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A69_B = TRNTD_A69_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A70_B = TRNTD_A70_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A71_B = TRNTD_A71_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A72_B = TRNTD_A72_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A73_B = TRNTD_A73_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A74_B = TRNTD_A74_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A75_B = TRNTD_A75_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A76_B = TRNTD_A76_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A77_B = TRNTD_A77_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A78_B = TRNTD_A78_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A79_B = TRNTD_A79_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A80_B = TRNTD_A80_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A81_B = TRNTD_A81_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A82_B = TRNTD_A82_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A83_B = TRNTD_A83_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A84_B = TRNTD_A84_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A85_B = TRNTD_A85_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A86_B = TRNTD_A86_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A87_B = TRNTD_A87_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A88_B = TRNTD_A88_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A89_B = TRNTD_A89_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A90_B = TRNTD_A90_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A91_B = TRNTD_A91_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A92_B = TRNTD_A92_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A93_B = TRNTD_A93_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A94_B = TRNTD_A94_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A95_B = TRNTD_A95_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A96_B = TRNTD_A96_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A97_B = TRNTD_A97_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A98_B = TRNTD_A98_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A99_B = TRNTD_A99_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A100_B = TRNTD_A100_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A101_B = TRNTD_A101_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A102_B = TRNTD_A102_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A103_B = TRNTD_A103_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A104_B = TRNTD_A104_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A105_B = TRNTD_A105_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A106_B = TRNTD_A106_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A107_B = TRNTD_A107_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A108_B = TRNTD_A108_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A109_B = TRNTD_A109_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A110_B = TRNTD_A110_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A111_B = TRNTD_A111_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A112_B = TRNTD_A112_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A113_B = TRNTD_A113_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A114_B = TRNTD_A114_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A115_B = TRNTD_A115_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A116_B = TRNTD_A116_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A117_B = TRNTD_A117_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A118_B = TRNTD_A118_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A119_B = TRNTD_A119_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A120_B = TRNTD_A120_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A121_B = TRNTD_A121_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A122_B = TRNTD_A122_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A123_B = TRNTD_A123_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A124_B = TRNTD_A124_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A125_B = TRNTD_A125_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A126_B = TRNTD_A126_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTD_A127_B = TRNTD_A127_B; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTDLLPDATA_A0_B = TRNTDLLPDATA_A0_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A1_B = TRNTDLLPDATA_A1_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A2_B = TRNTDLLPDATA_A2_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A3_B = TRNTDLLPDATA_A3_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A4_B = TRNTDLLPDATA_A4_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A5_B = TRNTDLLPDATA_A5_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A6_B = TRNTDLLPDATA_A6_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A7_B = TRNTDLLPDATA_A7_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A8_B = TRNTDLLPDATA_A8_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A9_B = TRNTDLLPDATA_A9_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A10_B = TRNTDLLPDATA_A10_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A11_B = TRNTDLLPDATA_A11_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A12_B = TRNTDLLPDATA_A12_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A13_B = TRNTDLLPDATA_A13_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A14_B = TRNTDLLPDATA_A14_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A15_B = TRNTDLLPDATA_A15_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A16_B = TRNTDLLPDATA_A16_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A17_B = TRNTDLLPDATA_A17_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A18_B = TRNTDLLPDATA_A18_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A19_B = TRNTDLLPDATA_A19_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A20_B = TRNTDLLPDATA_A20_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A21_B = TRNTDLLPDATA_A21_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A22_B = TRNTDLLPDATA_A22_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A23_B = TRNTDLLPDATA_A23_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A24_B = TRNTDLLPDATA_A24_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A25_B = TRNTDLLPDATA_A25_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A26_B = TRNTDLLPDATA_A26_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A27_B = TRNTDLLPDATA_A27_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A28_B = TRNTDLLPDATA_A28_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A29_B = TRNTDLLPDATA_A29_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A30_B = TRNTDLLPDATA_A30_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPDATA_A31_B = TRNTDLLPDATA_A31_B; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPSRCRDY_A0_B = TRNTDLLPSRCRDY_A0_B; // net ID: TRNTDLLPSRCRDY lsb: 0  msb: 0 INPUT
			this->TRNTECRCGEN_A0_B = TRNTECRCGEN_A0_B; // net ID: TRNTECRCGEN lsb: 0  msb: 0 INPUT
			this->TRNTEOF_A0_B = TRNTEOF_A0_B; // net ID: TRNTEOF lsb: 0  msb: 0 INPUT
			this->TRNTERRFWD_A0_B = TRNTERRFWD_A0_B; // net ID: TRNTERRFWD lsb: 0  msb: 0 INPUT
			this->TRNTREM_A0_B = TRNTREM_A0_B; // net ID: TRNTREM lsb: 0  msb: 1 INPUT
			this->TRNTREM_A1_B = TRNTREM_A1_B; // net ID: TRNTREM lsb: 0  msb: 1 INPUT
			this->TRNTSOF_A0_B = TRNTSOF_A0_B; // net ID: TRNTSOF lsb: 0  msb: 0 INPUT
			this->TRNTSRCDSC_A0_B = TRNTSRCDSC_A0_B; // net ID: TRNTSRCDSC lsb: 0  msb: 0 INPUT
			this->TRNTSRCRDY_A0_B = TRNTSRCRDY_A0_B; // net ID: TRNTSRCRDY lsb: 0  msb: 0 INPUT
			this->TRNTSTR_A0_B = TRNTSTR_A0_B; // net ID: TRNTSTR lsb: 0  msb: 0 INPUT
			this->USERCLK_A0_B = USERCLK_A0_B; // net ID: USERCLK lsb: 0  msb: 0 INPUT
			this->USERCLK2_A0_B = USERCLK2_A0_B; // net ID: USERCLK2 lsb: 0  msb: 0 INPUT
			
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
#endif // X_PCIE_2_1_H
