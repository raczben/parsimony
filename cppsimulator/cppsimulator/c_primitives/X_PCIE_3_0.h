/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#ifndef X_PCIE_3_0_H
#define X_PCIE_3_0_H

#include "NetFlow.h"
#include "sim_types.h"
#include "Primitive.h"
namespace CPrimitives {
	
	class X_PCIE_3_0: public Primitive{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t ARI_CAP_ENABLE;
		parameter_enum_t AXISTEN_IF_CC_ALIGNMENT_MODE;
		parameter_enum_t AXISTEN_IF_CC_PARITY_CHK;
		parameter_enum_t AXISTEN_IF_CQ_ALIGNMENT_MODE;
		parameter_enum_t AXISTEN_IF_ENABLE_CLIENT_TAG;
		parameter_int_t AXISTEN_IF_ENABLE_MSG_ROUTE;
		parameter_enum_t AXISTEN_IF_ENABLE_RX_MSG_INTFC;
		parameter_enum_t AXISTEN_IF_RC_ALIGNMENT_MODE;
		parameter_enum_t AXISTEN_IF_RC_STRADDLE;
		parameter_enum_t AXISTEN_IF_RQ_ALIGNMENT_MODE;
		parameter_enum_t AXISTEN_IF_RQ_PARITY_CHK;
		parameter_int_t AXISTEN_IF_WIDTH;
		parameter_enum_t CRM_CORE_CLK_FREQ_500;
		parameter_int_t CRM_USER_CLK_FREQ;
		parameter_int_t DNSTREAM_LINK_NUM;
		parameter_int_t GEN3_PCS_AUTO_REALIGN;
		parameter_enum_t GEN3_PCS_RX_ELECIDLE_INTERNAL;
		parameter_int_t LL_ACK_TIMEOUT;
		parameter_enum_t LL_ACK_TIMEOUT_EN;
		parameter_int_t LL_ACK_TIMEOUT_FUNC;
		parameter_int_t LL_CPL_FC_UPDATE_TIMER;
		parameter_enum_t LL_CPL_FC_UPDATE_TIMER_OVERRIDE;
		parameter_int_t LL_FC_UPDATE_TIMER;
		parameter_enum_t LL_FC_UPDATE_TIMER_OVERRIDE;
		parameter_int_t LL_NP_FC_UPDATE_TIMER;
		parameter_enum_t LL_NP_FC_UPDATE_TIMER_OVERRIDE;
		parameter_int_t LL_P_FC_UPDATE_TIMER;
		parameter_enum_t LL_P_FC_UPDATE_TIMER_OVERRIDE;
		parameter_int_t LL_REPLAY_TIMEOUT;
		parameter_enum_t LL_REPLAY_TIMEOUT_EN;
		parameter_int_t LL_REPLAY_TIMEOUT_FUNC;
		parameter_int_t LTR_TX_MESSAGE_MINIMUM_INTERVAL;
		parameter_enum_t LTR_TX_MESSAGE_ON_FUNC_POWER_STATE_CHANGE;
		parameter_enum_t LTR_TX_MESSAGE_ON_LTR_ENABLE;
		parameter_enum_t PF0_AER_CAP_ECRC_CHECK_CAPABLE;
		parameter_enum_t PF0_AER_CAP_ECRC_GEN_CAPABLE;
		parameter_int_t PF0_AER_CAP_NEXTPTR;
		parameter_int_t PF0_ARI_CAP_NEXTPTR;
		parameter_int_t PF0_ARI_CAP_NEXT_FUNC;
		parameter_int_t PF0_ARI_CAP_VER;
		parameter_int_t PF0_BAR0_APERTURE_SIZE;
		parameter_int_t PF0_BAR0_CONTROL;
		parameter_int_t PF0_BAR1_APERTURE_SIZE;
		parameter_int_t PF0_BAR1_CONTROL;
		parameter_int_t PF0_BAR2_APERTURE_SIZE;
		parameter_int_t PF0_BAR2_CONTROL;
		parameter_int_t PF0_BAR3_APERTURE_SIZE;
		parameter_int_t PF0_BAR3_CONTROL;
		parameter_int_t PF0_BAR4_APERTURE_SIZE;
		parameter_int_t PF0_BAR4_CONTROL;
		parameter_int_t PF0_BAR5_APERTURE_SIZE;
		parameter_int_t PF0_BAR5_CONTROL;
		parameter_int_t PF0_BIST_REGISTER;
		parameter_int_t PF0_CAPABILITY_POINTER;
		parameter_int_t PF0_CLASS_CODE;
		parameter_int_t PF0_DEVICE_ID;
		parameter_enum_t PF0_DEV_CAP2_128B_CAS_ATOMIC_COMPLETER_SUPPORT;
		parameter_enum_t PF0_DEV_CAP2_32B_ATOMIC_COMPLETER_SUPPORT;
		parameter_enum_t PF0_DEV_CAP2_64B_ATOMIC_COMPLETER_SUPPORT;
		parameter_enum_t PF0_DEV_CAP2_CPL_TIMEOUT_DISABLE;
		parameter_enum_t PF0_DEV_CAP2_LTR_SUPPORT;
		parameter_int_t PF0_DEV_CAP2_OBFF_SUPPORT;
		parameter_enum_t PF0_DEV_CAP2_TPH_COMPLETER_SUPPORT;
		parameter_int_t PF0_DEV_CAP_ENDPOINT_L0S_LATENCY;
		parameter_int_t PF0_DEV_CAP_ENDPOINT_L1_LATENCY;
		parameter_enum_t PF0_DEV_CAP_EXT_TAG_SUPPORTED;
		parameter_enum_t PF0_DEV_CAP_FUNCTION_LEVEL_RESET_CAPABLE;
		parameter_int_t PF0_DEV_CAP_MAX_PAYLOAD_SIZE;
		parameter_int_t PF0_DPA_CAP_NEXTPTR;
		parameter_int_t PF0_DPA_CAP_SUB_STATE_CONTROL;
		parameter_enum_t PF0_DPA_CAP_SUB_STATE_CONTROL_EN;
		parameter_int_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION0;
		parameter_int_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION1;
		parameter_int_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION2;
		parameter_int_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION3;
		parameter_int_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION4;
		parameter_int_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION5;
		parameter_int_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION6;
		parameter_int_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION7;
		parameter_int_t PF0_DPA_CAP_VER;
		parameter_int_t PF0_DSN_CAP_NEXTPTR;
		parameter_int_t PF0_EXPANSION_ROM_APERTURE_SIZE;
		parameter_enum_t PF0_EXPANSION_ROM_ENABLE;
		parameter_int_t PF0_INTERRUPT_LINE;
		parameter_int_t PF0_INTERRUPT_PIN;
		parameter_int_t PF0_LINK_CAP_ASPM_SUPPORT;
		parameter_int_t PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN1;
		parameter_int_t PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN2;
		parameter_int_t PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN3;
		parameter_int_t PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN1;
		parameter_int_t PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN2;
		parameter_int_t PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN3;
		parameter_int_t PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN1;
		parameter_int_t PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN2;
		parameter_int_t PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN3;
		parameter_int_t PF0_LINK_CAP_L1_EXIT_LATENCY_GEN1;
		parameter_int_t PF0_LINK_CAP_L1_EXIT_LATENCY_GEN2;
		parameter_int_t PF0_LINK_CAP_L1_EXIT_LATENCY_GEN3;
		parameter_enum_t PF0_LINK_STATUS_SLOT_CLOCK_CONFIG;
		parameter_int_t PF0_LTR_CAP_MAX_NOSNOOP_LAT;
		parameter_int_t PF0_LTR_CAP_MAX_SNOOP_LAT;
		parameter_int_t PF0_LTR_CAP_NEXTPTR;
		parameter_int_t PF0_LTR_CAP_VER;
		parameter_int_t PF0_MSIX_CAP_NEXTPTR;
		parameter_int_t PF0_MSIX_CAP_PBA_BIR;
		parameter_int_t PF0_MSIX_CAP_PBA_OFFSET;
		parameter_int_t PF0_MSIX_CAP_TABLE_BIR;
		parameter_int_t PF0_MSIX_CAP_TABLE_OFFSET;
		parameter_int_t PF0_MSIX_CAP_TABLE_SIZE;
		parameter_int_t PF0_MSI_CAP_MULTIMSGCAP;
		parameter_int_t PF0_MSI_CAP_NEXTPTR;
		parameter_int_t PF0_PB_CAP_NEXTPTR;
		parameter_enum_t PF0_PB_CAP_SYSTEM_ALLOCATED;
		parameter_int_t PF0_PB_CAP_VER;
		parameter_int_t PF0_PM_CAP_ID;
		parameter_int_t PF0_PM_CAP_NEXTPTR;
		parameter_enum_t PF0_PM_CAP_PMESUPPORT_D0;
		parameter_enum_t PF0_PM_CAP_PMESUPPORT_D1;
		parameter_enum_t PF0_PM_CAP_PMESUPPORT_D3HOT;
		parameter_enum_t PF0_PM_CAP_SUPP_D1_STATE;
		parameter_int_t PF0_PM_CAP_VER_ID;
		parameter_enum_t PF0_PM_CSR_NOSOFTRESET;
		parameter_enum_t PF0_RBAR_CAP_ENABLE;
		parameter_int_t PF0_RBAR_CAP_INDEX0;
		parameter_int_t PF0_RBAR_CAP_INDEX1;
		parameter_int_t PF0_RBAR_CAP_INDEX2;
		parameter_int_t PF0_RBAR_CAP_NEXTPTR;
		parameter_int_t PF0_RBAR_CAP_SIZE0;
		parameter_int_t PF0_RBAR_CAP_SIZE1;
		parameter_int_t PF0_RBAR_CAP_SIZE2;
		parameter_int_t PF0_RBAR_CAP_VER;
		parameter_int_t PF0_RBAR_NUM;
		parameter_int_t PF0_REVISION_ID;
		parameter_int_t PF0_SRIOV_BAR0_APERTURE_SIZE;
		parameter_int_t PF0_SRIOV_BAR0_CONTROL;
		parameter_int_t PF0_SRIOV_BAR1_APERTURE_SIZE;
		parameter_int_t PF0_SRIOV_BAR1_CONTROL;
		parameter_int_t PF0_SRIOV_BAR2_APERTURE_SIZE;
		parameter_int_t PF0_SRIOV_BAR2_CONTROL;
		parameter_int_t PF0_SRIOV_BAR3_APERTURE_SIZE;
		parameter_int_t PF0_SRIOV_BAR3_CONTROL;
		parameter_int_t PF0_SRIOV_BAR4_APERTURE_SIZE;
		parameter_int_t PF0_SRIOV_BAR4_CONTROL;
		parameter_int_t PF0_SRIOV_BAR5_APERTURE_SIZE;
		parameter_int_t PF0_SRIOV_BAR5_CONTROL;
		parameter_int_t PF0_SRIOV_CAP_INITIAL_VF;
		parameter_int_t PF0_SRIOV_CAP_NEXTPTR;
		parameter_int_t PF0_SRIOV_CAP_TOTAL_VF;
		parameter_int_t PF0_SRIOV_CAP_VER;
		parameter_int_t PF0_SRIOV_FIRST_VF_OFFSET;
		parameter_int_t PF0_SRIOV_FUNC_DEP_LINK;
		parameter_int_t PF0_SRIOV_SUPPORTED_PAGE_SIZE;
		parameter_int_t PF0_SRIOV_VF_DEVICE_ID;
		parameter_int_t PF0_SUBSYSTEM_ID;
		parameter_enum_t PF0_TPHR_CAP_DEV_SPECIFIC_MODE;
		parameter_enum_t PF0_TPHR_CAP_ENABLE;
		parameter_enum_t PF0_TPHR_CAP_INT_VEC_MODE;
		parameter_int_t PF0_TPHR_CAP_NEXTPTR;
		parameter_int_t PF0_TPHR_CAP_ST_MODE_SEL;
		parameter_int_t PF0_TPHR_CAP_ST_TABLE_LOC;
		parameter_int_t PF0_TPHR_CAP_ST_TABLE_SIZE;
		parameter_int_t PF0_TPHR_CAP_VER;
		parameter_int_t PF0_VC_CAP_NEXTPTR;
		parameter_int_t PF0_VC_CAP_VER;
		parameter_enum_t PF1_AER_CAP_ECRC_CHECK_CAPABLE;
		parameter_enum_t PF1_AER_CAP_ECRC_GEN_CAPABLE;
		parameter_int_t PF1_AER_CAP_NEXTPTR;
		parameter_int_t PF1_ARI_CAP_NEXTPTR;
		parameter_int_t PF1_ARI_CAP_NEXT_FUNC;
		parameter_int_t PF1_BAR0_APERTURE_SIZE;
		parameter_int_t PF1_BAR0_CONTROL;
		parameter_int_t PF1_BAR1_APERTURE_SIZE;
		parameter_int_t PF1_BAR1_CONTROL;
		parameter_int_t PF1_BAR2_APERTURE_SIZE;
		parameter_int_t PF1_BAR2_CONTROL;
		parameter_int_t PF1_BAR3_APERTURE_SIZE;
		parameter_int_t PF1_BAR3_CONTROL;
		parameter_int_t PF1_BAR4_APERTURE_SIZE;
		parameter_int_t PF1_BAR4_CONTROL;
		parameter_int_t PF1_BAR5_APERTURE_SIZE;
		parameter_int_t PF1_BAR5_CONTROL;
		parameter_int_t PF1_BIST_REGISTER;
		parameter_int_t PF1_CAPABILITY_POINTER;
		parameter_int_t PF1_CLASS_CODE;
		parameter_int_t PF1_DEVICE_ID;
		parameter_int_t PF1_DEV_CAP_MAX_PAYLOAD_SIZE;
		parameter_int_t PF1_DPA_CAP_NEXTPTR;
		parameter_int_t PF1_DPA_CAP_SUB_STATE_CONTROL;
		parameter_enum_t PF1_DPA_CAP_SUB_STATE_CONTROL_EN;
		parameter_int_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION0;
		parameter_int_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION1;
		parameter_int_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION2;
		parameter_int_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION3;
		parameter_int_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION4;
		parameter_int_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION5;
		parameter_int_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION6;
		parameter_int_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION7;
		parameter_int_t PF1_DPA_CAP_VER;
		parameter_int_t PF1_DSN_CAP_NEXTPTR;
		parameter_int_t PF1_EXPANSION_ROM_APERTURE_SIZE;
		parameter_enum_t PF1_EXPANSION_ROM_ENABLE;
		parameter_int_t PF1_INTERRUPT_LINE;
		parameter_int_t PF1_INTERRUPT_PIN;
		parameter_int_t PF1_MSIX_CAP_NEXTPTR;
		parameter_int_t PF1_MSIX_CAP_PBA_BIR;
		parameter_int_t PF1_MSIX_CAP_PBA_OFFSET;
		parameter_int_t PF1_MSIX_CAP_TABLE_BIR;
		parameter_int_t PF1_MSIX_CAP_TABLE_OFFSET;
		parameter_int_t PF1_MSIX_CAP_TABLE_SIZE;
		parameter_int_t PF1_MSI_CAP_MULTIMSGCAP;
		parameter_int_t PF1_MSI_CAP_NEXTPTR;
		parameter_int_t PF1_PB_CAP_NEXTPTR;
		parameter_enum_t PF1_PB_CAP_SYSTEM_ALLOCATED;
		parameter_int_t PF1_PB_CAP_VER;
		parameter_int_t PF1_PM_CAP_ID;
		parameter_int_t PF1_PM_CAP_NEXTPTR;
		parameter_int_t PF1_PM_CAP_VER_ID;
		parameter_enum_t PF1_RBAR_CAP_ENABLE;
		parameter_int_t PF1_RBAR_CAP_INDEX0;
		parameter_int_t PF1_RBAR_CAP_INDEX1;
		parameter_int_t PF1_RBAR_CAP_INDEX2;
		parameter_int_t PF1_RBAR_CAP_NEXTPTR;
		parameter_int_t PF1_RBAR_CAP_SIZE0;
		parameter_int_t PF1_RBAR_CAP_SIZE1;
		parameter_int_t PF1_RBAR_CAP_SIZE2;
		parameter_int_t PF1_RBAR_CAP_VER;
		parameter_int_t PF1_RBAR_NUM;
		parameter_int_t PF1_REVISION_ID;
		parameter_int_t PF1_SRIOV_BAR0_APERTURE_SIZE;
		parameter_int_t PF1_SRIOV_BAR0_CONTROL;
		parameter_int_t PF1_SRIOV_BAR1_APERTURE_SIZE;
		parameter_int_t PF1_SRIOV_BAR1_CONTROL;
		parameter_int_t PF1_SRIOV_BAR2_APERTURE_SIZE;
		parameter_int_t PF1_SRIOV_BAR2_CONTROL;
		parameter_int_t PF1_SRIOV_BAR3_APERTURE_SIZE;
		parameter_int_t PF1_SRIOV_BAR3_CONTROL;
		parameter_int_t PF1_SRIOV_BAR4_APERTURE_SIZE;
		parameter_int_t PF1_SRIOV_BAR4_CONTROL;
		parameter_int_t PF1_SRIOV_BAR5_APERTURE_SIZE;
		parameter_int_t PF1_SRIOV_BAR5_CONTROL;
		parameter_int_t PF1_SRIOV_CAP_INITIAL_VF;
		parameter_int_t PF1_SRIOV_CAP_NEXTPTR;
		parameter_int_t PF1_SRIOV_CAP_TOTAL_VF;
		parameter_int_t PF1_SRIOV_CAP_VER;
		parameter_int_t PF1_SRIOV_FIRST_VF_OFFSET;
		parameter_int_t PF1_SRIOV_FUNC_DEP_LINK;
		parameter_int_t PF1_SRIOV_SUPPORTED_PAGE_SIZE;
		parameter_int_t PF1_SRIOV_VF_DEVICE_ID;
		parameter_int_t PF1_SUBSYSTEM_ID;
		parameter_enum_t PF1_TPHR_CAP_DEV_SPECIFIC_MODE;
		parameter_enum_t PF1_TPHR_CAP_ENABLE;
		parameter_enum_t PF1_TPHR_CAP_INT_VEC_MODE;
		parameter_int_t PF1_TPHR_CAP_NEXTPTR;
		parameter_int_t PF1_TPHR_CAP_ST_MODE_SEL;
		parameter_int_t PF1_TPHR_CAP_ST_TABLE_LOC;
		parameter_int_t PF1_TPHR_CAP_ST_TABLE_SIZE;
		parameter_int_t PF1_TPHR_CAP_VER;
		parameter_enum_t PL_DISABLE_EI_INFER_IN_L0;
		parameter_enum_t PL_DISABLE_GEN3_DC_BALANCE;
		parameter_enum_t PL_DISABLE_SCRAMBLING;
		parameter_enum_t PL_DISABLE_UPCONFIG_CAPABLE;
		parameter_enum_t PL_EQ_ADAPT_DISABLE_COEFF_CHECK;
		parameter_enum_t PL_EQ_ADAPT_DISABLE_PRESET_CHECK;
		parameter_int_t PL_EQ_ADAPT_ITER_COUNT;
		parameter_int_t PL_EQ_ADAPT_REJECT_RETRY_COUNT;
		parameter_enum_t PL_EQ_BYPASS_PHASE23;
		parameter_enum_t PL_EQ_SHORT_ADAPT_PHASE;
		parameter_int_t PL_LANE0_EQ_CONTROL;
		parameter_int_t PL_LANE1_EQ_CONTROL;
		parameter_int_t PL_LANE2_EQ_CONTROL;
		parameter_int_t PL_LANE3_EQ_CONTROL;
		parameter_int_t PL_LANE4_EQ_CONTROL;
		parameter_int_t PL_LANE5_EQ_CONTROL;
		parameter_int_t PL_LANE6_EQ_CONTROL;
		parameter_int_t PL_LANE7_EQ_CONTROL;
		parameter_int_t PL_LINK_CAP_MAX_LINK_SPEED;
		parameter_int_t PL_LINK_CAP_MAX_LINK_WIDTH;
		parameter_int_t PL_N_FTS_COMCLK_GEN1;
		parameter_int_t PL_N_FTS_COMCLK_GEN2;
		parameter_int_t PL_N_FTS_COMCLK_GEN3;
		parameter_int_t PL_N_FTS_GEN1;
		parameter_int_t PL_N_FTS_GEN2;
		parameter_int_t PL_N_FTS_GEN3;
		parameter_enum_t PL_SIM_FAST_LINK_TRAINING;
		parameter_enum_t PL_UPSTREAM_FACING;
		parameter_int_t PM_ASPML0S_TIMEOUT;
		parameter_int_t PM_ASPML1_ENTRY_DELAY;
		parameter_enum_t PM_ENABLE_SLOT_POWER_CAPTURE;
		parameter_int_t PM_L1_REENTRY_DELAY;
		parameter_int_t PM_PME_SERVICE_TIMEOUT_DELAY;
		parameter_int_t PM_PME_TURNOFF_ACK_DELAY;
		parameter_string_t SIM_VERSION;
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
		parameter_enum_t SRIOV_CAP_ENABLE;
		parameter_int_t TL_COMPL_TIMEOUT_REG0;
		parameter_int_t TL_COMPL_TIMEOUT_REG1;
		parameter_int_t TL_CREDITS_CD;
		parameter_int_t TL_CREDITS_CH;
		parameter_int_t TL_CREDITS_NPD;
		parameter_int_t TL_CREDITS_NPH;
		parameter_int_t TL_CREDITS_PD;
		parameter_int_t TL_CREDITS_PH;
		parameter_enum_t TL_ENABLE_MESSAGE_RID_CHECK_ENABLE;
		parameter_enum_t TL_EXTENDED_CFG_EXTEND_INTERFACE_ENABLE;
		parameter_enum_t TL_LEGACY_CFG_EXTEND_INTERFACE_ENABLE;
		parameter_enum_t TL_LEGACY_MODE_ENABLE;
		parameter_enum_t TL_PF_ENABLE_REG;
		parameter_enum_t TL_TAG_MGMT_ENABLE;
		parameter_int_t VF0_ARI_CAP_NEXTPTR;
		parameter_int_t VF0_CAPABILITY_POINTER;
		parameter_int_t VF0_MSIX_CAP_PBA_BIR;
		parameter_int_t VF0_MSIX_CAP_PBA_OFFSET;
		parameter_int_t VF0_MSIX_CAP_TABLE_BIR;
		parameter_int_t VF0_MSIX_CAP_TABLE_OFFSET;
		parameter_int_t VF0_MSIX_CAP_TABLE_SIZE;
		parameter_int_t VF0_MSI_CAP_MULTIMSGCAP;
		parameter_int_t VF0_PM_CAP_ID;
		parameter_int_t VF0_PM_CAP_NEXTPTR;
		parameter_int_t VF0_PM_CAP_VER_ID;
		parameter_enum_t VF0_TPHR_CAP_DEV_SPECIFIC_MODE;
		parameter_enum_t VF0_TPHR_CAP_ENABLE;
		parameter_enum_t VF0_TPHR_CAP_INT_VEC_MODE;
		parameter_int_t VF0_TPHR_CAP_NEXTPTR;
		parameter_int_t VF0_TPHR_CAP_ST_MODE_SEL;
		parameter_int_t VF0_TPHR_CAP_ST_TABLE_LOC;
		parameter_int_t VF0_TPHR_CAP_ST_TABLE_SIZE;
		parameter_int_t VF0_TPHR_CAP_VER;
		parameter_int_t VF1_ARI_CAP_NEXTPTR;
		parameter_int_t VF1_MSIX_CAP_PBA_BIR;
		parameter_int_t VF1_MSIX_CAP_PBA_OFFSET;
		parameter_int_t VF1_MSIX_CAP_TABLE_BIR;
		parameter_int_t VF1_MSIX_CAP_TABLE_OFFSET;
		parameter_int_t VF1_MSIX_CAP_TABLE_SIZE;
		parameter_int_t VF1_MSI_CAP_MULTIMSGCAP;
		parameter_int_t VF1_PM_CAP_ID;
		parameter_int_t VF1_PM_CAP_NEXTPTR;
		parameter_int_t VF1_PM_CAP_VER_ID;
		parameter_enum_t VF1_TPHR_CAP_DEV_SPECIFIC_MODE;
		parameter_enum_t VF1_TPHR_CAP_ENABLE;
		parameter_enum_t VF1_TPHR_CAP_INT_VEC_MODE;
		parameter_int_t VF1_TPHR_CAP_NEXTPTR;
		parameter_int_t VF1_TPHR_CAP_ST_MODE_SEL;
		parameter_int_t VF1_TPHR_CAP_ST_TABLE_LOC;
		parameter_int_t VF1_TPHR_CAP_ST_TABLE_SIZE;
		parameter_int_t VF1_TPHR_CAP_VER;
		parameter_int_t VF2_ARI_CAP_NEXTPTR;
		parameter_int_t VF2_MSIX_CAP_PBA_BIR;
		parameter_int_t VF2_MSIX_CAP_PBA_OFFSET;
		parameter_int_t VF2_MSIX_CAP_TABLE_BIR;
		parameter_int_t VF2_MSIX_CAP_TABLE_OFFSET;
		parameter_int_t VF2_MSIX_CAP_TABLE_SIZE;
		parameter_int_t VF2_MSI_CAP_MULTIMSGCAP;
		parameter_int_t VF2_PM_CAP_ID;
		parameter_int_t VF2_PM_CAP_NEXTPTR;
		parameter_int_t VF2_PM_CAP_VER_ID;
		parameter_enum_t VF2_TPHR_CAP_DEV_SPECIFIC_MODE;
		parameter_enum_t VF2_TPHR_CAP_ENABLE;
		parameter_enum_t VF2_TPHR_CAP_INT_VEC_MODE;
		parameter_int_t VF2_TPHR_CAP_NEXTPTR;
		parameter_int_t VF2_TPHR_CAP_ST_MODE_SEL;
		parameter_int_t VF2_TPHR_CAP_ST_TABLE_LOC;
		parameter_int_t VF2_TPHR_CAP_ST_TABLE_SIZE;
		parameter_int_t VF2_TPHR_CAP_VER;
		parameter_int_t VF3_ARI_CAP_NEXTPTR;
		parameter_int_t VF3_MSIX_CAP_PBA_BIR;
		parameter_int_t VF3_MSIX_CAP_PBA_OFFSET;
		parameter_int_t VF3_MSIX_CAP_TABLE_BIR;
		parameter_int_t VF3_MSIX_CAP_TABLE_OFFSET;
		parameter_int_t VF3_MSIX_CAP_TABLE_SIZE;
		parameter_int_t VF3_MSI_CAP_MULTIMSGCAP;
		parameter_int_t VF3_PM_CAP_ID;
		parameter_int_t VF3_PM_CAP_NEXTPTR;
		parameter_int_t VF3_PM_CAP_VER_ID;
		parameter_enum_t VF3_TPHR_CAP_DEV_SPECIFIC_MODE;
		parameter_enum_t VF3_TPHR_CAP_ENABLE;
		parameter_enum_t VF3_TPHR_CAP_INT_VEC_MODE;
		parameter_int_t VF3_TPHR_CAP_NEXTPTR;
		parameter_int_t VF3_TPHR_CAP_ST_MODE_SEL;
		parameter_int_t VF3_TPHR_CAP_ST_TABLE_LOC;
		parameter_int_t VF3_TPHR_CAP_ST_TABLE_SIZE;
		parameter_int_t VF3_TPHR_CAP_VER;
		parameter_int_t VF4_ARI_CAP_NEXTPTR;
		parameter_int_t VF4_MSIX_CAP_PBA_BIR;
		parameter_int_t VF4_MSIX_CAP_PBA_OFFSET;
		parameter_int_t VF4_MSIX_CAP_TABLE_BIR;
		parameter_int_t VF4_MSIX_CAP_TABLE_OFFSET;
		parameter_int_t VF4_MSIX_CAP_TABLE_SIZE;
		parameter_int_t VF4_MSI_CAP_MULTIMSGCAP;
		parameter_int_t VF4_PM_CAP_ID;
		parameter_int_t VF4_PM_CAP_NEXTPTR;
		parameter_int_t VF4_PM_CAP_VER_ID;
		parameter_enum_t VF4_TPHR_CAP_DEV_SPECIFIC_MODE;
		parameter_enum_t VF4_TPHR_CAP_ENABLE;
		parameter_enum_t VF4_TPHR_CAP_INT_VEC_MODE;
		parameter_int_t VF4_TPHR_CAP_NEXTPTR;
		parameter_int_t VF4_TPHR_CAP_ST_MODE_SEL;
		parameter_int_t VF4_TPHR_CAP_ST_TABLE_LOC;
		parameter_int_t VF4_TPHR_CAP_ST_TABLE_SIZE;
		parameter_int_t VF4_TPHR_CAP_VER;
		parameter_int_t VF5_ARI_CAP_NEXTPTR;
		parameter_int_t VF5_MSIX_CAP_PBA_BIR;
		parameter_int_t VF5_MSIX_CAP_PBA_OFFSET;
		parameter_int_t VF5_MSIX_CAP_TABLE_BIR;
		parameter_int_t VF5_MSIX_CAP_TABLE_OFFSET;
		parameter_int_t VF5_MSIX_CAP_TABLE_SIZE;
		parameter_int_t VF5_MSI_CAP_MULTIMSGCAP;
		parameter_int_t VF5_PM_CAP_ID;
		parameter_int_t VF5_PM_CAP_NEXTPTR;
		parameter_int_t VF5_PM_CAP_VER_ID;
		parameter_enum_t VF5_TPHR_CAP_DEV_SPECIFIC_MODE;
		parameter_enum_t VF5_TPHR_CAP_ENABLE;
		parameter_enum_t VF5_TPHR_CAP_INT_VEC_MODE;
		parameter_int_t VF5_TPHR_CAP_NEXTPTR;
		parameter_int_t VF5_TPHR_CAP_ST_MODE_SEL;
		parameter_int_t VF5_TPHR_CAP_ST_TABLE_LOC;
		parameter_int_t VF5_TPHR_CAP_ST_TABLE_SIZE;
		parameter_int_t VF5_TPHR_CAP_VER;
		//Verilog Ports in definition order:
		NetFlow* CFGCURRENTSPEED_A0_B; // net ID: CFGCURRENTSPEED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGDPASUBSTATECHANGE_A0_B; // net ID: CFGDPASUBSTATECHANGE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGERRCOROUT_A0_B; // net ID: CFGERRCOROUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGERRFATALOUT_A0_B; // net ID: CFGERRFATALOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGERRNONFATALOUT_A0_B; // net ID: CFGERRNONFATALOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGEXTFUNCTIONNUMBER_A0_B; // net ID: CFGEXTFUNCTIONNUMBER lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGEXTREADRECEIVED_A0_B; // net ID: CFGEXTREADRECEIVED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGEXTREGISTERNUMBER_A0_B; // net ID: CFGEXTREGISTERNUMBER lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGEXTWRITEBYTEENABLE_A0_B; // net ID: CFGEXTWRITEBYTEENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGEXTWRITEDATA_A0_B; // net ID: CFGEXTWRITEDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGEXTWRITERECEIVED_A0_B; // net ID: CFGEXTWRITERECEIVED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFCCPLD_A0_B; // net ID: CFGFCCPLD lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFCCPLH_A0_B; // net ID: CFGFCCPLH lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFCNPD_A0_B; // net ID: CFGFCNPD lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFCNPH_A0_B; // net ID: CFGFCNPH lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFCPD_A0_B; // net ID: CFGFCPD lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFCPH_A0_B; // net ID: CFGFCPH lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFLRINPROCESS_A0_B; // net ID: CFGFLRINPROCESS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFUNCTIONPOWERSTATE_A0_B; // net ID: CFGFUNCTIONPOWERSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGFUNCTIONSTATUS_A0_B; // net ID: CFGFUNCTIONSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGHOTRESETOUT_A0_B; // net ID: CFGHOTRESETOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINPUTUPDATEDONE_A0_B; // net ID: CFGINPUTUPDATEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTAOUTPUT_A0_B; // net ID: CFGINTERRUPTAOUTPUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTBOUTPUT_A0_B; // net ID: CFGINTERRUPTBOUTPUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTCOUTPUT_A0_B; // net ID: CFGINTERRUPTCOUTPUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTDOUTPUT_A0_B; // net ID: CFGINTERRUPTDOUTPUT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIDATA_A0_B; // net ID: CFGINTERRUPTMSIDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIENABLE_A0_B; // net ID: CFGINTERRUPTMSIENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIFAIL_A0_B; // net ID: CFGINTERRUPTMSIFAIL lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIMASKUPDATE_A0_B; // net ID: CFGINTERRUPTMSIMASKUPDATE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIMMENABLE_A0_B; // net ID: CFGINTERRUPTMSIMMENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSISENT_A0_B; // net ID: CFGINTERRUPTMSISENT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIVFENABLE_A0_B; // net ID: CFGINTERRUPTMSIVFENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIXENABLE_A0_B; // net ID: CFGINTERRUPTMSIXENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIXFAIL_A0_B; // net ID: CFGINTERRUPTMSIXFAIL lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIXMASK_A0_B; // net ID: CFGINTERRUPTMSIXMASK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIXSENT_A0_B; // net ID: CFGINTERRUPTMSIXSENT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIXVFENABLE_A0_B; // net ID: CFGINTERRUPTMSIXVFENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTMSIXVFMASK_A0_B; // net ID: CFGINTERRUPTMSIXVFMASK lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGINTERRUPTSENT_A0_B; // net ID: CFGINTERRUPTSENT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLINKPOWERSTATE_A0_B; // net ID: CFGLINKPOWERSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLOCALERROR_A0_B; // net ID: CFGLOCALERROR lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLTRENABLE_A0_B; // net ID: CFGLTRENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGLTSSMSTATE_A0_B; // net ID: CFGLTSSMSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMAXPAYLOAD_A0_B; // net ID: CFGMAXPAYLOAD lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMAXREADREQ_A0_B; // net ID: CFGMAXREADREQ lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMCUPDATEDONE_A0_B; // net ID: CFGMCUPDATEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMGMTREADDATA_A0_B; // net ID: CFGMGMTREADDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMGMTREADWRITEDONE_A0_B; // net ID: CFGMGMTREADWRITEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVED_A0_B; // net ID: CFGMSGRECEIVED lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDDATA_A0_B; // net ID: CFGMSGRECEIVEDDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGRECEIVEDTYPE_A0_B; // net ID: CFGMSGRECEIVEDTYPE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGMSGTRANSMITDONE_A0_B; // net ID: CFGMSGTRANSMITDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGNEGOTIATEDWIDTH_A0_B; // net ID: CFGNEGOTIATEDWIDTH lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGOBFFENABLE_A0_B; // net ID: CFGOBFFENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPERFUNCSTATUSDATA_A0_B; // net ID: CFGPERFUNCSTATUSDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPERFUNCTIONUPDATEDONE_A0_B; // net ID: CFGPERFUNCTIONUPDATEDONE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPHYLINKDOWN_A0_B; // net ID: CFGPHYLINKDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPHYLINKSTATUS_A0_B; // net ID: CFGPHYLINKSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPLSTATUSCHANGE_A0_B; // net ID: CFGPLSTATUSCHANGE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGPOWERSTATECHANGEINTERRUPT_A0_B; // net ID: CFGPOWERSTATECHANGEINTERRUPT lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGRCBSTATUS_A0_B; // net ID: CFGRCBSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTPHFUNCTIONNUM_A0_B; // net ID: CFGTPHFUNCTIONNUM lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTPHREQUESTERENABLE_A0_B; // net ID: CFGTPHREQUESTERENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTPHSTMODE_A0_B; // net ID: CFGTPHSTMODE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTPHSTTADDRESS_A0_B; // net ID: CFGTPHSTTADDRESS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTPHSTTREADENABLE_A0_B; // net ID: CFGTPHSTTREADENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTPHSTTWRITEBYTEVALID_A0_B; // net ID: CFGTPHSTTWRITEBYTEVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTPHSTTWRITEDATA_A0_B; // net ID: CFGTPHSTTWRITEDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGTPHSTTWRITEENABLE_A0_B; // net ID: CFGTPHSTTWRITEENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGVFFLRINPROCESS_A0_B; // net ID: CFGVFFLRINPROCESS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGVFPOWERSTATE_A0_B; // net ID: CFGVFPOWERSTATE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGVFSTATUS_A0_B; // net ID: CFGVFSTATUS lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGVFTPHREQUESTERENABLE_A0_B; // net ID: CFGVFTPHREQUESTERENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGVFTPHSTMODE_A0_B; // net ID: CFGVFTPHSTMODE lsb: 0  msb: 0 OUTPUT
		NetFlow* DBGDATAOUT_A0_B; // net ID: DBGDATAOUT lsb: 0  msb: 0 OUTPUT
		NetFlow* DRPDO_A0_B; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
		NetFlow* DRPRDY_A0_B; // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISCQTDATA_A0_B; // net ID: MAXISCQTDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISCQTKEEP_A0_B; // net ID: MAXISCQTKEEP lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISCQTLAST_A0_B; // net ID: MAXISCQTLAST lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISCQTUSER_A0_B; // net ID: MAXISCQTUSER lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISCQTVALID_A0_B; // net ID: MAXISCQTVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISRCTDATA_A0_B; // net ID: MAXISRCTDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISRCTKEEP_A0_B; // net ID: MAXISRCTKEEP lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISRCTLAST_A0_B; // net ID: MAXISRCTLAST lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISRCTUSER_A0_B; // net ID: MAXISRCTUSER lsb: 0  msb: 0 OUTPUT
		NetFlow* MAXISRCTVALID_A0_B; // net ID: MAXISRCTVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMREADADDRESSAL_A0_B; // net ID: MICOMPLETIONRAMREADADDRESSAL lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMREADADDRESSAU_A0_B; // net ID: MICOMPLETIONRAMREADADDRESSAU lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMREADADDRESSBL_A0_B; // net ID: MICOMPLETIONRAMREADADDRESSBL lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMREADADDRESSBU_A0_B; // net ID: MICOMPLETIONRAMREADADDRESSBU lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMREADENABLEL_A0_B; // net ID: MICOMPLETIONRAMREADENABLEL lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMREADENABLEU_A0_B; // net ID: MICOMPLETIONRAMREADENABLEU lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMWRITEADDRESSAL_A0_B; // net ID: MICOMPLETIONRAMWRITEADDRESSAL lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMWRITEADDRESSAU_A0_B; // net ID: MICOMPLETIONRAMWRITEADDRESSAU lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMWRITEADDRESSBL_A0_B; // net ID: MICOMPLETIONRAMWRITEADDRESSBL lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMWRITEADDRESSBU_A0_B; // net ID: MICOMPLETIONRAMWRITEADDRESSBU lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMWRITEDATAL_A0_B; // net ID: MICOMPLETIONRAMWRITEDATAL lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMWRITEDATAU_A0_B; // net ID: MICOMPLETIONRAMWRITEDATAU lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMWRITEENABLEL_A0_B; // net ID: MICOMPLETIONRAMWRITEENABLEL lsb: 0  msb: 0 OUTPUT
		NetFlow* MICOMPLETIONRAMWRITEENABLEU_A0_B; // net ID: MICOMPLETIONRAMWRITEENABLEU lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREPLAYRAMADDRESS_A0_B; // net ID: MIREPLAYRAMADDRESS lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREPLAYRAMREADENABLE_A0_B; // net ID: MIREPLAYRAMREADENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREPLAYRAMWRITEDATA_A0_B; // net ID: MIREPLAYRAMWRITEDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREPLAYRAMWRITEENABLE_A0_B; // net ID: MIREPLAYRAMWRITEENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREQUESTRAMREADADDRESSA_A0_B; // net ID: MIREQUESTRAMREADADDRESSA lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREQUESTRAMREADADDRESSB_A0_B; // net ID: MIREQUESTRAMREADADDRESSB lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREQUESTRAMREADENABLE_A0_B; // net ID: MIREQUESTRAMREADENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREQUESTRAMWRITEADDRESSA_A0_B; // net ID: MIREQUESTRAMWRITEADDRESSA lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREQUESTRAMWRITEADDRESSB_A0_B; // net ID: MIREQUESTRAMWRITEADDRESSB lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREQUESTRAMWRITEDATA_A0_B; // net ID: MIREQUESTRAMWRITEDATA lsb: 0  msb: 0 OUTPUT
		NetFlow* MIREQUESTRAMWRITEENABLE_A0_B; // net ID: MIREQUESTRAMWRITEENABLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PCIECQNPREQCOUNT_A0_B; // net ID: PCIECQNPREQCOUNT lsb: 0  msb: 0 OUTPUT
		NetFlow* PCIERQSEQNUM_A0_B; // net ID: PCIERQSEQNUM lsb: 0  msb: 0 OUTPUT
		NetFlow* PCIERQSEQNUMVLD_A0_B; // net ID: PCIERQSEQNUMVLD lsb: 0  msb: 0 OUTPUT
		NetFlow* PCIERQTAG_A0_B; // net ID: PCIERQTAG lsb: 0  msb: 0 OUTPUT
		NetFlow* PCIERQTAGAV_A0_B; // net ID: PCIERQTAGAV lsb: 0  msb: 0 OUTPUT
		NetFlow* PCIERQTAGVLD_A0_B; // net ID: PCIERQTAGVLD lsb: 0  msb: 0 OUTPUT
		NetFlow* PCIETFCNPDAV_A0_B; // net ID: PCIETFCNPDAV lsb: 0  msb: 0 OUTPUT
		NetFlow* PCIETFCNPHAV_A0_B; // net ID: PCIETFCNPHAV lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX0EQCONTROL_A0_B; // net ID: PIPERX0EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX0EQLPLFFS_A0_B; // net ID: PIPERX0EQLPLFFS lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX0EQLPTXPRESET_A0_B; // net ID: PIPERX0EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX0EQPRESET_A0_B; // net ID: PIPERX0EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX0POLARITY_A0_B; // net ID: PIPERX0POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX1EQCONTROL_A0_B; // net ID: PIPERX1EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX1EQLPLFFS_A0_B; // net ID: PIPERX1EQLPLFFS lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX1EQLPTXPRESET_A0_B; // net ID: PIPERX1EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX1EQPRESET_A0_B; // net ID: PIPERX1EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX1POLARITY_A0_B; // net ID: PIPERX1POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX2EQCONTROL_A0_B; // net ID: PIPERX2EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX2EQLPLFFS_A0_B; // net ID: PIPERX2EQLPLFFS lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX2EQLPTXPRESET_A0_B; // net ID: PIPERX2EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX2EQPRESET_A0_B; // net ID: PIPERX2EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX2POLARITY_A0_B; // net ID: PIPERX2POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX3EQCONTROL_A0_B; // net ID: PIPERX3EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX3EQLPLFFS_A0_B; // net ID: PIPERX3EQLPLFFS lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX3EQLPTXPRESET_A0_B; // net ID: PIPERX3EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX3EQPRESET_A0_B; // net ID: PIPERX3EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX3POLARITY_A0_B; // net ID: PIPERX3POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX4EQCONTROL_A0_B; // net ID: PIPERX4EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX4EQLPLFFS_A0_B; // net ID: PIPERX4EQLPLFFS lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX4EQLPTXPRESET_A0_B; // net ID: PIPERX4EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX4EQPRESET_A0_B; // net ID: PIPERX4EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX4POLARITY_A0_B; // net ID: PIPERX4POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX5EQCONTROL_A0_B; // net ID: PIPERX5EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX5EQLPLFFS_A0_B; // net ID: PIPERX5EQLPLFFS lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX5EQLPTXPRESET_A0_B; // net ID: PIPERX5EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX5EQPRESET_A0_B; // net ID: PIPERX5EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX5POLARITY_A0_B; // net ID: PIPERX5POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX6EQCONTROL_A0_B; // net ID: PIPERX6EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX6EQLPLFFS_A0_B; // net ID: PIPERX6EQLPLFFS lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX6EQLPTXPRESET_A0_B; // net ID: PIPERX6EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX6EQPRESET_A0_B; // net ID: PIPERX6EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX6POLARITY_A0_B; // net ID: PIPERX6POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX7EQCONTROL_A0_B; // net ID: PIPERX7EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX7EQLPLFFS_A0_B; // net ID: PIPERX7EQLPLFFS lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX7EQLPTXPRESET_A0_B; // net ID: PIPERX7EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX7EQPRESET_A0_B; // net ID: PIPERX7EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPERX7POLARITY_A0_B; // net ID: PIPERX7POLARITY lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0CHARISK_A0_B; // net ID: PIPETX0CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0COMPLIANCE_A0_B; // net ID: PIPETX0COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0DATA_A0_B; // net ID: PIPETX0DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0DATAVALID_A0_B; // net ID: PIPETX0DATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0ELECIDLE_A0_B; // net ID: PIPETX0ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0EQCONTROL_A0_B; // net ID: PIPETX0EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0EQDEEMPH_A0_B; // net ID: PIPETX0EQDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0EQPRESET_A0_B; // net ID: PIPETX0EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0POWERDOWN_A0_B; // net ID: PIPETX0POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0STARTBLOCK_A0_B; // net ID: PIPETX0STARTBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX0SYNCHEADER_A0_B; // net ID: PIPETX0SYNCHEADER lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1CHARISK_A0_B; // net ID: PIPETX1CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1COMPLIANCE_A0_B; // net ID: PIPETX1COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1DATA_A0_B; // net ID: PIPETX1DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1DATAVALID_A0_B; // net ID: PIPETX1DATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1ELECIDLE_A0_B; // net ID: PIPETX1ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1EQCONTROL_A0_B; // net ID: PIPETX1EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1EQDEEMPH_A0_B; // net ID: PIPETX1EQDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1EQPRESET_A0_B; // net ID: PIPETX1EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1POWERDOWN_A0_B; // net ID: PIPETX1POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1STARTBLOCK_A0_B; // net ID: PIPETX1STARTBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX1SYNCHEADER_A0_B; // net ID: PIPETX1SYNCHEADER lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2CHARISK_A0_B; // net ID: PIPETX2CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2COMPLIANCE_A0_B; // net ID: PIPETX2COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2DATA_A0_B; // net ID: PIPETX2DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2DATAVALID_A0_B; // net ID: PIPETX2DATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2ELECIDLE_A0_B; // net ID: PIPETX2ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2EQCONTROL_A0_B; // net ID: PIPETX2EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2EQDEEMPH_A0_B; // net ID: PIPETX2EQDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2EQPRESET_A0_B; // net ID: PIPETX2EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2POWERDOWN_A0_B; // net ID: PIPETX2POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2STARTBLOCK_A0_B; // net ID: PIPETX2STARTBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX2SYNCHEADER_A0_B; // net ID: PIPETX2SYNCHEADER lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3CHARISK_A0_B; // net ID: PIPETX3CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3COMPLIANCE_A0_B; // net ID: PIPETX3COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3DATA_A0_B; // net ID: PIPETX3DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3DATAVALID_A0_B; // net ID: PIPETX3DATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3ELECIDLE_A0_B; // net ID: PIPETX3ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3EQCONTROL_A0_B; // net ID: PIPETX3EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3EQDEEMPH_A0_B; // net ID: PIPETX3EQDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3EQPRESET_A0_B; // net ID: PIPETX3EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3POWERDOWN_A0_B; // net ID: PIPETX3POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3STARTBLOCK_A0_B; // net ID: PIPETX3STARTBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX3SYNCHEADER_A0_B; // net ID: PIPETX3SYNCHEADER lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4CHARISK_A0_B; // net ID: PIPETX4CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4COMPLIANCE_A0_B; // net ID: PIPETX4COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4DATA_A0_B; // net ID: PIPETX4DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4DATAVALID_A0_B; // net ID: PIPETX4DATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4ELECIDLE_A0_B; // net ID: PIPETX4ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4EQCONTROL_A0_B; // net ID: PIPETX4EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4EQDEEMPH_A0_B; // net ID: PIPETX4EQDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4EQPRESET_A0_B; // net ID: PIPETX4EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4POWERDOWN_A0_B; // net ID: PIPETX4POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4STARTBLOCK_A0_B; // net ID: PIPETX4STARTBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX4SYNCHEADER_A0_B; // net ID: PIPETX4SYNCHEADER lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5CHARISK_A0_B; // net ID: PIPETX5CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5COMPLIANCE_A0_B; // net ID: PIPETX5COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5DATA_A0_B; // net ID: PIPETX5DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5DATAVALID_A0_B; // net ID: PIPETX5DATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5ELECIDLE_A0_B; // net ID: PIPETX5ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5EQCONTROL_A0_B; // net ID: PIPETX5EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5EQDEEMPH_A0_B; // net ID: PIPETX5EQDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5EQPRESET_A0_B; // net ID: PIPETX5EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5POWERDOWN_A0_B; // net ID: PIPETX5POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5STARTBLOCK_A0_B; // net ID: PIPETX5STARTBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX5SYNCHEADER_A0_B; // net ID: PIPETX5SYNCHEADER lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6CHARISK_A0_B; // net ID: PIPETX6CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6COMPLIANCE_A0_B; // net ID: PIPETX6COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6DATA_A0_B; // net ID: PIPETX6DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6DATAVALID_A0_B; // net ID: PIPETX6DATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6ELECIDLE_A0_B; // net ID: PIPETX6ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6EQCONTROL_A0_B; // net ID: PIPETX6EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6EQDEEMPH_A0_B; // net ID: PIPETX6EQDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6EQPRESET_A0_B; // net ID: PIPETX6EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6POWERDOWN_A0_B; // net ID: PIPETX6POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6STARTBLOCK_A0_B; // net ID: PIPETX6STARTBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX6SYNCHEADER_A0_B; // net ID: PIPETX6SYNCHEADER lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7CHARISK_A0_B; // net ID: PIPETX7CHARISK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7COMPLIANCE_A0_B; // net ID: PIPETX7COMPLIANCE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7DATA_A0_B; // net ID: PIPETX7DATA lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7DATAVALID_A0_B; // net ID: PIPETX7DATAVALID lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7ELECIDLE_A0_B; // net ID: PIPETX7ELECIDLE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7EQCONTROL_A0_B; // net ID: PIPETX7EQCONTROL lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7EQDEEMPH_A0_B; // net ID: PIPETX7EQDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7EQPRESET_A0_B; // net ID: PIPETX7EQPRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7POWERDOWN_A0_B; // net ID: PIPETX7POWERDOWN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7STARTBLOCK_A0_B; // net ID: PIPETX7STARTBLOCK lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETX7SYNCHEADER_A0_B; // net ID: PIPETX7SYNCHEADER lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXDEEMPH_A0_B; // net ID: PIPETXDEEMPH lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXMARGIN_A0_B; // net ID: PIPETXMARGIN lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXRATE_A0_B; // net ID: PIPETXRATE lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXRCVRDET_A0_B; // net ID: PIPETXRCVRDET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXRESET_A0_B; // net ID: PIPETXRESET lsb: 0  msb: 0 OUTPUT
		NetFlow* PIPETXSWING_A0_B; // net ID: PIPETXSWING lsb: 0  msb: 0 OUTPUT
		NetFlow* PLEQINPROGRESS_A0_B; // net ID: PLEQINPROGRESS lsb: 0  msb: 0 OUTPUT
		NetFlow* PLEQPHASE_A0_B; // net ID: PLEQPHASE lsb: 0  msb: 0 OUTPUT
		NetFlow* PLGEN3PCSRXSLIDE_A0_B; // net ID: PLGEN3PCSRXSLIDE lsb: 0  msb: 0 OUTPUT
		NetFlow* SAXISCCTREADY_A0_B; // net ID: SAXISCCTREADY lsb: 0  msb: 0 OUTPUT
		NetFlow* SAXISRQTREADY_A0_B; // net ID: SAXISRQTREADY lsb: 0  msb: 0 OUTPUT
		NetFlow* CFGCONFIGSPACEENABLE_A0_B; // net ID: CFGCONFIGSPACEENABLE lsb: 0  msb: 0 INPUT
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
		NetFlow* CFGDSPORTNUMBER_A0_B; // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGDSPORTNUMBER_A1_B; // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGDSPORTNUMBER_A2_B; // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGDSPORTNUMBER_A3_B; // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGDSPORTNUMBER_A4_B; // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGDSPORTNUMBER_A5_B; // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGDSPORTNUMBER_A6_B; // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGDSPORTNUMBER_A7_B; // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
		NetFlow* CFGERRCORIN_A0_B; // net ID: CFGERRCORIN lsb: 0  msb: 0 INPUT
		NetFlow* CFGERRUNCORIN_A0_B; // net ID: CFGERRUNCORIN lsb: 0  msb: 0 INPUT
		NetFlow* CFGEXTREADDATA_A0_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A1_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A2_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A3_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A4_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A5_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A6_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A7_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A8_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A9_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A10_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A11_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A12_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A13_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A14_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A15_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A16_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A17_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A18_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A19_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A20_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A21_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A22_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A23_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A24_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A25_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A26_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A27_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A28_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A29_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A30_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATA_A31_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGEXTREADDATAVALID_A0_B; // net ID: CFGEXTREADDATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* CFGFCSEL_A0_B; // net ID: CFGFCSEL lsb: 0  msb: 2 INPUT
		NetFlow* CFGFCSEL_A1_B; // net ID: CFGFCSEL lsb: 0  msb: 2 INPUT
		NetFlow* CFGFCSEL_A2_B; // net ID: CFGFCSEL lsb: 0  msb: 2 INPUT
		NetFlow* CFGFLRDONE_A0_B; // net ID: CFGFLRDONE lsb: 0  msb: 1 INPUT
		NetFlow* CFGFLRDONE_A1_B; // net ID: CFGFLRDONE lsb: 0  msb: 1 INPUT
		NetFlow* CFGHOTRESETIN_A0_B; // net ID: CFGHOTRESETIN lsb: 0  msb: 0 INPUT
		NetFlow* CFGINPUTUPDATEREQUEST_A0_B; // net ID: CFGINPUTUPDATEREQUEST lsb: 0  msb: 0 INPUT
		NetFlow* CFGINTERRUPTINT_A0_B; // net ID: CFGINTERRUPTINT lsb: 0  msb: 3 INPUT
		NetFlow* CFGINTERRUPTINT_A1_B; // net ID: CFGINTERRUPTINT lsb: 0  msb: 3 INPUT
		NetFlow* CFGINTERRUPTINT_A2_B; // net ID: CFGINTERRUPTINT lsb: 0  msb: 3 INPUT
		NetFlow* CFGINTERRUPTINT_A3_B; // net ID: CFGINTERRUPTINT lsb: 0  msb: 3 INPUT
		NetFlow* CFGINTERRUPTMSIATTR_A0_B; // net ID: CFGINTERRUPTMSIATTR lsb: 0  msb: 2 INPUT
		NetFlow* CFGINTERRUPTMSIATTR_A1_B; // net ID: CFGINTERRUPTMSIATTR lsb: 0  msb: 2 INPUT
		NetFlow* CFGINTERRUPTMSIATTR_A2_B; // net ID: CFGINTERRUPTMSIATTR lsb: 0  msb: 2 INPUT
		NetFlow* CFGINTERRUPTMSIFUNCTIONNUMBER_A0_B; // net ID: CFGINTERRUPTMSIFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
		NetFlow* CFGINTERRUPTMSIFUNCTIONNUMBER_A1_B; // net ID: CFGINTERRUPTMSIFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
		NetFlow* CFGINTERRUPTMSIFUNCTIONNUMBER_A2_B; // net ID: CFGINTERRUPTMSIFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A0_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A1_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A2_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A3_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A4_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A5_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A6_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A7_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A8_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A9_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A10_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A11_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A12_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A13_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A14_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A15_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A16_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A17_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A18_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A19_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A20_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A21_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A22_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A23_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A24_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A25_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A26_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A27_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A28_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A29_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A30_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIINT_A31_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A0_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A1_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A2_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A3_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A4_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A5_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A6_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A7_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A8_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A9_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A10_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A11_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A12_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A13_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A14_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A15_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A16_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A17_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A18_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A19_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A20_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A21_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A22_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A23_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A24_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A25_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A26_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A27_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A28_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A29_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A30_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A31_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A32_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A33_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A34_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A35_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A36_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A37_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A38_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A39_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A40_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A41_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A42_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A43_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A44_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A45_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A46_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A47_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A48_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A49_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A50_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A51_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A52_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A53_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A54_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A55_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A56_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A57_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A58_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A59_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A60_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A61_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A62_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A63_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSISELECT_A0_B; // net ID: CFGINTERRUPTMSISELECT lsb: 0  msb: 3 INPUT
		NetFlow* CFGINTERRUPTMSISELECT_A1_B; // net ID: CFGINTERRUPTMSISELECT lsb: 0  msb: 3 INPUT
		NetFlow* CFGINTERRUPTMSISELECT_A2_B; // net ID: CFGINTERRUPTMSISELECT lsb: 0  msb: 3 INPUT
		NetFlow* CFGINTERRUPTMSISELECT_A3_B; // net ID: CFGINTERRUPTMSISELECT lsb: 0  msb: 3 INPUT
		NetFlow* CFGINTERRUPTMSITPHPRESENT_A0_B; // net ID: CFGINTERRUPTMSITPHPRESENT lsb: 0  msb: 0 INPUT
		NetFlow* CFGINTERRUPTMSITPHSTTAG_A0_B; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
		NetFlow* CFGINTERRUPTMSITPHSTTAG_A1_B; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
		NetFlow* CFGINTERRUPTMSITPHSTTAG_A2_B; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
		NetFlow* CFGINTERRUPTMSITPHSTTAG_A3_B; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
		NetFlow* CFGINTERRUPTMSITPHSTTAG_A4_B; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
		NetFlow* CFGINTERRUPTMSITPHSTTAG_A5_B; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
		NetFlow* CFGINTERRUPTMSITPHSTTAG_A6_B; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
		NetFlow* CFGINTERRUPTMSITPHSTTAG_A7_B; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
		NetFlow* CFGINTERRUPTMSITPHSTTAG_A8_B; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
		NetFlow* CFGINTERRUPTMSITPHTYPE_A0_B; // net ID: CFGINTERRUPTMSITPHTYPE lsb: 0  msb: 1 INPUT
		NetFlow* CFGINTERRUPTMSITPHTYPE_A1_B; // net ID: CFGINTERRUPTMSITPHTYPE lsb: 0  msb: 1 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A0_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A1_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A2_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A3_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A4_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A5_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A6_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A7_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A8_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A9_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A10_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A11_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A12_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A13_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A14_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A15_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A16_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A17_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A18_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A19_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A20_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A21_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A22_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A23_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A24_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A25_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A26_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A27_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A28_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A29_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A30_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A31_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A32_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A33_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A34_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A35_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A36_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A37_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A38_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A39_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A40_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A41_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A42_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A43_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A44_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A45_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A46_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A47_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A48_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A49_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A50_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A51_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A52_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A53_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A54_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A55_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A56_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A57_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A58_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A59_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A60_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A61_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A62_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXADDRESS_A63_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A0_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A1_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A2_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A3_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A4_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A5_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A6_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A7_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A8_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A9_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A10_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A11_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A12_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A13_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A14_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A15_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A16_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A17_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A18_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A19_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A20_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A21_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A22_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A23_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A24_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A25_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A26_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A27_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A28_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A29_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A30_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXDATA_A31_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGINTERRUPTMSIXINT_A0_B; // net ID: CFGINTERRUPTMSIXINT lsb: 0  msb: 0 INPUT
		NetFlow* CFGINTERRUPTPENDING_A0_B; // net ID: CFGINTERRUPTPENDING lsb: 0  msb: 1 INPUT
		NetFlow* CFGINTERRUPTPENDING_A1_B; // net ID: CFGINTERRUPTPENDING lsb: 0  msb: 1 INPUT
		NetFlow* CFGLINKTRAININGENABLE_A0_B; // net ID: CFGLINKTRAININGENABLE lsb: 0  msb: 0 INPUT
		NetFlow* CFGMCUPDATEREQUEST_A0_B; // net ID: CFGMCUPDATEREQUEST lsb: 0  msb: 0 INPUT
		NetFlow* CFGMGMTADDR_A0_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTADDR_A1_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTADDR_A2_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTADDR_A3_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTADDR_A4_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTADDR_A5_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTADDR_A6_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTADDR_A7_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTADDR_A8_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTADDR_A9_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTADDR_A10_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTADDR_A11_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTADDR_A12_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTADDR_A13_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTADDR_A14_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTADDR_A15_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTADDR_A16_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTADDR_A17_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTADDR_A18_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
		NetFlow* CFGMGMTBYTEENABLE_A0_B; // net ID: CFGMGMTBYTEENABLE lsb: 0  msb: 3 INPUT
		NetFlow* CFGMGMTBYTEENABLE_A1_B; // net ID: CFGMGMTBYTEENABLE lsb: 0  msb: 3 INPUT
		NetFlow* CFGMGMTBYTEENABLE_A2_B; // net ID: CFGMGMTBYTEENABLE lsb: 0  msb: 3 INPUT
		NetFlow* CFGMGMTBYTEENABLE_A3_B; // net ID: CFGMGMTBYTEENABLE lsb: 0  msb: 3 INPUT
		NetFlow* CFGMGMTREAD_A0_B; // net ID: CFGMGMTREAD lsb: 0  msb: 0 INPUT
		NetFlow* CFGMGMTTYPE1CFGREGACCESS_A0_B; // net ID: CFGMGMTTYPE1CFGREGACCESS lsb: 0  msb: 0 INPUT
		NetFlow* CFGMGMTWRITE_A0_B; // net ID: CFGMGMTWRITE lsb: 0  msb: 0 INPUT
		NetFlow* CFGMGMTWRITEDATA_A0_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A1_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A2_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A3_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A4_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A5_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A6_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A7_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A8_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A9_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A10_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A11_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A12_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A13_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A14_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A15_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A16_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A17_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A18_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A19_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A20_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A21_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A22_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A23_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A24_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A25_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A26_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A27_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A28_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A29_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A30_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMGMTWRITEDATA_A31_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMIT_A0_B; // net ID: CFGMSGTRANSMIT lsb: 0  msb: 0 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A0_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A1_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A2_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A3_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A4_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A5_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A6_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A7_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A8_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A9_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A10_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A11_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A12_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A13_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A14_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A15_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A16_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A17_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A18_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A19_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A20_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A21_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A22_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A23_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A24_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A25_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A26_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A27_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A28_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A29_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A30_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITDATA_A31_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGMSGTRANSMITTYPE_A0_B; // net ID: CFGMSGTRANSMITTYPE lsb: 0  msb: 2 INPUT
		NetFlow* CFGMSGTRANSMITTYPE_A1_B; // net ID: CFGMSGTRANSMITTYPE lsb: 0  msb: 2 INPUT
		NetFlow* CFGMSGTRANSMITTYPE_A2_B; // net ID: CFGMSGTRANSMITTYPE lsb: 0  msb: 2 INPUT
		NetFlow* CFGPERFUNCSTATUSCONTROL_A0_B; // net ID: CFGPERFUNCSTATUSCONTROL lsb: 0  msb: 2 INPUT
		NetFlow* CFGPERFUNCSTATUSCONTROL_A1_B; // net ID: CFGPERFUNCSTATUSCONTROL lsb: 0  msb: 2 INPUT
		NetFlow* CFGPERFUNCSTATUSCONTROL_A2_B; // net ID: CFGPERFUNCSTATUSCONTROL lsb: 0  msb: 2 INPUT
		NetFlow* CFGPERFUNCTIONNUMBER_A0_B; // net ID: CFGPERFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
		NetFlow* CFGPERFUNCTIONNUMBER_A1_B; // net ID: CFGPERFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
		NetFlow* CFGPERFUNCTIONNUMBER_A2_B; // net ID: CFGPERFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
		NetFlow* CFGPERFUNCTIONOUTPUTREQUEST_A0_B; // net ID: CFGPERFUNCTIONOUTPUTREQUEST lsb: 0  msb: 0 INPUT
		NetFlow* CFGPOWERSTATECHANGEACK_A0_B; // net ID: CFGPOWERSTATECHANGEACK lsb: 0  msb: 0 INPUT
		NetFlow* CFGREQPMTRANSITIONL23READY_A0_B; // net ID: CFGREQPMTRANSITIONL23READY lsb: 0  msb: 0 INPUT
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
		NetFlow* CFGTPHSTTREADDATA_A0_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A1_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A2_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A3_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A4_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A5_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A6_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A7_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A8_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A9_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A10_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A11_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A12_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A13_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A14_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A15_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A16_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A17_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A18_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A19_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A20_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A21_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A22_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A23_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A24_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A25_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A26_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A27_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A28_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A29_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A30_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATA_A31_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
		NetFlow* CFGTPHSTTREADDATAVALID_A0_B; // net ID: CFGTPHSTTREADDATAVALID lsb: 0  msb: 0 INPUT
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
		NetFlow* CFGVFFLRDONE_A0_B; // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
		NetFlow* CFGVFFLRDONE_A1_B; // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
		NetFlow* CFGVFFLRDONE_A2_B; // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
		NetFlow* CFGVFFLRDONE_A3_B; // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
		NetFlow* CFGVFFLRDONE_A4_B; // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
		NetFlow* CFGVFFLRDONE_A5_B; // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
		NetFlow* CORECLK_A0_B; // net ID: CORECLK lsb: 0  msb: 0 INPUT
		NetFlow* CORECLKMICOMPLETIONRAML_A0_B; // net ID: CORECLKMICOMPLETIONRAML lsb: 0  msb: 0 INPUT
		NetFlow* CORECLKMICOMPLETIONRAMU_A0_B; // net ID: CORECLKMICOMPLETIONRAMU lsb: 0  msb: 0 INPUT
		NetFlow* CORECLKMIREPLAYRAM_A0_B; // net ID: CORECLKMIREPLAYRAM lsb: 0  msb: 0 INPUT
		NetFlow* CORECLKMIREQUESTRAM_A0_B; // net ID: CORECLKMIREQUESTRAM lsb: 0  msb: 0 INPUT
		NetFlow* DRPADDR_A0_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
		NetFlow* DRPADDR_A1_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
		NetFlow* DRPADDR_A2_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
		NetFlow* DRPADDR_A3_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
		NetFlow* DRPADDR_A4_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
		NetFlow* DRPADDR_A5_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
		NetFlow* DRPADDR_A6_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
		NetFlow* DRPADDR_A7_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
		NetFlow* DRPADDR_A8_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
		NetFlow* DRPADDR_A9_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
		NetFlow* DRPADDR_A10_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
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
		NetFlow* MAXISCQTREADY_A0_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A1_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A2_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A3_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A4_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A5_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A6_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A7_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A8_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A9_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A10_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A11_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A12_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A13_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A14_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A15_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A16_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A17_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A18_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A19_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A20_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISCQTREADY_A21_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A0_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A1_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A2_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A3_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A4_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A5_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A6_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A7_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A8_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A9_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A10_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A11_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A12_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A13_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A14_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A15_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A16_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A17_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A18_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A19_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A20_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MAXISRCTREADY_A21_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
		NetFlow* MGMTRESETN_A0_B; // net ID: MGMTRESETN lsb: 0  msb: 0 INPUT
		NetFlow* MGMTSTICKYRESETN_A0_B; // net ID: MGMTSTICKYRESETN lsb: 0  msb: 0 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A0_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A1_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A2_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A3_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A4_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A5_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A6_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A7_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A8_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A9_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A10_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A11_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A12_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A13_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A14_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A15_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A16_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A17_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A18_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A19_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A20_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A21_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A22_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A23_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A24_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A25_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A26_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A27_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A28_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A29_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A30_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A31_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A32_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A33_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A34_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A35_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A36_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A37_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A38_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A39_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A40_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A41_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A42_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A43_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A44_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A45_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A46_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A47_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A48_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A49_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A50_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A51_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A52_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A53_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A54_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A55_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A56_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A57_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A58_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A59_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A60_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A61_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A62_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A63_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A64_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A65_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A66_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A67_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A68_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A69_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A70_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A71_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A72_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A73_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A74_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A75_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A76_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A77_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A78_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A79_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A80_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A81_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A82_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A83_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A84_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A85_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A86_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A87_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A88_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A89_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A90_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A91_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A92_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A93_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A94_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A95_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A96_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A97_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A98_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A99_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A100_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A101_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A102_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A103_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A104_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A105_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A106_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A107_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A108_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A109_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A110_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A111_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A112_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A113_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A114_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A115_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A116_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A117_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A118_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A119_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A120_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A121_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A122_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A123_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A124_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A125_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A126_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A127_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A128_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A129_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A130_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A131_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A132_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A133_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A134_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A135_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A136_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A137_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A138_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A139_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A140_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A141_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A142_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MICOMPLETIONRAMREADDATA_A143_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A0_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A1_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A2_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A3_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A4_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A5_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A6_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A7_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A8_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A9_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A10_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A11_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A12_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A13_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A14_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A15_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A16_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A17_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A18_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A19_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A20_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A21_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A22_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A23_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A24_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A25_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A26_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A27_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A28_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A29_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A30_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A31_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A32_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A33_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A34_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A35_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A36_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A37_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A38_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A39_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A40_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A41_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A42_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A43_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A44_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A45_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A46_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A47_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A48_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A49_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A50_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A51_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A52_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A53_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A54_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A55_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A56_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A57_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A58_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A59_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A60_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A61_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A62_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A63_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A64_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A65_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A66_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A67_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A68_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A69_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A70_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A71_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A72_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A73_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A74_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A75_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A76_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A77_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A78_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A79_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A80_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A81_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A82_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A83_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A84_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A85_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A86_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A87_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A88_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A89_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A90_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A91_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A92_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A93_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A94_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A95_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A96_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A97_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A98_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A99_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A100_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A101_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A102_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A103_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A104_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A105_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A106_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A107_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A108_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A109_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A110_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A111_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A112_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A113_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A114_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A115_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A116_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A117_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A118_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A119_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A120_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A121_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A122_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A123_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A124_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A125_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A126_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A127_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A128_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A129_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A130_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A131_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A132_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A133_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A134_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A135_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A136_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A137_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A138_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A139_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A140_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A141_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A142_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREPLAYRAMREADDATA_A143_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A0_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A1_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A2_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A3_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A4_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A5_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A6_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A7_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A8_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A9_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A10_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A11_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A12_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A13_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A14_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A15_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A16_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A17_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A18_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A19_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A20_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A21_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A22_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A23_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A24_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A25_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A26_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A27_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A28_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A29_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A30_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A31_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A32_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A33_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A34_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A35_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A36_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A37_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A38_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A39_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A40_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A41_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A42_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A43_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A44_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A45_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A46_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A47_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A48_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A49_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A50_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A51_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A52_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A53_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A54_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A55_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A56_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A57_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A58_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A59_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A60_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A61_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A62_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A63_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A64_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A65_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A66_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A67_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A68_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A69_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A70_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A71_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A72_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A73_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A74_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A75_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A76_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A77_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A78_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A79_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A80_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A81_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A82_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A83_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A84_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A85_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A86_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A87_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A88_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A89_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A90_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A91_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A92_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A93_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A94_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A95_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A96_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A97_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A98_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A99_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A100_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A101_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A102_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A103_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A104_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A105_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A106_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A107_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A108_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A109_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A110_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A111_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A112_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A113_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A114_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A115_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A116_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A117_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A118_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A119_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A120_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A121_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A122_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A123_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A124_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A125_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A126_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A127_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A128_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A129_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A130_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A131_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A132_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A133_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A134_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A135_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A136_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A137_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A138_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A139_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A140_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A141_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A142_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* MIREQUESTRAMREADDATA_A143_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
		NetFlow* PCIECQNPREQ_A0_B; // net ID: PCIECQNPREQ lsb: 0  msb: 0 INPUT
		NetFlow* PIPECLK_A0_B; // net ID: PIPECLK lsb: 0  msb: 0 INPUT
		NetFlow* PIPEEQFS_A0_B; // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
		NetFlow* PIPEEQFS_A1_B; // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
		NetFlow* PIPEEQFS_A2_B; // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
		NetFlow* PIPEEQFS_A3_B; // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
		NetFlow* PIPEEQFS_A4_B; // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
		NetFlow* PIPEEQFS_A5_B; // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
		NetFlow* PIPEEQLF_A0_B; // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
		NetFlow* PIPEEQLF_A1_B; // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
		NetFlow* PIPEEQLF_A2_B; // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
		NetFlow* PIPEEQLF_A3_B; // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
		NetFlow* PIPEEQLF_A4_B; // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
		NetFlow* PIPEEQLF_A5_B; // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
		NetFlow* PIPERESETN_A0_B; // net ID: PIPERESETN lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0CHARISK_A0_B; // net ID: PIPERX0CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX0CHARISK_A1_B; // net ID: PIPERX0CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX0DATA_A0_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A1_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A2_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A3_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A4_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A5_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A6_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A7_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A8_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A9_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A10_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A11_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A12_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A13_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A14_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A15_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A16_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A17_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A18_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A19_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A20_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A21_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A22_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A23_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A24_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A25_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A26_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A27_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A28_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A29_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A30_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATA_A31_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX0DATAVALID_A0_B; // net ID: PIPERX0DATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0ELECIDLE_A0_B; // net ID: PIPERX0ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0EQDONE_A0_B; // net ID: PIPERX0EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0EQLPADAPTDONE_A0_B; // net ID: PIPERX0EQLPADAPTDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0EQLPLFFSSEL_A0_B; // net ID: PIPERX0EQLPLFFSSEL lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A0_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A1_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A2_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A3_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A4_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A5_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A6_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A7_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A8_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A9_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A10_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A11_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A12_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A13_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A14_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A15_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A16_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A17_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX0PHYSTATUS_A0_B; // net ID: PIPERX0PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0STARTBLOCK_A0_B; // net ID: PIPERX0STARTBLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX0STATUS_A0_B; // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX0STATUS_A1_B; // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX0STATUS_A2_B; // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX0SYNCHEADER_A0_B; // net ID: PIPERX0SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX0SYNCHEADER_A1_B; // net ID: PIPERX0SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX0VALID_A0_B; // net ID: PIPERX0VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1CHARISK_A0_B; // net ID: PIPERX1CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX1CHARISK_A1_B; // net ID: PIPERX1CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX1DATA_A0_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A1_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A2_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A3_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A4_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A5_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A6_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A7_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A8_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A9_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A10_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A11_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A12_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A13_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A14_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A15_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A16_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A17_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A18_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A19_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A20_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A21_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A22_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A23_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A24_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A25_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A26_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A27_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A28_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A29_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A30_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATA_A31_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX1DATAVALID_A0_B; // net ID: PIPERX1DATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1ELECIDLE_A0_B; // net ID: PIPERX1ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1EQDONE_A0_B; // net ID: PIPERX1EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1EQLPADAPTDONE_A0_B; // net ID: PIPERX1EQLPADAPTDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1EQLPLFFSSEL_A0_B; // net ID: PIPERX1EQLPLFFSSEL lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A0_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A1_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A2_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A3_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A4_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A5_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A6_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A7_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A8_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A9_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A10_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A11_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A12_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A13_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A14_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A15_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A16_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A17_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX1PHYSTATUS_A0_B; // net ID: PIPERX1PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1STARTBLOCK_A0_B; // net ID: PIPERX1STARTBLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX1STATUS_A0_B; // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX1STATUS_A1_B; // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX1STATUS_A2_B; // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX1SYNCHEADER_A0_B; // net ID: PIPERX1SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX1SYNCHEADER_A1_B; // net ID: PIPERX1SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX1VALID_A0_B; // net ID: PIPERX1VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2CHARISK_A0_B; // net ID: PIPERX2CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX2CHARISK_A1_B; // net ID: PIPERX2CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX2DATA_A0_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A1_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A2_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A3_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A4_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A5_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A6_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A7_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A8_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A9_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A10_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A11_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A12_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A13_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A14_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A15_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A16_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A17_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A18_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A19_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A20_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A21_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A22_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A23_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A24_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A25_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A26_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A27_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A28_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A29_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A30_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATA_A31_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX2DATAVALID_A0_B; // net ID: PIPERX2DATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2ELECIDLE_A0_B; // net ID: PIPERX2ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2EQDONE_A0_B; // net ID: PIPERX2EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2EQLPADAPTDONE_A0_B; // net ID: PIPERX2EQLPADAPTDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2EQLPLFFSSEL_A0_B; // net ID: PIPERX2EQLPLFFSSEL lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A0_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A1_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A2_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A3_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A4_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A5_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A6_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A7_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A8_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A9_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A10_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A11_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A12_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A13_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A14_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A15_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A16_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A17_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX2PHYSTATUS_A0_B; // net ID: PIPERX2PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2STARTBLOCK_A0_B; // net ID: PIPERX2STARTBLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX2STATUS_A0_B; // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX2STATUS_A1_B; // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX2STATUS_A2_B; // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX2SYNCHEADER_A0_B; // net ID: PIPERX2SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX2SYNCHEADER_A1_B; // net ID: PIPERX2SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX2VALID_A0_B; // net ID: PIPERX2VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3CHARISK_A0_B; // net ID: PIPERX3CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX3CHARISK_A1_B; // net ID: PIPERX3CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX3DATA_A0_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A1_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A2_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A3_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A4_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A5_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A6_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A7_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A8_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A9_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A10_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A11_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A12_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A13_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A14_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A15_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A16_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A17_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A18_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A19_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A20_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A21_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A22_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A23_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A24_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A25_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A26_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A27_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A28_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A29_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A30_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATA_A31_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX3DATAVALID_A0_B; // net ID: PIPERX3DATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3ELECIDLE_A0_B; // net ID: PIPERX3ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3EQDONE_A0_B; // net ID: PIPERX3EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3EQLPADAPTDONE_A0_B; // net ID: PIPERX3EQLPADAPTDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3EQLPLFFSSEL_A0_B; // net ID: PIPERX3EQLPLFFSSEL lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A0_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A1_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A2_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A3_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A4_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A5_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A6_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A7_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A8_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A9_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A10_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A11_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A12_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A13_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A14_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A15_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A16_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A17_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX3PHYSTATUS_A0_B; // net ID: PIPERX3PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3STARTBLOCK_A0_B; // net ID: PIPERX3STARTBLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX3STATUS_A0_B; // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX3STATUS_A1_B; // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX3STATUS_A2_B; // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX3SYNCHEADER_A0_B; // net ID: PIPERX3SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX3SYNCHEADER_A1_B; // net ID: PIPERX3SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX3VALID_A0_B; // net ID: PIPERX3VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4CHARISK_A0_B; // net ID: PIPERX4CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX4CHARISK_A1_B; // net ID: PIPERX4CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX4DATA_A0_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A1_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A2_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A3_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A4_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A5_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A6_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A7_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A8_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A9_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A10_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A11_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A12_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A13_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A14_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A15_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A16_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A17_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A18_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A19_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A20_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A21_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A22_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A23_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A24_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A25_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A26_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A27_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A28_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A29_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A30_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATA_A31_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX4DATAVALID_A0_B; // net ID: PIPERX4DATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4ELECIDLE_A0_B; // net ID: PIPERX4ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4EQDONE_A0_B; // net ID: PIPERX4EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4EQLPADAPTDONE_A0_B; // net ID: PIPERX4EQLPADAPTDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4EQLPLFFSSEL_A0_B; // net ID: PIPERX4EQLPLFFSSEL lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A0_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A1_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A2_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A3_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A4_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A5_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A6_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A7_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A8_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A9_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A10_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A11_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A12_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A13_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A14_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A15_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A16_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A17_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX4PHYSTATUS_A0_B; // net ID: PIPERX4PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4STARTBLOCK_A0_B; // net ID: PIPERX4STARTBLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX4STATUS_A0_B; // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX4STATUS_A1_B; // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX4STATUS_A2_B; // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX4SYNCHEADER_A0_B; // net ID: PIPERX4SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX4SYNCHEADER_A1_B; // net ID: PIPERX4SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX4VALID_A0_B; // net ID: PIPERX4VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5CHARISK_A0_B; // net ID: PIPERX5CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX5CHARISK_A1_B; // net ID: PIPERX5CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX5DATA_A0_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A1_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A2_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A3_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A4_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A5_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A6_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A7_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A8_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A9_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A10_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A11_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A12_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A13_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A14_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A15_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A16_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A17_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A18_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A19_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A20_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A21_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A22_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A23_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A24_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A25_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A26_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A27_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A28_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A29_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A30_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATA_A31_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX5DATAVALID_A0_B; // net ID: PIPERX5DATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5ELECIDLE_A0_B; // net ID: PIPERX5ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5EQDONE_A0_B; // net ID: PIPERX5EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5EQLPADAPTDONE_A0_B; // net ID: PIPERX5EQLPADAPTDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5EQLPLFFSSEL_A0_B; // net ID: PIPERX5EQLPLFFSSEL lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A0_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A1_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A2_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A3_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A4_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A5_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A6_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A7_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A8_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A9_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A10_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A11_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A12_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A13_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A14_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A15_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A16_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A17_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX5PHYSTATUS_A0_B; // net ID: PIPERX5PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5STARTBLOCK_A0_B; // net ID: PIPERX5STARTBLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX5STATUS_A0_B; // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX5STATUS_A1_B; // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX5STATUS_A2_B; // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX5SYNCHEADER_A0_B; // net ID: PIPERX5SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX5SYNCHEADER_A1_B; // net ID: PIPERX5SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX5VALID_A0_B; // net ID: PIPERX5VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6CHARISK_A0_B; // net ID: PIPERX6CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX6CHARISK_A1_B; // net ID: PIPERX6CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX6DATA_A0_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A1_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A2_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A3_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A4_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A5_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A6_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A7_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A8_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A9_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A10_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A11_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A12_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A13_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A14_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A15_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A16_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A17_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A18_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A19_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A20_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A21_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A22_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A23_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A24_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A25_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A26_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A27_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A28_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A29_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A30_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATA_A31_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX6DATAVALID_A0_B; // net ID: PIPERX6DATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6ELECIDLE_A0_B; // net ID: PIPERX6ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6EQDONE_A0_B; // net ID: PIPERX6EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6EQLPADAPTDONE_A0_B; // net ID: PIPERX6EQLPADAPTDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6EQLPLFFSSEL_A0_B; // net ID: PIPERX6EQLPLFFSSEL lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A0_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A1_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A2_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A3_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A4_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A5_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A6_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A7_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A8_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A9_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A10_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A11_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A12_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A13_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A14_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A15_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A16_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A17_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX6PHYSTATUS_A0_B; // net ID: PIPERX6PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6STARTBLOCK_A0_B; // net ID: PIPERX6STARTBLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX6STATUS_A0_B; // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX6STATUS_A1_B; // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX6STATUS_A2_B; // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX6SYNCHEADER_A0_B; // net ID: PIPERX6SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX6SYNCHEADER_A1_B; // net ID: PIPERX6SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX6VALID_A0_B; // net ID: PIPERX6VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7CHARISK_A0_B; // net ID: PIPERX7CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX7CHARISK_A1_B; // net ID: PIPERX7CHARISK lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX7DATA_A0_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A1_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A2_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A3_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A4_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A5_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A6_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A7_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A8_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A9_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A10_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A11_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A12_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A13_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A14_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A15_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A16_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A17_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A18_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A19_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A20_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A21_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A22_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A23_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A24_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A25_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A26_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A27_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A28_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A29_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A30_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATA_A31_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
		NetFlow* PIPERX7DATAVALID_A0_B; // net ID: PIPERX7DATAVALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7ELECIDLE_A0_B; // net ID: PIPERX7ELECIDLE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7EQDONE_A0_B; // net ID: PIPERX7EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7EQLPADAPTDONE_A0_B; // net ID: PIPERX7EQLPADAPTDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7EQLPLFFSSEL_A0_B; // net ID: PIPERX7EQLPLFFSSEL lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A0_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A1_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A2_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A3_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A4_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A5_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A6_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A7_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A8_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A9_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A10_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A11_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A12_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A13_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A14_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A15_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A16_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A17_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
		NetFlow* PIPERX7PHYSTATUS_A0_B; // net ID: PIPERX7PHYSTATUS lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7STARTBLOCK_A0_B; // net ID: PIPERX7STARTBLOCK lsb: 0  msb: 0 INPUT
		NetFlow* PIPERX7STATUS_A0_B; // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX7STATUS_A1_B; // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX7STATUS_A2_B; // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
		NetFlow* PIPERX7SYNCHEADER_A0_B; // net ID: PIPERX7SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX7SYNCHEADER_A1_B; // net ID: PIPERX7SYNCHEADER lsb: 0  msb: 1 INPUT
		NetFlow* PIPERX7VALID_A0_B; // net ID: PIPERX7VALID lsb: 0  msb: 0 INPUT
		NetFlow* PIPETX0EQCOEFF_A0_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX0EQCOEFF_A1_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX0EQCOEFF_A2_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX0EQCOEFF_A3_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX0EQCOEFF_A4_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX0EQCOEFF_A5_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX0EQCOEFF_A6_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX0EQCOEFF_A7_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX0EQCOEFF_A8_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX0EQCOEFF_A9_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX0EQCOEFF_A10_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX0EQCOEFF_A11_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX0EQCOEFF_A12_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX0EQCOEFF_A13_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX0EQCOEFF_A14_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX0EQCOEFF_A15_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX0EQCOEFF_A16_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX0EQCOEFF_A17_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX0EQDONE_A0_B; // net ID: PIPETX0EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPETX1EQCOEFF_A0_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX1EQCOEFF_A1_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX1EQCOEFF_A2_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX1EQCOEFF_A3_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX1EQCOEFF_A4_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX1EQCOEFF_A5_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX1EQCOEFF_A6_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX1EQCOEFF_A7_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX1EQCOEFF_A8_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX1EQCOEFF_A9_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX1EQCOEFF_A10_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX1EQCOEFF_A11_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX1EQCOEFF_A12_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX1EQCOEFF_A13_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX1EQCOEFF_A14_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX1EQCOEFF_A15_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX1EQCOEFF_A16_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX1EQCOEFF_A17_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX1EQDONE_A0_B; // net ID: PIPETX1EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPETX2EQCOEFF_A0_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX2EQCOEFF_A1_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX2EQCOEFF_A2_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX2EQCOEFF_A3_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX2EQCOEFF_A4_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX2EQCOEFF_A5_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX2EQCOEFF_A6_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX2EQCOEFF_A7_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX2EQCOEFF_A8_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX2EQCOEFF_A9_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX2EQCOEFF_A10_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX2EQCOEFF_A11_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX2EQCOEFF_A12_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX2EQCOEFF_A13_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX2EQCOEFF_A14_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX2EQCOEFF_A15_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX2EQCOEFF_A16_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX2EQCOEFF_A17_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX2EQDONE_A0_B; // net ID: PIPETX2EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPETX3EQCOEFF_A0_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX3EQCOEFF_A1_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX3EQCOEFF_A2_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX3EQCOEFF_A3_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX3EQCOEFF_A4_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX3EQCOEFF_A5_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX3EQCOEFF_A6_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX3EQCOEFF_A7_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX3EQCOEFF_A8_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX3EQCOEFF_A9_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX3EQCOEFF_A10_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX3EQCOEFF_A11_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX3EQCOEFF_A12_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX3EQCOEFF_A13_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX3EQCOEFF_A14_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX3EQCOEFF_A15_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX3EQCOEFF_A16_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX3EQCOEFF_A17_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX3EQDONE_A0_B; // net ID: PIPETX3EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPETX4EQCOEFF_A0_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX4EQCOEFF_A1_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX4EQCOEFF_A2_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX4EQCOEFF_A3_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX4EQCOEFF_A4_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX4EQCOEFF_A5_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX4EQCOEFF_A6_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX4EQCOEFF_A7_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX4EQCOEFF_A8_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX4EQCOEFF_A9_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX4EQCOEFF_A10_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX4EQCOEFF_A11_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX4EQCOEFF_A12_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX4EQCOEFF_A13_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX4EQCOEFF_A14_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX4EQCOEFF_A15_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX4EQCOEFF_A16_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX4EQCOEFF_A17_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX4EQDONE_A0_B; // net ID: PIPETX4EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPETX5EQCOEFF_A0_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX5EQCOEFF_A1_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX5EQCOEFF_A2_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX5EQCOEFF_A3_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX5EQCOEFF_A4_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX5EQCOEFF_A5_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX5EQCOEFF_A6_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX5EQCOEFF_A7_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX5EQCOEFF_A8_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX5EQCOEFF_A9_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX5EQCOEFF_A10_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX5EQCOEFF_A11_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX5EQCOEFF_A12_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX5EQCOEFF_A13_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX5EQCOEFF_A14_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX5EQCOEFF_A15_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX5EQCOEFF_A16_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX5EQCOEFF_A17_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX5EQDONE_A0_B; // net ID: PIPETX5EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPETX6EQCOEFF_A0_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX6EQCOEFF_A1_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX6EQCOEFF_A2_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX6EQCOEFF_A3_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX6EQCOEFF_A4_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX6EQCOEFF_A5_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX6EQCOEFF_A6_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX6EQCOEFF_A7_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX6EQCOEFF_A8_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX6EQCOEFF_A9_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX6EQCOEFF_A10_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX6EQCOEFF_A11_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX6EQCOEFF_A12_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX6EQCOEFF_A13_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX6EQCOEFF_A14_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX6EQCOEFF_A15_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX6EQCOEFF_A16_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX6EQCOEFF_A17_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX6EQDONE_A0_B; // net ID: PIPETX6EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PIPETX7EQCOEFF_A0_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX7EQCOEFF_A1_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX7EQCOEFF_A2_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX7EQCOEFF_A3_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX7EQCOEFF_A4_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX7EQCOEFF_A5_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX7EQCOEFF_A6_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX7EQCOEFF_A7_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX7EQCOEFF_A8_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX7EQCOEFF_A9_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX7EQCOEFF_A10_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX7EQCOEFF_A11_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX7EQCOEFF_A12_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX7EQCOEFF_A13_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX7EQCOEFF_A14_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX7EQCOEFF_A15_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX7EQCOEFF_A16_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX7EQCOEFF_A17_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
		NetFlow* PIPETX7EQDONE_A0_B; // net ID: PIPETX7EQDONE lsb: 0  msb: 0 INPUT
		NetFlow* PLDISABLESCRAMBLER_A0_B; // net ID: PLDISABLESCRAMBLER lsb: 0  msb: 0 INPUT
		NetFlow* PLEQRESETEIEOSCOUNT_A0_B; // net ID: PLEQRESETEIEOSCOUNT lsb: 0  msb: 0 INPUT
		NetFlow* PLGEN3PCSDISABLE_A0_B; // net ID: PLGEN3PCSDISABLE lsb: 0  msb: 0 INPUT
		NetFlow* PLGEN3PCSRXSYNCDONE_A0_B; // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
		NetFlow* PLGEN3PCSRXSYNCDONE_A1_B; // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
		NetFlow* PLGEN3PCSRXSYNCDONE_A2_B; // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
		NetFlow* PLGEN3PCSRXSYNCDONE_A3_B; // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
		NetFlow* PLGEN3PCSRXSYNCDONE_A4_B; // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
		NetFlow* PLGEN3PCSRXSYNCDONE_A5_B; // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
		NetFlow* PLGEN3PCSRXSYNCDONE_A6_B; // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
		NetFlow* PLGEN3PCSRXSYNCDONE_A7_B; // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
		NetFlow* RECCLK_A0_B; // net ID: RECCLK lsb: 0  msb: 0 INPUT
		NetFlow* RESETN_A0_B; // net ID: RESETN lsb: 0  msb: 0 INPUT
		NetFlow* SAXISCCTDATA_A0_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A1_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A2_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A3_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A4_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A5_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A6_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A7_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A8_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A9_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A10_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A11_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A12_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A13_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A14_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A15_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A16_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A17_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A18_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A19_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A20_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A21_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A22_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A23_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A24_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A25_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A26_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A27_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A28_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A29_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A30_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A31_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A32_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A33_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A34_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A35_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A36_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A37_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A38_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A39_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A40_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A41_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A42_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A43_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A44_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A45_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A46_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A47_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A48_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A49_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A50_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A51_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A52_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A53_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A54_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A55_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A56_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A57_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A58_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A59_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A60_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A61_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A62_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A63_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A64_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A65_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A66_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A67_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A68_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A69_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A70_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A71_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A72_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A73_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A74_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A75_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A76_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A77_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A78_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A79_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A80_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A81_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A82_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A83_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A84_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A85_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A86_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A87_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A88_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A89_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A90_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A91_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A92_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A93_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A94_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A95_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A96_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A97_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A98_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A99_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A100_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A101_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A102_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A103_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A104_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A105_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A106_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A107_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A108_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A109_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A110_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A111_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A112_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A113_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A114_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A115_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A116_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A117_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A118_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A119_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A120_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A121_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A122_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A123_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A124_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A125_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A126_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A127_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A128_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A129_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A130_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A131_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A132_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A133_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A134_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A135_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A136_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A137_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A138_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A139_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A140_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A141_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A142_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A143_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A144_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A145_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A146_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A147_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A148_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A149_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A150_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A151_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A152_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A153_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A154_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A155_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A156_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A157_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A158_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A159_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A160_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A161_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A162_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A163_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A164_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A165_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A166_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A167_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A168_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A169_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A170_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A171_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A172_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A173_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A174_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A175_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A176_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A177_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A178_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A179_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A180_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A181_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A182_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A183_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A184_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A185_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A186_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A187_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A188_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A189_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A190_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A191_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A192_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A193_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A194_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A195_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A196_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A197_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A198_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A199_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A200_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A201_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A202_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A203_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A204_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A205_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A206_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A207_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A208_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A209_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A210_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A211_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A212_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A213_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A214_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A215_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A216_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A217_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A218_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A219_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A220_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A221_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A222_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A223_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A224_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A225_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A226_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A227_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A228_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A229_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A230_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A231_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A232_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A233_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A234_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A235_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A236_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A237_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A238_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A239_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A240_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A241_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A242_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A243_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A244_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A245_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A246_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A247_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A248_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A249_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A250_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A251_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A252_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A253_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A254_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTDATA_A255_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISCCTKEEP_A0_B; // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
		NetFlow* SAXISCCTKEEP_A1_B; // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
		NetFlow* SAXISCCTKEEP_A2_B; // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
		NetFlow* SAXISCCTKEEP_A3_B; // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
		NetFlow* SAXISCCTKEEP_A4_B; // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
		NetFlow* SAXISCCTKEEP_A5_B; // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
		NetFlow* SAXISCCTKEEP_A6_B; // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
		NetFlow* SAXISCCTKEEP_A7_B; // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
		NetFlow* SAXISCCTLAST_A0_B; // net ID: SAXISCCTLAST lsb: 0  msb: 0 INPUT
		NetFlow* SAXISCCTUSER_A0_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A1_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A2_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A3_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A4_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A5_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A6_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A7_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A8_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A9_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A10_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A11_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A12_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A13_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A14_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A15_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A16_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A17_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A18_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A19_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A20_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A21_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A22_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A23_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A24_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A25_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A26_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A27_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A28_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A29_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A30_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A31_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTUSER_A32_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
		NetFlow* SAXISCCTVALID_A0_B; // net ID: SAXISCCTVALID lsb: 0  msb: 0 INPUT
		NetFlow* SAXISRQTDATA_A0_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A1_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A2_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A3_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A4_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A5_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A6_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A7_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A8_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A9_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A10_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A11_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A12_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A13_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A14_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A15_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A16_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A17_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A18_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A19_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A20_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A21_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A22_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A23_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A24_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A25_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A26_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A27_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A28_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A29_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A30_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A31_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A32_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A33_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A34_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A35_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A36_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A37_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A38_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A39_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A40_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A41_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A42_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A43_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A44_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A45_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A46_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A47_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A48_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A49_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A50_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A51_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A52_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A53_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A54_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A55_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A56_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A57_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A58_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A59_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A60_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A61_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A62_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A63_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A64_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A65_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A66_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A67_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A68_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A69_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A70_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A71_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A72_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A73_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A74_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A75_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A76_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A77_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A78_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A79_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A80_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A81_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A82_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A83_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A84_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A85_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A86_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A87_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A88_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A89_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A90_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A91_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A92_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A93_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A94_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A95_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A96_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A97_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A98_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A99_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A100_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A101_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A102_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A103_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A104_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A105_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A106_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A107_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A108_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A109_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A110_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A111_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A112_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A113_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A114_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A115_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A116_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A117_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A118_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A119_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A120_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A121_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A122_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A123_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A124_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A125_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A126_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A127_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A128_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A129_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A130_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A131_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A132_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A133_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A134_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A135_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A136_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A137_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A138_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A139_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A140_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A141_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A142_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A143_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A144_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A145_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A146_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A147_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A148_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A149_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A150_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A151_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A152_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A153_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A154_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A155_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A156_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A157_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A158_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A159_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A160_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A161_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A162_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A163_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A164_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A165_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A166_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A167_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A168_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A169_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A170_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A171_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A172_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A173_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A174_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A175_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A176_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A177_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A178_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A179_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A180_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A181_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A182_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A183_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A184_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A185_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A186_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A187_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A188_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A189_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A190_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A191_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A192_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A193_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A194_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A195_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A196_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A197_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A198_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A199_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A200_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A201_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A202_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A203_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A204_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A205_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A206_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A207_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A208_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A209_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A210_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A211_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A212_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A213_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A214_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A215_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A216_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A217_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A218_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A219_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A220_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A221_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A222_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A223_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A224_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A225_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A226_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A227_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A228_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A229_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A230_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A231_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A232_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A233_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A234_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A235_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A236_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A237_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A238_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A239_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A240_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A241_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A242_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A243_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A244_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A245_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A246_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A247_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A248_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A249_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A250_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A251_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A252_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A253_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A254_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTDATA_A255_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
		NetFlow* SAXISRQTKEEP_A0_B; // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
		NetFlow* SAXISRQTKEEP_A1_B; // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
		NetFlow* SAXISRQTKEEP_A2_B; // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
		NetFlow* SAXISRQTKEEP_A3_B; // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
		NetFlow* SAXISRQTKEEP_A4_B; // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
		NetFlow* SAXISRQTKEEP_A5_B; // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
		NetFlow* SAXISRQTKEEP_A6_B; // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
		NetFlow* SAXISRQTKEEP_A7_B; // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
		NetFlow* SAXISRQTLAST_A0_B; // net ID: SAXISRQTLAST lsb: 0  msb: 0 INPUT
		NetFlow* SAXISRQTUSER_A0_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A1_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A2_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A3_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A4_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A5_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A6_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A7_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A8_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A9_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A10_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A11_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A12_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A13_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A14_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A15_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A16_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A17_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A18_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A19_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A20_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A21_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A22_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A23_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A24_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A25_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A26_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A27_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A28_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A29_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A30_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A31_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A32_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A33_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A34_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A35_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A36_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A37_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A38_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A39_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A40_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A41_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A42_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A43_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A44_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A45_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A46_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A47_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A48_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A49_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A50_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A51_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A52_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A53_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A54_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A55_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A56_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A57_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A58_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTUSER_A59_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
		NetFlow* SAXISRQTVALID_A0_B; // net ID: SAXISRQTVALID lsb: 0  msb: 0 INPUT
		NetFlow* USERCLK_A0_B; // net ID: USERCLK lsb: 0  msb: 0 INPUT
		
		public: X_PCIE_3_0(
			const char * name,
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t ARI_CAP_ENABLE, // Default: "FALSE"
			parameter_enum_t AXISTEN_IF_CC_ALIGNMENT_MODE, // Default: "FALSE"
			parameter_enum_t AXISTEN_IF_CC_PARITY_CHK, // Default: "TRUE"
			parameter_enum_t AXISTEN_IF_CQ_ALIGNMENT_MODE, // Default: "FALSE"
			parameter_enum_t AXISTEN_IF_ENABLE_CLIENT_TAG, // Default: "FALSE"
			parameter_int_t AXISTEN_IF_ENABLE_MSG_ROUTE, // Default: 18'h00000
			parameter_enum_t AXISTEN_IF_ENABLE_RX_MSG_INTFC, // Default: "FALSE"
			parameter_enum_t AXISTEN_IF_RC_ALIGNMENT_MODE, // Default: "FALSE"
			parameter_enum_t AXISTEN_IF_RC_STRADDLE, // Default: "FALSE"
			parameter_enum_t AXISTEN_IF_RQ_ALIGNMENT_MODE, // Default: "FALSE"
			parameter_enum_t AXISTEN_IF_RQ_PARITY_CHK, // Default: "TRUE"
			parameter_int_t AXISTEN_IF_WIDTH, // Default: 2'h2
			parameter_enum_t CRM_CORE_CLK_FREQ_500, // Default: "TRUE"
			parameter_int_t CRM_USER_CLK_FREQ, // Default: 2'h2
			parameter_int_t DNSTREAM_LINK_NUM, // Default: 8'h00
			parameter_int_t GEN3_PCS_AUTO_REALIGN, // Default: 2'h1
			parameter_enum_t GEN3_PCS_RX_ELECIDLE_INTERNAL, // Default: "TRUE"
			parameter_int_t LL_ACK_TIMEOUT, // Default: 9'h000
			parameter_enum_t LL_ACK_TIMEOUT_EN, // Default: "FALSE"
			parameter_int_t LL_ACK_TIMEOUT_FUNC, // Default: 0
			parameter_int_t LL_CPL_FC_UPDATE_TIMER, // Default: 16'h0000
			parameter_enum_t LL_CPL_FC_UPDATE_TIMER_OVERRIDE, // Default: "FALSE"
			parameter_int_t LL_FC_UPDATE_TIMER, // Default: 16'h0000
			parameter_enum_t LL_FC_UPDATE_TIMER_OVERRIDE, // Default: "FALSE"
			parameter_int_t LL_NP_FC_UPDATE_TIMER, // Default: 16'h0000
			parameter_enum_t LL_NP_FC_UPDATE_TIMER_OVERRIDE, // Default: "FALSE"
			parameter_int_t LL_P_FC_UPDATE_TIMER, // Default: 16'h0000
			parameter_enum_t LL_P_FC_UPDATE_TIMER_OVERRIDE, // Default: "FALSE"
			parameter_int_t LL_REPLAY_TIMEOUT, // Default: 9'h000
			parameter_enum_t LL_REPLAY_TIMEOUT_EN, // Default: "FALSE"
			parameter_int_t LL_REPLAY_TIMEOUT_FUNC, // Default: 0
			parameter_int_t LTR_TX_MESSAGE_MINIMUM_INTERVAL, // Default: 10'h0FA
			parameter_enum_t LTR_TX_MESSAGE_ON_FUNC_POWER_STATE_CHANGE, // Default: "FALSE"
			parameter_enum_t LTR_TX_MESSAGE_ON_LTR_ENABLE, // Default: "FALSE"
			parameter_enum_t PF0_AER_CAP_ECRC_CHECK_CAPABLE, // Default: "FALSE"
			parameter_enum_t PF0_AER_CAP_ECRC_GEN_CAPABLE, // Default: "FALSE"
			parameter_int_t PF0_AER_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t PF0_ARI_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t PF0_ARI_CAP_NEXT_FUNC, // Default: 8'h00
			parameter_int_t PF0_ARI_CAP_VER, // Default: 4'h1
			parameter_int_t PF0_BAR0_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF0_BAR0_CONTROL, // Default: 3'h4
			parameter_int_t PF0_BAR1_APERTURE_SIZE, // Default: 5'h00
			parameter_int_t PF0_BAR1_CONTROL, // Default: 3'h0
			parameter_int_t PF0_BAR2_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF0_BAR2_CONTROL, // Default: 3'h4
			parameter_int_t PF0_BAR3_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF0_BAR3_CONTROL, // Default: 3'h0
			parameter_int_t PF0_BAR4_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF0_BAR4_CONTROL, // Default: 3'h4
			parameter_int_t PF0_BAR5_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF0_BAR5_CONTROL, // Default: 3'h0
			parameter_int_t PF0_BIST_REGISTER, // Default: 8'h00
			parameter_int_t PF0_CAPABILITY_POINTER, // Default: 8'h50
			parameter_int_t PF0_CLASS_CODE, // Default: 24'h000000
			parameter_int_t PF0_DEVICE_ID, // Default: 16'h0000
			parameter_enum_t PF0_DEV_CAP2_128B_CAS_ATOMIC_COMPLETER_SUPPORT, // Default: "TRUE"
			parameter_enum_t PF0_DEV_CAP2_32B_ATOMIC_COMPLETER_SUPPORT, // Default: "TRUE"
			parameter_enum_t PF0_DEV_CAP2_64B_ATOMIC_COMPLETER_SUPPORT, // Default: "TRUE"
			parameter_enum_t PF0_DEV_CAP2_CPL_TIMEOUT_DISABLE, // Default: "TRUE"
			parameter_enum_t PF0_DEV_CAP2_LTR_SUPPORT, // Default: "TRUE"
			parameter_int_t PF0_DEV_CAP2_OBFF_SUPPORT, // Default: 2'h0
			parameter_enum_t PF0_DEV_CAP2_TPH_COMPLETER_SUPPORT, // Default: "FALSE"
			parameter_int_t PF0_DEV_CAP_ENDPOINT_L0S_LATENCY, // Default: 0
			parameter_int_t PF0_DEV_CAP_ENDPOINT_L1_LATENCY, // Default: 0
			parameter_enum_t PF0_DEV_CAP_EXT_TAG_SUPPORTED, // Default: "TRUE"
			parameter_enum_t PF0_DEV_CAP_FUNCTION_LEVEL_RESET_CAPABLE, // Default: "TRUE"
			parameter_int_t PF0_DEV_CAP_MAX_PAYLOAD_SIZE, // Default: 3'h3
			parameter_int_t PF0_DPA_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t PF0_DPA_CAP_SUB_STATE_CONTROL, // Default: 5'h00
			parameter_enum_t PF0_DPA_CAP_SUB_STATE_CONTROL_EN, // Default: "TRUE"
			parameter_int_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION0, // Default: 8'h00
			parameter_int_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION1, // Default: 8'h00
			parameter_int_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION2, // Default: 8'h00
			parameter_int_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION3, // Default: 8'h00
			parameter_int_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION4, // Default: 8'h00
			parameter_int_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION5, // Default: 8'h00
			parameter_int_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION6, // Default: 8'h00
			parameter_int_t PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION7, // Default: 8'h00
			parameter_int_t PF0_DPA_CAP_VER, // Default: 4'h1
			parameter_int_t PF0_DSN_CAP_NEXTPTR, // Default: 12'h10C
			parameter_int_t PF0_EXPANSION_ROM_APERTURE_SIZE, // Default: 5'h03
			parameter_enum_t PF0_EXPANSION_ROM_ENABLE, // Default: "FALSE"
			parameter_int_t PF0_INTERRUPT_LINE, // Default: 8'h00
			parameter_int_t PF0_INTERRUPT_PIN, // Default: 3'h1
			parameter_int_t PF0_LINK_CAP_ASPM_SUPPORT, // Default: 0
			parameter_int_t PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN1, // Default: 7
			parameter_int_t PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN2, // Default: 7
			parameter_int_t PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN3, // Default: 7
			parameter_int_t PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN1, // Default: 7
			parameter_int_t PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN2, // Default: 7
			parameter_int_t PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN3, // Default: 7
			parameter_int_t PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN1, // Default: 7
			parameter_int_t PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN2, // Default: 7
			parameter_int_t PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN3, // Default: 7
			parameter_int_t PF0_LINK_CAP_L1_EXIT_LATENCY_GEN1, // Default: 7
			parameter_int_t PF0_LINK_CAP_L1_EXIT_LATENCY_GEN2, // Default: 7
			parameter_int_t PF0_LINK_CAP_L1_EXIT_LATENCY_GEN3, // Default: 7
			parameter_enum_t PF0_LINK_STATUS_SLOT_CLOCK_CONFIG, // Default: "TRUE"
			parameter_int_t PF0_LTR_CAP_MAX_NOSNOOP_LAT, // Default: 10'h000
			parameter_int_t PF0_LTR_CAP_MAX_SNOOP_LAT, // Default: 10'h000
			parameter_int_t PF0_LTR_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t PF0_LTR_CAP_VER, // Default: 4'h1
			parameter_int_t PF0_MSIX_CAP_NEXTPTR, // Default: 8'h00
			parameter_int_t PF0_MSIX_CAP_PBA_BIR, // Default: 0
			parameter_int_t PF0_MSIX_CAP_PBA_OFFSET, // Default: 29'h00000050
			parameter_int_t PF0_MSIX_CAP_TABLE_BIR, // Default: 0
			parameter_int_t PF0_MSIX_CAP_TABLE_OFFSET, // Default: 29'h00000040
			parameter_int_t PF0_MSIX_CAP_TABLE_SIZE, // Default: 11'h000
			parameter_int_t PF0_MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_int_t PF0_MSI_CAP_NEXTPTR, // Default: 8'h00
			parameter_int_t PF0_PB_CAP_NEXTPTR, // Default: 12'h000
			parameter_enum_t PF0_PB_CAP_SYSTEM_ALLOCATED, // Default: "FALSE"
			parameter_int_t PF0_PB_CAP_VER, // Default: 4'h1
			parameter_int_t PF0_PM_CAP_ID, // Default: 8'h01
			parameter_int_t PF0_PM_CAP_NEXTPTR, // Default: 8'h00
			parameter_enum_t PF0_PM_CAP_PMESUPPORT_D0, // Default: "TRUE"
			parameter_enum_t PF0_PM_CAP_PMESUPPORT_D1, // Default: "TRUE"
			parameter_enum_t PF0_PM_CAP_PMESUPPORT_D3HOT, // Default: "TRUE"
			parameter_enum_t PF0_PM_CAP_SUPP_D1_STATE, // Default: "TRUE"
			parameter_int_t PF0_PM_CAP_VER_ID, // Default: 3'h3
			parameter_enum_t PF0_PM_CSR_NOSOFTRESET, // Default: "TRUE"
			parameter_enum_t PF0_RBAR_CAP_ENABLE, // Default: "FALSE"
			parameter_int_t PF0_RBAR_CAP_INDEX0, // Default: 3'h0
			parameter_int_t PF0_RBAR_CAP_INDEX1, // Default: 3'h0
			parameter_int_t PF0_RBAR_CAP_INDEX2, // Default: 3'h0
			parameter_int_t PF0_RBAR_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t PF0_RBAR_CAP_SIZE0, // Default: 20'h00000
			parameter_int_t PF0_RBAR_CAP_SIZE1, // Default: 20'h00000
			parameter_int_t PF0_RBAR_CAP_SIZE2, // Default: 20'h00000
			parameter_int_t PF0_RBAR_CAP_VER, // Default: 4'h1
			parameter_int_t PF0_RBAR_NUM, // Default: 3'h1
			parameter_int_t PF0_REVISION_ID, // Default: 8'h00
			parameter_int_t PF0_SRIOV_BAR0_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF0_SRIOV_BAR0_CONTROL, // Default: 3'h4
			parameter_int_t PF0_SRIOV_BAR1_APERTURE_SIZE, // Default: 5'h00
			parameter_int_t PF0_SRIOV_BAR1_CONTROL, // Default: 3'h0
			parameter_int_t PF0_SRIOV_BAR2_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF0_SRIOV_BAR2_CONTROL, // Default: 3'h4
			parameter_int_t PF0_SRIOV_BAR3_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF0_SRIOV_BAR3_CONTROL, // Default: 3'h0
			parameter_int_t PF0_SRIOV_BAR4_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF0_SRIOV_BAR4_CONTROL, // Default: 3'h4
			parameter_int_t PF0_SRIOV_BAR5_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF0_SRIOV_BAR5_CONTROL, // Default: 3'h0
			parameter_int_t PF0_SRIOV_CAP_INITIAL_VF, // Default: 16'h0000
			parameter_int_t PF0_SRIOV_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t PF0_SRIOV_CAP_TOTAL_VF, // Default: 16'h0000
			parameter_int_t PF0_SRIOV_CAP_VER, // Default: 4'h1
			parameter_int_t PF0_SRIOV_FIRST_VF_OFFSET, // Default: 16'h0000
			parameter_int_t PF0_SRIOV_FUNC_DEP_LINK, // Default: 16'h0000
			parameter_int_t PF0_SRIOV_SUPPORTED_PAGE_SIZE, // Default: 32'h00000000
			parameter_int_t PF0_SRIOV_VF_DEVICE_ID, // Default: 16'h0000
			parameter_int_t PF0_SUBSYSTEM_ID, // Default: 16'h0000
			parameter_enum_t PF0_TPHR_CAP_DEV_SPECIFIC_MODE, // Default: "TRUE"
			parameter_enum_t PF0_TPHR_CAP_ENABLE, // Default: "FALSE"
			parameter_enum_t PF0_TPHR_CAP_INT_VEC_MODE, // Default: "TRUE"
			parameter_int_t PF0_TPHR_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t PF0_TPHR_CAP_ST_MODE_SEL, // Default: 3'h0
			parameter_int_t PF0_TPHR_CAP_ST_TABLE_LOC, // Default: 2'h0
			parameter_int_t PF0_TPHR_CAP_ST_TABLE_SIZE, // Default: 11'h000
			parameter_int_t PF0_TPHR_CAP_VER, // Default: 4'h1
			parameter_int_t PF0_VC_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t PF0_VC_CAP_VER, // Default: 4'h1
			parameter_enum_t PF1_AER_CAP_ECRC_CHECK_CAPABLE, // Default: "FALSE"
			parameter_enum_t PF1_AER_CAP_ECRC_GEN_CAPABLE, // Default: "FALSE"
			parameter_int_t PF1_AER_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t PF1_ARI_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t PF1_ARI_CAP_NEXT_FUNC, // Default: 8'h00
			parameter_int_t PF1_BAR0_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF1_BAR0_CONTROL, // Default: 3'h4
			parameter_int_t PF1_BAR1_APERTURE_SIZE, // Default: 5'h00
			parameter_int_t PF1_BAR1_CONTROL, // Default: 3'h0
			parameter_int_t PF1_BAR2_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF1_BAR2_CONTROL, // Default: 3'h4
			parameter_int_t PF1_BAR3_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF1_BAR3_CONTROL, // Default: 3'h0
			parameter_int_t PF1_BAR4_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF1_BAR4_CONTROL, // Default: 3'h4
			parameter_int_t PF1_BAR5_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF1_BAR5_CONTROL, // Default: 3'h0
			parameter_int_t PF1_BIST_REGISTER, // Default: 8'h00
			parameter_int_t PF1_CAPABILITY_POINTER, // Default: 8'h50
			parameter_int_t PF1_CLASS_CODE, // Default: 24'h000000
			parameter_int_t PF1_DEVICE_ID, // Default: 16'h0000
			parameter_int_t PF1_DEV_CAP_MAX_PAYLOAD_SIZE, // Default: 3'h3
			parameter_int_t PF1_DPA_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t PF1_DPA_CAP_SUB_STATE_CONTROL, // Default: 5'h00
			parameter_enum_t PF1_DPA_CAP_SUB_STATE_CONTROL_EN, // Default: "TRUE"
			parameter_int_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION0, // Default: 8'h00
			parameter_int_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION1, // Default: 8'h00
			parameter_int_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION2, // Default: 8'h00
			parameter_int_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION3, // Default: 8'h00
			parameter_int_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION4, // Default: 8'h00
			parameter_int_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION5, // Default: 8'h00
			parameter_int_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION6, // Default: 8'h00
			parameter_int_t PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION7, // Default: 8'h00
			parameter_int_t PF1_DPA_CAP_VER, // Default: 4'h1
			parameter_int_t PF1_DSN_CAP_NEXTPTR, // Default: 12'h10C
			parameter_int_t PF1_EXPANSION_ROM_APERTURE_SIZE, // Default: 5'h03
			parameter_enum_t PF1_EXPANSION_ROM_ENABLE, // Default: "FALSE"
			parameter_int_t PF1_INTERRUPT_LINE, // Default: 8'h00
			parameter_int_t PF1_INTERRUPT_PIN, // Default: 3'h1
			parameter_int_t PF1_MSIX_CAP_NEXTPTR, // Default: 8'h00
			parameter_int_t PF1_MSIX_CAP_PBA_BIR, // Default: 0
			parameter_int_t PF1_MSIX_CAP_PBA_OFFSET, // Default: 29'h00000050
			parameter_int_t PF1_MSIX_CAP_TABLE_BIR, // Default: 0
			parameter_int_t PF1_MSIX_CAP_TABLE_OFFSET, // Default: 29'h00000040
			parameter_int_t PF1_MSIX_CAP_TABLE_SIZE, // Default: 11'h000
			parameter_int_t PF1_MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_int_t PF1_MSI_CAP_NEXTPTR, // Default: 8'h00
			parameter_int_t PF1_PB_CAP_NEXTPTR, // Default: 12'h000
			parameter_enum_t PF1_PB_CAP_SYSTEM_ALLOCATED, // Default: "FALSE"
			parameter_int_t PF1_PB_CAP_VER, // Default: 4'h1
			parameter_int_t PF1_PM_CAP_ID, // Default: 8'h01
			parameter_int_t PF1_PM_CAP_NEXTPTR, // Default: 8'h00
			parameter_int_t PF1_PM_CAP_VER_ID, // Default: 3'h3
			parameter_enum_t PF1_RBAR_CAP_ENABLE, // Default: "FALSE"
			parameter_int_t PF1_RBAR_CAP_INDEX0, // Default: 3'h0
			parameter_int_t PF1_RBAR_CAP_INDEX1, // Default: 3'h0
			parameter_int_t PF1_RBAR_CAP_INDEX2, // Default: 3'h0
			parameter_int_t PF1_RBAR_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t PF1_RBAR_CAP_SIZE0, // Default: 20'h00000
			parameter_int_t PF1_RBAR_CAP_SIZE1, // Default: 20'h00000
			parameter_int_t PF1_RBAR_CAP_SIZE2, // Default: 20'h00000
			parameter_int_t PF1_RBAR_CAP_VER, // Default: 4'h1
			parameter_int_t PF1_RBAR_NUM, // Default: 3'h1
			parameter_int_t PF1_REVISION_ID, // Default: 8'h00
			parameter_int_t PF1_SRIOV_BAR0_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF1_SRIOV_BAR0_CONTROL, // Default: 3'h4
			parameter_int_t PF1_SRIOV_BAR1_APERTURE_SIZE, // Default: 5'h00
			parameter_int_t PF1_SRIOV_BAR1_CONTROL, // Default: 3'h0
			parameter_int_t PF1_SRIOV_BAR2_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF1_SRIOV_BAR2_CONTROL, // Default: 3'h4
			parameter_int_t PF1_SRIOV_BAR3_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF1_SRIOV_BAR3_CONTROL, // Default: 3'h0
			parameter_int_t PF1_SRIOV_BAR4_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF1_SRIOV_BAR4_CONTROL, // Default: 3'h4
			parameter_int_t PF1_SRIOV_BAR5_APERTURE_SIZE, // Default: 5'h03
			parameter_int_t PF1_SRIOV_BAR5_CONTROL, // Default: 3'h0
			parameter_int_t PF1_SRIOV_CAP_INITIAL_VF, // Default: 16'h0000
			parameter_int_t PF1_SRIOV_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t PF1_SRIOV_CAP_TOTAL_VF, // Default: 16'h0000
			parameter_int_t PF1_SRIOV_CAP_VER, // Default: 4'h1
			parameter_int_t PF1_SRIOV_FIRST_VF_OFFSET, // Default: 16'h0000
			parameter_int_t PF1_SRIOV_FUNC_DEP_LINK, // Default: 16'h0000
			parameter_int_t PF1_SRIOV_SUPPORTED_PAGE_SIZE, // Default: 32'h00000000
			parameter_int_t PF1_SRIOV_VF_DEVICE_ID, // Default: 16'h0000
			parameter_int_t PF1_SUBSYSTEM_ID, // Default: 16'h0000
			parameter_enum_t PF1_TPHR_CAP_DEV_SPECIFIC_MODE, // Default: "TRUE"
			parameter_enum_t PF1_TPHR_CAP_ENABLE, // Default: "FALSE"
			parameter_enum_t PF1_TPHR_CAP_INT_VEC_MODE, // Default: "TRUE"
			parameter_int_t PF1_TPHR_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t PF1_TPHR_CAP_ST_MODE_SEL, // Default: 3'h0
			parameter_int_t PF1_TPHR_CAP_ST_TABLE_LOC, // Default: 2'h0
			parameter_int_t PF1_TPHR_CAP_ST_TABLE_SIZE, // Default: 11'h000
			parameter_int_t PF1_TPHR_CAP_VER, // Default: 4'h1
			parameter_enum_t PL_DISABLE_EI_INFER_IN_L0, // Default: "FALSE"
			parameter_enum_t PL_DISABLE_GEN3_DC_BALANCE, // Default: "FALSE"
			parameter_enum_t PL_DISABLE_SCRAMBLING, // Default: "FALSE"
			parameter_enum_t PL_DISABLE_UPCONFIG_CAPABLE, // Default: "FALSE"
			parameter_enum_t PL_EQ_ADAPT_DISABLE_COEFF_CHECK, // Default: "FALSE"
			parameter_enum_t PL_EQ_ADAPT_DISABLE_PRESET_CHECK, // Default: "FALSE"
			parameter_int_t PL_EQ_ADAPT_ITER_COUNT, // Default: 5'h02
			parameter_int_t PL_EQ_ADAPT_REJECT_RETRY_COUNT, // Default: 2'h1
			parameter_enum_t PL_EQ_BYPASS_PHASE23, // Default: "FALSE"
			parameter_enum_t PL_EQ_SHORT_ADAPT_PHASE, // Default: "FALSE"
			parameter_int_t PL_LANE0_EQ_CONTROL, // Default: 16'h3F00
			parameter_int_t PL_LANE1_EQ_CONTROL, // Default: 16'h3F00
			parameter_int_t PL_LANE2_EQ_CONTROL, // Default: 16'h3F00
			parameter_int_t PL_LANE3_EQ_CONTROL, // Default: 16'h3F00
			parameter_int_t PL_LANE4_EQ_CONTROL, // Default: 16'h3F00
			parameter_int_t PL_LANE5_EQ_CONTROL, // Default: 16'h3F00
			parameter_int_t PL_LANE6_EQ_CONTROL, // Default: 16'h3F00
			parameter_int_t PL_LANE7_EQ_CONTROL, // Default: 16'h3F00
			parameter_int_t PL_LINK_CAP_MAX_LINK_SPEED, // Default: 3'h4
			parameter_int_t PL_LINK_CAP_MAX_LINK_WIDTH, // Default: 4'h8
			parameter_int_t PL_N_FTS_COMCLK_GEN1, // Default: 255
			parameter_int_t PL_N_FTS_COMCLK_GEN2, // Default: 255
			parameter_int_t PL_N_FTS_COMCLK_GEN3, // Default: 255
			parameter_int_t PL_N_FTS_GEN1, // Default: 255
			parameter_int_t PL_N_FTS_GEN2, // Default: 255
			parameter_int_t PL_N_FTS_GEN3, // Default: 255
			parameter_enum_t PL_SIM_FAST_LINK_TRAINING, // Default: "FALSE"
			parameter_enum_t PL_UPSTREAM_FACING, // Default: "TRUE"
			parameter_int_t PM_ASPML0S_TIMEOUT, // Default: 16'h05DC
			parameter_int_t PM_ASPML1_ENTRY_DELAY, // Default: 20'h00000
			parameter_enum_t PM_ENABLE_SLOT_POWER_CAPTURE, // Default: "TRUE"
			parameter_int_t PM_L1_REENTRY_DELAY, // Default: 32'h00000000
			parameter_int_t PM_PME_SERVICE_TIMEOUT_DELAY, // Default: 20'h186A0
			parameter_int_t PM_PME_TURNOFF_ACK_DELAY, // Default: 16'h0064
			parameter_string_t SIM_VERSION, // Default: "1.0"
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
			parameter_enum_t SRIOV_CAP_ENABLE, // Default: "FALSE"
			parameter_int_t TL_COMPL_TIMEOUT_REG0, // Default: 24'hBEBC20
			parameter_int_t TL_COMPL_TIMEOUT_REG1, // Default: 28'h0000000
			parameter_int_t TL_CREDITS_CD, // Default: 12'h3E0
			parameter_int_t TL_CREDITS_CH, // Default: 8'h20
			parameter_int_t TL_CREDITS_NPD, // Default: 12'h028
			parameter_int_t TL_CREDITS_NPH, // Default: 8'h20
			parameter_int_t TL_CREDITS_PD, // Default: 12'h198
			parameter_int_t TL_CREDITS_PH, // Default: 8'h20
			parameter_enum_t TL_ENABLE_MESSAGE_RID_CHECK_ENABLE, // Default: "TRUE"
			parameter_enum_t TL_EXTENDED_CFG_EXTEND_INTERFACE_ENABLE, // Default: "FALSE"
			parameter_enum_t TL_LEGACY_CFG_EXTEND_INTERFACE_ENABLE, // Default: "FALSE"
			parameter_enum_t TL_LEGACY_MODE_ENABLE, // Default: "FALSE"
			parameter_enum_t TL_PF_ENABLE_REG, // Default: "FALSE"
			parameter_enum_t TL_TAG_MGMT_ENABLE, // Default: "TRUE"
			parameter_int_t VF0_ARI_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t VF0_CAPABILITY_POINTER, // Default: 8'h50
			parameter_int_t VF0_MSIX_CAP_PBA_BIR, // Default: 0
			parameter_int_t VF0_MSIX_CAP_PBA_OFFSET, // Default: 29'h00000050
			parameter_int_t VF0_MSIX_CAP_TABLE_BIR, // Default: 0
			parameter_int_t VF0_MSIX_CAP_TABLE_OFFSET, // Default: 29'h00000040
			parameter_int_t VF0_MSIX_CAP_TABLE_SIZE, // Default: 11'h000
			parameter_int_t VF0_MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_int_t VF0_PM_CAP_ID, // Default: 8'h01
			parameter_int_t VF0_PM_CAP_NEXTPTR, // Default: 8'h00
			parameter_int_t VF0_PM_CAP_VER_ID, // Default: 3'h3
			parameter_enum_t VF0_TPHR_CAP_DEV_SPECIFIC_MODE, // Default: "TRUE"
			parameter_enum_t VF0_TPHR_CAP_ENABLE, // Default: "FALSE"
			parameter_enum_t VF0_TPHR_CAP_INT_VEC_MODE, // Default: "TRUE"
			parameter_int_t VF0_TPHR_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t VF0_TPHR_CAP_ST_MODE_SEL, // Default: 3'h0
			parameter_int_t VF0_TPHR_CAP_ST_TABLE_LOC, // Default: 2'h0
			parameter_int_t VF0_TPHR_CAP_ST_TABLE_SIZE, // Default: 11'h000
			parameter_int_t VF0_TPHR_CAP_VER, // Default: 4'h1
			parameter_int_t VF1_ARI_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t VF1_MSIX_CAP_PBA_BIR, // Default: 0
			parameter_int_t VF1_MSIX_CAP_PBA_OFFSET, // Default: 29'h00000050
			parameter_int_t VF1_MSIX_CAP_TABLE_BIR, // Default: 0
			parameter_int_t VF1_MSIX_CAP_TABLE_OFFSET, // Default: 29'h00000040
			parameter_int_t VF1_MSIX_CAP_TABLE_SIZE, // Default: 11'h000
			parameter_int_t VF1_MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_int_t VF1_PM_CAP_ID, // Default: 8'h01
			parameter_int_t VF1_PM_CAP_NEXTPTR, // Default: 8'h00
			parameter_int_t VF1_PM_CAP_VER_ID, // Default: 3'h3
			parameter_enum_t VF1_TPHR_CAP_DEV_SPECIFIC_MODE, // Default: "TRUE"
			parameter_enum_t VF1_TPHR_CAP_ENABLE, // Default: "FALSE"
			parameter_enum_t VF1_TPHR_CAP_INT_VEC_MODE, // Default: "TRUE"
			parameter_int_t VF1_TPHR_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t VF1_TPHR_CAP_ST_MODE_SEL, // Default: 3'h0
			parameter_int_t VF1_TPHR_CAP_ST_TABLE_LOC, // Default: 2'h0
			parameter_int_t VF1_TPHR_CAP_ST_TABLE_SIZE, // Default: 11'h000
			parameter_int_t VF1_TPHR_CAP_VER, // Default: 4'h1
			parameter_int_t VF2_ARI_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t VF2_MSIX_CAP_PBA_BIR, // Default: 0
			parameter_int_t VF2_MSIX_CAP_PBA_OFFSET, // Default: 29'h00000050
			parameter_int_t VF2_MSIX_CAP_TABLE_BIR, // Default: 0
			parameter_int_t VF2_MSIX_CAP_TABLE_OFFSET, // Default: 29'h00000040
			parameter_int_t VF2_MSIX_CAP_TABLE_SIZE, // Default: 11'h000
			parameter_int_t VF2_MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_int_t VF2_PM_CAP_ID, // Default: 8'h01
			parameter_int_t VF2_PM_CAP_NEXTPTR, // Default: 8'h00
			parameter_int_t VF2_PM_CAP_VER_ID, // Default: 3'h3
			parameter_enum_t VF2_TPHR_CAP_DEV_SPECIFIC_MODE, // Default: "TRUE"
			parameter_enum_t VF2_TPHR_CAP_ENABLE, // Default: "FALSE"
			parameter_enum_t VF2_TPHR_CAP_INT_VEC_MODE, // Default: "TRUE"
			parameter_int_t VF2_TPHR_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t VF2_TPHR_CAP_ST_MODE_SEL, // Default: 3'h0
			parameter_int_t VF2_TPHR_CAP_ST_TABLE_LOC, // Default: 2'h0
			parameter_int_t VF2_TPHR_CAP_ST_TABLE_SIZE, // Default: 11'h000
			parameter_int_t VF2_TPHR_CAP_VER, // Default: 4'h1
			parameter_int_t VF3_ARI_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t VF3_MSIX_CAP_PBA_BIR, // Default: 0
			parameter_int_t VF3_MSIX_CAP_PBA_OFFSET, // Default: 29'h00000050
			parameter_int_t VF3_MSIX_CAP_TABLE_BIR, // Default: 0
			parameter_int_t VF3_MSIX_CAP_TABLE_OFFSET, // Default: 29'h00000040
			parameter_int_t VF3_MSIX_CAP_TABLE_SIZE, // Default: 11'h000
			parameter_int_t VF3_MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_int_t VF3_PM_CAP_ID, // Default: 8'h01
			parameter_int_t VF3_PM_CAP_NEXTPTR, // Default: 8'h00
			parameter_int_t VF3_PM_CAP_VER_ID, // Default: 3'h3
			parameter_enum_t VF3_TPHR_CAP_DEV_SPECIFIC_MODE, // Default: "TRUE"
			parameter_enum_t VF3_TPHR_CAP_ENABLE, // Default: "FALSE"
			parameter_enum_t VF3_TPHR_CAP_INT_VEC_MODE, // Default: "TRUE"
			parameter_int_t VF3_TPHR_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t VF3_TPHR_CAP_ST_MODE_SEL, // Default: 3'h0
			parameter_int_t VF3_TPHR_CAP_ST_TABLE_LOC, // Default: 2'h0
			parameter_int_t VF3_TPHR_CAP_ST_TABLE_SIZE, // Default: 11'h000
			parameter_int_t VF3_TPHR_CAP_VER, // Default: 4'h1
			parameter_int_t VF4_ARI_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t VF4_MSIX_CAP_PBA_BIR, // Default: 0
			parameter_int_t VF4_MSIX_CAP_PBA_OFFSET, // Default: 29'h00000050
			parameter_int_t VF4_MSIX_CAP_TABLE_BIR, // Default: 0
			parameter_int_t VF4_MSIX_CAP_TABLE_OFFSET, // Default: 29'h00000040
			parameter_int_t VF4_MSIX_CAP_TABLE_SIZE, // Default: 11'h000
			parameter_int_t VF4_MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_int_t VF4_PM_CAP_ID, // Default: 8'h01
			parameter_int_t VF4_PM_CAP_NEXTPTR, // Default: 8'h00
			parameter_int_t VF4_PM_CAP_VER_ID, // Default: 3'h3
			parameter_enum_t VF4_TPHR_CAP_DEV_SPECIFIC_MODE, // Default: "TRUE"
			parameter_enum_t VF4_TPHR_CAP_ENABLE, // Default: "FALSE"
			parameter_enum_t VF4_TPHR_CAP_INT_VEC_MODE, // Default: "TRUE"
			parameter_int_t VF4_TPHR_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t VF4_TPHR_CAP_ST_MODE_SEL, // Default: 3'h0
			parameter_int_t VF4_TPHR_CAP_ST_TABLE_LOC, // Default: 2'h0
			parameter_int_t VF4_TPHR_CAP_ST_TABLE_SIZE, // Default: 11'h000
			parameter_int_t VF4_TPHR_CAP_VER, // Default: 4'h1
			parameter_int_t VF5_ARI_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t VF5_MSIX_CAP_PBA_BIR, // Default: 0
			parameter_int_t VF5_MSIX_CAP_PBA_OFFSET, // Default: 29'h00000050
			parameter_int_t VF5_MSIX_CAP_TABLE_BIR, // Default: 0
			parameter_int_t VF5_MSIX_CAP_TABLE_OFFSET, // Default: 29'h00000040
			parameter_int_t VF5_MSIX_CAP_TABLE_SIZE, // Default: 11'h000
			parameter_int_t VF5_MSI_CAP_MULTIMSGCAP, // Default: 0
			parameter_int_t VF5_PM_CAP_ID, // Default: 8'h01
			parameter_int_t VF5_PM_CAP_NEXTPTR, // Default: 8'h00
			parameter_int_t VF5_PM_CAP_VER_ID, // Default: 3'h3
			parameter_enum_t VF5_TPHR_CAP_DEV_SPECIFIC_MODE, // Default: "TRUE"
			parameter_enum_t VF5_TPHR_CAP_ENABLE, // Default: "FALSE"
			parameter_enum_t VF5_TPHR_CAP_INT_VEC_MODE, // Default: "TRUE"
			parameter_int_t VF5_TPHR_CAP_NEXTPTR, // Default: 12'h000
			parameter_int_t VF5_TPHR_CAP_ST_MODE_SEL, // Default: 3'h0
			parameter_int_t VF5_TPHR_CAP_ST_TABLE_LOC, // Default: 2'h0
			parameter_int_t VF5_TPHR_CAP_ST_TABLE_SIZE, // Default: 11'h000
			parameter_int_t VF5_TPHR_CAP_VER, // Default: 4'h1
			//Verilog Ports in definition order:
			NetFlow* CFGCURRENTSPEED_A0_B, // net ID: CFGCURRENTSPEED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGDPASUBSTATECHANGE_A0_B, // net ID: CFGDPASUBSTATECHANGE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGERRCOROUT_A0_B, // net ID: CFGERRCOROUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGERRFATALOUT_A0_B, // net ID: CFGERRFATALOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGERRNONFATALOUT_A0_B, // net ID: CFGERRNONFATALOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGEXTFUNCTIONNUMBER_A0_B, // net ID: CFGEXTFUNCTIONNUMBER lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGEXTREADRECEIVED_A0_B, // net ID: CFGEXTREADRECEIVED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGEXTREGISTERNUMBER_A0_B, // net ID: CFGEXTREGISTERNUMBER lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGEXTWRITEBYTEENABLE_A0_B, // net ID: CFGEXTWRITEBYTEENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGEXTWRITEDATA_A0_B, // net ID: CFGEXTWRITEDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGEXTWRITERECEIVED_A0_B, // net ID: CFGEXTWRITERECEIVED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFCCPLD_A0_B, // net ID: CFGFCCPLD lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFCCPLH_A0_B, // net ID: CFGFCCPLH lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFCNPD_A0_B, // net ID: CFGFCNPD lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFCNPH_A0_B, // net ID: CFGFCNPH lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFCPD_A0_B, // net ID: CFGFCPD lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFCPH_A0_B, // net ID: CFGFCPH lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFLRINPROCESS_A0_B, // net ID: CFGFLRINPROCESS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFUNCTIONPOWERSTATE_A0_B, // net ID: CFGFUNCTIONPOWERSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGFUNCTIONSTATUS_A0_B, // net ID: CFGFUNCTIONSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGHOTRESETOUT_A0_B, // net ID: CFGHOTRESETOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINPUTUPDATEDONE_A0_B, // net ID: CFGINPUTUPDATEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTAOUTPUT_A0_B, // net ID: CFGINTERRUPTAOUTPUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTBOUTPUT_A0_B, // net ID: CFGINTERRUPTBOUTPUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTCOUTPUT_A0_B, // net ID: CFGINTERRUPTCOUTPUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTDOUTPUT_A0_B, // net ID: CFGINTERRUPTDOUTPUT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIDATA_A0_B, // net ID: CFGINTERRUPTMSIDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIENABLE_A0_B, // net ID: CFGINTERRUPTMSIENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIFAIL_A0_B, // net ID: CFGINTERRUPTMSIFAIL lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIMASKUPDATE_A0_B, // net ID: CFGINTERRUPTMSIMASKUPDATE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIMMENABLE_A0_B, // net ID: CFGINTERRUPTMSIMMENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSISENT_A0_B, // net ID: CFGINTERRUPTMSISENT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIVFENABLE_A0_B, // net ID: CFGINTERRUPTMSIVFENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIXENABLE_A0_B, // net ID: CFGINTERRUPTMSIXENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIXFAIL_A0_B, // net ID: CFGINTERRUPTMSIXFAIL lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIXMASK_A0_B, // net ID: CFGINTERRUPTMSIXMASK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIXSENT_A0_B, // net ID: CFGINTERRUPTMSIXSENT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIXVFENABLE_A0_B, // net ID: CFGINTERRUPTMSIXVFENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTMSIXVFMASK_A0_B, // net ID: CFGINTERRUPTMSIXVFMASK lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGINTERRUPTSENT_A0_B, // net ID: CFGINTERRUPTSENT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLINKPOWERSTATE_A0_B, // net ID: CFGLINKPOWERSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLOCALERROR_A0_B, // net ID: CFGLOCALERROR lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLTRENABLE_A0_B, // net ID: CFGLTRENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGLTSSMSTATE_A0_B, // net ID: CFGLTSSMSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMAXPAYLOAD_A0_B, // net ID: CFGMAXPAYLOAD lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMAXREADREQ_A0_B, // net ID: CFGMAXREADREQ lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMCUPDATEDONE_A0_B, // net ID: CFGMCUPDATEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMGMTREADDATA_A0_B, // net ID: CFGMGMTREADDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMGMTREADWRITEDONE_A0_B, // net ID: CFGMGMTREADWRITEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVED_A0_B, // net ID: CFGMSGRECEIVED lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDDATA_A0_B, // net ID: CFGMSGRECEIVEDDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGRECEIVEDTYPE_A0_B, // net ID: CFGMSGRECEIVEDTYPE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGMSGTRANSMITDONE_A0_B, // net ID: CFGMSGTRANSMITDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGNEGOTIATEDWIDTH_A0_B, // net ID: CFGNEGOTIATEDWIDTH lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGOBFFENABLE_A0_B, // net ID: CFGOBFFENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPERFUNCSTATUSDATA_A0_B, // net ID: CFGPERFUNCSTATUSDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPERFUNCTIONUPDATEDONE_A0_B, // net ID: CFGPERFUNCTIONUPDATEDONE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPHYLINKDOWN_A0_B, // net ID: CFGPHYLINKDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPHYLINKSTATUS_A0_B, // net ID: CFGPHYLINKSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPLSTATUSCHANGE_A0_B, // net ID: CFGPLSTATUSCHANGE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGPOWERSTATECHANGEINTERRUPT_A0_B, // net ID: CFGPOWERSTATECHANGEINTERRUPT lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGRCBSTATUS_A0_B, // net ID: CFGRCBSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTPHFUNCTIONNUM_A0_B, // net ID: CFGTPHFUNCTIONNUM lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTPHREQUESTERENABLE_A0_B, // net ID: CFGTPHREQUESTERENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTPHSTMODE_A0_B, // net ID: CFGTPHSTMODE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTPHSTTADDRESS_A0_B, // net ID: CFGTPHSTTADDRESS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTPHSTTREADENABLE_A0_B, // net ID: CFGTPHSTTREADENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTPHSTTWRITEBYTEVALID_A0_B, // net ID: CFGTPHSTTWRITEBYTEVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTPHSTTWRITEDATA_A0_B, // net ID: CFGTPHSTTWRITEDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGTPHSTTWRITEENABLE_A0_B, // net ID: CFGTPHSTTWRITEENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGVFFLRINPROCESS_A0_B, // net ID: CFGVFFLRINPROCESS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGVFPOWERSTATE_A0_B, // net ID: CFGVFPOWERSTATE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGVFSTATUS_A0_B, // net ID: CFGVFSTATUS lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGVFTPHREQUESTERENABLE_A0_B, // net ID: CFGVFTPHREQUESTERENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGVFTPHSTMODE_A0_B, // net ID: CFGVFTPHSTMODE lsb: 0  msb: 0 OUTPUT
			NetFlow* DBGDATAOUT_A0_B, // net ID: DBGDATAOUT lsb: 0  msb: 0 OUTPUT
			NetFlow* DRPDO_A0_B, // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			NetFlow* DRPRDY_A0_B, // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISCQTDATA_A0_B, // net ID: MAXISCQTDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISCQTKEEP_A0_B, // net ID: MAXISCQTKEEP lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISCQTLAST_A0_B, // net ID: MAXISCQTLAST lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISCQTUSER_A0_B, // net ID: MAXISCQTUSER lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISCQTVALID_A0_B, // net ID: MAXISCQTVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISRCTDATA_A0_B, // net ID: MAXISRCTDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISRCTKEEP_A0_B, // net ID: MAXISRCTKEEP lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISRCTLAST_A0_B, // net ID: MAXISRCTLAST lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISRCTUSER_A0_B, // net ID: MAXISRCTUSER lsb: 0  msb: 0 OUTPUT
			NetFlow* MAXISRCTVALID_A0_B, // net ID: MAXISRCTVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMREADADDRESSAL_A0_B, // net ID: MICOMPLETIONRAMREADADDRESSAL lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMREADADDRESSAU_A0_B, // net ID: MICOMPLETIONRAMREADADDRESSAU lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMREADADDRESSBL_A0_B, // net ID: MICOMPLETIONRAMREADADDRESSBL lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMREADADDRESSBU_A0_B, // net ID: MICOMPLETIONRAMREADADDRESSBU lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMREADENABLEL_A0_B, // net ID: MICOMPLETIONRAMREADENABLEL lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMREADENABLEU_A0_B, // net ID: MICOMPLETIONRAMREADENABLEU lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMWRITEADDRESSAL_A0_B, // net ID: MICOMPLETIONRAMWRITEADDRESSAL lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMWRITEADDRESSAU_A0_B, // net ID: MICOMPLETIONRAMWRITEADDRESSAU lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMWRITEADDRESSBL_A0_B, // net ID: MICOMPLETIONRAMWRITEADDRESSBL lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMWRITEADDRESSBU_A0_B, // net ID: MICOMPLETIONRAMWRITEADDRESSBU lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMWRITEDATAL_A0_B, // net ID: MICOMPLETIONRAMWRITEDATAL lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMWRITEDATAU_A0_B, // net ID: MICOMPLETIONRAMWRITEDATAU lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMWRITEENABLEL_A0_B, // net ID: MICOMPLETIONRAMWRITEENABLEL lsb: 0  msb: 0 OUTPUT
			NetFlow* MICOMPLETIONRAMWRITEENABLEU_A0_B, // net ID: MICOMPLETIONRAMWRITEENABLEU lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREPLAYRAMADDRESS_A0_B, // net ID: MIREPLAYRAMADDRESS lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREPLAYRAMREADENABLE_A0_B, // net ID: MIREPLAYRAMREADENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREPLAYRAMWRITEDATA_A0_B, // net ID: MIREPLAYRAMWRITEDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREPLAYRAMWRITEENABLE_A0_B, // net ID: MIREPLAYRAMWRITEENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREQUESTRAMREADADDRESSA_A0_B, // net ID: MIREQUESTRAMREADADDRESSA lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREQUESTRAMREADADDRESSB_A0_B, // net ID: MIREQUESTRAMREADADDRESSB lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREQUESTRAMREADENABLE_A0_B, // net ID: MIREQUESTRAMREADENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREQUESTRAMWRITEADDRESSA_A0_B, // net ID: MIREQUESTRAMWRITEADDRESSA lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREQUESTRAMWRITEADDRESSB_A0_B, // net ID: MIREQUESTRAMWRITEADDRESSB lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREQUESTRAMWRITEDATA_A0_B, // net ID: MIREQUESTRAMWRITEDATA lsb: 0  msb: 0 OUTPUT
			NetFlow* MIREQUESTRAMWRITEENABLE_A0_B, // net ID: MIREQUESTRAMWRITEENABLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PCIECQNPREQCOUNT_A0_B, // net ID: PCIECQNPREQCOUNT lsb: 0  msb: 0 OUTPUT
			NetFlow* PCIERQSEQNUM_A0_B, // net ID: PCIERQSEQNUM lsb: 0  msb: 0 OUTPUT
			NetFlow* PCIERQSEQNUMVLD_A0_B, // net ID: PCIERQSEQNUMVLD lsb: 0  msb: 0 OUTPUT
			NetFlow* PCIERQTAG_A0_B, // net ID: PCIERQTAG lsb: 0  msb: 0 OUTPUT
			NetFlow* PCIERQTAGAV_A0_B, // net ID: PCIERQTAGAV lsb: 0  msb: 0 OUTPUT
			NetFlow* PCIERQTAGVLD_A0_B, // net ID: PCIERQTAGVLD lsb: 0  msb: 0 OUTPUT
			NetFlow* PCIETFCNPDAV_A0_B, // net ID: PCIETFCNPDAV lsb: 0  msb: 0 OUTPUT
			NetFlow* PCIETFCNPHAV_A0_B, // net ID: PCIETFCNPHAV lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX0EQCONTROL_A0_B, // net ID: PIPERX0EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX0EQLPLFFS_A0_B, // net ID: PIPERX0EQLPLFFS lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX0EQLPTXPRESET_A0_B, // net ID: PIPERX0EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX0EQPRESET_A0_B, // net ID: PIPERX0EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX0POLARITY_A0_B, // net ID: PIPERX0POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX1EQCONTROL_A0_B, // net ID: PIPERX1EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX1EQLPLFFS_A0_B, // net ID: PIPERX1EQLPLFFS lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX1EQLPTXPRESET_A0_B, // net ID: PIPERX1EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX1EQPRESET_A0_B, // net ID: PIPERX1EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX1POLARITY_A0_B, // net ID: PIPERX1POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX2EQCONTROL_A0_B, // net ID: PIPERX2EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX2EQLPLFFS_A0_B, // net ID: PIPERX2EQLPLFFS lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX2EQLPTXPRESET_A0_B, // net ID: PIPERX2EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX2EQPRESET_A0_B, // net ID: PIPERX2EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX2POLARITY_A0_B, // net ID: PIPERX2POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX3EQCONTROL_A0_B, // net ID: PIPERX3EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX3EQLPLFFS_A0_B, // net ID: PIPERX3EQLPLFFS lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX3EQLPTXPRESET_A0_B, // net ID: PIPERX3EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX3EQPRESET_A0_B, // net ID: PIPERX3EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX3POLARITY_A0_B, // net ID: PIPERX3POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX4EQCONTROL_A0_B, // net ID: PIPERX4EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX4EQLPLFFS_A0_B, // net ID: PIPERX4EQLPLFFS lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX4EQLPTXPRESET_A0_B, // net ID: PIPERX4EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX4EQPRESET_A0_B, // net ID: PIPERX4EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX4POLARITY_A0_B, // net ID: PIPERX4POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX5EQCONTROL_A0_B, // net ID: PIPERX5EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX5EQLPLFFS_A0_B, // net ID: PIPERX5EQLPLFFS lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX5EQLPTXPRESET_A0_B, // net ID: PIPERX5EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX5EQPRESET_A0_B, // net ID: PIPERX5EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX5POLARITY_A0_B, // net ID: PIPERX5POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX6EQCONTROL_A0_B, // net ID: PIPERX6EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX6EQLPLFFS_A0_B, // net ID: PIPERX6EQLPLFFS lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX6EQLPTXPRESET_A0_B, // net ID: PIPERX6EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX6EQPRESET_A0_B, // net ID: PIPERX6EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX6POLARITY_A0_B, // net ID: PIPERX6POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX7EQCONTROL_A0_B, // net ID: PIPERX7EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX7EQLPLFFS_A0_B, // net ID: PIPERX7EQLPLFFS lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX7EQLPTXPRESET_A0_B, // net ID: PIPERX7EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX7EQPRESET_A0_B, // net ID: PIPERX7EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPERX7POLARITY_A0_B, // net ID: PIPERX7POLARITY lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0CHARISK_A0_B, // net ID: PIPETX0CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0COMPLIANCE_A0_B, // net ID: PIPETX0COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0DATA_A0_B, // net ID: PIPETX0DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0DATAVALID_A0_B, // net ID: PIPETX0DATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0ELECIDLE_A0_B, // net ID: PIPETX0ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0EQCONTROL_A0_B, // net ID: PIPETX0EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0EQDEEMPH_A0_B, // net ID: PIPETX0EQDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0EQPRESET_A0_B, // net ID: PIPETX0EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0POWERDOWN_A0_B, // net ID: PIPETX0POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0STARTBLOCK_A0_B, // net ID: PIPETX0STARTBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX0SYNCHEADER_A0_B, // net ID: PIPETX0SYNCHEADER lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1CHARISK_A0_B, // net ID: PIPETX1CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1COMPLIANCE_A0_B, // net ID: PIPETX1COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1DATA_A0_B, // net ID: PIPETX1DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1DATAVALID_A0_B, // net ID: PIPETX1DATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1ELECIDLE_A0_B, // net ID: PIPETX1ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1EQCONTROL_A0_B, // net ID: PIPETX1EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1EQDEEMPH_A0_B, // net ID: PIPETX1EQDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1EQPRESET_A0_B, // net ID: PIPETX1EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1POWERDOWN_A0_B, // net ID: PIPETX1POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1STARTBLOCK_A0_B, // net ID: PIPETX1STARTBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX1SYNCHEADER_A0_B, // net ID: PIPETX1SYNCHEADER lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2CHARISK_A0_B, // net ID: PIPETX2CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2COMPLIANCE_A0_B, // net ID: PIPETX2COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2DATA_A0_B, // net ID: PIPETX2DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2DATAVALID_A0_B, // net ID: PIPETX2DATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2ELECIDLE_A0_B, // net ID: PIPETX2ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2EQCONTROL_A0_B, // net ID: PIPETX2EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2EQDEEMPH_A0_B, // net ID: PIPETX2EQDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2EQPRESET_A0_B, // net ID: PIPETX2EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2POWERDOWN_A0_B, // net ID: PIPETX2POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2STARTBLOCK_A0_B, // net ID: PIPETX2STARTBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX2SYNCHEADER_A0_B, // net ID: PIPETX2SYNCHEADER lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3CHARISK_A0_B, // net ID: PIPETX3CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3COMPLIANCE_A0_B, // net ID: PIPETX3COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3DATA_A0_B, // net ID: PIPETX3DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3DATAVALID_A0_B, // net ID: PIPETX3DATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3ELECIDLE_A0_B, // net ID: PIPETX3ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3EQCONTROL_A0_B, // net ID: PIPETX3EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3EQDEEMPH_A0_B, // net ID: PIPETX3EQDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3EQPRESET_A0_B, // net ID: PIPETX3EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3POWERDOWN_A0_B, // net ID: PIPETX3POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3STARTBLOCK_A0_B, // net ID: PIPETX3STARTBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX3SYNCHEADER_A0_B, // net ID: PIPETX3SYNCHEADER lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4CHARISK_A0_B, // net ID: PIPETX4CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4COMPLIANCE_A0_B, // net ID: PIPETX4COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4DATA_A0_B, // net ID: PIPETX4DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4DATAVALID_A0_B, // net ID: PIPETX4DATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4ELECIDLE_A0_B, // net ID: PIPETX4ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4EQCONTROL_A0_B, // net ID: PIPETX4EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4EQDEEMPH_A0_B, // net ID: PIPETX4EQDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4EQPRESET_A0_B, // net ID: PIPETX4EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4POWERDOWN_A0_B, // net ID: PIPETX4POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4STARTBLOCK_A0_B, // net ID: PIPETX4STARTBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX4SYNCHEADER_A0_B, // net ID: PIPETX4SYNCHEADER lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5CHARISK_A0_B, // net ID: PIPETX5CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5COMPLIANCE_A0_B, // net ID: PIPETX5COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5DATA_A0_B, // net ID: PIPETX5DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5DATAVALID_A0_B, // net ID: PIPETX5DATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5ELECIDLE_A0_B, // net ID: PIPETX5ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5EQCONTROL_A0_B, // net ID: PIPETX5EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5EQDEEMPH_A0_B, // net ID: PIPETX5EQDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5EQPRESET_A0_B, // net ID: PIPETX5EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5POWERDOWN_A0_B, // net ID: PIPETX5POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5STARTBLOCK_A0_B, // net ID: PIPETX5STARTBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX5SYNCHEADER_A0_B, // net ID: PIPETX5SYNCHEADER lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6CHARISK_A0_B, // net ID: PIPETX6CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6COMPLIANCE_A0_B, // net ID: PIPETX6COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6DATA_A0_B, // net ID: PIPETX6DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6DATAVALID_A0_B, // net ID: PIPETX6DATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6ELECIDLE_A0_B, // net ID: PIPETX6ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6EQCONTROL_A0_B, // net ID: PIPETX6EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6EQDEEMPH_A0_B, // net ID: PIPETX6EQDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6EQPRESET_A0_B, // net ID: PIPETX6EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6POWERDOWN_A0_B, // net ID: PIPETX6POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6STARTBLOCK_A0_B, // net ID: PIPETX6STARTBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX6SYNCHEADER_A0_B, // net ID: PIPETX6SYNCHEADER lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7CHARISK_A0_B, // net ID: PIPETX7CHARISK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7COMPLIANCE_A0_B, // net ID: PIPETX7COMPLIANCE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7DATA_A0_B, // net ID: PIPETX7DATA lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7DATAVALID_A0_B, // net ID: PIPETX7DATAVALID lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7ELECIDLE_A0_B, // net ID: PIPETX7ELECIDLE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7EQCONTROL_A0_B, // net ID: PIPETX7EQCONTROL lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7EQDEEMPH_A0_B, // net ID: PIPETX7EQDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7EQPRESET_A0_B, // net ID: PIPETX7EQPRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7POWERDOWN_A0_B, // net ID: PIPETX7POWERDOWN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7STARTBLOCK_A0_B, // net ID: PIPETX7STARTBLOCK lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETX7SYNCHEADER_A0_B, // net ID: PIPETX7SYNCHEADER lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXDEEMPH_A0_B, // net ID: PIPETXDEEMPH lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXMARGIN_A0_B, // net ID: PIPETXMARGIN lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXRATE_A0_B, // net ID: PIPETXRATE lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXRCVRDET_A0_B, // net ID: PIPETXRCVRDET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXRESET_A0_B, // net ID: PIPETXRESET lsb: 0  msb: 0 OUTPUT
			NetFlow* PIPETXSWING_A0_B, // net ID: PIPETXSWING lsb: 0  msb: 0 OUTPUT
			NetFlow* PLEQINPROGRESS_A0_B, // net ID: PLEQINPROGRESS lsb: 0  msb: 0 OUTPUT
			NetFlow* PLEQPHASE_A0_B, // net ID: PLEQPHASE lsb: 0  msb: 0 OUTPUT
			NetFlow* PLGEN3PCSRXSLIDE_A0_B, // net ID: PLGEN3PCSRXSLIDE lsb: 0  msb: 0 OUTPUT
			NetFlow* SAXISCCTREADY_A0_B, // net ID: SAXISCCTREADY lsb: 0  msb: 0 OUTPUT
			NetFlow* SAXISRQTREADY_A0_B, // net ID: SAXISRQTREADY lsb: 0  msb: 0 OUTPUT
			NetFlow* CFGCONFIGSPACEENABLE_A0_B, // net ID: CFGCONFIGSPACEENABLE lsb: 0  msb: 0 INPUT
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
			NetFlow* CFGDSPORTNUMBER_A0_B, // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGDSPORTNUMBER_A1_B, // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGDSPORTNUMBER_A2_B, // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGDSPORTNUMBER_A3_B, // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGDSPORTNUMBER_A4_B, // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGDSPORTNUMBER_A5_B, // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGDSPORTNUMBER_A6_B, // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGDSPORTNUMBER_A7_B, // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
			NetFlow* CFGERRCORIN_A0_B, // net ID: CFGERRCORIN lsb: 0  msb: 0 INPUT
			NetFlow* CFGERRUNCORIN_A0_B, // net ID: CFGERRUNCORIN lsb: 0  msb: 0 INPUT
			NetFlow* CFGEXTREADDATA_A0_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A1_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A2_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A3_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A4_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A5_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A6_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A7_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A8_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A9_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A10_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A11_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A12_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A13_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A14_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A15_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A16_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A17_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A18_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A19_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A20_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A21_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A22_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A23_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A24_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A25_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A26_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A27_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A28_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A29_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A30_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATA_A31_B, // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGEXTREADDATAVALID_A0_B, // net ID: CFGEXTREADDATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* CFGFCSEL_A0_B, // net ID: CFGFCSEL lsb: 0  msb: 2 INPUT
			NetFlow* CFGFCSEL_A1_B, // net ID: CFGFCSEL lsb: 0  msb: 2 INPUT
			NetFlow* CFGFCSEL_A2_B, // net ID: CFGFCSEL lsb: 0  msb: 2 INPUT
			NetFlow* CFGFLRDONE_A0_B, // net ID: CFGFLRDONE lsb: 0  msb: 1 INPUT
			NetFlow* CFGFLRDONE_A1_B, // net ID: CFGFLRDONE lsb: 0  msb: 1 INPUT
			NetFlow* CFGHOTRESETIN_A0_B, // net ID: CFGHOTRESETIN lsb: 0  msb: 0 INPUT
			NetFlow* CFGINPUTUPDATEREQUEST_A0_B, // net ID: CFGINPUTUPDATEREQUEST lsb: 0  msb: 0 INPUT
			NetFlow* CFGINTERRUPTINT_A0_B, // net ID: CFGINTERRUPTINT lsb: 0  msb: 3 INPUT
			NetFlow* CFGINTERRUPTINT_A1_B, // net ID: CFGINTERRUPTINT lsb: 0  msb: 3 INPUT
			NetFlow* CFGINTERRUPTINT_A2_B, // net ID: CFGINTERRUPTINT lsb: 0  msb: 3 INPUT
			NetFlow* CFGINTERRUPTINT_A3_B, // net ID: CFGINTERRUPTINT lsb: 0  msb: 3 INPUT
			NetFlow* CFGINTERRUPTMSIATTR_A0_B, // net ID: CFGINTERRUPTMSIATTR lsb: 0  msb: 2 INPUT
			NetFlow* CFGINTERRUPTMSIATTR_A1_B, // net ID: CFGINTERRUPTMSIATTR lsb: 0  msb: 2 INPUT
			NetFlow* CFGINTERRUPTMSIATTR_A2_B, // net ID: CFGINTERRUPTMSIATTR lsb: 0  msb: 2 INPUT
			NetFlow* CFGINTERRUPTMSIFUNCTIONNUMBER_A0_B, // net ID: CFGINTERRUPTMSIFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			NetFlow* CFGINTERRUPTMSIFUNCTIONNUMBER_A1_B, // net ID: CFGINTERRUPTMSIFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			NetFlow* CFGINTERRUPTMSIFUNCTIONNUMBER_A2_B, // net ID: CFGINTERRUPTMSIFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A0_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A1_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A2_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A3_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A4_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A5_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A6_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A7_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A8_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A9_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A10_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A11_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A12_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A13_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A14_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A15_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A16_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A17_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A18_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A19_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A20_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A21_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A22_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A23_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A24_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A25_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A26_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A27_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A28_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A29_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A30_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIINT_A31_B, // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A0_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A1_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A2_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A3_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A4_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A5_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A6_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A7_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A8_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A9_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A10_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A11_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A12_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A13_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A14_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A15_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A16_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A17_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A18_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A19_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A20_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A21_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A22_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A23_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A24_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A25_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A26_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A27_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A28_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A29_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A30_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A31_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A32_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A33_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A34_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A35_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A36_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A37_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A38_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A39_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A40_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A41_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A42_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A43_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A44_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A45_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A46_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A47_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A48_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A49_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A50_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A51_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A52_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A53_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A54_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A55_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A56_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A57_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A58_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A59_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A60_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A61_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A62_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIPENDINGSTATUS_A63_B, // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSISELECT_A0_B, // net ID: CFGINTERRUPTMSISELECT lsb: 0  msb: 3 INPUT
			NetFlow* CFGINTERRUPTMSISELECT_A1_B, // net ID: CFGINTERRUPTMSISELECT lsb: 0  msb: 3 INPUT
			NetFlow* CFGINTERRUPTMSISELECT_A2_B, // net ID: CFGINTERRUPTMSISELECT lsb: 0  msb: 3 INPUT
			NetFlow* CFGINTERRUPTMSISELECT_A3_B, // net ID: CFGINTERRUPTMSISELECT lsb: 0  msb: 3 INPUT
			NetFlow* CFGINTERRUPTMSITPHPRESENT_A0_B, // net ID: CFGINTERRUPTMSITPHPRESENT lsb: 0  msb: 0 INPUT
			NetFlow* CFGINTERRUPTMSITPHSTTAG_A0_B, // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			NetFlow* CFGINTERRUPTMSITPHSTTAG_A1_B, // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			NetFlow* CFGINTERRUPTMSITPHSTTAG_A2_B, // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			NetFlow* CFGINTERRUPTMSITPHSTTAG_A3_B, // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			NetFlow* CFGINTERRUPTMSITPHSTTAG_A4_B, // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			NetFlow* CFGINTERRUPTMSITPHSTTAG_A5_B, // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			NetFlow* CFGINTERRUPTMSITPHSTTAG_A6_B, // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			NetFlow* CFGINTERRUPTMSITPHSTTAG_A7_B, // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			NetFlow* CFGINTERRUPTMSITPHSTTAG_A8_B, // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			NetFlow* CFGINTERRUPTMSITPHTYPE_A0_B, // net ID: CFGINTERRUPTMSITPHTYPE lsb: 0  msb: 1 INPUT
			NetFlow* CFGINTERRUPTMSITPHTYPE_A1_B, // net ID: CFGINTERRUPTMSITPHTYPE lsb: 0  msb: 1 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A0_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A1_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A2_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A3_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A4_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A5_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A6_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A7_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A8_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A9_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A10_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A11_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A12_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A13_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A14_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A15_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A16_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A17_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A18_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A19_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A20_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A21_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A22_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A23_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A24_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A25_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A26_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A27_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A28_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A29_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A30_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A31_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A32_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A33_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A34_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A35_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A36_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A37_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A38_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A39_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A40_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A41_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A42_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A43_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A44_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A45_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A46_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A47_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A48_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A49_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A50_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A51_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A52_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A53_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A54_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A55_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A56_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A57_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A58_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A59_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A60_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A61_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A62_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXADDRESS_A63_B, // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A0_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A1_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A2_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A3_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A4_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A5_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A6_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A7_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A8_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A9_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A10_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A11_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A12_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A13_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A14_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A15_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A16_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A17_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A18_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A19_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A20_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A21_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A22_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A23_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A24_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A25_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A26_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A27_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A28_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A29_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A30_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXDATA_A31_B, // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGINTERRUPTMSIXINT_A0_B, // net ID: CFGINTERRUPTMSIXINT lsb: 0  msb: 0 INPUT
			NetFlow* CFGINTERRUPTPENDING_A0_B, // net ID: CFGINTERRUPTPENDING lsb: 0  msb: 1 INPUT
			NetFlow* CFGINTERRUPTPENDING_A1_B, // net ID: CFGINTERRUPTPENDING lsb: 0  msb: 1 INPUT
			NetFlow* CFGLINKTRAININGENABLE_A0_B, // net ID: CFGLINKTRAININGENABLE lsb: 0  msb: 0 INPUT
			NetFlow* CFGMCUPDATEREQUEST_A0_B, // net ID: CFGMCUPDATEREQUEST lsb: 0  msb: 0 INPUT
			NetFlow* CFGMGMTADDR_A0_B, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTADDR_A1_B, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTADDR_A2_B, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTADDR_A3_B, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTADDR_A4_B, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTADDR_A5_B, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTADDR_A6_B, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTADDR_A7_B, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTADDR_A8_B, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTADDR_A9_B, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTADDR_A10_B, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTADDR_A11_B, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTADDR_A12_B, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTADDR_A13_B, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTADDR_A14_B, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTADDR_A15_B, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTADDR_A16_B, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTADDR_A17_B, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTADDR_A18_B, // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			NetFlow* CFGMGMTBYTEENABLE_A0_B, // net ID: CFGMGMTBYTEENABLE lsb: 0  msb: 3 INPUT
			NetFlow* CFGMGMTBYTEENABLE_A1_B, // net ID: CFGMGMTBYTEENABLE lsb: 0  msb: 3 INPUT
			NetFlow* CFGMGMTBYTEENABLE_A2_B, // net ID: CFGMGMTBYTEENABLE lsb: 0  msb: 3 INPUT
			NetFlow* CFGMGMTBYTEENABLE_A3_B, // net ID: CFGMGMTBYTEENABLE lsb: 0  msb: 3 INPUT
			NetFlow* CFGMGMTREAD_A0_B, // net ID: CFGMGMTREAD lsb: 0  msb: 0 INPUT
			NetFlow* CFGMGMTTYPE1CFGREGACCESS_A0_B, // net ID: CFGMGMTTYPE1CFGREGACCESS lsb: 0  msb: 0 INPUT
			NetFlow* CFGMGMTWRITE_A0_B, // net ID: CFGMGMTWRITE lsb: 0  msb: 0 INPUT
			NetFlow* CFGMGMTWRITEDATA_A0_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A1_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A2_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A3_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A4_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A5_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A6_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A7_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A8_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A9_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A10_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A11_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A12_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A13_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A14_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A15_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A16_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A17_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A18_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A19_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A20_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A21_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A22_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A23_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A24_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A25_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A26_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A27_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A28_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A29_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A30_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMGMTWRITEDATA_A31_B, // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMIT_A0_B, // net ID: CFGMSGTRANSMIT lsb: 0  msb: 0 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A0_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A1_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A2_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A3_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A4_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A5_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A6_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A7_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A8_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A9_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A10_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A11_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A12_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A13_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A14_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A15_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A16_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A17_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A18_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A19_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A20_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A21_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A22_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A23_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A24_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A25_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A26_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A27_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A28_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A29_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A30_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITDATA_A31_B, // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGMSGTRANSMITTYPE_A0_B, // net ID: CFGMSGTRANSMITTYPE lsb: 0  msb: 2 INPUT
			NetFlow* CFGMSGTRANSMITTYPE_A1_B, // net ID: CFGMSGTRANSMITTYPE lsb: 0  msb: 2 INPUT
			NetFlow* CFGMSGTRANSMITTYPE_A2_B, // net ID: CFGMSGTRANSMITTYPE lsb: 0  msb: 2 INPUT
			NetFlow* CFGPERFUNCSTATUSCONTROL_A0_B, // net ID: CFGPERFUNCSTATUSCONTROL lsb: 0  msb: 2 INPUT
			NetFlow* CFGPERFUNCSTATUSCONTROL_A1_B, // net ID: CFGPERFUNCSTATUSCONTROL lsb: 0  msb: 2 INPUT
			NetFlow* CFGPERFUNCSTATUSCONTROL_A2_B, // net ID: CFGPERFUNCSTATUSCONTROL lsb: 0  msb: 2 INPUT
			NetFlow* CFGPERFUNCTIONNUMBER_A0_B, // net ID: CFGPERFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			NetFlow* CFGPERFUNCTIONNUMBER_A1_B, // net ID: CFGPERFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			NetFlow* CFGPERFUNCTIONNUMBER_A2_B, // net ID: CFGPERFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			NetFlow* CFGPERFUNCTIONOUTPUTREQUEST_A0_B, // net ID: CFGPERFUNCTIONOUTPUTREQUEST lsb: 0  msb: 0 INPUT
			NetFlow* CFGPOWERSTATECHANGEACK_A0_B, // net ID: CFGPOWERSTATECHANGEACK lsb: 0  msb: 0 INPUT
			NetFlow* CFGREQPMTRANSITIONL23READY_A0_B, // net ID: CFGREQPMTRANSITIONL23READY lsb: 0  msb: 0 INPUT
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
			NetFlow* CFGTPHSTTREADDATA_A0_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A1_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A2_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A3_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A4_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A5_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A6_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A7_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A8_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A9_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A10_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A11_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A12_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A13_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A14_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A15_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A16_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A17_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A18_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A19_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A20_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A21_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A22_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A23_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A24_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A25_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A26_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A27_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A28_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A29_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A30_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATA_A31_B, // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			NetFlow* CFGTPHSTTREADDATAVALID_A0_B, // net ID: CFGTPHSTTREADDATAVALID lsb: 0  msb: 0 INPUT
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
			NetFlow* CFGVFFLRDONE_A0_B, // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
			NetFlow* CFGVFFLRDONE_A1_B, // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
			NetFlow* CFGVFFLRDONE_A2_B, // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
			NetFlow* CFGVFFLRDONE_A3_B, // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
			NetFlow* CFGVFFLRDONE_A4_B, // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
			NetFlow* CFGVFFLRDONE_A5_B, // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
			NetFlow* CORECLK_A0_B, // net ID: CORECLK lsb: 0  msb: 0 INPUT
			NetFlow* CORECLKMICOMPLETIONRAML_A0_B, // net ID: CORECLKMICOMPLETIONRAML lsb: 0  msb: 0 INPUT
			NetFlow* CORECLKMICOMPLETIONRAMU_A0_B, // net ID: CORECLKMICOMPLETIONRAMU lsb: 0  msb: 0 INPUT
			NetFlow* CORECLKMIREPLAYRAM_A0_B, // net ID: CORECLKMIREPLAYRAM lsb: 0  msb: 0 INPUT
			NetFlow* CORECLKMIREQUESTRAM_A0_B, // net ID: CORECLKMIREQUESTRAM lsb: 0  msb: 0 INPUT
			NetFlow* DRPADDR_A0_B, // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			NetFlow* DRPADDR_A1_B, // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			NetFlow* DRPADDR_A2_B, // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			NetFlow* DRPADDR_A3_B, // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			NetFlow* DRPADDR_A4_B, // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			NetFlow* DRPADDR_A5_B, // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			NetFlow* DRPADDR_A6_B, // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			NetFlow* DRPADDR_A7_B, // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			NetFlow* DRPADDR_A8_B, // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			NetFlow* DRPADDR_A9_B, // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			NetFlow* DRPADDR_A10_B, // net ID: DRPADDR lsb: 0  msb: 10 INPUT
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
			NetFlow* MAXISCQTREADY_A0_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A1_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A2_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A3_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A4_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A5_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A6_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A7_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A8_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A9_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A10_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A11_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A12_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A13_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A14_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A15_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A16_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A17_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A18_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A19_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A20_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISCQTREADY_A21_B, // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A0_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A1_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A2_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A3_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A4_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A5_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A6_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A7_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A8_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A9_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A10_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A11_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A12_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A13_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A14_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A15_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A16_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A17_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A18_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A19_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A20_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MAXISRCTREADY_A21_B, // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			NetFlow* MGMTRESETN_A0_B, // net ID: MGMTRESETN lsb: 0  msb: 0 INPUT
			NetFlow* MGMTSTICKYRESETN_A0_B, // net ID: MGMTSTICKYRESETN lsb: 0  msb: 0 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A0_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A1_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A2_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A3_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A4_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A5_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A6_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A7_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A8_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A9_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A10_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A11_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A12_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A13_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A14_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A15_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A16_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A17_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A18_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A19_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A20_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A21_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A22_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A23_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A24_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A25_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A26_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A27_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A28_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A29_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A30_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A31_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A32_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A33_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A34_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A35_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A36_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A37_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A38_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A39_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A40_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A41_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A42_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A43_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A44_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A45_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A46_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A47_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A48_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A49_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A50_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A51_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A52_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A53_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A54_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A55_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A56_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A57_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A58_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A59_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A60_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A61_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A62_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A63_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A64_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A65_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A66_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A67_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A68_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A69_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A70_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A71_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A72_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A73_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A74_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A75_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A76_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A77_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A78_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A79_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A80_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A81_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A82_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A83_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A84_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A85_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A86_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A87_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A88_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A89_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A90_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A91_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A92_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A93_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A94_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A95_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A96_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A97_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A98_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A99_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A100_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A101_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A102_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A103_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A104_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A105_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A106_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A107_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A108_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A109_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A110_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A111_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A112_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A113_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A114_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A115_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A116_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A117_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A118_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A119_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A120_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A121_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A122_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A123_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A124_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A125_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A126_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A127_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A128_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A129_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A130_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A131_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A132_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A133_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A134_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A135_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A136_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A137_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A138_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A139_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A140_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A141_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A142_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MICOMPLETIONRAMREADDATA_A143_B, // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A0_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A1_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A2_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A3_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A4_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A5_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A6_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A7_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A8_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A9_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A10_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A11_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A12_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A13_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A14_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A15_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A16_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A17_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A18_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A19_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A20_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A21_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A22_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A23_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A24_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A25_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A26_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A27_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A28_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A29_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A30_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A31_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A32_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A33_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A34_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A35_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A36_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A37_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A38_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A39_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A40_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A41_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A42_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A43_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A44_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A45_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A46_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A47_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A48_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A49_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A50_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A51_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A52_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A53_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A54_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A55_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A56_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A57_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A58_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A59_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A60_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A61_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A62_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A63_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A64_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A65_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A66_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A67_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A68_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A69_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A70_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A71_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A72_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A73_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A74_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A75_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A76_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A77_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A78_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A79_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A80_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A81_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A82_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A83_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A84_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A85_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A86_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A87_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A88_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A89_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A90_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A91_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A92_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A93_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A94_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A95_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A96_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A97_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A98_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A99_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A100_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A101_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A102_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A103_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A104_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A105_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A106_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A107_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A108_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A109_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A110_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A111_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A112_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A113_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A114_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A115_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A116_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A117_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A118_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A119_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A120_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A121_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A122_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A123_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A124_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A125_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A126_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A127_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A128_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A129_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A130_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A131_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A132_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A133_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A134_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A135_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A136_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A137_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A138_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A139_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A140_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A141_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A142_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREPLAYRAMREADDATA_A143_B, // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A0_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A1_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A2_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A3_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A4_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A5_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A6_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A7_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A8_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A9_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A10_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A11_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A12_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A13_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A14_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A15_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A16_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A17_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A18_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A19_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A20_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A21_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A22_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A23_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A24_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A25_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A26_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A27_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A28_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A29_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A30_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A31_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A32_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A33_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A34_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A35_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A36_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A37_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A38_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A39_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A40_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A41_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A42_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A43_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A44_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A45_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A46_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A47_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A48_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A49_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A50_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A51_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A52_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A53_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A54_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A55_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A56_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A57_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A58_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A59_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A60_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A61_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A62_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A63_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A64_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A65_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A66_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A67_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A68_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A69_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A70_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A71_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A72_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A73_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A74_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A75_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A76_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A77_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A78_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A79_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A80_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A81_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A82_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A83_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A84_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A85_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A86_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A87_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A88_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A89_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A90_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A91_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A92_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A93_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A94_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A95_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A96_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A97_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A98_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A99_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A100_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A101_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A102_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A103_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A104_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A105_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A106_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A107_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A108_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A109_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A110_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A111_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A112_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A113_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A114_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A115_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A116_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A117_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A118_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A119_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A120_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A121_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A122_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A123_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A124_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A125_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A126_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A127_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A128_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A129_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A130_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A131_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A132_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A133_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A134_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A135_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A136_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A137_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A138_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A139_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A140_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A141_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A142_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* MIREQUESTRAMREADDATA_A143_B, // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			NetFlow* PCIECQNPREQ_A0_B, // net ID: PCIECQNPREQ lsb: 0  msb: 0 INPUT
			NetFlow* PIPECLK_A0_B, // net ID: PIPECLK lsb: 0  msb: 0 INPUT
			NetFlow* PIPEEQFS_A0_B, // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
			NetFlow* PIPEEQFS_A1_B, // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
			NetFlow* PIPEEQFS_A2_B, // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
			NetFlow* PIPEEQFS_A3_B, // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
			NetFlow* PIPEEQFS_A4_B, // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
			NetFlow* PIPEEQFS_A5_B, // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
			NetFlow* PIPEEQLF_A0_B, // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
			NetFlow* PIPEEQLF_A1_B, // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
			NetFlow* PIPEEQLF_A2_B, // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
			NetFlow* PIPEEQLF_A3_B, // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
			NetFlow* PIPEEQLF_A4_B, // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
			NetFlow* PIPEEQLF_A5_B, // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
			NetFlow* PIPERESETN_A0_B, // net ID: PIPERESETN lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0CHARISK_A0_B, // net ID: PIPERX0CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX0CHARISK_A1_B, // net ID: PIPERX0CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX0DATA_A0_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A1_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A2_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A3_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A4_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A5_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A6_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A7_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A8_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A9_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A10_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A11_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A12_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A13_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A14_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A15_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A16_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A17_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A18_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A19_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A20_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A21_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A22_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A23_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A24_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A25_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A26_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A27_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A28_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A29_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A30_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATA_A31_B, // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX0DATAVALID_A0_B, // net ID: PIPERX0DATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0ELECIDLE_A0_B, // net ID: PIPERX0ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0EQDONE_A0_B, // net ID: PIPERX0EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0EQLPADAPTDONE_A0_B, // net ID: PIPERX0EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0EQLPLFFSSEL_A0_B, // net ID: PIPERX0EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A0_B, // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A1_B, // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A2_B, // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A3_B, // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A4_B, // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A5_B, // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A6_B, // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A7_B, // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A8_B, // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A9_B, // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A10_B, // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A11_B, // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A12_B, // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A13_B, // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A14_B, // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A15_B, // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A16_B, // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX0EQLPNEWTXCOEFFORPRESET_A17_B, // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX0PHYSTATUS_A0_B, // net ID: PIPERX0PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0STARTBLOCK_A0_B, // net ID: PIPERX0STARTBLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX0STATUS_A0_B, // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX0STATUS_A1_B, // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX0STATUS_A2_B, // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX0SYNCHEADER_A0_B, // net ID: PIPERX0SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX0SYNCHEADER_A1_B, // net ID: PIPERX0SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX0VALID_A0_B, // net ID: PIPERX0VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1CHARISK_A0_B, // net ID: PIPERX1CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX1CHARISK_A1_B, // net ID: PIPERX1CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX1DATA_A0_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A1_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A2_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A3_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A4_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A5_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A6_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A7_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A8_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A9_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A10_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A11_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A12_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A13_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A14_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A15_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A16_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A17_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A18_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A19_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A20_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A21_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A22_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A23_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A24_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A25_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A26_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A27_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A28_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A29_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A30_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATA_A31_B, // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX1DATAVALID_A0_B, // net ID: PIPERX1DATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1ELECIDLE_A0_B, // net ID: PIPERX1ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1EQDONE_A0_B, // net ID: PIPERX1EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1EQLPADAPTDONE_A0_B, // net ID: PIPERX1EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1EQLPLFFSSEL_A0_B, // net ID: PIPERX1EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A0_B, // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A1_B, // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A2_B, // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A3_B, // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A4_B, // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A5_B, // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A6_B, // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A7_B, // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A8_B, // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A9_B, // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A10_B, // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A11_B, // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A12_B, // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A13_B, // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A14_B, // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A15_B, // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A16_B, // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX1EQLPNEWTXCOEFFORPRESET_A17_B, // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX1PHYSTATUS_A0_B, // net ID: PIPERX1PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1STARTBLOCK_A0_B, // net ID: PIPERX1STARTBLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX1STATUS_A0_B, // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX1STATUS_A1_B, // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX1STATUS_A2_B, // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX1SYNCHEADER_A0_B, // net ID: PIPERX1SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX1SYNCHEADER_A1_B, // net ID: PIPERX1SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX1VALID_A0_B, // net ID: PIPERX1VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2CHARISK_A0_B, // net ID: PIPERX2CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX2CHARISK_A1_B, // net ID: PIPERX2CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX2DATA_A0_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A1_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A2_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A3_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A4_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A5_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A6_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A7_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A8_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A9_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A10_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A11_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A12_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A13_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A14_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A15_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A16_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A17_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A18_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A19_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A20_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A21_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A22_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A23_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A24_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A25_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A26_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A27_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A28_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A29_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A30_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATA_A31_B, // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX2DATAVALID_A0_B, // net ID: PIPERX2DATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2ELECIDLE_A0_B, // net ID: PIPERX2ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2EQDONE_A0_B, // net ID: PIPERX2EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2EQLPADAPTDONE_A0_B, // net ID: PIPERX2EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2EQLPLFFSSEL_A0_B, // net ID: PIPERX2EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A0_B, // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A1_B, // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A2_B, // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A3_B, // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A4_B, // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A5_B, // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A6_B, // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A7_B, // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A8_B, // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A9_B, // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A10_B, // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A11_B, // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A12_B, // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A13_B, // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A14_B, // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A15_B, // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A16_B, // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX2EQLPNEWTXCOEFFORPRESET_A17_B, // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX2PHYSTATUS_A0_B, // net ID: PIPERX2PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2STARTBLOCK_A0_B, // net ID: PIPERX2STARTBLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX2STATUS_A0_B, // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX2STATUS_A1_B, // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX2STATUS_A2_B, // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX2SYNCHEADER_A0_B, // net ID: PIPERX2SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX2SYNCHEADER_A1_B, // net ID: PIPERX2SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX2VALID_A0_B, // net ID: PIPERX2VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3CHARISK_A0_B, // net ID: PIPERX3CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX3CHARISK_A1_B, // net ID: PIPERX3CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX3DATA_A0_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A1_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A2_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A3_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A4_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A5_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A6_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A7_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A8_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A9_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A10_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A11_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A12_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A13_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A14_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A15_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A16_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A17_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A18_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A19_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A20_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A21_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A22_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A23_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A24_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A25_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A26_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A27_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A28_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A29_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A30_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATA_A31_B, // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX3DATAVALID_A0_B, // net ID: PIPERX3DATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3ELECIDLE_A0_B, // net ID: PIPERX3ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3EQDONE_A0_B, // net ID: PIPERX3EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3EQLPADAPTDONE_A0_B, // net ID: PIPERX3EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3EQLPLFFSSEL_A0_B, // net ID: PIPERX3EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A0_B, // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A1_B, // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A2_B, // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A3_B, // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A4_B, // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A5_B, // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A6_B, // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A7_B, // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A8_B, // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A9_B, // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A10_B, // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A11_B, // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A12_B, // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A13_B, // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A14_B, // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A15_B, // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A16_B, // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX3EQLPNEWTXCOEFFORPRESET_A17_B, // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX3PHYSTATUS_A0_B, // net ID: PIPERX3PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3STARTBLOCK_A0_B, // net ID: PIPERX3STARTBLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX3STATUS_A0_B, // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX3STATUS_A1_B, // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX3STATUS_A2_B, // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX3SYNCHEADER_A0_B, // net ID: PIPERX3SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX3SYNCHEADER_A1_B, // net ID: PIPERX3SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX3VALID_A0_B, // net ID: PIPERX3VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4CHARISK_A0_B, // net ID: PIPERX4CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX4CHARISK_A1_B, // net ID: PIPERX4CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX4DATA_A0_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A1_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A2_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A3_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A4_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A5_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A6_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A7_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A8_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A9_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A10_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A11_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A12_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A13_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A14_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A15_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A16_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A17_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A18_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A19_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A20_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A21_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A22_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A23_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A24_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A25_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A26_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A27_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A28_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A29_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A30_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATA_A31_B, // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX4DATAVALID_A0_B, // net ID: PIPERX4DATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4ELECIDLE_A0_B, // net ID: PIPERX4ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4EQDONE_A0_B, // net ID: PIPERX4EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4EQLPADAPTDONE_A0_B, // net ID: PIPERX4EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4EQLPLFFSSEL_A0_B, // net ID: PIPERX4EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A0_B, // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A1_B, // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A2_B, // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A3_B, // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A4_B, // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A5_B, // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A6_B, // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A7_B, // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A8_B, // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A9_B, // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A10_B, // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A11_B, // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A12_B, // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A13_B, // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A14_B, // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A15_B, // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A16_B, // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX4EQLPNEWTXCOEFFORPRESET_A17_B, // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX4PHYSTATUS_A0_B, // net ID: PIPERX4PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4STARTBLOCK_A0_B, // net ID: PIPERX4STARTBLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX4STATUS_A0_B, // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX4STATUS_A1_B, // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX4STATUS_A2_B, // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX4SYNCHEADER_A0_B, // net ID: PIPERX4SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX4SYNCHEADER_A1_B, // net ID: PIPERX4SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX4VALID_A0_B, // net ID: PIPERX4VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5CHARISK_A0_B, // net ID: PIPERX5CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX5CHARISK_A1_B, // net ID: PIPERX5CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX5DATA_A0_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A1_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A2_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A3_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A4_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A5_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A6_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A7_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A8_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A9_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A10_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A11_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A12_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A13_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A14_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A15_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A16_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A17_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A18_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A19_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A20_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A21_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A22_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A23_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A24_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A25_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A26_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A27_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A28_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A29_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A30_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATA_A31_B, // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX5DATAVALID_A0_B, // net ID: PIPERX5DATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5ELECIDLE_A0_B, // net ID: PIPERX5ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5EQDONE_A0_B, // net ID: PIPERX5EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5EQLPADAPTDONE_A0_B, // net ID: PIPERX5EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5EQLPLFFSSEL_A0_B, // net ID: PIPERX5EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A0_B, // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A1_B, // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A2_B, // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A3_B, // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A4_B, // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A5_B, // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A6_B, // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A7_B, // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A8_B, // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A9_B, // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A10_B, // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A11_B, // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A12_B, // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A13_B, // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A14_B, // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A15_B, // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A16_B, // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX5EQLPNEWTXCOEFFORPRESET_A17_B, // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX5PHYSTATUS_A0_B, // net ID: PIPERX5PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5STARTBLOCK_A0_B, // net ID: PIPERX5STARTBLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX5STATUS_A0_B, // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX5STATUS_A1_B, // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX5STATUS_A2_B, // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX5SYNCHEADER_A0_B, // net ID: PIPERX5SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX5SYNCHEADER_A1_B, // net ID: PIPERX5SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX5VALID_A0_B, // net ID: PIPERX5VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6CHARISK_A0_B, // net ID: PIPERX6CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX6CHARISK_A1_B, // net ID: PIPERX6CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX6DATA_A0_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A1_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A2_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A3_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A4_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A5_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A6_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A7_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A8_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A9_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A10_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A11_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A12_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A13_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A14_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A15_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A16_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A17_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A18_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A19_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A20_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A21_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A22_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A23_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A24_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A25_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A26_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A27_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A28_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A29_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A30_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATA_A31_B, // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX6DATAVALID_A0_B, // net ID: PIPERX6DATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6ELECIDLE_A0_B, // net ID: PIPERX6ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6EQDONE_A0_B, // net ID: PIPERX6EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6EQLPADAPTDONE_A0_B, // net ID: PIPERX6EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6EQLPLFFSSEL_A0_B, // net ID: PIPERX6EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A0_B, // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A1_B, // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A2_B, // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A3_B, // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A4_B, // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A5_B, // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A6_B, // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A7_B, // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A8_B, // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A9_B, // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A10_B, // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A11_B, // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A12_B, // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A13_B, // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A14_B, // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A15_B, // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A16_B, // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX6EQLPNEWTXCOEFFORPRESET_A17_B, // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX6PHYSTATUS_A0_B, // net ID: PIPERX6PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6STARTBLOCK_A0_B, // net ID: PIPERX6STARTBLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX6STATUS_A0_B, // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX6STATUS_A1_B, // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX6STATUS_A2_B, // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX6SYNCHEADER_A0_B, // net ID: PIPERX6SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX6SYNCHEADER_A1_B, // net ID: PIPERX6SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX6VALID_A0_B, // net ID: PIPERX6VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7CHARISK_A0_B, // net ID: PIPERX7CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX7CHARISK_A1_B, // net ID: PIPERX7CHARISK lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX7DATA_A0_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A1_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A2_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A3_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A4_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A5_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A6_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A7_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A8_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A9_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A10_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A11_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A12_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A13_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A14_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A15_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A16_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A17_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A18_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A19_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A20_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A21_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A22_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A23_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A24_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A25_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A26_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A27_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A28_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A29_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A30_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATA_A31_B, // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			NetFlow* PIPERX7DATAVALID_A0_B, // net ID: PIPERX7DATAVALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7ELECIDLE_A0_B, // net ID: PIPERX7ELECIDLE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7EQDONE_A0_B, // net ID: PIPERX7EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7EQLPADAPTDONE_A0_B, // net ID: PIPERX7EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7EQLPLFFSSEL_A0_B, // net ID: PIPERX7EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A0_B, // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A1_B, // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A2_B, // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A3_B, // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A4_B, // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A5_B, // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A6_B, // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A7_B, // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A8_B, // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A9_B, // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A10_B, // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A11_B, // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A12_B, // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A13_B, // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A14_B, // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A15_B, // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A16_B, // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX7EQLPNEWTXCOEFFORPRESET_A17_B, // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			NetFlow* PIPERX7PHYSTATUS_A0_B, // net ID: PIPERX7PHYSTATUS lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7STARTBLOCK_A0_B, // net ID: PIPERX7STARTBLOCK lsb: 0  msb: 0 INPUT
			NetFlow* PIPERX7STATUS_A0_B, // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX7STATUS_A1_B, // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX7STATUS_A2_B, // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
			NetFlow* PIPERX7SYNCHEADER_A0_B, // net ID: PIPERX7SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX7SYNCHEADER_A1_B, // net ID: PIPERX7SYNCHEADER lsb: 0  msb: 1 INPUT
			NetFlow* PIPERX7VALID_A0_B, // net ID: PIPERX7VALID lsb: 0  msb: 0 INPUT
			NetFlow* PIPETX0EQCOEFF_A0_B, // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX0EQCOEFF_A1_B, // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX0EQCOEFF_A2_B, // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX0EQCOEFF_A3_B, // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX0EQCOEFF_A4_B, // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX0EQCOEFF_A5_B, // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX0EQCOEFF_A6_B, // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX0EQCOEFF_A7_B, // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX0EQCOEFF_A8_B, // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX0EQCOEFF_A9_B, // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX0EQCOEFF_A10_B, // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX0EQCOEFF_A11_B, // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX0EQCOEFF_A12_B, // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX0EQCOEFF_A13_B, // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX0EQCOEFF_A14_B, // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX0EQCOEFF_A15_B, // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX0EQCOEFF_A16_B, // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX0EQCOEFF_A17_B, // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX0EQDONE_A0_B, // net ID: PIPETX0EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPETX1EQCOEFF_A0_B, // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX1EQCOEFF_A1_B, // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX1EQCOEFF_A2_B, // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX1EQCOEFF_A3_B, // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX1EQCOEFF_A4_B, // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX1EQCOEFF_A5_B, // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX1EQCOEFF_A6_B, // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX1EQCOEFF_A7_B, // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX1EQCOEFF_A8_B, // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX1EQCOEFF_A9_B, // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX1EQCOEFF_A10_B, // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX1EQCOEFF_A11_B, // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX1EQCOEFF_A12_B, // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX1EQCOEFF_A13_B, // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX1EQCOEFF_A14_B, // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX1EQCOEFF_A15_B, // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX1EQCOEFF_A16_B, // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX1EQCOEFF_A17_B, // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX1EQDONE_A0_B, // net ID: PIPETX1EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPETX2EQCOEFF_A0_B, // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX2EQCOEFF_A1_B, // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX2EQCOEFF_A2_B, // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX2EQCOEFF_A3_B, // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX2EQCOEFF_A4_B, // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX2EQCOEFF_A5_B, // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX2EQCOEFF_A6_B, // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX2EQCOEFF_A7_B, // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX2EQCOEFF_A8_B, // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX2EQCOEFF_A9_B, // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX2EQCOEFF_A10_B, // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX2EQCOEFF_A11_B, // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX2EQCOEFF_A12_B, // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX2EQCOEFF_A13_B, // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX2EQCOEFF_A14_B, // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX2EQCOEFF_A15_B, // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX2EQCOEFF_A16_B, // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX2EQCOEFF_A17_B, // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX2EQDONE_A0_B, // net ID: PIPETX2EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPETX3EQCOEFF_A0_B, // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX3EQCOEFF_A1_B, // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX3EQCOEFF_A2_B, // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX3EQCOEFF_A3_B, // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX3EQCOEFF_A4_B, // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX3EQCOEFF_A5_B, // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX3EQCOEFF_A6_B, // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX3EQCOEFF_A7_B, // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX3EQCOEFF_A8_B, // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX3EQCOEFF_A9_B, // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX3EQCOEFF_A10_B, // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX3EQCOEFF_A11_B, // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX3EQCOEFF_A12_B, // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX3EQCOEFF_A13_B, // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX3EQCOEFF_A14_B, // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX3EQCOEFF_A15_B, // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX3EQCOEFF_A16_B, // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX3EQCOEFF_A17_B, // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX3EQDONE_A0_B, // net ID: PIPETX3EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPETX4EQCOEFF_A0_B, // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX4EQCOEFF_A1_B, // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX4EQCOEFF_A2_B, // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX4EQCOEFF_A3_B, // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX4EQCOEFF_A4_B, // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX4EQCOEFF_A5_B, // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX4EQCOEFF_A6_B, // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX4EQCOEFF_A7_B, // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX4EQCOEFF_A8_B, // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX4EQCOEFF_A9_B, // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX4EQCOEFF_A10_B, // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX4EQCOEFF_A11_B, // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX4EQCOEFF_A12_B, // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX4EQCOEFF_A13_B, // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX4EQCOEFF_A14_B, // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX4EQCOEFF_A15_B, // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX4EQCOEFF_A16_B, // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX4EQCOEFF_A17_B, // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX4EQDONE_A0_B, // net ID: PIPETX4EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPETX5EQCOEFF_A0_B, // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX5EQCOEFF_A1_B, // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX5EQCOEFF_A2_B, // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX5EQCOEFF_A3_B, // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX5EQCOEFF_A4_B, // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX5EQCOEFF_A5_B, // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX5EQCOEFF_A6_B, // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX5EQCOEFF_A7_B, // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX5EQCOEFF_A8_B, // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX5EQCOEFF_A9_B, // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX5EQCOEFF_A10_B, // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX5EQCOEFF_A11_B, // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX5EQCOEFF_A12_B, // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX5EQCOEFF_A13_B, // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX5EQCOEFF_A14_B, // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX5EQCOEFF_A15_B, // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX5EQCOEFF_A16_B, // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX5EQCOEFF_A17_B, // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX5EQDONE_A0_B, // net ID: PIPETX5EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPETX6EQCOEFF_A0_B, // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX6EQCOEFF_A1_B, // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX6EQCOEFF_A2_B, // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX6EQCOEFF_A3_B, // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX6EQCOEFF_A4_B, // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX6EQCOEFF_A5_B, // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX6EQCOEFF_A6_B, // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX6EQCOEFF_A7_B, // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX6EQCOEFF_A8_B, // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX6EQCOEFF_A9_B, // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX6EQCOEFF_A10_B, // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX6EQCOEFF_A11_B, // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX6EQCOEFF_A12_B, // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX6EQCOEFF_A13_B, // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX6EQCOEFF_A14_B, // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX6EQCOEFF_A15_B, // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX6EQCOEFF_A16_B, // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX6EQCOEFF_A17_B, // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX6EQDONE_A0_B, // net ID: PIPETX6EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PIPETX7EQCOEFF_A0_B, // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX7EQCOEFF_A1_B, // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX7EQCOEFF_A2_B, // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX7EQCOEFF_A3_B, // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX7EQCOEFF_A4_B, // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX7EQCOEFF_A5_B, // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX7EQCOEFF_A6_B, // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX7EQCOEFF_A7_B, // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX7EQCOEFF_A8_B, // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX7EQCOEFF_A9_B, // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX7EQCOEFF_A10_B, // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX7EQCOEFF_A11_B, // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX7EQCOEFF_A12_B, // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX7EQCOEFF_A13_B, // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX7EQCOEFF_A14_B, // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX7EQCOEFF_A15_B, // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX7EQCOEFF_A16_B, // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX7EQCOEFF_A17_B, // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			NetFlow* PIPETX7EQDONE_A0_B, // net ID: PIPETX7EQDONE lsb: 0  msb: 0 INPUT
			NetFlow* PLDISABLESCRAMBLER_A0_B, // net ID: PLDISABLESCRAMBLER lsb: 0  msb: 0 INPUT
			NetFlow* PLEQRESETEIEOSCOUNT_A0_B, // net ID: PLEQRESETEIEOSCOUNT lsb: 0  msb: 0 INPUT
			NetFlow* PLGEN3PCSDISABLE_A0_B, // net ID: PLGEN3PCSDISABLE lsb: 0  msb: 0 INPUT
			NetFlow* PLGEN3PCSRXSYNCDONE_A0_B, // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
			NetFlow* PLGEN3PCSRXSYNCDONE_A1_B, // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
			NetFlow* PLGEN3PCSRXSYNCDONE_A2_B, // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
			NetFlow* PLGEN3PCSRXSYNCDONE_A3_B, // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
			NetFlow* PLGEN3PCSRXSYNCDONE_A4_B, // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
			NetFlow* PLGEN3PCSRXSYNCDONE_A5_B, // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
			NetFlow* PLGEN3PCSRXSYNCDONE_A6_B, // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
			NetFlow* PLGEN3PCSRXSYNCDONE_A7_B, // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
			NetFlow* RECCLK_A0_B, // net ID: RECCLK lsb: 0  msb: 0 INPUT
			NetFlow* RESETN_A0_B, // net ID: RESETN lsb: 0  msb: 0 INPUT
			NetFlow* SAXISCCTDATA_A0_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A1_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A2_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A3_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A4_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A5_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A6_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A7_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A8_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A9_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A10_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A11_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A12_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A13_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A14_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A15_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A16_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A17_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A18_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A19_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A20_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A21_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A22_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A23_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A24_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A25_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A26_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A27_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A28_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A29_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A30_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A31_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A32_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A33_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A34_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A35_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A36_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A37_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A38_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A39_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A40_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A41_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A42_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A43_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A44_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A45_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A46_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A47_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A48_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A49_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A50_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A51_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A52_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A53_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A54_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A55_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A56_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A57_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A58_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A59_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A60_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A61_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A62_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A63_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A64_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A65_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A66_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A67_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A68_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A69_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A70_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A71_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A72_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A73_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A74_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A75_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A76_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A77_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A78_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A79_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A80_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A81_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A82_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A83_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A84_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A85_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A86_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A87_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A88_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A89_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A90_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A91_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A92_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A93_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A94_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A95_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A96_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A97_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A98_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A99_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A100_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A101_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A102_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A103_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A104_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A105_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A106_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A107_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A108_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A109_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A110_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A111_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A112_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A113_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A114_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A115_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A116_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A117_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A118_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A119_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A120_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A121_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A122_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A123_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A124_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A125_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A126_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A127_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A128_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A129_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A130_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A131_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A132_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A133_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A134_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A135_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A136_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A137_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A138_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A139_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A140_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A141_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A142_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A143_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A144_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A145_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A146_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A147_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A148_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A149_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A150_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A151_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A152_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A153_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A154_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A155_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A156_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A157_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A158_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A159_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A160_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A161_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A162_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A163_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A164_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A165_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A166_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A167_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A168_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A169_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A170_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A171_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A172_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A173_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A174_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A175_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A176_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A177_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A178_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A179_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A180_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A181_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A182_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A183_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A184_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A185_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A186_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A187_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A188_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A189_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A190_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A191_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A192_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A193_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A194_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A195_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A196_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A197_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A198_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A199_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A200_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A201_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A202_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A203_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A204_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A205_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A206_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A207_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A208_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A209_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A210_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A211_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A212_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A213_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A214_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A215_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A216_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A217_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A218_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A219_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A220_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A221_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A222_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A223_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A224_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A225_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A226_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A227_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A228_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A229_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A230_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A231_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A232_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A233_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A234_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A235_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A236_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A237_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A238_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A239_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A240_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A241_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A242_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A243_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A244_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A245_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A246_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A247_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A248_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A249_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A250_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A251_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A252_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A253_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A254_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTDATA_A255_B, // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISCCTKEEP_A0_B, // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
			NetFlow* SAXISCCTKEEP_A1_B, // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
			NetFlow* SAXISCCTKEEP_A2_B, // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
			NetFlow* SAXISCCTKEEP_A3_B, // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
			NetFlow* SAXISCCTKEEP_A4_B, // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
			NetFlow* SAXISCCTKEEP_A5_B, // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
			NetFlow* SAXISCCTKEEP_A6_B, // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
			NetFlow* SAXISCCTKEEP_A7_B, // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
			NetFlow* SAXISCCTLAST_A0_B, // net ID: SAXISCCTLAST lsb: 0  msb: 0 INPUT
			NetFlow* SAXISCCTUSER_A0_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A1_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A2_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A3_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A4_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A5_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A6_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A7_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A8_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A9_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A10_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A11_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A12_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A13_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A14_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A15_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A16_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A17_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A18_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A19_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A20_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A21_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A22_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A23_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A24_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A25_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A26_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A27_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A28_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A29_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A30_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A31_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTUSER_A32_B, // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			NetFlow* SAXISCCTVALID_A0_B, // net ID: SAXISCCTVALID lsb: 0  msb: 0 INPUT
			NetFlow* SAXISRQTDATA_A0_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A1_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A2_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A3_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A4_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A5_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A6_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A7_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A8_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A9_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A10_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A11_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A12_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A13_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A14_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A15_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A16_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A17_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A18_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A19_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A20_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A21_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A22_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A23_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A24_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A25_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A26_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A27_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A28_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A29_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A30_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A31_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A32_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A33_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A34_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A35_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A36_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A37_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A38_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A39_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A40_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A41_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A42_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A43_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A44_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A45_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A46_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A47_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A48_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A49_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A50_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A51_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A52_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A53_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A54_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A55_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A56_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A57_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A58_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A59_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A60_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A61_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A62_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A63_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A64_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A65_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A66_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A67_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A68_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A69_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A70_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A71_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A72_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A73_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A74_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A75_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A76_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A77_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A78_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A79_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A80_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A81_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A82_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A83_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A84_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A85_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A86_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A87_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A88_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A89_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A90_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A91_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A92_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A93_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A94_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A95_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A96_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A97_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A98_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A99_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A100_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A101_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A102_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A103_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A104_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A105_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A106_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A107_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A108_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A109_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A110_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A111_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A112_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A113_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A114_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A115_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A116_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A117_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A118_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A119_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A120_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A121_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A122_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A123_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A124_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A125_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A126_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A127_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A128_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A129_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A130_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A131_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A132_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A133_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A134_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A135_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A136_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A137_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A138_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A139_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A140_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A141_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A142_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A143_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A144_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A145_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A146_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A147_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A148_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A149_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A150_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A151_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A152_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A153_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A154_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A155_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A156_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A157_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A158_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A159_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A160_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A161_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A162_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A163_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A164_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A165_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A166_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A167_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A168_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A169_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A170_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A171_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A172_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A173_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A174_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A175_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A176_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A177_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A178_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A179_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A180_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A181_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A182_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A183_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A184_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A185_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A186_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A187_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A188_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A189_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A190_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A191_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A192_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A193_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A194_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A195_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A196_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A197_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A198_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A199_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A200_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A201_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A202_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A203_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A204_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A205_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A206_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A207_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A208_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A209_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A210_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A211_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A212_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A213_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A214_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A215_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A216_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A217_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A218_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A219_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A220_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A221_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A222_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A223_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A224_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A225_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A226_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A227_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A228_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A229_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A230_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A231_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A232_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A233_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A234_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A235_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A236_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A237_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A238_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A239_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A240_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A241_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A242_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A243_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A244_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A245_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A246_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A247_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A248_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A249_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A250_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A251_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A252_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A253_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A254_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTDATA_A255_B, // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			NetFlow* SAXISRQTKEEP_A0_B, // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
			NetFlow* SAXISRQTKEEP_A1_B, // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
			NetFlow* SAXISRQTKEEP_A2_B, // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
			NetFlow* SAXISRQTKEEP_A3_B, // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
			NetFlow* SAXISRQTKEEP_A4_B, // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
			NetFlow* SAXISRQTKEEP_A5_B, // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
			NetFlow* SAXISRQTKEEP_A6_B, // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
			NetFlow* SAXISRQTKEEP_A7_B, // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
			NetFlow* SAXISRQTLAST_A0_B, // net ID: SAXISRQTLAST lsb: 0  msb: 0 INPUT
			NetFlow* SAXISRQTUSER_A0_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A1_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A2_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A3_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A4_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A5_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A6_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A7_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A8_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A9_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A10_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A11_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A12_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A13_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A14_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A15_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A16_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A17_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A18_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A19_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A20_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A21_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A22_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A23_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A24_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A25_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A26_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A27_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A28_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A29_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A30_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A31_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A32_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A33_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A34_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A35_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A36_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A37_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A38_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A39_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A40_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A41_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A42_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A43_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A44_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A45_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A46_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A47_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A48_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A49_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A50_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A51_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A52_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A53_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A54_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A55_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A56_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A57_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A58_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTUSER_A59_B, // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			NetFlow* SAXISRQTVALID_A0_B, // net ID: SAXISRQTVALID lsb: 0  msb: 0 INPUT
			NetFlow* USERCLK_A0_B // net ID: USERCLK lsb: 0  msb: 0 INPUT
			):Primitive(name){
			
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->ARI_CAP_ENABLE = ARI_CAP_ENABLE; // Default: "FALSE"
			this->AXISTEN_IF_CC_ALIGNMENT_MODE = AXISTEN_IF_CC_ALIGNMENT_MODE; // Default: "FALSE"
			this->AXISTEN_IF_CC_PARITY_CHK = AXISTEN_IF_CC_PARITY_CHK; // Default: "TRUE"
			this->AXISTEN_IF_CQ_ALIGNMENT_MODE = AXISTEN_IF_CQ_ALIGNMENT_MODE; // Default: "FALSE"
			this->AXISTEN_IF_ENABLE_CLIENT_TAG = AXISTEN_IF_ENABLE_CLIENT_TAG; // Default: "FALSE"
			this->AXISTEN_IF_ENABLE_MSG_ROUTE = AXISTEN_IF_ENABLE_MSG_ROUTE; // Default: 18'h00000
			this->AXISTEN_IF_ENABLE_RX_MSG_INTFC = AXISTEN_IF_ENABLE_RX_MSG_INTFC; // Default: "FALSE"
			this->AXISTEN_IF_RC_ALIGNMENT_MODE = AXISTEN_IF_RC_ALIGNMENT_MODE; // Default: "FALSE"
			this->AXISTEN_IF_RC_STRADDLE = AXISTEN_IF_RC_STRADDLE; // Default: "FALSE"
			this->AXISTEN_IF_RQ_ALIGNMENT_MODE = AXISTEN_IF_RQ_ALIGNMENT_MODE; // Default: "FALSE"
			this->AXISTEN_IF_RQ_PARITY_CHK = AXISTEN_IF_RQ_PARITY_CHK; // Default: "TRUE"
			this->AXISTEN_IF_WIDTH = AXISTEN_IF_WIDTH; // Default: 2'h2
			this->CRM_CORE_CLK_FREQ_500 = CRM_CORE_CLK_FREQ_500; // Default: "TRUE"
			this->CRM_USER_CLK_FREQ = CRM_USER_CLK_FREQ; // Default: 2'h2
			this->DNSTREAM_LINK_NUM = DNSTREAM_LINK_NUM; // Default: 8'h00
			this->GEN3_PCS_AUTO_REALIGN = GEN3_PCS_AUTO_REALIGN; // Default: 2'h1
			this->GEN3_PCS_RX_ELECIDLE_INTERNAL = GEN3_PCS_RX_ELECIDLE_INTERNAL; // Default: "TRUE"
			this->LL_ACK_TIMEOUT = LL_ACK_TIMEOUT; // Default: 9'h000
			this->LL_ACK_TIMEOUT_EN = LL_ACK_TIMEOUT_EN; // Default: "FALSE"
			this->LL_ACK_TIMEOUT_FUNC = LL_ACK_TIMEOUT_FUNC; // Default: 0
			this->LL_CPL_FC_UPDATE_TIMER = LL_CPL_FC_UPDATE_TIMER; // Default: 16'h0000
			this->LL_CPL_FC_UPDATE_TIMER_OVERRIDE = LL_CPL_FC_UPDATE_TIMER_OVERRIDE; // Default: "FALSE"
			this->LL_FC_UPDATE_TIMER = LL_FC_UPDATE_TIMER; // Default: 16'h0000
			this->LL_FC_UPDATE_TIMER_OVERRIDE = LL_FC_UPDATE_TIMER_OVERRIDE; // Default: "FALSE"
			this->LL_NP_FC_UPDATE_TIMER = LL_NP_FC_UPDATE_TIMER; // Default: 16'h0000
			this->LL_NP_FC_UPDATE_TIMER_OVERRIDE = LL_NP_FC_UPDATE_TIMER_OVERRIDE; // Default: "FALSE"
			this->LL_P_FC_UPDATE_TIMER = LL_P_FC_UPDATE_TIMER; // Default: 16'h0000
			this->LL_P_FC_UPDATE_TIMER_OVERRIDE = LL_P_FC_UPDATE_TIMER_OVERRIDE; // Default: "FALSE"
			this->LL_REPLAY_TIMEOUT = LL_REPLAY_TIMEOUT; // Default: 9'h000
			this->LL_REPLAY_TIMEOUT_EN = LL_REPLAY_TIMEOUT_EN; // Default: "FALSE"
			this->LL_REPLAY_TIMEOUT_FUNC = LL_REPLAY_TIMEOUT_FUNC; // Default: 0
			this->LTR_TX_MESSAGE_MINIMUM_INTERVAL = LTR_TX_MESSAGE_MINIMUM_INTERVAL; // Default: 10'h0FA
			this->LTR_TX_MESSAGE_ON_FUNC_POWER_STATE_CHANGE = LTR_TX_MESSAGE_ON_FUNC_POWER_STATE_CHANGE; // Default: "FALSE"
			this->LTR_TX_MESSAGE_ON_LTR_ENABLE = LTR_TX_MESSAGE_ON_LTR_ENABLE; // Default: "FALSE"
			this->PF0_AER_CAP_ECRC_CHECK_CAPABLE = PF0_AER_CAP_ECRC_CHECK_CAPABLE; // Default: "FALSE"
			this->PF0_AER_CAP_ECRC_GEN_CAPABLE = PF0_AER_CAP_ECRC_GEN_CAPABLE; // Default: "FALSE"
			this->PF0_AER_CAP_NEXTPTR = PF0_AER_CAP_NEXTPTR; // Default: 12'h000
			this->PF0_ARI_CAP_NEXTPTR = PF0_ARI_CAP_NEXTPTR; // Default: 12'h000
			this->PF0_ARI_CAP_NEXT_FUNC = PF0_ARI_CAP_NEXT_FUNC; // Default: 8'h00
			this->PF0_ARI_CAP_VER = PF0_ARI_CAP_VER; // Default: 4'h1
			this->PF0_BAR0_APERTURE_SIZE = PF0_BAR0_APERTURE_SIZE; // Default: 5'h03
			this->PF0_BAR0_CONTROL = PF0_BAR0_CONTROL; // Default: 3'h4
			this->PF0_BAR1_APERTURE_SIZE = PF0_BAR1_APERTURE_SIZE; // Default: 5'h00
			this->PF0_BAR1_CONTROL = PF0_BAR1_CONTROL; // Default: 3'h0
			this->PF0_BAR2_APERTURE_SIZE = PF0_BAR2_APERTURE_SIZE; // Default: 5'h03
			this->PF0_BAR2_CONTROL = PF0_BAR2_CONTROL; // Default: 3'h4
			this->PF0_BAR3_APERTURE_SIZE = PF0_BAR3_APERTURE_SIZE; // Default: 5'h03
			this->PF0_BAR3_CONTROL = PF0_BAR3_CONTROL; // Default: 3'h0
			this->PF0_BAR4_APERTURE_SIZE = PF0_BAR4_APERTURE_SIZE; // Default: 5'h03
			this->PF0_BAR4_CONTROL = PF0_BAR4_CONTROL; // Default: 3'h4
			this->PF0_BAR5_APERTURE_SIZE = PF0_BAR5_APERTURE_SIZE; // Default: 5'h03
			this->PF0_BAR5_CONTROL = PF0_BAR5_CONTROL; // Default: 3'h0
			this->PF0_BIST_REGISTER = PF0_BIST_REGISTER; // Default: 8'h00
			this->PF0_CAPABILITY_POINTER = PF0_CAPABILITY_POINTER; // Default: 8'h50
			this->PF0_CLASS_CODE = PF0_CLASS_CODE; // Default: 24'h000000
			this->PF0_DEVICE_ID = PF0_DEVICE_ID; // Default: 16'h0000
			this->PF0_DEV_CAP2_128B_CAS_ATOMIC_COMPLETER_SUPPORT = PF0_DEV_CAP2_128B_CAS_ATOMIC_COMPLETER_SUPPORT; // Default: "TRUE"
			this->PF0_DEV_CAP2_32B_ATOMIC_COMPLETER_SUPPORT = PF0_DEV_CAP2_32B_ATOMIC_COMPLETER_SUPPORT; // Default: "TRUE"
			this->PF0_DEV_CAP2_64B_ATOMIC_COMPLETER_SUPPORT = PF0_DEV_CAP2_64B_ATOMIC_COMPLETER_SUPPORT; // Default: "TRUE"
			this->PF0_DEV_CAP2_CPL_TIMEOUT_DISABLE = PF0_DEV_CAP2_CPL_TIMEOUT_DISABLE; // Default: "TRUE"
			this->PF0_DEV_CAP2_LTR_SUPPORT = PF0_DEV_CAP2_LTR_SUPPORT; // Default: "TRUE"
			this->PF0_DEV_CAP2_OBFF_SUPPORT = PF0_DEV_CAP2_OBFF_SUPPORT; // Default: 2'h0
			this->PF0_DEV_CAP2_TPH_COMPLETER_SUPPORT = PF0_DEV_CAP2_TPH_COMPLETER_SUPPORT; // Default: "FALSE"
			this->PF0_DEV_CAP_ENDPOINT_L0S_LATENCY = PF0_DEV_CAP_ENDPOINT_L0S_LATENCY; // Default: 0
			this->PF0_DEV_CAP_ENDPOINT_L1_LATENCY = PF0_DEV_CAP_ENDPOINT_L1_LATENCY; // Default: 0
			this->PF0_DEV_CAP_EXT_TAG_SUPPORTED = PF0_DEV_CAP_EXT_TAG_SUPPORTED; // Default: "TRUE"
			this->PF0_DEV_CAP_FUNCTION_LEVEL_RESET_CAPABLE = PF0_DEV_CAP_FUNCTION_LEVEL_RESET_CAPABLE; // Default: "TRUE"
			this->PF0_DEV_CAP_MAX_PAYLOAD_SIZE = PF0_DEV_CAP_MAX_PAYLOAD_SIZE; // Default: 3'h3
			this->PF0_DPA_CAP_NEXTPTR = PF0_DPA_CAP_NEXTPTR; // Default: 12'h000
			this->PF0_DPA_CAP_SUB_STATE_CONTROL = PF0_DPA_CAP_SUB_STATE_CONTROL; // Default: 5'h00
			this->PF0_DPA_CAP_SUB_STATE_CONTROL_EN = PF0_DPA_CAP_SUB_STATE_CONTROL_EN; // Default: "TRUE"
			this->PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION0 = PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION0; // Default: 8'h00
			this->PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION1 = PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION1; // Default: 8'h00
			this->PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION2 = PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION2; // Default: 8'h00
			this->PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION3 = PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION3; // Default: 8'h00
			this->PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION4 = PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION4; // Default: 8'h00
			this->PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION5 = PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION5; // Default: 8'h00
			this->PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION6 = PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION6; // Default: 8'h00
			this->PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION7 = PF0_DPA_CAP_SUB_STATE_POWER_ALLOCATION7; // Default: 8'h00
			this->PF0_DPA_CAP_VER = PF0_DPA_CAP_VER; // Default: 4'h1
			this->PF0_DSN_CAP_NEXTPTR = PF0_DSN_CAP_NEXTPTR; // Default: 12'h10C
			this->PF0_EXPANSION_ROM_APERTURE_SIZE = PF0_EXPANSION_ROM_APERTURE_SIZE; // Default: 5'h03
			this->PF0_EXPANSION_ROM_ENABLE = PF0_EXPANSION_ROM_ENABLE; // Default: "FALSE"
			this->PF0_INTERRUPT_LINE = PF0_INTERRUPT_LINE; // Default: 8'h00
			this->PF0_INTERRUPT_PIN = PF0_INTERRUPT_PIN; // Default: 3'h1
			this->PF0_LINK_CAP_ASPM_SUPPORT = PF0_LINK_CAP_ASPM_SUPPORT; // Default: 0
			this->PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN1 = PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN1; // Default: 7
			this->PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN2 = PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN2; // Default: 7
			this->PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN3 = PF0_LINK_CAP_L0S_EXIT_LATENCY_COMCLK_GEN3; // Default: 7
			this->PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN1 = PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN1; // Default: 7
			this->PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN2 = PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN2; // Default: 7
			this->PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN3 = PF0_LINK_CAP_L0S_EXIT_LATENCY_GEN3; // Default: 7
			this->PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN1 = PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN1; // Default: 7
			this->PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN2 = PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN2; // Default: 7
			this->PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN3 = PF0_LINK_CAP_L1_EXIT_LATENCY_COMCLK_GEN3; // Default: 7
			this->PF0_LINK_CAP_L1_EXIT_LATENCY_GEN1 = PF0_LINK_CAP_L1_EXIT_LATENCY_GEN1; // Default: 7
			this->PF0_LINK_CAP_L1_EXIT_LATENCY_GEN2 = PF0_LINK_CAP_L1_EXIT_LATENCY_GEN2; // Default: 7
			this->PF0_LINK_CAP_L1_EXIT_LATENCY_GEN3 = PF0_LINK_CAP_L1_EXIT_LATENCY_GEN3; // Default: 7
			this->PF0_LINK_STATUS_SLOT_CLOCK_CONFIG = PF0_LINK_STATUS_SLOT_CLOCK_CONFIG; // Default: "TRUE"
			this->PF0_LTR_CAP_MAX_NOSNOOP_LAT = PF0_LTR_CAP_MAX_NOSNOOP_LAT; // Default: 10'h000
			this->PF0_LTR_CAP_MAX_SNOOP_LAT = PF0_LTR_CAP_MAX_SNOOP_LAT; // Default: 10'h000
			this->PF0_LTR_CAP_NEXTPTR = PF0_LTR_CAP_NEXTPTR; // Default: 12'h000
			this->PF0_LTR_CAP_VER = PF0_LTR_CAP_VER; // Default: 4'h1
			this->PF0_MSIX_CAP_NEXTPTR = PF0_MSIX_CAP_NEXTPTR; // Default: 8'h00
			this->PF0_MSIX_CAP_PBA_BIR = PF0_MSIX_CAP_PBA_BIR; // Default: 0
			this->PF0_MSIX_CAP_PBA_OFFSET = PF0_MSIX_CAP_PBA_OFFSET; // Default: 29'h00000050
			this->PF0_MSIX_CAP_TABLE_BIR = PF0_MSIX_CAP_TABLE_BIR; // Default: 0
			this->PF0_MSIX_CAP_TABLE_OFFSET = PF0_MSIX_CAP_TABLE_OFFSET; // Default: 29'h00000040
			this->PF0_MSIX_CAP_TABLE_SIZE = PF0_MSIX_CAP_TABLE_SIZE; // Default: 11'h000
			this->PF0_MSI_CAP_MULTIMSGCAP = PF0_MSI_CAP_MULTIMSGCAP; // Default: 0
			this->PF0_MSI_CAP_NEXTPTR = PF0_MSI_CAP_NEXTPTR; // Default: 8'h00
			this->PF0_PB_CAP_NEXTPTR = PF0_PB_CAP_NEXTPTR; // Default: 12'h000
			this->PF0_PB_CAP_SYSTEM_ALLOCATED = PF0_PB_CAP_SYSTEM_ALLOCATED; // Default: "FALSE"
			this->PF0_PB_CAP_VER = PF0_PB_CAP_VER; // Default: 4'h1
			this->PF0_PM_CAP_ID = PF0_PM_CAP_ID; // Default: 8'h01
			this->PF0_PM_CAP_NEXTPTR = PF0_PM_CAP_NEXTPTR; // Default: 8'h00
			this->PF0_PM_CAP_PMESUPPORT_D0 = PF0_PM_CAP_PMESUPPORT_D0; // Default: "TRUE"
			this->PF0_PM_CAP_PMESUPPORT_D1 = PF0_PM_CAP_PMESUPPORT_D1; // Default: "TRUE"
			this->PF0_PM_CAP_PMESUPPORT_D3HOT = PF0_PM_CAP_PMESUPPORT_D3HOT; // Default: "TRUE"
			this->PF0_PM_CAP_SUPP_D1_STATE = PF0_PM_CAP_SUPP_D1_STATE; // Default: "TRUE"
			this->PF0_PM_CAP_VER_ID = PF0_PM_CAP_VER_ID; // Default: 3'h3
			this->PF0_PM_CSR_NOSOFTRESET = PF0_PM_CSR_NOSOFTRESET; // Default: "TRUE"
			this->PF0_RBAR_CAP_ENABLE = PF0_RBAR_CAP_ENABLE; // Default: "FALSE"
			this->PF0_RBAR_CAP_INDEX0 = PF0_RBAR_CAP_INDEX0; // Default: 3'h0
			this->PF0_RBAR_CAP_INDEX1 = PF0_RBAR_CAP_INDEX1; // Default: 3'h0
			this->PF0_RBAR_CAP_INDEX2 = PF0_RBAR_CAP_INDEX2; // Default: 3'h0
			this->PF0_RBAR_CAP_NEXTPTR = PF0_RBAR_CAP_NEXTPTR; // Default: 12'h000
			this->PF0_RBAR_CAP_SIZE0 = PF0_RBAR_CAP_SIZE0; // Default: 20'h00000
			this->PF0_RBAR_CAP_SIZE1 = PF0_RBAR_CAP_SIZE1; // Default: 20'h00000
			this->PF0_RBAR_CAP_SIZE2 = PF0_RBAR_CAP_SIZE2; // Default: 20'h00000
			this->PF0_RBAR_CAP_VER = PF0_RBAR_CAP_VER; // Default: 4'h1
			this->PF0_RBAR_NUM = PF0_RBAR_NUM; // Default: 3'h1
			this->PF0_REVISION_ID = PF0_REVISION_ID; // Default: 8'h00
			this->PF0_SRIOV_BAR0_APERTURE_SIZE = PF0_SRIOV_BAR0_APERTURE_SIZE; // Default: 5'h03
			this->PF0_SRIOV_BAR0_CONTROL = PF0_SRIOV_BAR0_CONTROL; // Default: 3'h4
			this->PF0_SRIOV_BAR1_APERTURE_SIZE = PF0_SRIOV_BAR1_APERTURE_SIZE; // Default: 5'h00
			this->PF0_SRIOV_BAR1_CONTROL = PF0_SRIOV_BAR1_CONTROL; // Default: 3'h0
			this->PF0_SRIOV_BAR2_APERTURE_SIZE = PF0_SRIOV_BAR2_APERTURE_SIZE; // Default: 5'h03
			this->PF0_SRIOV_BAR2_CONTROL = PF0_SRIOV_BAR2_CONTROL; // Default: 3'h4
			this->PF0_SRIOV_BAR3_APERTURE_SIZE = PF0_SRIOV_BAR3_APERTURE_SIZE; // Default: 5'h03
			this->PF0_SRIOV_BAR3_CONTROL = PF0_SRIOV_BAR3_CONTROL; // Default: 3'h0
			this->PF0_SRIOV_BAR4_APERTURE_SIZE = PF0_SRIOV_BAR4_APERTURE_SIZE; // Default: 5'h03
			this->PF0_SRIOV_BAR4_CONTROL = PF0_SRIOV_BAR4_CONTROL; // Default: 3'h4
			this->PF0_SRIOV_BAR5_APERTURE_SIZE = PF0_SRIOV_BAR5_APERTURE_SIZE; // Default: 5'h03
			this->PF0_SRIOV_BAR5_CONTROL = PF0_SRIOV_BAR5_CONTROL; // Default: 3'h0
			this->PF0_SRIOV_CAP_INITIAL_VF = PF0_SRIOV_CAP_INITIAL_VF; // Default: 16'h0000
			this->PF0_SRIOV_CAP_NEXTPTR = PF0_SRIOV_CAP_NEXTPTR; // Default: 12'h000
			this->PF0_SRIOV_CAP_TOTAL_VF = PF0_SRIOV_CAP_TOTAL_VF; // Default: 16'h0000
			this->PF0_SRIOV_CAP_VER = PF0_SRIOV_CAP_VER; // Default: 4'h1
			this->PF0_SRIOV_FIRST_VF_OFFSET = PF0_SRIOV_FIRST_VF_OFFSET; // Default: 16'h0000
			this->PF0_SRIOV_FUNC_DEP_LINK = PF0_SRIOV_FUNC_DEP_LINK; // Default: 16'h0000
			this->PF0_SRIOV_SUPPORTED_PAGE_SIZE = PF0_SRIOV_SUPPORTED_PAGE_SIZE; // Default: 32'h00000000
			this->PF0_SRIOV_VF_DEVICE_ID = PF0_SRIOV_VF_DEVICE_ID; // Default: 16'h0000
			this->PF0_SUBSYSTEM_ID = PF0_SUBSYSTEM_ID; // Default: 16'h0000
			this->PF0_TPHR_CAP_DEV_SPECIFIC_MODE = PF0_TPHR_CAP_DEV_SPECIFIC_MODE; // Default: "TRUE"
			this->PF0_TPHR_CAP_ENABLE = PF0_TPHR_CAP_ENABLE; // Default: "FALSE"
			this->PF0_TPHR_CAP_INT_VEC_MODE = PF0_TPHR_CAP_INT_VEC_MODE; // Default: "TRUE"
			this->PF0_TPHR_CAP_NEXTPTR = PF0_TPHR_CAP_NEXTPTR; // Default: 12'h000
			this->PF0_TPHR_CAP_ST_MODE_SEL = PF0_TPHR_CAP_ST_MODE_SEL; // Default: 3'h0
			this->PF0_TPHR_CAP_ST_TABLE_LOC = PF0_TPHR_CAP_ST_TABLE_LOC; // Default: 2'h0
			this->PF0_TPHR_CAP_ST_TABLE_SIZE = PF0_TPHR_CAP_ST_TABLE_SIZE; // Default: 11'h000
			this->PF0_TPHR_CAP_VER = PF0_TPHR_CAP_VER; // Default: 4'h1
			this->PF0_VC_CAP_NEXTPTR = PF0_VC_CAP_NEXTPTR; // Default: 12'h000
			this->PF0_VC_CAP_VER = PF0_VC_CAP_VER; // Default: 4'h1
			this->PF1_AER_CAP_ECRC_CHECK_CAPABLE = PF1_AER_CAP_ECRC_CHECK_CAPABLE; // Default: "FALSE"
			this->PF1_AER_CAP_ECRC_GEN_CAPABLE = PF1_AER_CAP_ECRC_GEN_CAPABLE; // Default: "FALSE"
			this->PF1_AER_CAP_NEXTPTR = PF1_AER_CAP_NEXTPTR; // Default: 12'h000
			this->PF1_ARI_CAP_NEXTPTR = PF1_ARI_CAP_NEXTPTR; // Default: 12'h000
			this->PF1_ARI_CAP_NEXT_FUNC = PF1_ARI_CAP_NEXT_FUNC; // Default: 8'h00
			this->PF1_BAR0_APERTURE_SIZE = PF1_BAR0_APERTURE_SIZE; // Default: 5'h03
			this->PF1_BAR0_CONTROL = PF1_BAR0_CONTROL; // Default: 3'h4
			this->PF1_BAR1_APERTURE_SIZE = PF1_BAR1_APERTURE_SIZE; // Default: 5'h00
			this->PF1_BAR1_CONTROL = PF1_BAR1_CONTROL; // Default: 3'h0
			this->PF1_BAR2_APERTURE_SIZE = PF1_BAR2_APERTURE_SIZE; // Default: 5'h03
			this->PF1_BAR2_CONTROL = PF1_BAR2_CONTROL; // Default: 3'h4
			this->PF1_BAR3_APERTURE_SIZE = PF1_BAR3_APERTURE_SIZE; // Default: 5'h03
			this->PF1_BAR3_CONTROL = PF1_BAR3_CONTROL; // Default: 3'h0
			this->PF1_BAR4_APERTURE_SIZE = PF1_BAR4_APERTURE_SIZE; // Default: 5'h03
			this->PF1_BAR4_CONTROL = PF1_BAR4_CONTROL; // Default: 3'h4
			this->PF1_BAR5_APERTURE_SIZE = PF1_BAR5_APERTURE_SIZE; // Default: 5'h03
			this->PF1_BAR5_CONTROL = PF1_BAR5_CONTROL; // Default: 3'h0
			this->PF1_BIST_REGISTER = PF1_BIST_REGISTER; // Default: 8'h00
			this->PF1_CAPABILITY_POINTER = PF1_CAPABILITY_POINTER; // Default: 8'h50
			this->PF1_CLASS_CODE = PF1_CLASS_CODE; // Default: 24'h000000
			this->PF1_DEVICE_ID = PF1_DEVICE_ID; // Default: 16'h0000
			this->PF1_DEV_CAP_MAX_PAYLOAD_SIZE = PF1_DEV_CAP_MAX_PAYLOAD_SIZE; // Default: 3'h3
			this->PF1_DPA_CAP_NEXTPTR = PF1_DPA_CAP_NEXTPTR; // Default: 12'h000
			this->PF1_DPA_CAP_SUB_STATE_CONTROL = PF1_DPA_CAP_SUB_STATE_CONTROL; // Default: 5'h00
			this->PF1_DPA_CAP_SUB_STATE_CONTROL_EN = PF1_DPA_CAP_SUB_STATE_CONTROL_EN; // Default: "TRUE"
			this->PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION0 = PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION0; // Default: 8'h00
			this->PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION1 = PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION1; // Default: 8'h00
			this->PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION2 = PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION2; // Default: 8'h00
			this->PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION3 = PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION3; // Default: 8'h00
			this->PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION4 = PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION4; // Default: 8'h00
			this->PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION5 = PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION5; // Default: 8'h00
			this->PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION6 = PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION6; // Default: 8'h00
			this->PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION7 = PF1_DPA_CAP_SUB_STATE_POWER_ALLOCATION7; // Default: 8'h00
			this->PF1_DPA_CAP_VER = PF1_DPA_CAP_VER; // Default: 4'h1
			this->PF1_DSN_CAP_NEXTPTR = PF1_DSN_CAP_NEXTPTR; // Default: 12'h10C
			this->PF1_EXPANSION_ROM_APERTURE_SIZE = PF1_EXPANSION_ROM_APERTURE_SIZE; // Default: 5'h03
			this->PF1_EXPANSION_ROM_ENABLE = PF1_EXPANSION_ROM_ENABLE; // Default: "FALSE"
			this->PF1_INTERRUPT_LINE = PF1_INTERRUPT_LINE; // Default: 8'h00
			this->PF1_INTERRUPT_PIN = PF1_INTERRUPT_PIN; // Default: 3'h1
			this->PF1_MSIX_CAP_NEXTPTR = PF1_MSIX_CAP_NEXTPTR; // Default: 8'h00
			this->PF1_MSIX_CAP_PBA_BIR = PF1_MSIX_CAP_PBA_BIR; // Default: 0
			this->PF1_MSIX_CAP_PBA_OFFSET = PF1_MSIX_CAP_PBA_OFFSET; // Default: 29'h00000050
			this->PF1_MSIX_CAP_TABLE_BIR = PF1_MSIX_CAP_TABLE_BIR; // Default: 0
			this->PF1_MSIX_CAP_TABLE_OFFSET = PF1_MSIX_CAP_TABLE_OFFSET; // Default: 29'h00000040
			this->PF1_MSIX_CAP_TABLE_SIZE = PF1_MSIX_CAP_TABLE_SIZE; // Default: 11'h000
			this->PF1_MSI_CAP_MULTIMSGCAP = PF1_MSI_CAP_MULTIMSGCAP; // Default: 0
			this->PF1_MSI_CAP_NEXTPTR = PF1_MSI_CAP_NEXTPTR; // Default: 8'h00
			this->PF1_PB_CAP_NEXTPTR = PF1_PB_CAP_NEXTPTR; // Default: 12'h000
			this->PF1_PB_CAP_SYSTEM_ALLOCATED = PF1_PB_CAP_SYSTEM_ALLOCATED; // Default: "FALSE"
			this->PF1_PB_CAP_VER = PF1_PB_CAP_VER; // Default: 4'h1
			this->PF1_PM_CAP_ID = PF1_PM_CAP_ID; // Default: 8'h01
			this->PF1_PM_CAP_NEXTPTR = PF1_PM_CAP_NEXTPTR; // Default: 8'h00
			this->PF1_PM_CAP_VER_ID = PF1_PM_CAP_VER_ID; // Default: 3'h3
			this->PF1_RBAR_CAP_ENABLE = PF1_RBAR_CAP_ENABLE; // Default: "FALSE"
			this->PF1_RBAR_CAP_INDEX0 = PF1_RBAR_CAP_INDEX0; // Default: 3'h0
			this->PF1_RBAR_CAP_INDEX1 = PF1_RBAR_CAP_INDEX1; // Default: 3'h0
			this->PF1_RBAR_CAP_INDEX2 = PF1_RBAR_CAP_INDEX2; // Default: 3'h0
			this->PF1_RBAR_CAP_NEXTPTR = PF1_RBAR_CAP_NEXTPTR; // Default: 12'h000
			this->PF1_RBAR_CAP_SIZE0 = PF1_RBAR_CAP_SIZE0; // Default: 20'h00000
			this->PF1_RBAR_CAP_SIZE1 = PF1_RBAR_CAP_SIZE1; // Default: 20'h00000
			this->PF1_RBAR_CAP_SIZE2 = PF1_RBAR_CAP_SIZE2; // Default: 20'h00000
			this->PF1_RBAR_CAP_VER = PF1_RBAR_CAP_VER; // Default: 4'h1
			this->PF1_RBAR_NUM = PF1_RBAR_NUM; // Default: 3'h1
			this->PF1_REVISION_ID = PF1_REVISION_ID; // Default: 8'h00
			this->PF1_SRIOV_BAR0_APERTURE_SIZE = PF1_SRIOV_BAR0_APERTURE_SIZE; // Default: 5'h03
			this->PF1_SRIOV_BAR0_CONTROL = PF1_SRIOV_BAR0_CONTROL; // Default: 3'h4
			this->PF1_SRIOV_BAR1_APERTURE_SIZE = PF1_SRIOV_BAR1_APERTURE_SIZE; // Default: 5'h00
			this->PF1_SRIOV_BAR1_CONTROL = PF1_SRIOV_BAR1_CONTROL; // Default: 3'h0
			this->PF1_SRIOV_BAR2_APERTURE_SIZE = PF1_SRIOV_BAR2_APERTURE_SIZE; // Default: 5'h03
			this->PF1_SRIOV_BAR2_CONTROL = PF1_SRIOV_BAR2_CONTROL; // Default: 3'h4
			this->PF1_SRIOV_BAR3_APERTURE_SIZE = PF1_SRIOV_BAR3_APERTURE_SIZE; // Default: 5'h03
			this->PF1_SRIOV_BAR3_CONTROL = PF1_SRIOV_BAR3_CONTROL; // Default: 3'h0
			this->PF1_SRIOV_BAR4_APERTURE_SIZE = PF1_SRIOV_BAR4_APERTURE_SIZE; // Default: 5'h03
			this->PF1_SRIOV_BAR4_CONTROL = PF1_SRIOV_BAR4_CONTROL; // Default: 3'h4
			this->PF1_SRIOV_BAR5_APERTURE_SIZE = PF1_SRIOV_BAR5_APERTURE_SIZE; // Default: 5'h03
			this->PF1_SRIOV_BAR5_CONTROL = PF1_SRIOV_BAR5_CONTROL; // Default: 3'h0
			this->PF1_SRIOV_CAP_INITIAL_VF = PF1_SRIOV_CAP_INITIAL_VF; // Default: 16'h0000
			this->PF1_SRIOV_CAP_NEXTPTR = PF1_SRIOV_CAP_NEXTPTR; // Default: 12'h000
			this->PF1_SRIOV_CAP_TOTAL_VF = PF1_SRIOV_CAP_TOTAL_VF; // Default: 16'h0000
			this->PF1_SRIOV_CAP_VER = PF1_SRIOV_CAP_VER; // Default: 4'h1
			this->PF1_SRIOV_FIRST_VF_OFFSET = PF1_SRIOV_FIRST_VF_OFFSET; // Default: 16'h0000
			this->PF1_SRIOV_FUNC_DEP_LINK = PF1_SRIOV_FUNC_DEP_LINK; // Default: 16'h0000
			this->PF1_SRIOV_SUPPORTED_PAGE_SIZE = PF1_SRIOV_SUPPORTED_PAGE_SIZE; // Default: 32'h00000000
			this->PF1_SRIOV_VF_DEVICE_ID = PF1_SRIOV_VF_DEVICE_ID; // Default: 16'h0000
			this->PF1_SUBSYSTEM_ID = PF1_SUBSYSTEM_ID; // Default: 16'h0000
			this->PF1_TPHR_CAP_DEV_SPECIFIC_MODE = PF1_TPHR_CAP_DEV_SPECIFIC_MODE; // Default: "TRUE"
			this->PF1_TPHR_CAP_ENABLE = PF1_TPHR_CAP_ENABLE; // Default: "FALSE"
			this->PF1_TPHR_CAP_INT_VEC_MODE = PF1_TPHR_CAP_INT_VEC_MODE; // Default: "TRUE"
			this->PF1_TPHR_CAP_NEXTPTR = PF1_TPHR_CAP_NEXTPTR; // Default: 12'h000
			this->PF1_TPHR_CAP_ST_MODE_SEL = PF1_TPHR_CAP_ST_MODE_SEL; // Default: 3'h0
			this->PF1_TPHR_CAP_ST_TABLE_LOC = PF1_TPHR_CAP_ST_TABLE_LOC; // Default: 2'h0
			this->PF1_TPHR_CAP_ST_TABLE_SIZE = PF1_TPHR_CAP_ST_TABLE_SIZE; // Default: 11'h000
			this->PF1_TPHR_CAP_VER = PF1_TPHR_CAP_VER; // Default: 4'h1
			this->PL_DISABLE_EI_INFER_IN_L0 = PL_DISABLE_EI_INFER_IN_L0; // Default: "FALSE"
			this->PL_DISABLE_GEN3_DC_BALANCE = PL_DISABLE_GEN3_DC_BALANCE; // Default: "FALSE"
			this->PL_DISABLE_SCRAMBLING = PL_DISABLE_SCRAMBLING; // Default: "FALSE"
			this->PL_DISABLE_UPCONFIG_CAPABLE = PL_DISABLE_UPCONFIG_CAPABLE; // Default: "FALSE"
			this->PL_EQ_ADAPT_DISABLE_COEFF_CHECK = PL_EQ_ADAPT_DISABLE_COEFF_CHECK; // Default: "FALSE"
			this->PL_EQ_ADAPT_DISABLE_PRESET_CHECK = PL_EQ_ADAPT_DISABLE_PRESET_CHECK; // Default: "FALSE"
			this->PL_EQ_ADAPT_ITER_COUNT = PL_EQ_ADAPT_ITER_COUNT; // Default: 5'h02
			this->PL_EQ_ADAPT_REJECT_RETRY_COUNT = PL_EQ_ADAPT_REJECT_RETRY_COUNT; // Default: 2'h1
			this->PL_EQ_BYPASS_PHASE23 = PL_EQ_BYPASS_PHASE23; // Default: "FALSE"
			this->PL_EQ_SHORT_ADAPT_PHASE = PL_EQ_SHORT_ADAPT_PHASE; // Default: "FALSE"
			this->PL_LANE0_EQ_CONTROL = PL_LANE0_EQ_CONTROL; // Default: 16'h3F00
			this->PL_LANE1_EQ_CONTROL = PL_LANE1_EQ_CONTROL; // Default: 16'h3F00
			this->PL_LANE2_EQ_CONTROL = PL_LANE2_EQ_CONTROL; // Default: 16'h3F00
			this->PL_LANE3_EQ_CONTROL = PL_LANE3_EQ_CONTROL; // Default: 16'h3F00
			this->PL_LANE4_EQ_CONTROL = PL_LANE4_EQ_CONTROL; // Default: 16'h3F00
			this->PL_LANE5_EQ_CONTROL = PL_LANE5_EQ_CONTROL; // Default: 16'h3F00
			this->PL_LANE6_EQ_CONTROL = PL_LANE6_EQ_CONTROL; // Default: 16'h3F00
			this->PL_LANE7_EQ_CONTROL = PL_LANE7_EQ_CONTROL; // Default: 16'h3F00
			this->PL_LINK_CAP_MAX_LINK_SPEED = PL_LINK_CAP_MAX_LINK_SPEED; // Default: 3'h4
			this->PL_LINK_CAP_MAX_LINK_WIDTH = PL_LINK_CAP_MAX_LINK_WIDTH; // Default: 4'h8
			this->PL_N_FTS_COMCLK_GEN1 = PL_N_FTS_COMCLK_GEN1; // Default: 255
			this->PL_N_FTS_COMCLK_GEN2 = PL_N_FTS_COMCLK_GEN2; // Default: 255
			this->PL_N_FTS_COMCLK_GEN3 = PL_N_FTS_COMCLK_GEN3; // Default: 255
			this->PL_N_FTS_GEN1 = PL_N_FTS_GEN1; // Default: 255
			this->PL_N_FTS_GEN2 = PL_N_FTS_GEN2; // Default: 255
			this->PL_N_FTS_GEN3 = PL_N_FTS_GEN3; // Default: 255
			this->PL_SIM_FAST_LINK_TRAINING = PL_SIM_FAST_LINK_TRAINING; // Default: "FALSE"
			this->PL_UPSTREAM_FACING = PL_UPSTREAM_FACING; // Default: "TRUE"
			this->PM_ASPML0S_TIMEOUT = PM_ASPML0S_TIMEOUT; // Default: 16'h05DC
			this->PM_ASPML1_ENTRY_DELAY = PM_ASPML1_ENTRY_DELAY; // Default: 20'h00000
			this->PM_ENABLE_SLOT_POWER_CAPTURE = PM_ENABLE_SLOT_POWER_CAPTURE; // Default: "TRUE"
			this->PM_L1_REENTRY_DELAY = PM_L1_REENTRY_DELAY; // Default: 32'h00000000
			this->PM_PME_SERVICE_TIMEOUT_DELAY = PM_PME_SERVICE_TIMEOUT_DELAY; // Default: 20'h186A0
			this->PM_PME_TURNOFF_ACK_DELAY = PM_PME_TURNOFF_ACK_DELAY; // Default: 16'h0064
			this->SIM_VERSION = SIM_VERSION; // Default: "1.0"
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
			this->SRIOV_CAP_ENABLE = SRIOV_CAP_ENABLE; // Default: "FALSE"
			this->TL_COMPL_TIMEOUT_REG0 = TL_COMPL_TIMEOUT_REG0; // Default: 24'hBEBC20
			this->TL_COMPL_TIMEOUT_REG1 = TL_COMPL_TIMEOUT_REG1; // Default: 28'h0000000
			this->TL_CREDITS_CD = TL_CREDITS_CD; // Default: 12'h3E0
			this->TL_CREDITS_CH = TL_CREDITS_CH; // Default: 8'h20
			this->TL_CREDITS_NPD = TL_CREDITS_NPD; // Default: 12'h028
			this->TL_CREDITS_NPH = TL_CREDITS_NPH; // Default: 8'h20
			this->TL_CREDITS_PD = TL_CREDITS_PD; // Default: 12'h198
			this->TL_CREDITS_PH = TL_CREDITS_PH; // Default: 8'h20
			this->TL_ENABLE_MESSAGE_RID_CHECK_ENABLE = TL_ENABLE_MESSAGE_RID_CHECK_ENABLE; // Default: "TRUE"
			this->TL_EXTENDED_CFG_EXTEND_INTERFACE_ENABLE = TL_EXTENDED_CFG_EXTEND_INTERFACE_ENABLE; // Default: "FALSE"
			this->TL_LEGACY_CFG_EXTEND_INTERFACE_ENABLE = TL_LEGACY_CFG_EXTEND_INTERFACE_ENABLE; // Default: "FALSE"
			this->TL_LEGACY_MODE_ENABLE = TL_LEGACY_MODE_ENABLE; // Default: "FALSE"
			this->TL_PF_ENABLE_REG = TL_PF_ENABLE_REG; // Default: "FALSE"
			this->TL_TAG_MGMT_ENABLE = TL_TAG_MGMT_ENABLE; // Default: "TRUE"
			this->VF0_ARI_CAP_NEXTPTR = VF0_ARI_CAP_NEXTPTR; // Default: 12'h000
			this->VF0_CAPABILITY_POINTER = VF0_CAPABILITY_POINTER; // Default: 8'h50
			this->VF0_MSIX_CAP_PBA_BIR = VF0_MSIX_CAP_PBA_BIR; // Default: 0
			this->VF0_MSIX_CAP_PBA_OFFSET = VF0_MSIX_CAP_PBA_OFFSET; // Default: 29'h00000050
			this->VF0_MSIX_CAP_TABLE_BIR = VF0_MSIX_CAP_TABLE_BIR; // Default: 0
			this->VF0_MSIX_CAP_TABLE_OFFSET = VF0_MSIX_CAP_TABLE_OFFSET; // Default: 29'h00000040
			this->VF0_MSIX_CAP_TABLE_SIZE = VF0_MSIX_CAP_TABLE_SIZE; // Default: 11'h000
			this->VF0_MSI_CAP_MULTIMSGCAP = VF0_MSI_CAP_MULTIMSGCAP; // Default: 0
			this->VF0_PM_CAP_ID = VF0_PM_CAP_ID; // Default: 8'h01
			this->VF0_PM_CAP_NEXTPTR = VF0_PM_CAP_NEXTPTR; // Default: 8'h00
			this->VF0_PM_CAP_VER_ID = VF0_PM_CAP_VER_ID; // Default: 3'h3
			this->VF0_TPHR_CAP_DEV_SPECIFIC_MODE = VF0_TPHR_CAP_DEV_SPECIFIC_MODE; // Default: "TRUE"
			this->VF0_TPHR_CAP_ENABLE = VF0_TPHR_CAP_ENABLE; // Default: "FALSE"
			this->VF0_TPHR_CAP_INT_VEC_MODE = VF0_TPHR_CAP_INT_VEC_MODE; // Default: "TRUE"
			this->VF0_TPHR_CAP_NEXTPTR = VF0_TPHR_CAP_NEXTPTR; // Default: 12'h000
			this->VF0_TPHR_CAP_ST_MODE_SEL = VF0_TPHR_CAP_ST_MODE_SEL; // Default: 3'h0
			this->VF0_TPHR_CAP_ST_TABLE_LOC = VF0_TPHR_CAP_ST_TABLE_LOC; // Default: 2'h0
			this->VF0_TPHR_CAP_ST_TABLE_SIZE = VF0_TPHR_CAP_ST_TABLE_SIZE; // Default: 11'h000
			this->VF0_TPHR_CAP_VER = VF0_TPHR_CAP_VER; // Default: 4'h1
			this->VF1_ARI_CAP_NEXTPTR = VF1_ARI_CAP_NEXTPTR; // Default: 12'h000
			this->VF1_MSIX_CAP_PBA_BIR = VF1_MSIX_CAP_PBA_BIR; // Default: 0
			this->VF1_MSIX_CAP_PBA_OFFSET = VF1_MSIX_CAP_PBA_OFFSET; // Default: 29'h00000050
			this->VF1_MSIX_CAP_TABLE_BIR = VF1_MSIX_CAP_TABLE_BIR; // Default: 0
			this->VF1_MSIX_CAP_TABLE_OFFSET = VF1_MSIX_CAP_TABLE_OFFSET; // Default: 29'h00000040
			this->VF1_MSIX_CAP_TABLE_SIZE = VF1_MSIX_CAP_TABLE_SIZE; // Default: 11'h000
			this->VF1_MSI_CAP_MULTIMSGCAP = VF1_MSI_CAP_MULTIMSGCAP; // Default: 0
			this->VF1_PM_CAP_ID = VF1_PM_CAP_ID; // Default: 8'h01
			this->VF1_PM_CAP_NEXTPTR = VF1_PM_CAP_NEXTPTR; // Default: 8'h00
			this->VF1_PM_CAP_VER_ID = VF1_PM_CAP_VER_ID; // Default: 3'h3
			this->VF1_TPHR_CAP_DEV_SPECIFIC_MODE = VF1_TPHR_CAP_DEV_SPECIFIC_MODE; // Default: "TRUE"
			this->VF1_TPHR_CAP_ENABLE = VF1_TPHR_CAP_ENABLE; // Default: "FALSE"
			this->VF1_TPHR_CAP_INT_VEC_MODE = VF1_TPHR_CAP_INT_VEC_MODE; // Default: "TRUE"
			this->VF1_TPHR_CAP_NEXTPTR = VF1_TPHR_CAP_NEXTPTR; // Default: 12'h000
			this->VF1_TPHR_CAP_ST_MODE_SEL = VF1_TPHR_CAP_ST_MODE_SEL; // Default: 3'h0
			this->VF1_TPHR_CAP_ST_TABLE_LOC = VF1_TPHR_CAP_ST_TABLE_LOC; // Default: 2'h0
			this->VF1_TPHR_CAP_ST_TABLE_SIZE = VF1_TPHR_CAP_ST_TABLE_SIZE; // Default: 11'h000
			this->VF1_TPHR_CAP_VER = VF1_TPHR_CAP_VER; // Default: 4'h1
			this->VF2_ARI_CAP_NEXTPTR = VF2_ARI_CAP_NEXTPTR; // Default: 12'h000
			this->VF2_MSIX_CAP_PBA_BIR = VF2_MSIX_CAP_PBA_BIR; // Default: 0
			this->VF2_MSIX_CAP_PBA_OFFSET = VF2_MSIX_CAP_PBA_OFFSET; // Default: 29'h00000050
			this->VF2_MSIX_CAP_TABLE_BIR = VF2_MSIX_CAP_TABLE_BIR; // Default: 0
			this->VF2_MSIX_CAP_TABLE_OFFSET = VF2_MSIX_CAP_TABLE_OFFSET; // Default: 29'h00000040
			this->VF2_MSIX_CAP_TABLE_SIZE = VF2_MSIX_CAP_TABLE_SIZE; // Default: 11'h000
			this->VF2_MSI_CAP_MULTIMSGCAP = VF2_MSI_CAP_MULTIMSGCAP; // Default: 0
			this->VF2_PM_CAP_ID = VF2_PM_CAP_ID; // Default: 8'h01
			this->VF2_PM_CAP_NEXTPTR = VF2_PM_CAP_NEXTPTR; // Default: 8'h00
			this->VF2_PM_CAP_VER_ID = VF2_PM_CAP_VER_ID; // Default: 3'h3
			this->VF2_TPHR_CAP_DEV_SPECIFIC_MODE = VF2_TPHR_CAP_DEV_SPECIFIC_MODE; // Default: "TRUE"
			this->VF2_TPHR_CAP_ENABLE = VF2_TPHR_CAP_ENABLE; // Default: "FALSE"
			this->VF2_TPHR_CAP_INT_VEC_MODE = VF2_TPHR_CAP_INT_VEC_MODE; // Default: "TRUE"
			this->VF2_TPHR_CAP_NEXTPTR = VF2_TPHR_CAP_NEXTPTR; // Default: 12'h000
			this->VF2_TPHR_CAP_ST_MODE_SEL = VF2_TPHR_CAP_ST_MODE_SEL; // Default: 3'h0
			this->VF2_TPHR_CAP_ST_TABLE_LOC = VF2_TPHR_CAP_ST_TABLE_LOC; // Default: 2'h0
			this->VF2_TPHR_CAP_ST_TABLE_SIZE = VF2_TPHR_CAP_ST_TABLE_SIZE; // Default: 11'h000
			this->VF2_TPHR_CAP_VER = VF2_TPHR_CAP_VER; // Default: 4'h1
			this->VF3_ARI_CAP_NEXTPTR = VF3_ARI_CAP_NEXTPTR; // Default: 12'h000
			this->VF3_MSIX_CAP_PBA_BIR = VF3_MSIX_CAP_PBA_BIR; // Default: 0
			this->VF3_MSIX_CAP_PBA_OFFSET = VF3_MSIX_CAP_PBA_OFFSET; // Default: 29'h00000050
			this->VF3_MSIX_CAP_TABLE_BIR = VF3_MSIX_CAP_TABLE_BIR; // Default: 0
			this->VF3_MSIX_CAP_TABLE_OFFSET = VF3_MSIX_CAP_TABLE_OFFSET; // Default: 29'h00000040
			this->VF3_MSIX_CAP_TABLE_SIZE = VF3_MSIX_CAP_TABLE_SIZE; // Default: 11'h000
			this->VF3_MSI_CAP_MULTIMSGCAP = VF3_MSI_CAP_MULTIMSGCAP; // Default: 0
			this->VF3_PM_CAP_ID = VF3_PM_CAP_ID; // Default: 8'h01
			this->VF3_PM_CAP_NEXTPTR = VF3_PM_CAP_NEXTPTR; // Default: 8'h00
			this->VF3_PM_CAP_VER_ID = VF3_PM_CAP_VER_ID; // Default: 3'h3
			this->VF3_TPHR_CAP_DEV_SPECIFIC_MODE = VF3_TPHR_CAP_DEV_SPECIFIC_MODE; // Default: "TRUE"
			this->VF3_TPHR_CAP_ENABLE = VF3_TPHR_CAP_ENABLE; // Default: "FALSE"
			this->VF3_TPHR_CAP_INT_VEC_MODE = VF3_TPHR_CAP_INT_VEC_MODE; // Default: "TRUE"
			this->VF3_TPHR_CAP_NEXTPTR = VF3_TPHR_CAP_NEXTPTR; // Default: 12'h000
			this->VF3_TPHR_CAP_ST_MODE_SEL = VF3_TPHR_CAP_ST_MODE_SEL; // Default: 3'h0
			this->VF3_TPHR_CAP_ST_TABLE_LOC = VF3_TPHR_CAP_ST_TABLE_LOC; // Default: 2'h0
			this->VF3_TPHR_CAP_ST_TABLE_SIZE = VF3_TPHR_CAP_ST_TABLE_SIZE; // Default: 11'h000
			this->VF3_TPHR_CAP_VER = VF3_TPHR_CAP_VER; // Default: 4'h1
			this->VF4_ARI_CAP_NEXTPTR = VF4_ARI_CAP_NEXTPTR; // Default: 12'h000
			this->VF4_MSIX_CAP_PBA_BIR = VF4_MSIX_CAP_PBA_BIR; // Default: 0
			this->VF4_MSIX_CAP_PBA_OFFSET = VF4_MSIX_CAP_PBA_OFFSET; // Default: 29'h00000050
			this->VF4_MSIX_CAP_TABLE_BIR = VF4_MSIX_CAP_TABLE_BIR; // Default: 0
			this->VF4_MSIX_CAP_TABLE_OFFSET = VF4_MSIX_CAP_TABLE_OFFSET; // Default: 29'h00000040
			this->VF4_MSIX_CAP_TABLE_SIZE = VF4_MSIX_CAP_TABLE_SIZE; // Default: 11'h000
			this->VF4_MSI_CAP_MULTIMSGCAP = VF4_MSI_CAP_MULTIMSGCAP; // Default: 0
			this->VF4_PM_CAP_ID = VF4_PM_CAP_ID; // Default: 8'h01
			this->VF4_PM_CAP_NEXTPTR = VF4_PM_CAP_NEXTPTR; // Default: 8'h00
			this->VF4_PM_CAP_VER_ID = VF4_PM_CAP_VER_ID; // Default: 3'h3
			this->VF4_TPHR_CAP_DEV_SPECIFIC_MODE = VF4_TPHR_CAP_DEV_SPECIFIC_MODE; // Default: "TRUE"
			this->VF4_TPHR_CAP_ENABLE = VF4_TPHR_CAP_ENABLE; // Default: "FALSE"
			this->VF4_TPHR_CAP_INT_VEC_MODE = VF4_TPHR_CAP_INT_VEC_MODE; // Default: "TRUE"
			this->VF4_TPHR_CAP_NEXTPTR = VF4_TPHR_CAP_NEXTPTR; // Default: 12'h000
			this->VF4_TPHR_CAP_ST_MODE_SEL = VF4_TPHR_CAP_ST_MODE_SEL; // Default: 3'h0
			this->VF4_TPHR_CAP_ST_TABLE_LOC = VF4_TPHR_CAP_ST_TABLE_LOC; // Default: 2'h0
			this->VF4_TPHR_CAP_ST_TABLE_SIZE = VF4_TPHR_CAP_ST_TABLE_SIZE; // Default: 11'h000
			this->VF4_TPHR_CAP_VER = VF4_TPHR_CAP_VER; // Default: 4'h1
			this->VF5_ARI_CAP_NEXTPTR = VF5_ARI_CAP_NEXTPTR; // Default: 12'h000
			this->VF5_MSIX_CAP_PBA_BIR = VF5_MSIX_CAP_PBA_BIR; // Default: 0
			this->VF5_MSIX_CAP_PBA_OFFSET = VF5_MSIX_CAP_PBA_OFFSET; // Default: 29'h00000050
			this->VF5_MSIX_CAP_TABLE_BIR = VF5_MSIX_CAP_TABLE_BIR; // Default: 0
			this->VF5_MSIX_CAP_TABLE_OFFSET = VF5_MSIX_CAP_TABLE_OFFSET; // Default: 29'h00000040
			this->VF5_MSIX_CAP_TABLE_SIZE = VF5_MSIX_CAP_TABLE_SIZE; // Default: 11'h000
			this->VF5_MSI_CAP_MULTIMSGCAP = VF5_MSI_CAP_MULTIMSGCAP; // Default: 0
			this->VF5_PM_CAP_ID = VF5_PM_CAP_ID; // Default: 8'h01
			this->VF5_PM_CAP_NEXTPTR = VF5_PM_CAP_NEXTPTR; // Default: 8'h00
			this->VF5_PM_CAP_VER_ID = VF5_PM_CAP_VER_ID; // Default: 3'h3
			this->VF5_TPHR_CAP_DEV_SPECIFIC_MODE = VF5_TPHR_CAP_DEV_SPECIFIC_MODE; // Default: "TRUE"
			this->VF5_TPHR_CAP_ENABLE = VF5_TPHR_CAP_ENABLE; // Default: "FALSE"
			this->VF5_TPHR_CAP_INT_VEC_MODE = VF5_TPHR_CAP_INT_VEC_MODE; // Default: "TRUE"
			this->VF5_TPHR_CAP_NEXTPTR = VF5_TPHR_CAP_NEXTPTR; // Default: 12'h000
			this->VF5_TPHR_CAP_ST_MODE_SEL = VF5_TPHR_CAP_ST_MODE_SEL; // Default: 3'h0
			this->VF5_TPHR_CAP_ST_TABLE_LOC = VF5_TPHR_CAP_ST_TABLE_LOC; // Default: 2'h0
			this->VF5_TPHR_CAP_ST_TABLE_SIZE = VF5_TPHR_CAP_ST_TABLE_SIZE; // Default: 11'h000
			this->VF5_TPHR_CAP_VER = VF5_TPHR_CAP_VER; // Default: 4'h1
			//Verilog Ports in definition order:
			this->CFGCURRENTSPEED_A0_B = CFGCURRENTSPEED_A0_B; // net ID: CFGCURRENTSPEED lsb: 0  msb: 0 OUTPUT
			this->CFGDPASUBSTATECHANGE_A0_B = CFGDPASUBSTATECHANGE_A0_B; // net ID: CFGDPASUBSTATECHANGE lsb: 0  msb: 0 OUTPUT
			this->CFGERRCOROUT_A0_B = CFGERRCOROUT_A0_B; // net ID: CFGERRCOROUT lsb: 0  msb: 0 OUTPUT
			this->CFGERRFATALOUT_A0_B = CFGERRFATALOUT_A0_B; // net ID: CFGERRFATALOUT lsb: 0  msb: 0 OUTPUT
			this->CFGERRNONFATALOUT_A0_B = CFGERRNONFATALOUT_A0_B; // net ID: CFGERRNONFATALOUT lsb: 0  msb: 0 OUTPUT
			this->CFGEXTFUNCTIONNUMBER_A0_B = CFGEXTFUNCTIONNUMBER_A0_B; // net ID: CFGEXTFUNCTIONNUMBER lsb: 0  msb: 0 OUTPUT
			this->CFGEXTREADRECEIVED_A0_B = CFGEXTREADRECEIVED_A0_B; // net ID: CFGEXTREADRECEIVED lsb: 0  msb: 0 OUTPUT
			this->CFGEXTREGISTERNUMBER_A0_B = CFGEXTREGISTERNUMBER_A0_B; // net ID: CFGEXTREGISTERNUMBER lsb: 0  msb: 0 OUTPUT
			this->CFGEXTWRITEBYTEENABLE_A0_B = CFGEXTWRITEBYTEENABLE_A0_B; // net ID: CFGEXTWRITEBYTEENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGEXTWRITEDATA_A0_B = CFGEXTWRITEDATA_A0_B; // net ID: CFGEXTWRITEDATA lsb: 0  msb: 0 OUTPUT
			this->CFGEXTWRITERECEIVED_A0_B = CFGEXTWRITERECEIVED_A0_B; // net ID: CFGEXTWRITERECEIVED lsb: 0  msb: 0 OUTPUT
			this->CFGFCCPLD_A0_B = CFGFCCPLD_A0_B; // net ID: CFGFCCPLD lsb: 0  msb: 0 OUTPUT
			this->CFGFCCPLH_A0_B = CFGFCCPLH_A0_B; // net ID: CFGFCCPLH lsb: 0  msb: 0 OUTPUT
			this->CFGFCNPD_A0_B = CFGFCNPD_A0_B; // net ID: CFGFCNPD lsb: 0  msb: 0 OUTPUT
			this->CFGFCNPH_A0_B = CFGFCNPH_A0_B; // net ID: CFGFCNPH lsb: 0  msb: 0 OUTPUT
			this->CFGFCPD_A0_B = CFGFCPD_A0_B; // net ID: CFGFCPD lsb: 0  msb: 0 OUTPUT
			this->CFGFCPH_A0_B = CFGFCPH_A0_B; // net ID: CFGFCPH lsb: 0  msb: 0 OUTPUT
			this->CFGFLRINPROCESS_A0_B = CFGFLRINPROCESS_A0_B; // net ID: CFGFLRINPROCESS lsb: 0  msb: 0 OUTPUT
			this->CFGFUNCTIONPOWERSTATE_A0_B = CFGFUNCTIONPOWERSTATE_A0_B; // net ID: CFGFUNCTIONPOWERSTATE lsb: 0  msb: 0 OUTPUT
			this->CFGFUNCTIONSTATUS_A0_B = CFGFUNCTIONSTATUS_A0_B; // net ID: CFGFUNCTIONSTATUS lsb: 0  msb: 0 OUTPUT
			this->CFGHOTRESETOUT_A0_B = CFGHOTRESETOUT_A0_B; // net ID: CFGHOTRESETOUT lsb: 0  msb: 0 OUTPUT
			this->CFGINPUTUPDATEDONE_A0_B = CFGINPUTUPDATEDONE_A0_B; // net ID: CFGINPUTUPDATEDONE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTAOUTPUT_A0_B = CFGINTERRUPTAOUTPUT_A0_B; // net ID: CFGINTERRUPTAOUTPUT lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTBOUTPUT_A0_B = CFGINTERRUPTBOUTPUT_A0_B; // net ID: CFGINTERRUPTBOUTPUT lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTCOUTPUT_A0_B = CFGINTERRUPTCOUTPUT_A0_B; // net ID: CFGINTERRUPTCOUTPUT lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTDOUTPUT_A0_B = CFGINTERRUPTDOUTPUT_A0_B; // net ID: CFGINTERRUPTDOUTPUT lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIDATA_A0_B = CFGINTERRUPTMSIDATA_A0_B; // net ID: CFGINTERRUPTMSIDATA lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIENABLE_A0_B = CFGINTERRUPTMSIENABLE_A0_B; // net ID: CFGINTERRUPTMSIENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIFAIL_A0_B = CFGINTERRUPTMSIFAIL_A0_B; // net ID: CFGINTERRUPTMSIFAIL lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIMASKUPDATE_A0_B = CFGINTERRUPTMSIMASKUPDATE_A0_B; // net ID: CFGINTERRUPTMSIMASKUPDATE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIMMENABLE_A0_B = CFGINTERRUPTMSIMMENABLE_A0_B; // net ID: CFGINTERRUPTMSIMMENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSISENT_A0_B = CFGINTERRUPTMSISENT_A0_B; // net ID: CFGINTERRUPTMSISENT lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIVFENABLE_A0_B = CFGINTERRUPTMSIVFENABLE_A0_B; // net ID: CFGINTERRUPTMSIVFENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIXENABLE_A0_B = CFGINTERRUPTMSIXENABLE_A0_B; // net ID: CFGINTERRUPTMSIXENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIXFAIL_A0_B = CFGINTERRUPTMSIXFAIL_A0_B; // net ID: CFGINTERRUPTMSIXFAIL lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIXMASK_A0_B = CFGINTERRUPTMSIXMASK_A0_B; // net ID: CFGINTERRUPTMSIXMASK lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIXSENT_A0_B = CFGINTERRUPTMSIXSENT_A0_B; // net ID: CFGINTERRUPTMSIXSENT lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIXVFENABLE_A0_B = CFGINTERRUPTMSIXVFENABLE_A0_B; // net ID: CFGINTERRUPTMSIXVFENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTMSIXVFMASK_A0_B = CFGINTERRUPTMSIXVFMASK_A0_B; // net ID: CFGINTERRUPTMSIXVFMASK lsb: 0  msb: 0 OUTPUT
			this->CFGINTERRUPTSENT_A0_B = CFGINTERRUPTSENT_A0_B; // net ID: CFGINTERRUPTSENT lsb: 0  msb: 0 OUTPUT
			this->CFGLINKPOWERSTATE_A0_B = CFGLINKPOWERSTATE_A0_B; // net ID: CFGLINKPOWERSTATE lsb: 0  msb: 0 OUTPUT
			this->CFGLOCALERROR_A0_B = CFGLOCALERROR_A0_B; // net ID: CFGLOCALERROR lsb: 0  msb: 0 OUTPUT
			this->CFGLTRENABLE_A0_B = CFGLTRENABLE_A0_B; // net ID: CFGLTRENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGLTSSMSTATE_A0_B = CFGLTSSMSTATE_A0_B; // net ID: CFGLTSSMSTATE lsb: 0  msb: 0 OUTPUT
			this->CFGMAXPAYLOAD_A0_B = CFGMAXPAYLOAD_A0_B; // net ID: CFGMAXPAYLOAD lsb: 0  msb: 0 OUTPUT
			this->CFGMAXREADREQ_A0_B = CFGMAXREADREQ_A0_B; // net ID: CFGMAXREADREQ lsb: 0  msb: 0 OUTPUT
			this->CFGMCUPDATEDONE_A0_B = CFGMCUPDATEDONE_A0_B; // net ID: CFGMCUPDATEDONE lsb: 0  msb: 0 OUTPUT
			this->CFGMGMTREADDATA_A0_B = CFGMGMTREADDATA_A0_B; // net ID: CFGMGMTREADDATA lsb: 0  msb: 0 OUTPUT
			this->CFGMGMTREADWRITEDONE_A0_B = CFGMGMTREADWRITEDONE_A0_B; // net ID: CFGMGMTREADWRITEDONE lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVED_A0_B = CFGMSGRECEIVED_A0_B; // net ID: CFGMSGRECEIVED lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDDATA_A0_B = CFGMSGRECEIVEDDATA_A0_B; // net ID: CFGMSGRECEIVEDDATA lsb: 0  msb: 0 OUTPUT
			this->CFGMSGRECEIVEDTYPE_A0_B = CFGMSGRECEIVEDTYPE_A0_B; // net ID: CFGMSGRECEIVEDTYPE lsb: 0  msb: 0 OUTPUT
			this->CFGMSGTRANSMITDONE_A0_B = CFGMSGTRANSMITDONE_A0_B; // net ID: CFGMSGTRANSMITDONE lsb: 0  msb: 0 OUTPUT
			this->CFGNEGOTIATEDWIDTH_A0_B = CFGNEGOTIATEDWIDTH_A0_B; // net ID: CFGNEGOTIATEDWIDTH lsb: 0  msb: 0 OUTPUT
			this->CFGOBFFENABLE_A0_B = CFGOBFFENABLE_A0_B; // net ID: CFGOBFFENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGPERFUNCSTATUSDATA_A0_B = CFGPERFUNCSTATUSDATA_A0_B; // net ID: CFGPERFUNCSTATUSDATA lsb: 0  msb: 0 OUTPUT
			this->CFGPERFUNCTIONUPDATEDONE_A0_B = CFGPERFUNCTIONUPDATEDONE_A0_B; // net ID: CFGPERFUNCTIONUPDATEDONE lsb: 0  msb: 0 OUTPUT
			this->CFGPHYLINKDOWN_A0_B = CFGPHYLINKDOWN_A0_B; // net ID: CFGPHYLINKDOWN lsb: 0  msb: 0 OUTPUT
			this->CFGPHYLINKSTATUS_A0_B = CFGPHYLINKSTATUS_A0_B; // net ID: CFGPHYLINKSTATUS lsb: 0  msb: 0 OUTPUT
			this->CFGPLSTATUSCHANGE_A0_B = CFGPLSTATUSCHANGE_A0_B; // net ID: CFGPLSTATUSCHANGE lsb: 0  msb: 0 OUTPUT
			this->CFGPOWERSTATECHANGEINTERRUPT_A0_B = CFGPOWERSTATECHANGEINTERRUPT_A0_B; // net ID: CFGPOWERSTATECHANGEINTERRUPT lsb: 0  msb: 0 OUTPUT
			this->CFGRCBSTATUS_A0_B = CFGRCBSTATUS_A0_B; // net ID: CFGRCBSTATUS lsb: 0  msb: 0 OUTPUT
			this->CFGTPHFUNCTIONNUM_A0_B = CFGTPHFUNCTIONNUM_A0_B; // net ID: CFGTPHFUNCTIONNUM lsb: 0  msb: 0 OUTPUT
			this->CFGTPHREQUESTERENABLE_A0_B = CFGTPHREQUESTERENABLE_A0_B; // net ID: CFGTPHREQUESTERENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGTPHSTMODE_A0_B = CFGTPHSTMODE_A0_B; // net ID: CFGTPHSTMODE lsb: 0  msb: 0 OUTPUT
			this->CFGTPHSTTADDRESS_A0_B = CFGTPHSTTADDRESS_A0_B; // net ID: CFGTPHSTTADDRESS lsb: 0  msb: 0 OUTPUT
			this->CFGTPHSTTREADENABLE_A0_B = CFGTPHSTTREADENABLE_A0_B; // net ID: CFGTPHSTTREADENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGTPHSTTWRITEBYTEVALID_A0_B = CFGTPHSTTWRITEBYTEVALID_A0_B; // net ID: CFGTPHSTTWRITEBYTEVALID lsb: 0  msb: 0 OUTPUT
			this->CFGTPHSTTWRITEDATA_A0_B = CFGTPHSTTWRITEDATA_A0_B; // net ID: CFGTPHSTTWRITEDATA lsb: 0  msb: 0 OUTPUT
			this->CFGTPHSTTWRITEENABLE_A0_B = CFGTPHSTTWRITEENABLE_A0_B; // net ID: CFGTPHSTTWRITEENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGVFFLRINPROCESS_A0_B = CFGVFFLRINPROCESS_A0_B; // net ID: CFGVFFLRINPROCESS lsb: 0  msb: 0 OUTPUT
			this->CFGVFPOWERSTATE_A0_B = CFGVFPOWERSTATE_A0_B; // net ID: CFGVFPOWERSTATE lsb: 0  msb: 0 OUTPUT
			this->CFGVFSTATUS_A0_B = CFGVFSTATUS_A0_B; // net ID: CFGVFSTATUS lsb: 0  msb: 0 OUTPUT
			this->CFGVFTPHREQUESTERENABLE_A0_B = CFGVFTPHREQUESTERENABLE_A0_B; // net ID: CFGVFTPHREQUESTERENABLE lsb: 0  msb: 0 OUTPUT
			this->CFGVFTPHSTMODE_A0_B = CFGVFTPHSTMODE_A0_B; // net ID: CFGVFTPHSTMODE lsb: 0  msb: 0 OUTPUT
			this->DBGDATAOUT_A0_B = DBGDATAOUT_A0_B; // net ID: DBGDATAOUT lsb: 0  msb: 0 OUTPUT
			this->DRPDO_A0_B = DRPDO_A0_B; // net ID: DRPDO lsb: 0  msb: 0 OUTPUT
			this->DRPRDY_A0_B = DRPRDY_A0_B; // net ID: DRPRDY lsb: 0  msb: 0 OUTPUT
			this->MAXISCQTDATA_A0_B = MAXISCQTDATA_A0_B; // net ID: MAXISCQTDATA lsb: 0  msb: 0 OUTPUT
			this->MAXISCQTKEEP_A0_B = MAXISCQTKEEP_A0_B; // net ID: MAXISCQTKEEP lsb: 0  msb: 0 OUTPUT
			this->MAXISCQTLAST_A0_B = MAXISCQTLAST_A0_B; // net ID: MAXISCQTLAST lsb: 0  msb: 0 OUTPUT
			this->MAXISCQTUSER_A0_B = MAXISCQTUSER_A0_B; // net ID: MAXISCQTUSER lsb: 0  msb: 0 OUTPUT
			this->MAXISCQTVALID_A0_B = MAXISCQTVALID_A0_B; // net ID: MAXISCQTVALID lsb: 0  msb: 0 OUTPUT
			this->MAXISRCTDATA_A0_B = MAXISRCTDATA_A0_B; // net ID: MAXISRCTDATA lsb: 0  msb: 0 OUTPUT
			this->MAXISRCTKEEP_A0_B = MAXISRCTKEEP_A0_B; // net ID: MAXISRCTKEEP lsb: 0  msb: 0 OUTPUT
			this->MAXISRCTLAST_A0_B = MAXISRCTLAST_A0_B; // net ID: MAXISRCTLAST lsb: 0  msb: 0 OUTPUT
			this->MAXISRCTUSER_A0_B = MAXISRCTUSER_A0_B; // net ID: MAXISRCTUSER lsb: 0  msb: 0 OUTPUT
			this->MAXISRCTVALID_A0_B = MAXISRCTVALID_A0_B; // net ID: MAXISRCTVALID lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMREADADDRESSAL_A0_B = MICOMPLETIONRAMREADADDRESSAL_A0_B; // net ID: MICOMPLETIONRAMREADADDRESSAL lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMREADADDRESSAU_A0_B = MICOMPLETIONRAMREADADDRESSAU_A0_B; // net ID: MICOMPLETIONRAMREADADDRESSAU lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMREADADDRESSBL_A0_B = MICOMPLETIONRAMREADADDRESSBL_A0_B; // net ID: MICOMPLETIONRAMREADADDRESSBL lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMREADADDRESSBU_A0_B = MICOMPLETIONRAMREADADDRESSBU_A0_B; // net ID: MICOMPLETIONRAMREADADDRESSBU lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMREADENABLEL_A0_B = MICOMPLETIONRAMREADENABLEL_A0_B; // net ID: MICOMPLETIONRAMREADENABLEL lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMREADENABLEU_A0_B = MICOMPLETIONRAMREADENABLEU_A0_B; // net ID: MICOMPLETIONRAMREADENABLEU lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMWRITEADDRESSAL_A0_B = MICOMPLETIONRAMWRITEADDRESSAL_A0_B; // net ID: MICOMPLETIONRAMWRITEADDRESSAL lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMWRITEADDRESSAU_A0_B = MICOMPLETIONRAMWRITEADDRESSAU_A0_B; // net ID: MICOMPLETIONRAMWRITEADDRESSAU lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMWRITEADDRESSBL_A0_B = MICOMPLETIONRAMWRITEADDRESSBL_A0_B; // net ID: MICOMPLETIONRAMWRITEADDRESSBL lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMWRITEADDRESSBU_A0_B = MICOMPLETIONRAMWRITEADDRESSBU_A0_B; // net ID: MICOMPLETIONRAMWRITEADDRESSBU lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMWRITEDATAL_A0_B = MICOMPLETIONRAMWRITEDATAL_A0_B; // net ID: MICOMPLETIONRAMWRITEDATAL lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMWRITEDATAU_A0_B = MICOMPLETIONRAMWRITEDATAU_A0_B; // net ID: MICOMPLETIONRAMWRITEDATAU lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMWRITEENABLEL_A0_B = MICOMPLETIONRAMWRITEENABLEL_A0_B; // net ID: MICOMPLETIONRAMWRITEENABLEL lsb: 0  msb: 0 OUTPUT
			this->MICOMPLETIONRAMWRITEENABLEU_A0_B = MICOMPLETIONRAMWRITEENABLEU_A0_B; // net ID: MICOMPLETIONRAMWRITEENABLEU lsb: 0  msb: 0 OUTPUT
			this->MIREPLAYRAMADDRESS_A0_B = MIREPLAYRAMADDRESS_A0_B; // net ID: MIREPLAYRAMADDRESS lsb: 0  msb: 0 OUTPUT
			this->MIREPLAYRAMREADENABLE_A0_B = MIREPLAYRAMREADENABLE_A0_B; // net ID: MIREPLAYRAMREADENABLE lsb: 0  msb: 0 OUTPUT
			this->MIREPLAYRAMWRITEDATA_A0_B = MIREPLAYRAMWRITEDATA_A0_B; // net ID: MIREPLAYRAMWRITEDATA lsb: 0  msb: 0 OUTPUT
			this->MIREPLAYRAMWRITEENABLE_A0_B = MIREPLAYRAMWRITEENABLE_A0_B; // net ID: MIREPLAYRAMWRITEENABLE lsb: 0  msb: 0 OUTPUT
			this->MIREQUESTRAMREADADDRESSA_A0_B = MIREQUESTRAMREADADDRESSA_A0_B; // net ID: MIREQUESTRAMREADADDRESSA lsb: 0  msb: 0 OUTPUT
			this->MIREQUESTRAMREADADDRESSB_A0_B = MIREQUESTRAMREADADDRESSB_A0_B; // net ID: MIREQUESTRAMREADADDRESSB lsb: 0  msb: 0 OUTPUT
			this->MIREQUESTRAMREADENABLE_A0_B = MIREQUESTRAMREADENABLE_A0_B; // net ID: MIREQUESTRAMREADENABLE lsb: 0  msb: 0 OUTPUT
			this->MIREQUESTRAMWRITEADDRESSA_A0_B = MIREQUESTRAMWRITEADDRESSA_A0_B; // net ID: MIREQUESTRAMWRITEADDRESSA lsb: 0  msb: 0 OUTPUT
			this->MIREQUESTRAMWRITEADDRESSB_A0_B = MIREQUESTRAMWRITEADDRESSB_A0_B; // net ID: MIREQUESTRAMWRITEADDRESSB lsb: 0  msb: 0 OUTPUT
			this->MIREQUESTRAMWRITEDATA_A0_B = MIREQUESTRAMWRITEDATA_A0_B; // net ID: MIREQUESTRAMWRITEDATA lsb: 0  msb: 0 OUTPUT
			this->MIREQUESTRAMWRITEENABLE_A0_B = MIREQUESTRAMWRITEENABLE_A0_B; // net ID: MIREQUESTRAMWRITEENABLE lsb: 0  msb: 0 OUTPUT
			this->PCIECQNPREQCOUNT_A0_B = PCIECQNPREQCOUNT_A0_B; // net ID: PCIECQNPREQCOUNT lsb: 0  msb: 0 OUTPUT
			this->PCIERQSEQNUM_A0_B = PCIERQSEQNUM_A0_B; // net ID: PCIERQSEQNUM lsb: 0  msb: 0 OUTPUT
			this->PCIERQSEQNUMVLD_A0_B = PCIERQSEQNUMVLD_A0_B; // net ID: PCIERQSEQNUMVLD lsb: 0  msb: 0 OUTPUT
			this->PCIERQTAG_A0_B = PCIERQTAG_A0_B; // net ID: PCIERQTAG lsb: 0  msb: 0 OUTPUT
			this->PCIERQTAGAV_A0_B = PCIERQTAGAV_A0_B; // net ID: PCIERQTAGAV lsb: 0  msb: 0 OUTPUT
			this->PCIERQTAGVLD_A0_B = PCIERQTAGVLD_A0_B; // net ID: PCIERQTAGVLD lsb: 0  msb: 0 OUTPUT
			this->PCIETFCNPDAV_A0_B = PCIETFCNPDAV_A0_B; // net ID: PCIETFCNPDAV lsb: 0  msb: 0 OUTPUT
			this->PCIETFCNPHAV_A0_B = PCIETFCNPHAV_A0_B; // net ID: PCIETFCNPHAV lsb: 0  msb: 0 OUTPUT
			this->PIPERX0EQCONTROL_A0_B = PIPERX0EQCONTROL_A0_B; // net ID: PIPERX0EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPERX0EQLPLFFS_A0_B = PIPERX0EQLPLFFS_A0_B; // net ID: PIPERX0EQLPLFFS lsb: 0  msb: 0 OUTPUT
			this->PIPERX0EQLPTXPRESET_A0_B = PIPERX0EQLPTXPRESET_A0_B; // net ID: PIPERX0EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX0EQPRESET_A0_B = PIPERX0EQPRESET_A0_B; // net ID: PIPERX0EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX0POLARITY_A0_B = PIPERX0POLARITY_A0_B; // net ID: PIPERX0POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX1EQCONTROL_A0_B = PIPERX1EQCONTROL_A0_B; // net ID: PIPERX1EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPERX1EQLPLFFS_A0_B = PIPERX1EQLPLFFS_A0_B; // net ID: PIPERX1EQLPLFFS lsb: 0  msb: 0 OUTPUT
			this->PIPERX1EQLPTXPRESET_A0_B = PIPERX1EQLPTXPRESET_A0_B; // net ID: PIPERX1EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX1EQPRESET_A0_B = PIPERX1EQPRESET_A0_B; // net ID: PIPERX1EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX1POLARITY_A0_B = PIPERX1POLARITY_A0_B; // net ID: PIPERX1POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX2EQCONTROL_A0_B = PIPERX2EQCONTROL_A0_B; // net ID: PIPERX2EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPERX2EQLPLFFS_A0_B = PIPERX2EQLPLFFS_A0_B; // net ID: PIPERX2EQLPLFFS lsb: 0  msb: 0 OUTPUT
			this->PIPERX2EQLPTXPRESET_A0_B = PIPERX2EQLPTXPRESET_A0_B; // net ID: PIPERX2EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX2EQPRESET_A0_B = PIPERX2EQPRESET_A0_B; // net ID: PIPERX2EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX2POLARITY_A0_B = PIPERX2POLARITY_A0_B; // net ID: PIPERX2POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX3EQCONTROL_A0_B = PIPERX3EQCONTROL_A0_B; // net ID: PIPERX3EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPERX3EQLPLFFS_A0_B = PIPERX3EQLPLFFS_A0_B; // net ID: PIPERX3EQLPLFFS lsb: 0  msb: 0 OUTPUT
			this->PIPERX3EQLPTXPRESET_A0_B = PIPERX3EQLPTXPRESET_A0_B; // net ID: PIPERX3EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX3EQPRESET_A0_B = PIPERX3EQPRESET_A0_B; // net ID: PIPERX3EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX3POLARITY_A0_B = PIPERX3POLARITY_A0_B; // net ID: PIPERX3POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX4EQCONTROL_A0_B = PIPERX4EQCONTROL_A0_B; // net ID: PIPERX4EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPERX4EQLPLFFS_A0_B = PIPERX4EQLPLFFS_A0_B; // net ID: PIPERX4EQLPLFFS lsb: 0  msb: 0 OUTPUT
			this->PIPERX4EQLPTXPRESET_A0_B = PIPERX4EQLPTXPRESET_A0_B; // net ID: PIPERX4EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX4EQPRESET_A0_B = PIPERX4EQPRESET_A0_B; // net ID: PIPERX4EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX4POLARITY_A0_B = PIPERX4POLARITY_A0_B; // net ID: PIPERX4POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX5EQCONTROL_A0_B = PIPERX5EQCONTROL_A0_B; // net ID: PIPERX5EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPERX5EQLPLFFS_A0_B = PIPERX5EQLPLFFS_A0_B; // net ID: PIPERX5EQLPLFFS lsb: 0  msb: 0 OUTPUT
			this->PIPERX5EQLPTXPRESET_A0_B = PIPERX5EQLPTXPRESET_A0_B; // net ID: PIPERX5EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX5EQPRESET_A0_B = PIPERX5EQPRESET_A0_B; // net ID: PIPERX5EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX5POLARITY_A0_B = PIPERX5POLARITY_A0_B; // net ID: PIPERX5POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX6EQCONTROL_A0_B = PIPERX6EQCONTROL_A0_B; // net ID: PIPERX6EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPERX6EQLPLFFS_A0_B = PIPERX6EQLPLFFS_A0_B; // net ID: PIPERX6EQLPLFFS lsb: 0  msb: 0 OUTPUT
			this->PIPERX6EQLPTXPRESET_A0_B = PIPERX6EQLPTXPRESET_A0_B; // net ID: PIPERX6EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX6EQPRESET_A0_B = PIPERX6EQPRESET_A0_B; // net ID: PIPERX6EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX6POLARITY_A0_B = PIPERX6POLARITY_A0_B; // net ID: PIPERX6POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPERX7EQCONTROL_A0_B = PIPERX7EQCONTROL_A0_B; // net ID: PIPERX7EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPERX7EQLPLFFS_A0_B = PIPERX7EQLPLFFS_A0_B; // net ID: PIPERX7EQLPLFFS lsb: 0  msb: 0 OUTPUT
			this->PIPERX7EQLPTXPRESET_A0_B = PIPERX7EQLPTXPRESET_A0_B; // net ID: PIPERX7EQLPTXPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX7EQPRESET_A0_B = PIPERX7EQPRESET_A0_B; // net ID: PIPERX7EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPERX7POLARITY_A0_B = PIPERX7POLARITY_A0_B; // net ID: PIPERX7POLARITY lsb: 0  msb: 0 OUTPUT
			this->PIPETX0CHARISK_A0_B = PIPETX0CHARISK_A0_B; // net ID: PIPETX0CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX0COMPLIANCE_A0_B = PIPETX0COMPLIANCE_A0_B; // net ID: PIPETX0COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX0DATA_A0_B = PIPETX0DATA_A0_B; // net ID: PIPETX0DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX0DATAVALID_A0_B = PIPETX0DATAVALID_A0_B; // net ID: PIPETX0DATAVALID lsb: 0  msb: 0 OUTPUT
			this->PIPETX0ELECIDLE_A0_B = PIPETX0ELECIDLE_A0_B; // net ID: PIPETX0ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX0EQCONTROL_A0_B = PIPETX0EQCONTROL_A0_B; // net ID: PIPETX0EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPETX0EQDEEMPH_A0_B = PIPETX0EQDEEMPH_A0_B; // net ID: PIPETX0EQDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETX0EQPRESET_A0_B = PIPETX0EQPRESET_A0_B; // net ID: PIPETX0EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPETX0POWERDOWN_A0_B = PIPETX0POWERDOWN_A0_B; // net ID: PIPETX0POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX0STARTBLOCK_A0_B = PIPETX0STARTBLOCK_A0_B; // net ID: PIPETX0STARTBLOCK lsb: 0  msb: 0 OUTPUT
			this->PIPETX0SYNCHEADER_A0_B = PIPETX0SYNCHEADER_A0_B; // net ID: PIPETX0SYNCHEADER lsb: 0  msb: 0 OUTPUT
			this->PIPETX1CHARISK_A0_B = PIPETX1CHARISK_A0_B; // net ID: PIPETX1CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX1COMPLIANCE_A0_B = PIPETX1COMPLIANCE_A0_B; // net ID: PIPETX1COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX1DATA_A0_B = PIPETX1DATA_A0_B; // net ID: PIPETX1DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX1DATAVALID_A0_B = PIPETX1DATAVALID_A0_B; // net ID: PIPETX1DATAVALID lsb: 0  msb: 0 OUTPUT
			this->PIPETX1ELECIDLE_A0_B = PIPETX1ELECIDLE_A0_B; // net ID: PIPETX1ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX1EQCONTROL_A0_B = PIPETX1EQCONTROL_A0_B; // net ID: PIPETX1EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPETX1EQDEEMPH_A0_B = PIPETX1EQDEEMPH_A0_B; // net ID: PIPETX1EQDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETX1EQPRESET_A0_B = PIPETX1EQPRESET_A0_B; // net ID: PIPETX1EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPETX1POWERDOWN_A0_B = PIPETX1POWERDOWN_A0_B; // net ID: PIPETX1POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX1STARTBLOCK_A0_B = PIPETX1STARTBLOCK_A0_B; // net ID: PIPETX1STARTBLOCK lsb: 0  msb: 0 OUTPUT
			this->PIPETX1SYNCHEADER_A0_B = PIPETX1SYNCHEADER_A0_B; // net ID: PIPETX1SYNCHEADER lsb: 0  msb: 0 OUTPUT
			this->PIPETX2CHARISK_A0_B = PIPETX2CHARISK_A0_B; // net ID: PIPETX2CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX2COMPLIANCE_A0_B = PIPETX2COMPLIANCE_A0_B; // net ID: PIPETX2COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX2DATA_A0_B = PIPETX2DATA_A0_B; // net ID: PIPETX2DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX2DATAVALID_A0_B = PIPETX2DATAVALID_A0_B; // net ID: PIPETX2DATAVALID lsb: 0  msb: 0 OUTPUT
			this->PIPETX2ELECIDLE_A0_B = PIPETX2ELECIDLE_A0_B; // net ID: PIPETX2ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX2EQCONTROL_A0_B = PIPETX2EQCONTROL_A0_B; // net ID: PIPETX2EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPETX2EQDEEMPH_A0_B = PIPETX2EQDEEMPH_A0_B; // net ID: PIPETX2EQDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETX2EQPRESET_A0_B = PIPETX2EQPRESET_A0_B; // net ID: PIPETX2EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPETX2POWERDOWN_A0_B = PIPETX2POWERDOWN_A0_B; // net ID: PIPETX2POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX2STARTBLOCK_A0_B = PIPETX2STARTBLOCK_A0_B; // net ID: PIPETX2STARTBLOCK lsb: 0  msb: 0 OUTPUT
			this->PIPETX2SYNCHEADER_A0_B = PIPETX2SYNCHEADER_A0_B; // net ID: PIPETX2SYNCHEADER lsb: 0  msb: 0 OUTPUT
			this->PIPETX3CHARISK_A0_B = PIPETX3CHARISK_A0_B; // net ID: PIPETX3CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX3COMPLIANCE_A0_B = PIPETX3COMPLIANCE_A0_B; // net ID: PIPETX3COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX3DATA_A0_B = PIPETX3DATA_A0_B; // net ID: PIPETX3DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX3DATAVALID_A0_B = PIPETX3DATAVALID_A0_B; // net ID: PIPETX3DATAVALID lsb: 0  msb: 0 OUTPUT
			this->PIPETX3ELECIDLE_A0_B = PIPETX3ELECIDLE_A0_B; // net ID: PIPETX3ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX3EQCONTROL_A0_B = PIPETX3EQCONTROL_A0_B; // net ID: PIPETX3EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPETX3EQDEEMPH_A0_B = PIPETX3EQDEEMPH_A0_B; // net ID: PIPETX3EQDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETX3EQPRESET_A0_B = PIPETX3EQPRESET_A0_B; // net ID: PIPETX3EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPETX3POWERDOWN_A0_B = PIPETX3POWERDOWN_A0_B; // net ID: PIPETX3POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX3STARTBLOCK_A0_B = PIPETX3STARTBLOCK_A0_B; // net ID: PIPETX3STARTBLOCK lsb: 0  msb: 0 OUTPUT
			this->PIPETX3SYNCHEADER_A0_B = PIPETX3SYNCHEADER_A0_B; // net ID: PIPETX3SYNCHEADER lsb: 0  msb: 0 OUTPUT
			this->PIPETX4CHARISK_A0_B = PIPETX4CHARISK_A0_B; // net ID: PIPETX4CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX4COMPLIANCE_A0_B = PIPETX4COMPLIANCE_A0_B; // net ID: PIPETX4COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX4DATA_A0_B = PIPETX4DATA_A0_B; // net ID: PIPETX4DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX4DATAVALID_A0_B = PIPETX4DATAVALID_A0_B; // net ID: PIPETX4DATAVALID lsb: 0  msb: 0 OUTPUT
			this->PIPETX4ELECIDLE_A0_B = PIPETX4ELECIDLE_A0_B; // net ID: PIPETX4ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX4EQCONTROL_A0_B = PIPETX4EQCONTROL_A0_B; // net ID: PIPETX4EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPETX4EQDEEMPH_A0_B = PIPETX4EQDEEMPH_A0_B; // net ID: PIPETX4EQDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETX4EQPRESET_A0_B = PIPETX4EQPRESET_A0_B; // net ID: PIPETX4EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPETX4POWERDOWN_A0_B = PIPETX4POWERDOWN_A0_B; // net ID: PIPETX4POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX4STARTBLOCK_A0_B = PIPETX4STARTBLOCK_A0_B; // net ID: PIPETX4STARTBLOCK lsb: 0  msb: 0 OUTPUT
			this->PIPETX4SYNCHEADER_A0_B = PIPETX4SYNCHEADER_A0_B; // net ID: PIPETX4SYNCHEADER lsb: 0  msb: 0 OUTPUT
			this->PIPETX5CHARISK_A0_B = PIPETX5CHARISK_A0_B; // net ID: PIPETX5CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX5COMPLIANCE_A0_B = PIPETX5COMPLIANCE_A0_B; // net ID: PIPETX5COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX5DATA_A0_B = PIPETX5DATA_A0_B; // net ID: PIPETX5DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX5DATAVALID_A0_B = PIPETX5DATAVALID_A0_B; // net ID: PIPETX5DATAVALID lsb: 0  msb: 0 OUTPUT
			this->PIPETX5ELECIDLE_A0_B = PIPETX5ELECIDLE_A0_B; // net ID: PIPETX5ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX5EQCONTROL_A0_B = PIPETX5EQCONTROL_A0_B; // net ID: PIPETX5EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPETX5EQDEEMPH_A0_B = PIPETX5EQDEEMPH_A0_B; // net ID: PIPETX5EQDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETX5EQPRESET_A0_B = PIPETX5EQPRESET_A0_B; // net ID: PIPETX5EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPETX5POWERDOWN_A0_B = PIPETX5POWERDOWN_A0_B; // net ID: PIPETX5POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX5STARTBLOCK_A0_B = PIPETX5STARTBLOCK_A0_B; // net ID: PIPETX5STARTBLOCK lsb: 0  msb: 0 OUTPUT
			this->PIPETX5SYNCHEADER_A0_B = PIPETX5SYNCHEADER_A0_B; // net ID: PIPETX5SYNCHEADER lsb: 0  msb: 0 OUTPUT
			this->PIPETX6CHARISK_A0_B = PIPETX6CHARISK_A0_B; // net ID: PIPETX6CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX6COMPLIANCE_A0_B = PIPETX6COMPLIANCE_A0_B; // net ID: PIPETX6COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX6DATA_A0_B = PIPETX6DATA_A0_B; // net ID: PIPETX6DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX6DATAVALID_A0_B = PIPETX6DATAVALID_A0_B; // net ID: PIPETX6DATAVALID lsb: 0  msb: 0 OUTPUT
			this->PIPETX6ELECIDLE_A0_B = PIPETX6ELECIDLE_A0_B; // net ID: PIPETX6ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX6EQCONTROL_A0_B = PIPETX6EQCONTROL_A0_B; // net ID: PIPETX6EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPETX6EQDEEMPH_A0_B = PIPETX6EQDEEMPH_A0_B; // net ID: PIPETX6EQDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETX6EQPRESET_A0_B = PIPETX6EQPRESET_A0_B; // net ID: PIPETX6EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPETX6POWERDOWN_A0_B = PIPETX6POWERDOWN_A0_B; // net ID: PIPETX6POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX6STARTBLOCK_A0_B = PIPETX6STARTBLOCK_A0_B; // net ID: PIPETX6STARTBLOCK lsb: 0  msb: 0 OUTPUT
			this->PIPETX6SYNCHEADER_A0_B = PIPETX6SYNCHEADER_A0_B; // net ID: PIPETX6SYNCHEADER lsb: 0  msb: 0 OUTPUT
			this->PIPETX7CHARISK_A0_B = PIPETX7CHARISK_A0_B; // net ID: PIPETX7CHARISK lsb: 0  msb: 0 OUTPUT
			this->PIPETX7COMPLIANCE_A0_B = PIPETX7COMPLIANCE_A0_B; // net ID: PIPETX7COMPLIANCE lsb: 0  msb: 0 OUTPUT
			this->PIPETX7DATA_A0_B = PIPETX7DATA_A0_B; // net ID: PIPETX7DATA lsb: 0  msb: 0 OUTPUT
			this->PIPETX7DATAVALID_A0_B = PIPETX7DATAVALID_A0_B; // net ID: PIPETX7DATAVALID lsb: 0  msb: 0 OUTPUT
			this->PIPETX7ELECIDLE_A0_B = PIPETX7ELECIDLE_A0_B; // net ID: PIPETX7ELECIDLE lsb: 0  msb: 0 OUTPUT
			this->PIPETX7EQCONTROL_A0_B = PIPETX7EQCONTROL_A0_B; // net ID: PIPETX7EQCONTROL lsb: 0  msb: 0 OUTPUT
			this->PIPETX7EQDEEMPH_A0_B = PIPETX7EQDEEMPH_A0_B; // net ID: PIPETX7EQDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETX7EQPRESET_A0_B = PIPETX7EQPRESET_A0_B; // net ID: PIPETX7EQPRESET lsb: 0  msb: 0 OUTPUT
			this->PIPETX7POWERDOWN_A0_B = PIPETX7POWERDOWN_A0_B; // net ID: PIPETX7POWERDOWN lsb: 0  msb: 0 OUTPUT
			this->PIPETX7STARTBLOCK_A0_B = PIPETX7STARTBLOCK_A0_B; // net ID: PIPETX7STARTBLOCK lsb: 0  msb: 0 OUTPUT
			this->PIPETX7SYNCHEADER_A0_B = PIPETX7SYNCHEADER_A0_B; // net ID: PIPETX7SYNCHEADER lsb: 0  msb: 0 OUTPUT
			this->PIPETXDEEMPH_A0_B = PIPETXDEEMPH_A0_B; // net ID: PIPETXDEEMPH lsb: 0  msb: 0 OUTPUT
			this->PIPETXMARGIN_A0_B = PIPETXMARGIN_A0_B; // net ID: PIPETXMARGIN lsb: 0  msb: 0 OUTPUT
			this->PIPETXRATE_A0_B = PIPETXRATE_A0_B; // net ID: PIPETXRATE lsb: 0  msb: 0 OUTPUT
			this->PIPETXRCVRDET_A0_B = PIPETXRCVRDET_A0_B; // net ID: PIPETXRCVRDET lsb: 0  msb: 0 OUTPUT
			this->PIPETXRESET_A0_B = PIPETXRESET_A0_B; // net ID: PIPETXRESET lsb: 0  msb: 0 OUTPUT
			this->PIPETXSWING_A0_B = PIPETXSWING_A0_B; // net ID: PIPETXSWING lsb: 0  msb: 0 OUTPUT
			this->PLEQINPROGRESS_A0_B = PLEQINPROGRESS_A0_B; // net ID: PLEQINPROGRESS lsb: 0  msb: 0 OUTPUT
			this->PLEQPHASE_A0_B = PLEQPHASE_A0_B; // net ID: PLEQPHASE lsb: 0  msb: 0 OUTPUT
			this->PLGEN3PCSRXSLIDE_A0_B = PLGEN3PCSRXSLIDE_A0_B; // net ID: PLGEN3PCSRXSLIDE lsb: 0  msb: 0 OUTPUT
			this->SAXISCCTREADY_A0_B = SAXISCCTREADY_A0_B; // net ID: SAXISCCTREADY lsb: 0  msb: 0 OUTPUT
			this->SAXISRQTREADY_A0_B = SAXISRQTREADY_A0_B; // net ID: SAXISRQTREADY lsb: 0  msb: 0 OUTPUT
			this->CFGCONFIGSPACEENABLE_A0_B = CFGCONFIGSPACEENABLE_A0_B; // net ID: CFGCONFIGSPACEENABLE lsb: 0  msb: 0 INPUT
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
			this->CFGDSPORTNUMBER_A0_B = CFGDSPORTNUMBER_A0_B; // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
			this->CFGDSPORTNUMBER_A1_B = CFGDSPORTNUMBER_A1_B; // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
			this->CFGDSPORTNUMBER_A2_B = CFGDSPORTNUMBER_A2_B; // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
			this->CFGDSPORTNUMBER_A3_B = CFGDSPORTNUMBER_A3_B; // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
			this->CFGDSPORTNUMBER_A4_B = CFGDSPORTNUMBER_A4_B; // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
			this->CFGDSPORTNUMBER_A5_B = CFGDSPORTNUMBER_A5_B; // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
			this->CFGDSPORTNUMBER_A6_B = CFGDSPORTNUMBER_A6_B; // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
			this->CFGDSPORTNUMBER_A7_B = CFGDSPORTNUMBER_A7_B; // net ID: CFGDSPORTNUMBER lsb: 0  msb: 7 INPUT
			this->CFGERRCORIN_A0_B = CFGERRCORIN_A0_B; // net ID: CFGERRCORIN lsb: 0  msb: 0 INPUT
			this->CFGERRUNCORIN_A0_B = CFGERRUNCORIN_A0_B; // net ID: CFGERRUNCORIN lsb: 0  msb: 0 INPUT
			this->CFGEXTREADDATA_A0_B = CFGEXTREADDATA_A0_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A1_B = CFGEXTREADDATA_A1_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A2_B = CFGEXTREADDATA_A2_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A3_B = CFGEXTREADDATA_A3_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A4_B = CFGEXTREADDATA_A4_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A5_B = CFGEXTREADDATA_A5_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A6_B = CFGEXTREADDATA_A6_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A7_B = CFGEXTREADDATA_A7_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A8_B = CFGEXTREADDATA_A8_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A9_B = CFGEXTREADDATA_A9_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A10_B = CFGEXTREADDATA_A10_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A11_B = CFGEXTREADDATA_A11_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A12_B = CFGEXTREADDATA_A12_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A13_B = CFGEXTREADDATA_A13_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A14_B = CFGEXTREADDATA_A14_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A15_B = CFGEXTREADDATA_A15_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A16_B = CFGEXTREADDATA_A16_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A17_B = CFGEXTREADDATA_A17_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A18_B = CFGEXTREADDATA_A18_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A19_B = CFGEXTREADDATA_A19_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A20_B = CFGEXTREADDATA_A20_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A21_B = CFGEXTREADDATA_A21_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A22_B = CFGEXTREADDATA_A22_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A23_B = CFGEXTREADDATA_A23_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A24_B = CFGEXTREADDATA_A24_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A25_B = CFGEXTREADDATA_A25_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A26_B = CFGEXTREADDATA_A26_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A27_B = CFGEXTREADDATA_A27_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A28_B = CFGEXTREADDATA_A28_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A29_B = CFGEXTREADDATA_A29_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A30_B = CFGEXTREADDATA_A30_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATA_A31_B = CFGEXTREADDATA_A31_B; // net ID: CFGEXTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGEXTREADDATAVALID_A0_B = CFGEXTREADDATAVALID_A0_B; // net ID: CFGEXTREADDATAVALID lsb: 0  msb: 0 INPUT
			this->CFGFCSEL_A0_B = CFGFCSEL_A0_B; // net ID: CFGFCSEL lsb: 0  msb: 2 INPUT
			this->CFGFCSEL_A1_B = CFGFCSEL_A1_B; // net ID: CFGFCSEL lsb: 0  msb: 2 INPUT
			this->CFGFCSEL_A2_B = CFGFCSEL_A2_B; // net ID: CFGFCSEL lsb: 0  msb: 2 INPUT
			this->CFGFLRDONE_A0_B = CFGFLRDONE_A0_B; // net ID: CFGFLRDONE lsb: 0  msb: 1 INPUT
			this->CFGFLRDONE_A1_B = CFGFLRDONE_A1_B; // net ID: CFGFLRDONE lsb: 0  msb: 1 INPUT
			this->CFGHOTRESETIN_A0_B = CFGHOTRESETIN_A0_B; // net ID: CFGHOTRESETIN lsb: 0  msb: 0 INPUT
			this->CFGINPUTUPDATEREQUEST_A0_B = CFGINPUTUPDATEREQUEST_A0_B; // net ID: CFGINPUTUPDATEREQUEST lsb: 0  msb: 0 INPUT
			this->CFGINTERRUPTINT_A0_B = CFGINTERRUPTINT_A0_B; // net ID: CFGINTERRUPTINT lsb: 0  msb: 3 INPUT
			this->CFGINTERRUPTINT_A1_B = CFGINTERRUPTINT_A1_B; // net ID: CFGINTERRUPTINT lsb: 0  msb: 3 INPUT
			this->CFGINTERRUPTINT_A2_B = CFGINTERRUPTINT_A2_B; // net ID: CFGINTERRUPTINT lsb: 0  msb: 3 INPUT
			this->CFGINTERRUPTINT_A3_B = CFGINTERRUPTINT_A3_B; // net ID: CFGINTERRUPTINT lsb: 0  msb: 3 INPUT
			this->CFGINTERRUPTMSIATTR_A0_B = CFGINTERRUPTMSIATTR_A0_B; // net ID: CFGINTERRUPTMSIATTR lsb: 0  msb: 2 INPUT
			this->CFGINTERRUPTMSIATTR_A1_B = CFGINTERRUPTMSIATTR_A1_B; // net ID: CFGINTERRUPTMSIATTR lsb: 0  msb: 2 INPUT
			this->CFGINTERRUPTMSIATTR_A2_B = CFGINTERRUPTMSIATTR_A2_B; // net ID: CFGINTERRUPTMSIATTR lsb: 0  msb: 2 INPUT
			this->CFGINTERRUPTMSIFUNCTIONNUMBER_A0_B = CFGINTERRUPTMSIFUNCTIONNUMBER_A0_B; // net ID: CFGINTERRUPTMSIFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			this->CFGINTERRUPTMSIFUNCTIONNUMBER_A1_B = CFGINTERRUPTMSIFUNCTIONNUMBER_A1_B; // net ID: CFGINTERRUPTMSIFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			this->CFGINTERRUPTMSIFUNCTIONNUMBER_A2_B = CFGINTERRUPTMSIFUNCTIONNUMBER_A2_B; // net ID: CFGINTERRUPTMSIFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			this->CFGINTERRUPTMSIINT_A0_B = CFGINTERRUPTMSIINT_A0_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A1_B = CFGINTERRUPTMSIINT_A1_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A2_B = CFGINTERRUPTMSIINT_A2_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A3_B = CFGINTERRUPTMSIINT_A3_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A4_B = CFGINTERRUPTMSIINT_A4_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A5_B = CFGINTERRUPTMSIINT_A5_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A6_B = CFGINTERRUPTMSIINT_A6_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A7_B = CFGINTERRUPTMSIINT_A7_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A8_B = CFGINTERRUPTMSIINT_A8_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A9_B = CFGINTERRUPTMSIINT_A9_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A10_B = CFGINTERRUPTMSIINT_A10_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A11_B = CFGINTERRUPTMSIINT_A11_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A12_B = CFGINTERRUPTMSIINT_A12_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A13_B = CFGINTERRUPTMSIINT_A13_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A14_B = CFGINTERRUPTMSIINT_A14_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A15_B = CFGINTERRUPTMSIINT_A15_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A16_B = CFGINTERRUPTMSIINT_A16_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A17_B = CFGINTERRUPTMSIINT_A17_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A18_B = CFGINTERRUPTMSIINT_A18_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A19_B = CFGINTERRUPTMSIINT_A19_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A20_B = CFGINTERRUPTMSIINT_A20_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A21_B = CFGINTERRUPTMSIINT_A21_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A22_B = CFGINTERRUPTMSIINT_A22_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A23_B = CFGINTERRUPTMSIINT_A23_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A24_B = CFGINTERRUPTMSIINT_A24_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A25_B = CFGINTERRUPTMSIINT_A25_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A26_B = CFGINTERRUPTMSIINT_A26_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A27_B = CFGINTERRUPTMSIINT_A27_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A28_B = CFGINTERRUPTMSIINT_A28_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A29_B = CFGINTERRUPTMSIINT_A29_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A30_B = CFGINTERRUPTMSIINT_A30_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIINT_A31_B = CFGINTERRUPTMSIINT_A31_B; // net ID: CFGINTERRUPTMSIINT lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A0_B = CFGINTERRUPTMSIPENDINGSTATUS_A0_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A1_B = CFGINTERRUPTMSIPENDINGSTATUS_A1_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A2_B = CFGINTERRUPTMSIPENDINGSTATUS_A2_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A3_B = CFGINTERRUPTMSIPENDINGSTATUS_A3_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A4_B = CFGINTERRUPTMSIPENDINGSTATUS_A4_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A5_B = CFGINTERRUPTMSIPENDINGSTATUS_A5_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A6_B = CFGINTERRUPTMSIPENDINGSTATUS_A6_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A7_B = CFGINTERRUPTMSIPENDINGSTATUS_A7_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A8_B = CFGINTERRUPTMSIPENDINGSTATUS_A8_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A9_B = CFGINTERRUPTMSIPENDINGSTATUS_A9_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A10_B = CFGINTERRUPTMSIPENDINGSTATUS_A10_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A11_B = CFGINTERRUPTMSIPENDINGSTATUS_A11_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A12_B = CFGINTERRUPTMSIPENDINGSTATUS_A12_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A13_B = CFGINTERRUPTMSIPENDINGSTATUS_A13_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A14_B = CFGINTERRUPTMSIPENDINGSTATUS_A14_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A15_B = CFGINTERRUPTMSIPENDINGSTATUS_A15_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A16_B = CFGINTERRUPTMSIPENDINGSTATUS_A16_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A17_B = CFGINTERRUPTMSIPENDINGSTATUS_A17_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A18_B = CFGINTERRUPTMSIPENDINGSTATUS_A18_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A19_B = CFGINTERRUPTMSIPENDINGSTATUS_A19_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A20_B = CFGINTERRUPTMSIPENDINGSTATUS_A20_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A21_B = CFGINTERRUPTMSIPENDINGSTATUS_A21_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A22_B = CFGINTERRUPTMSIPENDINGSTATUS_A22_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A23_B = CFGINTERRUPTMSIPENDINGSTATUS_A23_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A24_B = CFGINTERRUPTMSIPENDINGSTATUS_A24_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A25_B = CFGINTERRUPTMSIPENDINGSTATUS_A25_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A26_B = CFGINTERRUPTMSIPENDINGSTATUS_A26_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A27_B = CFGINTERRUPTMSIPENDINGSTATUS_A27_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A28_B = CFGINTERRUPTMSIPENDINGSTATUS_A28_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A29_B = CFGINTERRUPTMSIPENDINGSTATUS_A29_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A30_B = CFGINTERRUPTMSIPENDINGSTATUS_A30_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A31_B = CFGINTERRUPTMSIPENDINGSTATUS_A31_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A32_B = CFGINTERRUPTMSIPENDINGSTATUS_A32_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A33_B = CFGINTERRUPTMSIPENDINGSTATUS_A33_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A34_B = CFGINTERRUPTMSIPENDINGSTATUS_A34_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A35_B = CFGINTERRUPTMSIPENDINGSTATUS_A35_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A36_B = CFGINTERRUPTMSIPENDINGSTATUS_A36_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A37_B = CFGINTERRUPTMSIPENDINGSTATUS_A37_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A38_B = CFGINTERRUPTMSIPENDINGSTATUS_A38_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A39_B = CFGINTERRUPTMSIPENDINGSTATUS_A39_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A40_B = CFGINTERRUPTMSIPENDINGSTATUS_A40_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A41_B = CFGINTERRUPTMSIPENDINGSTATUS_A41_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A42_B = CFGINTERRUPTMSIPENDINGSTATUS_A42_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A43_B = CFGINTERRUPTMSIPENDINGSTATUS_A43_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A44_B = CFGINTERRUPTMSIPENDINGSTATUS_A44_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A45_B = CFGINTERRUPTMSIPENDINGSTATUS_A45_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A46_B = CFGINTERRUPTMSIPENDINGSTATUS_A46_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A47_B = CFGINTERRUPTMSIPENDINGSTATUS_A47_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A48_B = CFGINTERRUPTMSIPENDINGSTATUS_A48_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A49_B = CFGINTERRUPTMSIPENDINGSTATUS_A49_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A50_B = CFGINTERRUPTMSIPENDINGSTATUS_A50_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A51_B = CFGINTERRUPTMSIPENDINGSTATUS_A51_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A52_B = CFGINTERRUPTMSIPENDINGSTATUS_A52_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A53_B = CFGINTERRUPTMSIPENDINGSTATUS_A53_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A54_B = CFGINTERRUPTMSIPENDINGSTATUS_A54_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A55_B = CFGINTERRUPTMSIPENDINGSTATUS_A55_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A56_B = CFGINTERRUPTMSIPENDINGSTATUS_A56_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A57_B = CFGINTERRUPTMSIPENDINGSTATUS_A57_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A58_B = CFGINTERRUPTMSIPENDINGSTATUS_A58_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A59_B = CFGINTERRUPTMSIPENDINGSTATUS_A59_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A60_B = CFGINTERRUPTMSIPENDINGSTATUS_A60_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A61_B = CFGINTERRUPTMSIPENDINGSTATUS_A61_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A62_B = CFGINTERRUPTMSIPENDINGSTATUS_A62_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIPENDINGSTATUS_A63_B = CFGINTERRUPTMSIPENDINGSTATUS_A63_B; // net ID: CFGINTERRUPTMSIPENDINGSTATUS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSISELECT_A0_B = CFGINTERRUPTMSISELECT_A0_B; // net ID: CFGINTERRUPTMSISELECT lsb: 0  msb: 3 INPUT
			this->CFGINTERRUPTMSISELECT_A1_B = CFGINTERRUPTMSISELECT_A1_B; // net ID: CFGINTERRUPTMSISELECT lsb: 0  msb: 3 INPUT
			this->CFGINTERRUPTMSISELECT_A2_B = CFGINTERRUPTMSISELECT_A2_B; // net ID: CFGINTERRUPTMSISELECT lsb: 0  msb: 3 INPUT
			this->CFGINTERRUPTMSISELECT_A3_B = CFGINTERRUPTMSISELECT_A3_B; // net ID: CFGINTERRUPTMSISELECT lsb: 0  msb: 3 INPUT
			this->CFGINTERRUPTMSITPHPRESENT_A0_B = CFGINTERRUPTMSITPHPRESENT_A0_B; // net ID: CFGINTERRUPTMSITPHPRESENT lsb: 0  msb: 0 INPUT
			this->CFGINTERRUPTMSITPHSTTAG_A0_B = CFGINTERRUPTMSITPHSTTAG_A0_B; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			this->CFGINTERRUPTMSITPHSTTAG_A1_B = CFGINTERRUPTMSITPHSTTAG_A1_B; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			this->CFGINTERRUPTMSITPHSTTAG_A2_B = CFGINTERRUPTMSITPHSTTAG_A2_B; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			this->CFGINTERRUPTMSITPHSTTAG_A3_B = CFGINTERRUPTMSITPHSTTAG_A3_B; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			this->CFGINTERRUPTMSITPHSTTAG_A4_B = CFGINTERRUPTMSITPHSTTAG_A4_B; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			this->CFGINTERRUPTMSITPHSTTAG_A5_B = CFGINTERRUPTMSITPHSTTAG_A5_B; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			this->CFGINTERRUPTMSITPHSTTAG_A6_B = CFGINTERRUPTMSITPHSTTAG_A6_B; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			this->CFGINTERRUPTMSITPHSTTAG_A7_B = CFGINTERRUPTMSITPHSTTAG_A7_B; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			this->CFGINTERRUPTMSITPHSTTAG_A8_B = CFGINTERRUPTMSITPHSTTAG_A8_B; // net ID: CFGINTERRUPTMSITPHSTTAG lsb: 0  msb: 8 INPUT
			this->CFGINTERRUPTMSITPHTYPE_A0_B = CFGINTERRUPTMSITPHTYPE_A0_B; // net ID: CFGINTERRUPTMSITPHTYPE lsb: 0  msb: 1 INPUT
			this->CFGINTERRUPTMSITPHTYPE_A1_B = CFGINTERRUPTMSITPHTYPE_A1_B; // net ID: CFGINTERRUPTMSITPHTYPE lsb: 0  msb: 1 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A0_B = CFGINTERRUPTMSIXADDRESS_A0_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A1_B = CFGINTERRUPTMSIXADDRESS_A1_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A2_B = CFGINTERRUPTMSIXADDRESS_A2_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A3_B = CFGINTERRUPTMSIXADDRESS_A3_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A4_B = CFGINTERRUPTMSIXADDRESS_A4_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A5_B = CFGINTERRUPTMSIXADDRESS_A5_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A6_B = CFGINTERRUPTMSIXADDRESS_A6_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A7_B = CFGINTERRUPTMSIXADDRESS_A7_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A8_B = CFGINTERRUPTMSIXADDRESS_A8_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A9_B = CFGINTERRUPTMSIXADDRESS_A9_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A10_B = CFGINTERRUPTMSIXADDRESS_A10_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A11_B = CFGINTERRUPTMSIXADDRESS_A11_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A12_B = CFGINTERRUPTMSIXADDRESS_A12_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A13_B = CFGINTERRUPTMSIXADDRESS_A13_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A14_B = CFGINTERRUPTMSIXADDRESS_A14_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A15_B = CFGINTERRUPTMSIXADDRESS_A15_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A16_B = CFGINTERRUPTMSIXADDRESS_A16_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A17_B = CFGINTERRUPTMSIXADDRESS_A17_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A18_B = CFGINTERRUPTMSIXADDRESS_A18_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A19_B = CFGINTERRUPTMSIXADDRESS_A19_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A20_B = CFGINTERRUPTMSIXADDRESS_A20_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A21_B = CFGINTERRUPTMSIXADDRESS_A21_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A22_B = CFGINTERRUPTMSIXADDRESS_A22_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A23_B = CFGINTERRUPTMSIXADDRESS_A23_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A24_B = CFGINTERRUPTMSIXADDRESS_A24_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A25_B = CFGINTERRUPTMSIXADDRESS_A25_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A26_B = CFGINTERRUPTMSIXADDRESS_A26_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A27_B = CFGINTERRUPTMSIXADDRESS_A27_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A28_B = CFGINTERRUPTMSIXADDRESS_A28_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A29_B = CFGINTERRUPTMSIXADDRESS_A29_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A30_B = CFGINTERRUPTMSIXADDRESS_A30_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A31_B = CFGINTERRUPTMSIXADDRESS_A31_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A32_B = CFGINTERRUPTMSIXADDRESS_A32_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A33_B = CFGINTERRUPTMSIXADDRESS_A33_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A34_B = CFGINTERRUPTMSIXADDRESS_A34_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A35_B = CFGINTERRUPTMSIXADDRESS_A35_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A36_B = CFGINTERRUPTMSIXADDRESS_A36_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A37_B = CFGINTERRUPTMSIXADDRESS_A37_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A38_B = CFGINTERRUPTMSIXADDRESS_A38_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A39_B = CFGINTERRUPTMSIXADDRESS_A39_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A40_B = CFGINTERRUPTMSIXADDRESS_A40_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A41_B = CFGINTERRUPTMSIXADDRESS_A41_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A42_B = CFGINTERRUPTMSIXADDRESS_A42_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A43_B = CFGINTERRUPTMSIXADDRESS_A43_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A44_B = CFGINTERRUPTMSIXADDRESS_A44_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A45_B = CFGINTERRUPTMSIXADDRESS_A45_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A46_B = CFGINTERRUPTMSIXADDRESS_A46_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A47_B = CFGINTERRUPTMSIXADDRESS_A47_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A48_B = CFGINTERRUPTMSIXADDRESS_A48_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A49_B = CFGINTERRUPTMSIXADDRESS_A49_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A50_B = CFGINTERRUPTMSIXADDRESS_A50_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A51_B = CFGINTERRUPTMSIXADDRESS_A51_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A52_B = CFGINTERRUPTMSIXADDRESS_A52_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A53_B = CFGINTERRUPTMSIXADDRESS_A53_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A54_B = CFGINTERRUPTMSIXADDRESS_A54_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A55_B = CFGINTERRUPTMSIXADDRESS_A55_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A56_B = CFGINTERRUPTMSIXADDRESS_A56_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A57_B = CFGINTERRUPTMSIXADDRESS_A57_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A58_B = CFGINTERRUPTMSIXADDRESS_A58_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A59_B = CFGINTERRUPTMSIXADDRESS_A59_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A60_B = CFGINTERRUPTMSIXADDRESS_A60_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A61_B = CFGINTERRUPTMSIXADDRESS_A61_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A62_B = CFGINTERRUPTMSIXADDRESS_A62_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXADDRESS_A63_B = CFGINTERRUPTMSIXADDRESS_A63_B; // net ID: CFGINTERRUPTMSIXADDRESS lsb: 0  msb: 63 INPUT
			this->CFGINTERRUPTMSIXDATA_A0_B = CFGINTERRUPTMSIXDATA_A0_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A1_B = CFGINTERRUPTMSIXDATA_A1_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A2_B = CFGINTERRUPTMSIXDATA_A2_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A3_B = CFGINTERRUPTMSIXDATA_A3_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A4_B = CFGINTERRUPTMSIXDATA_A4_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A5_B = CFGINTERRUPTMSIXDATA_A5_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A6_B = CFGINTERRUPTMSIXDATA_A6_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A7_B = CFGINTERRUPTMSIXDATA_A7_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A8_B = CFGINTERRUPTMSIXDATA_A8_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A9_B = CFGINTERRUPTMSIXDATA_A9_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A10_B = CFGINTERRUPTMSIXDATA_A10_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A11_B = CFGINTERRUPTMSIXDATA_A11_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A12_B = CFGINTERRUPTMSIXDATA_A12_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A13_B = CFGINTERRUPTMSIXDATA_A13_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A14_B = CFGINTERRUPTMSIXDATA_A14_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A15_B = CFGINTERRUPTMSIXDATA_A15_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A16_B = CFGINTERRUPTMSIXDATA_A16_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A17_B = CFGINTERRUPTMSIXDATA_A17_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A18_B = CFGINTERRUPTMSIXDATA_A18_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A19_B = CFGINTERRUPTMSIXDATA_A19_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A20_B = CFGINTERRUPTMSIXDATA_A20_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A21_B = CFGINTERRUPTMSIXDATA_A21_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A22_B = CFGINTERRUPTMSIXDATA_A22_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A23_B = CFGINTERRUPTMSIXDATA_A23_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A24_B = CFGINTERRUPTMSIXDATA_A24_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A25_B = CFGINTERRUPTMSIXDATA_A25_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A26_B = CFGINTERRUPTMSIXDATA_A26_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A27_B = CFGINTERRUPTMSIXDATA_A27_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A28_B = CFGINTERRUPTMSIXDATA_A28_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A29_B = CFGINTERRUPTMSIXDATA_A29_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A30_B = CFGINTERRUPTMSIXDATA_A30_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXDATA_A31_B = CFGINTERRUPTMSIXDATA_A31_B; // net ID: CFGINTERRUPTMSIXDATA lsb: 0  msb: 31 INPUT
			this->CFGINTERRUPTMSIXINT_A0_B = CFGINTERRUPTMSIXINT_A0_B; // net ID: CFGINTERRUPTMSIXINT lsb: 0  msb: 0 INPUT
			this->CFGINTERRUPTPENDING_A0_B = CFGINTERRUPTPENDING_A0_B; // net ID: CFGINTERRUPTPENDING lsb: 0  msb: 1 INPUT
			this->CFGINTERRUPTPENDING_A1_B = CFGINTERRUPTPENDING_A1_B; // net ID: CFGINTERRUPTPENDING lsb: 0  msb: 1 INPUT
			this->CFGLINKTRAININGENABLE_A0_B = CFGLINKTRAININGENABLE_A0_B; // net ID: CFGLINKTRAININGENABLE lsb: 0  msb: 0 INPUT
			this->CFGMCUPDATEREQUEST_A0_B = CFGMCUPDATEREQUEST_A0_B; // net ID: CFGMCUPDATEREQUEST lsb: 0  msb: 0 INPUT
			this->CFGMGMTADDR_A0_B = CFGMGMTADDR_A0_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTADDR_A1_B = CFGMGMTADDR_A1_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTADDR_A2_B = CFGMGMTADDR_A2_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTADDR_A3_B = CFGMGMTADDR_A3_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTADDR_A4_B = CFGMGMTADDR_A4_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTADDR_A5_B = CFGMGMTADDR_A5_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTADDR_A6_B = CFGMGMTADDR_A6_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTADDR_A7_B = CFGMGMTADDR_A7_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTADDR_A8_B = CFGMGMTADDR_A8_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTADDR_A9_B = CFGMGMTADDR_A9_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTADDR_A10_B = CFGMGMTADDR_A10_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTADDR_A11_B = CFGMGMTADDR_A11_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTADDR_A12_B = CFGMGMTADDR_A12_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTADDR_A13_B = CFGMGMTADDR_A13_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTADDR_A14_B = CFGMGMTADDR_A14_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTADDR_A15_B = CFGMGMTADDR_A15_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTADDR_A16_B = CFGMGMTADDR_A16_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTADDR_A17_B = CFGMGMTADDR_A17_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTADDR_A18_B = CFGMGMTADDR_A18_B; // net ID: CFGMGMTADDR lsb: 0  msb: 18 INPUT
			this->CFGMGMTBYTEENABLE_A0_B = CFGMGMTBYTEENABLE_A0_B; // net ID: CFGMGMTBYTEENABLE lsb: 0  msb: 3 INPUT
			this->CFGMGMTBYTEENABLE_A1_B = CFGMGMTBYTEENABLE_A1_B; // net ID: CFGMGMTBYTEENABLE lsb: 0  msb: 3 INPUT
			this->CFGMGMTBYTEENABLE_A2_B = CFGMGMTBYTEENABLE_A2_B; // net ID: CFGMGMTBYTEENABLE lsb: 0  msb: 3 INPUT
			this->CFGMGMTBYTEENABLE_A3_B = CFGMGMTBYTEENABLE_A3_B; // net ID: CFGMGMTBYTEENABLE lsb: 0  msb: 3 INPUT
			this->CFGMGMTREAD_A0_B = CFGMGMTREAD_A0_B; // net ID: CFGMGMTREAD lsb: 0  msb: 0 INPUT
			this->CFGMGMTTYPE1CFGREGACCESS_A0_B = CFGMGMTTYPE1CFGREGACCESS_A0_B; // net ID: CFGMGMTTYPE1CFGREGACCESS lsb: 0  msb: 0 INPUT
			this->CFGMGMTWRITE_A0_B = CFGMGMTWRITE_A0_B; // net ID: CFGMGMTWRITE lsb: 0  msb: 0 INPUT
			this->CFGMGMTWRITEDATA_A0_B = CFGMGMTWRITEDATA_A0_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A1_B = CFGMGMTWRITEDATA_A1_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A2_B = CFGMGMTWRITEDATA_A2_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A3_B = CFGMGMTWRITEDATA_A3_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A4_B = CFGMGMTWRITEDATA_A4_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A5_B = CFGMGMTWRITEDATA_A5_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A6_B = CFGMGMTWRITEDATA_A6_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A7_B = CFGMGMTWRITEDATA_A7_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A8_B = CFGMGMTWRITEDATA_A8_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A9_B = CFGMGMTWRITEDATA_A9_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A10_B = CFGMGMTWRITEDATA_A10_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A11_B = CFGMGMTWRITEDATA_A11_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A12_B = CFGMGMTWRITEDATA_A12_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A13_B = CFGMGMTWRITEDATA_A13_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A14_B = CFGMGMTWRITEDATA_A14_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A15_B = CFGMGMTWRITEDATA_A15_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A16_B = CFGMGMTWRITEDATA_A16_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A17_B = CFGMGMTWRITEDATA_A17_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A18_B = CFGMGMTWRITEDATA_A18_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A19_B = CFGMGMTWRITEDATA_A19_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A20_B = CFGMGMTWRITEDATA_A20_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A21_B = CFGMGMTWRITEDATA_A21_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A22_B = CFGMGMTWRITEDATA_A22_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A23_B = CFGMGMTWRITEDATA_A23_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A24_B = CFGMGMTWRITEDATA_A24_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A25_B = CFGMGMTWRITEDATA_A25_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A26_B = CFGMGMTWRITEDATA_A26_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A27_B = CFGMGMTWRITEDATA_A27_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A28_B = CFGMGMTWRITEDATA_A28_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A29_B = CFGMGMTWRITEDATA_A29_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A30_B = CFGMGMTWRITEDATA_A30_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMGMTWRITEDATA_A31_B = CFGMGMTWRITEDATA_A31_B; // net ID: CFGMGMTWRITEDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMIT_A0_B = CFGMSGTRANSMIT_A0_B; // net ID: CFGMSGTRANSMIT lsb: 0  msb: 0 INPUT
			this->CFGMSGTRANSMITDATA_A0_B = CFGMSGTRANSMITDATA_A0_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A1_B = CFGMSGTRANSMITDATA_A1_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A2_B = CFGMSGTRANSMITDATA_A2_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A3_B = CFGMSGTRANSMITDATA_A3_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A4_B = CFGMSGTRANSMITDATA_A4_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A5_B = CFGMSGTRANSMITDATA_A5_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A6_B = CFGMSGTRANSMITDATA_A6_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A7_B = CFGMSGTRANSMITDATA_A7_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A8_B = CFGMSGTRANSMITDATA_A8_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A9_B = CFGMSGTRANSMITDATA_A9_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A10_B = CFGMSGTRANSMITDATA_A10_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A11_B = CFGMSGTRANSMITDATA_A11_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A12_B = CFGMSGTRANSMITDATA_A12_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A13_B = CFGMSGTRANSMITDATA_A13_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A14_B = CFGMSGTRANSMITDATA_A14_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A15_B = CFGMSGTRANSMITDATA_A15_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A16_B = CFGMSGTRANSMITDATA_A16_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A17_B = CFGMSGTRANSMITDATA_A17_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A18_B = CFGMSGTRANSMITDATA_A18_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A19_B = CFGMSGTRANSMITDATA_A19_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A20_B = CFGMSGTRANSMITDATA_A20_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A21_B = CFGMSGTRANSMITDATA_A21_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A22_B = CFGMSGTRANSMITDATA_A22_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A23_B = CFGMSGTRANSMITDATA_A23_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A24_B = CFGMSGTRANSMITDATA_A24_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A25_B = CFGMSGTRANSMITDATA_A25_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A26_B = CFGMSGTRANSMITDATA_A26_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A27_B = CFGMSGTRANSMITDATA_A27_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A28_B = CFGMSGTRANSMITDATA_A28_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A29_B = CFGMSGTRANSMITDATA_A29_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A30_B = CFGMSGTRANSMITDATA_A30_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITDATA_A31_B = CFGMSGTRANSMITDATA_A31_B; // net ID: CFGMSGTRANSMITDATA lsb: 0  msb: 31 INPUT
			this->CFGMSGTRANSMITTYPE_A0_B = CFGMSGTRANSMITTYPE_A0_B; // net ID: CFGMSGTRANSMITTYPE lsb: 0  msb: 2 INPUT
			this->CFGMSGTRANSMITTYPE_A1_B = CFGMSGTRANSMITTYPE_A1_B; // net ID: CFGMSGTRANSMITTYPE lsb: 0  msb: 2 INPUT
			this->CFGMSGTRANSMITTYPE_A2_B = CFGMSGTRANSMITTYPE_A2_B; // net ID: CFGMSGTRANSMITTYPE lsb: 0  msb: 2 INPUT
			this->CFGPERFUNCSTATUSCONTROL_A0_B = CFGPERFUNCSTATUSCONTROL_A0_B; // net ID: CFGPERFUNCSTATUSCONTROL lsb: 0  msb: 2 INPUT
			this->CFGPERFUNCSTATUSCONTROL_A1_B = CFGPERFUNCSTATUSCONTROL_A1_B; // net ID: CFGPERFUNCSTATUSCONTROL lsb: 0  msb: 2 INPUT
			this->CFGPERFUNCSTATUSCONTROL_A2_B = CFGPERFUNCSTATUSCONTROL_A2_B; // net ID: CFGPERFUNCSTATUSCONTROL lsb: 0  msb: 2 INPUT
			this->CFGPERFUNCTIONNUMBER_A0_B = CFGPERFUNCTIONNUMBER_A0_B; // net ID: CFGPERFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			this->CFGPERFUNCTIONNUMBER_A1_B = CFGPERFUNCTIONNUMBER_A1_B; // net ID: CFGPERFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			this->CFGPERFUNCTIONNUMBER_A2_B = CFGPERFUNCTIONNUMBER_A2_B; // net ID: CFGPERFUNCTIONNUMBER lsb: 0  msb: 2 INPUT
			this->CFGPERFUNCTIONOUTPUTREQUEST_A0_B = CFGPERFUNCTIONOUTPUTREQUEST_A0_B; // net ID: CFGPERFUNCTIONOUTPUTREQUEST lsb: 0  msb: 0 INPUT
			this->CFGPOWERSTATECHANGEACK_A0_B = CFGPOWERSTATECHANGEACK_A0_B; // net ID: CFGPOWERSTATECHANGEACK lsb: 0  msb: 0 INPUT
			this->CFGREQPMTRANSITIONL23READY_A0_B = CFGREQPMTRANSITIONL23READY_A0_B; // net ID: CFGREQPMTRANSITIONL23READY lsb: 0  msb: 0 INPUT
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
			this->CFGTPHSTTREADDATA_A0_B = CFGTPHSTTREADDATA_A0_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A1_B = CFGTPHSTTREADDATA_A1_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A2_B = CFGTPHSTTREADDATA_A2_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A3_B = CFGTPHSTTREADDATA_A3_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A4_B = CFGTPHSTTREADDATA_A4_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A5_B = CFGTPHSTTREADDATA_A5_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A6_B = CFGTPHSTTREADDATA_A6_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A7_B = CFGTPHSTTREADDATA_A7_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A8_B = CFGTPHSTTREADDATA_A8_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A9_B = CFGTPHSTTREADDATA_A9_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A10_B = CFGTPHSTTREADDATA_A10_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A11_B = CFGTPHSTTREADDATA_A11_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A12_B = CFGTPHSTTREADDATA_A12_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A13_B = CFGTPHSTTREADDATA_A13_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A14_B = CFGTPHSTTREADDATA_A14_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A15_B = CFGTPHSTTREADDATA_A15_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A16_B = CFGTPHSTTREADDATA_A16_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A17_B = CFGTPHSTTREADDATA_A17_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A18_B = CFGTPHSTTREADDATA_A18_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A19_B = CFGTPHSTTREADDATA_A19_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A20_B = CFGTPHSTTREADDATA_A20_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A21_B = CFGTPHSTTREADDATA_A21_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A22_B = CFGTPHSTTREADDATA_A22_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A23_B = CFGTPHSTTREADDATA_A23_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A24_B = CFGTPHSTTREADDATA_A24_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A25_B = CFGTPHSTTREADDATA_A25_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A26_B = CFGTPHSTTREADDATA_A26_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A27_B = CFGTPHSTTREADDATA_A27_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A28_B = CFGTPHSTTREADDATA_A28_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A29_B = CFGTPHSTTREADDATA_A29_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A30_B = CFGTPHSTTREADDATA_A30_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATA_A31_B = CFGTPHSTTREADDATA_A31_B; // net ID: CFGTPHSTTREADDATA lsb: 0  msb: 31 INPUT
			this->CFGTPHSTTREADDATAVALID_A0_B = CFGTPHSTTREADDATAVALID_A0_B; // net ID: CFGTPHSTTREADDATAVALID lsb: 0  msb: 0 INPUT
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
			this->CFGVFFLRDONE_A0_B = CFGVFFLRDONE_A0_B; // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
			this->CFGVFFLRDONE_A1_B = CFGVFFLRDONE_A1_B; // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
			this->CFGVFFLRDONE_A2_B = CFGVFFLRDONE_A2_B; // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
			this->CFGVFFLRDONE_A3_B = CFGVFFLRDONE_A3_B; // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
			this->CFGVFFLRDONE_A4_B = CFGVFFLRDONE_A4_B; // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
			this->CFGVFFLRDONE_A5_B = CFGVFFLRDONE_A5_B; // net ID: CFGVFFLRDONE lsb: 0  msb: 5 INPUT
			this->CORECLK_A0_B = CORECLK_A0_B; // net ID: CORECLK lsb: 0  msb: 0 INPUT
			this->CORECLKMICOMPLETIONRAML_A0_B = CORECLKMICOMPLETIONRAML_A0_B; // net ID: CORECLKMICOMPLETIONRAML lsb: 0  msb: 0 INPUT
			this->CORECLKMICOMPLETIONRAMU_A0_B = CORECLKMICOMPLETIONRAMU_A0_B; // net ID: CORECLKMICOMPLETIONRAMU lsb: 0  msb: 0 INPUT
			this->CORECLKMIREPLAYRAM_A0_B = CORECLKMIREPLAYRAM_A0_B; // net ID: CORECLKMIREPLAYRAM lsb: 0  msb: 0 INPUT
			this->CORECLKMIREQUESTRAM_A0_B = CORECLKMIREQUESTRAM_A0_B; // net ID: CORECLKMIREQUESTRAM lsb: 0  msb: 0 INPUT
			this->DRPADDR_A0_B = DRPADDR_A0_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			this->DRPADDR_A1_B = DRPADDR_A1_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			this->DRPADDR_A2_B = DRPADDR_A2_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			this->DRPADDR_A3_B = DRPADDR_A3_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			this->DRPADDR_A4_B = DRPADDR_A4_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			this->DRPADDR_A5_B = DRPADDR_A5_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			this->DRPADDR_A6_B = DRPADDR_A6_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			this->DRPADDR_A7_B = DRPADDR_A7_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			this->DRPADDR_A8_B = DRPADDR_A8_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			this->DRPADDR_A9_B = DRPADDR_A9_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
			this->DRPADDR_A10_B = DRPADDR_A10_B; // net ID: DRPADDR lsb: 0  msb: 10 INPUT
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
			this->MAXISCQTREADY_A0_B = MAXISCQTREADY_A0_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A1_B = MAXISCQTREADY_A1_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A2_B = MAXISCQTREADY_A2_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A3_B = MAXISCQTREADY_A3_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A4_B = MAXISCQTREADY_A4_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A5_B = MAXISCQTREADY_A5_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A6_B = MAXISCQTREADY_A6_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A7_B = MAXISCQTREADY_A7_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A8_B = MAXISCQTREADY_A8_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A9_B = MAXISCQTREADY_A9_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A10_B = MAXISCQTREADY_A10_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A11_B = MAXISCQTREADY_A11_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A12_B = MAXISCQTREADY_A12_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A13_B = MAXISCQTREADY_A13_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A14_B = MAXISCQTREADY_A14_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A15_B = MAXISCQTREADY_A15_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A16_B = MAXISCQTREADY_A16_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A17_B = MAXISCQTREADY_A17_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A18_B = MAXISCQTREADY_A18_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A19_B = MAXISCQTREADY_A19_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A20_B = MAXISCQTREADY_A20_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISCQTREADY_A21_B = MAXISCQTREADY_A21_B; // net ID: MAXISCQTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A0_B = MAXISRCTREADY_A0_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A1_B = MAXISRCTREADY_A1_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A2_B = MAXISRCTREADY_A2_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A3_B = MAXISRCTREADY_A3_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A4_B = MAXISRCTREADY_A4_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A5_B = MAXISRCTREADY_A5_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A6_B = MAXISRCTREADY_A6_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A7_B = MAXISRCTREADY_A7_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A8_B = MAXISRCTREADY_A8_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A9_B = MAXISRCTREADY_A9_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A10_B = MAXISRCTREADY_A10_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A11_B = MAXISRCTREADY_A11_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A12_B = MAXISRCTREADY_A12_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A13_B = MAXISRCTREADY_A13_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A14_B = MAXISRCTREADY_A14_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A15_B = MAXISRCTREADY_A15_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A16_B = MAXISRCTREADY_A16_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A17_B = MAXISRCTREADY_A17_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A18_B = MAXISRCTREADY_A18_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A19_B = MAXISRCTREADY_A19_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A20_B = MAXISRCTREADY_A20_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MAXISRCTREADY_A21_B = MAXISRCTREADY_A21_B; // net ID: MAXISRCTREADY lsb: 0  msb: 21 INPUT
			this->MGMTRESETN_A0_B = MGMTRESETN_A0_B; // net ID: MGMTRESETN lsb: 0  msb: 0 INPUT
			this->MGMTSTICKYRESETN_A0_B = MGMTSTICKYRESETN_A0_B; // net ID: MGMTSTICKYRESETN lsb: 0  msb: 0 INPUT
			this->MICOMPLETIONRAMREADDATA_A0_B = MICOMPLETIONRAMREADDATA_A0_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A1_B = MICOMPLETIONRAMREADDATA_A1_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A2_B = MICOMPLETIONRAMREADDATA_A2_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A3_B = MICOMPLETIONRAMREADDATA_A3_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A4_B = MICOMPLETIONRAMREADDATA_A4_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A5_B = MICOMPLETIONRAMREADDATA_A5_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A6_B = MICOMPLETIONRAMREADDATA_A6_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A7_B = MICOMPLETIONRAMREADDATA_A7_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A8_B = MICOMPLETIONRAMREADDATA_A8_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A9_B = MICOMPLETIONRAMREADDATA_A9_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A10_B = MICOMPLETIONRAMREADDATA_A10_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A11_B = MICOMPLETIONRAMREADDATA_A11_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A12_B = MICOMPLETIONRAMREADDATA_A12_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A13_B = MICOMPLETIONRAMREADDATA_A13_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A14_B = MICOMPLETIONRAMREADDATA_A14_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A15_B = MICOMPLETIONRAMREADDATA_A15_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A16_B = MICOMPLETIONRAMREADDATA_A16_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A17_B = MICOMPLETIONRAMREADDATA_A17_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A18_B = MICOMPLETIONRAMREADDATA_A18_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A19_B = MICOMPLETIONRAMREADDATA_A19_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A20_B = MICOMPLETIONRAMREADDATA_A20_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A21_B = MICOMPLETIONRAMREADDATA_A21_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A22_B = MICOMPLETIONRAMREADDATA_A22_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A23_B = MICOMPLETIONRAMREADDATA_A23_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A24_B = MICOMPLETIONRAMREADDATA_A24_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A25_B = MICOMPLETIONRAMREADDATA_A25_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A26_B = MICOMPLETIONRAMREADDATA_A26_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A27_B = MICOMPLETIONRAMREADDATA_A27_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A28_B = MICOMPLETIONRAMREADDATA_A28_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A29_B = MICOMPLETIONRAMREADDATA_A29_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A30_B = MICOMPLETIONRAMREADDATA_A30_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A31_B = MICOMPLETIONRAMREADDATA_A31_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A32_B = MICOMPLETIONRAMREADDATA_A32_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A33_B = MICOMPLETIONRAMREADDATA_A33_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A34_B = MICOMPLETIONRAMREADDATA_A34_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A35_B = MICOMPLETIONRAMREADDATA_A35_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A36_B = MICOMPLETIONRAMREADDATA_A36_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A37_B = MICOMPLETIONRAMREADDATA_A37_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A38_B = MICOMPLETIONRAMREADDATA_A38_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A39_B = MICOMPLETIONRAMREADDATA_A39_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A40_B = MICOMPLETIONRAMREADDATA_A40_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A41_B = MICOMPLETIONRAMREADDATA_A41_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A42_B = MICOMPLETIONRAMREADDATA_A42_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A43_B = MICOMPLETIONRAMREADDATA_A43_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A44_B = MICOMPLETIONRAMREADDATA_A44_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A45_B = MICOMPLETIONRAMREADDATA_A45_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A46_B = MICOMPLETIONRAMREADDATA_A46_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A47_B = MICOMPLETIONRAMREADDATA_A47_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A48_B = MICOMPLETIONRAMREADDATA_A48_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A49_B = MICOMPLETIONRAMREADDATA_A49_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A50_B = MICOMPLETIONRAMREADDATA_A50_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A51_B = MICOMPLETIONRAMREADDATA_A51_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A52_B = MICOMPLETIONRAMREADDATA_A52_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A53_B = MICOMPLETIONRAMREADDATA_A53_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A54_B = MICOMPLETIONRAMREADDATA_A54_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A55_B = MICOMPLETIONRAMREADDATA_A55_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A56_B = MICOMPLETIONRAMREADDATA_A56_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A57_B = MICOMPLETIONRAMREADDATA_A57_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A58_B = MICOMPLETIONRAMREADDATA_A58_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A59_B = MICOMPLETIONRAMREADDATA_A59_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A60_B = MICOMPLETIONRAMREADDATA_A60_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A61_B = MICOMPLETIONRAMREADDATA_A61_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A62_B = MICOMPLETIONRAMREADDATA_A62_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A63_B = MICOMPLETIONRAMREADDATA_A63_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A64_B = MICOMPLETIONRAMREADDATA_A64_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A65_B = MICOMPLETIONRAMREADDATA_A65_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A66_B = MICOMPLETIONRAMREADDATA_A66_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A67_B = MICOMPLETIONRAMREADDATA_A67_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A68_B = MICOMPLETIONRAMREADDATA_A68_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A69_B = MICOMPLETIONRAMREADDATA_A69_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A70_B = MICOMPLETIONRAMREADDATA_A70_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A71_B = MICOMPLETIONRAMREADDATA_A71_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A72_B = MICOMPLETIONRAMREADDATA_A72_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A73_B = MICOMPLETIONRAMREADDATA_A73_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A74_B = MICOMPLETIONRAMREADDATA_A74_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A75_B = MICOMPLETIONRAMREADDATA_A75_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A76_B = MICOMPLETIONRAMREADDATA_A76_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A77_B = MICOMPLETIONRAMREADDATA_A77_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A78_B = MICOMPLETIONRAMREADDATA_A78_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A79_B = MICOMPLETIONRAMREADDATA_A79_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A80_B = MICOMPLETIONRAMREADDATA_A80_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A81_B = MICOMPLETIONRAMREADDATA_A81_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A82_B = MICOMPLETIONRAMREADDATA_A82_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A83_B = MICOMPLETIONRAMREADDATA_A83_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A84_B = MICOMPLETIONRAMREADDATA_A84_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A85_B = MICOMPLETIONRAMREADDATA_A85_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A86_B = MICOMPLETIONRAMREADDATA_A86_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A87_B = MICOMPLETIONRAMREADDATA_A87_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A88_B = MICOMPLETIONRAMREADDATA_A88_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A89_B = MICOMPLETIONRAMREADDATA_A89_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A90_B = MICOMPLETIONRAMREADDATA_A90_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A91_B = MICOMPLETIONRAMREADDATA_A91_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A92_B = MICOMPLETIONRAMREADDATA_A92_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A93_B = MICOMPLETIONRAMREADDATA_A93_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A94_B = MICOMPLETIONRAMREADDATA_A94_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A95_B = MICOMPLETIONRAMREADDATA_A95_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A96_B = MICOMPLETIONRAMREADDATA_A96_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A97_B = MICOMPLETIONRAMREADDATA_A97_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A98_B = MICOMPLETIONRAMREADDATA_A98_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A99_B = MICOMPLETIONRAMREADDATA_A99_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A100_B = MICOMPLETIONRAMREADDATA_A100_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A101_B = MICOMPLETIONRAMREADDATA_A101_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A102_B = MICOMPLETIONRAMREADDATA_A102_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A103_B = MICOMPLETIONRAMREADDATA_A103_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A104_B = MICOMPLETIONRAMREADDATA_A104_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A105_B = MICOMPLETIONRAMREADDATA_A105_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A106_B = MICOMPLETIONRAMREADDATA_A106_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A107_B = MICOMPLETIONRAMREADDATA_A107_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A108_B = MICOMPLETIONRAMREADDATA_A108_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A109_B = MICOMPLETIONRAMREADDATA_A109_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A110_B = MICOMPLETIONRAMREADDATA_A110_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A111_B = MICOMPLETIONRAMREADDATA_A111_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A112_B = MICOMPLETIONRAMREADDATA_A112_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A113_B = MICOMPLETIONRAMREADDATA_A113_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A114_B = MICOMPLETIONRAMREADDATA_A114_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A115_B = MICOMPLETIONRAMREADDATA_A115_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A116_B = MICOMPLETIONRAMREADDATA_A116_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A117_B = MICOMPLETIONRAMREADDATA_A117_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A118_B = MICOMPLETIONRAMREADDATA_A118_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A119_B = MICOMPLETIONRAMREADDATA_A119_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A120_B = MICOMPLETIONRAMREADDATA_A120_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A121_B = MICOMPLETIONRAMREADDATA_A121_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A122_B = MICOMPLETIONRAMREADDATA_A122_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A123_B = MICOMPLETIONRAMREADDATA_A123_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A124_B = MICOMPLETIONRAMREADDATA_A124_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A125_B = MICOMPLETIONRAMREADDATA_A125_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A126_B = MICOMPLETIONRAMREADDATA_A126_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A127_B = MICOMPLETIONRAMREADDATA_A127_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A128_B = MICOMPLETIONRAMREADDATA_A128_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A129_B = MICOMPLETIONRAMREADDATA_A129_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A130_B = MICOMPLETIONRAMREADDATA_A130_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A131_B = MICOMPLETIONRAMREADDATA_A131_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A132_B = MICOMPLETIONRAMREADDATA_A132_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A133_B = MICOMPLETIONRAMREADDATA_A133_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A134_B = MICOMPLETIONRAMREADDATA_A134_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A135_B = MICOMPLETIONRAMREADDATA_A135_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A136_B = MICOMPLETIONRAMREADDATA_A136_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A137_B = MICOMPLETIONRAMREADDATA_A137_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A138_B = MICOMPLETIONRAMREADDATA_A138_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A139_B = MICOMPLETIONRAMREADDATA_A139_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A140_B = MICOMPLETIONRAMREADDATA_A140_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A141_B = MICOMPLETIONRAMREADDATA_A141_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A142_B = MICOMPLETIONRAMREADDATA_A142_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MICOMPLETIONRAMREADDATA_A143_B = MICOMPLETIONRAMREADDATA_A143_B; // net ID: MICOMPLETIONRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A0_B = MIREPLAYRAMREADDATA_A0_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A1_B = MIREPLAYRAMREADDATA_A1_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A2_B = MIREPLAYRAMREADDATA_A2_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A3_B = MIREPLAYRAMREADDATA_A3_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A4_B = MIREPLAYRAMREADDATA_A4_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A5_B = MIREPLAYRAMREADDATA_A5_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A6_B = MIREPLAYRAMREADDATA_A6_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A7_B = MIREPLAYRAMREADDATA_A7_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A8_B = MIREPLAYRAMREADDATA_A8_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A9_B = MIREPLAYRAMREADDATA_A9_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A10_B = MIREPLAYRAMREADDATA_A10_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A11_B = MIREPLAYRAMREADDATA_A11_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A12_B = MIREPLAYRAMREADDATA_A12_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A13_B = MIREPLAYRAMREADDATA_A13_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A14_B = MIREPLAYRAMREADDATA_A14_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A15_B = MIREPLAYRAMREADDATA_A15_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A16_B = MIREPLAYRAMREADDATA_A16_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A17_B = MIREPLAYRAMREADDATA_A17_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A18_B = MIREPLAYRAMREADDATA_A18_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A19_B = MIREPLAYRAMREADDATA_A19_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A20_B = MIREPLAYRAMREADDATA_A20_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A21_B = MIREPLAYRAMREADDATA_A21_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A22_B = MIREPLAYRAMREADDATA_A22_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A23_B = MIREPLAYRAMREADDATA_A23_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A24_B = MIREPLAYRAMREADDATA_A24_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A25_B = MIREPLAYRAMREADDATA_A25_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A26_B = MIREPLAYRAMREADDATA_A26_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A27_B = MIREPLAYRAMREADDATA_A27_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A28_B = MIREPLAYRAMREADDATA_A28_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A29_B = MIREPLAYRAMREADDATA_A29_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A30_B = MIREPLAYRAMREADDATA_A30_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A31_B = MIREPLAYRAMREADDATA_A31_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A32_B = MIREPLAYRAMREADDATA_A32_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A33_B = MIREPLAYRAMREADDATA_A33_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A34_B = MIREPLAYRAMREADDATA_A34_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A35_B = MIREPLAYRAMREADDATA_A35_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A36_B = MIREPLAYRAMREADDATA_A36_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A37_B = MIREPLAYRAMREADDATA_A37_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A38_B = MIREPLAYRAMREADDATA_A38_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A39_B = MIREPLAYRAMREADDATA_A39_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A40_B = MIREPLAYRAMREADDATA_A40_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A41_B = MIREPLAYRAMREADDATA_A41_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A42_B = MIREPLAYRAMREADDATA_A42_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A43_B = MIREPLAYRAMREADDATA_A43_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A44_B = MIREPLAYRAMREADDATA_A44_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A45_B = MIREPLAYRAMREADDATA_A45_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A46_B = MIREPLAYRAMREADDATA_A46_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A47_B = MIREPLAYRAMREADDATA_A47_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A48_B = MIREPLAYRAMREADDATA_A48_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A49_B = MIREPLAYRAMREADDATA_A49_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A50_B = MIREPLAYRAMREADDATA_A50_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A51_B = MIREPLAYRAMREADDATA_A51_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A52_B = MIREPLAYRAMREADDATA_A52_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A53_B = MIREPLAYRAMREADDATA_A53_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A54_B = MIREPLAYRAMREADDATA_A54_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A55_B = MIREPLAYRAMREADDATA_A55_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A56_B = MIREPLAYRAMREADDATA_A56_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A57_B = MIREPLAYRAMREADDATA_A57_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A58_B = MIREPLAYRAMREADDATA_A58_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A59_B = MIREPLAYRAMREADDATA_A59_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A60_B = MIREPLAYRAMREADDATA_A60_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A61_B = MIREPLAYRAMREADDATA_A61_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A62_B = MIREPLAYRAMREADDATA_A62_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A63_B = MIREPLAYRAMREADDATA_A63_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A64_B = MIREPLAYRAMREADDATA_A64_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A65_B = MIREPLAYRAMREADDATA_A65_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A66_B = MIREPLAYRAMREADDATA_A66_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A67_B = MIREPLAYRAMREADDATA_A67_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A68_B = MIREPLAYRAMREADDATA_A68_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A69_B = MIREPLAYRAMREADDATA_A69_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A70_B = MIREPLAYRAMREADDATA_A70_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A71_B = MIREPLAYRAMREADDATA_A71_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A72_B = MIREPLAYRAMREADDATA_A72_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A73_B = MIREPLAYRAMREADDATA_A73_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A74_B = MIREPLAYRAMREADDATA_A74_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A75_B = MIREPLAYRAMREADDATA_A75_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A76_B = MIREPLAYRAMREADDATA_A76_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A77_B = MIREPLAYRAMREADDATA_A77_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A78_B = MIREPLAYRAMREADDATA_A78_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A79_B = MIREPLAYRAMREADDATA_A79_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A80_B = MIREPLAYRAMREADDATA_A80_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A81_B = MIREPLAYRAMREADDATA_A81_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A82_B = MIREPLAYRAMREADDATA_A82_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A83_B = MIREPLAYRAMREADDATA_A83_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A84_B = MIREPLAYRAMREADDATA_A84_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A85_B = MIREPLAYRAMREADDATA_A85_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A86_B = MIREPLAYRAMREADDATA_A86_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A87_B = MIREPLAYRAMREADDATA_A87_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A88_B = MIREPLAYRAMREADDATA_A88_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A89_B = MIREPLAYRAMREADDATA_A89_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A90_B = MIREPLAYRAMREADDATA_A90_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A91_B = MIREPLAYRAMREADDATA_A91_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A92_B = MIREPLAYRAMREADDATA_A92_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A93_B = MIREPLAYRAMREADDATA_A93_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A94_B = MIREPLAYRAMREADDATA_A94_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A95_B = MIREPLAYRAMREADDATA_A95_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A96_B = MIREPLAYRAMREADDATA_A96_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A97_B = MIREPLAYRAMREADDATA_A97_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A98_B = MIREPLAYRAMREADDATA_A98_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A99_B = MIREPLAYRAMREADDATA_A99_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A100_B = MIREPLAYRAMREADDATA_A100_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A101_B = MIREPLAYRAMREADDATA_A101_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A102_B = MIREPLAYRAMREADDATA_A102_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A103_B = MIREPLAYRAMREADDATA_A103_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A104_B = MIREPLAYRAMREADDATA_A104_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A105_B = MIREPLAYRAMREADDATA_A105_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A106_B = MIREPLAYRAMREADDATA_A106_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A107_B = MIREPLAYRAMREADDATA_A107_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A108_B = MIREPLAYRAMREADDATA_A108_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A109_B = MIREPLAYRAMREADDATA_A109_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A110_B = MIREPLAYRAMREADDATA_A110_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A111_B = MIREPLAYRAMREADDATA_A111_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A112_B = MIREPLAYRAMREADDATA_A112_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A113_B = MIREPLAYRAMREADDATA_A113_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A114_B = MIREPLAYRAMREADDATA_A114_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A115_B = MIREPLAYRAMREADDATA_A115_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A116_B = MIREPLAYRAMREADDATA_A116_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A117_B = MIREPLAYRAMREADDATA_A117_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A118_B = MIREPLAYRAMREADDATA_A118_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A119_B = MIREPLAYRAMREADDATA_A119_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A120_B = MIREPLAYRAMREADDATA_A120_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A121_B = MIREPLAYRAMREADDATA_A121_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A122_B = MIREPLAYRAMREADDATA_A122_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A123_B = MIREPLAYRAMREADDATA_A123_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A124_B = MIREPLAYRAMREADDATA_A124_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A125_B = MIREPLAYRAMREADDATA_A125_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A126_B = MIREPLAYRAMREADDATA_A126_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A127_B = MIREPLAYRAMREADDATA_A127_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A128_B = MIREPLAYRAMREADDATA_A128_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A129_B = MIREPLAYRAMREADDATA_A129_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A130_B = MIREPLAYRAMREADDATA_A130_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A131_B = MIREPLAYRAMREADDATA_A131_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A132_B = MIREPLAYRAMREADDATA_A132_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A133_B = MIREPLAYRAMREADDATA_A133_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A134_B = MIREPLAYRAMREADDATA_A134_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A135_B = MIREPLAYRAMREADDATA_A135_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A136_B = MIREPLAYRAMREADDATA_A136_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A137_B = MIREPLAYRAMREADDATA_A137_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A138_B = MIREPLAYRAMREADDATA_A138_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A139_B = MIREPLAYRAMREADDATA_A139_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A140_B = MIREPLAYRAMREADDATA_A140_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A141_B = MIREPLAYRAMREADDATA_A141_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A142_B = MIREPLAYRAMREADDATA_A142_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREPLAYRAMREADDATA_A143_B = MIREPLAYRAMREADDATA_A143_B; // net ID: MIREPLAYRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A0_B = MIREQUESTRAMREADDATA_A0_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A1_B = MIREQUESTRAMREADDATA_A1_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A2_B = MIREQUESTRAMREADDATA_A2_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A3_B = MIREQUESTRAMREADDATA_A3_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A4_B = MIREQUESTRAMREADDATA_A4_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A5_B = MIREQUESTRAMREADDATA_A5_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A6_B = MIREQUESTRAMREADDATA_A6_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A7_B = MIREQUESTRAMREADDATA_A7_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A8_B = MIREQUESTRAMREADDATA_A8_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A9_B = MIREQUESTRAMREADDATA_A9_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A10_B = MIREQUESTRAMREADDATA_A10_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A11_B = MIREQUESTRAMREADDATA_A11_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A12_B = MIREQUESTRAMREADDATA_A12_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A13_B = MIREQUESTRAMREADDATA_A13_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A14_B = MIREQUESTRAMREADDATA_A14_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A15_B = MIREQUESTRAMREADDATA_A15_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A16_B = MIREQUESTRAMREADDATA_A16_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A17_B = MIREQUESTRAMREADDATA_A17_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A18_B = MIREQUESTRAMREADDATA_A18_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A19_B = MIREQUESTRAMREADDATA_A19_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A20_B = MIREQUESTRAMREADDATA_A20_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A21_B = MIREQUESTRAMREADDATA_A21_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A22_B = MIREQUESTRAMREADDATA_A22_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A23_B = MIREQUESTRAMREADDATA_A23_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A24_B = MIREQUESTRAMREADDATA_A24_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A25_B = MIREQUESTRAMREADDATA_A25_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A26_B = MIREQUESTRAMREADDATA_A26_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A27_B = MIREQUESTRAMREADDATA_A27_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A28_B = MIREQUESTRAMREADDATA_A28_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A29_B = MIREQUESTRAMREADDATA_A29_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A30_B = MIREQUESTRAMREADDATA_A30_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A31_B = MIREQUESTRAMREADDATA_A31_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A32_B = MIREQUESTRAMREADDATA_A32_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A33_B = MIREQUESTRAMREADDATA_A33_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A34_B = MIREQUESTRAMREADDATA_A34_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A35_B = MIREQUESTRAMREADDATA_A35_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A36_B = MIREQUESTRAMREADDATA_A36_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A37_B = MIREQUESTRAMREADDATA_A37_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A38_B = MIREQUESTRAMREADDATA_A38_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A39_B = MIREQUESTRAMREADDATA_A39_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A40_B = MIREQUESTRAMREADDATA_A40_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A41_B = MIREQUESTRAMREADDATA_A41_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A42_B = MIREQUESTRAMREADDATA_A42_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A43_B = MIREQUESTRAMREADDATA_A43_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A44_B = MIREQUESTRAMREADDATA_A44_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A45_B = MIREQUESTRAMREADDATA_A45_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A46_B = MIREQUESTRAMREADDATA_A46_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A47_B = MIREQUESTRAMREADDATA_A47_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A48_B = MIREQUESTRAMREADDATA_A48_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A49_B = MIREQUESTRAMREADDATA_A49_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A50_B = MIREQUESTRAMREADDATA_A50_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A51_B = MIREQUESTRAMREADDATA_A51_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A52_B = MIREQUESTRAMREADDATA_A52_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A53_B = MIREQUESTRAMREADDATA_A53_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A54_B = MIREQUESTRAMREADDATA_A54_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A55_B = MIREQUESTRAMREADDATA_A55_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A56_B = MIREQUESTRAMREADDATA_A56_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A57_B = MIREQUESTRAMREADDATA_A57_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A58_B = MIREQUESTRAMREADDATA_A58_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A59_B = MIREQUESTRAMREADDATA_A59_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A60_B = MIREQUESTRAMREADDATA_A60_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A61_B = MIREQUESTRAMREADDATA_A61_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A62_B = MIREQUESTRAMREADDATA_A62_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A63_B = MIREQUESTRAMREADDATA_A63_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A64_B = MIREQUESTRAMREADDATA_A64_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A65_B = MIREQUESTRAMREADDATA_A65_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A66_B = MIREQUESTRAMREADDATA_A66_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A67_B = MIREQUESTRAMREADDATA_A67_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A68_B = MIREQUESTRAMREADDATA_A68_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A69_B = MIREQUESTRAMREADDATA_A69_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A70_B = MIREQUESTRAMREADDATA_A70_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A71_B = MIREQUESTRAMREADDATA_A71_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A72_B = MIREQUESTRAMREADDATA_A72_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A73_B = MIREQUESTRAMREADDATA_A73_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A74_B = MIREQUESTRAMREADDATA_A74_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A75_B = MIREQUESTRAMREADDATA_A75_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A76_B = MIREQUESTRAMREADDATA_A76_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A77_B = MIREQUESTRAMREADDATA_A77_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A78_B = MIREQUESTRAMREADDATA_A78_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A79_B = MIREQUESTRAMREADDATA_A79_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A80_B = MIREQUESTRAMREADDATA_A80_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A81_B = MIREQUESTRAMREADDATA_A81_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A82_B = MIREQUESTRAMREADDATA_A82_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A83_B = MIREQUESTRAMREADDATA_A83_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A84_B = MIREQUESTRAMREADDATA_A84_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A85_B = MIREQUESTRAMREADDATA_A85_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A86_B = MIREQUESTRAMREADDATA_A86_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A87_B = MIREQUESTRAMREADDATA_A87_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A88_B = MIREQUESTRAMREADDATA_A88_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A89_B = MIREQUESTRAMREADDATA_A89_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A90_B = MIREQUESTRAMREADDATA_A90_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A91_B = MIREQUESTRAMREADDATA_A91_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A92_B = MIREQUESTRAMREADDATA_A92_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A93_B = MIREQUESTRAMREADDATA_A93_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A94_B = MIREQUESTRAMREADDATA_A94_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A95_B = MIREQUESTRAMREADDATA_A95_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A96_B = MIREQUESTRAMREADDATA_A96_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A97_B = MIREQUESTRAMREADDATA_A97_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A98_B = MIREQUESTRAMREADDATA_A98_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A99_B = MIREQUESTRAMREADDATA_A99_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A100_B = MIREQUESTRAMREADDATA_A100_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A101_B = MIREQUESTRAMREADDATA_A101_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A102_B = MIREQUESTRAMREADDATA_A102_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A103_B = MIREQUESTRAMREADDATA_A103_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A104_B = MIREQUESTRAMREADDATA_A104_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A105_B = MIREQUESTRAMREADDATA_A105_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A106_B = MIREQUESTRAMREADDATA_A106_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A107_B = MIREQUESTRAMREADDATA_A107_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A108_B = MIREQUESTRAMREADDATA_A108_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A109_B = MIREQUESTRAMREADDATA_A109_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A110_B = MIREQUESTRAMREADDATA_A110_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A111_B = MIREQUESTRAMREADDATA_A111_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A112_B = MIREQUESTRAMREADDATA_A112_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A113_B = MIREQUESTRAMREADDATA_A113_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A114_B = MIREQUESTRAMREADDATA_A114_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A115_B = MIREQUESTRAMREADDATA_A115_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A116_B = MIREQUESTRAMREADDATA_A116_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A117_B = MIREQUESTRAMREADDATA_A117_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A118_B = MIREQUESTRAMREADDATA_A118_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A119_B = MIREQUESTRAMREADDATA_A119_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A120_B = MIREQUESTRAMREADDATA_A120_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A121_B = MIREQUESTRAMREADDATA_A121_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A122_B = MIREQUESTRAMREADDATA_A122_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A123_B = MIREQUESTRAMREADDATA_A123_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A124_B = MIREQUESTRAMREADDATA_A124_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A125_B = MIREQUESTRAMREADDATA_A125_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A126_B = MIREQUESTRAMREADDATA_A126_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A127_B = MIREQUESTRAMREADDATA_A127_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A128_B = MIREQUESTRAMREADDATA_A128_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A129_B = MIREQUESTRAMREADDATA_A129_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A130_B = MIREQUESTRAMREADDATA_A130_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A131_B = MIREQUESTRAMREADDATA_A131_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A132_B = MIREQUESTRAMREADDATA_A132_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A133_B = MIREQUESTRAMREADDATA_A133_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A134_B = MIREQUESTRAMREADDATA_A134_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A135_B = MIREQUESTRAMREADDATA_A135_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A136_B = MIREQUESTRAMREADDATA_A136_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A137_B = MIREQUESTRAMREADDATA_A137_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A138_B = MIREQUESTRAMREADDATA_A138_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A139_B = MIREQUESTRAMREADDATA_A139_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A140_B = MIREQUESTRAMREADDATA_A140_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A141_B = MIREQUESTRAMREADDATA_A141_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A142_B = MIREQUESTRAMREADDATA_A142_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->MIREQUESTRAMREADDATA_A143_B = MIREQUESTRAMREADDATA_A143_B; // net ID: MIREQUESTRAMREADDATA lsb: 0  msb: 143 INPUT
			this->PCIECQNPREQ_A0_B = PCIECQNPREQ_A0_B; // net ID: PCIECQNPREQ lsb: 0  msb: 0 INPUT
			this->PIPECLK_A0_B = PIPECLK_A0_B; // net ID: PIPECLK lsb: 0  msb: 0 INPUT
			this->PIPEEQFS_A0_B = PIPEEQFS_A0_B; // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
			this->PIPEEQFS_A1_B = PIPEEQFS_A1_B; // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
			this->PIPEEQFS_A2_B = PIPEEQFS_A2_B; // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
			this->PIPEEQFS_A3_B = PIPEEQFS_A3_B; // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
			this->PIPEEQFS_A4_B = PIPEEQFS_A4_B; // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
			this->PIPEEQFS_A5_B = PIPEEQFS_A5_B; // net ID: PIPEEQFS lsb: 0  msb: 5 INPUT
			this->PIPEEQLF_A0_B = PIPEEQLF_A0_B; // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
			this->PIPEEQLF_A1_B = PIPEEQLF_A1_B; // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
			this->PIPEEQLF_A2_B = PIPEEQLF_A2_B; // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
			this->PIPEEQLF_A3_B = PIPEEQLF_A3_B; // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
			this->PIPEEQLF_A4_B = PIPEEQLF_A4_B; // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
			this->PIPEEQLF_A5_B = PIPEEQLF_A5_B; // net ID: PIPEEQLF lsb: 0  msb: 5 INPUT
			this->PIPERESETN_A0_B = PIPERESETN_A0_B; // net ID: PIPERESETN lsb: 0  msb: 0 INPUT
			this->PIPERX0CHARISK_A0_B = PIPERX0CHARISK_A0_B; // net ID: PIPERX0CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX0CHARISK_A1_B = PIPERX0CHARISK_A1_B; // net ID: PIPERX0CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX0DATA_A0_B = PIPERX0DATA_A0_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A1_B = PIPERX0DATA_A1_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A2_B = PIPERX0DATA_A2_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A3_B = PIPERX0DATA_A3_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A4_B = PIPERX0DATA_A4_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A5_B = PIPERX0DATA_A5_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A6_B = PIPERX0DATA_A6_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A7_B = PIPERX0DATA_A7_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A8_B = PIPERX0DATA_A8_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A9_B = PIPERX0DATA_A9_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A10_B = PIPERX0DATA_A10_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A11_B = PIPERX0DATA_A11_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A12_B = PIPERX0DATA_A12_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A13_B = PIPERX0DATA_A13_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A14_B = PIPERX0DATA_A14_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A15_B = PIPERX0DATA_A15_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A16_B = PIPERX0DATA_A16_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A17_B = PIPERX0DATA_A17_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A18_B = PIPERX0DATA_A18_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A19_B = PIPERX0DATA_A19_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A20_B = PIPERX0DATA_A20_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A21_B = PIPERX0DATA_A21_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A22_B = PIPERX0DATA_A22_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A23_B = PIPERX0DATA_A23_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A24_B = PIPERX0DATA_A24_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A25_B = PIPERX0DATA_A25_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A26_B = PIPERX0DATA_A26_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A27_B = PIPERX0DATA_A27_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A28_B = PIPERX0DATA_A28_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A29_B = PIPERX0DATA_A29_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A30_B = PIPERX0DATA_A30_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATA_A31_B = PIPERX0DATA_A31_B; // net ID: PIPERX0DATA lsb: 0  msb: 31 INPUT
			this->PIPERX0DATAVALID_A0_B = PIPERX0DATAVALID_A0_B; // net ID: PIPERX0DATAVALID lsb: 0  msb: 0 INPUT
			this->PIPERX0ELECIDLE_A0_B = PIPERX0ELECIDLE_A0_B; // net ID: PIPERX0ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX0EQDONE_A0_B = PIPERX0EQDONE_A0_B; // net ID: PIPERX0EQDONE lsb: 0  msb: 0 INPUT
			this->PIPERX0EQLPADAPTDONE_A0_B = PIPERX0EQLPADAPTDONE_A0_B; // net ID: PIPERX0EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			this->PIPERX0EQLPLFFSSEL_A0_B = PIPERX0EQLPLFFSSEL_A0_B; // net ID: PIPERX0EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			this->PIPERX0EQLPNEWTXCOEFFORPRESET_A0_B = PIPERX0EQLPNEWTXCOEFFORPRESET_A0_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX0EQLPNEWTXCOEFFORPRESET_A1_B = PIPERX0EQLPNEWTXCOEFFORPRESET_A1_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX0EQLPNEWTXCOEFFORPRESET_A2_B = PIPERX0EQLPNEWTXCOEFFORPRESET_A2_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX0EQLPNEWTXCOEFFORPRESET_A3_B = PIPERX0EQLPNEWTXCOEFFORPRESET_A3_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX0EQLPNEWTXCOEFFORPRESET_A4_B = PIPERX0EQLPNEWTXCOEFFORPRESET_A4_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX0EQLPNEWTXCOEFFORPRESET_A5_B = PIPERX0EQLPNEWTXCOEFFORPRESET_A5_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX0EQLPNEWTXCOEFFORPRESET_A6_B = PIPERX0EQLPNEWTXCOEFFORPRESET_A6_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX0EQLPNEWTXCOEFFORPRESET_A7_B = PIPERX0EQLPNEWTXCOEFFORPRESET_A7_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX0EQLPNEWTXCOEFFORPRESET_A8_B = PIPERX0EQLPNEWTXCOEFFORPRESET_A8_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX0EQLPNEWTXCOEFFORPRESET_A9_B = PIPERX0EQLPNEWTXCOEFFORPRESET_A9_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX0EQLPNEWTXCOEFFORPRESET_A10_B = PIPERX0EQLPNEWTXCOEFFORPRESET_A10_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX0EQLPNEWTXCOEFFORPRESET_A11_B = PIPERX0EQLPNEWTXCOEFFORPRESET_A11_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX0EQLPNEWTXCOEFFORPRESET_A12_B = PIPERX0EQLPNEWTXCOEFFORPRESET_A12_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX0EQLPNEWTXCOEFFORPRESET_A13_B = PIPERX0EQLPNEWTXCOEFFORPRESET_A13_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX0EQLPNEWTXCOEFFORPRESET_A14_B = PIPERX0EQLPNEWTXCOEFFORPRESET_A14_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX0EQLPNEWTXCOEFFORPRESET_A15_B = PIPERX0EQLPNEWTXCOEFFORPRESET_A15_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX0EQLPNEWTXCOEFFORPRESET_A16_B = PIPERX0EQLPNEWTXCOEFFORPRESET_A16_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX0EQLPNEWTXCOEFFORPRESET_A17_B = PIPERX0EQLPNEWTXCOEFFORPRESET_A17_B; // net ID: PIPERX0EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX0PHYSTATUS_A0_B = PIPERX0PHYSTATUS_A0_B; // net ID: PIPERX0PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX0STARTBLOCK_A0_B = PIPERX0STARTBLOCK_A0_B; // net ID: PIPERX0STARTBLOCK lsb: 0  msb: 0 INPUT
			this->PIPERX0STATUS_A0_B = PIPERX0STATUS_A0_B; // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX0STATUS_A1_B = PIPERX0STATUS_A1_B; // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX0STATUS_A2_B = PIPERX0STATUS_A2_B; // net ID: PIPERX0STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX0SYNCHEADER_A0_B = PIPERX0SYNCHEADER_A0_B; // net ID: PIPERX0SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX0SYNCHEADER_A1_B = PIPERX0SYNCHEADER_A1_B; // net ID: PIPERX0SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX0VALID_A0_B = PIPERX0VALID_A0_B; // net ID: PIPERX0VALID lsb: 0  msb: 0 INPUT
			this->PIPERX1CHARISK_A0_B = PIPERX1CHARISK_A0_B; // net ID: PIPERX1CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX1CHARISK_A1_B = PIPERX1CHARISK_A1_B; // net ID: PIPERX1CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX1DATA_A0_B = PIPERX1DATA_A0_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A1_B = PIPERX1DATA_A1_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A2_B = PIPERX1DATA_A2_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A3_B = PIPERX1DATA_A3_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A4_B = PIPERX1DATA_A4_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A5_B = PIPERX1DATA_A5_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A6_B = PIPERX1DATA_A6_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A7_B = PIPERX1DATA_A7_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A8_B = PIPERX1DATA_A8_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A9_B = PIPERX1DATA_A9_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A10_B = PIPERX1DATA_A10_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A11_B = PIPERX1DATA_A11_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A12_B = PIPERX1DATA_A12_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A13_B = PIPERX1DATA_A13_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A14_B = PIPERX1DATA_A14_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A15_B = PIPERX1DATA_A15_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A16_B = PIPERX1DATA_A16_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A17_B = PIPERX1DATA_A17_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A18_B = PIPERX1DATA_A18_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A19_B = PIPERX1DATA_A19_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A20_B = PIPERX1DATA_A20_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A21_B = PIPERX1DATA_A21_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A22_B = PIPERX1DATA_A22_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A23_B = PIPERX1DATA_A23_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A24_B = PIPERX1DATA_A24_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A25_B = PIPERX1DATA_A25_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A26_B = PIPERX1DATA_A26_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A27_B = PIPERX1DATA_A27_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A28_B = PIPERX1DATA_A28_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A29_B = PIPERX1DATA_A29_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A30_B = PIPERX1DATA_A30_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATA_A31_B = PIPERX1DATA_A31_B; // net ID: PIPERX1DATA lsb: 0  msb: 31 INPUT
			this->PIPERX1DATAVALID_A0_B = PIPERX1DATAVALID_A0_B; // net ID: PIPERX1DATAVALID lsb: 0  msb: 0 INPUT
			this->PIPERX1ELECIDLE_A0_B = PIPERX1ELECIDLE_A0_B; // net ID: PIPERX1ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX1EQDONE_A0_B = PIPERX1EQDONE_A0_B; // net ID: PIPERX1EQDONE lsb: 0  msb: 0 INPUT
			this->PIPERX1EQLPADAPTDONE_A0_B = PIPERX1EQLPADAPTDONE_A0_B; // net ID: PIPERX1EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			this->PIPERX1EQLPLFFSSEL_A0_B = PIPERX1EQLPLFFSSEL_A0_B; // net ID: PIPERX1EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			this->PIPERX1EQLPNEWTXCOEFFORPRESET_A0_B = PIPERX1EQLPNEWTXCOEFFORPRESET_A0_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX1EQLPNEWTXCOEFFORPRESET_A1_B = PIPERX1EQLPNEWTXCOEFFORPRESET_A1_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX1EQLPNEWTXCOEFFORPRESET_A2_B = PIPERX1EQLPNEWTXCOEFFORPRESET_A2_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX1EQLPNEWTXCOEFFORPRESET_A3_B = PIPERX1EQLPNEWTXCOEFFORPRESET_A3_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX1EQLPNEWTXCOEFFORPRESET_A4_B = PIPERX1EQLPNEWTXCOEFFORPRESET_A4_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX1EQLPNEWTXCOEFFORPRESET_A5_B = PIPERX1EQLPNEWTXCOEFFORPRESET_A5_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX1EQLPNEWTXCOEFFORPRESET_A6_B = PIPERX1EQLPNEWTXCOEFFORPRESET_A6_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX1EQLPNEWTXCOEFFORPRESET_A7_B = PIPERX1EQLPNEWTXCOEFFORPRESET_A7_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX1EQLPNEWTXCOEFFORPRESET_A8_B = PIPERX1EQLPNEWTXCOEFFORPRESET_A8_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX1EQLPNEWTXCOEFFORPRESET_A9_B = PIPERX1EQLPNEWTXCOEFFORPRESET_A9_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX1EQLPNEWTXCOEFFORPRESET_A10_B = PIPERX1EQLPNEWTXCOEFFORPRESET_A10_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX1EQLPNEWTXCOEFFORPRESET_A11_B = PIPERX1EQLPNEWTXCOEFFORPRESET_A11_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX1EQLPNEWTXCOEFFORPRESET_A12_B = PIPERX1EQLPNEWTXCOEFFORPRESET_A12_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX1EQLPNEWTXCOEFFORPRESET_A13_B = PIPERX1EQLPNEWTXCOEFFORPRESET_A13_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX1EQLPNEWTXCOEFFORPRESET_A14_B = PIPERX1EQLPNEWTXCOEFFORPRESET_A14_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX1EQLPNEWTXCOEFFORPRESET_A15_B = PIPERX1EQLPNEWTXCOEFFORPRESET_A15_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX1EQLPNEWTXCOEFFORPRESET_A16_B = PIPERX1EQLPNEWTXCOEFFORPRESET_A16_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX1EQLPNEWTXCOEFFORPRESET_A17_B = PIPERX1EQLPNEWTXCOEFFORPRESET_A17_B; // net ID: PIPERX1EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX1PHYSTATUS_A0_B = PIPERX1PHYSTATUS_A0_B; // net ID: PIPERX1PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX1STARTBLOCK_A0_B = PIPERX1STARTBLOCK_A0_B; // net ID: PIPERX1STARTBLOCK lsb: 0  msb: 0 INPUT
			this->PIPERX1STATUS_A0_B = PIPERX1STATUS_A0_B; // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX1STATUS_A1_B = PIPERX1STATUS_A1_B; // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX1STATUS_A2_B = PIPERX1STATUS_A2_B; // net ID: PIPERX1STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX1SYNCHEADER_A0_B = PIPERX1SYNCHEADER_A0_B; // net ID: PIPERX1SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX1SYNCHEADER_A1_B = PIPERX1SYNCHEADER_A1_B; // net ID: PIPERX1SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX1VALID_A0_B = PIPERX1VALID_A0_B; // net ID: PIPERX1VALID lsb: 0  msb: 0 INPUT
			this->PIPERX2CHARISK_A0_B = PIPERX2CHARISK_A0_B; // net ID: PIPERX2CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX2CHARISK_A1_B = PIPERX2CHARISK_A1_B; // net ID: PIPERX2CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX2DATA_A0_B = PIPERX2DATA_A0_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A1_B = PIPERX2DATA_A1_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A2_B = PIPERX2DATA_A2_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A3_B = PIPERX2DATA_A3_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A4_B = PIPERX2DATA_A4_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A5_B = PIPERX2DATA_A5_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A6_B = PIPERX2DATA_A6_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A7_B = PIPERX2DATA_A7_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A8_B = PIPERX2DATA_A8_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A9_B = PIPERX2DATA_A9_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A10_B = PIPERX2DATA_A10_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A11_B = PIPERX2DATA_A11_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A12_B = PIPERX2DATA_A12_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A13_B = PIPERX2DATA_A13_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A14_B = PIPERX2DATA_A14_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A15_B = PIPERX2DATA_A15_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A16_B = PIPERX2DATA_A16_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A17_B = PIPERX2DATA_A17_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A18_B = PIPERX2DATA_A18_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A19_B = PIPERX2DATA_A19_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A20_B = PIPERX2DATA_A20_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A21_B = PIPERX2DATA_A21_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A22_B = PIPERX2DATA_A22_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A23_B = PIPERX2DATA_A23_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A24_B = PIPERX2DATA_A24_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A25_B = PIPERX2DATA_A25_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A26_B = PIPERX2DATA_A26_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A27_B = PIPERX2DATA_A27_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A28_B = PIPERX2DATA_A28_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A29_B = PIPERX2DATA_A29_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A30_B = PIPERX2DATA_A30_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATA_A31_B = PIPERX2DATA_A31_B; // net ID: PIPERX2DATA lsb: 0  msb: 31 INPUT
			this->PIPERX2DATAVALID_A0_B = PIPERX2DATAVALID_A0_B; // net ID: PIPERX2DATAVALID lsb: 0  msb: 0 INPUT
			this->PIPERX2ELECIDLE_A0_B = PIPERX2ELECIDLE_A0_B; // net ID: PIPERX2ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX2EQDONE_A0_B = PIPERX2EQDONE_A0_B; // net ID: PIPERX2EQDONE lsb: 0  msb: 0 INPUT
			this->PIPERX2EQLPADAPTDONE_A0_B = PIPERX2EQLPADAPTDONE_A0_B; // net ID: PIPERX2EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			this->PIPERX2EQLPLFFSSEL_A0_B = PIPERX2EQLPLFFSSEL_A0_B; // net ID: PIPERX2EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			this->PIPERX2EQLPNEWTXCOEFFORPRESET_A0_B = PIPERX2EQLPNEWTXCOEFFORPRESET_A0_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX2EQLPNEWTXCOEFFORPRESET_A1_B = PIPERX2EQLPNEWTXCOEFFORPRESET_A1_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX2EQLPNEWTXCOEFFORPRESET_A2_B = PIPERX2EQLPNEWTXCOEFFORPRESET_A2_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX2EQLPNEWTXCOEFFORPRESET_A3_B = PIPERX2EQLPNEWTXCOEFFORPRESET_A3_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX2EQLPNEWTXCOEFFORPRESET_A4_B = PIPERX2EQLPNEWTXCOEFFORPRESET_A4_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX2EQLPNEWTXCOEFFORPRESET_A5_B = PIPERX2EQLPNEWTXCOEFFORPRESET_A5_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX2EQLPNEWTXCOEFFORPRESET_A6_B = PIPERX2EQLPNEWTXCOEFFORPRESET_A6_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX2EQLPNEWTXCOEFFORPRESET_A7_B = PIPERX2EQLPNEWTXCOEFFORPRESET_A7_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX2EQLPNEWTXCOEFFORPRESET_A8_B = PIPERX2EQLPNEWTXCOEFFORPRESET_A8_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX2EQLPNEWTXCOEFFORPRESET_A9_B = PIPERX2EQLPNEWTXCOEFFORPRESET_A9_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX2EQLPNEWTXCOEFFORPRESET_A10_B = PIPERX2EQLPNEWTXCOEFFORPRESET_A10_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX2EQLPNEWTXCOEFFORPRESET_A11_B = PIPERX2EQLPNEWTXCOEFFORPRESET_A11_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX2EQLPNEWTXCOEFFORPRESET_A12_B = PIPERX2EQLPNEWTXCOEFFORPRESET_A12_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX2EQLPNEWTXCOEFFORPRESET_A13_B = PIPERX2EQLPNEWTXCOEFFORPRESET_A13_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX2EQLPNEWTXCOEFFORPRESET_A14_B = PIPERX2EQLPNEWTXCOEFFORPRESET_A14_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX2EQLPNEWTXCOEFFORPRESET_A15_B = PIPERX2EQLPNEWTXCOEFFORPRESET_A15_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX2EQLPNEWTXCOEFFORPRESET_A16_B = PIPERX2EQLPNEWTXCOEFFORPRESET_A16_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX2EQLPNEWTXCOEFFORPRESET_A17_B = PIPERX2EQLPNEWTXCOEFFORPRESET_A17_B; // net ID: PIPERX2EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX2PHYSTATUS_A0_B = PIPERX2PHYSTATUS_A0_B; // net ID: PIPERX2PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX2STARTBLOCK_A0_B = PIPERX2STARTBLOCK_A0_B; // net ID: PIPERX2STARTBLOCK lsb: 0  msb: 0 INPUT
			this->PIPERX2STATUS_A0_B = PIPERX2STATUS_A0_B; // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX2STATUS_A1_B = PIPERX2STATUS_A1_B; // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX2STATUS_A2_B = PIPERX2STATUS_A2_B; // net ID: PIPERX2STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX2SYNCHEADER_A0_B = PIPERX2SYNCHEADER_A0_B; // net ID: PIPERX2SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX2SYNCHEADER_A1_B = PIPERX2SYNCHEADER_A1_B; // net ID: PIPERX2SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX2VALID_A0_B = PIPERX2VALID_A0_B; // net ID: PIPERX2VALID lsb: 0  msb: 0 INPUT
			this->PIPERX3CHARISK_A0_B = PIPERX3CHARISK_A0_B; // net ID: PIPERX3CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX3CHARISK_A1_B = PIPERX3CHARISK_A1_B; // net ID: PIPERX3CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX3DATA_A0_B = PIPERX3DATA_A0_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A1_B = PIPERX3DATA_A1_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A2_B = PIPERX3DATA_A2_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A3_B = PIPERX3DATA_A3_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A4_B = PIPERX3DATA_A4_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A5_B = PIPERX3DATA_A5_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A6_B = PIPERX3DATA_A6_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A7_B = PIPERX3DATA_A7_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A8_B = PIPERX3DATA_A8_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A9_B = PIPERX3DATA_A9_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A10_B = PIPERX3DATA_A10_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A11_B = PIPERX3DATA_A11_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A12_B = PIPERX3DATA_A12_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A13_B = PIPERX3DATA_A13_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A14_B = PIPERX3DATA_A14_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A15_B = PIPERX3DATA_A15_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A16_B = PIPERX3DATA_A16_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A17_B = PIPERX3DATA_A17_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A18_B = PIPERX3DATA_A18_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A19_B = PIPERX3DATA_A19_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A20_B = PIPERX3DATA_A20_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A21_B = PIPERX3DATA_A21_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A22_B = PIPERX3DATA_A22_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A23_B = PIPERX3DATA_A23_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A24_B = PIPERX3DATA_A24_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A25_B = PIPERX3DATA_A25_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A26_B = PIPERX3DATA_A26_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A27_B = PIPERX3DATA_A27_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A28_B = PIPERX3DATA_A28_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A29_B = PIPERX3DATA_A29_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A30_B = PIPERX3DATA_A30_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATA_A31_B = PIPERX3DATA_A31_B; // net ID: PIPERX3DATA lsb: 0  msb: 31 INPUT
			this->PIPERX3DATAVALID_A0_B = PIPERX3DATAVALID_A0_B; // net ID: PIPERX3DATAVALID lsb: 0  msb: 0 INPUT
			this->PIPERX3ELECIDLE_A0_B = PIPERX3ELECIDLE_A0_B; // net ID: PIPERX3ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX3EQDONE_A0_B = PIPERX3EQDONE_A0_B; // net ID: PIPERX3EQDONE lsb: 0  msb: 0 INPUT
			this->PIPERX3EQLPADAPTDONE_A0_B = PIPERX3EQLPADAPTDONE_A0_B; // net ID: PIPERX3EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			this->PIPERX3EQLPLFFSSEL_A0_B = PIPERX3EQLPLFFSSEL_A0_B; // net ID: PIPERX3EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			this->PIPERX3EQLPNEWTXCOEFFORPRESET_A0_B = PIPERX3EQLPNEWTXCOEFFORPRESET_A0_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX3EQLPNEWTXCOEFFORPRESET_A1_B = PIPERX3EQLPNEWTXCOEFFORPRESET_A1_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX3EQLPNEWTXCOEFFORPRESET_A2_B = PIPERX3EQLPNEWTXCOEFFORPRESET_A2_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX3EQLPNEWTXCOEFFORPRESET_A3_B = PIPERX3EQLPNEWTXCOEFFORPRESET_A3_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX3EQLPNEWTXCOEFFORPRESET_A4_B = PIPERX3EQLPNEWTXCOEFFORPRESET_A4_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX3EQLPNEWTXCOEFFORPRESET_A5_B = PIPERX3EQLPNEWTXCOEFFORPRESET_A5_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX3EQLPNEWTXCOEFFORPRESET_A6_B = PIPERX3EQLPNEWTXCOEFFORPRESET_A6_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX3EQLPNEWTXCOEFFORPRESET_A7_B = PIPERX3EQLPNEWTXCOEFFORPRESET_A7_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX3EQLPNEWTXCOEFFORPRESET_A8_B = PIPERX3EQLPNEWTXCOEFFORPRESET_A8_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX3EQLPNEWTXCOEFFORPRESET_A9_B = PIPERX3EQLPNEWTXCOEFFORPRESET_A9_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX3EQLPNEWTXCOEFFORPRESET_A10_B = PIPERX3EQLPNEWTXCOEFFORPRESET_A10_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX3EQLPNEWTXCOEFFORPRESET_A11_B = PIPERX3EQLPNEWTXCOEFFORPRESET_A11_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX3EQLPNEWTXCOEFFORPRESET_A12_B = PIPERX3EQLPNEWTXCOEFFORPRESET_A12_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX3EQLPNEWTXCOEFFORPRESET_A13_B = PIPERX3EQLPNEWTXCOEFFORPRESET_A13_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX3EQLPNEWTXCOEFFORPRESET_A14_B = PIPERX3EQLPNEWTXCOEFFORPRESET_A14_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX3EQLPNEWTXCOEFFORPRESET_A15_B = PIPERX3EQLPNEWTXCOEFFORPRESET_A15_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX3EQLPNEWTXCOEFFORPRESET_A16_B = PIPERX3EQLPNEWTXCOEFFORPRESET_A16_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX3EQLPNEWTXCOEFFORPRESET_A17_B = PIPERX3EQLPNEWTXCOEFFORPRESET_A17_B; // net ID: PIPERX3EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX3PHYSTATUS_A0_B = PIPERX3PHYSTATUS_A0_B; // net ID: PIPERX3PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX3STARTBLOCK_A0_B = PIPERX3STARTBLOCK_A0_B; // net ID: PIPERX3STARTBLOCK lsb: 0  msb: 0 INPUT
			this->PIPERX3STATUS_A0_B = PIPERX3STATUS_A0_B; // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX3STATUS_A1_B = PIPERX3STATUS_A1_B; // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX3STATUS_A2_B = PIPERX3STATUS_A2_B; // net ID: PIPERX3STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX3SYNCHEADER_A0_B = PIPERX3SYNCHEADER_A0_B; // net ID: PIPERX3SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX3SYNCHEADER_A1_B = PIPERX3SYNCHEADER_A1_B; // net ID: PIPERX3SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX3VALID_A0_B = PIPERX3VALID_A0_B; // net ID: PIPERX3VALID lsb: 0  msb: 0 INPUT
			this->PIPERX4CHARISK_A0_B = PIPERX4CHARISK_A0_B; // net ID: PIPERX4CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX4CHARISK_A1_B = PIPERX4CHARISK_A1_B; // net ID: PIPERX4CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX4DATA_A0_B = PIPERX4DATA_A0_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A1_B = PIPERX4DATA_A1_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A2_B = PIPERX4DATA_A2_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A3_B = PIPERX4DATA_A3_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A4_B = PIPERX4DATA_A4_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A5_B = PIPERX4DATA_A5_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A6_B = PIPERX4DATA_A6_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A7_B = PIPERX4DATA_A7_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A8_B = PIPERX4DATA_A8_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A9_B = PIPERX4DATA_A9_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A10_B = PIPERX4DATA_A10_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A11_B = PIPERX4DATA_A11_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A12_B = PIPERX4DATA_A12_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A13_B = PIPERX4DATA_A13_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A14_B = PIPERX4DATA_A14_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A15_B = PIPERX4DATA_A15_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A16_B = PIPERX4DATA_A16_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A17_B = PIPERX4DATA_A17_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A18_B = PIPERX4DATA_A18_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A19_B = PIPERX4DATA_A19_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A20_B = PIPERX4DATA_A20_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A21_B = PIPERX4DATA_A21_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A22_B = PIPERX4DATA_A22_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A23_B = PIPERX4DATA_A23_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A24_B = PIPERX4DATA_A24_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A25_B = PIPERX4DATA_A25_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A26_B = PIPERX4DATA_A26_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A27_B = PIPERX4DATA_A27_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A28_B = PIPERX4DATA_A28_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A29_B = PIPERX4DATA_A29_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A30_B = PIPERX4DATA_A30_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATA_A31_B = PIPERX4DATA_A31_B; // net ID: PIPERX4DATA lsb: 0  msb: 31 INPUT
			this->PIPERX4DATAVALID_A0_B = PIPERX4DATAVALID_A0_B; // net ID: PIPERX4DATAVALID lsb: 0  msb: 0 INPUT
			this->PIPERX4ELECIDLE_A0_B = PIPERX4ELECIDLE_A0_B; // net ID: PIPERX4ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX4EQDONE_A0_B = PIPERX4EQDONE_A0_B; // net ID: PIPERX4EQDONE lsb: 0  msb: 0 INPUT
			this->PIPERX4EQLPADAPTDONE_A0_B = PIPERX4EQLPADAPTDONE_A0_B; // net ID: PIPERX4EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			this->PIPERX4EQLPLFFSSEL_A0_B = PIPERX4EQLPLFFSSEL_A0_B; // net ID: PIPERX4EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			this->PIPERX4EQLPNEWTXCOEFFORPRESET_A0_B = PIPERX4EQLPNEWTXCOEFFORPRESET_A0_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX4EQLPNEWTXCOEFFORPRESET_A1_B = PIPERX4EQLPNEWTXCOEFFORPRESET_A1_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX4EQLPNEWTXCOEFFORPRESET_A2_B = PIPERX4EQLPNEWTXCOEFFORPRESET_A2_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX4EQLPNEWTXCOEFFORPRESET_A3_B = PIPERX4EQLPNEWTXCOEFFORPRESET_A3_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX4EQLPNEWTXCOEFFORPRESET_A4_B = PIPERX4EQLPNEWTXCOEFFORPRESET_A4_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX4EQLPNEWTXCOEFFORPRESET_A5_B = PIPERX4EQLPNEWTXCOEFFORPRESET_A5_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX4EQLPNEWTXCOEFFORPRESET_A6_B = PIPERX4EQLPNEWTXCOEFFORPRESET_A6_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX4EQLPNEWTXCOEFFORPRESET_A7_B = PIPERX4EQLPNEWTXCOEFFORPRESET_A7_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX4EQLPNEWTXCOEFFORPRESET_A8_B = PIPERX4EQLPNEWTXCOEFFORPRESET_A8_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX4EQLPNEWTXCOEFFORPRESET_A9_B = PIPERX4EQLPNEWTXCOEFFORPRESET_A9_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX4EQLPNEWTXCOEFFORPRESET_A10_B = PIPERX4EQLPNEWTXCOEFFORPRESET_A10_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX4EQLPNEWTXCOEFFORPRESET_A11_B = PIPERX4EQLPNEWTXCOEFFORPRESET_A11_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX4EQLPNEWTXCOEFFORPRESET_A12_B = PIPERX4EQLPNEWTXCOEFFORPRESET_A12_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX4EQLPNEWTXCOEFFORPRESET_A13_B = PIPERX4EQLPNEWTXCOEFFORPRESET_A13_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX4EQLPNEWTXCOEFFORPRESET_A14_B = PIPERX4EQLPNEWTXCOEFFORPRESET_A14_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX4EQLPNEWTXCOEFFORPRESET_A15_B = PIPERX4EQLPNEWTXCOEFFORPRESET_A15_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX4EQLPNEWTXCOEFFORPRESET_A16_B = PIPERX4EQLPNEWTXCOEFFORPRESET_A16_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX4EQLPNEWTXCOEFFORPRESET_A17_B = PIPERX4EQLPNEWTXCOEFFORPRESET_A17_B; // net ID: PIPERX4EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX4PHYSTATUS_A0_B = PIPERX4PHYSTATUS_A0_B; // net ID: PIPERX4PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX4STARTBLOCK_A0_B = PIPERX4STARTBLOCK_A0_B; // net ID: PIPERX4STARTBLOCK lsb: 0  msb: 0 INPUT
			this->PIPERX4STATUS_A0_B = PIPERX4STATUS_A0_B; // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX4STATUS_A1_B = PIPERX4STATUS_A1_B; // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX4STATUS_A2_B = PIPERX4STATUS_A2_B; // net ID: PIPERX4STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX4SYNCHEADER_A0_B = PIPERX4SYNCHEADER_A0_B; // net ID: PIPERX4SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX4SYNCHEADER_A1_B = PIPERX4SYNCHEADER_A1_B; // net ID: PIPERX4SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX4VALID_A0_B = PIPERX4VALID_A0_B; // net ID: PIPERX4VALID lsb: 0  msb: 0 INPUT
			this->PIPERX5CHARISK_A0_B = PIPERX5CHARISK_A0_B; // net ID: PIPERX5CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX5CHARISK_A1_B = PIPERX5CHARISK_A1_B; // net ID: PIPERX5CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX5DATA_A0_B = PIPERX5DATA_A0_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A1_B = PIPERX5DATA_A1_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A2_B = PIPERX5DATA_A2_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A3_B = PIPERX5DATA_A3_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A4_B = PIPERX5DATA_A4_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A5_B = PIPERX5DATA_A5_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A6_B = PIPERX5DATA_A6_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A7_B = PIPERX5DATA_A7_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A8_B = PIPERX5DATA_A8_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A9_B = PIPERX5DATA_A9_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A10_B = PIPERX5DATA_A10_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A11_B = PIPERX5DATA_A11_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A12_B = PIPERX5DATA_A12_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A13_B = PIPERX5DATA_A13_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A14_B = PIPERX5DATA_A14_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A15_B = PIPERX5DATA_A15_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A16_B = PIPERX5DATA_A16_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A17_B = PIPERX5DATA_A17_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A18_B = PIPERX5DATA_A18_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A19_B = PIPERX5DATA_A19_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A20_B = PIPERX5DATA_A20_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A21_B = PIPERX5DATA_A21_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A22_B = PIPERX5DATA_A22_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A23_B = PIPERX5DATA_A23_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A24_B = PIPERX5DATA_A24_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A25_B = PIPERX5DATA_A25_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A26_B = PIPERX5DATA_A26_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A27_B = PIPERX5DATA_A27_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A28_B = PIPERX5DATA_A28_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A29_B = PIPERX5DATA_A29_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A30_B = PIPERX5DATA_A30_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATA_A31_B = PIPERX5DATA_A31_B; // net ID: PIPERX5DATA lsb: 0  msb: 31 INPUT
			this->PIPERX5DATAVALID_A0_B = PIPERX5DATAVALID_A0_B; // net ID: PIPERX5DATAVALID lsb: 0  msb: 0 INPUT
			this->PIPERX5ELECIDLE_A0_B = PIPERX5ELECIDLE_A0_B; // net ID: PIPERX5ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX5EQDONE_A0_B = PIPERX5EQDONE_A0_B; // net ID: PIPERX5EQDONE lsb: 0  msb: 0 INPUT
			this->PIPERX5EQLPADAPTDONE_A0_B = PIPERX5EQLPADAPTDONE_A0_B; // net ID: PIPERX5EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			this->PIPERX5EQLPLFFSSEL_A0_B = PIPERX5EQLPLFFSSEL_A0_B; // net ID: PIPERX5EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			this->PIPERX5EQLPNEWTXCOEFFORPRESET_A0_B = PIPERX5EQLPNEWTXCOEFFORPRESET_A0_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX5EQLPNEWTXCOEFFORPRESET_A1_B = PIPERX5EQLPNEWTXCOEFFORPRESET_A1_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX5EQLPNEWTXCOEFFORPRESET_A2_B = PIPERX5EQLPNEWTXCOEFFORPRESET_A2_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX5EQLPNEWTXCOEFFORPRESET_A3_B = PIPERX5EQLPNEWTXCOEFFORPRESET_A3_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX5EQLPNEWTXCOEFFORPRESET_A4_B = PIPERX5EQLPNEWTXCOEFFORPRESET_A4_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX5EQLPNEWTXCOEFFORPRESET_A5_B = PIPERX5EQLPNEWTXCOEFFORPRESET_A5_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX5EQLPNEWTXCOEFFORPRESET_A6_B = PIPERX5EQLPNEWTXCOEFFORPRESET_A6_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX5EQLPNEWTXCOEFFORPRESET_A7_B = PIPERX5EQLPNEWTXCOEFFORPRESET_A7_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX5EQLPNEWTXCOEFFORPRESET_A8_B = PIPERX5EQLPNEWTXCOEFFORPRESET_A8_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX5EQLPNEWTXCOEFFORPRESET_A9_B = PIPERX5EQLPNEWTXCOEFFORPRESET_A9_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX5EQLPNEWTXCOEFFORPRESET_A10_B = PIPERX5EQLPNEWTXCOEFFORPRESET_A10_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX5EQLPNEWTXCOEFFORPRESET_A11_B = PIPERX5EQLPNEWTXCOEFFORPRESET_A11_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX5EQLPNEWTXCOEFFORPRESET_A12_B = PIPERX5EQLPNEWTXCOEFFORPRESET_A12_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX5EQLPNEWTXCOEFFORPRESET_A13_B = PIPERX5EQLPNEWTXCOEFFORPRESET_A13_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX5EQLPNEWTXCOEFFORPRESET_A14_B = PIPERX5EQLPNEWTXCOEFFORPRESET_A14_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX5EQLPNEWTXCOEFFORPRESET_A15_B = PIPERX5EQLPNEWTXCOEFFORPRESET_A15_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX5EQLPNEWTXCOEFFORPRESET_A16_B = PIPERX5EQLPNEWTXCOEFFORPRESET_A16_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX5EQLPNEWTXCOEFFORPRESET_A17_B = PIPERX5EQLPNEWTXCOEFFORPRESET_A17_B; // net ID: PIPERX5EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX5PHYSTATUS_A0_B = PIPERX5PHYSTATUS_A0_B; // net ID: PIPERX5PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX5STARTBLOCK_A0_B = PIPERX5STARTBLOCK_A0_B; // net ID: PIPERX5STARTBLOCK lsb: 0  msb: 0 INPUT
			this->PIPERX5STATUS_A0_B = PIPERX5STATUS_A0_B; // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX5STATUS_A1_B = PIPERX5STATUS_A1_B; // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX5STATUS_A2_B = PIPERX5STATUS_A2_B; // net ID: PIPERX5STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX5SYNCHEADER_A0_B = PIPERX5SYNCHEADER_A0_B; // net ID: PIPERX5SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX5SYNCHEADER_A1_B = PIPERX5SYNCHEADER_A1_B; // net ID: PIPERX5SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX5VALID_A0_B = PIPERX5VALID_A0_B; // net ID: PIPERX5VALID lsb: 0  msb: 0 INPUT
			this->PIPERX6CHARISK_A0_B = PIPERX6CHARISK_A0_B; // net ID: PIPERX6CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX6CHARISK_A1_B = PIPERX6CHARISK_A1_B; // net ID: PIPERX6CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX6DATA_A0_B = PIPERX6DATA_A0_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A1_B = PIPERX6DATA_A1_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A2_B = PIPERX6DATA_A2_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A3_B = PIPERX6DATA_A3_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A4_B = PIPERX6DATA_A4_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A5_B = PIPERX6DATA_A5_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A6_B = PIPERX6DATA_A6_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A7_B = PIPERX6DATA_A7_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A8_B = PIPERX6DATA_A8_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A9_B = PIPERX6DATA_A9_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A10_B = PIPERX6DATA_A10_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A11_B = PIPERX6DATA_A11_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A12_B = PIPERX6DATA_A12_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A13_B = PIPERX6DATA_A13_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A14_B = PIPERX6DATA_A14_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A15_B = PIPERX6DATA_A15_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A16_B = PIPERX6DATA_A16_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A17_B = PIPERX6DATA_A17_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A18_B = PIPERX6DATA_A18_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A19_B = PIPERX6DATA_A19_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A20_B = PIPERX6DATA_A20_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A21_B = PIPERX6DATA_A21_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A22_B = PIPERX6DATA_A22_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A23_B = PIPERX6DATA_A23_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A24_B = PIPERX6DATA_A24_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A25_B = PIPERX6DATA_A25_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A26_B = PIPERX6DATA_A26_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A27_B = PIPERX6DATA_A27_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A28_B = PIPERX6DATA_A28_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A29_B = PIPERX6DATA_A29_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A30_B = PIPERX6DATA_A30_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATA_A31_B = PIPERX6DATA_A31_B; // net ID: PIPERX6DATA lsb: 0  msb: 31 INPUT
			this->PIPERX6DATAVALID_A0_B = PIPERX6DATAVALID_A0_B; // net ID: PIPERX6DATAVALID lsb: 0  msb: 0 INPUT
			this->PIPERX6ELECIDLE_A0_B = PIPERX6ELECIDLE_A0_B; // net ID: PIPERX6ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX6EQDONE_A0_B = PIPERX6EQDONE_A0_B; // net ID: PIPERX6EQDONE lsb: 0  msb: 0 INPUT
			this->PIPERX6EQLPADAPTDONE_A0_B = PIPERX6EQLPADAPTDONE_A0_B; // net ID: PIPERX6EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			this->PIPERX6EQLPLFFSSEL_A0_B = PIPERX6EQLPLFFSSEL_A0_B; // net ID: PIPERX6EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			this->PIPERX6EQLPNEWTXCOEFFORPRESET_A0_B = PIPERX6EQLPNEWTXCOEFFORPRESET_A0_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX6EQLPNEWTXCOEFFORPRESET_A1_B = PIPERX6EQLPNEWTXCOEFFORPRESET_A1_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX6EQLPNEWTXCOEFFORPRESET_A2_B = PIPERX6EQLPNEWTXCOEFFORPRESET_A2_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX6EQLPNEWTXCOEFFORPRESET_A3_B = PIPERX6EQLPNEWTXCOEFFORPRESET_A3_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX6EQLPNEWTXCOEFFORPRESET_A4_B = PIPERX6EQLPNEWTXCOEFFORPRESET_A4_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX6EQLPNEWTXCOEFFORPRESET_A5_B = PIPERX6EQLPNEWTXCOEFFORPRESET_A5_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX6EQLPNEWTXCOEFFORPRESET_A6_B = PIPERX6EQLPNEWTXCOEFFORPRESET_A6_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX6EQLPNEWTXCOEFFORPRESET_A7_B = PIPERX6EQLPNEWTXCOEFFORPRESET_A7_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX6EQLPNEWTXCOEFFORPRESET_A8_B = PIPERX6EQLPNEWTXCOEFFORPRESET_A8_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX6EQLPNEWTXCOEFFORPRESET_A9_B = PIPERX6EQLPNEWTXCOEFFORPRESET_A9_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX6EQLPNEWTXCOEFFORPRESET_A10_B = PIPERX6EQLPNEWTXCOEFFORPRESET_A10_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX6EQLPNEWTXCOEFFORPRESET_A11_B = PIPERX6EQLPNEWTXCOEFFORPRESET_A11_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX6EQLPNEWTXCOEFFORPRESET_A12_B = PIPERX6EQLPNEWTXCOEFFORPRESET_A12_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX6EQLPNEWTXCOEFFORPRESET_A13_B = PIPERX6EQLPNEWTXCOEFFORPRESET_A13_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX6EQLPNEWTXCOEFFORPRESET_A14_B = PIPERX6EQLPNEWTXCOEFFORPRESET_A14_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX6EQLPNEWTXCOEFFORPRESET_A15_B = PIPERX6EQLPNEWTXCOEFFORPRESET_A15_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX6EQLPNEWTXCOEFFORPRESET_A16_B = PIPERX6EQLPNEWTXCOEFFORPRESET_A16_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX6EQLPNEWTXCOEFFORPRESET_A17_B = PIPERX6EQLPNEWTXCOEFFORPRESET_A17_B; // net ID: PIPERX6EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX6PHYSTATUS_A0_B = PIPERX6PHYSTATUS_A0_B; // net ID: PIPERX6PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX6STARTBLOCK_A0_B = PIPERX6STARTBLOCK_A0_B; // net ID: PIPERX6STARTBLOCK lsb: 0  msb: 0 INPUT
			this->PIPERX6STATUS_A0_B = PIPERX6STATUS_A0_B; // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX6STATUS_A1_B = PIPERX6STATUS_A1_B; // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX6STATUS_A2_B = PIPERX6STATUS_A2_B; // net ID: PIPERX6STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX6SYNCHEADER_A0_B = PIPERX6SYNCHEADER_A0_B; // net ID: PIPERX6SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX6SYNCHEADER_A1_B = PIPERX6SYNCHEADER_A1_B; // net ID: PIPERX6SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX6VALID_A0_B = PIPERX6VALID_A0_B; // net ID: PIPERX6VALID lsb: 0  msb: 0 INPUT
			this->PIPERX7CHARISK_A0_B = PIPERX7CHARISK_A0_B; // net ID: PIPERX7CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX7CHARISK_A1_B = PIPERX7CHARISK_A1_B; // net ID: PIPERX7CHARISK lsb: 0  msb: 1 INPUT
			this->PIPERX7DATA_A0_B = PIPERX7DATA_A0_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A1_B = PIPERX7DATA_A1_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A2_B = PIPERX7DATA_A2_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A3_B = PIPERX7DATA_A3_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A4_B = PIPERX7DATA_A4_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A5_B = PIPERX7DATA_A5_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A6_B = PIPERX7DATA_A6_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A7_B = PIPERX7DATA_A7_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A8_B = PIPERX7DATA_A8_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A9_B = PIPERX7DATA_A9_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A10_B = PIPERX7DATA_A10_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A11_B = PIPERX7DATA_A11_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A12_B = PIPERX7DATA_A12_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A13_B = PIPERX7DATA_A13_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A14_B = PIPERX7DATA_A14_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A15_B = PIPERX7DATA_A15_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A16_B = PIPERX7DATA_A16_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A17_B = PIPERX7DATA_A17_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A18_B = PIPERX7DATA_A18_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A19_B = PIPERX7DATA_A19_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A20_B = PIPERX7DATA_A20_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A21_B = PIPERX7DATA_A21_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A22_B = PIPERX7DATA_A22_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A23_B = PIPERX7DATA_A23_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A24_B = PIPERX7DATA_A24_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A25_B = PIPERX7DATA_A25_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A26_B = PIPERX7DATA_A26_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A27_B = PIPERX7DATA_A27_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A28_B = PIPERX7DATA_A28_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A29_B = PIPERX7DATA_A29_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A30_B = PIPERX7DATA_A30_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATA_A31_B = PIPERX7DATA_A31_B; // net ID: PIPERX7DATA lsb: 0  msb: 31 INPUT
			this->PIPERX7DATAVALID_A0_B = PIPERX7DATAVALID_A0_B; // net ID: PIPERX7DATAVALID lsb: 0  msb: 0 INPUT
			this->PIPERX7ELECIDLE_A0_B = PIPERX7ELECIDLE_A0_B; // net ID: PIPERX7ELECIDLE lsb: 0  msb: 0 INPUT
			this->PIPERX7EQDONE_A0_B = PIPERX7EQDONE_A0_B; // net ID: PIPERX7EQDONE lsb: 0  msb: 0 INPUT
			this->PIPERX7EQLPADAPTDONE_A0_B = PIPERX7EQLPADAPTDONE_A0_B; // net ID: PIPERX7EQLPADAPTDONE lsb: 0  msb: 0 INPUT
			this->PIPERX7EQLPLFFSSEL_A0_B = PIPERX7EQLPLFFSSEL_A0_B; // net ID: PIPERX7EQLPLFFSSEL lsb: 0  msb: 0 INPUT
			this->PIPERX7EQLPNEWTXCOEFFORPRESET_A0_B = PIPERX7EQLPNEWTXCOEFFORPRESET_A0_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX7EQLPNEWTXCOEFFORPRESET_A1_B = PIPERX7EQLPNEWTXCOEFFORPRESET_A1_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX7EQLPNEWTXCOEFFORPRESET_A2_B = PIPERX7EQLPNEWTXCOEFFORPRESET_A2_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX7EQLPNEWTXCOEFFORPRESET_A3_B = PIPERX7EQLPNEWTXCOEFFORPRESET_A3_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX7EQLPNEWTXCOEFFORPRESET_A4_B = PIPERX7EQLPNEWTXCOEFFORPRESET_A4_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX7EQLPNEWTXCOEFFORPRESET_A5_B = PIPERX7EQLPNEWTXCOEFFORPRESET_A5_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX7EQLPNEWTXCOEFFORPRESET_A6_B = PIPERX7EQLPNEWTXCOEFFORPRESET_A6_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX7EQLPNEWTXCOEFFORPRESET_A7_B = PIPERX7EQLPNEWTXCOEFFORPRESET_A7_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX7EQLPNEWTXCOEFFORPRESET_A8_B = PIPERX7EQLPNEWTXCOEFFORPRESET_A8_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX7EQLPNEWTXCOEFFORPRESET_A9_B = PIPERX7EQLPNEWTXCOEFFORPRESET_A9_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX7EQLPNEWTXCOEFFORPRESET_A10_B = PIPERX7EQLPNEWTXCOEFFORPRESET_A10_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX7EQLPNEWTXCOEFFORPRESET_A11_B = PIPERX7EQLPNEWTXCOEFFORPRESET_A11_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX7EQLPNEWTXCOEFFORPRESET_A12_B = PIPERX7EQLPNEWTXCOEFFORPRESET_A12_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX7EQLPNEWTXCOEFFORPRESET_A13_B = PIPERX7EQLPNEWTXCOEFFORPRESET_A13_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX7EQLPNEWTXCOEFFORPRESET_A14_B = PIPERX7EQLPNEWTXCOEFFORPRESET_A14_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX7EQLPNEWTXCOEFFORPRESET_A15_B = PIPERX7EQLPNEWTXCOEFFORPRESET_A15_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX7EQLPNEWTXCOEFFORPRESET_A16_B = PIPERX7EQLPNEWTXCOEFFORPRESET_A16_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX7EQLPNEWTXCOEFFORPRESET_A17_B = PIPERX7EQLPNEWTXCOEFFORPRESET_A17_B; // net ID: PIPERX7EQLPNEWTXCOEFFORPRESET lsb: 0  msb: 17 INPUT
			this->PIPERX7PHYSTATUS_A0_B = PIPERX7PHYSTATUS_A0_B; // net ID: PIPERX7PHYSTATUS lsb: 0  msb: 0 INPUT
			this->PIPERX7STARTBLOCK_A0_B = PIPERX7STARTBLOCK_A0_B; // net ID: PIPERX7STARTBLOCK lsb: 0  msb: 0 INPUT
			this->PIPERX7STATUS_A0_B = PIPERX7STATUS_A0_B; // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX7STATUS_A1_B = PIPERX7STATUS_A1_B; // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX7STATUS_A2_B = PIPERX7STATUS_A2_B; // net ID: PIPERX7STATUS lsb: 0  msb: 2 INPUT
			this->PIPERX7SYNCHEADER_A0_B = PIPERX7SYNCHEADER_A0_B; // net ID: PIPERX7SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX7SYNCHEADER_A1_B = PIPERX7SYNCHEADER_A1_B; // net ID: PIPERX7SYNCHEADER lsb: 0  msb: 1 INPUT
			this->PIPERX7VALID_A0_B = PIPERX7VALID_A0_B; // net ID: PIPERX7VALID lsb: 0  msb: 0 INPUT
			this->PIPETX0EQCOEFF_A0_B = PIPETX0EQCOEFF_A0_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX0EQCOEFF_A1_B = PIPETX0EQCOEFF_A1_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX0EQCOEFF_A2_B = PIPETX0EQCOEFF_A2_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX0EQCOEFF_A3_B = PIPETX0EQCOEFF_A3_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX0EQCOEFF_A4_B = PIPETX0EQCOEFF_A4_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX0EQCOEFF_A5_B = PIPETX0EQCOEFF_A5_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX0EQCOEFF_A6_B = PIPETX0EQCOEFF_A6_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX0EQCOEFF_A7_B = PIPETX0EQCOEFF_A7_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX0EQCOEFF_A8_B = PIPETX0EQCOEFF_A8_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX0EQCOEFF_A9_B = PIPETX0EQCOEFF_A9_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX0EQCOEFF_A10_B = PIPETX0EQCOEFF_A10_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX0EQCOEFF_A11_B = PIPETX0EQCOEFF_A11_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX0EQCOEFF_A12_B = PIPETX0EQCOEFF_A12_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX0EQCOEFF_A13_B = PIPETX0EQCOEFF_A13_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX0EQCOEFF_A14_B = PIPETX0EQCOEFF_A14_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX0EQCOEFF_A15_B = PIPETX0EQCOEFF_A15_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX0EQCOEFF_A16_B = PIPETX0EQCOEFF_A16_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX0EQCOEFF_A17_B = PIPETX0EQCOEFF_A17_B; // net ID: PIPETX0EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX0EQDONE_A0_B = PIPETX0EQDONE_A0_B; // net ID: PIPETX0EQDONE lsb: 0  msb: 0 INPUT
			this->PIPETX1EQCOEFF_A0_B = PIPETX1EQCOEFF_A0_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX1EQCOEFF_A1_B = PIPETX1EQCOEFF_A1_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX1EQCOEFF_A2_B = PIPETX1EQCOEFF_A2_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX1EQCOEFF_A3_B = PIPETX1EQCOEFF_A3_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX1EQCOEFF_A4_B = PIPETX1EQCOEFF_A4_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX1EQCOEFF_A5_B = PIPETX1EQCOEFF_A5_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX1EQCOEFF_A6_B = PIPETX1EQCOEFF_A6_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX1EQCOEFF_A7_B = PIPETX1EQCOEFF_A7_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX1EQCOEFF_A8_B = PIPETX1EQCOEFF_A8_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX1EQCOEFF_A9_B = PIPETX1EQCOEFF_A9_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX1EQCOEFF_A10_B = PIPETX1EQCOEFF_A10_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX1EQCOEFF_A11_B = PIPETX1EQCOEFF_A11_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX1EQCOEFF_A12_B = PIPETX1EQCOEFF_A12_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX1EQCOEFF_A13_B = PIPETX1EQCOEFF_A13_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX1EQCOEFF_A14_B = PIPETX1EQCOEFF_A14_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX1EQCOEFF_A15_B = PIPETX1EQCOEFF_A15_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX1EQCOEFF_A16_B = PIPETX1EQCOEFF_A16_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX1EQCOEFF_A17_B = PIPETX1EQCOEFF_A17_B; // net ID: PIPETX1EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX1EQDONE_A0_B = PIPETX1EQDONE_A0_B; // net ID: PIPETX1EQDONE lsb: 0  msb: 0 INPUT
			this->PIPETX2EQCOEFF_A0_B = PIPETX2EQCOEFF_A0_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX2EQCOEFF_A1_B = PIPETX2EQCOEFF_A1_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX2EQCOEFF_A2_B = PIPETX2EQCOEFF_A2_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX2EQCOEFF_A3_B = PIPETX2EQCOEFF_A3_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX2EQCOEFF_A4_B = PIPETX2EQCOEFF_A4_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX2EQCOEFF_A5_B = PIPETX2EQCOEFF_A5_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX2EQCOEFF_A6_B = PIPETX2EQCOEFF_A6_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX2EQCOEFF_A7_B = PIPETX2EQCOEFF_A7_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX2EQCOEFF_A8_B = PIPETX2EQCOEFF_A8_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX2EQCOEFF_A9_B = PIPETX2EQCOEFF_A9_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX2EQCOEFF_A10_B = PIPETX2EQCOEFF_A10_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX2EQCOEFF_A11_B = PIPETX2EQCOEFF_A11_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX2EQCOEFF_A12_B = PIPETX2EQCOEFF_A12_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX2EQCOEFF_A13_B = PIPETX2EQCOEFF_A13_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX2EQCOEFF_A14_B = PIPETX2EQCOEFF_A14_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX2EQCOEFF_A15_B = PIPETX2EQCOEFF_A15_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX2EQCOEFF_A16_B = PIPETX2EQCOEFF_A16_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX2EQCOEFF_A17_B = PIPETX2EQCOEFF_A17_B; // net ID: PIPETX2EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX2EQDONE_A0_B = PIPETX2EQDONE_A0_B; // net ID: PIPETX2EQDONE lsb: 0  msb: 0 INPUT
			this->PIPETX3EQCOEFF_A0_B = PIPETX3EQCOEFF_A0_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX3EQCOEFF_A1_B = PIPETX3EQCOEFF_A1_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX3EQCOEFF_A2_B = PIPETX3EQCOEFF_A2_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX3EQCOEFF_A3_B = PIPETX3EQCOEFF_A3_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX3EQCOEFF_A4_B = PIPETX3EQCOEFF_A4_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX3EQCOEFF_A5_B = PIPETX3EQCOEFF_A5_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX3EQCOEFF_A6_B = PIPETX3EQCOEFF_A6_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX3EQCOEFF_A7_B = PIPETX3EQCOEFF_A7_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX3EQCOEFF_A8_B = PIPETX3EQCOEFF_A8_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX3EQCOEFF_A9_B = PIPETX3EQCOEFF_A9_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX3EQCOEFF_A10_B = PIPETX3EQCOEFF_A10_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX3EQCOEFF_A11_B = PIPETX3EQCOEFF_A11_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX3EQCOEFF_A12_B = PIPETX3EQCOEFF_A12_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX3EQCOEFF_A13_B = PIPETX3EQCOEFF_A13_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX3EQCOEFF_A14_B = PIPETX3EQCOEFF_A14_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX3EQCOEFF_A15_B = PIPETX3EQCOEFF_A15_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX3EQCOEFF_A16_B = PIPETX3EQCOEFF_A16_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX3EQCOEFF_A17_B = PIPETX3EQCOEFF_A17_B; // net ID: PIPETX3EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX3EQDONE_A0_B = PIPETX3EQDONE_A0_B; // net ID: PIPETX3EQDONE lsb: 0  msb: 0 INPUT
			this->PIPETX4EQCOEFF_A0_B = PIPETX4EQCOEFF_A0_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX4EQCOEFF_A1_B = PIPETX4EQCOEFF_A1_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX4EQCOEFF_A2_B = PIPETX4EQCOEFF_A2_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX4EQCOEFF_A3_B = PIPETX4EQCOEFF_A3_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX4EQCOEFF_A4_B = PIPETX4EQCOEFF_A4_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX4EQCOEFF_A5_B = PIPETX4EQCOEFF_A5_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX4EQCOEFF_A6_B = PIPETX4EQCOEFF_A6_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX4EQCOEFF_A7_B = PIPETX4EQCOEFF_A7_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX4EQCOEFF_A8_B = PIPETX4EQCOEFF_A8_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX4EQCOEFF_A9_B = PIPETX4EQCOEFF_A9_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX4EQCOEFF_A10_B = PIPETX4EQCOEFF_A10_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX4EQCOEFF_A11_B = PIPETX4EQCOEFF_A11_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX4EQCOEFF_A12_B = PIPETX4EQCOEFF_A12_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX4EQCOEFF_A13_B = PIPETX4EQCOEFF_A13_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX4EQCOEFF_A14_B = PIPETX4EQCOEFF_A14_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX4EQCOEFF_A15_B = PIPETX4EQCOEFF_A15_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX4EQCOEFF_A16_B = PIPETX4EQCOEFF_A16_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX4EQCOEFF_A17_B = PIPETX4EQCOEFF_A17_B; // net ID: PIPETX4EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX4EQDONE_A0_B = PIPETX4EQDONE_A0_B; // net ID: PIPETX4EQDONE lsb: 0  msb: 0 INPUT
			this->PIPETX5EQCOEFF_A0_B = PIPETX5EQCOEFF_A0_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX5EQCOEFF_A1_B = PIPETX5EQCOEFF_A1_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX5EQCOEFF_A2_B = PIPETX5EQCOEFF_A2_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX5EQCOEFF_A3_B = PIPETX5EQCOEFF_A3_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX5EQCOEFF_A4_B = PIPETX5EQCOEFF_A4_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX5EQCOEFF_A5_B = PIPETX5EQCOEFF_A5_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX5EQCOEFF_A6_B = PIPETX5EQCOEFF_A6_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX5EQCOEFF_A7_B = PIPETX5EQCOEFF_A7_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX5EQCOEFF_A8_B = PIPETX5EQCOEFF_A8_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX5EQCOEFF_A9_B = PIPETX5EQCOEFF_A9_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX5EQCOEFF_A10_B = PIPETX5EQCOEFF_A10_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX5EQCOEFF_A11_B = PIPETX5EQCOEFF_A11_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX5EQCOEFF_A12_B = PIPETX5EQCOEFF_A12_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX5EQCOEFF_A13_B = PIPETX5EQCOEFF_A13_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX5EQCOEFF_A14_B = PIPETX5EQCOEFF_A14_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX5EQCOEFF_A15_B = PIPETX5EQCOEFF_A15_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX5EQCOEFF_A16_B = PIPETX5EQCOEFF_A16_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX5EQCOEFF_A17_B = PIPETX5EQCOEFF_A17_B; // net ID: PIPETX5EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX5EQDONE_A0_B = PIPETX5EQDONE_A0_B; // net ID: PIPETX5EQDONE lsb: 0  msb: 0 INPUT
			this->PIPETX6EQCOEFF_A0_B = PIPETX6EQCOEFF_A0_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX6EQCOEFF_A1_B = PIPETX6EQCOEFF_A1_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX6EQCOEFF_A2_B = PIPETX6EQCOEFF_A2_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX6EQCOEFF_A3_B = PIPETX6EQCOEFF_A3_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX6EQCOEFF_A4_B = PIPETX6EQCOEFF_A4_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX6EQCOEFF_A5_B = PIPETX6EQCOEFF_A5_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX6EQCOEFF_A6_B = PIPETX6EQCOEFF_A6_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX6EQCOEFF_A7_B = PIPETX6EQCOEFF_A7_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX6EQCOEFF_A8_B = PIPETX6EQCOEFF_A8_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX6EQCOEFF_A9_B = PIPETX6EQCOEFF_A9_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX6EQCOEFF_A10_B = PIPETX6EQCOEFF_A10_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX6EQCOEFF_A11_B = PIPETX6EQCOEFF_A11_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX6EQCOEFF_A12_B = PIPETX6EQCOEFF_A12_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX6EQCOEFF_A13_B = PIPETX6EQCOEFF_A13_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX6EQCOEFF_A14_B = PIPETX6EQCOEFF_A14_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX6EQCOEFF_A15_B = PIPETX6EQCOEFF_A15_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX6EQCOEFF_A16_B = PIPETX6EQCOEFF_A16_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX6EQCOEFF_A17_B = PIPETX6EQCOEFF_A17_B; // net ID: PIPETX6EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX6EQDONE_A0_B = PIPETX6EQDONE_A0_B; // net ID: PIPETX6EQDONE lsb: 0  msb: 0 INPUT
			this->PIPETX7EQCOEFF_A0_B = PIPETX7EQCOEFF_A0_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX7EQCOEFF_A1_B = PIPETX7EQCOEFF_A1_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX7EQCOEFF_A2_B = PIPETX7EQCOEFF_A2_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX7EQCOEFF_A3_B = PIPETX7EQCOEFF_A3_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX7EQCOEFF_A4_B = PIPETX7EQCOEFF_A4_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX7EQCOEFF_A5_B = PIPETX7EQCOEFF_A5_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX7EQCOEFF_A6_B = PIPETX7EQCOEFF_A6_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX7EQCOEFF_A7_B = PIPETX7EQCOEFF_A7_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX7EQCOEFF_A8_B = PIPETX7EQCOEFF_A8_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX7EQCOEFF_A9_B = PIPETX7EQCOEFF_A9_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX7EQCOEFF_A10_B = PIPETX7EQCOEFF_A10_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX7EQCOEFF_A11_B = PIPETX7EQCOEFF_A11_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX7EQCOEFF_A12_B = PIPETX7EQCOEFF_A12_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX7EQCOEFF_A13_B = PIPETX7EQCOEFF_A13_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX7EQCOEFF_A14_B = PIPETX7EQCOEFF_A14_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX7EQCOEFF_A15_B = PIPETX7EQCOEFF_A15_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX7EQCOEFF_A16_B = PIPETX7EQCOEFF_A16_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX7EQCOEFF_A17_B = PIPETX7EQCOEFF_A17_B; // net ID: PIPETX7EQCOEFF lsb: 0  msb: 17 INPUT
			this->PIPETX7EQDONE_A0_B = PIPETX7EQDONE_A0_B; // net ID: PIPETX7EQDONE lsb: 0  msb: 0 INPUT
			this->PLDISABLESCRAMBLER_A0_B = PLDISABLESCRAMBLER_A0_B; // net ID: PLDISABLESCRAMBLER lsb: 0  msb: 0 INPUT
			this->PLEQRESETEIEOSCOUNT_A0_B = PLEQRESETEIEOSCOUNT_A0_B; // net ID: PLEQRESETEIEOSCOUNT lsb: 0  msb: 0 INPUT
			this->PLGEN3PCSDISABLE_A0_B = PLGEN3PCSDISABLE_A0_B; // net ID: PLGEN3PCSDISABLE lsb: 0  msb: 0 INPUT
			this->PLGEN3PCSRXSYNCDONE_A0_B = PLGEN3PCSRXSYNCDONE_A0_B; // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
			this->PLGEN3PCSRXSYNCDONE_A1_B = PLGEN3PCSRXSYNCDONE_A1_B; // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
			this->PLGEN3PCSRXSYNCDONE_A2_B = PLGEN3PCSRXSYNCDONE_A2_B; // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
			this->PLGEN3PCSRXSYNCDONE_A3_B = PLGEN3PCSRXSYNCDONE_A3_B; // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
			this->PLGEN3PCSRXSYNCDONE_A4_B = PLGEN3PCSRXSYNCDONE_A4_B; // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
			this->PLGEN3PCSRXSYNCDONE_A5_B = PLGEN3PCSRXSYNCDONE_A5_B; // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
			this->PLGEN3PCSRXSYNCDONE_A6_B = PLGEN3PCSRXSYNCDONE_A6_B; // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
			this->PLGEN3PCSRXSYNCDONE_A7_B = PLGEN3PCSRXSYNCDONE_A7_B; // net ID: PLGEN3PCSRXSYNCDONE lsb: 0  msb: 7 INPUT
			this->RECCLK_A0_B = RECCLK_A0_B; // net ID: RECCLK lsb: 0  msb: 0 INPUT
			this->RESETN_A0_B = RESETN_A0_B; // net ID: RESETN lsb: 0  msb: 0 INPUT
			this->SAXISCCTDATA_A0_B = SAXISCCTDATA_A0_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A1_B = SAXISCCTDATA_A1_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A2_B = SAXISCCTDATA_A2_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A3_B = SAXISCCTDATA_A3_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A4_B = SAXISCCTDATA_A4_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A5_B = SAXISCCTDATA_A5_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A6_B = SAXISCCTDATA_A6_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A7_B = SAXISCCTDATA_A7_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A8_B = SAXISCCTDATA_A8_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A9_B = SAXISCCTDATA_A9_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A10_B = SAXISCCTDATA_A10_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A11_B = SAXISCCTDATA_A11_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A12_B = SAXISCCTDATA_A12_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A13_B = SAXISCCTDATA_A13_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A14_B = SAXISCCTDATA_A14_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A15_B = SAXISCCTDATA_A15_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A16_B = SAXISCCTDATA_A16_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A17_B = SAXISCCTDATA_A17_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A18_B = SAXISCCTDATA_A18_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A19_B = SAXISCCTDATA_A19_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A20_B = SAXISCCTDATA_A20_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A21_B = SAXISCCTDATA_A21_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A22_B = SAXISCCTDATA_A22_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A23_B = SAXISCCTDATA_A23_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A24_B = SAXISCCTDATA_A24_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A25_B = SAXISCCTDATA_A25_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A26_B = SAXISCCTDATA_A26_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A27_B = SAXISCCTDATA_A27_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A28_B = SAXISCCTDATA_A28_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A29_B = SAXISCCTDATA_A29_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A30_B = SAXISCCTDATA_A30_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A31_B = SAXISCCTDATA_A31_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A32_B = SAXISCCTDATA_A32_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A33_B = SAXISCCTDATA_A33_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A34_B = SAXISCCTDATA_A34_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A35_B = SAXISCCTDATA_A35_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A36_B = SAXISCCTDATA_A36_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A37_B = SAXISCCTDATA_A37_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A38_B = SAXISCCTDATA_A38_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A39_B = SAXISCCTDATA_A39_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A40_B = SAXISCCTDATA_A40_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A41_B = SAXISCCTDATA_A41_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A42_B = SAXISCCTDATA_A42_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A43_B = SAXISCCTDATA_A43_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A44_B = SAXISCCTDATA_A44_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A45_B = SAXISCCTDATA_A45_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A46_B = SAXISCCTDATA_A46_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A47_B = SAXISCCTDATA_A47_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A48_B = SAXISCCTDATA_A48_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A49_B = SAXISCCTDATA_A49_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A50_B = SAXISCCTDATA_A50_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A51_B = SAXISCCTDATA_A51_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A52_B = SAXISCCTDATA_A52_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A53_B = SAXISCCTDATA_A53_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A54_B = SAXISCCTDATA_A54_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A55_B = SAXISCCTDATA_A55_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A56_B = SAXISCCTDATA_A56_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A57_B = SAXISCCTDATA_A57_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A58_B = SAXISCCTDATA_A58_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A59_B = SAXISCCTDATA_A59_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A60_B = SAXISCCTDATA_A60_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A61_B = SAXISCCTDATA_A61_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A62_B = SAXISCCTDATA_A62_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A63_B = SAXISCCTDATA_A63_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A64_B = SAXISCCTDATA_A64_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A65_B = SAXISCCTDATA_A65_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A66_B = SAXISCCTDATA_A66_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A67_B = SAXISCCTDATA_A67_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A68_B = SAXISCCTDATA_A68_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A69_B = SAXISCCTDATA_A69_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A70_B = SAXISCCTDATA_A70_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A71_B = SAXISCCTDATA_A71_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A72_B = SAXISCCTDATA_A72_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A73_B = SAXISCCTDATA_A73_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A74_B = SAXISCCTDATA_A74_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A75_B = SAXISCCTDATA_A75_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A76_B = SAXISCCTDATA_A76_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A77_B = SAXISCCTDATA_A77_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A78_B = SAXISCCTDATA_A78_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A79_B = SAXISCCTDATA_A79_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A80_B = SAXISCCTDATA_A80_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A81_B = SAXISCCTDATA_A81_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A82_B = SAXISCCTDATA_A82_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A83_B = SAXISCCTDATA_A83_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A84_B = SAXISCCTDATA_A84_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A85_B = SAXISCCTDATA_A85_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A86_B = SAXISCCTDATA_A86_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A87_B = SAXISCCTDATA_A87_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A88_B = SAXISCCTDATA_A88_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A89_B = SAXISCCTDATA_A89_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A90_B = SAXISCCTDATA_A90_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A91_B = SAXISCCTDATA_A91_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A92_B = SAXISCCTDATA_A92_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A93_B = SAXISCCTDATA_A93_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A94_B = SAXISCCTDATA_A94_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A95_B = SAXISCCTDATA_A95_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A96_B = SAXISCCTDATA_A96_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A97_B = SAXISCCTDATA_A97_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A98_B = SAXISCCTDATA_A98_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A99_B = SAXISCCTDATA_A99_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A100_B = SAXISCCTDATA_A100_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A101_B = SAXISCCTDATA_A101_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A102_B = SAXISCCTDATA_A102_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A103_B = SAXISCCTDATA_A103_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A104_B = SAXISCCTDATA_A104_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A105_B = SAXISCCTDATA_A105_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A106_B = SAXISCCTDATA_A106_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A107_B = SAXISCCTDATA_A107_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A108_B = SAXISCCTDATA_A108_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A109_B = SAXISCCTDATA_A109_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A110_B = SAXISCCTDATA_A110_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A111_B = SAXISCCTDATA_A111_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A112_B = SAXISCCTDATA_A112_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A113_B = SAXISCCTDATA_A113_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A114_B = SAXISCCTDATA_A114_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A115_B = SAXISCCTDATA_A115_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A116_B = SAXISCCTDATA_A116_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A117_B = SAXISCCTDATA_A117_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A118_B = SAXISCCTDATA_A118_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A119_B = SAXISCCTDATA_A119_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A120_B = SAXISCCTDATA_A120_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A121_B = SAXISCCTDATA_A121_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A122_B = SAXISCCTDATA_A122_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A123_B = SAXISCCTDATA_A123_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A124_B = SAXISCCTDATA_A124_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A125_B = SAXISCCTDATA_A125_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A126_B = SAXISCCTDATA_A126_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A127_B = SAXISCCTDATA_A127_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A128_B = SAXISCCTDATA_A128_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A129_B = SAXISCCTDATA_A129_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A130_B = SAXISCCTDATA_A130_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A131_B = SAXISCCTDATA_A131_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A132_B = SAXISCCTDATA_A132_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A133_B = SAXISCCTDATA_A133_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A134_B = SAXISCCTDATA_A134_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A135_B = SAXISCCTDATA_A135_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A136_B = SAXISCCTDATA_A136_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A137_B = SAXISCCTDATA_A137_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A138_B = SAXISCCTDATA_A138_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A139_B = SAXISCCTDATA_A139_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A140_B = SAXISCCTDATA_A140_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A141_B = SAXISCCTDATA_A141_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A142_B = SAXISCCTDATA_A142_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A143_B = SAXISCCTDATA_A143_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A144_B = SAXISCCTDATA_A144_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A145_B = SAXISCCTDATA_A145_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A146_B = SAXISCCTDATA_A146_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A147_B = SAXISCCTDATA_A147_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A148_B = SAXISCCTDATA_A148_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A149_B = SAXISCCTDATA_A149_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A150_B = SAXISCCTDATA_A150_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A151_B = SAXISCCTDATA_A151_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A152_B = SAXISCCTDATA_A152_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A153_B = SAXISCCTDATA_A153_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A154_B = SAXISCCTDATA_A154_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A155_B = SAXISCCTDATA_A155_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A156_B = SAXISCCTDATA_A156_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A157_B = SAXISCCTDATA_A157_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A158_B = SAXISCCTDATA_A158_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A159_B = SAXISCCTDATA_A159_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A160_B = SAXISCCTDATA_A160_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A161_B = SAXISCCTDATA_A161_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A162_B = SAXISCCTDATA_A162_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A163_B = SAXISCCTDATA_A163_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A164_B = SAXISCCTDATA_A164_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A165_B = SAXISCCTDATA_A165_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A166_B = SAXISCCTDATA_A166_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A167_B = SAXISCCTDATA_A167_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A168_B = SAXISCCTDATA_A168_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A169_B = SAXISCCTDATA_A169_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A170_B = SAXISCCTDATA_A170_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A171_B = SAXISCCTDATA_A171_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A172_B = SAXISCCTDATA_A172_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A173_B = SAXISCCTDATA_A173_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A174_B = SAXISCCTDATA_A174_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A175_B = SAXISCCTDATA_A175_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A176_B = SAXISCCTDATA_A176_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A177_B = SAXISCCTDATA_A177_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A178_B = SAXISCCTDATA_A178_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A179_B = SAXISCCTDATA_A179_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A180_B = SAXISCCTDATA_A180_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A181_B = SAXISCCTDATA_A181_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A182_B = SAXISCCTDATA_A182_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A183_B = SAXISCCTDATA_A183_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A184_B = SAXISCCTDATA_A184_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A185_B = SAXISCCTDATA_A185_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A186_B = SAXISCCTDATA_A186_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A187_B = SAXISCCTDATA_A187_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A188_B = SAXISCCTDATA_A188_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A189_B = SAXISCCTDATA_A189_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A190_B = SAXISCCTDATA_A190_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A191_B = SAXISCCTDATA_A191_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A192_B = SAXISCCTDATA_A192_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A193_B = SAXISCCTDATA_A193_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A194_B = SAXISCCTDATA_A194_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A195_B = SAXISCCTDATA_A195_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A196_B = SAXISCCTDATA_A196_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A197_B = SAXISCCTDATA_A197_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A198_B = SAXISCCTDATA_A198_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A199_B = SAXISCCTDATA_A199_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A200_B = SAXISCCTDATA_A200_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A201_B = SAXISCCTDATA_A201_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A202_B = SAXISCCTDATA_A202_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A203_B = SAXISCCTDATA_A203_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A204_B = SAXISCCTDATA_A204_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A205_B = SAXISCCTDATA_A205_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A206_B = SAXISCCTDATA_A206_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A207_B = SAXISCCTDATA_A207_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A208_B = SAXISCCTDATA_A208_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A209_B = SAXISCCTDATA_A209_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A210_B = SAXISCCTDATA_A210_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A211_B = SAXISCCTDATA_A211_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A212_B = SAXISCCTDATA_A212_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A213_B = SAXISCCTDATA_A213_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A214_B = SAXISCCTDATA_A214_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A215_B = SAXISCCTDATA_A215_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A216_B = SAXISCCTDATA_A216_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A217_B = SAXISCCTDATA_A217_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A218_B = SAXISCCTDATA_A218_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A219_B = SAXISCCTDATA_A219_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A220_B = SAXISCCTDATA_A220_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A221_B = SAXISCCTDATA_A221_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A222_B = SAXISCCTDATA_A222_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A223_B = SAXISCCTDATA_A223_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A224_B = SAXISCCTDATA_A224_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A225_B = SAXISCCTDATA_A225_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A226_B = SAXISCCTDATA_A226_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A227_B = SAXISCCTDATA_A227_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A228_B = SAXISCCTDATA_A228_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A229_B = SAXISCCTDATA_A229_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A230_B = SAXISCCTDATA_A230_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A231_B = SAXISCCTDATA_A231_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A232_B = SAXISCCTDATA_A232_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A233_B = SAXISCCTDATA_A233_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A234_B = SAXISCCTDATA_A234_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A235_B = SAXISCCTDATA_A235_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A236_B = SAXISCCTDATA_A236_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A237_B = SAXISCCTDATA_A237_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A238_B = SAXISCCTDATA_A238_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A239_B = SAXISCCTDATA_A239_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A240_B = SAXISCCTDATA_A240_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A241_B = SAXISCCTDATA_A241_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A242_B = SAXISCCTDATA_A242_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A243_B = SAXISCCTDATA_A243_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A244_B = SAXISCCTDATA_A244_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A245_B = SAXISCCTDATA_A245_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A246_B = SAXISCCTDATA_A246_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A247_B = SAXISCCTDATA_A247_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A248_B = SAXISCCTDATA_A248_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A249_B = SAXISCCTDATA_A249_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A250_B = SAXISCCTDATA_A250_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A251_B = SAXISCCTDATA_A251_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A252_B = SAXISCCTDATA_A252_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A253_B = SAXISCCTDATA_A253_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A254_B = SAXISCCTDATA_A254_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTDATA_A255_B = SAXISCCTDATA_A255_B; // net ID: SAXISCCTDATA lsb: 0  msb: 255 INPUT
			this->SAXISCCTKEEP_A0_B = SAXISCCTKEEP_A0_B; // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
			this->SAXISCCTKEEP_A1_B = SAXISCCTKEEP_A1_B; // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
			this->SAXISCCTKEEP_A2_B = SAXISCCTKEEP_A2_B; // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
			this->SAXISCCTKEEP_A3_B = SAXISCCTKEEP_A3_B; // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
			this->SAXISCCTKEEP_A4_B = SAXISCCTKEEP_A4_B; // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
			this->SAXISCCTKEEP_A5_B = SAXISCCTKEEP_A5_B; // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
			this->SAXISCCTKEEP_A6_B = SAXISCCTKEEP_A6_B; // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
			this->SAXISCCTKEEP_A7_B = SAXISCCTKEEP_A7_B; // net ID: SAXISCCTKEEP lsb: 0  msb: 7 INPUT
			this->SAXISCCTLAST_A0_B = SAXISCCTLAST_A0_B; // net ID: SAXISCCTLAST lsb: 0  msb: 0 INPUT
			this->SAXISCCTUSER_A0_B = SAXISCCTUSER_A0_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A1_B = SAXISCCTUSER_A1_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A2_B = SAXISCCTUSER_A2_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A3_B = SAXISCCTUSER_A3_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A4_B = SAXISCCTUSER_A4_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A5_B = SAXISCCTUSER_A5_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A6_B = SAXISCCTUSER_A6_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A7_B = SAXISCCTUSER_A7_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A8_B = SAXISCCTUSER_A8_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A9_B = SAXISCCTUSER_A9_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A10_B = SAXISCCTUSER_A10_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A11_B = SAXISCCTUSER_A11_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A12_B = SAXISCCTUSER_A12_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A13_B = SAXISCCTUSER_A13_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A14_B = SAXISCCTUSER_A14_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A15_B = SAXISCCTUSER_A15_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A16_B = SAXISCCTUSER_A16_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A17_B = SAXISCCTUSER_A17_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A18_B = SAXISCCTUSER_A18_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A19_B = SAXISCCTUSER_A19_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A20_B = SAXISCCTUSER_A20_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A21_B = SAXISCCTUSER_A21_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A22_B = SAXISCCTUSER_A22_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A23_B = SAXISCCTUSER_A23_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A24_B = SAXISCCTUSER_A24_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A25_B = SAXISCCTUSER_A25_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A26_B = SAXISCCTUSER_A26_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A27_B = SAXISCCTUSER_A27_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A28_B = SAXISCCTUSER_A28_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A29_B = SAXISCCTUSER_A29_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A30_B = SAXISCCTUSER_A30_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A31_B = SAXISCCTUSER_A31_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTUSER_A32_B = SAXISCCTUSER_A32_B; // net ID: SAXISCCTUSER lsb: 0  msb: 32 INPUT
			this->SAXISCCTVALID_A0_B = SAXISCCTVALID_A0_B; // net ID: SAXISCCTVALID lsb: 0  msb: 0 INPUT
			this->SAXISRQTDATA_A0_B = SAXISRQTDATA_A0_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A1_B = SAXISRQTDATA_A1_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A2_B = SAXISRQTDATA_A2_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A3_B = SAXISRQTDATA_A3_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A4_B = SAXISRQTDATA_A4_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A5_B = SAXISRQTDATA_A5_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A6_B = SAXISRQTDATA_A6_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A7_B = SAXISRQTDATA_A7_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A8_B = SAXISRQTDATA_A8_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A9_B = SAXISRQTDATA_A9_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A10_B = SAXISRQTDATA_A10_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A11_B = SAXISRQTDATA_A11_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A12_B = SAXISRQTDATA_A12_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A13_B = SAXISRQTDATA_A13_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A14_B = SAXISRQTDATA_A14_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A15_B = SAXISRQTDATA_A15_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A16_B = SAXISRQTDATA_A16_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A17_B = SAXISRQTDATA_A17_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A18_B = SAXISRQTDATA_A18_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A19_B = SAXISRQTDATA_A19_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A20_B = SAXISRQTDATA_A20_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A21_B = SAXISRQTDATA_A21_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A22_B = SAXISRQTDATA_A22_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A23_B = SAXISRQTDATA_A23_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A24_B = SAXISRQTDATA_A24_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A25_B = SAXISRQTDATA_A25_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A26_B = SAXISRQTDATA_A26_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A27_B = SAXISRQTDATA_A27_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A28_B = SAXISRQTDATA_A28_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A29_B = SAXISRQTDATA_A29_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A30_B = SAXISRQTDATA_A30_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A31_B = SAXISRQTDATA_A31_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A32_B = SAXISRQTDATA_A32_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A33_B = SAXISRQTDATA_A33_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A34_B = SAXISRQTDATA_A34_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A35_B = SAXISRQTDATA_A35_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A36_B = SAXISRQTDATA_A36_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A37_B = SAXISRQTDATA_A37_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A38_B = SAXISRQTDATA_A38_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A39_B = SAXISRQTDATA_A39_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A40_B = SAXISRQTDATA_A40_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A41_B = SAXISRQTDATA_A41_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A42_B = SAXISRQTDATA_A42_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A43_B = SAXISRQTDATA_A43_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A44_B = SAXISRQTDATA_A44_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A45_B = SAXISRQTDATA_A45_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A46_B = SAXISRQTDATA_A46_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A47_B = SAXISRQTDATA_A47_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A48_B = SAXISRQTDATA_A48_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A49_B = SAXISRQTDATA_A49_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A50_B = SAXISRQTDATA_A50_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A51_B = SAXISRQTDATA_A51_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A52_B = SAXISRQTDATA_A52_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A53_B = SAXISRQTDATA_A53_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A54_B = SAXISRQTDATA_A54_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A55_B = SAXISRQTDATA_A55_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A56_B = SAXISRQTDATA_A56_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A57_B = SAXISRQTDATA_A57_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A58_B = SAXISRQTDATA_A58_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A59_B = SAXISRQTDATA_A59_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A60_B = SAXISRQTDATA_A60_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A61_B = SAXISRQTDATA_A61_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A62_B = SAXISRQTDATA_A62_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A63_B = SAXISRQTDATA_A63_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A64_B = SAXISRQTDATA_A64_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A65_B = SAXISRQTDATA_A65_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A66_B = SAXISRQTDATA_A66_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A67_B = SAXISRQTDATA_A67_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A68_B = SAXISRQTDATA_A68_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A69_B = SAXISRQTDATA_A69_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A70_B = SAXISRQTDATA_A70_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A71_B = SAXISRQTDATA_A71_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A72_B = SAXISRQTDATA_A72_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A73_B = SAXISRQTDATA_A73_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A74_B = SAXISRQTDATA_A74_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A75_B = SAXISRQTDATA_A75_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A76_B = SAXISRQTDATA_A76_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A77_B = SAXISRQTDATA_A77_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A78_B = SAXISRQTDATA_A78_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A79_B = SAXISRQTDATA_A79_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A80_B = SAXISRQTDATA_A80_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A81_B = SAXISRQTDATA_A81_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A82_B = SAXISRQTDATA_A82_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A83_B = SAXISRQTDATA_A83_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A84_B = SAXISRQTDATA_A84_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A85_B = SAXISRQTDATA_A85_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A86_B = SAXISRQTDATA_A86_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A87_B = SAXISRQTDATA_A87_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A88_B = SAXISRQTDATA_A88_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A89_B = SAXISRQTDATA_A89_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A90_B = SAXISRQTDATA_A90_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A91_B = SAXISRQTDATA_A91_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A92_B = SAXISRQTDATA_A92_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A93_B = SAXISRQTDATA_A93_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A94_B = SAXISRQTDATA_A94_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A95_B = SAXISRQTDATA_A95_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A96_B = SAXISRQTDATA_A96_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A97_B = SAXISRQTDATA_A97_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A98_B = SAXISRQTDATA_A98_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A99_B = SAXISRQTDATA_A99_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A100_B = SAXISRQTDATA_A100_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A101_B = SAXISRQTDATA_A101_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A102_B = SAXISRQTDATA_A102_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A103_B = SAXISRQTDATA_A103_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A104_B = SAXISRQTDATA_A104_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A105_B = SAXISRQTDATA_A105_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A106_B = SAXISRQTDATA_A106_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A107_B = SAXISRQTDATA_A107_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A108_B = SAXISRQTDATA_A108_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A109_B = SAXISRQTDATA_A109_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A110_B = SAXISRQTDATA_A110_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A111_B = SAXISRQTDATA_A111_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A112_B = SAXISRQTDATA_A112_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A113_B = SAXISRQTDATA_A113_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A114_B = SAXISRQTDATA_A114_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A115_B = SAXISRQTDATA_A115_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A116_B = SAXISRQTDATA_A116_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A117_B = SAXISRQTDATA_A117_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A118_B = SAXISRQTDATA_A118_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A119_B = SAXISRQTDATA_A119_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A120_B = SAXISRQTDATA_A120_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A121_B = SAXISRQTDATA_A121_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A122_B = SAXISRQTDATA_A122_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A123_B = SAXISRQTDATA_A123_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A124_B = SAXISRQTDATA_A124_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A125_B = SAXISRQTDATA_A125_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A126_B = SAXISRQTDATA_A126_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A127_B = SAXISRQTDATA_A127_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A128_B = SAXISRQTDATA_A128_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A129_B = SAXISRQTDATA_A129_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A130_B = SAXISRQTDATA_A130_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A131_B = SAXISRQTDATA_A131_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A132_B = SAXISRQTDATA_A132_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A133_B = SAXISRQTDATA_A133_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A134_B = SAXISRQTDATA_A134_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A135_B = SAXISRQTDATA_A135_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A136_B = SAXISRQTDATA_A136_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A137_B = SAXISRQTDATA_A137_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A138_B = SAXISRQTDATA_A138_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A139_B = SAXISRQTDATA_A139_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A140_B = SAXISRQTDATA_A140_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A141_B = SAXISRQTDATA_A141_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A142_B = SAXISRQTDATA_A142_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A143_B = SAXISRQTDATA_A143_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A144_B = SAXISRQTDATA_A144_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A145_B = SAXISRQTDATA_A145_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A146_B = SAXISRQTDATA_A146_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A147_B = SAXISRQTDATA_A147_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A148_B = SAXISRQTDATA_A148_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A149_B = SAXISRQTDATA_A149_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A150_B = SAXISRQTDATA_A150_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A151_B = SAXISRQTDATA_A151_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A152_B = SAXISRQTDATA_A152_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A153_B = SAXISRQTDATA_A153_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A154_B = SAXISRQTDATA_A154_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A155_B = SAXISRQTDATA_A155_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A156_B = SAXISRQTDATA_A156_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A157_B = SAXISRQTDATA_A157_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A158_B = SAXISRQTDATA_A158_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A159_B = SAXISRQTDATA_A159_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A160_B = SAXISRQTDATA_A160_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A161_B = SAXISRQTDATA_A161_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A162_B = SAXISRQTDATA_A162_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A163_B = SAXISRQTDATA_A163_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A164_B = SAXISRQTDATA_A164_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A165_B = SAXISRQTDATA_A165_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A166_B = SAXISRQTDATA_A166_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A167_B = SAXISRQTDATA_A167_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A168_B = SAXISRQTDATA_A168_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A169_B = SAXISRQTDATA_A169_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A170_B = SAXISRQTDATA_A170_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A171_B = SAXISRQTDATA_A171_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A172_B = SAXISRQTDATA_A172_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A173_B = SAXISRQTDATA_A173_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A174_B = SAXISRQTDATA_A174_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A175_B = SAXISRQTDATA_A175_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A176_B = SAXISRQTDATA_A176_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A177_B = SAXISRQTDATA_A177_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A178_B = SAXISRQTDATA_A178_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A179_B = SAXISRQTDATA_A179_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A180_B = SAXISRQTDATA_A180_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A181_B = SAXISRQTDATA_A181_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A182_B = SAXISRQTDATA_A182_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A183_B = SAXISRQTDATA_A183_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A184_B = SAXISRQTDATA_A184_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A185_B = SAXISRQTDATA_A185_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A186_B = SAXISRQTDATA_A186_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A187_B = SAXISRQTDATA_A187_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A188_B = SAXISRQTDATA_A188_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A189_B = SAXISRQTDATA_A189_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A190_B = SAXISRQTDATA_A190_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A191_B = SAXISRQTDATA_A191_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A192_B = SAXISRQTDATA_A192_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A193_B = SAXISRQTDATA_A193_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A194_B = SAXISRQTDATA_A194_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A195_B = SAXISRQTDATA_A195_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A196_B = SAXISRQTDATA_A196_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A197_B = SAXISRQTDATA_A197_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A198_B = SAXISRQTDATA_A198_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A199_B = SAXISRQTDATA_A199_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A200_B = SAXISRQTDATA_A200_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A201_B = SAXISRQTDATA_A201_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A202_B = SAXISRQTDATA_A202_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A203_B = SAXISRQTDATA_A203_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A204_B = SAXISRQTDATA_A204_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A205_B = SAXISRQTDATA_A205_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A206_B = SAXISRQTDATA_A206_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A207_B = SAXISRQTDATA_A207_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A208_B = SAXISRQTDATA_A208_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A209_B = SAXISRQTDATA_A209_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A210_B = SAXISRQTDATA_A210_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A211_B = SAXISRQTDATA_A211_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A212_B = SAXISRQTDATA_A212_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A213_B = SAXISRQTDATA_A213_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A214_B = SAXISRQTDATA_A214_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A215_B = SAXISRQTDATA_A215_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A216_B = SAXISRQTDATA_A216_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A217_B = SAXISRQTDATA_A217_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A218_B = SAXISRQTDATA_A218_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A219_B = SAXISRQTDATA_A219_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A220_B = SAXISRQTDATA_A220_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A221_B = SAXISRQTDATA_A221_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A222_B = SAXISRQTDATA_A222_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A223_B = SAXISRQTDATA_A223_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A224_B = SAXISRQTDATA_A224_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A225_B = SAXISRQTDATA_A225_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A226_B = SAXISRQTDATA_A226_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A227_B = SAXISRQTDATA_A227_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A228_B = SAXISRQTDATA_A228_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A229_B = SAXISRQTDATA_A229_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A230_B = SAXISRQTDATA_A230_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A231_B = SAXISRQTDATA_A231_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A232_B = SAXISRQTDATA_A232_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A233_B = SAXISRQTDATA_A233_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A234_B = SAXISRQTDATA_A234_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A235_B = SAXISRQTDATA_A235_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A236_B = SAXISRQTDATA_A236_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A237_B = SAXISRQTDATA_A237_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A238_B = SAXISRQTDATA_A238_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A239_B = SAXISRQTDATA_A239_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A240_B = SAXISRQTDATA_A240_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A241_B = SAXISRQTDATA_A241_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A242_B = SAXISRQTDATA_A242_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A243_B = SAXISRQTDATA_A243_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A244_B = SAXISRQTDATA_A244_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A245_B = SAXISRQTDATA_A245_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A246_B = SAXISRQTDATA_A246_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A247_B = SAXISRQTDATA_A247_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A248_B = SAXISRQTDATA_A248_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A249_B = SAXISRQTDATA_A249_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A250_B = SAXISRQTDATA_A250_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A251_B = SAXISRQTDATA_A251_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A252_B = SAXISRQTDATA_A252_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A253_B = SAXISRQTDATA_A253_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A254_B = SAXISRQTDATA_A254_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTDATA_A255_B = SAXISRQTDATA_A255_B; // net ID: SAXISRQTDATA lsb: 0  msb: 255 INPUT
			this->SAXISRQTKEEP_A0_B = SAXISRQTKEEP_A0_B; // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
			this->SAXISRQTKEEP_A1_B = SAXISRQTKEEP_A1_B; // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
			this->SAXISRQTKEEP_A2_B = SAXISRQTKEEP_A2_B; // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
			this->SAXISRQTKEEP_A3_B = SAXISRQTKEEP_A3_B; // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
			this->SAXISRQTKEEP_A4_B = SAXISRQTKEEP_A4_B; // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
			this->SAXISRQTKEEP_A5_B = SAXISRQTKEEP_A5_B; // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
			this->SAXISRQTKEEP_A6_B = SAXISRQTKEEP_A6_B; // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
			this->SAXISRQTKEEP_A7_B = SAXISRQTKEEP_A7_B; // net ID: SAXISRQTKEEP lsb: 0  msb: 7 INPUT
			this->SAXISRQTLAST_A0_B = SAXISRQTLAST_A0_B; // net ID: SAXISRQTLAST lsb: 0  msb: 0 INPUT
			this->SAXISRQTUSER_A0_B = SAXISRQTUSER_A0_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A1_B = SAXISRQTUSER_A1_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A2_B = SAXISRQTUSER_A2_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A3_B = SAXISRQTUSER_A3_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A4_B = SAXISRQTUSER_A4_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A5_B = SAXISRQTUSER_A5_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A6_B = SAXISRQTUSER_A6_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A7_B = SAXISRQTUSER_A7_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A8_B = SAXISRQTUSER_A8_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A9_B = SAXISRQTUSER_A9_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A10_B = SAXISRQTUSER_A10_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A11_B = SAXISRQTUSER_A11_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A12_B = SAXISRQTUSER_A12_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A13_B = SAXISRQTUSER_A13_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A14_B = SAXISRQTUSER_A14_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A15_B = SAXISRQTUSER_A15_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A16_B = SAXISRQTUSER_A16_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A17_B = SAXISRQTUSER_A17_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A18_B = SAXISRQTUSER_A18_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A19_B = SAXISRQTUSER_A19_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A20_B = SAXISRQTUSER_A20_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A21_B = SAXISRQTUSER_A21_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A22_B = SAXISRQTUSER_A22_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A23_B = SAXISRQTUSER_A23_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A24_B = SAXISRQTUSER_A24_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A25_B = SAXISRQTUSER_A25_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A26_B = SAXISRQTUSER_A26_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A27_B = SAXISRQTUSER_A27_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A28_B = SAXISRQTUSER_A28_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A29_B = SAXISRQTUSER_A29_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A30_B = SAXISRQTUSER_A30_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A31_B = SAXISRQTUSER_A31_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A32_B = SAXISRQTUSER_A32_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A33_B = SAXISRQTUSER_A33_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A34_B = SAXISRQTUSER_A34_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A35_B = SAXISRQTUSER_A35_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A36_B = SAXISRQTUSER_A36_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A37_B = SAXISRQTUSER_A37_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A38_B = SAXISRQTUSER_A38_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A39_B = SAXISRQTUSER_A39_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A40_B = SAXISRQTUSER_A40_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A41_B = SAXISRQTUSER_A41_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A42_B = SAXISRQTUSER_A42_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A43_B = SAXISRQTUSER_A43_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A44_B = SAXISRQTUSER_A44_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A45_B = SAXISRQTUSER_A45_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A46_B = SAXISRQTUSER_A46_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A47_B = SAXISRQTUSER_A47_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A48_B = SAXISRQTUSER_A48_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A49_B = SAXISRQTUSER_A49_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A50_B = SAXISRQTUSER_A50_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A51_B = SAXISRQTUSER_A51_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A52_B = SAXISRQTUSER_A52_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A53_B = SAXISRQTUSER_A53_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A54_B = SAXISRQTUSER_A54_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A55_B = SAXISRQTUSER_A55_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A56_B = SAXISRQTUSER_A56_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A57_B = SAXISRQTUSER_A57_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A58_B = SAXISRQTUSER_A58_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTUSER_A59_B = SAXISRQTUSER_A59_B; // net ID: SAXISRQTUSER lsb: 0  msb: 59 INPUT
			this->SAXISRQTVALID_A0_B = SAXISRQTVALID_A0_B; // net ID: SAXISRQTVALID lsb: 0  msb: 0 INPUT
			this->USERCLK_A0_B = USERCLK_A0_B; // net ID: USERCLK lsb: 0  msb: 0 INPUT
			
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
#endif // X_PCIE_3_0_H
