/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"

namespace CPrimitives {
	
	class X_PCIE_2_1: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_string_t AER_BASE_PTR;
		parameter_enum_t AER_CAP_ECRC_CHECK_CAPABLE;
		parameter_enum_t AER_CAP_ECRC_GEN_CAPABLE;
		parameter_string_t AER_CAP_ID;
		parameter_enum_t AER_CAP_MULTIHEADER;
		parameter_string_t AER_CAP_NEXTPTR;
		parameter_enum_t AER_CAP_ON;
		parameter_string_t AER_CAP_OPTIONAL_ERR_SUPPORT;
		parameter_enum_t AER_CAP_PERMIT_ROOTERR_UPDATE;
		parameter_string_t AER_CAP_VERSION;
		parameter_enum_t ALLOW_X8_GEN2;
		parameter_string_t BAR0;
		parameter_string_t BAR1;
		parameter_string_t BAR2;
		parameter_string_t BAR3;
		parameter_string_t BAR4;
		parameter_string_t BAR5;
		parameter_string_t CAPABILITIES_PTR;
		parameter_string_t CARDBUS_CIS_POINTER;
		parameter_string_t CFG_ECRC_ERR_CPLSTAT;
		parameter_string_t CLASS_CODE;
		parameter_enum_t CMD_INTX_IMPLEMENTED;
		parameter_enum_t CPL_TIMEOUT_DISABLE_SUPPORTED;
		parameter_string_t CPL_TIMEOUT_RANGES_SUPPORTED;
		parameter_string_t CRM_MODULE_RSTS;
		parameter_enum_t DEV_CAP2_ARI_FORWARDING_SUPPORTED;
		parameter_enum_t DEV_CAP2_ATOMICOP32_COMPLETER_SUPPORTED;
		parameter_enum_t DEV_CAP2_ATOMICOP64_COMPLETER_SUPPORTED;
		parameter_enum_t DEV_CAP2_ATOMICOP_ROUTING_SUPPORTED;
		parameter_enum_t DEV_CAP2_CAS128_COMPLETER_SUPPORTED;
		parameter_enum_t DEV_CAP2_ENDEND_TLP_PREFIX_SUPPORTED;
		parameter_enum_t DEV_CAP2_EXTENDED_FMT_FIELD_SUPPORTED;
		parameter_enum_t DEV_CAP2_LTR_MECHANISM_SUPPORTED;
		parameter_string_t DEV_CAP2_MAX_ENDEND_TLP_PREFIXES;
		parameter_enum_t DEV_CAP2_NO_RO_ENABLED_PRPR_PASSING;
		parameter_string_t DEV_CAP2_TPH_COMPLETER_SUPPORTED;
		parameter_enum_t DEV_CAP_ENABLE_SLOT_PWR_LIMIT_SCALE;
		parameter_enum_t DEV_CAP_ENABLE_SLOT_PWR_LIMIT_VALUE;
		parameter_string_t DEV_CAP_ENDPOINT_L0S_LATENCY;
		parameter_string_t DEV_CAP_ENDPOINT_L1_LATENCY;
		parameter_enum_t DEV_CAP_EXT_TAG_SUPPORTED;
		parameter_enum_t DEV_CAP_FUNCTION_LEVEL_RESET_CAPABLE;
		parameter_string_t DEV_CAP_MAX_PAYLOAD_SUPPORTED;
		parameter_string_t DEV_CAP_PHANTOM_FUNCTIONS_SUPPORT;
		parameter_enum_t DEV_CAP_ROLE_BASED_ERROR;
		parameter_string_t DEV_CAP_RSVD_14_12;
		parameter_string_t DEV_CAP_RSVD_17_16;
		parameter_string_t DEV_CAP_RSVD_31_29;
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
		parameter_string_t DNSTREAM_LINK_NUM;
		parameter_string_t DSN_BASE_PTR;
		parameter_string_t DSN_CAP_ID;
		parameter_string_t DSN_CAP_NEXTPTR;
		parameter_enum_t DSN_CAP_ON;
		parameter_string_t DSN_CAP_VERSION;
		parameter_string_t ENABLE_MSG_ROUTE;
		parameter_enum_t ENABLE_RX_TD_ECRC_TRIM;
		parameter_enum_t ENDEND_TLP_PREFIX_FORWARDING_SUPPORTED;
		parameter_enum_t ENTER_RVRY_EI_L0;
		parameter_enum_t EXIT_LOOPBACK_ON_EI;
		parameter_string_t EXPANSION_ROM;
		parameter_string_t EXT_CFG_CAP_PTR;
		parameter_string_t EXT_CFG_XP_CAP_PTR;
		parameter_string_t HEADER_TYPE;
		parameter_string_t INFER_EI;
		parameter_string_t INTERRUPT_PIN;
		parameter_enum_t INTERRUPT_STAT_AUTO;
		parameter_enum_t IS_SWITCH;
		parameter_string_t LAST_CONFIG_DWORD;
		parameter_enum_t LINK_CAP_ASPM_OPTIONALITY;
		parameter_string_t LINK_CAP_ASPM_SUPPORT;
		parameter_enum_t LINK_CAP_CLOCK_POWER_MANAGEMENT;
		parameter_enum_t LINK_CAP_DLL_LINK_ACTIVE_REPORTING_CAP;
		parameter_string_t LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN1;
		parameter_string_t LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN2;
		parameter_string_t LINK_CAP_L0S_EXIT_LATENCY_GEN1;
		parameter_string_t LINK_CAP_L0S_EXIT_LATENCY_GEN2;
		parameter_string_t LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN1;
		parameter_string_t LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN2;
		parameter_string_t LINK_CAP_L1_EXIT_LATENCY_GEN1;
		parameter_string_t LINK_CAP_L1_EXIT_LATENCY_GEN2;
		parameter_enum_t LINK_CAP_LINK_BANDWIDTH_NOTIFICATION_CAP;
		parameter_string_t LINK_CAP_MAX_LINK_SPEED;
		parameter_string_t LINK_CAP_MAX_LINK_WIDTH;
		parameter_string_t LINK_CAP_RSVD_23;
		parameter_enum_t LINK_CAP_SURPRISE_DOWN_ERROR_CAPABLE;
		parameter_string_t LINK_CONTROL_RCB;
		parameter_enum_t LINK_CTRL2_DEEMPHASIS;
		parameter_enum_t LINK_CTRL2_HW_AUTONOMOUS_SPEED_DISABLE;
		parameter_string_t LINK_CTRL2_TARGET_LINK_SPEED;
		parameter_enum_t LINK_STATUS_SLOT_CLOCK_CONFIG;
		parameter_string_t LL_ACK_TIMEOUT;
		parameter_enum_t LL_ACK_TIMEOUT_EN;
		parameter_string_t LL_ACK_TIMEOUT_FUNC;
		parameter_string_t LL_REPLAY_TIMEOUT;
		parameter_enum_t LL_REPLAY_TIMEOUT_EN;
		parameter_string_t LL_REPLAY_TIMEOUT_FUNC;
		parameter_string_t LTSSM_MAX_LINK_WIDTH;
		parameter_enum_t MPS_FORCE;
		parameter_string_t MSIX_BASE_PTR;
		parameter_string_t MSIX_CAP_ID;
		parameter_string_t MSIX_CAP_NEXTPTR;
		parameter_enum_t MSIX_CAP_ON;
		parameter_string_t MSIX_CAP_PBA_BIR;
		parameter_string_t MSIX_CAP_PBA_OFFSET;
		parameter_string_t MSIX_CAP_TABLE_BIR;
		parameter_string_t MSIX_CAP_TABLE_OFFSET;
		parameter_string_t MSIX_CAP_TABLE_SIZE;
		parameter_string_t MSI_BASE_PTR;
		parameter_enum_t MSI_CAP_64_BIT_ADDR_CAPABLE;
		parameter_string_t MSI_CAP_ID;
		parameter_string_t MSI_CAP_MULTIMSGCAP;
		parameter_string_t MSI_CAP_MULTIMSG_EXTENSION;
		parameter_string_t MSI_CAP_NEXTPTR;
		parameter_enum_t MSI_CAP_ON;
		parameter_enum_t MSI_CAP_PER_VECTOR_MASKING_CAPABLE;
		parameter_string_t N_FTS_COMCLK_GEN1;
		parameter_string_t N_FTS_COMCLK_GEN2;
		parameter_string_t N_FTS_GEN1;
		parameter_string_t N_FTS_GEN2;
		parameter_string_t PCIE_BASE_PTR;
		parameter_string_t PCIE_CAP_CAPABILITY_ID;
		parameter_string_t PCIE_CAP_CAPABILITY_VERSION;
		parameter_string_t PCIE_CAP_DEVICE_PORT_TYPE;
		parameter_string_t PCIE_CAP_NEXTPTR;
		parameter_enum_t PCIE_CAP_ON;
		parameter_string_t PCIE_CAP_RSVD_15_14;
		parameter_enum_t PCIE_CAP_SLOT_IMPLEMENTED;
		parameter_string_t PCIE_REVISION;
		parameter_string_t PL_AUTO_CONFIG;
		parameter_enum_t PL_FAST_TRAIN;
		parameter_string_t PM_ASPML0S_TIMEOUT;
		parameter_enum_t PM_ASPML0S_TIMEOUT_EN;
		parameter_string_t PM_ASPML0S_TIMEOUT_FUNC;
		parameter_enum_t PM_ASPM_FASTEXIT;
		parameter_string_t PM_BASE_PTR;
		parameter_string_t PM_CAP_AUXCURRENT;
		parameter_enum_t PM_CAP_D1SUPPORT;
		parameter_enum_t PM_CAP_D2SUPPORT;
		parameter_enum_t PM_CAP_DSI;
		parameter_string_t PM_CAP_ID;
		parameter_string_t PM_CAP_NEXTPTR;
		parameter_enum_t PM_CAP_ON;
		parameter_string_t PM_CAP_PMESUPPORT;
		parameter_enum_t PM_CAP_PME_CLOCK;
		parameter_string_t PM_CAP_RSVD_04;
		parameter_string_t PM_CAP_VERSION;
		parameter_enum_t PM_CSR_B2B3;
		parameter_enum_t PM_CSR_BPCCEN;
		parameter_enum_t PM_CSR_NOSOFTRST;
		parameter_string_t PM_DATA0;
		parameter_string_t PM_DATA1;
		parameter_string_t PM_DATA2;
		parameter_string_t PM_DATA3;
		parameter_string_t PM_DATA4;
		parameter_string_t PM_DATA5;
		parameter_string_t PM_DATA6;
		parameter_string_t PM_DATA7;
		parameter_string_t PM_DATA_SCALE0;
		parameter_string_t PM_DATA_SCALE1;
		parameter_string_t PM_DATA_SCALE2;
		parameter_string_t PM_DATA_SCALE3;
		parameter_string_t PM_DATA_SCALE4;
		parameter_string_t PM_DATA_SCALE5;
		parameter_string_t PM_DATA_SCALE6;
		parameter_string_t PM_DATA_SCALE7;
		parameter_enum_t PM_MF;
		parameter_string_t RBAR_BASE_PTR;
		parameter_string_t RBAR_CAP_CONTROL_ENCODEDBAR0;
		parameter_string_t RBAR_CAP_CONTROL_ENCODEDBAR1;
		parameter_string_t RBAR_CAP_CONTROL_ENCODEDBAR2;
		parameter_string_t RBAR_CAP_CONTROL_ENCODEDBAR3;
		parameter_string_t RBAR_CAP_CONTROL_ENCODEDBAR4;
		parameter_string_t RBAR_CAP_CONTROL_ENCODEDBAR5;
		parameter_string_t RBAR_CAP_ID;
		parameter_string_t RBAR_CAP_INDEX0;
		parameter_string_t RBAR_CAP_INDEX1;
		parameter_string_t RBAR_CAP_INDEX2;
		parameter_string_t RBAR_CAP_INDEX3;
		parameter_string_t RBAR_CAP_INDEX4;
		parameter_string_t RBAR_CAP_INDEX5;
		parameter_string_t RBAR_CAP_NEXTPTR;
		parameter_enum_t RBAR_CAP_ON;
		parameter_string_t RBAR_CAP_SUP0;
		parameter_string_t RBAR_CAP_SUP1;
		parameter_string_t RBAR_CAP_SUP2;
		parameter_string_t RBAR_CAP_SUP3;
		parameter_string_t RBAR_CAP_SUP4;
		parameter_string_t RBAR_CAP_SUP5;
		parameter_string_t RBAR_CAP_VERSION;
		parameter_string_t RBAR_NUM;
		parameter_string_t RECRC_CHK;
		parameter_enum_t RECRC_CHK_TRIM;
		parameter_enum_t ROOT_CAP_CRS_SW_VISIBILITY;
		parameter_string_t RP_AUTO_SPD;
		parameter_string_t RP_AUTO_SPD_LOOPCNT;
		parameter_enum_t SELECT_DLL_IF;
		parameter_string_t SIM_VERSION;
		parameter_enum_t SLOT_CAP_ATT_BUTTON_PRESENT;
		parameter_enum_t SLOT_CAP_ATT_INDICATOR_PRESENT;
		parameter_enum_t SLOT_CAP_ELEC_INTERLOCK_PRESENT;
		parameter_enum_t SLOT_CAP_HOTPLUG_CAPABLE;
		parameter_enum_t SLOT_CAP_HOTPLUG_SURPRISE;
		parameter_enum_t SLOT_CAP_MRL_SENSOR_PRESENT;
		parameter_enum_t SLOT_CAP_NO_CMD_COMPLETED_SUPPORT;
		parameter_string_t SLOT_CAP_PHYSICAL_SLOT_NUM;
		parameter_enum_t SLOT_CAP_POWER_CONTROLLER_PRESENT;
		parameter_enum_t SLOT_CAP_POWER_INDICATOR_PRESENT;
		parameter_string_t SLOT_CAP_SLOT_POWER_LIMIT_SCALE;
		parameter_string_t SLOT_CAP_SLOT_POWER_LIMIT_VALUE;
		parameter_string_t SPARE_BIT0;
		parameter_string_t SPARE_BIT1;
		parameter_string_t SPARE_BIT2;
		parameter_string_t SPARE_BIT3;
		parameter_string_t SPARE_BIT4;
		parameter_string_t SPARE_BIT5;
		parameter_string_t SPARE_BIT6;
		parameter_string_t SPARE_BIT7;
		parameter_string_t SPARE_BIT8;
		parameter_string_t SPARE_BYTE0;
		parameter_string_t SPARE_BYTE1;
		parameter_string_t SPARE_BYTE2;
		parameter_string_t SPARE_BYTE3;
		parameter_string_t SPARE_WORD0;
		parameter_string_t SPARE_WORD1;
		parameter_string_t SPARE_WORD2;
		parameter_string_t SPARE_WORD3;
		parameter_enum_t SSL_MESSAGE_AUTO;
		parameter_enum_t TECRC_EP_INV;
		parameter_enum_t TL_RBYPASS;
		parameter_string_t TL_RX_RAM_RADDR_LATENCY;
		parameter_string_t TL_RX_RAM_RDATA_LATENCY;
		parameter_string_t TL_RX_RAM_WRITE_LATENCY;
		parameter_enum_t TL_TFC_DISABLE;
		parameter_enum_t TL_TX_CHECKS_DISABLE;
		parameter_string_t TL_TX_RAM_RADDR_LATENCY;
		parameter_string_t TL_TX_RAM_RDATA_LATENCY;
		parameter_string_t TL_TX_RAM_WRITE_LATENCY;
		parameter_enum_t TRN_DW;
		parameter_enum_t TRN_NP_FC;
		parameter_enum_t UPCONFIG_CAPABLE;
		parameter_enum_t UPSTREAM_FACING;
		parameter_enum_t UR_ATOMIC;
		parameter_enum_t UR_CFG1;
		parameter_enum_t UR_INV_REQ;
		parameter_enum_t UR_PRS_RESPONSE;
		parameter_enum_t USER_CLK2_DIV2;
		parameter_string_t USER_CLK_FREQ;
		parameter_enum_t USE_RID_PINS;
		parameter_enum_t VC0_CPL_INFINITE;
		parameter_string_t VC0_RX_RAM_LIMIT;
		parameter_string_t VC0_TOTAL_CREDITS_CD;
		parameter_string_t VC0_TOTAL_CREDITS_CH;
		parameter_string_t VC0_TOTAL_CREDITS_NPD;
		parameter_string_t VC0_TOTAL_CREDITS_NPH;
		parameter_string_t VC0_TOTAL_CREDITS_PD;
		parameter_string_t VC0_TOTAL_CREDITS_PH;
		parameter_string_t VC0_TX_LASTPACKET;
		parameter_string_t VC_BASE_PTR;
		parameter_string_t VC_CAP_ID;
		parameter_string_t VC_CAP_NEXTPTR;
		parameter_enum_t VC_CAP_ON;
		parameter_enum_t VC_CAP_REJECT_SNOOP_TRANSACTIONS;
		parameter_string_t VC_CAP_VERSION;
		parameter_string_t VSEC_BASE_PTR;
		parameter_string_t VSEC_CAP_HDR_ID;
		parameter_string_t VSEC_CAP_HDR_LENGTH;
		parameter_string_t VSEC_CAP_HDR_REVISION;
		parameter_string_t VSEC_CAP_ID;
		parameter_enum_t VSEC_CAP_IS_LINK_VISIBLE;
		parameter_string_t VSEC_CAP_NEXTPTR;
		parameter_enum_t VSEC_CAP_ON;
		parameter_string_t VSEC_CAP_VERSION;
		//Verilog Ports in definition order:
		NetFlow* CFGAERECRCCHECKEN; // net ID: CFGAERECRCCHECKEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGAERECRCGENEN; // net ID: CFGAERECRCGENEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGAERROOTERRCORRERRRECEIVED; // net ID: CFGAERROOTERRCORRERRRECEIVED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGAERROOTERRCORRERRREPORTINGEN; // net ID: CFGAERROOTERRCORRERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGAERROOTERRFATALERRRECEIVED; // net ID: CFGAERROOTERRFATALERRRECEIVED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGAERROOTERRFATALERRREPORTINGEN; // net ID: CFGAERROOTERRFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGAERROOTERRNONFATALERRRECEIVED; // net ID: CFGAERROOTERRNONFATALERRRECEIVED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGAERROOTERRNONFATALERRREPORTINGEN; // net ID: CFGAERROOTERRNONFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGBRIDGESERREN; // net ID: CFGBRIDGESERREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCOMMANDBUSMASTERENABLE; // net ID: CFGCOMMANDBUSMASTERENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCOMMANDINTERRUPTDISABLE; // net ID: CFGCOMMANDINTERRUPTDISABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCOMMANDIOENABLE; // net ID: CFGCOMMANDIOENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCOMMANDMEMENABLE; // net ID: CFGCOMMANDMEMENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCOMMANDSERREN; // net ID: CFGCOMMANDSERREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROL2ARIFORWARDEN; // net ID: CFGDEVCONTROL2ARIFORWARDEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROL2ATOMICEGRESSBLOCK; // net ID: CFGDEVCONTROL2ATOMICEGRESSBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROL2ATOMICREQUESTEREN; // net ID: CFGDEVCONTROL2ATOMICREQUESTEREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROL2CPLTIMEOUTDIS; // net ID: CFGDEVCONTROL2CPLTIMEOUTDIS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROL2CPLTIMEOUTVAL; // net ID: CFGDEVCONTROL2CPLTIMEOUTVAL lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROL2IDOCPLEN; // net ID: CFGDEVCONTROL2IDOCPLEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROL2IDOREQEN; // net ID: CFGDEVCONTROL2IDOREQEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROL2LTREN; // net ID: CFGDEVCONTROL2LTREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROL2TLPPREFIXBLOCK; // net ID: CFGDEVCONTROL2TLPPREFIXBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLAUXPOWEREN; // net ID: CFGDEVCONTROLAUXPOWEREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLCORRERRREPORTINGEN; // net ID: CFGDEVCONTROLCORRERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLENABLERO; // net ID: CFGDEVCONTROLENABLERO lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLEXTTAGEN; // net ID: CFGDEVCONTROLEXTTAGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLFATALERRREPORTINGEN; // net ID: CFGDEVCONTROLFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLMAXPAYLOAD; // net ID: CFGDEVCONTROLMAXPAYLOAD lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLMAXREADREQ; // net ID: CFGDEVCONTROLMAXREADREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLNONFATALREPORTINGEN; // net ID: CFGDEVCONTROLNONFATALREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLNOSNOOPEN; // net ID: CFGDEVCONTROLNOSNOOPEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLPHANTOMEN; // net ID: CFGDEVCONTROLPHANTOMEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVCONTROLURERRREPORTINGEN; // net ID: CFGDEVCONTROLURERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVSTATUSCORRERRDETECTED; // net ID: CFGDEVSTATUSCORRERRDETECTED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVSTATUSFATALERRDETECTED; // net ID: CFGDEVSTATUSFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVSTATUSNONFATALERRDETECTED; // net ID: CFGDEVSTATUSNONFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDEVSTATUSURDETECTED; // net ID: CFGDEVSTATUSURDETECTED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGERRAERHEADERLOGSETN; // net ID: CFGERRAERHEADERLOGSETN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGERRCPLRDYN; // net ID: CFGERRCPLRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTDO; // net ID: CFGINTERRUPTDO lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMMENABLE; // net ID: CFGINTERRUPTMMENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIENABLE; // net ID: CFGINTERRUPTMSIENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIXENABLE; // net ID: CFGINTERRUPTMSIXENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIXFM; // net ID: CFGINTERRUPTMSIXFM lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTRDYN; // net ID: CFGINTERRUPTRDYN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLASPMCONTROL; // net ID: CFGLINKCONTROLASPMCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLAUTOBANDWIDTHINTEN; // net ID: CFGLINKCONTROLAUTOBANDWIDTHINTEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLBANDWIDTHINTEN; // net ID: CFGLINKCONTROLBANDWIDTHINTEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLCLOCKPMEN; // net ID: CFGLINKCONTROLCLOCKPMEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLCOMMONCLOCK; // net ID: CFGLINKCONTROLCOMMONCLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLEXTENDEDSYNC; // net ID: CFGLINKCONTROLEXTENDEDSYNC lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLHWAUTOWIDTHDIS; // net ID: CFGLINKCONTROLHWAUTOWIDTHDIS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLLINKDISABLE; // net ID: CFGLINKCONTROLLINKDISABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLRCB; // net ID: CFGLINKCONTROLRCB lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKCONTROLRETRAINLINK; // net ID: CFGLINKCONTROLRETRAINLINK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKSTATUSAUTOBANDWIDTHSTATUS; // net ID: CFGLINKSTATUSAUTOBANDWIDTHSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKSTATUSBANDWIDTHSTATUS; // net ID: CFGLINKSTATUSBANDWIDTHSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKSTATUSCURRENTSPEED; // net ID: CFGLINKSTATUSCURRENTSPEED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKSTATUSDLLACTIVE; // net ID: CFGLINKSTATUSDLLACTIVE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKSTATUSLINKTRAINING; // net ID: CFGLINKSTATUSLINKTRAINING lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKSTATUSNEGOTIATEDWIDTH; // net ID: CFGLINKSTATUSNEGOTIATEDWIDTH lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMGMTDO; // net ID: CFGMGMTDO lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMGMTRDWRDONEN; // net ID: CFGMGMTRDWRDONEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGDATA; // net ID: CFGMSGDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVED; // net ID: CFGMSGRECEIVED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDASSERTINTA; // net ID: CFGMSGRECEIVEDASSERTINTA lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDASSERTINTB; // net ID: CFGMSGRECEIVEDASSERTINTB lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDASSERTINTC; // net ID: CFGMSGRECEIVEDASSERTINTC lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDASSERTINTD; // net ID: CFGMSGRECEIVEDASSERTINTD lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDDEASSERTINTA; // net ID: CFGMSGRECEIVEDDEASSERTINTA lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDDEASSERTINTB; // net ID: CFGMSGRECEIVEDDEASSERTINTB lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDDEASSERTINTC; // net ID: CFGMSGRECEIVEDDEASSERTINTC lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDDEASSERTINTD; // net ID: CFGMSGRECEIVEDDEASSERTINTD lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDERRCOR; // net ID: CFGMSGRECEIVEDERRCOR lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDERRFATAL; // net ID: CFGMSGRECEIVEDERRFATAL lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDERRNONFATAL; // net ID: CFGMSGRECEIVEDERRNONFATAL lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDPMASNAK; // net ID: CFGMSGRECEIVEDPMASNAK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDPMETO; // net ID: CFGMSGRECEIVEDPMETO lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDPMETOACK; // net ID: CFGMSGRECEIVEDPMETOACK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDPMPME; // net ID: CFGMSGRECEIVEDPMPME lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDSETSLOTPOWERLIMIT; // net ID: CFGMSGRECEIVEDSETSLOTPOWERLIMIT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDUNLOCK; // net ID: CFGMSGRECEIVEDUNLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPCIELINKSTATE; // net ID: CFGPCIELINKSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPMCSRPMEEN; // net ID: CFGPMCSRPMEEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPMCSRPMESTATUS; // net ID: CFGPMCSRPMESTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPMCSRPOWERSTATE; // net ID: CFGPMCSRPOWERSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPMRCVASREQL1N; // net ID: CFGPMRCVASREQL1N lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPMRCVENTERL1N; // net ID: CFGPMRCVENTERL1N lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPMRCVENTERL23N; // net ID: CFGPMRCVENTERL23N lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPMRCVREQACKN; // net ID: CFGPMRCVREQACKN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGROOTCONTROLPMEINTEN; // net ID: CFGROOTCONTROLPMEINTEN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGROOTCONTROLSYSERRCORRERREN; // net ID: CFGROOTCONTROLSYSERRCORRERREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGROOTCONTROLSYSERRFATALERREN; // net ID: CFGROOTCONTROLSYSERRFATALERREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGROOTCONTROLSYSERRNONFATALERREN; // net ID: CFGROOTCONTROLSYSERRNONFATALERREN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGSLOTCONTROLELECTROMECHILCTLPULSE; // net ID: CFGSLOTCONTROLELECTROMECHILCTLPULSE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTRANSACTION; // net ID: CFGTRANSACTION lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTRANSACTIONADDR; // net ID: CFGTRANSACTIONADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTRANSACTIONTYPE; // net ID: CFGTRANSACTIONTYPE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGVCTCVCMAP; // net ID: CFGVCTCVCMAP lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRA; // net ID: DBGSCLRA lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRB; // net ID: DBGSCLRB lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRC; // net ID: DBGSCLRC lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRD; // net ID: DBGSCLRD lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRE; // net ID: DBGSCLRE lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRF; // net ID: DBGSCLRF lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRG; // net ID: DBGSCLRG lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRH; // net ID: DBGSCLRH lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRI; // net ID: DBGSCLRI lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRJ; // net ID: DBGSCLRJ lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGSCLRK; // net ID: DBGSCLRK lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGVECA; // net ID: DBGVECA lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGVECB; // net ID: DBGVECB lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGVECC; // net ID: DBGVECC lsb: 0  msb: 0 OUTPUT
		NetFlow* DRPDO; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
		NetFlow* DRPRDY; // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2BADDLLPERR; // net ID: LL2BADDLLPERR lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2BADTLPERR; // net ID: LL2BADTLPERR lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2LINKSTATUS; // net ID: LL2LINKSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2PROTOCOLERR; // net ID: LL2PROTOCOLERR lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2RECEIVERERR; // net ID: LL2RECEIVERERR lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2REPLAYROERR; // net ID: LL2REPLAYROERR lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2REPLAYTOERR; // net ID: LL2REPLAYTOERR lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2SUSPENDOK; // net ID: LL2SUSPENDOK lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2TFCINIT1SEQ; // net ID: LL2TFCINIT1SEQ lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2TFCINIT2SEQ; // net ID: LL2TFCINIT2SEQ lsb: 0  msb: 0 OUTPUT
		NetFlow* LL2TXIDLE; // net ID: LL2TXIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* LNKCLKEN; // net ID: LNKCLKEN lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMRXRADDR; // net ID: MIMRXRADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMRXREN; // net ID: MIMRXREN lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMRXWADDR; // net ID: MIMRXWADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMRXWDATA; // net ID: MIMRXWDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMRXWEN; // net ID: MIMRXWEN lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMTXRADDR; // net ID: MIMTXRADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMTXREN; // net ID: MIMTXREN lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMTXWADDR; // net ID: MIMTXWADDR lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMTXWDATA; // net ID: MIMTXWDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* MIMTXWEN; // net ID: MIMTXWEN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX0POLARITY; // net ID: PIPERX0POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX1POLARITY; // net ID: PIPERX1POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX2POLARITY; // net ID: PIPERX2POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX3POLARITY; // net ID: PIPERX3POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX4POLARITY; // net ID: PIPERX4POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX5POLARITY; // net ID: PIPERX5POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX6POLARITY; // net ID: PIPERX6POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX7POLARITY; // net ID: PIPERX7POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0CHARISK; // net ID: PIPETX0CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0COMPLIANCE; // net ID: PIPETX0COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0DATA; // net ID: PIPETX0DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0ELECIDLE; // net ID: PIPETX0ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0POWERDOWN; // net ID: PIPETX0POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1CHARISK; // net ID: PIPETX1CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1COMPLIANCE; // net ID: PIPETX1COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1DATA; // net ID: PIPETX1DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1ELECIDLE; // net ID: PIPETX1ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1POWERDOWN; // net ID: PIPETX1POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2CHARISK; // net ID: PIPETX2CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2COMPLIANCE; // net ID: PIPETX2COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2DATA; // net ID: PIPETX2DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2ELECIDLE; // net ID: PIPETX2ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2POWERDOWN; // net ID: PIPETX2POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3CHARISK; // net ID: PIPETX3CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3COMPLIANCE; // net ID: PIPETX3COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3DATA; // net ID: PIPETX3DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3ELECIDLE; // net ID: PIPETX3ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3POWERDOWN; // net ID: PIPETX3POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4CHARISK; // net ID: PIPETX4CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4COMPLIANCE; // net ID: PIPETX4COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4DATA; // net ID: PIPETX4DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4ELECIDLE; // net ID: PIPETX4ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4POWERDOWN; // net ID: PIPETX4POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5CHARISK; // net ID: PIPETX5CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5COMPLIANCE; // net ID: PIPETX5COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5DATA; // net ID: PIPETX5DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5ELECIDLE; // net ID: PIPETX5ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5POWERDOWN; // net ID: PIPETX5POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6CHARISK; // net ID: PIPETX6CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6COMPLIANCE; // net ID: PIPETX6COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6DATA; // net ID: PIPETX6DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6ELECIDLE; // net ID: PIPETX6ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6POWERDOWN; // net ID: PIPETX6POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7CHARISK; // net ID: PIPETX7CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7COMPLIANCE; // net ID: PIPETX7COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7DATA; // net ID: PIPETX7DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7ELECIDLE; // net ID: PIPETX7ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7POWERDOWN; // net ID: PIPETX7POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXDEEMPH; // net ID: PIPETXDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXMARGIN; // net ID: PIPETXMARGIN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXRATE; // net ID: PIPETXRATE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXRCVRDET; // net ID: PIPETXRCVRDET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXRESET; // net ID: PIPETXRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PL2L0REQ; // net ID: PL2L0REQ lsb: 0  msb: 0 OUTPUT
		NetFlow* PL2LINKUP; // net ID: PL2LINKUP lsb: 0  msb: 0 OUTPUT
		NetFlow* PL2RECEIVERERR; // net ID: PL2RECEIVERERR lsb: 0  msb: 0 OUTPUT
		NetFlow* PL2RECOVERY; // net ID: PL2RECOVERY lsb: 0  msb: 0 OUTPUT
		NetFlow* PL2RXELECIDLE; // net ID: PL2RXELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PL2RXPMSTATE; // net ID: PL2RXPMSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* PL2SUSPENDOK; // net ID: PL2SUSPENDOK lsb: 0  msb: 0 OUTPUT
		NetFlow* PLDBGVEC; // net ID: PLDBGVEC lsb: 0  msb: 0 OUTPUT
		NetFlow* PLDIRECTEDCHANGEDONE; // net ID: PLDIRECTEDCHANGEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* PLINITIALLINKWIDTH; // net ID: PLINITIALLINKWIDTH lsb: 0  msb: 0 OUTPUT
		NetFlow* PLLANEREVERSALMODE; // net ID: PLLANEREVERSALMODE lsb: 0  msb: 0 OUTPUT
		NetFlow* PLLINKGEN2CAP; // net ID: PLLINKGEN2CAP lsb: 0  msb: 0 OUTPUT
		NetFlow* PLLINKPARTNERGEN2SUPPORTED; // net ID: PLLINKPARTNERGEN2SUPPORTED lsb: 0  msb: 0 OUTPUT
		NetFlow* PLLINKUPCFGCAP; // net ID: PLLINKUPCFGCAP lsb: 0  msb: 0 OUTPUT
		NetFlow* PLLTSSMSTATE; // net ID: PLLTSSMSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* PLPHYLNKUPN; // net ID: PLPHYLNKUPN lsb: 0  msb: 0 OUTPUT
		NetFlow* PLRECEIVEDHOTRST; // net ID: PLRECEIVEDHOTRST lsb: 0  msb: 0 OUTPUT
		NetFlow* PLRXPMSTATE; // net ID: PLRXPMSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* PLSELLNKRATE; // net ID: PLSELLNKRATE lsb: 0  msb: 0 OUTPUT
		NetFlow* PLSELLNKWIDTH; // net ID: PLSELLNKWIDTH lsb: 0  msb: 0 OUTPUT
		NetFlow* PLTXPMSTATE; // net ID: PLTXPMSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* RECEIVEDFUNCLVLRSTN; // net ID: RECEIVEDFUNCLVLRSTN lsb: 0  msb: 0 OUTPUT
		NetFlow* TL2ASPMSUSPENDCREDITCHECKOK; // net ID: TL2ASPMSUSPENDCREDITCHECKOK lsb: 0  msb: 0 OUTPUT
		NetFlow* TL2ASPMSUSPENDREQ; // net ID: TL2ASPMSUSPENDREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* TL2ERRFCPE; // net ID: TL2ERRFCPE lsb: 0  msb: 0 OUTPUT
		NetFlow* TL2ERRHDR; // net ID: TL2ERRHDR lsb: 0  msb: 0 OUTPUT
		NetFlow* TL2ERRMALFORMED; // net ID: TL2ERRMALFORMED lsb: 0  msb: 0 OUTPUT
		NetFlow* TL2ERRRXOVERFLOW; // net ID: TL2ERRRXOVERFLOW lsb: 0  msb: 0 OUTPUT
		NetFlow* TL2PPMSUSPENDOK; // net ID: TL2PPMSUSPENDOK lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNFCCPLD; // net ID: TRNFCCPLD lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNFCCPLH; // net ID: TRNFCCPLH lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNFCNPD; // net ID: TRNFCNPD lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNFCNPH; // net ID: TRNFCNPH lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNFCPD; // net ID: TRNFCPD lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNFCPH; // net ID: TRNFCPH lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNLNKUP; // net ID: TRNLNKUP lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRBARHIT; // net ID: TRNRBARHIT lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRD; // net ID: TRNRD lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRDLLPDATA; // net ID: TRNRDLLPDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRDLLPSRCRDY; // net ID: TRNRDLLPSRCRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRECRCERR; // net ID: TRNRECRCERR lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNREOF; // net ID: TRNREOF lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRERRFWD; // net ID: TRNRERRFWD lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRREM; // net ID: TRNRREM lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRSOF; // net ID: TRNRSOF lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRSRCDSC; // net ID: TRNRSRCDSC lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNRSRCRDY; // net ID: TRNRSRCRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNTBUFAV; // net ID: TRNTBUFAV lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNTCFGREQ; // net ID: TRNTCFGREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNTDLLPDSTRDY; // net ID: TRNTDLLPDSTRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNTDSTRDY; // net ID: TRNTDSTRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* TRNTERRDROP; // net ID: TRNTERRDROP lsb: 0  msb: 0 OUTPUT
		NetFlow* USERRSTN; // net ID: USERRSTN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGAERINTERRUPTMSGNUM; // net ID: CFGAERINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
		NetFlow* CFGDEVID; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
		NetFlow* CFGDSBUSNUMBER; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGDSDEVICENUMBER; // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
		NetFlow* CFGDSFUNCTIONNUMBER; // net ID: CFGDSFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
		NetFlow* CFGDSN; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
		NetFlow* CFGERRACSN; // net ID: CFGERRACSN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRAERHEADERLOG; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
		NetFlow* CFGERRATOMICEGRESSBLOCKEDN; // net ID: CFGERRATOMICEGRESSBLOCKEDN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRCORN; // net ID: CFGERRCORN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRCPLABORTN; // net ID: CFGERRCPLABORTN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRCPLTIMEOUTN; // net ID: CFGERRCPLTIMEOUTN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRCPLUNEXPECTN; // net ID: CFGERRCPLUNEXPECTN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRECRCN; // net ID: CFGERRECRCN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRINTERNALCORN; // net ID: CFGERRINTERNALCORN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRINTERNALUNCORN; // net ID: CFGERRINTERNALUNCORN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRLOCKEDN; // net ID: CFGERRLOCKEDN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRMALFORMEDN; // net ID: CFGERRMALFORMEDN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRMCBLOCKEDN; // net ID: CFGERRMCBLOCKEDN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRNORECOVERYN; // net ID: CFGERRNORECOVERYN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRPOISONEDN; // net ID: CFGERRPOISONEDN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRPOSTEDN; // net ID: CFGERRPOSTEDN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRTLPCPLHEADER; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
		NetFlow* CFGERRURN; // net ID: CFGERRURN lsb: 0  msb: 0 INPUT
		NetFlow* CFGFORCECOMMONCLOCKOFF; // net ID: CFGFORCECOMMONCLOCKOFF lsb: 0  msb: 0 INPUT
		NetFlow* CFGFORCEEXTENDEDSYNCON; // net ID: CFGFORCEEXTENDEDSYNCON lsb: 0  msb: 0 INPUT
		NetFlow* CFGFORCEMPS; // net ID: CFGFORCEMPS lsb: 0  msb: 2 INPUT
		NetFlow* CFGINTERRUPTASSERTN; // net ID: CFGINTERRUPTASSERTN lsb: 0  msb: 0 INPUT
		NetFlow* CFGINTERRUPTDI; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
		NetFlow* CFGINTERRUPTN; // net ID: CFGINTERRUPTN lsb: 0  msb: 0 INPUT
		NetFlow* CFGINTERRUPTSTATN; // net ID: CFGINTERRUPTSTATN lsb: 0  msb: 0 INPUT
		NetFlow* CFGMGMTBYTEENN; // net ID: CFGMGMTBYTEENN lsb: 0  msb: 3 INPUT
		NetFlow* CFGMGMTDI; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTDWADDR; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
		NetFlow* CFGMGMTRDENN; // net ID: CFGMGMTRDENN lsb: 0  msb: 0 INPUT
		NetFlow* CFGMGMTWRENN; // net ID: CFGMGMTWRENN lsb: 0  msb: 0 INPUT
		NetFlow* CFGMGMTWRREADONLYN; // net ID: CFGMGMTWRREADONLYN lsb: 0  msb: 0 INPUT
		NetFlow* CFGMGMTWRRW1CASRWN; // net ID: CFGMGMTWRRW1CASRWN lsb: 0  msb: 0 INPUT
		NetFlow* CFGPCIECAPINTERRUPTMSGNUM; // net ID: CFGPCIECAPINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
		NetFlow* CFGPMFORCESTATE; // net ID: CFGPMFORCESTATE lsb: 0  msb: 1 INPUT
		NetFlow* CFGPMFORCESTATEENN; // net ID: CFGPMFORCESTATEENN lsb: 0  msb: 0 INPUT
		NetFlow* CFGPMHALTASPML0SN; // net ID: CFGPMHALTASPML0SN lsb: 0  msb: 0 INPUT
		NetFlow* CFGPMHALTASPML1N; // net ID: CFGPMHALTASPML1N lsb: 0  msb: 0 INPUT
		NetFlow* CFGPMSENDPMETON; // net ID: CFGPMSENDPMETON lsb: 0  msb: 0 INPUT
		NetFlow* CFGPMTURNOFFOKN; // net ID: CFGPMTURNOFFOKN lsb: 0  msb: 0 INPUT
		NetFlow* CFGPMWAKEN; // net ID: CFGPMWAKEN lsb: 0  msb: 0 INPUT
		NetFlow* CFGPORTNUMBER; // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGREVID; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
		NetFlow* CFGSUBSYSID; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
		NetFlow* CFGSUBSYSVENDID; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CFGTRNPENDINGN; // net ID: CFGTRNPENDINGN lsb: 0  msb: 0 INPUT
		NetFlow* CFGVENDID; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
		NetFlow* CMRSTN; // net ID: CMRSTN lsb: 0  msb: 0 INPUT
		NetFlow* CMSTICKYRSTN; // net ID: CMSTICKYRSTN lsb: 0  msb: 0 INPUT
		NetFlow* DBGMODE; // net ID: DBGMODE lsb: 0  msb: 1 INPUT
		NetFlow* DBGSUBMODE; // net ID: DBGSUBMODE lsb: 0  msb: 0 INPUT
		NetFlow* DLRSTN; // net ID: DLRSTN lsb: 0  msb: 0 INPUT
		NetFlow* DRPADDR; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
		NetFlow* DRPCLK; // net ID: DRPCLK lsb: 0  msb: 0 INPUT
		NetFlow* DRPDI; // net ID: DRPDI lsb: 0  msb: 15 INPUT
		NetFlow* DRPEN; // net ID: DRPEN lsb: 0  msb: 0 INPUT
		NetFlow* DRPWE; // net ID: DRPWE lsb: 0  msb: 0 INPUT
		NetFlow* FUNCLVLRSTN; // net ID: FUNCLVLRSTN lsb: 0  msb: 0 INPUT
		NetFlow* LL2SENDASREQL1; // net ID: LL2SENDASREQL1 lsb: 0  msb: 0 INPUT
		NetFlow* LL2SENDENTERL1; // net ID: LL2SENDENTERL1 lsb: 0  msb: 0 INPUT
		NetFlow* LL2SENDENTERL23; // net ID: LL2SENDENTERL23 lsb: 0  msb: 0 INPUT
		NetFlow* LL2SENDPMACK; // net ID: LL2SENDPMACK lsb: 0  msb: 0 INPUT
		NetFlow* LL2SUSPENDNOW; // net ID: LL2SUSPENDNOW lsb: 0  msb: 0 INPUT
		NetFlow* LL2TLPRCV; // net ID: LL2TLPRCV lsb: 0  msb: 0 INPUT
		NetFlow* MIMRXRDATA; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
		NetFlow* MIMTXRDATA; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
		NetFlow* PIPECLK; // net ID: PIPECLK lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0CHANISALIGNED; // net ID: PIPERX0CHANISALIGNED lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0CHARISK; // net ID: PIPERX0CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX0DATA; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX0ELECIDLE; // net ID: PIPERX0ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0PHYSTATUS; // net ID: PIPERX0PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0STATUS; // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX0VALID; // net ID: PIPERX0VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1CHANISALIGNED; // net ID: PIPERX1CHANISALIGNED lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1CHARISK; // net ID: PIPERX1CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX1DATA; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX1ELECIDLE; // net ID: PIPERX1ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1PHYSTATUS; // net ID: PIPERX1PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1STATUS; // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX1VALID; // net ID: PIPERX1VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2CHANISALIGNED; // net ID: PIPERX2CHANISALIGNED lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2CHARISK; // net ID: PIPERX2CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX2DATA; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX2ELECIDLE; // net ID: PIPERX2ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2PHYSTATUS; // net ID: PIPERX2PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2STATUS; // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX2VALID; // net ID: PIPERX2VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3CHANISALIGNED; // net ID: PIPERX3CHANISALIGNED lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3CHARISK; // net ID: PIPERX3CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX3DATA; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX3ELECIDLE; // net ID: PIPERX3ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3PHYSTATUS; // net ID: PIPERX3PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3STATUS; // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX3VALID; // net ID: PIPERX3VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4CHANISALIGNED; // net ID: PIPERX4CHANISALIGNED lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4CHARISK; // net ID: PIPERX4CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX4DATA; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX4ELECIDLE; // net ID: PIPERX4ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4PHYSTATUS; // net ID: PIPERX4PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4STATUS; // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX4VALID; // net ID: PIPERX4VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5CHANISALIGNED; // net ID: PIPERX5CHANISALIGNED lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5CHARISK; // net ID: PIPERX5CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX5DATA; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX5ELECIDLE; // net ID: PIPERX5ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5PHYSTATUS; // net ID: PIPERX5PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5STATUS; // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX5VALID; // net ID: PIPERX5VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6CHANISALIGNED; // net ID: PIPERX6CHANISALIGNED lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6CHARISK; // net ID: PIPERX6CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX6DATA; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX6ELECIDLE; // net ID: PIPERX6ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6PHYSTATUS; // net ID: PIPERX6PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6STATUS; // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX6VALID; // net ID: PIPERX6VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7CHANISALIGNED; // net ID: PIPERX7CHANISALIGNED lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7CHARISK; // net ID: PIPERX7CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX7DATA; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
		NetFlow* PIPERX7ELECIDLE; // net ID: PIPERX7ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7PHYSTATUS; // net ID: PIPERX7PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7STATUS; // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX7VALID; // net ID: PIPERX7VALID lsb: 0  msb: 0 INPUT
		NetFlow* PL2DIRECTEDLSTATE; // net ID: PL2DIRECTEDLSTATE lsb: 0  msb: 4 INPUT
		NetFlow* PLDBGMODE; // net ID: PLDBGMODE lsb: 0  msb: 2 INPUT
		NetFlow* PLDIRECTEDLINKAUTON; // net ID: PLDIRECTEDLINKAUTON lsb: 0  msb: 0 INPUT
		NetFlow* PLDIRECTEDLINKCHANGE; // net ID: PLDIRECTEDLINKCHANGE lsb: 0  msb: 1 INPUT
		NetFlow* PLDIRECTEDLINKSPEED; // net ID: PLDIRECTEDLINKSPEED lsb: 0  msb: 0 INPUT
		NetFlow* PLDIRECTEDLINKWIDTH; // net ID: PLDIRECTEDLINKWIDTH lsb: 0  msb: 1 INPUT
		NetFlow* PLDIRECTEDLTSSMNEW; // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
		NetFlow* PLDIRECTEDLTSSMNEWVLD; // net ID: PLDIRECTEDLTSSMNEWVLD lsb: 0  msb: 0 INPUT
		NetFlow* PLDIRECTEDLTSSMSTALL; // net ID: PLDIRECTEDLTSSMSTALL lsb: 0  msb: 0 INPUT
		NetFlow* PLDOWNSTREAMDEEMPHSOURCE; // net ID: PLDOWNSTREAMDEEMPHSOURCE lsb: 0  msb: 0 INPUT
		NetFlow* PLRSTN; // net ID: PLRSTN lsb: 0  msb: 0 INPUT
		NetFlow* PLTRANSMITHOTRST; // net ID: PLTRANSMITHOTRST lsb: 0  msb: 0 INPUT
		NetFlow* PLUPSTREAMPREFERDEEMPH; // net ID: PLUPSTREAMPREFERDEEMPH lsb: 0  msb: 0 INPUT
		NetFlow* SYSRSTN; // net ID: SYSRSTN lsb: 0  msb: 0 INPUT
		NetFlow* TL2ASPMSUSPENDCREDITCHECK; // net ID: TL2ASPMSUSPENDCREDITCHECK lsb: 0  msb: 0 INPUT
		NetFlow* TL2PPMSUSPENDREQ; // net ID: TL2PPMSUSPENDREQ lsb: 0  msb: 0 INPUT
		NetFlow* TLRSTN; // net ID: TLRSTN lsb: 0  msb: 0 INPUT
		NetFlow* TRNFCSEL; // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
		NetFlow* TRNRDSTRDY; // net ID: TRNRDSTRDY lsb: 0  msb: 0 INPUT
		NetFlow* TRNRFCPRET; // net ID: TRNRFCPRET lsb: 0  msb: 0 INPUT
		NetFlow* TRNRNPOK; // net ID: TRNRNPOK lsb: 0  msb: 0 INPUT
		NetFlow* TRNRNPREQ; // net ID: TRNRNPREQ lsb: 0  msb: 0 INPUT
		NetFlow* TRNTCFGGNT; // net ID: TRNTCFGGNT lsb: 0  msb: 0 INPUT
		NetFlow* TRNTD; // net ID: TRNTD lsb: 0  msb: 127 INPUT
		NetFlow* TRNTDLLPDATA; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
		NetFlow* TRNTDLLPSRCRDY; // net ID: TRNTDLLPSRCRDY lsb: 0  msb: 0 INPUT
		NetFlow* TRNTECRCGEN; // net ID: TRNTECRCGEN lsb: 0  msb: 0 INPUT
		NetFlow* TRNTEOF; // net ID: TRNTEOF lsb: 0  msb: 0 INPUT
		NetFlow* TRNTERRFWD; // net ID: TRNTERRFWD lsb: 0  msb: 0 INPUT
		NetFlow* TRNTREM; // net ID: TRNTREM lsb: 0  msb: 1 INPUT
		NetFlow* TRNTSOF; // net ID: TRNTSOF lsb: 0  msb: 0 INPUT
		NetFlow* TRNTSRCDSC; // net ID: TRNTSRCDSC lsb: 0  msb: 0 INPUT
		NetFlow* TRNTSRCRDY; // net ID: TRNTSRCRDY lsb: 0  msb: 0 INPUT
		NetFlow* TRNTSTR; // net ID: TRNTSTR lsb: 0  msb: 0 INPUT
		NetFlow* USERCLK; // net ID: USERCLK lsb: 0  msb: 0 INPUT
		NetFlow* USERCLK2; // net ID: USERCLK2 lsb: 0  msb: 0 INPUT
		
		X_PCIE_2_1(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_string_t AER_BASE_PTR, // Default: 12'h140
			parameter_enum_t AER_CAP_ECRC_CHECK_CAPABLE, // Default: "FALSE"
			parameter_enum_t AER_CAP_ECRC_GEN_CAPABLE, // Default: "FALSE"
			parameter_string_t AER_CAP_ID, // Default: 16'h0001
			parameter_enum_t AER_CAP_MULTIHEADER, // Default: "FALSE"
			parameter_string_t AER_CAP_NEXTPTR, // Default: 12'h178
			parameter_enum_t AER_CAP_ON, // Default: "FALSE"
			parameter_string_t AER_CAP_OPTIONAL_ERR_SUPPORT, // Default: 24'h000000
			parameter_enum_t AER_CAP_PERMIT_ROOTERR_UPDATE, // Default: "TRUE"
			parameter_string_t AER_CAP_VERSION, // Default: 4'h2
			parameter_enum_t ALLOW_X8_GEN2, // Default: "FALSE"
			parameter_string_t BAR0, // Default: 32'hFFFFFF00
			parameter_string_t BAR1, // Default: 32'hFFFF0000
			parameter_string_t BAR2, // Default: 32'hFFFF000C
			parameter_string_t BAR3, // Default: 32'hFFFFFFFF
			parameter_string_t BAR4, // Default: 32'h00000000
			parameter_string_t BAR5, // Default: 32'h00000000
			parameter_string_t CAPABILITIES_PTR, // Default: 8'h40
			parameter_string_t CARDBUS_CIS_POINTER, // Default: 32'h00000000
			parameter_string_t CFG_ECRC_ERR_CPLSTAT, // Default: 0
			parameter_string_t CLASS_CODE, // Default: 24'h000000
			parameter_enum_t CMD_INTX_IMPLEMENTED, // Default: "TRUE"
			parameter_enum_t CPL_TIMEOUT_DISABLE_SUPPORTED, // Default: "FALSE"
			parameter_string_t CPL_TIMEOUT_RANGES_SUPPORTED, // Default: 4'h0
			parameter_string_t CRM_MODULE_RSTS, // Default: 7'h00
			parameter_enum_t DEV_CAP2_ARI_FORWARDING_SUPPORTED, // Default: "FALSE"
			parameter_enum_t DEV_CAP2_ATOMICOP32_COMPLETER_SUPPORTED, // Default: "FALSE"
			parameter_enum_t DEV_CAP2_ATOMICOP64_COMPLETER_SUPPORTED, // Default: "FALSE"
			parameter_enum_t DEV_CAP2_ATOMICOP_ROUTING_SUPPORTED, // Default: "FALSE"
			parameter_enum_t DEV_CAP2_CAS128_COMPLETER_SUPPORTED, // Default: "FALSE"
			parameter_enum_t DEV_CAP2_ENDEND_TLP_PREFIX_SUPPORTED, // Default: "FALSE"
			parameter_enum_t DEV_CAP2_EXTENDED_FMT_FIELD_SUPPORTED, // Default: "FALSE"
			parameter_enum_t DEV_CAP2_LTR_MECHANISM_SUPPORTED, // Default: "FALSE"
			parameter_string_t DEV_CAP2_MAX_ENDEND_TLP_PREFIXES, // Default: 2'h0
			parameter_enum_t DEV_CAP2_NO_RO_ENABLED_PRPR_PASSING, // Default: "FALSE"
			parameter_string_t DEV_CAP2_TPH_COMPLETER_SUPPORTED, // Default: 2'h0
			parameter_enum_t DEV_CAP_ENABLE_SLOT_PWR_LIMIT_SCALE, // Default: "TRUE"
			parameter_enum_t DEV_CAP_ENABLE_SLOT_PWR_LIMIT_VALUE, // Default: "TRUE"
			parameter_string_t DEV_CAP_ENDPOINT_L0S_LATENCY, // Default: 0
			parameter_string_t DEV_CAP_ENDPOINT_L1_LATENCY, // Default: 0
			parameter_enum_t DEV_CAP_EXT_TAG_SUPPORTED, // Default: "TRUE"
			parameter_enum_t DEV_CAP_FUNCTION_LEVEL_RESET_CAPABLE, // Default: "FALSE"
			parameter_string_t DEV_CAP_MAX_PAYLOAD_SUPPORTED, // Default: 2
			parameter_string_t DEV_CAP_PHANTOM_FUNCTIONS_SUPPORT, // Default: 0
			parameter_enum_t DEV_CAP_ROLE_BASED_ERROR, // Default: "TRUE"
			parameter_string_t DEV_CAP_RSVD_14_12, // Default: 0
			parameter_string_t DEV_CAP_RSVD_17_16, // Default: 0
			parameter_string_t DEV_CAP_RSVD_31_29, // Default: 0
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
			parameter_string_t DNSTREAM_LINK_NUM, // Default: 8'h00
			parameter_string_t DSN_BASE_PTR, // Default: 12'h100
			parameter_string_t DSN_CAP_ID, // Default: 16'h0003
			parameter_string_t DSN_CAP_NEXTPTR, // Default: 12'h10C
			parameter_enum_t DSN_CAP_ON, // Default: "TRUE"
			parameter_string_t DSN_CAP_VERSION, // Default: 4'h1
			parameter_string_t ENABLE_MSG_ROUTE, // Default: 11'h000
			parameter_enum_t ENABLE_RX_TD_ECRC_TRIM, // Default: "FALSE"
			parameter_enum_t ENDEND_TLP_PREFIX_FORWARDING_SUPPORTED, // Default: "FALSE"
			parameter_enum_t ENTER_RVRY_EI_L0, // Default: "TRUE"
			parameter_enum_t EXIT_LOOPBACK_ON_EI, // Default: "TRUE"
			parameter_string_t EXPANSION_ROM, // Default: 32'hFFFFF001
			parameter_string_t EXT_CFG_CAP_PTR, // Default: 6'h3F
			parameter_string_t EXT_CFG_XP_CAP_PTR, // Default: 10'h3FF
			parameter_string_t HEADER_TYPE, // Default: 8'h00
			parameter_string_t INFER_EI, // Default: 5'h00
			parameter_string_t INTERRUPT_PIN, // Default: 8'h01
			parameter_enum_t INTERRUPT_STAT_AUTO, // Default: "TRUE"
			parameter_enum_t IS_SWITCH, // Default: "FALSE"
			parameter_string_t LAST_CONFIG_DWORD, // Default: 10'h3FF
			parameter_enum_t LINK_CAP_ASPM_OPTIONALITY, // Default: "TRUE"
			parameter_string_t LINK_CAP_ASPM_SUPPORT, // Default: 1
			parameter_enum_t LINK_CAP_CLOCK_POWER_MANAGEMENT, // Default: "FALSE"
			parameter_enum_t LINK_CAP_DLL_LINK_ACTIVE_REPORTING_CAP, // Default: "FALSE"
			parameter_string_t LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN1, // Default: 7
			parameter_string_t LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN2, // Default: 7
			parameter_string_t LINK_CAP_L0S_EXIT_LATENCY_GEN1, // Default: 7
			parameter_string_t LINK_CAP_L0S_EXIT_LATENCY_GEN2, // Default: 7
			parameter_string_t LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN1, // Default: 7
			parameter_string_t LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN2, // Default: 7
			parameter_string_t LINK_CAP_L1_EXIT_LATENCY_GEN1, // Default: 7
			parameter_string_t LINK_CAP_L1_EXIT_LATENCY_GEN2, // Default: 7
			parameter_enum_t LINK_CAP_LINK_BANDWIDTH_NOTIFICATION_CAP, // Default: "FALSE"
			parameter_string_t LINK_CAP_MAX_LINK_SPEED, // Default: 4'h1
			parameter_string_t LINK_CAP_MAX_LINK_WIDTH, // Default: 6'h08
			parameter_string_t LINK_CAP_RSVD_23, // Default: 0
			parameter_enum_t LINK_CAP_SURPRISE_DOWN_ERROR_CAPABLE, // Default: "FALSE"
			parameter_string_t LINK_CONTROL_RCB, // Default: 0
			parameter_enum_t LINK_CTRL2_DEEMPHASIS, // Default: "FALSE"
			parameter_enum_t LINK_CTRL2_HW_AUTONOMOUS_SPEED_DISABLE, // Default: "FALSE"
			parameter_string_t LINK_CTRL2_TARGET_LINK_SPEED, // Default: 4'h2
			parameter_enum_t LINK_STATUS_SLOT_CLOCK_CONFIG, // Default: "TRUE"
			parameter_string_t LL_ACK_TIMEOUT, // Default: 15'h0000
			parameter_enum_t LL_ACK_TIMEOUT_EN, // Default: "FALSE"
			parameter_string_t LL_ACK_TIMEOUT_FUNC, // Default: 0
			parameter_string_t LL_REPLAY_TIMEOUT, // Default: 15'h0000
			parameter_enum_t LL_REPLAY_TIMEOUT_EN, // Default: "FALSE"
			parameter_string_t LL_REPLAY_TIMEOUT_FUNC, // Default: 0
			parameter_string_t LTSSM_MAX_LINK_WIDTH, // Default: 6'h01
			parameter_enum_t MPS_FORCE, // Default: "FALSE"
			parameter_string_t MSIX_BASE_PTR, // Default: 8'h9C
			parameter_string_t MSIX_CAP_ID, // Default: 8'h11
			parameter_string_t MSIX_CAP_NEXTPTR, // Default: 8'h00
			parameter_enum_t MSIX_CAP_ON, // Default: "FALSE"
			parameter_string_t MSIX_CAP_PBA_BIR, // Default: 0
			parameter_string_t MSIX_CAP_PBA_OFFSET, // Default: 29'h00000050
			parameter_string_t MSIX_CAP_TABLE_BIR, // Default: 0
			parameter_string_t MSIX_CAP_TABLE_OFFSET, // Default: 29'h00000040
			parameter_string_t MSIX_CAP_TABLE_SIZE, // Default: 11'h000
			parameter_string_t MSI_BASE_PTR, // Default: 8'h48
			parameter_enum_t MSI_CAP_64_BIT_ADDR_CAPABLE, // Default: "TRUE"
			parameter_string_t MSI_CAP_ID, // Default: 8'h05
			parameter_string_t MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_string_t MSI_CAP_MULTIMSG_EXTENSION, // Default: 0
			parameter_string_t MSI_CAP_NEXTPTR, // Default: 8'h60
			parameter_enum_t MSI_CAP_ON, // Default: "FALSE"
			parameter_enum_t MSI_CAP_PER_VECTOR_MASKING_CAPABLE, // Default: "TRUE"
			parameter_string_t N_FTS_COMCLK_GEN1, // Default: 255
			parameter_string_t N_FTS_COMCLK_GEN2, // Default: 255
			parameter_string_t N_FTS_GEN1, // Default: 255
			parameter_string_t N_FTS_GEN2, // Default: 255
			parameter_string_t PCIE_BASE_PTR, // Default: 8'h60
			parameter_string_t PCIE_CAP_CAPABILITY_ID, // Default: 8'h10
			parameter_string_t PCIE_CAP_CAPABILITY_VERSION, // Default: 4'h2
			parameter_string_t PCIE_CAP_DEVICE_PORT_TYPE, // Default: 4'h0
			parameter_string_t PCIE_CAP_NEXTPTR, // Default: 8'h9C
			parameter_enum_t PCIE_CAP_ON, // Default: "TRUE"
			parameter_string_t PCIE_CAP_RSVD_15_14, // Default: 0
			parameter_enum_t PCIE_CAP_SLOT_IMPLEMENTED, // Default: "FALSE"
			parameter_string_t PCIE_REVISION, // Default: 2
			parameter_string_t PL_AUTO_CONFIG, // Default: 0
			parameter_enum_t PL_FAST_TRAIN, // Default: "FALSE"
			parameter_string_t PM_ASPML0S_TIMEOUT, // Default: 15'h0000
			parameter_enum_t PM_ASPML0S_TIMEOUT_EN, // Default: "FALSE"
			parameter_string_t PM_ASPML0S_TIMEOUT_FUNC, // Default: 0
			parameter_enum_t PM_ASPM_FASTEXIT, // Default: "FALSE"
			parameter_string_t PM_BASE_PTR, // Default: 8'h40
			parameter_string_t PM_CAP_AUXCURRENT, // Default: 0
			parameter_enum_t PM_CAP_D1SUPPORT, // Default: "TRUE"
			parameter_enum_t PM_CAP_D2SUPPORT, // Default: "TRUE"
			parameter_enum_t PM_CAP_DSI, // Default: "FALSE"
			parameter_string_t PM_CAP_ID, // Default: 8'h01
			parameter_string_t PM_CAP_NEXTPTR, // Default: 8'h48
			parameter_enum_t PM_CAP_ON, // Default: "TRUE"
			parameter_string_t PM_CAP_PMESUPPORT, // Default: 5'h0F
			parameter_enum_t PM_CAP_PME_CLOCK, // Default: "FALSE"
			parameter_string_t PM_CAP_RSVD_04, // Default: 0
			parameter_string_t PM_CAP_VERSION, // Default: 3
			parameter_enum_t PM_CSR_B2B3, // Default: "FALSE"
			parameter_enum_t PM_CSR_BPCCEN, // Default: "FALSE"
			parameter_enum_t PM_CSR_NOSOFTRST, // Default: "TRUE"
			parameter_string_t PM_DATA0, // Default: 8'h01
			parameter_string_t PM_DATA1, // Default: 8'h01
			parameter_string_t PM_DATA2, // Default: 8'h01
			parameter_string_t PM_DATA3, // Default: 8'h01
			parameter_string_t PM_DATA4, // Default: 8'h01
			parameter_string_t PM_DATA5, // Default: 8'h01
			parameter_string_t PM_DATA6, // Default: 8'h01
			parameter_string_t PM_DATA7, // Default: 8'h01
			parameter_string_t PM_DATA_SCALE0, // Default: 2'h1
			parameter_string_t PM_DATA_SCALE1, // Default: 2'h1
			parameter_string_t PM_DATA_SCALE2, // Default: 2'h1
			parameter_string_t PM_DATA_SCALE3, // Default: 2'h1
			parameter_string_t PM_DATA_SCALE4, // Default: 2'h1
			parameter_string_t PM_DATA_SCALE5, // Default: 2'h1
			parameter_string_t PM_DATA_SCALE6, // Default: 2'h1
			parameter_string_t PM_DATA_SCALE7, // Default: 2'h1
			parameter_enum_t PM_MF, // Default: "FALSE"
			parameter_string_t RBAR_BASE_PTR, // Default: 12'h178
			parameter_string_t RBAR_CAP_CONTROL_ENCODEDBAR0, // Default: 5'h00
			parameter_string_t RBAR_CAP_CONTROL_ENCODEDBAR1, // Default: 5'h00
			parameter_string_t RBAR_CAP_CONTROL_ENCODEDBAR2, // Default: 5'h00
			parameter_string_t RBAR_CAP_CONTROL_ENCODEDBAR3, // Default: 5'h00
			parameter_string_t RBAR_CAP_CONTROL_ENCODEDBAR4, // Default: 5'h00
			parameter_string_t RBAR_CAP_CONTROL_ENCODEDBAR5, // Default: 5'h00
			parameter_string_t RBAR_CAP_ID, // Default: 16'h0015
			parameter_string_t RBAR_CAP_INDEX0, // Default: 3'h0
			parameter_string_t RBAR_CAP_INDEX1, // Default: 3'h0
			parameter_string_t RBAR_CAP_INDEX2, // Default: 3'h0
			parameter_string_t RBAR_CAP_INDEX3, // Default: 3'h0
			parameter_string_t RBAR_CAP_INDEX4, // Default: 3'h0
			parameter_string_t RBAR_CAP_INDEX5, // Default: 3'h0
			parameter_string_t RBAR_CAP_NEXTPTR, // Default: 12'h000
			parameter_enum_t RBAR_CAP_ON, // Default: "FALSE"
			parameter_string_t RBAR_CAP_SUP0, // Default: 32'h00000000
			parameter_string_t RBAR_CAP_SUP1, // Default: 32'h00000000
			parameter_string_t RBAR_CAP_SUP2, // Default: 32'h00000000
			parameter_string_t RBAR_CAP_SUP3, // Default: 32'h00000000
			parameter_string_t RBAR_CAP_SUP4, // Default: 32'h00000000
			parameter_string_t RBAR_CAP_SUP5, // Default: 32'h00000000
			parameter_string_t RBAR_CAP_VERSION, // Default: 4'h1
			parameter_string_t RBAR_NUM, // Default: 3'h1
			parameter_string_t RECRC_CHK, // Default: 0
			parameter_enum_t RECRC_CHK_TRIM, // Default: "FALSE"
			parameter_enum_t ROOT_CAP_CRS_SW_VISIBILITY, // Default: "FALSE"
			parameter_string_t RP_AUTO_SPD, // Default: 2'h1
			parameter_string_t RP_AUTO_SPD_LOOPCNT, // Default: 5'h1F
			parameter_enum_t SELECT_DLL_IF, // Default: "FALSE"
			parameter_string_t SIM_VERSION, // Default: "1.0"
			parameter_enum_t SLOT_CAP_ATT_BUTTON_PRESENT, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_ATT_INDICATOR_PRESENT, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_ELEC_INTERLOCK_PRESENT, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_HOTPLUG_CAPABLE, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_HOTPLUG_SURPRISE, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_MRL_SENSOR_PRESENT, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_NO_CMD_COMPLETED_SUPPORT, // Default: "FALSE"
			parameter_string_t SLOT_CAP_PHYSICAL_SLOT_NUM, // Default: 13'h0000
			parameter_enum_t SLOT_CAP_POWER_CONTROLLER_PRESENT, // Default: "FALSE"
			parameter_enum_t SLOT_CAP_POWER_INDICATOR_PRESENT, // Default: "FALSE"
			parameter_string_t SLOT_CAP_SLOT_POWER_LIMIT_SCALE, // Default: 0
			parameter_string_t SLOT_CAP_SLOT_POWER_LIMIT_VALUE, // Default: 8'h00
			parameter_string_t SPARE_BIT0, // Default: 0
			parameter_string_t SPARE_BIT1, // Default: 0
			parameter_string_t SPARE_BIT2, // Default: 0
			parameter_string_t SPARE_BIT3, // Default: 0
			parameter_string_t SPARE_BIT4, // Default: 0
			parameter_string_t SPARE_BIT5, // Default: 0
			parameter_string_t SPARE_BIT6, // Default: 0
			parameter_string_t SPARE_BIT7, // Default: 0
			parameter_string_t SPARE_BIT8, // Default: 0
			parameter_string_t SPARE_BYTE0, // Default: 8'h00
			parameter_string_t SPARE_BYTE1, // Default: 8'h00
			parameter_string_t SPARE_BYTE2, // Default: 8'h00
			parameter_string_t SPARE_BYTE3, // Default: 8'h00
			parameter_string_t SPARE_WORD0, // Default: 32'h00000000
			parameter_string_t SPARE_WORD1, // Default: 32'h00000000
			parameter_string_t SPARE_WORD2, // Default: 32'h00000000
			parameter_string_t SPARE_WORD3, // Default: 32'h00000000
			parameter_enum_t SSL_MESSAGE_AUTO, // Default: "FALSE"
			parameter_enum_t TECRC_EP_INV, // Default: "FALSE"
			parameter_enum_t TL_RBYPASS, // Default: "FALSE"
			parameter_string_t TL_RX_RAM_RADDR_LATENCY, // Default: 0
			parameter_string_t TL_RX_RAM_RDATA_LATENCY, // Default: 2
			parameter_string_t TL_RX_RAM_WRITE_LATENCY, // Default: 0
			parameter_enum_t TL_TFC_DISABLE, // Default: "FALSE"
			parameter_enum_t TL_TX_CHECKS_DISABLE, // Default: "FALSE"
			parameter_string_t TL_TX_RAM_RADDR_LATENCY, // Default: 0
			parameter_string_t TL_TX_RAM_RDATA_LATENCY, // Default: 2
			parameter_string_t TL_TX_RAM_WRITE_LATENCY, // Default: 0
			parameter_enum_t TRN_DW, // Default: "FALSE"
			parameter_enum_t TRN_NP_FC, // Default: "FALSE"
			parameter_enum_t UPCONFIG_CAPABLE, // Default: "TRUE"
			parameter_enum_t UPSTREAM_FACING, // Default: "TRUE"
			parameter_enum_t UR_ATOMIC, // Default: "TRUE"
			parameter_enum_t UR_CFG1, // Default: "TRUE"
			parameter_enum_t UR_INV_REQ, // Default: "TRUE"
			parameter_enum_t UR_PRS_RESPONSE, // Default: "TRUE"
			parameter_enum_t USER_CLK2_DIV2, // Default: "FALSE"
			parameter_string_t USER_CLK_FREQ, // Default: 3
			parameter_enum_t USE_RID_PINS, // Default: "FALSE"
			parameter_enum_t VC0_CPL_INFINITE, // Default: "TRUE"
			parameter_string_t VC0_RX_RAM_LIMIT, // Default: 13'h03FF
			parameter_string_t VC0_TOTAL_CREDITS_CD, // Default: 127
			parameter_string_t VC0_TOTAL_CREDITS_CH, // Default: 31
			parameter_string_t VC0_TOTAL_CREDITS_NPD, // Default: 24
			parameter_string_t VC0_TOTAL_CREDITS_NPH, // Default: 12
			parameter_string_t VC0_TOTAL_CREDITS_PD, // Default: 288
			parameter_string_t VC0_TOTAL_CREDITS_PH, // Default: 32
			parameter_string_t VC0_TX_LASTPACKET, // Default: 31
			parameter_string_t VC_BASE_PTR, // Default: 12'h10C
			parameter_string_t VC_CAP_ID, // Default: 16'h0002
			parameter_string_t VC_CAP_NEXTPTR, // Default: 12'h000
			parameter_enum_t VC_CAP_ON, // Default: "FALSE"
			parameter_enum_t VC_CAP_REJECT_SNOOP_TRANSACTIONS, // Default: "FALSE"
			parameter_string_t VC_CAP_VERSION, // Default: 4'h1
			parameter_string_t VSEC_BASE_PTR, // Default: 12'h128
			parameter_string_t VSEC_CAP_HDR_ID, // Default: 16'h1234
			parameter_string_t VSEC_CAP_HDR_LENGTH, // Default: 12'h018
			parameter_string_t VSEC_CAP_HDR_REVISION, // Default: 4'h1
			parameter_string_t VSEC_CAP_ID, // Default: 16'h000B
			parameter_enum_t VSEC_CAP_IS_LINK_VISIBLE, // Default: "TRUE"
			parameter_string_t VSEC_CAP_NEXTPTR, // Default: 12'h140
			parameter_enum_t VSEC_CAP_ON, // Default: "FALSE"
			parameter_string_t VSEC_CAP_VERSION, // Default: 4'h1
			//Verilog Ports in definition order:
			NetFlow* CFGAERECRCCHECKEN, // net ID: CFGAERECRCCHECKEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGAERECRCGENEN, // net ID: CFGAERECRCGENEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGAERROOTERRCORRERRRECEIVED, // net ID: CFGAERROOTERRCORRERRRECEIVED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGAERROOTERRCORRERRREPORTINGEN, // net ID: CFGAERROOTERRCORRERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGAERROOTERRFATALERRRECEIVED, // net ID: CFGAERROOTERRFATALERRRECEIVED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGAERROOTERRFATALERRREPORTINGEN, // net ID: CFGAERROOTERRFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGAERROOTERRNONFATALERRRECEIVED, // net ID: CFGAERROOTERRNONFATALERRRECEIVED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGAERROOTERRNONFATALERRREPORTINGEN, // net ID: CFGAERROOTERRNONFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGBRIDGESERREN, // net ID: CFGBRIDGESERREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCOMMANDBUSMASTERENABLE, // net ID: CFGCOMMANDBUSMASTERENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCOMMANDINTERRUPTDISABLE, // net ID: CFGCOMMANDINTERRUPTDISABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCOMMANDIOENABLE, // net ID: CFGCOMMANDIOENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCOMMANDMEMENABLE, // net ID: CFGCOMMANDMEMENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCOMMANDSERREN, // net ID: CFGCOMMANDSERREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROL2ARIFORWARDEN, // net ID: CFGDEVCONTROL2ARIFORWARDEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROL2ATOMICEGRESSBLOCK, // net ID: CFGDEVCONTROL2ATOMICEGRESSBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROL2ATOMICREQUESTEREN, // net ID: CFGDEVCONTROL2ATOMICREQUESTEREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROL2CPLTIMEOUTDIS, // net ID: CFGDEVCONTROL2CPLTIMEOUTDIS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROL2CPLTIMEOUTVAL, // net ID: CFGDEVCONTROL2CPLTIMEOUTVAL lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROL2IDOCPLEN, // net ID: CFGDEVCONTROL2IDOCPLEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROL2IDOREQEN, // net ID: CFGDEVCONTROL2IDOREQEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROL2LTREN, // net ID: CFGDEVCONTROL2LTREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROL2TLPPREFIXBLOCK, // net ID: CFGDEVCONTROL2TLPPREFIXBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLAUXPOWEREN, // net ID: CFGDEVCONTROLAUXPOWEREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLCORRERRREPORTINGEN, // net ID: CFGDEVCONTROLCORRERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLENABLERO, // net ID: CFGDEVCONTROLENABLERO lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLEXTTAGEN, // net ID: CFGDEVCONTROLEXTTAGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLFATALERRREPORTINGEN, // net ID: CFGDEVCONTROLFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLMAXPAYLOAD, // net ID: CFGDEVCONTROLMAXPAYLOAD lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLMAXREADREQ, // net ID: CFGDEVCONTROLMAXREADREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLNONFATALREPORTINGEN, // net ID: CFGDEVCONTROLNONFATALREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLNOSNOOPEN, // net ID: CFGDEVCONTROLNOSNOOPEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLPHANTOMEN, // net ID: CFGDEVCONTROLPHANTOMEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVCONTROLURERRREPORTINGEN, // net ID: CFGDEVCONTROLURERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVSTATUSCORRERRDETECTED, // net ID: CFGDEVSTATUSCORRERRDETECTED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVSTATUSFATALERRDETECTED, // net ID: CFGDEVSTATUSFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVSTATUSNONFATALERRDETECTED, // net ID: CFGDEVSTATUSNONFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDEVSTATUSURDETECTED, // net ID: CFGDEVSTATUSURDETECTED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGERRAERHEADERLOGSETN, // net ID: CFGERRAERHEADERLOGSETN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGERRCPLRDYN, // net ID: CFGERRCPLRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTDO, // net ID: CFGINTERRUPTDO lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMMENABLE, // net ID: CFGINTERRUPTMMENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIENABLE, // net ID: CFGINTERRUPTMSIENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIXENABLE, // net ID: CFGINTERRUPTMSIXENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIXFM, // net ID: CFGINTERRUPTMSIXFM lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTRDYN, // net ID: CFGINTERRUPTRDYN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLASPMCONTROL, // net ID: CFGLINKCONTROLASPMCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLAUTOBANDWIDTHINTEN, // net ID: CFGLINKCONTROLAUTOBANDWIDTHINTEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLBANDWIDTHINTEN, // net ID: CFGLINKCONTROLBANDWIDTHINTEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLCLOCKPMEN, // net ID: CFGLINKCONTROLCLOCKPMEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLCOMMONCLOCK, // net ID: CFGLINKCONTROLCOMMONCLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLEXTENDEDSYNC, // net ID: CFGLINKCONTROLEXTENDEDSYNC lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLHWAUTOWIDTHDIS, // net ID: CFGLINKCONTROLHWAUTOWIDTHDIS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLLINKDISABLE, // net ID: CFGLINKCONTROLLINKDISABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLRCB, // net ID: CFGLINKCONTROLRCB lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKCONTROLRETRAINLINK, // net ID: CFGLINKCONTROLRETRAINLINK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKSTATUSAUTOBANDWIDTHSTATUS, // net ID: CFGLINKSTATUSAUTOBANDWIDTHSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKSTATUSBANDWIDTHSTATUS, // net ID: CFGLINKSTATUSBANDWIDTHSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKSTATUSCURRENTSPEED, // net ID: CFGLINKSTATUSCURRENTSPEED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKSTATUSDLLACTIVE, // net ID: CFGLINKSTATUSDLLACTIVE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKSTATUSLINKTRAINING, // net ID: CFGLINKSTATUSLINKTRAINING lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKSTATUSNEGOTIATEDWIDTH, // net ID: CFGLINKSTATUSNEGOTIATEDWIDTH lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMGMTDO, // net ID: CFGMGMTDO lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMGMTRDWRDONEN, // net ID: CFGMGMTRDWRDONEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGDATA, // net ID: CFGMSGDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVED, // net ID: CFGMSGRECEIVED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDASSERTINTA, // net ID: CFGMSGRECEIVEDASSERTINTA lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDASSERTINTB, // net ID: CFGMSGRECEIVEDASSERTINTB lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDASSERTINTC, // net ID: CFGMSGRECEIVEDASSERTINTC lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDASSERTINTD, // net ID: CFGMSGRECEIVEDASSERTINTD lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDDEASSERTINTA, // net ID: CFGMSGRECEIVEDDEASSERTINTA lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDDEASSERTINTB, // net ID: CFGMSGRECEIVEDDEASSERTINTB lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDDEASSERTINTC, // net ID: CFGMSGRECEIVEDDEASSERTINTC lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDDEASSERTINTD, // net ID: CFGMSGRECEIVEDDEASSERTINTD lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDERRCOR, // net ID: CFGMSGRECEIVEDERRCOR lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDERRFATAL, // net ID: CFGMSGRECEIVEDERRFATAL lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDERRNONFATAL, // net ID: CFGMSGRECEIVEDERRNONFATAL lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDPMASNAK, // net ID: CFGMSGRECEIVEDPMASNAK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDPMETO, // net ID: CFGMSGRECEIVEDPMETO lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDPMETOACK, // net ID: CFGMSGRECEIVEDPMETOACK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDPMPME, // net ID: CFGMSGRECEIVEDPMPME lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDSETSLOTPOWERLIMIT, // net ID: CFGMSGRECEIVEDSETSLOTPOWERLIMIT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDUNLOCK, // net ID: CFGMSGRECEIVEDUNLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPCIELINKSTATE, // net ID: CFGPCIELINKSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPMCSRPMEEN, // net ID: CFGPMCSRPMEEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPMCSRPMESTATUS, // net ID: CFGPMCSRPMESTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPMCSRPOWERSTATE, // net ID: CFGPMCSRPOWERSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPMRCVASREQL1N, // net ID: CFGPMRCVASREQL1N lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPMRCVENTERL1N, // net ID: CFGPMRCVENTERL1N lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPMRCVENTERL23N, // net ID: CFGPMRCVENTERL23N lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPMRCVREQACKN, // net ID: CFGPMRCVREQACKN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGROOTCONTROLPMEINTEN, // net ID: CFGROOTCONTROLPMEINTEN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGROOTCONTROLSYSERRCORRERREN, // net ID: CFGROOTCONTROLSYSERRCORRERREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGROOTCONTROLSYSERRFATALERREN, // net ID: CFGROOTCONTROLSYSERRFATALERREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGROOTCONTROLSYSERRNONFATALERREN, // net ID: CFGROOTCONTROLSYSERRNONFATALERREN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGSLOTCONTROLELECTROMECHILCTLPULSE, // net ID: CFGSLOTCONTROLELECTROMECHILCTLPULSE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTRANSACTION, // net ID: CFGTRANSACTION lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTRANSACTIONADDR, // net ID: CFGTRANSACTIONADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTRANSACTIONTYPE, // net ID: CFGTRANSACTIONTYPE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGVCTCVCMAP, // net ID: CFGVCTCVCMAP lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRA, // net ID: DBGSCLRA lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRB, // net ID: DBGSCLRB lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRC, // net ID: DBGSCLRC lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRD, // net ID: DBGSCLRD lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRE, // net ID: DBGSCLRE lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRF, // net ID: DBGSCLRF lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRG, // net ID: DBGSCLRG lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRH, // net ID: DBGSCLRH lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRI, // net ID: DBGSCLRI lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRJ, // net ID: DBGSCLRJ lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGSCLRK, // net ID: DBGSCLRK lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGVECA, // net ID: DBGVECA lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGVECB, // net ID: DBGVECB lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGVECC, // net ID: DBGVECC lsb: 0  msb: 0 OUTPUT
			NetFlow* DRPDO, // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			NetFlow* DRPRDY, // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2BADDLLPERR, // net ID: LL2BADDLLPERR lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2BADTLPERR, // net ID: LL2BADTLPERR lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2LINKSTATUS, // net ID: LL2LINKSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2PROTOCOLERR, // net ID: LL2PROTOCOLERR lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2RECEIVERERR, // net ID: LL2RECEIVERERR lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2REPLAYROERR, // net ID: LL2REPLAYROERR lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2REPLAYTOERR, // net ID: LL2REPLAYTOERR lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2SUSPENDOK, // net ID: LL2SUSPENDOK lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2TFCINIT1SEQ, // net ID: LL2TFCINIT1SEQ lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2TFCINIT2SEQ, // net ID: LL2TFCINIT2SEQ lsb: 0  msb: 0 OUTPUT
			NetFlow* LL2TXIDLE, // net ID: LL2TXIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* LNKCLKEN, // net ID: LNKCLKEN lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMRXRADDR, // net ID: MIMRXRADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMRXREN, // net ID: MIMRXREN lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMRXWADDR, // net ID: MIMRXWADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMRXWDATA, // net ID: MIMRXWDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMRXWEN, // net ID: MIMRXWEN lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMTXRADDR, // net ID: MIMTXRADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMTXREN, // net ID: MIMTXREN lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMTXWADDR, // net ID: MIMTXWADDR lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMTXWDATA, // net ID: MIMTXWDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* MIMTXWEN, // net ID: MIMTXWEN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX0POLARITY, // net ID: PIPERX0POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX1POLARITY, // net ID: PIPERX1POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX2POLARITY, // net ID: PIPERX2POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX3POLARITY, // net ID: PIPERX3POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX4POLARITY, // net ID: PIPERX4POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX5POLARITY, // net ID: PIPERX5POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX6POLARITY, // net ID: PIPERX6POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX7POLARITY, // net ID: PIPERX7POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0CHARISK, // net ID: PIPETX0CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0COMPLIANCE, // net ID: PIPETX0COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0DATA, // net ID: PIPETX0DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0ELECIDLE, // net ID: PIPETX0ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0POWERDOWN, // net ID: PIPETX0POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1CHARISK, // net ID: PIPETX1CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1COMPLIANCE, // net ID: PIPETX1COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1DATA, // net ID: PIPETX1DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1ELECIDLE, // net ID: PIPETX1ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1POWERDOWN, // net ID: PIPETX1POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2CHARISK, // net ID: PIPETX2CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2COMPLIANCE, // net ID: PIPETX2COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2DATA, // net ID: PIPETX2DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2ELECIDLE, // net ID: PIPETX2ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2POWERDOWN, // net ID: PIPETX2POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3CHARISK, // net ID: PIPETX3CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3COMPLIANCE, // net ID: PIPETX3COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3DATA, // net ID: PIPETX3DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3ELECIDLE, // net ID: PIPETX3ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3POWERDOWN, // net ID: PIPETX3POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4CHARISK, // net ID: PIPETX4CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4COMPLIANCE, // net ID: PIPETX4COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4DATA, // net ID: PIPETX4DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4ELECIDLE, // net ID: PIPETX4ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4POWERDOWN, // net ID: PIPETX4POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5CHARISK, // net ID: PIPETX5CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5COMPLIANCE, // net ID: PIPETX5COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5DATA, // net ID: PIPETX5DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5ELECIDLE, // net ID: PIPETX5ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5POWERDOWN, // net ID: PIPETX5POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6CHARISK, // net ID: PIPETX6CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6COMPLIANCE, // net ID: PIPETX6COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6DATA, // net ID: PIPETX6DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6ELECIDLE, // net ID: PIPETX6ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6POWERDOWN, // net ID: PIPETX6POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7CHARISK, // net ID: PIPETX7CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7COMPLIANCE, // net ID: PIPETX7COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7DATA, // net ID: PIPETX7DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7ELECIDLE, // net ID: PIPETX7ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7POWERDOWN, // net ID: PIPETX7POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXDEEMPH, // net ID: PIPETXDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXMARGIN, // net ID: PIPETXMARGIN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXRATE, // net ID: PIPETXRATE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXRCVRDET, // net ID: PIPETXRCVRDET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXRESET, // net ID: PIPETXRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PL2L0REQ, // net ID: PL2L0REQ lsb: 0  msb: 0 OUTPUT
			NetFlow* PL2LINKUP, // net ID: PL2LINKUP lsb: 0  msb: 0 OUTPUT
			NetFlow* PL2RECEIVERERR, // net ID: PL2RECEIVERERR lsb: 0  msb: 0 OUTPUT
			NetFlow* PL2RECOVERY, // net ID: PL2RECOVERY lsb: 0  msb: 0 OUTPUT
			NetFlow* PL2RXELECIDLE, // net ID: PL2RXELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PL2RXPMSTATE, // net ID: PL2RXPMSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* PL2SUSPENDOK, // net ID: PL2SUSPENDOK lsb: 0  msb: 0 OUTPUT
			NetFlow* PLDBGVEC, // net ID: PLDBGVEC lsb: 0  msb: 0 OUTPUT
			NetFlow* PLDIRECTEDCHANGEDONE, // net ID: PLDIRECTEDCHANGEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* PLINITIALLINKWIDTH, // net ID: PLINITIALLINKWIDTH lsb: 0  msb: 0 OUTPUT
			NetFlow* PLLANEREVERSALMODE, // net ID: PLLANEREVERSALMODE lsb: 0  msb: 0 OUTPUT
			NetFlow* PLLINKGEN2CAP, // net ID: PLLINKGEN2CAP lsb: 0  msb: 0 OUTPUT
			NetFlow* PLLINKPARTNERGEN2SUPPORTED, // net ID: PLLINKPARTNERGEN2SUPPORTED lsb: 0  msb: 0 OUTPUT
			NetFlow* PLLINKUPCFGCAP, // net ID: PLLINKUPCFGCAP lsb: 0  msb: 0 OUTPUT
			NetFlow* PLLTSSMSTATE, // net ID: PLLTSSMSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* PLPHYLNKUPN, // net ID: PLPHYLNKUPN lsb: 0  msb: 0 OUTPUT
			NetFlow* PLRECEIVEDHOTRST, // net ID: PLRECEIVEDHOTRST lsb: 0  msb: 0 OUTPUT
			NetFlow* PLRXPMSTATE, // net ID: PLRXPMSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* PLSELLNKRATE, // net ID: PLSELLNKRATE lsb: 0  msb: 0 OUTPUT
			NetFlow* PLSELLNKWIDTH, // net ID: PLSELLNKWIDTH lsb: 0  msb: 0 OUTPUT
			NetFlow* PLTXPMSTATE, // net ID: PLTXPMSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* RECEIVEDFUNCLVLRSTN, // net ID: RECEIVEDFUNCLVLRSTN lsb: 0  msb: 0 OUTPUT
			NetFlow* TL2ASPMSUSPENDCREDITCHECKOK, // net ID: TL2ASPMSUSPENDCREDITCHECKOK lsb: 0  msb: 0 OUTPUT
			NetFlow* TL2ASPMSUSPENDREQ, // net ID: TL2ASPMSUSPENDREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* TL2ERRFCPE, // net ID: TL2ERRFCPE lsb: 0  msb: 0 OUTPUT
			NetFlow* TL2ERRHDR, // net ID: TL2ERRHDR lsb: 0  msb: 0 OUTPUT
			NetFlow* TL2ERRMALFORMED, // net ID: TL2ERRMALFORMED lsb: 0  msb: 0 OUTPUT
			NetFlow* TL2ERRRXOVERFLOW, // net ID: TL2ERRRXOVERFLOW lsb: 0  msb: 0 OUTPUT
			NetFlow* TL2PPMSUSPENDOK, // net ID: TL2PPMSUSPENDOK lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNFCCPLD, // net ID: TRNFCCPLD lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNFCCPLH, // net ID: TRNFCCPLH lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNFCNPD, // net ID: TRNFCNPD lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNFCNPH, // net ID: TRNFCNPH lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNFCPD, // net ID: TRNFCPD lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNFCPH, // net ID: TRNFCPH lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNLNKUP, // net ID: TRNLNKUP lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRBARHIT, // net ID: TRNRBARHIT lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRD, // net ID: TRNRD lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRDLLPDATA, // net ID: TRNRDLLPDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRDLLPSRCRDY, // net ID: TRNRDLLPSRCRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRECRCERR, // net ID: TRNRECRCERR lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNREOF, // net ID: TRNREOF lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRERRFWD, // net ID: TRNRERRFWD lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRREM, // net ID: TRNRREM lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRSOF, // net ID: TRNRSOF lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRSRCDSC, // net ID: TRNRSRCDSC lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNRSRCRDY, // net ID: TRNRSRCRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNTBUFAV, // net ID: TRNTBUFAV lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNTCFGREQ, // net ID: TRNTCFGREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNTDLLPDSTRDY, // net ID: TRNTDLLPDSTRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNTDSTRDY, // net ID: TRNTDSTRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* TRNTERRDROP, // net ID: TRNTERRDROP lsb: 0  msb: 0 OUTPUT
			NetFlow* USERRSTN, // net ID: USERRSTN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGAERINTERRUPTMSGNUM, // net ID: CFGAERINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			NetFlow* CFGDEVID, // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			NetFlow* CFGDSBUSNUMBER, // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGDSDEVICENUMBER, // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
			NetFlow* CFGDSFUNCTIONNUMBER, // net ID: CFGDSFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			NetFlow* CFGDSN, // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			NetFlow* CFGERRACSN, // net ID: CFGERRACSN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRAERHEADERLOG, // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			NetFlow* CFGERRATOMICEGRESSBLOCKEDN, // net ID: CFGERRATOMICEGRESSBLOCKEDN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRCORN, // net ID: CFGERRCORN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRCPLABORTN, // net ID: CFGERRCPLABORTN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRCPLTIMEOUTN, // net ID: CFGERRCPLTIMEOUTN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRCPLUNEXPECTN, // net ID: CFGERRCPLUNEXPECTN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRECRCN, // net ID: CFGERRECRCN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRINTERNALCORN, // net ID: CFGERRINTERNALCORN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRINTERNALUNCORN, // net ID: CFGERRINTERNALUNCORN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRLOCKEDN, // net ID: CFGERRLOCKEDN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRMALFORMEDN, // net ID: CFGERRMALFORMEDN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRMCBLOCKEDN, // net ID: CFGERRMCBLOCKEDN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRNORECOVERYN, // net ID: CFGERRNORECOVERYN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRPOISONEDN, // net ID: CFGERRPOISONEDN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRPOSTEDN, // net ID: CFGERRPOSTEDN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRTLPCPLHEADER, // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			NetFlow* CFGERRURN, // net ID: CFGERRURN lsb: 0  msb: 0 INPUT
			NetFlow* CFGFORCECOMMONCLOCKOFF, // net ID: CFGFORCECOMMONCLOCKOFF lsb: 0  msb: 0 INPUT
			NetFlow* CFGFORCEEXTENDEDSYNCON, // net ID: CFGFORCEEXTENDEDSYNCON lsb: 0  msb: 0 INPUT
			NetFlow* CFGFORCEMPS, // net ID: CFGFORCEMPS lsb: 0  msb: 2 INPUT
			NetFlow* CFGINTERRUPTASSERTN, // net ID: CFGINTERRUPTASSERTN lsb: 0  msb: 0 INPUT
			NetFlow* CFGINTERRUPTDI, // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			NetFlow* CFGINTERRUPTN, // net ID: CFGINTERRUPTN lsb: 0  msb: 0 INPUT
			NetFlow* CFGINTERRUPTSTATN, // net ID: CFGINTERRUPTSTATN lsb: 0  msb: 0 INPUT
			NetFlow* CFGMGMTBYTEENN, // net ID: CFGMGMTBYTEENN lsb: 0  msb: 3 INPUT
			NetFlow* CFGMGMTDI, // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTDWADDR, // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			NetFlow* CFGMGMTRDENN, // net ID: CFGMGMTRDENN lsb: 0  msb: 0 INPUT
			NetFlow* CFGMGMTWRENN, // net ID: CFGMGMTWRENN lsb: 0  msb: 0 INPUT
			NetFlow* CFGMGMTWRREADONLYN, // net ID: CFGMGMTWRREADONLYN lsb: 0  msb: 0 INPUT
			NetFlow* CFGMGMTWRRW1CASRWN, // net ID: CFGMGMTWRRW1CASRWN lsb: 0  msb: 0 INPUT
			NetFlow* CFGPCIECAPINTERRUPTMSGNUM, // net ID: CFGPCIECAPINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			NetFlow* CFGPMFORCESTATE, // net ID: CFGPMFORCESTATE lsb: 0  msb: 1 INPUT
			NetFlow* CFGPMFORCESTATEENN, // net ID: CFGPMFORCESTATEENN lsb: 0  msb: 0 INPUT
			NetFlow* CFGPMHALTASPML0SN, // net ID: CFGPMHALTASPML0SN lsb: 0  msb: 0 INPUT
			NetFlow* CFGPMHALTASPML1N, // net ID: CFGPMHALTASPML1N lsb: 0  msb: 0 INPUT
			NetFlow* CFGPMSENDPMETON, // net ID: CFGPMSENDPMETON lsb: 0  msb: 0 INPUT
			NetFlow* CFGPMTURNOFFOKN, // net ID: CFGPMTURNOFFOKN lsb: 0  msb: 0 INPUT
			NetFlow* CFGPMWAKEN, // net ID: CFGPMWAKEN lsb: 0  msb: 0 INPUT
			NetFlow* CFGPORTNUMBER, // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGREVID, // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			NetFlow* CFGSUBSYSID, // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			NetFlow* CFGSUBSYSVENDID, // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CFGTRNPENDINGN, // net ID: CFGTRNPENDINGN lsb: 0  msb: 0 INPUT
			NetFlow* CFGVENDID, // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			NetFlow* CMRSTN, // net ID: CMRSTN lsb: 0  msb: 0 INPUT
			NetFlow* CMSTICKYRSTN, // net ID: CMSTICKYRSTN lsb: 0  msb: 0 INPUT
			NetFlow* DBGMODE, // net ID: DBGMODE lsb: 0  msb: 1 INPUT
			NetFlow* DBGSUBMODE, // net ID: DBGSUBMODE lsb: 0  msb: 0 INPUT
			NetFlow* DLRSTN, // net ID: DLRSTN lsb: 0  msb: 0 INPUT
			NetFlow* DRPADDR, // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			NetFlow* DRPCLK, // net ID: DRPCLK lsb: 0  msb: 0 INPUT
			NetFlow* DRPDI, // net ID: DRPDI lsb: 0  msb: 15 INPUT
			NetFlow* DRPEN, // net ID: DRPEN lsb: 0  msb: 0 INPUT
			NetFlow* DRPWE, // net ID: DRPWE lsb: 0  msb: 0 INPUT
			NetFlow* FUNCLVLRSTN, // net ID: FUNCLVLRSTN lsb: 0  msb: 0 INPUT
			NetFlow* LL2SENDASREQL1, // net ID: LL2SENDASREQL1 lsb: 0  msb: 0 INPUT
			NetFlow* LL2SENDENTERL1, // net ID: LL2SENDENTERL1 lsb: 0  msb: 0 INPUT
			NetFlow* LL2SENDENTERL23, // net ID: LL2SENDENTERL23 lsb: 0  msb: 0 INPUT
			NetFlow* LL2SENDPMACK, // net ID: LL2SENDPMACK lsb: 0  msb: 0 INPUT
			NetFlow* LL2SUSPENDNOW, // net ID: LL2SUSPENDNOW lsb: 0  msb: 0 INPUT
			NetFlow* LL2TLPRCV, // net ID: LL2TLPRCV lsb: 0  msb: 0 INPUT
			NetFlow* MIMRXRDATA, // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			NetFlow* MIMTXRDATA, // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			NetFlow* PIPECLK, // net ID: PIPECLK lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0CHANISALIGNED, // net ID: PIPERX0CHANISALIGNED lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0CHARISK, // net ID: PIPERX0CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX0DATA, // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX0ELECIDLE, // net ID: PIPERX0ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0PHYSTATUS, // net ID: PIPERX0PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0STATUS, // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX0VALID, // net ID: PIPERX0VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1CHANISALIGNED, // net ID: PIPERX1CHANISALIGNED lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1CHARISK, // net ID: PIPERX1CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX1DATA, // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX1ELECIDLE, // net ID: PIPERX1ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1PHYSTATUS, // net ID: PIPERX1PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1STATUS, // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX1VALID, // net ID: PIPERX1VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2CHANISALIGNED, // net ID: PIPERX2CHANISALIGNED lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2CHARISK, // net ID: PIPERX2CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX2DATA, // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX2ELECIDLE, // net ID: PIPERX2ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2PHYSTATUS, // net ID: PIPERX2PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2STATUS, // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX2VALID, // net ID: PIPERX2VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3CHANISALIGNED, // net ID: PIPERX3CHANISALIGNED lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3CHARISK, // net ID: PIPERX3CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX3DATA, // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX3ELECIDLE, // net ID: PIPERX3ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3PHYSTATUS, // net ID: PIPERX3PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3STATUS, // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX3VALID, // net ID: PIPERX3VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4CHANISALIGNED, // net ID: PIPERX4CHANISALIGNED lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4CHARISK, // net ID: PIPERX4CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX4DATA, // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX4ELECIDLE, // net ID: PIPERX4ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4PHYSTATUS, // net ID: PIPERX4PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4STATUS, // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX4VALID, // net ID: PIPERX4VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5CHANISALIGNED, // net ID: PIPERX5CHANISALIGNED lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5CHARISK, // net ID: PIPERX5CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX5DATA, // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX5ELECIDLE, // net ID: PIPERX5ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5PHYSTATUS, // net ID: PIPERX5PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5STATUS, // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX5VALID, // net ID: PIPERX5VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6CHANISALIGNED, // net ID: PIPERX6CHANISALIGNED lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6CHARISK, // net ID: PIPERX6CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX6DATA, // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX6ELECIDLE, // net ID: PIPERX6ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6PHYSTATUS, // net ID: PIPERX6PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6STATUS, // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX6VALID, // net ID: PIPERX6VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7CHANISALIGNED, // net ID: PIPERX7CHANISALIGNED lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7CHARISK, // net ID: PIPERX7CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX7DATA, // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			NetFlow* PIPERX7ELECIDLE, // net ID: PIPERX7ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7PHYSTATUS, // net ID: PIPERX7PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7STATUS, // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX7VALID, // net ID: PIPERX7VALID lsb: 0  msb: 0 INPUT
			NetFlow* PL2DIRECTEDLSTATE, // net ID: PL2DIRECTEDLSTATE lsb: 0  msb: 4 INPUT
			NetFlow* PLDBGMODE, // net ID: PLDBGMODE lsb: 0  msb: 2 INPUT
			NetFlow* PLDIRECTEDLINKAUTON, // net ID: PLDIRECTEDLINKAUTON lsb: 0  msb: 0 INPUT
			NetFlow* PLDIRECTEDLINKCHANGE, // net ID: PLDIRECTEDLINKCHANGE lsb: 0  msb: 1 INPUT
			NetFlow* PLDIRECTEDLINKSPEED, // net ID: PLDIRECTEDLINKSPEED lsb: 0  msb: 0 INPUT
			NetFlow* PLDIRECTEDLINKWIDTH, // net ID: PLDIRECTEDLINKWIDTH lsb: 0  msb: 1 INPUT
			NetFlow* PLDIRECTEDLTSSMNEW, // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
			NetFlow* PLDIRECTEDLTSSMNEWVLD, // net ID: PLDIRECTEDLTSSMNEWVLD lsb: 0  msb: 0 INPUT
			NetFlow* PLDIRECTEDLTSSMSTALL, // net ID: PLDIRECTEDLTSSMSTALL lsb: 0  msb: 0 INPUT
			NetFlow* PLDOWNSTREAMDEEMPHSOURCE, // net ID: PLDOWNSTREAMDEEMPHSOURCE lsb: 0  msb: 0 INPUT
			NetFlow* PLRSTN, // net ID: PLRSTN lsb: 0  msb: 0 INPUT
			NetFlow* PLTRANSMITHOTRST, // net ID: PLTRANSMITHOTRST lsb: 0  msb: 0 INPUT
			NetFlow* PLUPSTREAMPREFERDEEMPH, // net ID: PLUPSTREAMPREFERDEEMPH lsb: 0  msb: 0 INPUT
			NetFlow* SYSRSTN, // net ID: SYSRSTN lsb: 0  msb: 0 INPUT
			NetFlow* TL2ASPMSUSPENDCREDITCHECK, // net ID: TL2ASPMSUSPENDCREDITCHECK lsb: 0  msb: 0 INPUT
			NetFlow* TL2PPMSUSPENDREQ, // net ID: TL2PPMSUSPENDREQ lsb: 0  msb: 0 INPUT
			NetFlow* TLRSTN, // net ID: TLRSTN lsb: 0  msb: 0 INPUT
			NetFlow* TRNFCSEL, // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
			NetFlow* TRNRDSTRDY, // net ID: TRNRDSTRDY lsb: 0  msb: 0 INPUT
			NetFlow* TRNRFCPRET, // net ID: TRNRFCPRET lsb: 0  msb: 0 INPUT
			NetFlow* TRNRNPOK, // net ID: TRNRNPOK lsb: 0  msb: 0 INPUT
			NetFlow* TRNRNPREQ, // net ID: TRNRNPREQ lsb: 0  msb: 0 INPUT
			NetFlow* TRNTCFGGNT, // net ID: TRNTCFGGNT lsb: 0  msb: 0 INPUT
			NetFlow* TRNTD, // net ID: TRNTD lsb: 0  msb: 127 INPUT
			NetFlow* TRNTDLLPDATA, // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			NetFlow* TRNTDLLPSRCRDY, // net ID: TRNTDLLPSRCRDY lsb: 0  msb: 0 INPUT
			NetFlow* TRNTECRCGEN, // net ID: TRNTECRCGEN lsb: 0  msb: 0 INPUT
			NetFlow* TRNTEOF, // net ID: TRNTEOF lsb: 0  msb: 0 INPUT
			NetFlow* TRNTERRFWD, // net ID: TRNTERRFWD lsb: 0  msb: 0 INPUT
			NetFlow* TRNTREM, // net ID: TRNTREM lsb: 0  msb: 1 INPUT
			NetFlow* TRNTSOF, // net ID: TRNTSOF lsb: 0  msb: 0 INPUT
			NetFlow* TRNTSRCDSC, // net ID: TRNTSRCDSC lsb: 0  msb: 0 INPUT
			NetFlow* TRNTSRCRDY, // net ID: TRNTSRCRDY lsb: 0  msb: 0 INPUT
			NetFlow* TRNTSTR, // net ID: TRNTSTR lsb: 0  msb: 0 INPUT
			NetFlow* USERCLK, // net ID: USERCLK lsb: 0  msb: 0 INPUT
			NetFlow* USERCLK2 // net ID: USERCLK2 lsb: 0  msb: 0 INPUT
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
			this->CFGAERECRCCHECKEN = CFGAERECRCCHECKEN; // net ID: CFGAERECRCCHECKEN lsb: 0  msb: 0 OUTPUT
			this->CFGAERECRCGENEN = CFGAERECRCGENEN; // net ID: CFGAERECRCGENEN lsb: 0  msb: 0 OUTPUT
			this->CFGAERROOTERRCORRERRRECEIVED = CFGAERROOTERRCORRERRRECEIVED; // net ID: CFGAERROOTERRCORRERRRECEIVED lsb: 0  msb: 0 OUTPUT
			this->CFGAERROOTERRCORRERRREPORTINGEN = CFGAERROOTERRCORRERRREPORTINGEN; // net ID: CFGAERROOTERRCORRERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGAERROOTERRFATALERRRECEIVED = CFGAERROOTERRFATALERRRECEIVED; // net ID: CFGAERROOTERRFATALERRRECEIVED lsb: 0  msb: 0 OUTPUT
			this->CFGAERROOTERRFATALERRREPORTINGEN = CFGAERROOTERRFATALERRREPORTINGEN; // net ID: CFGAERROOTERRFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGAERROOTERRNONFATALERRRECEIVED = CFGAERROOTERRNONFATALERRRECEIVED; // net ID: CFGAERROOTERRNONFATALERRRECEIVED lsb: 0  msb: 0 OUTPUT
			this->CFGAERROOTERRNONFATALERRREPORTINGEN = CFGAERROOTERRNONFATALERRREPORTINGEN; // net ID: CFGAERROOTERRNONFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGBRIDGESERREN = CFGBRIDGESERREN; // net ID: CFGBRIDGESERREN lsb: 0  msb: 0 OUTPUT
			this->CFGCOMMANDBUSMASTERENABLE = CFGCOMMANDBUSMASTERENABLE; // net ID: CFGCOMMANDBUSMASTERENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGCOMMANDINTERRUPTDISABLE = CFGCOMMANDINTERRUPTDISABLE; // net ID: CFGCOMMANDINTERRUPTDISABLE lsb: 0  msb: 0 OUTPUT
			this->CFGCOMMANDIOENABLE = CFGCOMMANDIOENABLE; // net ID: CFGCOMMANDIOENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGCOMMANDMEMENABLE = CFGCOMMANDMEMENABLE; // net ID: CFGCOMMANDMEMENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGCOMMANDSERREN = CFGCOMMANDSERREN; // net ID: CFGCOMMANDSERREN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROL2ARIFORWARDEN = CFGDEVCONTROL2ARIFORWARDEN; // net ID: CFGDEVCONTROL2ARIFORWARDEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROL2ATOMICEGRESSBLOCK = CFGDEVCONTROL2ATOMICEGRESSBLOCK; // net ID: CFGDEVCONTROL2ATOMICEGRESSBLOCK lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROL2ATOMICREQUESTEREN = CFGDEVCONTROL2ATOMICREQUESTEREN; // net ID: CFGDEVCONTROL2ATOMICREQUESTEREN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROL2CPLTIMEOUTDIS = CFGDEVCONTROL2CPLTIMEOUTDIS; // net ID: CFGDEVCONTROL2CPLTIMEOUTDIS lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROL2CPLTIMEOUTVAL = CFGDEVCONTROL2CPLTIMEOUTVAL; // net ID: CFGDEVCONTROL2CPLTIMEOUTVAL lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROL2IDOCPLEN = CFGDEVCONTROL2IDOCPLEN; // net ID: CFGDEVCONTROL2IDOCPLEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROL2IDOREQEN = CFGDEVCONTROL2IDOREQEN; // net ID: CFGDEVCONTROL2IDOREQEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROL2LTREN = CFGDEVCONTROL2LTREN; // net ID: CFGDEVCONTROL2LTREN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROL2TLPPREFIXBLOCK = CFGDEVCONTROL2TLPPREFIXBLOCK; // net ID: CFGDEVCONTROL2TLPPREFIXBLOCK lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLAUXPOWEREN = CFGDEVCONTROLAUXPOWEREN; // net ID: CFGDEVCONTROLAUXPOWEREN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLCORRERRREPORTINGEN = CFGDEVCONTROLCORRERRREPORTINGEN; // net ID: CFGDEVCONTROLCORRERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLENABLERO = CFGDEVCONTROLENABLERO; // net ID: CFGDEVCONTROLENABLERO lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLEXTTAGEN = CFGDEVCONTROLEXTTAGEN; // net ID: CFGDEVCONTROLEXTTAGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLFATALERRREPORTINGEN = CFGDEVCONTROLFATALERRREPORTINGEN; // net ID: CFGDEVCONTROLFATALERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLMAXPAYLOAD = CFGDEVCONTROLMAXPAYLOAD; // net ID: CFGDEVCONTROLMAXPAYLOAD lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLMAXREADREQ = CFGDEVCONTROLMAXREADREQ; // net ID: CFGDEVCONTROLMAXREADREQ lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLNONFATALREPORTINGEN = CFGDEVCONTROLNONFATALREPORTINGEN; // net ID: CFGDEVCONTROLNONFATALREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLNOSNOOPEN = CFGDEVCONTROLNOSNOOPEN; // net ID: CFGDEVCONTROLNOSNOOPEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLPHANTOMEN = CFGDEVCONTROLPHANTOMEN; // net ID: CFGDEVCONTROLPHANTOMEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVCONTROLURERRREPORTINGEN = CFGDEVCONTROLURERRREPORTINGEN; // net ID: CFGDEVCONTROLURERRREPORTINGEN lsb: 0  msb: 0 OUTPUT
			this->CFGDEVSTATUSCORRERRDETECTED = CFGDEVSTATUSCORRERRDETECTED; // net ID: CFGDEVSTATUSCORRERRDETECTED lsb: 0  msb: 0 OUTPUT
			this->CFGDEVSTATUSFATALERRDETECTED = CFGDEVSTATUSFATALERRDETECTED; // net ID: CFGDEVSTATUSFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
			this->CFGDEVSTATUSNONFATALERRDETECTED = CFGDEVSTATUSNONFATALERRDETECTED; // net ID: CFGDEVSTATUSNONFATALERRDETECTED lsb: 0  msb: 0 OUTPUT
			this->CFGDEVSTATUSURDETECTED = CFGDEVSTATUSURDETECTED; // net ID: CFGDEVSTATUSURDETECTED lsb: 0  msb: 0 OUTPUT
			this->CFGERRAERHEADERLOGSETN = CFGERRAERHEADERLOGSETN; // net ID: CFGERRAERHEADERLOGSETN lsb: 0  msb: 0 OUTPUT
			this->CFGERRCPLRDYN = CFGERRCPLRDYN; // net ID: CFGERRCPLRDYN lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTDO = CFGINTERRUPTDO; // net ID: CFGINTERRUPTDO lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMMENABLE = CFGINTERRUPTMMENABLE; // net ID: CFGINTERRUPTMMENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIENABLE = CFGINTERRUPTMSIENABLE; // net ID: CFGINTERRUPTMSIENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIXENABLE = CFGINTERRUPTMSIXENABLE; // net ID: CFGINTERRUPTMSIXENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIXFM = CFGINTERRUPTMSIXFM; // net ID: CFGINTERRUPTMSIXFM lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTRDYN = CFGINTERRUPTRDYN; // net ID: CFGINTERRUPTRDYN lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLASPMCONTROL = CFGLINKCONTROLASPMCONTROL; // net ID: CFGLINKCONTROLASPMCONTROL lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLAUTOBANDWIDTHINTEN = CFGLINKCONTROLAUTOBANDWIDTHINTEN; // net ID: CFGLINKCONTROLAUTOBANDWIDTHINTEN lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLBANDWIDTHINTEN = CFGLINKCONTROLBANDWIDTHINTEN; // net ID: CFGLINKCONTROLBANDWIDTHINTEN lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLCLOCKPMEN = CFGLINKCONTROLCLOCKPMEN; // net ID: CFGLINKCONTROLCLOCKPMEN lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLCOMMONCLOCK = CFGLINKCONTROLCOMMONCLOCK; // net ID: CFGLINKCONTROLCOMMONCLOCK lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLEXTENDEDSYNC = CFGLINKCONTROLEXTENDEDSYNC; // net ID: CFGLINKCONTROLEXTENDEDSYNC lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLHWAUTOWIDTHDIS = CFGLINKCONTROLHWAUTOWIDTHDIS; // net ID: CFGLINKCONTROLHWAUTOWIDTHDIS lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLLINKDISABLE = CFGLINKCONTROLLINKDISABLE; // net ID: CFGLINKCONTROLLINKDISABLE lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLRCB = CFGLINKCONTROLRCB; // net ID: CFGLINKCONTROLRCB lsb: 0  msb: 0 OUTPUT
			this->CFGLINKCONTROLRETRAINLINK = CFGLINKCONTROLRETRAINLINK; // net ID: CFGLINKCONTROLRETRAINLINK lsb: 0  msb: 0 OUTPUT
			this->CFGLINKSTATUSAUTOBANDWIDTHSTATUS = CFGLINKSTATUSAUTOBANDWIDTHSTATUS; // net ID: CFGLINKSTATUSAUTOBANDWIDTHSTATUS lsb: 0  msb: 0 OUTPUT
			this->CFGLINKSTATUSBANDWIDTHSTATUS = CFGLINKSTATUSBANDWIDTHSTATUS; // net ID: CFGLINKSTATUSBANDWIDTHSTATUS lsb: 0  msb: 0 OUTPUT
			this->CFGLINKSTATUSCURRENTSPEED = CFGLINKSTATUSCURRENTSPEED; // net ID: CFGLINKSTATUSCURRENTSPEED lsb: 0  msb: 0 OUTPUT
			this->CFGLINKSTATUSDLLACTIVE = CFGLINKSTATUSDLLACTIVE; // net ID: CFGLINKSTATUSDLLACTIVE lsb: 0  msb: 0 OUTPUT
			this->CFGLINKSTATUSLINKTRAINING = CFGLINKSTATUSLINKTRAINING; // net ID: CFGLINKSTATUSLINKTRAINING lsb: 0  msb: 0 OUTPUT
			this->CFGLINKSTATUSNEGOTIATEDWIDTH = CFGLINKSTATUSNEGOTIATEDWIDTH; // net ID: CFGLINKSTATUSNEGOTIATEDWIDTH lsb: 0  msb: 0 OUTPUT
			this->CFGMGMTDO = CFGMGMTDO; // net ID: CFGMGMTDO lsb: 0  msb: 0 OUTPUT
			this->CFGMGMTRDWRDONEN = CFGMGMTRDWRDONEN; // net ID: CFGMGMTRDWRDONEN lsb: 0  msb: 0 OUTPUT
			this->CFGMSGDATA = CFGMSGDATA; // net ID: CFGMSGDATA lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVED = CFGMSGRECEIVED; // net ID: CFGMSGRECEIVED lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDASSERTINTA = CFGMSGRECEIVEDASSERTINTA; // net ID: CFGMSGRECEIVEDASSERTINTA lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDASSERTINTB = CFGMSGRECEIVEDASSERTINTB; // net ID: CFGMSGRECEIVEDASSERTINTB lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDASSERTINTC = CFGMSGRECEIVEDASSERTINTC; // net ID: CFGMSGRECEIVEDASSERTINTC lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDASSERTINTD = CFGMSGRECEIVEDASSERTINTD; // net ID: CFGMSGRECEIVEDASSERTINTD lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDDEASSERTINTA = CFGMSGRECEIVEDDEASSERTINTA; // net ID: CFGMSGRECEIVEDDEASSERTINTA lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDDEASSERTINTB = CFGMSGRECEIVEDDEASSERTINTB; // net ID: CFGMSGRECEIVEDDEASSERTINTB lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDDEASSERTINTC = CFGMSGRECEIVEDDEASSERTINTC; // net ID: CFGMSGRECEIVEDDEASSERTINTC lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDDEASSERTINTD = CFGMSGRECEIVEDDEASSERTINTD; // net ID: CFGMSGRECEIVEDDEASSERTINTD lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDERRCOR = CFGMSGRECEIVEDERRCOR; // net ID: CFGMSGRECEIVEDERRCOR lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDERRFATAL = CFGMSGRECEIVEDERRFATAL; // net ID: CFGMSGRECEIVEDERRFATAL lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDERRNONFATAL = CFGMSGRECEIVEDERRNONFATAL; // net ID: CFGMSGRECEIVEDERRNONFATAL lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDPMASNAK = CFGMSGRECEIVEDPMASNAK; // net ID: CFGMSGRECEIVEDPMASNAK lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDPMETO = CFGMSGRECEIVEDPMETO; // net ID: CFGMSGRECEIVEDPMETO lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDPMETOACK = CFGMSGRECEIVEDPMETOACK; // net ID: CFGMSGRECEIVEDPMETOACK lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDPMPME = CFGMSGRECEIVEDPMPME; // net ID: CFGMSGRECEIVEDPMPME lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDSETSLOTPOWERLIMIT = CFGMSGRECEIVEDSETSLOTPOWERLIMIT; // net ID: CFGMSGRECEIVEDSETSLOTPOWERLIMIT lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDUNLOCK = CFGMSGRECEIVEDUNLOCK; // net ID: CFGMSGRECEIVEDUNLOCK lsb: 0  msb: 0 OUTPUT
			this->CFGPCIELINKSTATE = CFGPCIELINKSTATE; // net ID: CFGPCIELINKSTATE lsb: 0  msb: 0 OUTPUT
			this->CFGPMCSRPMEEN = CFGPMCSRPMEEN; // net ID: CFGPMCSRPMEEN lsb: 0  msb: 0 OUTPUT
			this->CFGPMCSRPMESTATUS = CFGPMCSRPMESTATUS; // net ID: CFGPMCSRPMESTATUS lsb: 0  msb: 0 OUTPUT
			this->CFGPMCSRPOWERSTATE = CFGPMCSRPOWERSTATE; // net ID: CFGPMCSRPOWERSTATE lsb: 0  msb: 0 OUTPUT
			this->CFGPMRCVASREQL1N = CFGPMRCVASREQL1N; // net ID: CFGPMRCVASREQL1N lsb: 0  msb: 0 OUTPUT
			this->CFGPMRCVENTERL1N = CFGPMRCVENTERL1N; // net ID: CFGPMRCVENTERL1N lsb: 0  msb: 0 OUTPUT
			this->CFGPMRCVENTERL23N = CFGPMRCVENTERL23N; // net ID: CFGPMRCVENTERL23N lsb: 0  msb: 0 OUTPUT
			this->CFGPMRCVREQACKN = CFGPMRCVREQACKN; // net ID: CFGPMRCVREQACKN lsb: 0  msb: 0 OUTPUT
			this->CFGROOTCONTROLPMEINTEN = CFGROOTCONTROLPMEINTEN; // net ID: CFGROOTCONTROLPMEINTEN lsb: 0  msb: 0 OUTPUT
			this->CFGROOTCONTROLSYSERRCORRERREN = CFGROOTCONTROLSYSERRCORRERREN; // net ID: CFGROOTCONTROLSYSERRCORRERREN lsb: 0  msb: 0 OUTPUT
			this->CFGROOTCONTROLSYSERRFATALERREN = CFGROOTCONTROLSYSERRFATALERREN; // net ID: CFGROOTCONTROLSYSERRFATALERREN lsb: 0  msb: 0 OUTPUT
			this->CFGROOTCONTROLSYSERRNONFATALERREN = CFGROOTCONTROLSYSERRNONFATALERREN; // net ID: CFGROOTCONTROLSYSERRNONFATALERREN lsb: 0  msb: 0 OUTPUT
			this->CFGSLOTCONTROLELECTROMECHILCTLPULSE = CFGSLOTCONTROLELECTROMECHILCTLPULSE; // net ID: CFGSLOTCONTROLELECTROMECHILCTLPULSE lsb: 0  msb: 0 OUTPUT
			this->CFGTRANSACTION = CFGTRANSACTION; // net ID: CFGTRANSACTION lsb: 0  msb: 0 OUTPUT
			this->CFGTRANSACTIONADDR = CFGTRANSACTIONADDR; // net ID: CFGTRANSACTIONADDR lsb: 0  msb: 0 OUTPUT
			this->CFGTRANSACTIONTYPE = CFGTRANSACTIONTYPE; // net ID: CFGTRANSACTIONTYPE lsb: 0  msb: 0 OUTPUT
			this->CFGVCTCVCMAP = CFGVCTCVCMAP; // net ID: CFGVCTCVCMAP lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRA = DBGSCLRA; // net ID: DBGSCLRA lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRB = DBGSCLRB; // net ID: DBGSCLRB lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRC = DBGSCLRC; // net ID: DBGSCLRC lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRD = DBGSCLRD; // net ID: DBGSCLRD lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRE = DBGSCLRE; // net ID: DBGSCLRE lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRF = DBGSCLRF; // net ID: DBGSCLRF lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRG = DBGSCLRG; // net ID: DBGSCLRG lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRH = DBGSCLRH; // net ID: DBGSCLRH lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRI = DBGSCLRI; // net ID: DBGSCLRI lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRJ = DBGSCLRJ; // net ID: DBGSCLRJ lsb: 0  msb: 0 OUTPUT
			this->DBGSCLRK = DBGSCLRK; // net ID: DBGSCLRK lsb: 0  msb: 0 OUTPUT
			this->DBGVECA = DBGVECA; // net ID: DBGVECA lsb: 0  msb: 0 OUTPUT
			this->DBGVECB = DBGVECB; // net ID: DBGVECB lsb: 0  msb: 0 OUTPUT
			this->DBGVECC = DBGVECC; // net ID: DBGVECC lsb: 0  msb: 0 OUTPUT
			this->DRPDO = DRPDO; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			this->DRPRDY = DRPRDY; // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
			this->LL2BADDLLPERR = LL2BADDLLPERR; // net ID: LL2BADDLLPERR lsb: 0  msb: 0 OUTPUT
			this->LL2BADTLPERR = LL2BADTLPERR; // net ID: LL2BADTLPERR lsb: 0  msb: 0 OUTPUT
			this->LL2LINKSTATUS = LL2LINKSTATUS; // net ID: LL2LINKSTATUS lsb: 0  msb: 0 OUTPUT
			this->LL2PROTOCOLERR = LL2PROTOCOLERR; // net ID: LL2PROTOCOLERR lsb: 0  msb: 0 OUTPUT
			this->LL2RECEIVERERR = LL2RECEIVERERR; // net ID: LL2RECEIVERERR lsb: 0  msb: 0 OUTPUT
			this->LL2REPLAYROERR = LL2REPLAYROERR; // net ID: LL2REPLAYROERR lsb: 0  msb: 0 OUTPUT
			this->LL2REPLAYTOERR = LL2REPLAYTOERR; // net ID: LL2REPLAYTOERR lsb: 0  msb: 0 OUTPUT
			this->LL2SUSPENDOK = LL2SUSPENDOK; // net ID: LL2SUSPENDOK lsb: 0  msb: 0 OUTPUT
			this->LL2TFCINIT1SEQ = LL2TFCINIT1SEQ; // net ID: LL2TFCINIT1SEQ lsb: 0  msb: 0 OUTPUT
			this->LL2TFCINIT2SEQ = LL2TFCINIT2SEQ; // net ID: LL2TFCINIT2SEQ lsb: 0  msb: 0 OUTPUT
			this->LL2TXIDLE = LL2TXIDLE; // net ID: LL2TXIDLE lsb: 0  msb: 0 OUTPUT
			this->LNKCLKEN = LNKCLKEN; // net ID: LNKCLKEN lsb: 0  msb: 0 OUTPUT
			this->MIMRXRADDR = MIMRXRADDR; // net ID: MIMRXRADDR lsb: 0  msb: 0 OUTPUT
			this->MIMRXREN = MIMRXREN; // net ID: MIMRXREN lsb: 0  msb: 0 OUTPUT
			this->MIMRXWADDR = MIMRXWADDR; // net ID: MIMRXWADDR lsb: 0  msb: 0 OUTPUT
			this->MIMRXWDATA = MIMRXWDATA; // net ID: MIMRXWDATA lsb: 0  msb: 0 OUTPUT
			this->MIMRXWEN = MIMRXWEN; // net ID: MIMRXWEN lsb: 0  msb: 0 OUTPUT
			this->MIMTXRADDR = MIMTXRADDR; // net ID: MIMTXRADDR lsb: 0  msb: 0 OUTPUT
			this->MIMTXREN = MIMTXREN; // net ID: MIMTXREN lsb: 0  msb: 0 OUTPUT
			this->MIMTXWADDR = MIMTXWADDR; // net ID: MIMTXWADDR lsb: 0  msb: 0 OUTPUT
			this->MIMTXWDATA = MIMTXWDATA; // net ID: MIMTXWDATA lsb: 0  msb: 0 OUTPUT
			this->MIMTXWEN = MIMTXWEN; // net ID: MIMTXWEN lsb: 0  msb: 0 OUTPUT
			this->PIPERX0POLARITY = PIPERX0POLARITY; // net ID: PIPERX0POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX1POLARITY = PIPERX1POLARITY; // net ID: PIPERX1POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX2POLARITY = PIPERX2POLARITY; // net ID: PIPERX2POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX3POLARITY = PIPERX3POLARITY; // net ID: PIPERX3POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX4POLARITY = PIPERX4POLARITY; // net ID: PIPERX4POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX5POLARITY = PIPERX5POLARITY; // net ID: PIPERX5POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX6POLARITY = PIPERX6POLARITY; // net ID: PIPERX6POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX7POLARITY = PIPERX7POLARITY; // net ID: PIPERX7POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPETX0CHARISK = PIPETX0CHARISK; // net ID: PIPETX0CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX0COMPLIANCE = PIPETX0COMPLIANCE; // net ID: PIPETX0COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX0DATA = PIPETX0DATA; // net ID: PIPETX0DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX0ELECIDLE = PIPETX0ELECIDLE; // net ID: PIPETX0ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX0POWERDOWN = PIPETX0POWERDOWN; // net ID: PIPETX0POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX1CHARISK = PIPETX1CHARISK; // net ID: PIPETX1CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX1COMPLIANCE = PIPETX1COMPLIANCE; // net ID: PIPETX1COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX1DATA = PIPETX1DATA; // net ID: PIPETX1DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX1ELECIDLE = PIPETX1ELECIDLE; // net ID: PIPETX1ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX1POWERDOWN = PIPETX1POWERDOWN; // net ID: PIPETX1POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX2CHARISK = PIPETX2CHARISK; // net ID: PIPETX2CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX2COMPLIANCE = PIPETX2COMPLIANCE; // net ID: PIPETX2COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX2DATA = PIPETX2DATA; // net ID: PIPETX2DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX2ELECIDLE = PIPETX2ELECIDLE; // net ID: PIPETX2ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX2POWERDOWN = PIPETX2POWERDOWN; // net ID: PIPETX2POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX3CHARISK = PIPETX3CHARISK; // net ID: PIPETX3CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX3COMPLIANCE = PIPETX3COMPLIANCE; // net ID: PIPETX3COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX3DATA = PIPETX3DATA; // net ID: PIPETX3DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX3ELECIDLE = PIPETX3ELECIDLE; // net ID: PIPETX3ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX3POWERDOWN = PIPETX3POWERDOWN; // net ID: PIPETX3POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX4CHARISK = PIPETX4CHARISK; // net ID: PIPETX4CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX4COMPLIANCE = PIPETX4COMPLIANCE; // net ID: PIPETX4COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX4DATA = PIPETX4DATA; // net ID: PIPETX4DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX4ELECIDLE = PIPETX4ELECIDLE; // net ID: PIPETX4ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX4POWERDOWN = PIPETX4POWERDOWN; // net ID: PIPETX4POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX5CHARISK = PIPETX5CHARISK; // net ID: PIPETX5CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX5COMPLIANCE = PIPETX5COMPLIANCE; // net ID: PIPETX5COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX5DATA = PIPETX5DATA; // net ID: PIPETX5DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX5ELECIDLE = PIPETX5ELECIDLE; // net ID: PIPETX5ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX5POWERDOWN = PIPETX5POWERDOWN; // net ID: PIPETX5POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX6CHARISK = PIPETX6CHARISK; // net ID: PIPETX6CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX6COMPLIANCE = PIPETX6COMPLIANCE; // net ID: PIPETX6COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX6DATA = PIPETX6DATA; // net ID: PIPETX6DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX6ELECIDLE = PIPETX6ELECIDLE; // net ID: PIPETX6ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX6POWERDOWN = PIPETX6POWERDOWN; // net ID: PIPETX6POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX7CHARISK = PIPETX7CHARISK; // net ID: PIPETX7CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX7COMPLIANCE = PIPETX7COMPLIANCE; // net ID: PIPETX7COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX7DATA = PIPETX7DATA; // net ID: PIPETX7DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX7ELECIDLE = PIPETX7ELECIDLE; // net ID: PIPETX7ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX7POWERDOWN = PIPETX7POWERDOWN; // net ID: PIPETX7POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETXDEEMPH = PIPETXDEEMPH; // net ID: PIPETXDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETXMARGIN = PIPETXMARGIN; // net ID: PIPETXMARGIN lsb: 0  msb: 0 OUTPUT
			this->PIPETXRATE = PIPETXRATE; // net ID: PIPETXRATE lsb: 0  msb: 0 OUTPUT
			this->PIPETXRCVRDET = PIPETXRCVRDET; // net ID: PIPETXRCVRDET lsb: 0  msb: 0 OUTPUT
			this->PIPETXRESET = PIPETXRESET; // net ID: PIPETXRESET lsb: 0  msb: 0 OUTPUT
			this->PL2L0REQ = PL2L0REQ; // net ID: PL2L0REQ lsb: 0  msb: 0 OUTPUT
			this->PL2LINKUP = PL2LINKUP; // net ID: PL2LINKUP lsb: 0  msb: 0 OUTPUT
			this->PL2RECEIVERERR = PL2RECEIVERERR; // net ID: PL2RECEIVERERR lsb: 0  msb: 0 OUTPUT
			this->PL2RECOVERY = PL2RECOVERY; // net ID: PL2RECOVERY lsb: 0  msb: 0 OUTPUT
			this->PL2RXELECIDLE = PL2RXELECIDLE; // net ID: PL2RXELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PL2RXPMSTATE = PL2RXPMSTATE; // net ID: PL2RXPMSTATE lsb: 0  msb: 0 OUTPUT
			this->PL2SUSPENDOK = PL2SUSPENDOK; // net ID: PL2SUSPENDOK lsb: 0  msb: 0 OUTPUT
			this->PLDBGVEC = PLDBGVEC; // net ID: PLDBGVEC lsb: 0  msb: 0 OUTPUT
			this->PLDIRECTEDCHANGEDONE = PLDIRECTEDCHANGEDONE; // net ID: PLDIRECTEDCHANGEDONE lsb: 0  msb: 0 OUTPUT
			this->PLINITIALLINKWIDTH = PLINITIALLINKWIDTH; // net ID: PLINITIALLINKWIDTH lsb: 0  msb: 0 OUTPUT
			this->PLLANEREVERSALMODE = PLLANEREVERSALMODE; // net ID: PLLANEREVERSALMODE lsb: 0  msb: 0 OUTPUT
			this->PLLINKGEN2CAP = PLLINKGEN2CAP; // net ID: PLLINKGEN2CAP lsb: 0  msb: 0 OUTPUT
			this->PLLINKPARTNERGEN2SUPPORTED = PLLINKPARTNERGEN2SUPPORTED; // net ID: PLLINKPARTNERGEN2SUPPORTED lsb: 0  msb: 0 OUTPUT
			this->PLLINKUPCFGCAP = PLLINKUPCFGCAP; // net ID: PLLINKUPCFGCAP lsb: 0  msb: 0 OUTPUT
			this->PLLTSSMSTATE = PLLTSSMSTATE; // net ID: PLLTSSMSTATE lsb: 0  msb: 0 OUTPUT
			this->PLPHYLNKUPN = PLPHYLNKUPN; // net ID: PLPHYLNKUPN lsb: 0  msb: 0 OUTPUT
			this->PLRECEIVEDHOTRST = PLRECEIVEDHOTRST; // net ID: PLRECEIVEDHOTRST lsb: 0  msb: 0 OUTPUT
			this->PLRXPMSTATE = PLRXPMSTATE; // net ID: PLRXPMSTATE lsb: 0  msb: 0 OUTPUT
			this->PLSELLNKRATE = PLSELLNKRATE; // net ID: PLSELLNKRATE lsb: 0  msb: 0 OUTPUT
			this->PLSELLNKWIDTH = PLSELLNKWIDTH; // net ID: PLSELLNKWIDTH lsb: 0  msb: 0 OUTPUT
			this->PLTXPMSTATE = PLTXPMSTATE; // net ID: PLTXPMSTATE lsb: 0  msb: 0 OUTPUT
			this->RECEIVEDFUNCLVLRSTN = RECEIVEDFUNCLVLRSTN; // net ID: RECEIVEDFUNCLVLRSTN lsb: 0  msb: 0 OUTPUT
			this->TL2ASPMSUSPENDCREDITCHECKOK = TL2ASPMSUSPENDCREDITCHECKOK; // net ID: TL2ASPMSUSPENDCREDITCHECKOK lsb: 0  msb: 0 OUTPUT
			this->TL2ASPMSUSPENDREQ = TL2ASPMSUSPENDREQ; // net ID: TL2ASPMSUSPENDREQ lsb: 0  msb: 0 OUTPUT
			this->TL2ERRFCPE = TL2ERRFCPE; // net ID: TL2ERRFCPE lsb: 0  msb: 0 OUTPUT
			this->TL2ERRHDR = TL2ERRHDR; // net ID: TL2ERRHDR lsb: 0  msb: 0 OUTPUT
			this->TL2ERRMALFORMED = TL2ERRMALFORMED; // net ID: TL2ERRMALFORMED lsb: 0  msb: 0 OUTPUT
			this->TL2ERRRXOVERFLOW = TL2ERRRXOVERFLOW; // net ID: TL2ERRRXOVERFLOW lsb: 0  msb: 0 OUTPUT
			this->TL2PPMSUSPENDOK = TL2PPMSUSPENDOK; // net ID: TL2PPMSUSPENDOK lsb: 0  msb: 0 OUTPUT
			this->TRNFCCPLD = TRNFCCPLD; // net ID: TRNFCCPLD lsb: 0  msb: 0 OUTPUT
			this->TRNFCCPLH = TRNFCCPLH; // net ID: TRNFCCPLH lsb: 0  msb: 0 OUTPUT
			this->TRNFCNPD = TRNFCNPD; // net ID: TRNFCNPD lsb: 0  msb: 0 OUTPUT
			this->TRNFCNPH = TRNFCNPH; // net ID: TRNFCNPH lsb: 0  msb: 0 OUTPUT
			this->TRNFCPD = TRNFCPD; // net ID: TRNFCPD lsb: 0  msb: 0 OUTPUT
			this->TRNFCPH = TRNFCPH; // net ID: TRNFCPH lsb: 0  msb: 0 OUTPUT
			this->TRNLNKUP = TRNLNKUP; // net ID: TRNLNKUP lsb: 0  msb: 0 OUTPUT
			this->TRNRBARHIT = TRNRBARHIT; // net ID: TRNRBARHIT lsb: 0  msb: 0 OUTPUT
			this->TRNRD = TRNRD; // net ID: TRNRD lsb: 0  msb: 0 OUTPUT
			this->TRNRDLLPDATA = TRNRDLLPDATA; // net ID: TRNRDLLPDATA lsb: 0  msb: 0 OUTPUT
			this->TRNRDLLPSRCRDY = TRNRDLLPSRCRDY; // net ID: TRNRDLLPSRCRDY lsb: 0  msb: 0 OUTPUT
			this->TRNRECRCERR = TRNRECRCERR; // net ID: TRNRECRCERR lsb: 0  msb: 0 OUTPUT
			this->TRNREOF = TRNREOF; // net ID: TRNREOF lsb: 0  msb: 0 OUTPUT
			this->TRNRERRFWD = TRNRERRFWD; // net ID: TRNRERRFWD lsb: 0  msb: 0 OUTPUT
			this->TRNRREM = TRNRREM; // net ID: TRNRREM lsb: 0  msb: 0 OUTPUT
			this->TRNRSOF = TRNRSOF; // net ID: TRNRSOF lsb: 0  msb: 0 OUTPUT
			this->TRNRSRCDSC = TRNRSRCDSC; // net ID: TRNRSRCDSC lsb: 0  msb: 0 OUTPUT
			this->TRNRSRCRDY = TRNRSRCRDY; // net ID: TRNRSRCRDY lsb: 0  msb: 0 OUTPUT
			this->TRNTBUFAV = TRNTBUFAV; // net ID: TRNTBUFAV lsb: 0  msb: 0 OUTPUT
			this->TRNTCFGREQ = TRNTCFGREQ; // net ID: TRNTCFGREQ lsb: 0  msb: 0 OUTPUT
			this->TRNTDLLPDSTRDY = TRNTDLLPDSTRDY; // net ID: TRNTDLLPDSTRDY lsb: 0  msb: 0 OUTPUT
			this->TRNTDSTRDY = TRNTDSTRDY; // net ID: TRNTDSTRDY lsb: 0  msb: 0 OUTPUT
			this->TRNTERRDROP = TRNTERRDROP; // net ID: TRNTERRDROP lsb: 0  msb: 0 OUTPUT
			this->USERRSTN = USERRSTN; // net ID: USERRSTN lsb: 0  msb: 0 OUTPUT
			this->CFGAERINTERRUPTMSGNUM = CFGAERINTERRUPTMSGNUM; // net ID: CFGAERINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			this->CFGDEVID = CFGDEVID; // net ID: CFGDEVID lsb: 0  msb: 15 INPUT
			this->CFGDSBUSNUMBER = CFGDSBUSNUMBER; // net ID: CFGDSBUSNUMBER lsb: 0  msb: 7 INPUT
			this->CFGDSDEVICENUMBER = CFGDSDEVICENUMBER; // net ID: CFGDSDEVICENUMBER lsb: 0  msb: 4 INPUT
			this->CFGDSFUNCTIONNUMBER = CFGDSFUNCTIONNUMBER; // net ID: CFGDSFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			this->CFGDSN = CFGDSN; // net ID: CFGDSN lsb: 0  msb: 63 INPUT
			this->CFGERRACSN = CFGERRACSN; // net ID: CFGERRACSN lsb: 0  msb: 0 INPUT
			this->CFGERRAERHEADERLOG = CFGERRAERHEADERLOG; // net ID: CFGERRAERHEADERLOG lsb: 0  msb: 127 INPUT
			this->CFGERRATOMICEGRESSBLOCKEDN = CFGERRATOMICEGRESSBLOCKEDN; // net ID: CFGERRATOMICEGRESSBLOCKEDN lsb: 0  msb: 0 INPUT
			this->CFGERRCORN = CFGERRCORN; // net ID: CFGERRCORN lsb: 0  msb: 0 INPUT
			this->CFGERRCPLABORTN = CFGERRCPLABORTN; // net ID: CFGERRCPLABORTN lsb: 0  msb: 0 INPUT
			this->CFGERRCPLTIMEOUTN = CFGERRCPLTIMEOUTN; // net ID: CFGERRCPLTIMEOUTN lsb: 0  msb: 0 INPUT
			this->CFGERRCPLUNEXPECTN = CFGERRCPLUNEXPECTN; // net ID: CFGERRCPLUNEXPECTN lsb: 0  msb: 0 INPUT
			this->CFGERRECRCN = CFGERRECRCN; // net ID: CFGERRECRCN lsb: 0  msb: 0 INPUT
			this->CFGERRINTERNALCORN = CFGERRINTERNALCORN; // net ID: CFGERRINTERNALCORN lsb: 0  msb: 0 INPUT
			this->CFGERRINTERNALUNCORN = CFGERRINTERNALUNCORN; // net ID: CFGERRINTERNALUNCORN lsb: 0  msb: 0 INPUT
			this->CFGERRLOCKEDN = CFGERRLOCKEDN; // net ID: CFGERRLOCKEDN lsb: 0  msb: 0 INPUT
			this->CFGERRMALFORMEDN = CFGERRMALFORMEDN; // net ID: CFGERRMALFORMEDN lsb: 0  msb: 0 INPUT
			this->CFGERRMCBLOCKEDN = CFGERRMCBLOCKEDN; // net ID: CFGERRMCBLOCKEDN lsb: 0  msb: 0 INPUT
			this->CFGERRNORECOVERYN = CFGERRNORECOVERYN; // net ID: CFGERRNORECOVERYN lsb: 0  msb: 0 INPUT
			this->CFGERRPOISONEDN = CFGERRPOISONEDN; // net ID: CFGERRPOISONEDN lsb: 0  msb: 0 INPUT
			this->CFGERRPOSTEDN = CFGERRPOSTEDN; // net ID: CFGERRPOSTEDN lsb: 0  msb: 0 INPUT
			this->CFGERRTLPCPLHEADER = CFGERRTLPCPLHEADER; // net ID: CFGERRTLPCPLHEADER lsb: 0  msb: 47 INPUT
			this->CFGERRURN = CFGERRURN; // net ID: CFGERRURN lsb: 0  msb: 0 INPUT
			this->CFGFORCECOMMONCLOCKOFF = CFGFORCECOMMONCLOCKOFF; // net ID: CFGFORCECOMMONCLOCKOFF lsb: 0  msb: 0 INPUT
			this->CFGFORCEEXTENDEDSYNCON = CFGFORCEEXTENDEDSYNCON; // net ID: CFGFORCEEXTENDEDSYNCON lsb: 0  msb: 0 INPUT
			this->CFGFORCEMPS = CFGFORCEMPS; // net ID: CFGFORCEMPS lsb: 0  msb: 2 INPUT
			this->CFGINTERRUPTASSERTN = CFGINTERRUPTASSERTN; // net ID: CFGINTERRUPTASSERTN lsb: 0  msb: 0 INPUT
			this->CFGINTERRUPTDI = CFGINTERRUPTDI; // net ID: CFGINTERRUPTDI lsb: 0  msb: 7 INPUT
			this->CFGINTERRUPTN = CFGINTERRUPTN; // net ID: CFGINTERRUPTN lsb: 0  msb: 0 INPUT
			this->CFGINTERRUPTSTATN = CFGINTERRUPTSTATN; // net ID: CFGINTERRUPTSTATN lsb: 0  msb: 0 INPUT
			this->CFGMGMTBYTEENN = CFGMGMTBYTEENN; // net ID: CFGMGMTBYTEENN lsb: 0  msb: 3 INPUT
			this->CFGMGMTDI = CFGMGMTDI; // net ID: CFGMGMTDI lsb: 0  msb: 31 INPUT
			this->CFGMGMTDWADDR = CFGMGMTDWADDR; // net ID: CFGMGMTDWADDR lsb: 0  msb: 9 INPUT
			this->CFGMGMTRDENN = CFGMGMTRDENN; // net ID: CFGMGMTRDENN lsb: 0  msb: 0 INPUT
			this->CFGMGMTWRENN = CFGMGMTWRENN; // net ID: CFGMGMTWRENN lsb: 0  msb: 0 INPUT
			this->CFGMGMTWRREADONLYN = CFGMGMTWRREADONLYN; // net ID: CFGMGMTWRREADONLYN lsb: 0  msb: 0 INPUT
			this->CFGMGMTWRRW1CASRWN = CFGMGMTWRRW1CASRWN; // net ID: CFGMGMTWRRW1CASRWN lsb: 0  msb: 0 INPUT
			this->CFGPCIECAPINTERRUPTMSGNUM = CFGPCIECAPINTERRUPTMSGNUM; // net ID: CFGPCIECAPINTERRUPTMSGNUM lsb: 0  msb: 4 INPUT
			this->CFGPMFORCESTATE = CFGPMFORCESTATE; // net ID: CFGPMFORCESTATE lsb: 0  msb: 1 INPUT
			this->CFGPMFORCESTATEENN = CFGPMFORCESTATEENN; // net ID: CFGPMFORCESTATEENN lsb: 0  msb: 0 INPUT
			this->CFGPMHALTASPML0SN = CFGPMHALTASPML0SN; // net ID: CFGPMHALTASPML0SN lsb: 0  msb: 0 INPUT
			this->CFGPMHALTASPML1N = CFGPMHALTASPML1N; // net ID: CFGPMHALTASPML1N lsb: 0  msb: 0 INPUT
			this->CFGPMSENDPMETON = CFGPMSENDPMETON; // net ID: CFGPMSENDPMETON lsb: 0  msb: 0 INPUT
			this->CFGPMTURNOFFOKN = CFGPMTURNOFFOKN; // net ID: CFGPMTURNOFFOKN lsb: 0  msb: 0 INPUT
			this->CFGPMWAKEN = CFGPMWAKEN; // net ID: CFGPMWAKEN lsb: 0  msb: 0 INPUT
			this->CFGPORTNUMBER = CFGPORTNUMBER; // net ID: CFGPORTNUMBER lsb: 0  msb: 7 INPUT
			this->CFGREVID = CFGREVID; // net ID: CFGREVID lsb: 0  msb: 7 INPUT
			this->CFGSUBSYSID = CFGSUBSYSID; // net ID: CFGSUBSYSID lsb: 0  msb: 15 INPUT
			this->CFGSUBSYSVENDID = CFGSUBSYSVENDID; // net ID: CFGSUBSYSVENDID lsb: 0  msb: 15 INPUT
			this->CFGTRNPENDINGN = CFGTRNPENDINGN; // net ID: CFGTRNPENDINGN lsb: 0  msb: 0 INPUT
			this->CFGVENDID = CFGVENDID; // net ID: CFGVENDID lsb: 0  msb: 15 INPUT
			this->CMRSTN = CMRSTN; // net ID: CMRSTN lsb: 0  msb: 0 INPUT
			this->CMSTICKYRSTN = CMSTICKYRSTN; // net ID: CMSTICKYRSTN lsb: 0  msb: 0 INPUT
			this->DBGMODE = DBGMODE; // net ID: DBGMODE lsb: 0  msb: 1 INPUT
			this->DBGSUBMODE = DBGSUBMODE; // net ID: DBGSUBMODE lsb: 0  msb: 0 INPUT
			this->DLRSTN = DLRSTN; // net ID: DLRSTN lsb: 0  msb: 0 INPUT
			this->DRPADDR = DRPADDR; // net ID: DRPADDR lsb: 0  msb: 8 INPUT
			this->DRPCLK = DRPCLK; // net ID: DRPCLK lsb: 0  msb: 0 INPUT
			this->DRPDI = DRPDI; // net ID: DRPDI lsb: 0  msb: 15 INPUT
			this->DRPEN = DRPEN; // net ID: DRPEN lsb: 0  msb: 0 INPUT
			this->DRPWE = DRPWE; // net ID: DRPWE lsb: 0  msb: 0 INPUT
			this->FUNCLVLRSTN = FUNCLVLRSTN; // net ID: FUNCLVLRSTN lsb: 0  msb: 0 INPUT
			this->LL2SENDASREQL1 = LL2SENDASREQL1; // net ID: LL2SENDASREQL1 lsb: 0  msb: 0 INPUT
			this->LL2SENDENTERL1 = LL2SENDENTERL1; // net ID: LL2SENDENTERL1 lsb: 0  msb: 0 INPUT
			this->LL2SENDENTERL23 = LL2SENDENTERL23; // net ID: LL2SENDENTERL23 lsb: 0  msb: 0 INPUT
			this->LL2SENDPMACK = LL2SENDPMACK; // net ID: LL2SENDPMACK lsb: 0  msb: 0 INPUT
			this->LL2SUSPENDNOW = LL2SUSPENDNOW; // net ID: LL2SUSPENDNOW lsb: 0  msb: 0 INPUT
			this->LL2TLPRCV = LL2TLPRCV; // net ID: LL2TLPRCV lsb: 0  msb: 0 INPUT
			this->MIMRXRDATA = MIMRXRDATA; // net ID: MIMRXRDATA lsb: 0  msb: 67 INPUT
			this->MIMTXRDATA = MIMTXRDATA; // net ID: MIMTXRDATA lsb: 0  msb: 68 INPUT
			this->PIPECLK = PIPECLK; // net ID: PIPECLK lsb: 0  msb: 0 INPUT
			this->PIPERX0CHANISALIGNED = PIPERX0CHANISALIGNED; // net ID: PIPERX0CHANISALIGNED lsb: 0  msb: 0 INPUT
			this->PIPERX0CHARISK = PIPERX0CHARISK; // net ID: PIPERX0CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX0DATA = PIPERX0DATA; // net ID: PIPERX0DATA lsb: 0  msb: 15 INPUT
			this->PIPERX0ELECIDLE = PIPERX0ELECIDLE; // net ID: PIPERX0ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX0PHYSTATUS = PIPERX0PHYSTATUS; // net ID: PIPERX0PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX0STATUS = PIPERX0STATUS; // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX0VALID = PIPERX0VALID; // net ID: PIPERX0VALID lsb: 0  msb: 0 INPUT
			this->PIPERX1CHANISALIGNED = PIPERX1CHANISALIGNED; // net ID: PIPERX1CHANISALIGNED lsb: 0  msb: 0 INPUT
			this->PIPERX1CHARISK = PIPERX1CHARISK; // net ID: PIPERX1CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX1DATA = PIPERX1DATA; // net ID: PIPERX1DATA lsb: 0  msb: 15 INPUT
			this->PIPERX1ELECIDLE = PIPERX1ELECIDLE; // net ID: PIPERX1ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX1PHYSTATUS = PIPERX1PHYSTATUS; // net ID: PIPERX1PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX1STATUS = PIPERX1STATUS; // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX1VALID = PIPERX1VALID; // net ID: PIPERX1VALID lsb: 0  msb: 0 INPUT
			this->PIPERX2CHANISALIGNED = PIPERX2CHANISALIGNED; // net ID: PIPERX2CHANISALIGNED lsb: 0  msb: 0 INPUT
			this->PIPERX2CHARISK = PIPERX2CHARISK; // net ID: PIPERX2CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX2DATA = PIPERX2DATA; // net ID: PIPERX2DATA lsb: 0  msb: 15 INPUT
			this->PIPERX2ELECIDLE = PIPERX2ELECIDLE; // net ID: PIPERX2ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX2PHYSTATUS = PIPERX2PHYSTATUS; // net ID: PIPERX2PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX2STATUS = PIPERX2STATUS; // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX2VALID = PIPERX2VALID; // net ID: PIPERX2VALID lsb: 0  msb: 0 INPUT
			this->PIPERX3CHANISALIGNED = PIPERX3CHANISALIGNED; // net ID: PIPERX3CHANISALIGNED lsb: 0  msb: 0 INPUT
			this->PIPERX3CHARISK = PIPERX3CHARISK; // net ID: PIPERX3CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX3DATA = PIPERX3DATA; // net ID: PIPERX3DATA lsb: 0  msb: 15 INPUT
			this->PIPERX3ELECIDLE = PIPERX3ELECIDLE; // net ID: PIPERX3ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX3PHYSTATUS = PIPERX3PHYSTATUS; // net ID: PIPERX3PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX3STATUS = PIPERX3STATUS; // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX3VALID = PIPERX3VALID; // net ID: PIPERX3VALID lsb: 0  msb: 0 INPUT
			this->PIPERX4CHANISALIGNED = PIPERX4CHANISALIGNED; // net ID: PIPERX4CHANISALIGNED lsb: 0  msb: 0 INPUT
			this->PIPERX4CHARISK = PIPERX4CHARISK; // net ID: PIPERX4CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX4DATA = PIPERX4DATA; // net ID: PIPERX4DATA lsb: 0  msb: 15 INPUT
			this->PIPERX4ELECIDLE = PIPERX4ELECIDLE; // net ID: PIPERX4ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX4PHYSTATUS = PIPERX4PHYSTATUS; // net ID: PIPERX4PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX4STATUS = PIPERX4STATUS; // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX4VALID = PIPERX4VALID; // net ID: PIPERX4VALID lsb: 0  msb: 0 INPUT
			this->PIPERX5CHANISALIGNED = PIPERX5CHANISALIGNED; // net ID: PIPERX5CHANISALIGNED lsb: 0  msb: 0 INPUT
			this->PIPERX5CHARISK = PIPERX5CHARISK; // net ID: PIPERX5CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX5DATA = PIPERX5DATA; // net ID: PIPERX5DATA lsb: 0  msb: 15 INPUT
			this->PIPERX5ELECIDLE = PIPERX5ELECIDLE; // net ID: PIPERX5ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX5PHYSTATUS = PIPERX5PHYSTATUS; // net ID: PIPERX5PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX5STATUS = PIPERX5STATUS; // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX5VALID = PIPERX5VALID; // net ID: PIPERX5VALID lsb: 0  msb: 0 INPUT
			this->PIPERX6CHANISALIGNED = PIPERX6CHANISALIGNED; // net ID: PIPERX6CHANISALIGNED lsb: 0  msb: 0 INPUT
			this->PIPERX6CHARISK = PIPERX6CHARISK; // net ID: PIPERX6CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX6DATA = PIPERX6DATA; // net ID: PIPERX6DATA lsb: 0  msb: 15 INPUT
			this->PIPERX6ELECIDLE = PIPERX6ELECIDLE; // net ID: PIPERX6ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX6PHYSTATUS = PIPERX6PHYSTATUS; // net ID: PIPERX6PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX6STATUS = PIPERX6STATUS; // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX6VALID = PIPERX6VALID; // net ID: PIPERX6VALID lsb: 0  msb: 0 INPUT
			this->PIPERX7CHANISALIGNED = PIPERX7CHANISALIGNED; // net ID: PIPERX7CHANISALIGNED lsb: 0  msb: 0 INPUT
			this->PIPERX7CHARISK = PIPERX7CHARISK; // net ID: PIPERX7CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX7DATA = PIPERX7DATA; // net ID: PIPERX7DATA lsb: 0  msb: 15 INPUT
			this->PIPERX7ELECIDLE = PIPERX7ELECIDLE; // net ID: PIPERX7ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX7PHYSTATUS = PIPERX7PHYSTATUS; // net ID: PIPERX7PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX7STATUS = PIPERX7STATUS; // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX7VALID = PIPERX7VALID; // net ID: PIPERX7VALID lsb: 0  msb: 0 INPUT
			this->PL2DIRECTEDLSTATE = PL2DIRECTEDLSTATE; // net ID: PL2DIRECTEDLSTATE lsb: 0  msb: 4 INPUT
			this->PLDBGMODE = PLDBGMODE; // net ID: PLDBGMODE lsb: 0  msb: 2 INPUT
			this->PLDIRECTEDLINKAUTON = PLDIRECTEDLINKAUTON; // net ID: PLDIRECTEDLINKAUTON lsb: 0  msb: 0 INPUT
			this->PLDIRECTEDLINKCHANGE = PLDIRECTEDLINKCHANGE; // net ID: PLDIRECTEDLINKCHANGE lsb: 0  msb: 1 INPUT
			this->PLDIRECTEDLINKSPEED = PLDIRECTEDLINKSPEED; // net ID: PLDIRECTEDLINKSPEED lsb: 0  msb: 0 INPUT
			this->PLDIRECTEDLINKWIDTH = PLDIRECTEDLINKWIDTH; // net ID: PLDIRECTEDLINKWIDTH lsb: 0  msb: 1 INPUT
			this->PLDIRECTEDLTSSMNEW = PLDIRECTEDLTSSMNEW; // net ID: PLDIRECTEDLTSSMNEW lsb: 0  msb: 5 INPUT
			this->PLDIRECTEDLTSSMNEWVLD = PLDIRECTEDLTSSMNEWVLD; // net ID: PLDIRECTEDLTSSMNEWVLD lsb: 0  msb: 0 INPUT
			this->PLDIRECTEDLTSSMSTALL = PLDIRECTEDLTSSMSTALL; // net ID: PLDIRECTEDLTSSMSTALL lsb: 0  msb: 0 INPUT
			this->PLDOWNSTREAMDEEMPHSOURCE = PLDOWNSTREAMDEEMPHSOURCE; // net ID: PLDOWNSTREAMDEEMPHSOURCE lsb: 0  msb: 0 INPUT
			this->PLRSTN = PLRSTN; // net ID: PLRSTN lsb: 0  msb: 0 INPUT
			this->PLTRANSMITHOTRST = PLTRANSMITHOTRST; // net ID: PLTRANSMITHOTRST lsb: 0  msb: 0 INPUT
			this->PLUPSTREAMPREFERDEEMPH = PLUPSTREAMPREFERDEEMPH; // net ID: PLUPSTREAMPREFERDEEMPH lsb: 0  msb: 0 INPUT
			this->SYSRSTN = SYSRSTN; // net ID: SYSRSTN lsb: 0  msb: 0 INPUT
			this->TL2ASPMSUSPENDCREDITCHECK = TL2ASPMSUSPENDCREDITCHECK; // net ID: TL2ASPMSUSPENDCREDITCHECK lsb: 0  msb: 0 INPUT
			this->TL2PPMSUSPENDREQ = TL2PPMSUSPENDREQ; // net ID: TL2PPMSUSPENDREQ lsb: 0  msb: 0 INPUT
			this->TLRSTN = TLRSTN; // net ID: TLRSTN lsb: 0  msb: 0 INPUT
			this->TRNFCSEL = TRNFCSEL; // net ID: TRNFCSEL lsb: 0  msb: 2 INPUT
			this->TRNRDSTRDY = TRNRDSTRDY; // net ID: TRNRDSTRDY lsb: 0  msb: 0 INPUT
			this->TRNRFCPRET = TRNRFCPRET; // net ID: TRNRFCPRET lsb: 0  msb: 0 INPUT
			this->TRNRNPOK = TRNRNPOK; // net ID: TRNRNPOK lsb: 0  msb: 0 INPUT
			this->TRNRNPREQ = TRNRNPREQ; // net ID: TRNRNPREQ lsb: 0  msb: 0 INPUT
			this->TRNTCFGGNT = TRNTCFGGNT; // net ID: TRNTCFGGNT lsb: 0  msb: 0 INPUT
			this->TRNTD = TRNTD; // net ID: TRNTD lsb: 0  msb: 127 INPUT
			this->TRNTDLLPDATA = TRNTDLLPDATA; // net ID: TRNTDLLPDATA lsb: 0  msb: 31 INPUT
			this->TRNTDLLPSRCRDY = TRNTDLLPSRCRDY; // net ID: TRNTDLLPSRCRDY lsb: 0  msb: 0 INPUT
			this->TRNTECRCGEN = TRNTECRCGEN; // net ID: TRNTECRCGEN lsb: 0  msb: 0 INPUT
			this->TRNTEOF = TRNTEOF; // net ID: TRNTEOF lsb: 0  msb: 0 INPUT
			this->TRNTERRFWD = TRNTERRFWD; // net ID: TRNTERRFWD lsb: 0  msb: 0 INPUT
			this->TRNTREM = TRNTREM; // net ID: TRNTREM lsb: 0  msb: 1 INPUT
			this->TRNTSOF = TRNTSOF; // net ID: TRNTSOF lsb: 0  msb: 0 INPUT
			this->TRNTSRCDSC = TRNTSRCDSC; // net ID: TRNTSRCDSC lsb: 0  msb: 0 INPUT
			this->TRNTSRCRDY = TRNTSRCRDY; // net ID: TRNTSRCRDY lsb: 0  msb: 0 INPUT
			this->TRNTSTR = TRNTSTR; // net ID: TRNTSTR lsb: 0  msb: 0 INPUT
			this->USERCLK = USERCLK; // net ID: USERCLK lsb: 0  msb: 0 INPUT
			this->USERCLK2 = USERCLK2; // net ID: USERCLK2 lsb: 0  msb: 0 INPUT
			
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
