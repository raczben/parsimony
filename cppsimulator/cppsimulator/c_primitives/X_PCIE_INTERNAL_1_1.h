/******************************************************************************
 * Generated Cpp template for simulation primitives.
 * Author: Benedek Racz
 ******************************************************************************/

#include "NetFlow.h"
#include "sim_types.h"

namespace CPrimitives {

	class X_PCIE_INTERNAL_1_1{

		//Verilog Parameters:
		parameter_string_t LOC;
		parameter_enum_t AERCAPABILITYECRCCHECKCAPABLE;
		parameter_enum_t AERCAPABILITYECRCGENCAPABLE;
		parameter_enum_t BAR0EXIST;
		parameter_enum_t BAR0PREFETCHABLE;
		parameter_enum_t BAR1EXIST;
		parameter_enum_t BAR1PREFETCHABLE;
		parameter_enum_t BAR2EXIST;
		parameter_enum_t BAR2PREFETCHABLE;
		parameter_enum_t BAR3EXIST;
		parameter_enum_t BAR3PREFETCHABLE;
		parameter_enum_t BAR4EXIST;
		parameter_enum_t BAR4PREFETCHABLE;
		parameter_enum_t BAR5EXIST;
		parameter_enum_t BAR5PREFETCHABLE;
		parameter_enum_t CLKDIVIDED;
		parameter_enum_t DUALCOREENABLE;
		parameter_enum_t DUALCORESLAVE;
		parameter_enum_t INFINITECOMPLETIONS;
		parameter_enum_t ISSWITCH;
		parameter_enum_t LINKSTATUSSLOTCLOCKCONFIG;
		parameter_enum_t LLKBYPASS;
		parameter_enum_t PBCAPABILITYSYSTEMALLOCATED;
		parameter_enum_t PCIECAPABILITYSLOTIMPL;
		parameter_enum_t PMCAPABILITYD1SUPPORT;
		parameter_enum_t PMCAPABILITYD2SUPPORT;
		parameter_enum_t PMCAPABILITYDSI;
		parameter_enum_t RAMSHARETXRX;
		parameter_enum_t RESETMODE;
		parameter_enum_t RETRYREADADDRPIPE;
		parameter_enum_t RETRYREADDATAPIPE;
		parameter_enum_t RETRYWRITEPIPE;
		parameter_enum_t RXREADADDRPIPE;
		parameter_enum_t RXREADDATAPIPE;
		parameter_enum_t RXWRITEPIPE;
		parameter_enum_t SELECTASMODE;
		parameter_enum_t SELECTDLLIF;
		parameter_enum_t SLOTCAPABILITYATTBUTTONPRESENT;
		parameter_enum_t SLOTCAPABILITYATTINDICATORPRESENT;
		parameter_enum_t SLOTCAPABILITYHOTPLUGCAPABLE;
		parameter_enum_t SLOTCAPABILITYHOTPLUGSURPRISE;
		parameter_enum_t SLOTCAPABILITYMSLSENSORPRESENT;
		parameter_enum_t SLOTCAPABILITYPOWERCONTROLLERPRESENT;
		parameter_enum_t SLOTCAPABILITYPOWERINDICATORPRESENT;
		parameter_enum_t SLOTIMPLEMENTED;
		parameter_enum_t TXREADADDRPIPE;
		parameter_enum_t TXREADDATAPIPE;
		parameter_enum_t TXWRITEPIPE;
		parameter_enum_t UPSTREAMFACING;
		parameter_enum_t XLINKSUPPORTED;
		parameter_int_t VC0TOTALCREDITSCD;
		parameter_int_t VC0TOTALCREDITSPD;
		parameter_int_t VC1TOTALCREDITSCD;
		parameter_int_t VC1TOTALCREDITSPD;
		parameter_int_t AERBASEPTR;
		parameter_int_t AERCAPABILITYNEXTPTR;
		parameter_int_t DSNBASEPTR;
		parameter_int_t DSNCAPABILITYNEXTPTR;
		parameter_int_t EXTCFGXPCAPPTR;
		parameter_int_t MSIBASEPTR;
		parameter_int_t PBBASEPTR;
		parameter_int_t PBCAPABILITYNEXTPTR;
		parameter_int_t PMBASEPTR;
		parameter_int_t RETRYRAMSIZE;
		parameter_int_t VCBASEPTR;
		parameter_int_t VCCAPABILITYNEXTPTR;
		parameter_int_t SLOTCAPABILITYPHYSICALSLOTNUM;
		parameter_int_t VC0RXFIFOBASEC;
		parameter_int_t VC0RXFIFOBASENP;
		parameter_int_t VC0RXFIFOBASEP;
		parameter_int_t VC0RXFIFOLIMITC;
		parameter_int_t VC0RXFIFOLIMITNP;
		parameter_int_t VC0RXFIFOLIMITP;
		parameter_int_t VC0TXFIFOBASEC;
		parameter_int_t VC0TXFIFOBASENP;
		parameter_int_t VC0TXFIFOBASEP;
		parameter_int_t VC0TXFIFOLIMITC;
		parameter_int_t VC0TXFIFOLIMITNP;
		parameter_int_t VC0TXFIFOLIMITP;
		parameter_int_t VC1RXFIFOBASEC;
		parameter_int_t VC1RXFIFOBASENP;
		parameter_int_t VC1RXFIFOBASEP;
		parameter_int_t VC1RXFIFOLIMITC;
		parameter_int_t VC1RXFIFOLIMITNP;
		parameter_int_t VC1RXFIFOLIMITP;
		parameter_int_t VC1TXFIFOBASEC;
		parameter_int_t VC1TXFIFOBASENP;
		parameter_int_t VC1TXFIFOBASEP;
		parameter_int_t VC1TXFIFOLIMITC;
		parameter_int_t VC1TXFIFOLIMITNP;
		parameter_int_t VC1TXFIFOLIMITP;
		parameter_int_t DEVICEID;
		parameter_int_t SUBSYSTEMID;
		parameter_int_t SUBSYSTEMVENDORID;
		parameter_int_t VENDORID;
		parameter_int_t LINKCAPABILITYASPMSUPPORT;
		parameter_int_t PBCAPABILITYDW0DATASCALE;
		parameter_int_t PBCAPABILITYDW0PMSTATE;
		parameter_int_t PBCAPABILITYDW1DATASCALE;
		parameter_int_t PBCAPABILITYDW1PMSTATE;
		parameter_int_t PBCAPABILITYDW2DATASCALE;
		parameter_int_t PBCAPABILITYDW2PMSTATE;
		parameter_int_t PBCAPABILITYDW3DATASCALE;
		parameter_int_t PBCAPABILITYDW3PMSTATE;
		parameter_int_t PMSTATUSCONTROLDATASCALE;
		parameter_int_t SLOTCAPABILITYSLOTPOWERLIMITSCALE;
		parameter_int_t CLASSCODE;
		parameter_int_t CONFIGROUTING;
		parameter_int_t DEVICECAPABILITYENDPOINTL0SLATENCY;
		parameter_int_t DEVICECAPABILITYENDPOINTL1LATENCY;
		parameter_int_t MSICAPABILITYMULTIMSGCAP;
		parameter_int_t PBCAPABILITYDW0PMSUBSTATE;
		parameter_int_t PBCAPABILITYDW0POWERRAIL;
		parameter_int_t PBCAPABILITYDW0TYPE;
		parameter_int_t PBCAPABILITYDW1PMSUBSTATE;
		parameter_int_t PBCAPABILITYDW1POWERRAIL;
		parameter_int_t PBCAPABILITYDW1TYPE;
		parameter_int_t PBCAPABILITYDW2PMSUBSTATE;
		parameter_int_t PBCAPABILITYDW2POWERRAIL;
		parameter_int_t PBCAPABILITYDW2TYPE;
		parameter_int_t PBCAPABILITYDW3PMSUBSTATE;
		parameter_int_t PBCAPABILITYDW3POWERRAIL;
		parameter_int_t PBCAPABILITYDW3TYPE;
		parameter_int_t PMCAPABILITYAUXCURRENT;
		parameter_int_t PORTVCCAPABILITYEXTENDEDVCCOUNT;
		parameter_int_t CARDBUSCISPOINTER;
		parameter_int_t XPDEVICEPORTTYPE;
		parameter_int_t PCIECAPABILITYINTMSGNUM;
		parameter_int_t PMCAPABILITYPMESUPPORT;
		parameter_int_t BAR0MASKWIDTH;
		parameter_int_t BAR1MASKWIDTH;
		parameter_int_t BAR2MASKWIDTH;
		parameter_int_t BAR3MASKWIDTH;
		parameter_int_t BAR4MASKWIDTH;
		parameter_int_t BAR5MASKWIDTH;
		parameter_int_t LINKCAPABILITYMAXLINKWIDTH;
		parameter_int_t DEVICESERIALNUMBER;
		parameter_int_t VC0TOTALCREDITSCH;
		parameter_int_t VC0TOTALCREDITSNPH;
		parameter_int_t VC0TOTALCREDITSPH;
		parameter_int_t VC1TOTALCREDITSCH;
		parameter_int_t VC1TOTALCREDITSNPH;
		parameter_int_t VC1TOTALCREDITSPH;
		parameter_int_t ACTIVELANESIN;
		parameter_int_t CAPABILITIESPOINTER;
		parameter_int_t EXTCFGCAPPTR;
		parameter_int_t HEADERTYPE;
		parameter_int_t INTERRUPTPIN;
		parameter_int_t MSICAPABILITYNEXTPTR;
		parameter_int_t PBCAPABILITYDW0BASEPOWER;
		parameter_int_t PBCAPABILITYDW1BASEPOWER;
		parameter_int_t PBCAPABILITYDW2BASEPOWER;
		parameter_int_t PBCAPABILITYDW3BASEPOWER;
		parameter_int_t PCIECAPABILITYNEXTPTR;
		parameter_int_t PMCAPABILITYNEXTPTR;
		parameter_int_t PMDATA0;
		parameter_int_t PMDATA1;
		parameter_int_t PMDATA2;
		parameter_int_t PMDATA3;
		parameter_int_t PMDATA4;
		parameter_int_t PMDATA5;
		parameter_int_t PMDATA6;
		parameter_int_t PMDATA7;
		parameter_int_t PMDATA8;
		parameter_int_t PORTVCCAPABILITYVCARBCAP;
		parameter_int_t PORTVCCAPABILITYVCARBTABLEOFFSET;
		parameter_int_t REVISIONID;
		parameter_int_t SLOTCAPABILITYSLOTPOWERLIMITVALUE;
		parameter_int_t XPBASEPTR;
		parameter_int_t BAR0ADDRWIDTH;
		parameter_int_t BAR0IOMEMN;
		parameter_int_t BAR1ADDRWIDTH;
		parameter_int_t BAR1IOMEMN;
		parameter_int_t BAR2ADDRWIDTH;
		parameter_int_t BAR2IOMEMN;
		parameter_int_t BAR3ADDRWIDTH;
		parameter_int_t BAR3IOMEMN;
		parameter_int_t BAR4ADDRWIDTH;
		parameter_int_t BAR4IOMEMN;
		parameter_int_t BAR5IOMEMN;
		parameter_int_t DUALROLECFGCNTRLROOTEPN;
		parameter_int_t L0SEXITLATENCY;
		parameter_int_t L0SEXITLATENCYCOMCLK;
		parameter_int_t L1EXITLATENCY;
		parameter_int_t L1EXITLATENCYCOMCLK;
		parameter_int_t LOWPRIORITYVCCOUNT;
		parameter_int_t PCIEREVISION;
		parameter_int_t PMDATASCALE0;
		parameter_int_t PMDATASCALE1;
		parameter_int_t PMDATASCALE2;
		parameter_int_t PMDATASCALE3;
		parameter_int_t PMDATASCALE4;
		parameter_int_t PMDATASCALE5;
		parameter_int_t PMDATASCALE6;
		parameter_int_t PMDATASCALE7;
		parameter_int_t PMDATASCALE8;
		parameter_int_t RETRYRAMREADLATENCY;
		parameter_int_t RETRYRAMWIDTH;
		parameter_int_t RETRYRAMWRITELATENCY;
		parameter_int_t TLRAMREADLATENCY;
		parameter_int_t TLRAMWIDTH;
		parameter_int_t TLRAMWRITELATENCY;
		parameter_int_t TXTSNFTS;
		parameter_int_t TXTSNFTSCOMCLK;
		parameter_int_t XPMAXPAYLOAD;
		parameter_int_t XPRCBCONTROL;
		//Verilog Ports in definition order:
		NetFlow* BUSMASTERENABLE; // OUTPUT
		NetFlow* CRMDOHOTRESETN; // OUTPUT
		NetFlow* CRMPWRSOFTRESETN; // OUTPUT
		NetFlow* CRMRXHOTRESETN; // OUTPUT
		NetFlow* DLLTXPMDLLPOUTSTANDING; // OUTPUT
		NetFlow* INTERRUPTDISABLE; // OUTPUT
		NetFlow* IOSPACEENABLE; // OUTPUT
		NetFlow* L0ASAUTONOMOUSINITCOMPLETED; // OUTPUT
		NetFlow* L0ATTENTIONINDICATORCONTROL; // OUTPUT
		NetFlow* L0CFGLOOPBACKACK; // OUTPUT
		NetFlow* L0COMPLETERID; // OUTPUT
		NetFlow* L0CORRERRMSGRCVD; // OUTPUT
		NetFlow* L0DLLASRXSTATE; // OUTPUT
		NetFlow* L0DLLASTXSTATE; // OUTPUT
		NetFlow* L0DLLERRORVECTOR; // OUTPUT
		NetFlow* L0DLLRXACKOUTSTANDING; // OUTPUT
		NetFlow* L0DLLTXNONFCOUTSTANDING; // OUTPUT
		NetFlow* L0DLLTXOUTSTANDING; // OUTPUT
		NetFlow* L0DLLVCSTATUS; // OUTPUT
		NetFlow* L0DLUPDOWN; // OUTPUT
		NetFlow* L0ERRMSGREQID; // OUTPUT
		NetFlow* L0FATALERRMSGRCVD; // OUTPUT
		NetFlow* L0FIRSTCFGWRITEOCCURRED; // OUTPUT
		NetFlow* L0FWDCORRERROUT; // OUTPUT
		NetFlow* L0FWDFATALERROUT; // OUTPUT
		NetFlow* L0FWDNONFATALERROUT; // OUTPUT
		NetFlow* L0LTSSMSTATE; // OUTPUT
		NetFlow* L0MACENTEREDL0; // OUTPUT
		NetFlow* L0MACLINKTRAINING; // OUTPUT
		NetFlow* L0MACLINKUP; // OUTPUT
		NetFlow* L0MACNEGOTIATEDLINKWIDTH; // OUTPUT
		NetFlow* L0MACNEWSTATEACK; // OUTPUT
		NetFlow* L0MACRXL0SSTATE; // OUTPUT
		NetFlow* L0MACUPSTREAMDOWNSTREAM; // OUTPUT
		NetFlow* L0MCFOUND; // OUTPUT
		NetFlow* L0MSIENABLE0; // OUTPUT
		NetFlow* L0MULTIMSGEN0; // OUTPUT
		NetFlow* L0NONFATALERRMSGRCVD; // OUTPUT
		NetFlow* L0PMEACK; // OUTPUT
		NetFlow* L0PMEEN; // OUTPUT
		NetFlow* L0PMEREQOUT; // OUTPUT
		NetFlow* L0POWERCONTROLLERCONTROL; // OUTPUT
		NetFlow* L0POWERINDICATORCONTROL; // OUTPUT
		NetFlow* L0PWRINHIBITTRANSFERS; // OUTPUT
		NetFlow* L0PWRL1STATE; // OUTPUT
		NetFlow* L0PWRL23READYDEVICE; // OUTPUT
		NetFlow* L0PWRL23READYSTATE; // OUTPUT
		NetFlow* L0PWRSTATE0; // OUTPUT
		NetFlow* L0PWRTURNOFFREQ; // OUTPUT
		NetFlow* L0PWRTXL0SSTATE; // OUTPUT
		NetFlow* L0RECEIVEDASSERTINTALEGACYINT; // OUTPUT
		NetFlow* L0RECEIVEDASSERTINTBLEGACYINT; // OUTPUT
		NetFlow* L0RECEIVEDASSERTINTCLEGACYINT; // OUTPUT
		NetFlow* L0RECEIVEDASSERTINTDLEGACYINT; // OUTPUT
		NetFlow* L0RECEIVEDDEASSERTINTALEGACYINT; // OUTPUT
		NetFlow* L0RECEIVEDDEASSERTINTBLEGACYINT; // OUTPUT
		NetFlow* L0RECEIVEDDEASSERTINTCLEGACYINT; // OUTPUT
		NetFlow* L0RECEIVEDDEASSERTINTDLEGACYINT; // OUTPUT
		NetFlow* L0RXBEACON; // OUTPUT
		NetFlow* L0RXDLLFCCMPLMCCRED; // OUTPUT
		NetFlow* L0RXDLLFCCMPLMCUPDATE; // OUTPUT
		NetFlow* L0RXDLLFCNPOSTBYPCRED; // OUTPUT
		NetFlow* L0RXDLLFCNPOSTBYPUPDATE; // OUTPUT
		NetFlow* L0RXDLLFCPOSTORDCRED; // OUTPUT
		NetFlow* L0RXDLLFCPOSTORDUPDATE; // OUTPUT
		NetFlow* L0RXDLLPM; // OUTPUT
		NetFlow* L0RXDLLPMTYPE; // OUTPUT
		NetFlow* L0RXDLLSBFCDATA; // OUTPUT
		NetFlow* L0RXDLLSBFCUPDATE; // OUTPUT
		NetFlow* L0RXDLLTLPECRCOK; // OUTPUT
		NetFlow* L0RXDLLTLPEND; // OUTPUT
		NetFlow* L0RXMACLINKERROR; // OUTPUT
		NetFlow* L0STATSCFGOTHERRECEIVED; // OUTPUT
		NetFlow* L0STATSCFGOTHERTRANSMITTED; // OUTPUT
		NetFlow* L0STATSCFGRECEIVED; // OUTPUT
		NetFlow* L0STATSCFGTRANSMITTED; // OUTPUT
		NetFlow* L0STATSDLLPRECEIVED; // OUTPUT
		NetFlow* L0STATSDLLPTRANSMITTED; // OUTPUT
		NetFlow* L0STATSOSRECEIVED; // OUTPUT
		NetFlow* L0STATSOSTRANSMITTED; // OUTPUT
		NetFlow* L0STATSTLPRECEIVED; // OUTPUT
		NetFlow* L0STATSTLPTRANSMITTED; // OUTPUT
		NetFlow* L0TOGGLEELECTROMECHANICALINTERLOCK; // OUTPUT
		NetFlow* L0TRANSFORMEDVC; // OUTPUT
		NetFlow* L0TXDLLFCCMPLMCUPDATED; // OUTPUT
		NetFlow* L0TXDLLFCNPOSTBYPUPDATED; // OUTPUT
		NetFlow* L0TXDLLFCPOSTORDUPDATED; // OUTPUT
		NetFlow* L0TXDLLPMUPDATED; // OUTPUT
		NetFlow* L0TXDLLSBFCUPDATED; // OUTPUT
		NetFlow* L0UCBYPFOUND; // OUTPUT
		NetFlow* L0UCORDFOUND; // OUTPUT
		NetFlow* L0UNLOCKRECEIVED; // OUTPUT
		NetFlow* LLKRX4DWHEADERN; // OUTPUT
		NetFlow* LLKRXCHCOMPLETIONAVAILABLEN; // OUTPUT
		NetFlow* LLKRXCHCOMPLETIONPARTIALN; // OUTPUT
		NetFlow* LLKRXCHCONFIGAVAILABLEN; // OUTPUT
		NetFlow* LLKRXCHCONFIGPARTIALN; // OUTPUT
		NetFlow* LLKRXCHNONPOSTEDAVAILABLEN; // OUTPUT
		NetFlow* LLKRXCHNONPOSTEDPARTIALN; // OUTPUT
		NetFlow* LLKRXCHPOSTEDAVAILABLEN; // OUTPUT
		NetFlow* LLKRXCHPOSTEDPARTIALN; // OUTPUT
		NetFlow* LLKRXDATA; // OUTPUT
		NetFlow* LLKRXECRCBADN; // OUTPUT
		NetFlow* LLKRXEOFN; // OUTPUT
		NetFlow* LLKRXEOPN; // OUTPUT
		NetFlow* LLKRXPREFERREDTYPE; // OUTPUT
		NetFlow* LLKRXSOFN; // OUTPUT
		NetFlow* LLKRXSOPN; // OUTPUT
		NetFlow* LLKRXSRCDSCN; // OUTPUT
		NetFlow* LLKRXSRCLASTREQN; // OUTPUT
		NetFlow* LLKRXSRCRDYN; // OUTPUT
		NetFlow* LLKRXVALIDN; // OUTPUT
		NetFlow* LLKTCSTATUS; // OUTPUT
		NetFlow* LLKTXCHANSPACE; // OUTPUT
		NetFlow* LLKTXCHCOMPLETIONREADYN; // OUTPUT
		NetFlow* LLKTXCHNONPOSTEDREADYN; // OUTPUT
		NetFlow* LLKTXCHPOSTEDREADYN; // OUTPUT
		NetFlow* LLKTXCONFIGREADYN; // OUTPUT
		NetFlow* LLKTXDSTRDYN; // OUTPUT
		NetFlow* MAXPAYLOADSIZE; // OUTPUT
		NetFlow* MAXREADREQUESTSIZE; // OUTPUT
		NetFlow* MEMSPACEENABLE; // OUTPUT
		NetFlow* MGMTPSO; // OUTPUT
		NetFlow* MGMTRDATA; // OUTPUT
		NetFlow* MGMTSTATSCREDIT; // OUTPUT
		NetFlow* MIMDLLBRADD; // OUTPUT
		NetFlow* MIMDLLBREN; // OUTPUT
		NetFlow* MIMDLLBWADD; // OUTPUT
		NetFlow* MIMDLLBWDATA; // OUTPUT
		NetFlow* MIMDLLBWEN; // OUTPUT
		NetFlow* MIMRXBRADD; // OUTPUT
		NetFlow* MIMRXBREN; // OUTPUT
		NetFlow* MIMRXBWADD; // OUTPUT
		NetFlow* MIMRXBWDATA; // OUTPUT
		NetFlow* MIMRXBWEN; // OUTPUT
		NetFlow* MIMTXBRADD; // OUTPUT
		NetFlow* MIMTXBREN; // OUTPUT
		NetFlow* MIMTXBWADD; // OUTPUT
		NetFlow* MIMTXBWDATA; // OUTPUT
		NetFlow* MIMTXBWEN; // OUTPUT
		NetFlow* PARITYERRORRESPONSE; // OUTPUT
		NetFlow* PIPEDESKEWLANESL0; // OUTPUT
		NetFlow* PIPEDESKEWLANESL1; // OUTPUT
		NetFlow* PIPEDESKEWLANESL2; // OUTPUT
		NetFlow* PIPEDESKEWLANESL3; // OUTPUT
		NetFlow* PIPEDESKEWLANESL4; // OUTPUT
		NetFlow* PIPEDESKEWLANESL5; // OUTPUT
		NetFlow* PIPEDESKEWLANESL6; // OUTPUT
		NetFlow* PIPEDESKEWLANESL7; // OUTPUT
		NetFlow* PIPEPOWERDOWNL0; // OUTPUT
		NetFlow* PIPEPOWERDOWNL1; // OUTPUT
		NetFlow* PIPEPOWERDOWNL2; // OUTPUT
		NetFlow* PIPEPOWERDOWNL3; // OUTPUT
		NetFlow* PIPEPOWERDOWNL4; // OUTPUT
		NetFlow* PIPEPOWERDOWNL5; // OUTPUT
		NetFlow* PIPEPOWERDOWNL6; // OUTPUT
		NetFlow* PIPEPOWERDOWNL7; // OUTPUT
		NetFlow* PIPERESETL0; // OUTPUT
		NetFlow* PIPERESETL1; // OUTPUT
		NetFlow* PIPERESETL2; // OUTPUT
		NetFlow* PIPERESETL3; // OUTPUT
		NetFlow* PIPERESETL4; // OUTPUT
		NetFlow* PIPERESETL5; // OUTPUT
		NetFlow* PIPERESETL6; // OUTPUT
		NetFlow* PIPERESETL7; // OUTPUT
		NetFlow* PIPERXPOLARITYL0; // OUTPUT
		NetFlow* PIPERXPOLARITYL1; // OUTPUT
		NetFlow* PIPERXPOLARITYL2; // OUTPUT
		NetFlow* PIPERXPOLARITYL3; // OUTPUT
		NetFlow* PIPERXPOLARITYL4; // OUTPUT
		NetFlow* PIPERXPOLARITYL5; // OUTPUT
		NetFlow* PIPERXPOLARITYL6; // OUTPUT
		NetFlow* PIPERXPOLARITYL7; // OUTPUT
		NetFlow* PIPETXCOMPLIANCEL0; // OUTPUT
		NetFlow* PIPETXCOMPLIANCEL1; // OUTPUT
		NetFlow* PIPETXCOMPLIANCEL2; // OUTPUT
		NetFlow* PIPETXCOMPLIANCEL3; // OUTPUT
		NetFlow* PIPETXCOMPLIANCEL4; // OUTPUT
		NetFlow* PIPETXCOMPLIANCEL5; // OUTPUT
		NetFlow* PIPETXCOMPLIANCEL6; // OUTPUT
		NetFlow* PIPETXCOMPLIANCEL7; // OUTPUT
		NetFlow* PIPETXDATAKL0; // OUTPUT
		NetFlow* PIPETXDATAKL1; // OUTPUT
		NetFlow* PIPETXDATAKL2; // OUTPUT
		NetFlow* PIPETXDATAKL3; // OUTPUT
		NetFlow* PIPETXDATAKL4; // OUTPUT
		NetFlow* PIPETXDATAKL5; // OUTPUT
		NetFlow* PIPETXDATAKL6; // OUTPUT
		NetFlow* PIPETXDATAKL7; // OUTPUT
		NetFlow* PIPETXDATAL0; // OUTPUT
		NetFlow* PIPETXDATAL1; // OUTPUT
		NetFlow* PIPETXDATAL2; // OUTPUT
		NetFlow* PIPETXDATAL3; // OUTPUT
		NetFlow* PIPETXDATAL4; // OUTPUT
		NetFlow* PIPETXDATAL5; // OUTPUT
		NetFlow* PIPETXDATAL6; // OUTPUT
		NetFlow* PIPETXDATAL7; // OUTPUT
		NetFlow* PIPETXDETECTRXLOOPBACKL0; // OUTPUT
		NetFlow* PIPETXDETECTRXLOOPBACKL1; // OUTPUT
		NetFlow* PIPETXDETECTRXLOOPBACKL2; // OUTPUT
		NetFlow* PIPETXDETECTRXLOOPBACKL3; // OUTPUT
		NetFlow* PIPETXDETECTRXLOOPBACKL4; // OUTPUT
		NetFlow* PIPETXDETECTRXLOOPBACKL5; // OUTPUT
		NetFlow* PIPETXDETECTRXLOOPBACKL6; // OUTPUT
		NetFlow* PIPETXDETECTRXLOOPBACKL7; // OUTPUT
		NetFlow* PIPETXELECIDLEL0; // OUTPUT
		NetFlow* PIPETXELECIDLEL1; // OUTPUT
		NetFlow* PIPETXELECIDLEL2; // OUTPUT
		NetFlow* PIPETXELECIDLEL3; // OUTPUT
		NetFlow* PIPETXELECIDLEL4; // OUTPUT
		NetFlow* PIPETXELECIDLEL5; // OUTPUT
		NetFlow* PIPETXELECIDLEL6; // OUTPUT
		NetFlow* PIPETXELECIDLEL7; // OUTPUT
		NetFlow* SERRENABLE; // OUTPUT
		NetFlow* URREPORTINGENABLE; // OUTPUT
		NetFlow* AUXPOWER; // INPUT
		NetFlow* CFGNEGOTIATEDLINKWIDTH; // INPUT
		NetFlow* COMPLIANCEAVOID; // INPUT
		NetFlow* CRMCFGBRIDGEHOTRESET; // INPUT
		NetFlow* CRMCORECLK; // INPUT
		NetFlow* CRMCORECLKDLO; // INPUT
		NetFlow* CRMCORECLKRXO; // INPUT
		NetFlow* CRMCORECLKTXO; // INPUT
		NetFlow* CRMLINKRSTN; // INPUT
		NetFlow* CRMMACRSTN; // INPUT
		NetFlow* CRMMGMTRSTN; // INPUT
		NetFlow* CRMNVRSTN; // INPUT
		NetFlow* CRMTXHOTRESETN; // INPUT
		NetFlow* CRMURSTN; // INPUT
		NetFlow* CRMUSERCFGRSTN; // INPUT
		NetFlow* CRMUSERCLK; // INPUT
		NetFlow* CRMUSERCLKRXO; // INPUT
		NetFlow* CRMUSERCLKTXO; // INPUT
		NetFlow* CROSSLINKSEED; // INPUT
		NetFlow* L0ACKNAKTIMERADJUSTMENT; // INPUT
		NetFlow* L0ALLDOWNPORTSINL1; // INPUT
		NetFlow* L0ALLDOWNRXPORTSINL0S; // INPUT
		NetFlow* L0ASE; // INPUT
		NetFlow* L0ASPORTCOUNT; // INPUT
		NetFlow* L0ASTURNPOOLBITSCONSUMED; // INPUT
		NetFlow* L0ATTENTIONBUTTONPRESSED; // INPUT
		NetFlow* L0CFGASSPANTREEOWNEDSTATE; // INPUT
		NetFlow* L0CFGASSTATECHANGECMD; // INPUT
		NetFlow* L0CFGDISABLESCRAMBLE; // INPUT
		NetFlow* L0CFGEXTENDEDSYNC; // INPUT
		NetFlow* L0CFGL0SENTRYENABLE; // INPUT
		NetFlow* L0CFGL0SENTRYSUP; // INPUT
		NetFlow* L0CFGL0SEXITLAT; // INPUT
		NetFlow* L0CFGLINKDISABLE; // INPUT
		NetFlow* L0CFGLOOPBACKMASTER; // INPUT
		NetFlow* L0CFGNEGOTIATEDMAXP; // INPUT
		NetFlow* L0CFGVCENABLE; // INPUT
		NetFlow* L0CFGVCID; // INPUT
		NetFlow* L0DLLHOLDLINKUP; // INPUT
		NetFlow* L0ELECTROMECHANICALINTERLOCKENGAGED; // INPUT
		NetFlow* L0FWDASSERTINTALEGACYINT; // INPUT
		NetFlow* L0FWDASSERTINTBLEGACYINT; // INPUT
		NetFlow* L0FWDASSERTINTCLEGACYINT; // INPUT
		NetFlow* L0FWDASSERTINTDLEGACYINT; // INPUT
		NetFlow* L0FWDCORRERRIN; // INPUT
		NetFlow* L0FWDDEASSERTINTALEGACYINT; // INPUT
		NetFlow* L0FWDDEASSERTINTBLEGACYINT; // INPUT
		NetFlow* L0FWDDEASSERTINTCLEGACYINT; // INPUT
		NetFlow* L0FWDDEASSERTINTDLEGACYINT; // INPUT
		NetFlow* L0FWDFATALERRIN; // INPUT
		NetFlow* L0FWDNONFATALERRIN; // INPUT
		NetFlow* L0LEGACYINTFUNCT0; // INPUT
		NetFlow* L0MRLSENSORCLOSEDN; // INPUT
		NetFlow* L0MSIREQUEST0; // INPUT
		NetFlow* L0PACKETHEADERFROMUSER; // INPUT
		NetFlow* L0PMEREQIN; // INPUT
		NetFlow* L0PORTNUMBER; // INPUT
		NetFlow* L0POWERFAULTDETECTED; // INPUT
		NetFlow* L0PRESENCEDETECTSLOTEMPTYN; // INPUT
		NetFlow* L0PWRNEWSTATEREQ; // INPUT
		NetFlow* L0PWRNEXTLINKSTATE; // INPUT
		NetFlow* L0REPLAYTIMERADJUSTMENT; // INPUT
		NetFlow* L0ROOTTURNOFFREQ; // INPUT
		NetFlow* L0RXTLTLPNONINITIALIZEDVC; // INPUT
		NetFlow* L0SENDUNLOCKMESSAGE; // INPUT
		NetFlow* L0SETCOMPLETERABORTERROR; // INPUT
		NetFlow* L0SETCOMPLETIONTIMEOUTCORRERROR; // INPUT
		NetFlow* L0SETCOMPLETIONTIMEOUTUNCORRERROR; // INPUT
		NetFlow* L0SETDETECTEDCORRERROR; // INPUT
		NetFlow* L0SETDETECTEDFATALERROR; // INPUT
		NetFlow* L0SETDETECTEDNONFATALERROR; // INPUT
		NetFlow* L0SETLINKDETECTEDPARITYERROR; // INPUT
		NetFlow* L0SETLINKMASTERDATAPARITY; // INPUT
		NetFlow* L0SETLINKRECEIVEDMASTERABORT; // INPUT
		NetFlow* L0SETLINKRECEIVEDTARGETABORT; // INPUT
		NetFlow* L0SETLINKSIGNALLEDTARGETABORT; // INPUT
		NetFlow* L0SETLINKSYSTEMERROR; // INPUT
		NetFlow* L0SETUNEXPECTEDCOMPLETIONCORRERROR; // INPUT
		NetFlow* L0SETUNEXPECTEDCOMPLETIONUNCORRERROR; // INPUT
		NetFlow* L0SETUNSUPPORTEDREQUESTNONPOSTEDERROR; // INPUT
		NetFlow* L0SETUNSUPPORTEDREQUESTOTHERERROR; // INPUT
		NetFlow* L0SETUSERDETECTEDPARITYERROR; // INPUT
		NetFlow* L0SETUSERMASTERDATAPARITY; // INPUT
		NetFlow* L0SETUSERRECEIVEDMASTERABORT; // INPUT
		NetFlow* L0SETUSERRECEIVEDTARGETABORT; // INPUT
		NetFlow* L0SETUSERSIGNALLEDTARGETABORT; // INPUT
		NetFlow* L0SETUSERSYSTEMERROR; // INPUT
		NetFlow* L0TLASFCCREDSTARVATION; // INPUT
		NetFlow* L0TLLINKRETRAIN; // INPUT
		NetFlow* L0TRANSACTIONSPENDING; // INPUT
		NetFlow* L0TXBEACON; // INPUT
		NetFlow* L0TXCFGPM; // INPUT
		NetFlow* L0TXCFGPMTYPE; // INPUT
		NetFlow* L0TXTLFCCMPLMCCRED; // INPUT
		NetFlow* L0TXTLFCCMPLMCUPDATE; // INPUT
		NetFlow* L0TXTLFCNPOSTBYPCRED; // INPUT
		NetFlow* L0TXTLFCNPOSTBYPUPDATE; // INPUT
		NetFlow* L0TXTLFCPOSTORDCRED; // INPUT
		NetFlow* L0TXTLFCPOSTORDUPDATE; // INPUT
		NetFlow* L0TXTLSBFCDATA; // INPUT
		NetFlow* L0TXTLSBFCUPDATE; // INPUT
		NetFlow* L0TXTLTLPDATA; // INPUT
		NetFlow* L0TXTLTLPEDB; // INPUT
		NetFlow* L0TXTLTLPENABLE; // INPUT
		NetFlow* L0TXTLTLPEND; // INPUT
		NetFlow* L0TXTLTLPLATENCY; // INPUT
		NetFlow* L0TXTLTLPREQ; // INPUT
		NetFlow* L0TXTLTLPREQEND; // INPUT
		NetFlow* L0TXTLTLPWIDTH; // INPUT
		NetFlow* L0UPSTREAMRXPORTINL0S; // INPUT
		NetFlow* L0VC0PREVIEWEXPAND; // INPUT
		NetFlow* L0WAKEN; // INPUT
		NetFlow* LLKRXCHFIFO; // INPUT
		NetFlow* LLKRXCHTC; // INPUT
		NetFlow* LLKRXDSTCONTREQN; // INPUT
		NetFlow* LLKRXDSTREQN; // INPUT
		NetFlow* LLKTX4DWHEADERN; // INPUT
		NetFlow* LLKTXCHFIFO; // INPUT
		NetFlow* LLKTXCHTC; // INPUT
		NetFlow* LLKTXCOMPLETEN; // INPUT
		NetFlow* LLKTXCREATEECRCN; // INPUT
		NetFlow* LLKTXDATA; // INPUT
		NetFlow* LLKTXENABLEN; // INPUT
		NetFlow* LLKTXEOFN; // INPUT
		NetFlow* LLKTXEOPN; // INPUT
		NetFlow* LLKTXSOFN; // INPUT
		NetFlow* LLKTXSOPN; // INPUT
		NetFlow* LLKTXSRCDSCN; // INPUT
		NetFlow* LLKTXSRCRDYN; // INPUT
		NetFlow* MAINPOWER; // INPUT
		NetFlow* MGMTADDR; // INPUT
		NetFlow* MGMTBWREN; // INPUT
		NetFlow* MGMTRDEN; // INPUT
		NetFlow* MGMTSTATSCREDITSEL; // INPUT
		NetFlow* MGMTWDATA; // INPUT
		NetFlow* MGMTWREN; // INPUT
		NetFlow* MIMDLLBRDATA; // INPUT
		NetFlow* MIMRXBRDATA; // INPUT
		NetFlow* MIMTXBRDATA; // INPUT
		NetFlow* PIPEPHYSTATUSL0; // INPUT
		NetFlow* PIPEPHYSTATUSL1; // INPUT
		NetFlow* PIPEPHYSTATUSL2; // INPUT
		NetFlow* PIPEPHYSTATUSL3; // INPUT
		NetFlow* PIPEPHYSTATUSL4; // INPUT
		NetFlow* PIPEPHYSTATUSL5; // INPUT
		NetFlow* PIPEPHYSTATUSL6; // INPUT
		NetFlow* PIPEPHYSTATUSL7; // INPUT
		NetFlow* PIPERXCHANISALIGNEDL0; // INPUT
		NetFlow* PIPERXCHANISALIGNEDL1; // INPUT
		NetFlow* PIPERXCHANISALIGNEDL2; // INPUT
		NetFlow* PIPERXCHANISALIGNEDL3; // INPUT
		NetFlow* PIPERXCHANISALIGNEDL4; // INPUT
		NetFlow* PIPERXCHANISALIGNEDL5; // INPUT
		NetFlow* PIPERXCHANISALIGNEDL6; // INPUT
		NetFlow* PIPERXCHANISALIGNEDL7; // INPUT
		NetFlow* PIPERXDATAKL0; // INPUT
		NetFlow* PIPERXDATAKL1; // INPUT
		NetFlow* PIPERXDATAKL2; // INPUT
		NetFlow* PIPERXDATAKL3; // INPUT
		NetFlow* PIPERXDATAKL4; // INPUT
		NetFlow* PIPERXDATAKL5; // INPUT
		NetFlow* PIPERXDATAKL6; // INPUT
		NetFlow* PIPERXDATAKL7; // INPUT
		NetFlow* PIPERXDATAL0; // INPUT
		NetFlow* PIPERXDATAL1; // INPUT
		NetFlow* PIPERXDATAL2; // INPUT
		NetFlow* PIPERXDATAL3; // INPUT
		NetFlow* PIPERXDATAL4; // INPUT
		NetFlow* PIPERXDATAL5; // INPUT
		NetFlow* PIPERXDATAL6; // INPUT
		NetFlow* PIPERXDATAL7; // INPUT
		NetFlow* PIPERXELECIDLEL0; // INPUT
		NetFlow* PIPERXELECIDLEL1; // INPUT
		NetFlow* PIPERXELECIDLEL2; // INPUT
		NetFlow* PIPERXELECIDLEL3; // INPUT
		NetFlow* PIPERXELECIDLEL4; // INPUT
		NetFlow* PIPERXELECIDLEL5; // INPUT
		NetFlow* PIPERXELECIDLEL6; // INPUT
		NetFlow* PIPERXELECIDLEL7; // INPUT
		NetFlow* PIPERXSTATUSL0; // INPUT
		NetFlow* PIPERXSTATUSL1; // INPUT
		NetFlow* PIPERXSTATUSL2; // INPUT
		NetFlow* PIPERXSTATUSL3; // INPUT
		NetFlow* PIPERXSTATUSL4; // INPUT
		NetFlow* PIPERXSTATUSL5; // INPUT
		NetFlow* PIPERXSTATUSL6; // INPUT
		NetFlow* PIPERXSTATUSL7; // INPUT
		NetFlow* PIPERXVALIDL0; // INPUT
		NetFlow* PIPERXVALIDL1; // INPUT
		NetFlow* PIPERXVALIDL2; // INPUT
		NetFlow* PIPERXVALIDL3; // INPUT
		NetFlow* PIPERXVALIDL4; // INPUT
		NetFlow* PIPERXVALIDL5; // INPUT
		NetFlow* PIPERXVALIDL6; // INPUT
		NetFlow* PIPERXVALIDL7; // INPUT
		
	
		X_PCIE_INTERNAL_1_1(
			//Verilog Parameters:
			parameter_string_t LOC, // Default: "UNPLACED"
			parameter_enum_t AERCAPABILITYECRCCHECKCAPABLE, // Default: "FALSE"
			parameter_enum_t AERCAPABILITYECRCGENCAPABLE, // Default: "FALSE"
			parameter_enum_t BAR0EXIST, // Default: "TRUE"
			parameter_enum_t BAR0PREFETCHABLE, // Default: "TRUE"
			parameter_enum_t BAR1EXIST, // Default: "FALSE"
			parameter_enum_t BAR1PREFETCHABLE, // Default: "FALSE"
			parameter_enum_t BAR2EXIST, // Default: "FALSE"
			parameter_enum_t BAR2PREFETCHABLE, // Default: "FALSE"
			parameter_enum_t BAR3EXIST, // Default: "FALSE"
			parameter_enum_t BAR3PREFETCHABLE, // Default: "FALSE"
			parameter_enum_t BAR4EXIST, // Default: "FALSE"
			parameter_enum_t BAR4PREFETCHABLE, // Default: "FALSE"
			parameter_enum_t BAR5EXIST, // Default: "FALSE"
			parameter_enum_t BAR5PREFETCHABLE, // Default: "FALSE"
			parameter_enum_t CLKDIVIDED, // Default: "FALSE"
			parameter_enum_t DUALCOREENABLE, // Default: "FALSE"
			parameter_enum_t DUALCORESLAVE, // Default: "FALSE"
			parameter_enum_t INFINITECOMPLETIONS, // Default: "TRUE"
			parameter_enum_t ISSWITCH, // Default: "FALSE"
			parameter_enum_t LINKSTATUSSLOTCLOCKCONFIG, // Default: "FALSE"
			parameter_enum_t LLKBYPASS, // Default: "FALSE"
			parameter_enum_t PBCAPABILITYSYSTEMALLOCATED, // Default: "FALSE"
			parameter_enum_t PCIECAPABILITYSLOTIMPL, // Default: "FALSE"
			parameter_enum_t PMCAPABILITYD1SUPPORT, // Default: "FALSE"
			parameter_enum_t PMCAPABILITYD2SUPPORT, // Default: "FALSE"
			parameter_enum_t PMCAPABILITYDSI, // Default: "TRUE"
			parameter_enum_t RAMSHARETXRX, // Default: "FALSE"
			parameter_enum_t RESETMODE, // Default: "FALSE"
			parameter_enum_t RETRYREADADDRPIPE, // Default: "FALSE"
			parameter_enum_t RETRYREADDATAPIPE, // Default: "FALSE"
			parameter_enum_t RETRYWRITEPIPE, // Default: "FALSE"
			parameter_enum_t RXREADADDRPIPE, // Default: "FALSE"
			parameter_enum_t RXREADDATAPIPE, // Default: "FALSE"
			parameter_enum_t RXWRITEPIPE, // Default: "FALSE"
			parameter_enum_t SELECTASMODE, // Default: "FALSE"
			parameter_enum_t SELECTDLLIF, // Default: "FALSE"
			parameter_enum_t SLOTCAPABILITYATTBUTTONPRESENT, // Default: "FALSE"
			parameter_enum_t SLOTCAPABILITYATTINDICATORPRESENT, // Default: "FALSE"
			parameter_enum_t SLOTCAPABILITYHOTPLUGCAPABLE, // Default: "FALSE"
			parameter_enum_t SLOTCAPABILITYHOTPLUGSURPRISE, // Default: "FALSE"
			parameter_enum_t SLOTCAPABILITYMSLSENSORPRESENT, // Default: "FALSE"
			parameter_enum_t SLOTCAPABILITYPOWERCONTROLLERPRESENT, // Default: "FALSE"
			parameter_enum_t SLOTCAPABILITYPOWERINDICATORPRESENT, // Default: "FALSE"
			parameter_enum_t SLOTIMPLEMENTED, // Default: "FALSE"
			parameter_enum_t TXREADADDRPIPE, // Default: "FALSE"
			parameter_enum_t TXREADDATAPIPE, // Default: "FALSE"
			parameter_enum_t TXWRITEPIPE, // Default: "FALSE"
			parameter_enum_t UPSTREAMFACING, // Default: "TRUE"
			parameter_enum_t XLINKSUPPORTED, // Default: "FALSE"
			parameter_int_t VC0TOTALCREDITSCD, // Default: 11'h0
			parameter_int_t VC0TOTALCREDITSPD, // Default: 11'h34
			parameter_int_t VC1TOTALCREDITSCD, // Default: 11'h0
			parameter_int_t VC1TOTALCREDITSPD, // Default: 11'h0
			parameter_int_t AERBASEPTR, // Default: 12'h110
			parameter_int_t AERCAPABILITYNEXTPTR, // Default: 12'h138
			parameter_int_t DSNBASEPTR, // Default: 12'h148
			parameter_int_t DSNCAPABILITYNEXTPTR, // Default: 12'h154
			parameter_int_t EXTCFGXPCAPPTR, // Default: 12'h0
			parameter_int_t MSIBASEPTR, // Default: 12'h48
			parameter_int_t PBBASEPTR, // Default: 12'h138
			parameter_int_t PBCAPABILITYNEXTPTR, // Default: 12'h148
			parameter_int_t PMBASEPTR, // Default: 12'h40
			parameter_int_t RETRYRAMSIZE, // Default: 12'h9
			parameter_int_t VCBASEPTR, // Default: 12'h154
			parameter_int_t VCCAPABILITYNEXTPTR, // Default: 12'h0
			parameter_int_t SLOTCAPABILITYPHYSICALSLOTNUM, // Default: 13'h0
			parameter_int_t VC0RXFIFOBASEC, // Default: 13'h98
			parameter_int_t VC0RXFIFOBASENP, // Default: 13'h80
			parameter_int_t VC0RXFIFOBASEP, // Default: 13'h0
			parameter_int_t VC0RXFIFOLIMITC, // Default: 13'h117
			parameter_int_t VC0RXFIFOLIMITNP, // Default: 13'h97
			parameter_int_t VC0RXFIFOLIMITP, // Default: 13'h7f
			parameter_int_t VC0TXFIFOBASEC, // Default: 13'h98
			parameter_int_t VC0TXFIFOBASENP, // Default: 13'h80
			parameter_int_t VC0TXFIFOBASEP, // Default: 13'h0
			parameter_int_t VC0TXFIFOLIMITC, // Default: 13'h117
			parameter_int_t VC0TXFIFOLIMITNP, // Default: 13'h97
			parameter_int_t VC0TXFIFOLIMITP, // Default: 13'h7f
			parameter_int_t VC1RXFIFOBASEC, // Default: 13'h118
			parameter_int_t VC1RXFIFOBASENP, // Default: 13'h118
			parameter_int_t VC1RXFIFOBASEP, // Default: 13'h118
			parameter_int_t VC1RXFIFOLIMITC, // Default: 13'h118
			parameter_int_t VC1RXFIFOLIMITNP, // Default: 13'h118
			parameter_int_t VC1RXFIFOLIMITP, // Default: 13'h118
			parameter_int_t VC1TXFIFOBASEC, // Default: 13'h118
			parameter_int_t VC1TXFIFOBASENP, // Default: 13'h118
			parameter_int_t VC1TXFIFOBASEP, // Default: 13'h118
			parameter_int_t VC1TXFIFOLIMITC, // Default: 13'h118
			parameter_int_t VC1TXFIFOLIMITNP, // Default: 13'h118
			parameter_int_t VC1TXFIFOLIMITP, // Default: 13'h118
			parameter_int_t DEVICEID, // Default: 16'h5050
			parameter_int_t SUBSYSTEMID, // Default: 16'h5050
			parameter_int_t SUBSYSTEMVENDORID, // Default: 16'h10EE
			parameter_int_t VENDORID, // Default: 16'h10EE
			parameter_int_t LINKCAPABILITYASPMSUPPORT, // Default: 2'h1
			parameter_int_t PBCAPABILITYDW0DATASCALE, // Default: 2'h0
			parameter_int_t PBCAPABILITYDW0PMSTATE, // Default: 2'h0
			parameter_int_t PBCAPABILITYDW1DATASCALE, // Default: 2'h0
			parameter_int_t PBCAPABILITYDW1PMSTATE, // Default: 2'h0
			parameter_int_t PBCAPABILITYDW2DATASCALE, // Default: 2'h0
			parameter_int_t PBCAPABILITYDW2PMSTATE, // Default: 2'h0
			parameter_int_t PBCAPABILITYDW3DATASCALE, // Default: 2'h0
			parameter_int_t PBCAPABILITYDW3PMSTATE, // Default: 2'h0
			parameter_int_t PMSTATUSCONTROLDATASCALE, // Default: 2'h0
			parameter_int_t SLOTCAPABILITYSLOTPOWERLIMITSCALE, // Default: 2'h0
			parameter_int_t CLASSCODE, // Default: 24'h058000
			parameter_int_t CONFIGROUTING, // Default: 3'h1
			parameter_int_t DEVICECAPABILITYENDPOINTL0SLATENCY, // Default: 3'h0
			parameter_int_t DEVICECAPABILITYENDPOINTL1LATENCY, // Default: 3'h0
			parameter_int_t MSICAPABILITYMULTIMSGCAP, // Default: 3'h0
			parameter_int_t PBCAPABILITYDW0PMSUBSTATE, // Default: 3'h0
			parameter_int_t PBCAPABILITYDW0POWERRAIL, // Default: 3'h0
			parameter_int_t PBCAPABILITYDW0TYPE, // Default: 3'h0
			parameter_int_t PBCAPABILITYDW1PMSUBSTATE, // Default: 3'h0
			parameter_int_t PBCAPABILITYDW1POWERRAIL, // Default: 3'h0
			parameter_int_t PBCAPABILITYDW1TYPE, // Default: 3'h0
			parameter_int_t PBCAPABILITYDW2PMSUBSTATE, // Default: 3'h0
			parameter_int_t PBCAPABILITYDW2POWERRAIL, // Default: 3'h0
			parameter_int_t PBCAPABILITYDW2TYPE, // Default: 3'h0
			parameter_int_t PBCAPABILITYDW3PMSUBSTATE, // Default: 3'h0
			parameter_int_t PBCAPABILITYDW3POWERRAIL, // Default: 3'h0
			parameter_int_t PBCAPABILITYDW3TYPE, // Default: 3'h0
			parameter_int_t PMCAPABILITYAUXCURRENT, // Default: 3'h0
			parameter_int_t PORTVCCAPABILITYEXTENDEDVCCOUNT, // Default: 3'h0
			parameter_int_t CARDBUSCISPOINTER, // Default: 32'h0
			parameter_int_t XPDEVICEPORTTYPE, // Default: 4'h0
			parameter_int_t PCIECAPABILITYINTMSGNUM, // Default: 5'h0
			parameter_int_t PMCAPABILITYPMESUPPORT, // Default: 5'h0
			parameter_int_t BAR0MASKWIDTH, // Default: 6'h14
			parameter_int_t BAR1MASKWIDTH, // Default: 6'h0
			parameter_int_t BAR2MASKWIDTH, // Default: 6'h0
			parameter_int_t BAR3MASKWIDTH, // Default: 6'h0
			parameter_int_t BAR4MASKWIDTH, // Default: 6'h0
			parameter_int_t BAR5MASKWIDTH, // Default: 6'h0
			parameter_int_t LINKCAPABILITYMAXLINKWIDTH, // Default: 6'h01
			parameter_int_t DEVICESERIALNUMBER, // Default: 64'hE000000001000A35
			parameter_int_t VC0TOTALCREDITSCH, // Default: 7'h0
			parameter_int_t VC0TOTALCREDITSNPH, // Default: 7'h08
			parameter_int_t VC0TOTALCREDITSPH, // Default: 7'h08
			parameter_int_t VC1TOTALCREDITSCH, // Default: 7'h0
			parameter_int_t VC1TOTALCREDITSNPH, // Default: 7'h0
			parameter_int_t VC1TOTALCREDITSPH, // Default: 7'h0
			parameter_int_t ACTIVELANESIN, // Default: 8'h1
			parameter_int_t CAPABILITIESPOINTER, // Default: 8'h40
			parameter_int_t EXTCFGCAPPTR, // Default: 8'h0
			parameter_int_t HEADERTYPE, // Default: 8'h0
			parameter_int_t INTERRUPTPIN, // Default: 8'h0
			parameter_int_t MSICAPABILITYNEXTPTR, // Default: 8'h60
			parameter_int_t PBCAPABILITYDW0BASEPOWER, // Default: 8'h0
			parameter_int_t PBCAPABILITYDW1BASEPOWER, // Default: 8'h0
			parameter_int_t PBCAPABILITYDW2BASEPOWER, // Default: 8'h0
			parameter_int_t PBCAPABILITYDW3BASEPOWER, // Default: 8'h0
			parameter_int_t PCIECAPABILITYNEXTPTR, // Default: 8'h0
			parameter_int_t PMCAPABILITYNEXTPTR, // Default: 8'h60
			parameter_int_t PMDATA0, // Default: 8'h0
			parameter_int_t PMDATA1, // Default: 8'h0
			parameter_int_t PMDATA2, // Default: 8'h0
			parameter_int_t PMDATA3, // Default: 8'h0
			parameter_int_t PMDATA4, // Default: 8'h0
			parameter_int_t PMDATA5, // Default: 8'h0
			parameter_int_t PMDATA6, // Default: 8'h0
			parameter_int_t PMDATA7, // Default: 8'h0
			parameter_int_t PMDATA8, // Default: 8'h0
			parameter_int_t PORTVCCAPABILITYVCARBCAP, // Default: 8'h0
			parameter_int_t PORTVCCAPABILITYVCARBTABLEOFFSET, // Default: 8'h0
			parameter_int_t REVISIONID, // Default: 8'h0
			parameter_int_t SLOTCAPABILITYSLOTPOWERLIMITVALUE, // Default: 8'h0
			parameter_int_t XPBASEPTR, // Default: 8'h60
			parameter_int_t BAR0ADDRWIDTH, // Default: 0
			parameter_int_t BAR0IOMEMN, // Default: 0
			parameter_int_t BAR1ADDRWIDTH, // Default: 0
			parameter_int_t BAR1IOMEMN, // Default: 0
			parameter_int_t BAR2ADDRWIDTH, // Default: 0
			parameter_int_t BAR2IOMEMN, // Default: 0
			parameter_int_t BAR3ADDRWIDTH, // Default: 0
			parameter_int_t BAR3IOMEMN, // Default: 0
			parameter_int_t BAR4ADDRWIDTH, // Default: 0
			parameter_int_t BAR4IOMEMN, // Default: 0
			parameter_int_t BAR5IOMEMN, // Default: 0
			parameter_int_t DUALROLECFGCNTRLROOTEPN, // Default: 0
			parameter_int_t L0SEXITLATENCY, // Default: 7
			parameter_int_t L0SEXITLATENCYCOMCLK, // Default: 7
			parameter_int_t L1EXITLATENCY, // Default: 7
			parameter_int_t L1EXITLATENCYCOMCLK, // Default: 7
			parameter_int_t LOWPRIORITYVCCOUNT, // Default: 0
			parameter_int_t PCIEREVISION, // Default: 1
			parameter_int_t PMDATASCALE0, // Default: 0
			parameter_int_t PMDATASCALE1, // Default: 0
			parameter_int_t PMDATASCALE2, // Default: 0
			parameter_int_t PMDATASCALE3, // Default: 0
			parameter_int_t PMDATASCALE4, // Default: 0
			parameter_int_t PMDATASCALE5, // Default: 0
			parameter_int_t PMDATASCALE6, // Default: 0
			parameter_int_t PMDATASCALE7, // Default: 0
			parameter_int_t PMDATASCALE8, // Default: 0
			parameter_int_t RETRYRAMREADLATENCY, // Default: 3
			parameter_int_t RETRYRAMWIDTH, // Default: 0
			parameter_int_t RETRYRAMWRITELATENCY, // Default: 1
			parameter_int_t TLRAMREADLATENCY, // Default: 3
			parameter_int_t TLRAMWIDTH, // Default: 0
			parameter_int_t TLRAMWRITELATENCY, // Default: 1
			parameter_int_t TXTSNFTS, // Default: 255
			parameter_int_t TXTSNFTSCOMCLK, // Default: 255
			parameter_int_t XPMAXPAYLOAD, // Default: 0
			parameter_int_t XPRCBCONTROL, // Default: 0
			//Verilog Ports in definition order:
			NetFlow* BUSMASTERENABLE, // OUTPUT
			NetFlow* CRMDOHOTRESETN, // OUTPUT
			NetFlow* CRMPWRSOFTRESETN, // OUTPUT
			NetFlow* CRMRXHOTRESETN, // OUTPUT
			NetFlow* DLLTXPMDLLPOUTSTANDING, // OUTPUT
			NetFlow* INTERRUPTDISABLE, // OUTPUT
			NetFlow* IOSPACEENABLE, // OUTPUT
			NetFlow* L0ASAUTONOMOUSINITCOMPLETED, // OUTPUT
			NetFlow* L0ATTENTIONINDICATORCONTROL, // OUTPUT
			NetFlow* L0CFGLOOPBACKACK, // OUTPUT
			NetFlow* L0COMPLETERID, // OUTPUT
			NetFlow* L0CORRERRMSGRCVD, // OUTPUT
			NetFlow* L0DLLASRXSTATE, // OUTPUT
			NetFlow* L0DLLASTXSTATE, // OUTPUT
			NetFlow* L0DLLERRORVECTOR, // OUTPUT
			NetFlow* L0DLLRXACKOUTSTANDING, // OUTPUT
			NetFlow* L0DLLTXNONFCOUTSTANDING, // OUTPUT
			NetFlow* L0DLLTXOUTSTANDING, // OUTPUT
			NetFlow* L0DLLVCSTATUS, // OUTPUT
			NetFlow* L0DLUPDOWN, // OUTPUT
			NetFlow* L0ERRMSGREQID, // OUTPUT
			NetFlow* L0FATALERRMSGRCVD, // OUTPUT
			NetFlow* L0FIRSTCFGWRITEOCCURRED, // OUTPUT
			NetFlow* L0FWDCORRERROUT, // OUTPUT
			NetFlow* L0FWDFATALERROUT, // OUTPUT
			NetFlow* L0FWDNONFATALERROUT, // OUTPUT
			NetFlow* L0LTSSMSTATE, // OUTPUT
			NetFlow* L0MACENTEREDL0, // OUTPUT
			NetFlow* L0MACLINKTRAINING, // OUTPUT
			NetFlow* L0MACLINKUP, // OUTPUT
			NetFlow* L0MACNEGOTIATEDLINKWIDTH, // OUTPUT
			NetFlow* L0MACNEWSTATEACK, // OUTPUT
			NetFlow* L0MACRXL0SSTATE, // OUTPUT
			NetFlow* L0MACUPSTREAMDOWNSTREAM, // OUTPUT
			NetFlow* L0MCFOUND, // OUTPUT
			NetFlow* L0MSIENABLE0, // OUTPUT
			NetFlow* L0MULTIMSGEN0, // OUTPUT
			NetFlow* L0NONFATALERRMSGRCVD, // OUTPUT
			NetFlow* L0PMEACK, // OUTPUT
			NetFlow* L0PMEEN, // OUTPUT
			NetFlow* L0PMEREQOUT, // OUTPUT
			NetFlow* L0POWERCONTROLLERCONTROL, // OUTPUT
			NetFlow* L0POWERINDICATORCONTROL, // OUTPUT
			NetFlow* L0PWRINHIBITTRANSFERS, // OUTPUT
			NetFlow* L0PWRL1STATE, // OUTPUT
			NetFlow* L0PWRL23READYDEVICE, // OUTPUT
			NetFlow* L0PWRL23READYSTATE, // OUTPUT
			NetFlow* L0PWRSTATE0, // OUTPUT
			NetFlow* L0PWRTURNOFFREQ, // OUTPUT
			NetFlow* L0PWRTXL0SSTATE, // OUTPUT
			NetFlow* L0RECEIVEDASSERTINTALEGACYINT, // OUTPUT
			NetFlow* L0RECEIVEDASSERTINTBLEGACYINT, // OUTPUT
			NetFlow* L0RECEIVEDASSERTINTCLEGACYINT, // OUTPUT
			NetFlow* L0RECEIVEDASSERTINTDLEGACYINT, // OUTPUT
			NetFlow* L0RECEIVEDDEASSERTINTALEGACYINT, // OUTPUT
			NetFlow* L0RECEIVEDDEASSERTINTBLEGACYINT, // OUTPUT
			NetFlow* L0RECEIVEDDEASSERTINTCLEGACYINT, // OUTPUT
			NetFlow* L0RECEIVEDDEASSERTINTDLEGACYINT, // OUTPUT
			NetFlow* L0RXBEACON, // OUTPUT
			NetFlow* L0RXDLLFCCMPLMCCRED, // OUTPUT
			NetFlow* L0RXDLLFCCMPLMCUPDATE, // OUTPUT
			NetFlow* L0RXDLLFCNPOSTBYPCRED, // OUTPUT
			NetFlow* L0RXDLLFCNPOSTBYPUPDATE, // OUTPUT
			NetFlow* L0RXDLLFCPOSTORDCRED, // OUTPUT
			NetFlow* L0RXDLLFCPOSTORDUPDATE, // OUTPUT
			NetFlow* L0RXDLLPM, // OUTPUT
			NetFlow* L0RXDLLPMTYPE, // OUTPUT
			NetFlow* L0RXDLLSBFCDATA, // OUTPUT
			NetFlow* L0RXDLLSBFCUPDATE, // OUTPUT
			NetFlow* L0RXDLLTLPECRCOK, // OUTPUT
			NetFlow* L0RXDLLTLPEND, // OUTPUT
			NetFlow* L0RXMACLINKERROR, // OUTPUT
			NetFlow* L0STATSCFGOTHERRECEIVED, // OUTPUT
			NetFlow* L0STATSCFGOTHERTRANSMITTED, // OUTPUT
			NetFlow* L0STATSCFGRECEIVED, // OUTPUT
			NetFlow* L0STATSCFGTRANSMITTED, // OUTPUT
			NetFlow* L0STATSDLLPRECEIVED, // OUTPUT
			NetFlow* L0STATSDLLPTRANSMITTED, // OUTPUT
			NetFlow* L0STATSOSRECEIVED, // OUTPUT
			NetFlow* L0STATSOSTRANSMITTED, // OUTPUT
			NetFlow* L0STATSTLPRECEIVED, // OUTPUT
			NetFlow* L0STATSTLPTRANSMITTED, // OUTPUT
			NetFlow* L0TOGGLEELECTROMECHANICALINTERLOCK, // OUTPUT
			NetFlow* L0TRANSFORMEDVC, // OUTPUT
			NetFlow* L0TXDLLFCCMPLMCUPDATED, // OUTPUT
			NetFlow* L0TXDLLFCNPOSTBYPUPDATED, // OUTPUT
			NetFlow* L0TXDLLFCPOSTORDUPDATED, // OUTPUT
			NetFlow* L0TXDLLPMUPDATED, // OUTPUT
			NetFlow* L0TXDLLSBFCUPDATED, // OUTPUT
			NetFlow* L0UCBYPFOUND, // OUTPUT
			NetFlow* L0UCORDFOUND, // OUTPUT
			NetFlow* L0UNLOCKRECEIVED, // OUTPUT
			NetFlow* LLKRX4DWHEADERN, // OUTPUT
			NetFlow* LLKRXCHCOMPLETIONAVAILABLEN, // OUTPUT
			NetFlow* LLKRXCHCOMPLETIONPARTIALN, // OUTPUT
			NetFlow* LLKRXCHCONFIGAVAILABLEN, // OUTPUT
			NetFlow* LLKRXCHCONFIGPARTIALN, // OUTPUT
			NetFlow* LLKRXCHNONPOSTEDAVAILABLEN, // OUTPUT
			NetFlow* LLKRXCHNONPOSTEDPARTIALN, // OUTPUT
			NetFlow* LLKRXCHPOSTEDAVAILABLEN, // OUTPUT
			NetFlow* LLKRXCHPOSTEDPARTIALN, // OUTPUT
			NetFlow* LLKRXDATA, // OUTPUT
			NetFlow* LLKRXECRCBADN, // OUTPUT
			NetFlow* LLKRXEOFN, // OUTPUT
			NetFlow* LLKRXEOPN, // OUTPUT
			NetFlow* LLKRXPREFERREDTYPE, // OUTPUT
			NetFlow* LLKRXSOFN, // OUTPUT
			NetFlow* LLKRXSOPN, // OUTPUT
			NetFlow* LLKRXSRCDSCN, // OUTPUT
			NetFlow* LLKRXSRCLASTREQN, // OUTPUT
			NetFlow* LLKRXSRCRDYN, // OUTPUT
			NetFlow* LLKRXVALIDN, // OUTPUT
			NetFlow* LLKTCSTATUS, // OUTPUT
			NetFlow* LLKTXCHANSPACE, // OUTPUT
			NetFlow* LLKTXCHCOMPLETIONREADYN, // OUTPUT
			NetFlow* LLKTXCHNONPOSTEDREADYN, // OUTPUT
			NetFlow* LLKTXCHPOSTEDREADYN, // OUTPUT
			NetFlow* LLKTXCONFIGREADYN, // OUTPUT
			NetFlow* LLKTXDSTRDYN, // OUTPUT
			NetFlow* MAXPAYLOADSIZE, // OUTPUT
			NetFlow* MAXREADREQUESTSIZE, // OUTPUT
			NetFlow* MEMSPACEENABLE, // OUTPUT
			NetFlow* MGMTPSO, // OUTPUT
			NetFlow* MGMTRDATA, // OUTPUT
			NetFlow* MGMTSTATSCREDIT, // OUTPUT
			NetFlow* MIMDLLBRADD, // OUTPUT
			NetFlow* MIMDLLBREN, // OUTPUT
			NetFlow* MIMDLLBWADD, // OUTPUT
			NetFlow* MIMDLLBWDATA, // OUTPUT
			NetFlow* MIMDLLBWEN, // OUTPUT
			NetFlow* MIMRXBRADD, // OUTPUT
			NetFlow* MIMRXBREN, // OUTPUT
			NetFlow* MIMRXBWADD, // OUTPUT
			NetFlow* MIMRXBWDATA, // OUTPUT
			NetFlow* MIMRXBWEN, // OUTPUT
			NetFlow* MIMTXBRADD, // OUTPUT
			NetFlow* MIMTXBREN, // OUTPUT
			NetFlow* MIMTXBWADD, // OUTPUT
			NetFlow* MIMTXBWDATA, // OUTPUT
			NetFlow* MIMTXBWEN, // OUTPUT
			NetFlow* PARITYERRORRESPONSE, // OUTPUT
			NetFlow* PIPEDESKEWLANESL0, // OUTPUT
			NetFlow* PIPEDESKEWLANESL1, // OUTPUT
			NetFlow* PIPEDESKEWLANESL2, // OUTPUT
			NetFlow* PIPEDESKEWLANESL3, // OUTPUT
			NetFlow* PIPEDESKEWLANESL4, // OUTPUT
			NetFlow* PIPEDESKEWLANESL5, // OUTPUT
			NetFlow* PIPEDESKEWLANESL6, // OUTPUT
			NetFlow* PIPEDESKEWLANESL7, // OUTPUT
			NetFlow* PIPEPOWERDOWNL0, // OUTPUT
			NetFlow* PIPEPOWERDOWNL1, // OUTPUT
			NetFlow* PIPEPOWERDOWNL2, // OUTPUT
			NetFlow* PIPEPOWERDOWNL3, // OUTPUT
			NetFlow* PIPEPOWERDOWNL4, // OUTPUT
			NetFlow* PIPEPOWERDOWNL5, // OUTPUT
			NetFlow* PIPEPOWERDOWNL6, // OUTPUT
			NetFlow* PIPEPOWERDOWNL7, // OUTPUT
			NetFlow* PIPERESETL0, // OUTPUT
			NetFlow* PIPERESETL1, // OUTPUT
			NetFlow* PIPERESETL2, // OUTPUT
			NetFlow* PIPERESETL3, // OUTPUT
			NetFlow* PIPERESETL4, // OUTPUT
			NetFlow* PIPERESETL5, // OUTPUT
			NetFlow* PIPERESETL6, // OUTPUT
			NetFlow* PIPERESETL7, // OUTPUT
			NetFlow* PIPERXPOLARITYL0, // OUTPUT
			NetFlow* PIPERXPOLARITYL1, // OUTPUT
			NetFlow* PIPERXPOLARITYL2, // OUTPUT
			NetFlow* PIPERXPOLARITYL3, // OUTPUT
			NetFlow* PIPERXPOLARITYL4, // OUTPUT
			NetFlow* PIPERXPOLARITYL5, // OUTPUT
			NetFlow* PIPERXPOLARITYL6, // OUTPUT
			NetFlow* PIPERXPOLARITYL7, // OUTPUT
			NetFlow* PIPETXCOMPLIANCEL0, // OUTPUT
			NetFlow* PIPETXCOMPLIANCEL1, // OUTPUT
			NetFlow* PIPETXCOMPLIANCEL2, // OUTPUT
			NetFlow* PIPETXCOMPLIANCEL3, // OUTPUT
			NetFlow* PIPETXCOMPLIANCEL4, // OUTPUT
			NetFlow* PIPETXCOMPLIANCEL5, // OUTPUT
			NetFlow* PIPETXCOMPLIANCEL6, // OUTPUT
			NetFlow* PIPETXCOMPLIANCEL7, // OUTPUT
			NetFlow* PIPETXDATAKL0, // OUTPUT
			NetFlow* PIPETXDATAKL1, // OUTPUT
			NetFlow* PIPETXDATAKL2, // OUTPUT
			NetFlow* PIPETXDATAKL3, // OUTPUT
			NetFlow* PIPETXDATAKL4, // OUTPUT
			NetFlow* PIPETXDATAKL5, // OUTPUT
			NetFlow* PIPETXDATAKL6, // OUTPUT
			NetFlow* PIPETXDATAKL7, // OUTPUT
			NetFlow* PIPETXDATAL0, // OUTPUT
			NetFlow* PIPETXDATAL1, // OUTPUT
			NetFlow* PIPETXDATAL2, // OUTPUT
			NetFlow* PIPETXDATAL3, // OUTPUT
			NetFlow* PIPETXDATAL4, // OUTPUT
			NetFlow* PIPETXDATAL5, // OUTPUT
			NetFlow* PIPETXDATAL6, // OUTPUT
			NetFlow* PIPETXDATAL7, // OUTPUT
			NetFlow* PIPETXDETECTRXLOOPBACKL0, // OUTPUT
			NetFlow* PIPETXDETECTRXLOOPBACKL1, // OUTPUT
			NetFlow* PIPETXDETECTRXLOOPBACKL2, // OUTPUT
			NetFlow* PIPETXDETECTRXLOOPBACKL3, // OUTPUT
			NetFlow* PIPETXDETECTRXLOOPBACKL4, // OUTPUT
			NetFlow* PIPETXDETECTRXLOOPBACKL5, // OUTPUT
			NetFlow* PIPETXDETECTRXLOOPBACKL6, // OUTPUT
			NetFlow* PIPETXDETECTRXLOOPBACKL7, // OUTPUT
			NetFlow* PIPETXELECIDLEL0, // OUTPUT
			NetFlow* PIPETXELECIDLEL1, // OUTPUT
			NetFlow* PIPETXELECIDLEL2, // OUTPUT
			NetFlow* PIPETXELECIDLEL3, // OUTPUT
			NetFlow* PIPETXELECIDLEL4, // OUTPUT
			NetFlow* PIPETXELECIDLEL5, // OUTPUT
			NetFlow* PIPETXELECIDLEL6, // OUTPUT
			NetFlow* PIPETXELECIDLEL7, // OUTPUT
			NetFlow* SERRENABLE, // OUTPUT
			NetFlow* URREPORTINGENABLE, // OUTPUT
			NetFlow* AUXPOWER, // INPUT
			NetFlow* CFGNEGOTIATEDLINKWIDTH, // INPUT
			NetFlow* COMPLIANCEAVOID, // INPUT
			NetFlow* CRMCFGBRIDGEHOTRESET, // INPUT
			NetFlow* CRMCORECLK, // INPUT
			NetFlow* CRMCORECLKDLO, // INPUT
			NetFlow* CRMCORECLKRXO, // INPUT
			NetFlow* CRMCORECLKTXO, // INPUT
			NetFlow* CRMLINKRSTN, // INPUT
			NetFlow* CRMMACRSTN, // INPUT
			NetFlow* CRMMGMTRSTN, // INPUT
			NetFlow* CRMNVRSTN, // INPUT
			NetFlow* CRMTXHOTRESETN, // INPUT
			NetFlow* CRMURSTN, // INPUT
			NetFlow* CRMUSERCFGRSTN, // INPUT
			NetFlow* CRMUSERCLK, // INPUT
			NetFlow* CRMUSERCLKRXO, // INPUT
			NetFlow* CRMUSERCLKTXO, // INPUT
			NetFlow* CROSSLINKSEED, // INPUT
			NetFlow* L0ACKNAKTIMERADJUSTMENT, // INPUT
			NetFlow* L0ALLDOWNPORTSINL1, // INPUT
			NetFlow* L0ALLDOWNRXPORTSINL0S, // INPUT
			NetFlow* L0ASE, // INPUT
			NetFlow* L0ASPORTCOUNT, // INPUT
			NetFlow* L0ASTURNPOOLBITSCONSUMED, // INPUT
			NetFlow* L0ATTENTIONBUTTONPRESSED, // INPUT
			NetFlow* L0CFGASSPANTREEOWNEDSTATE, // INPUT
			NetFlow* L0CFGASSTATECHANGECMD, // INPUT
			NetFlow* L0CFGDISABLESCRAMBLE, // INPUT
			NetFlow* L0CFGEXTENDEDSYNC, // INPUT
			NetFlow* L0CFGL0SENTRYENABLE, // INPUT
			NetFlow* L0CFGL0SENTRYSUP, // INPUT
			NetFlow* L0CFGL0SEXITLAT, // INPUT
			NetFlow* L0CFGLINKDISABLE, // INPUT
			NetFlow* L0CFGLOOPBACKMASTER, // INPUT
			NetFlow* L0CFGNEGOTIATEDMAXP, // INPUT
			NetFlow* L0CFGVCENABLE, // INPUT
			NetFlow* L0CFGVCID, // INPUT
			NetFlow* L0DLLHOLDLINKUP, // INPUT
			NetFlow* L0ELECTROMECHANICALINTERLOCKENGAGED, // INPUT
			NetFlow* L0FWDASSERTINTALEGACYINT, // INPUT
			NetFlow* L0FWDASSERTINTBLEGACYINT, // INPUT
			NetFlow* L0FWDASSERTINTCLEGACYINT, // INPUT
			NetFlow* L0FWDASSERTINTDLEGACYINT, // INPUT
			NetFlow* L0FWDCORRERRIN, // INPUT
			NetFlow* L0FWDDEASSERTINTALEGACYINT, // INPUT
			NetFlow* L0FWDDEASSERTINTBLEGACYINT, // INPUT
			NetFlow* L0FWDDEASSERTINTCLEGACYINT, // INPUT
			NetFlow* L0FWDDEASSERTINTDLEGACYINT, // INPUT
			NetFlow* L0FWDFATALERRIN, // INPUT
			NetFlow* L0FWDNONFATALERRIN, // INPUT
			NetFlow* L0LEGACYINTFUNCT0, // INPUT
			NetFlow* L0MRLSENSORCLOSEDN, // INPUT
			NetFlow* L0MSIREQUEST0, // INPUT
			NetFlow* L0PACKETHEADERFROMUSER, // INPUT
			NetFlow* L0PMEREQIN, // INPUT
			NetFlow* L0PORTNUMBER, // INPUT
			NetFlow* L0POWERFAULTDETECTED, // INPUT
			NetFlow* L0PRESENCEDETECTSLOTEMPTYN, // INPUT
			NetFlow* L0PWRNEWSTATEREQ, // INPUT
			NetFlow* L0PWRNEXTLINKSTATE, // INPUT
			NetFlow* L0REPLAYTIMERADJUSTMENT, // INPUT
			NetFlow* L0ROOTTURNOFFREQ, // INPUT
			NetFlow* L0RXTLTLPNONINITIALIZEDVC, // INPUT
			NetFlow* L0SENDUNLOCKMESSAGE, // INPUT
			NetFlow* L0SETCOMPLETERABORTERROR, // INPUT
			NetFlow* L0SETCOMPLETIONTIMEOUTCORRERROR, // INPUT
			NetFlow* L0SETCOMPLETIONTIMEOUTUNCORRERROR, // INPUT
			NetFlow* L0SETDETECTEDCORRERROR, // INPUT
			NetFlow* L0SETDETECTEDFATALERROR, // INPUT
			NetFlow* L0SETDETECTEDNONFATALERROR, // INPUT
			NetFlow* L0SETLINKDETECTEDPARITYERROR, // INPUT
			NetFlow* L0SETLINKMASTERDATAPARITY, // INPUT
			NetFlow* L0SETLINKRECEIVEDMASTERABORT, // INPUT
			NetFlow* L0SETLINKRECEIVEDTARGETABORT, // INPUT
			NetFlow* L0SETLINKSIGNALLEDTARGETABORT, // INPUT
			NetFlow* L0SETLINKSYSTEMERROR, // INPUT
			NetFlow* L0SETUNEXPECTEDCOMPLETIONCORRERROR, // INPUT
			NetFlow* L0SETUNEXPECTEDCOMPLETIONUNCORRERROR, // INPUT
			NetFlow* L0SETUNSUPPORTEDREQUESTNONPOSTEDERROR, // INPUT
			NetFlow* L0SETUNSUPPORTEDREQUESTOTHERERROR, // INPUT
			NetFlow* L0SETUSERDETECTEDPARITYERROR, // INPUT
			NetFlow* L0SETUSERMASTERDATAPARITY, // INPUT
			NetFlow* L0SETUSERRECEIVEDMASTERABORT, // INPUT
			NetFlow* L0SETUSERRECEIVEDTARGETABORT, // INPUT
			NetFlow* L0SETUSERSIGNALLEDTARGETABORT, // INPUT
			NetFlow* L0SETUSERSYSTEMERROR, // INPUT
			NetFlow* L0TLASFCCREDSTARVATION, // INPUT
			NetFlow* L0TLLINKRETRAIN, // INPUT
			NetFlow* L0TRANSACTIONSPENDING, // INPUT
			NetFlow* L0TXBEACON, // INPUT
			NetFlow* L0TXCFGPM, // INPUT
			NetFlow* L0TXCFGPMTYPE, // INPUT
			NetFlow* L0TXTLFCCMPLMCCRED, // INPUT
			NetFlow* L0TXTLFCCMPLMCUPDATE, // INPUT
			NetFlow* L0TXTLFCNPOSTBYPCRED, // INPUT
			NetFlow* L0TXTLFCNPOSTBYPUPDATE, // INPUT
			NetFlow* L0TXTLFCPOSTORDCRED, // INPUT
			NetFlow* L0TXTLFCPOSTORDUPDATE, // INPUT
			NetFlow* L0TXTLSBFCDATA, // INPUT
			NetFlow* L0TXTLSBFCUPDATE, // INPUT
			NetFlow* L0TXTLTLPDATA, // INPUT
			NetFlow* L0TXTLTLPEDB, // INPUT
			NetFlow* L0TXTLTLPENABLE, // INPUT
			NetFlow* L0TXTLTLPEND, // INPUT
			NetFlow* L0TXTLTLPLATENCY, // INPUT
			NetFlow* L0TXTLTLPREQ, // INPUT
			NetFlow* L0TXTLTLPREQEND, // INPUT
			NetFlow* L0TXTLTLPWIDTH, // INPUT
			NetFlow* L0UPSTREAMRXPORTINL0S, // INPUT
			NetFlow* L0VC0PREVIEWEXPAND, // INPUT
			NetFlow* L0WAKEN, // INPUT
			NetFlow* LLKRXCHFIFO, // INPUT
			NetFlow* LLKRXCHTC, // INPUT
			NetFlow* LLKRXDSTCONTREQN, // INPUT
			NetFlow* LLKRXDSTREQN, // INPUT
			NetFlow* LLKTX4DWHEADERN, // INPUT
			NetFlow* LLKTXCHFIFO, // INPUT
			NetFlow* LLKTXCHTC, // INPUT
			NetFlow* LLKTXCOMPLETEN, // INPUT
			NetFlow* LLKTXCREATEECRCN, // INPUT
			NetFlow* LLKTXDATA, // INPUT
			NetFlow* LLKTXENABLEN, // INPUT
			NetFlow* LLKTXEOFN, // INPUT
			NetFlow* LLKTXEOPN, // INPUT
			NetFlow* LLKTXSOFN, // INPUT
			NetFlow* LLKTXSOPN, // INPUT
			NetFlow* LLKTXSRCDSCN, // INPUT
			NetFlow* LLKTXSRCRDYN, // INPUT
			NetFlow* MAINPOWER, // INPUT
			NetFlow* MGMTADDR, // INPUT
			NetFlow* MGMTBWREN, // INPUT
			NetFlow* MGMTRDEN, // INPUT
			NetFlow* MGMTSTATSCREDITSEL, // INPUT
			NetFlow* MGMTWDATA, // INPUT
			NetFlow* MGMTWREN, // INPUT
			NetFlow* MIMDLLBRDATA, // INPUT
			NetFlow* MIMRXBRDATA, // INPUT
			NetFlow* MIMTXBRDATA, // INPUT
			NetFlow* PIPEPHYSTATUSL0, // INPUT
			NetFlow* PIPEPHYSTATUSL1, // INPUT
			NetFlow* PIPEPHYSTATUSL2, // INPUT
			NetFlow* PIPEPHYSTATUSL3, // INPUT
			NetFlow* PIPEPHYSTATUSL4, // INPUT
			NetFlow* PIPEPHYSTATUSL5, // INPUT
			NetFlow* PIPEPHYSTATUSL6, // INPUT
			NetFlow* PIPEPHYSTATUSL7, // INPUT
			NetFlow* PIPERXCHANISALIGNEDL0, // INPUT
			NetFlow* PIPERXCHANISALIGNEDL1, // INPUT
			NetFlow* PIPERXCHANISALIGNEDL2, // INPUT
			NetFlow* PIPERXCHANISALIGNEDL3, // INPUT
			NetFlow* PIPERXCHANISALIGNEDL4, // INPUT
			NetFlow* PIPERXCHANISALIGNEDL5, // INPUT
			NetFlow* PIPERXCHANISALIGNEDL6, // INPUT
			NetFlow* PIPERXCHANISALIGNEDL7, // INPUT
			NetFlow* PIPERXDATAKL0, // INPUT
			NetFlow* PIPERXDATAKL1, // INPUT
			NetFlow* PIPERXDATAKL2, // INPUT
			NetFlow* PIPERXDATAKL3, // INPUT
			NetFlow* PIPERXDATAKL4, // INPUT
			NetFlow* PIPERXDATAKL5, // INPUT
			NetFlow* PIPERXDATAKL6, // INPUT
			NetFlow* PIPERXDATAKL7, // INPUT
			NetFlow* PIPERXDATAL0, // INPUT
			NetFlow* PIPERXDATAL1, // INPUT
			NetFlow* PIPERXDATAL2, // INPUT
			NetFlow* PIPERXDATAL3, // INPUT
			NetFlow* PIPERXDATAL4, // INPUT
			NetFlow* PIPERXDATAL5, // INPUT
			NetFlow* PIPERXDATAL6, // INPUT
			NetFlow* PIPERXDATAL7, // INPUT
			NetFlow* PIPERXELECIDLEL0, // INPUT
			NetFlow* PIPERXELECIDLEL1, // INPUT
			NetFlow* PIPERXELECIDLEL2, // INPUT
			NetFlow* PIPERXELECIDLEL3, // INPUT
			NetFlow* PIPERXELECIDLEL4, // INPUT
			NetFlow* PIPERXELECIDLEL5, // INPUT
			NetFlow* PIPERXELECIDLEL6, // INPUT
			NetFlow* PIPERXELECIDLEL7, // INPUT
			NetFlow* PIPERXSTATUSL0, // INPUT
			NetFlow* PIPERXSTATUSL1, // INPUT
			NetFlow* PIPERXSTATUSL2, // INPUT
			NetFlow* PIPERXSTATUSL3, // INPUT
			NetFlow* PIPERXSTATUSL4, // INPUT
			NetFlow* PIPERXSTATUSL5, // INPUT
			NetFlow* PIPERXSTATUSL6, // INPUT
			NetFlow* PIPERXSTATUSL7, // INPUT
			NetFlow* PIPERXVALIDL0, // INPUT
			NetFlow* PIPERXVALIDL1, // INPUT
			NetFlow* PIPERXVALIDL2, // INPUT
			NetFlow* PIPERXVALIDL3, // INPUT
			NetFlow* PIPERXVALIDL4, // INPUT
			NetFlow* PIPERXVALIDL5, // INPUT
			NetFlow* PIPERXVALIDL6, // INPUT
			NetFlow* PIPERXVALIDL7 // INPUT
			){
		
			// Assign parameters and ports: 
			//Verilog Parameters:
			this->LOC = LOC; // Default: "UNPLACED"
			this->AERCAPABILITYECRCCHECKCAPABLE = AERCAPABILITYECRCCHECKCAPABLE; // Default: "FALSE"
			this->AERCAPABILITYECRCGENCAPABLE = AERCAPABILITYECRCGENCAPABLE; // Default: "FALSE"
			this->BAR0EXIST = BAR0EXIST; // Default: "TRUE"
			this->BAR0PREFETCHABLE = BAR0PREFETCHABLE; // Default: "TRUE"
			this->BAR1EXIST = BAR1EXIST; // Default: "FALSE"
			this->BAR1PREFETCHABLE = BAR1PREFETCHABLE; // Default: "FALSE"
			this->BAR2EXIST = BAR2EXIST; // Default: "FALSE"
			this->BAR2PREFETCHABLE = BAR2PREFETCHABLE; // Default: "FALSE"
			this->BAR3EXIST = BAR3EXIST; // Default: "FALSE"
			this->BAR3PREFETCHABLE = BAR3PREFETCHABLE; // Default: "FALSE"
			this->BAR4EXIST = BAR4EXIST; // Default: "FALSE"
			this->BAR4PREFETCHABLE = BAR4PREFETCHABLE; // Default: "FALSE"
			this->BAR5EXIST = BAR5EXIST; // Default: "FALSE"
			this->BAR5PREFETCHABLE = BAR5PREFETCHABLE; // Default: "FALSE"
			this->CLKDIVIDED = CLKDIVIDED; // Default: "FALSE"
			this->DUALCOREENABLE = DUALCOREENABLE; // Default: "FALSE"
			this->DUALCORESLAVE = DUALCORESLAVE; // Default: "FALSE"
			this->INFINITECOMPLETIONS = INFINITECOMPLETIONS; // Default: "TRUE"
			this->ISSWITCH = ISSWITCH; // Default: "FALSE"
			this->LINKSTATUSSLOTCLOCKCONFIG = LINKSTATUSSLOTCLOCKCONFIG; // Default: "FALSE"
			this->LLKBYPASS = LLKBYPASS; // Default: "FALSE"
			this->PBCAPABILITYSYSTEMALLOCATED = PBCAPABILITYSYSTEMALLOCATED; // Default: "FALSE"
			this->PCIECAPABILITYSLOTIMPL = PCIECAPABILITYSLOTIMPL; // Default: "FALSE"
			this->PMCAPABILITYD1SUPPORT = PMCAPABILITYD1SUPPORT; // Default: "FALSE"
			this->PMCAPABILITYD2SUPPORT = PMCAPABILITYD2SUPPORT; // Default: "FALSE"
			this->PMCAPABILITYDSI = PMCAPABILITYDSI; // Default: "TRUE"
			this->RAMSHARETXRX = RAMSHARETXRX; // Default: "FALSE"
			this->RESETMODE = RESETMODE; // Default: "FALSE"
			this->RETRYREADADDRPIPE = RETRYREADADDRPIPE; // Default: "FALSE"
			this->RETRYREADDATAPIPE = RETRYREADDATAPIPE; // Default: "FALSE"
			this->RETRYWRITEPIPE = RETRYWRITEPIPE; // Default: "FALSE"
			this->RXREADADDRPIPE = RXREADADDRPIPE; // Default: "FALSE"
			this->RXREADDATAPIPE = RXREADDATAPIPE; // Default: "FALSE"
			this->RXWRITEPIPE = RXWRITEPIPE; // Default: "FALSE"
			this->SELECTASMODE = SELECTASMODE; // Default: "FALSE"
			this->SELECTDLLIF = SELECTDLLIF; // Default: "FALSE"
			this->SLOTCAPABILITYATTBUTTONPRESENT = SLOTCAPABILITYATTBUTTONPRESENT; // Default: "FALSE"
			this->SLOTCAPABILITYATTINDICATORPRESENT = SLOTCAPABILITYATTINDICATORPRESENT; // Default: "FALSE"
			this->SLOTCAPABILITYHOTPLUGCAPABLE = SLOTCAPABILITYHOTPLUGCAPABLE; // Default: "FALSE"
			this->SLOTCAPABILITYHOTPLUGSURPRISE = SLOTCAPABILITYHOTPLUGSURPRISE; // Default: "FALSE"
			this->SLOTCAPABILITYMSLSENSORPRESENT = SLOTCAPABILITYMSLSENSORPRESENT; // Default: "FALSE"
			this->SLOTCAPABILITYPOWERCONTROLLERPRESENT = SLOTCAPABILITYPOWERCONTROLLERPRESENT; // Default: "FALSE"
			this->SLOTCAPABILITYPOWERINDICATORPRESENT = SLOTCAPABILITYPOWERINDICATORPRESENT; // Default: "FALSE"
			this->SLOTIMPLEMENTED = SLOTIMPLEMENTED; // Default: "FALSE"
			this->TXREADADDRPIPE = TXREADADDRPIPE; // Default: "FALSE"
			this->TXREADDATAPIPE = TXREADDATAPIPE; // Default: "FALSE"
			this->TXWRITEPIPE = TXWRITEPIPE; // Default: "FALSE"
			this->UPSTREAMFACING = UPSTREAMFACING; // Default: "TRUE"
			this->XLINKSUPPORTED = XLINKSUPPORTED; // Default: "FALSE"
			this->VC0TOTALCREDITSCD = VC0TOTALCREDITSCD; // Default: 11'h0
			this->VC0TOTALCREDITSPD = VC0TOTALCREDITSPD; // Default: 11'h34
			this->VC1TOTALCREDITSCD = VC1TOTALCREDITSCD; // Default: 11'h0
			this->VC1TOTALCREDITSPD = VC1TOTALCREDITSPD; // Default: 11'h0
			this->AERBASEPTR = AERBASEPTR; // Default: 12'h110
			this->AERCAPABILITYNEXTPTR = AERCAPABILITYNEXTPTR; // Default: 12'h138
			this->DSNBASEPTR = DSNBASEPTR; // Default: 12'h148
			this->DSNCAPABILITYNEXTPTR = DSNCAPABILITYNEXTPTR; // Default: 12'h154
			this->EXTCFGXPCAPPTR = EXTCFGXPCAPPTR; // Default: 12'h0
			this->MSIBASEPTR = MSIBASEPTR; // Default: 12'h48
			this->PBBASEPTR = PBBASEPTR; // Default: 12'h138
			this->PBCAPABILITYNEXTPTR = PBCAPABILITYNEXTPTR; // Default: 12'h148
			this->PMBASEPTR = PMBASEPTR; // Default: 12'h40
			this->RETRYRAMSIZE = RETRYRAMSIZE; // Default: 12'h9
			this->VCBASEPTR = VCBASEPTR; // Default: 12'h154
			this->VCCAPABILITYNEXTPTR = VCCAPABILITYNEXTPTR; // Default: 12'h0
			this->SLOTCAPABILITYPHYSICALSLOTNUM = SLOTCAPABILITYPHYSICALSLOTNUM; // Default: 13'h0
			this->VC0RXFIFOBASEC = VC0RXFIFOBASEC; // Default: 13'h98
			this->VC0RXFIFOBASENP = VC0RXFIFOBASENP; // Default: 13'h80
			this->VC0RXFIFOBASEP = VC0RXFIFOBASEP; // Default: 13'h0
			this->VC0RXFIFOLIMITC = VC0RXFIFOLIMITC; // Default: 13'h117
			this->VC0RXFIFOLIMITNP = VC0RXFIFOLIMITNP; // Default: 13'h97
			this->VC0RXFIFOLIMITP = VC0RXFIFOLIMITP; // Default: 13'h7f
			this->VC0TXFIFOBASEC = VC0TXFIFOBASEC; // Default: 13'h98
			this->VC0TXFIFOBASENP = VC0TXFIFOBASENP; // Default: 13'h80
			this->VC0TXFIFOBASEP = VC0TXFIFOBASEP; // Default: 13'h0
			this->VC0TXFIFOLIMITC = VC0TXFIFOLIMITC; // Default: 13'h117
			this->VC0TXFIFOLIMITNP = VC0TXFIFOLIMITNP; // Default: 13'h97
			this->VC0TXFIFOLIMITP = VC0TXFIFOLIMITP; // Default: 13'h7f
			this->VC1RXFIFOBASEC = VC1RXFIFOBASEC; // Default: 13'h118
			this->VC1RXFIFOBASENP = VC1RXFIFOBASENP; // Default: 13'h118
			this->VC1RXFIFOBASEP = VC1RXFIFOBASEP; // Default: 13'h118
			this->VC1RXFIFOLIMITC = VC1RXFIFOLIMITC; // Default: 13'h118
			this->VC1RXFIFOLIMITNP = VC1RXFIFOLIMITNP; // Default: 13'h118
			this->VC1RXFIFOLIMITP = VC1RXFIFOLIMITP; // Default: 13'h118
			this->VC1TXFIFOBASEC = VC1TXFIFOBASEC; // Default: 13'h118
			this->VC1TXFIFOBASENP = VC1TXFIFOBASENP; // Default: 13'h118
			this->VC1TXFIFOBASEP = VC1TXFIFOBASEP; // Default: 13'h118
			this->VC1TXFIFOLIMITC = VC1TXFIFOLIMITC; // Default: 13'h118
			this->VC1TXFIFOLIMITNP = VC1TXFIFOLIMITNP; // Default: 13'h118
			this->VC1TXFIFOLIMITP = VC1TXFIFOLIMITP; // Default: 13'h118
			this->DEVICEID = DEVICEID; // Default: 16'h5050
			this->SUBSYSTEMID = SUBSYSTEMID; // Default: 16'h5050
			this->SUBSYSTEMVENDORID = SUBSYSTEMVENDORID; // Default: 16'h10EE
			this->VENDORID = VENDORID; // Default: 16'h10EE
			this->LINKCAPABILITYASPMSUPPORT = LINKCAPABILITYASPMSUPPORT; // Default: 2'h1
			this->PBCAPABILITYDW0DATASCALE = PBCAPABILITYDW0DATASCALE; // Default: 2'h0
			this->PBCAPABILITYDW0PMSTATE = PBCAPABILITYDW0PMSTATE; // Default: 2'h0
			this->PBCAPABILITYDW1DATASCALE = PBCAPABILITYDW1DATASCALE; // Default: 2'h0
			this->PBCAPABILITYDW1PMSTATE = PBCAPABILITYDW1PMSTATE; // Default: 2'h0
			this->PBCAPABILITYDW2DATASCALE = PBCAPABILITYDW2DATASCALE; // Default: 2'h0
			this->PBCAPABILITYDW2PMSTATE = PBCAPABILITYDW2PMSTATE; // Default: 2'h0
			this->PBCAPABILITYDW3DATASCALE = PBCAPABILITYDW3DATASCALE; // Default: 2'h0
			this->PBCAPABILITYDW3PMSTATE = PBCAPABILITYDW3PMSTATE; // Default: 2'h0
			this->PMSTATUSCONTROLDATASCALE = PMSTATUSCONTROLDATASCALE; // Default: 2'h0
			this->SLOTCAPABILITYSLOTPOWERLIMITSCALE = SLOTCAPABILITYSLOTPOWERLIMITSCALE; // Default: 2'h0
			this->CLASSCODE = CLASSCODE; // Default: 24'h058000
			this->CONFIGROUTING = CONFIGROUTING; // Default: 3'h1
			this->DEVICECAPABILITYENDPOINTL0SLATENCY = DEVICECAPABILITYENDPOINTL0SLATENCY; // Default: 3'h0
			this->DEVICECAPABILITYENDPOINTL1LATENCY = DEVICECAPABILITYENDPOINTL1LATENCY; // Default: 3'h0
			this->MSICAPABILITYMULTIMSGCAP = MSICAPABILITYMULTIMSGCAP; // Default: 3'h0
			this->PBCAPABILITYDW0PMSUBSTATE = PBCAPABILITYDW0PMSUBSTATE; // Default: 3'h0
			this->PBCAPABILITYDW0POWERRAIL = PBCAPABILITYDW0POWERRAIL; // Default: 3'h0
			this->PBCAPABILITYDW0TYPE = PBCAPABILITYDW0TYPE; // Default: 3'h0
			this->PBCAPABILITYDW1PMSUBSTATE = PBCAPABILITYDW1PMSUBSTATE; // Default: 3'h0
			this->PBCAPABILITYDW1POWERRAIL = PBCAPABILITYDW1POWERRAIL; // Default: 3'h0
			this->PBCAPABILITYDW1TYPE = PBCAPABILITYDW1TYPE; // Default: 3'h0
			this->PBCAPABILITYDW2PMSUBSTATE = PBCAPABILITYDW2PMSUBSTATE; // Default: 3'h0
			this->PBCAPABILITYDW2POWERRAIL = PBCAPABILITYDW2POWERRAIL; // Default: 3'h0
			this->PBCAPABILITYDW2TYPE = PBCAPABILITYDW2TYPE; // Default: 3'h0
			this->PBCAPABILITYDW3PMSUBSTATE = PBCAPABILITYDW3PMSUBSTATE; // Default: 3'h0
			this->PBCAPABILITYDW3POWERRAIL = PBCAPABILITYDW3POWERRAIL; // Default: 3'h0
			this->PBCAPABILITYDW3TYPE = PBCAPABILITYDW3TYPE; // Default: 3'h0
			this->PMCAPABILITYAUXCURRENT = PMCAPABILITYAUXCURRENT; // Default: 3'h0
			this->PORTVCCAPABILITYEXTENDEDVCCOUNT = PORTVCCAPABILITYEXTENDEDVCCOUNT; // Default: 3'h0
			this->CARDBUSCISPOINTER = CARDBUSCISPOINTER; // Default: 32'h0
			this->XPDEVICEPORTTYPE = XPDEVICEPORTTYPE; // Default: 4'h0
			this->PCIECAPABILITYINTMSGNUM = PCIECAPABILITYINTMSGNUM; // Default: 5'h0
			this->PMCAPABILITYPMESUPPORT = PMCAPABILITYPMESUPPORT; // Default: 5'h0
			this->BAR0MASKWIDTH = BAR0MASKWIDTH; // Default: 6'h14
			this->BAR1MASKWIDTH = BAR1MASKWIDTH; // Default: 6'h0
			this->BAR2MASKWIDTH = BAR2MASKWIDTH; // Default: 6'h0
			this->BAR3MASKWIDTH = BAR3MASKWIDTH; // Default: 6'h0
			this->BAR4MASKWIDTH = BAR4MASKWIDTH; // Default: 6'h0
			this->BAR5MASKWIDTH = BAR5MASKWIDTH; // Default: 6'h0
			this->LINKCAPABILITYMAXLINKWIDTH = LINKCAPABILITYMAXLINKWIDTH; // Default: 6'h01
			this->DEVICESERIALNUMBER = DEVICESERIALNUMBER; // Default: 64'hE000000001000A35
			this->VC0TOTALCREDITSCH = VC0TOTALCREDITSCH; // Default: 7'h0
			this->VC0TOTALCREDITSNPH = VC0TOTALCREDITSNPH; // Default: 7'h08
			this->VC0TOTALCREDITSPH = VC0TOTALCREDITSPH; // Default: 7'h08
			this->VC1TOTALCREDITSCH = VC1TOTALCREDITSCH; // Default: 7'h0
			this->VC1TOTALCREDITSNPH = VC1TOTALCREDITSNPH; // Default: 7'h0
			this->VC1TOTALCREDITSPH = VC1TOTALCREDITSPH; // Default: 7'h0
			this->ACTIVELANESIN = ACTIVELANESIN; // Default: 8'h1
			this->CAPABILITIESPOINTER = CAPABILITIESPOINTER; // Default: 8'h40
			this->EXTCFGCAPPTR = EXTCFGCAPPTR; // Default: 8'h0
			this->HEADERTYPE = HEADERTYPE; // Default: 8'h0
			this->INTERRUPTPIN = INTERRUPTPIN; // Default: 8'h0
			this->MSICAPABILITYNEXTPTR = MSICAPABILITYNEXTPTR; // Default: 8'h60
			this->PBCAPABILITYDW0BASEPOWER = PBCAPABILITYDW0BASEPOWER; // Default: 8'h0
			this->PBCAPABILITYDW1BASEPOWER = PBCAPABILITYDW1BASEPOWER; // Default: 8'h0
			this->PBCAPABILITYDW2BASEPOWER = PBCAPABILITYDW2BASEPOWER; // Default: 8'h0
			this->PBCAPABILITYDW3BASEPOWER = PBCAPABILITYDW3BASEPOWER; // Default: 8'h0
			this->PCIECAPABILITYNEXTPTR = PCIECAPABILITYNEXTPTR; // Default: 8'h0
			this->PMCAPABILITYNEXTPTR = PMCAPABILITYNEXTPTR; // Default: 8'h60
			this->PMDATA0 = PMDATA0; // Default: 8'h0
			this->PMDATA1 = PMDATA1; // Default: 8'h0
			this->PMDATA2 = PMDATA2; // Default: 8'h0
			this->PMDATA3 = PMDATA3; // Default: 8'h0
			this->PMDATA4 = PMDATA4; // Default: 8'h0
			this->PMDATA5 = PMDATA5; // Default: 8'h0
			this->PMDATA6 = PMDATA6; // Default: 8'h0
			this->PMDATA7 = PMDATA7; // Default: 8'h0
			this->PMDATA8 = PMDATA8; // Default: 8'h0
			this->PORTVCCAPABILITYVCARBCAP = PORTVCCAPABILITYVCARBCAP; // Default: 8'h0
			this->PORTVCCAPABILITYVCARBTABLEOFFSET = PORTVCCAPABILITYVCARBTABLEOFFSET; // Default: 8'h0
			this->REVISIONID = REVISIONID; // Default: 8'h0
			this->SLOTCAPABILITYSLOTPOWERLIMITVALUE = SLOTCAPABILITYSLOTPOWERLIMITVALUE; // Default: 8'h0
			this->XPBASEPTR = XPBASEPTR; // Default: 8'h60
			this->BAR0ADDRWIDTH = BAR0ADDRWIDTH; // Default: 0
			this->BAR0IOMEMN = BAR0IOMEMN; // Default: 0
			this->BAR1ADDRWIDTH = BAR1ADDRWIDTH; // Default: 0
			this->BAR1IOMEMN = BAR1IOMEMN; // Default: 0
			this->BAR2ADDRWIDTH = BAR2ADDRWIDTH; // Default: 0
			this->BAR2IOMEMN = BAR2IOMEMN; // Default: 0
			this->BAR3ADDRWIDTH = BAR3ADDRWIDTH; // Default: 0
			this->BAR3IOMEMN = BAR3IOMEMN; // Default: 0
			this->BAR4ADDRWIDTH = BAR4ADDRWIDTH; // Default: 0
			this->BAR4IOMEMN = BAR4IOMEMN; // Default: 0
			this->BAR5IOMEMN = BAR5IOMEMN; // Default: 0
			this->DUALROLECFGCNTRLROOTEPN = DUALROLECFGCNTRLROOTEPN; // Default: 0
			this->L0SEXITLATENCY = L0SEXITLATENCY; // Default: 7
			this->L0SEXITLATENCYCOMCLK = L0SEXITLATENCYCOMCLK; // Default: 7
			this->L1EXITLATENCY = L1EXITLATENCY; // Default: 7
			this->L1EXITLATENCYCOMCLK = L1EXITLATENCYCOMCLK; // Default: 7
			this->LOWPRIORITYVCCOUNT = LOWPRIORITYVCCOUNT; // Default: 0
			this->PCIEREVISION = PCIEREVISION; // Default: 1
			this->PMDATASCALE0 = PMDATASCALE0; // Default: 0
			this->PMDATASCALE1 = PMDATASCALE1; // Default: 0
			this->PMDATASCALE2 = PMDATASCALE2; // Default: 0
			this->PMDATASCALE3 = PMDATASCALE3; // Default: 0
			this->PMDATASCALE4 = PMDATASCALE4; // Default: 0
			this->PMDATASCALE5 = PMDATASCALE5; // Default: 0
			this->PMDATASCALE6 = PMDATASCALE6; // Default: 0
			this->PMDATASCALE7 = PMDATASCALE7; // Default: 0
			this->PMDATASCALE8 = PMDATASCALE8; // Default: 0
			this->RETRYRAMREADLATENCY = RETRYRAMREADLATENCY; // Default: 3
			this->RETRYRAMWIDTH = RETRYRAMWIDTH; // Default: 0
			this->RETRYRAMWRITELATENCY = RETRYRAMWRITELATENCY; // Default: 1
			this->TLRAMREADLATENCY = TLRAMREADLATENCY; // Default: 3
			this->TLRAMWIDTH = TLRAMWIDTH; // Default: 0
			this->TLRAMWRITELATENCY = TLRAMWRITELATENCY; // Default: 1
			this->TXTSNFTS = TXTSNFTS; // Default: 255
			this->TXTSNFTSCOMCLK = TXTSNFTSCOMCLK; // Default: 255
			this->XPMAXPAYLOAD = XPMAXPAYLOAD; // Default: 0
			this->XPRCBCONTROL = XPRCBCONTROL; // Default: 0
			//Verilog Ports in definition order:
			this->BUSMASTERENABLE = BUSMASTERENABLE; // OUTPUT
			this->CRMDOHOTRESETN = CRMDOHOTRESETN; // OUTPUT
			this->CRMPWRSOFTRESETN = CRMPWRSOFTRESETN; // OUTPUT
			this->CRMRXHOTRESETN = CRMRXHOTRESETN; // OUTPUT
			this->DLLTXPMDLLPOUTSTANDING = DLLTXPMDLLPOUTSTANDING; // OUTPUT
			this->INTERRUPTDISABLE = INTERRUPTDISABLE; // OUTPUT
			this->IOSPACEENABLE = IOSPACEENABLE; // OUTPUT
			this->L0ASAUTONOMOUSINITCOMPLETED = L0ASAUTONOMOUSINITCOMPLETED; // OUTPUT
			this->L0ATTENTIONINDICATORCONTROL = L0ATTENTIONINDICATORCONTROL; // OUTPUT
			this->L0CFGLOOPBACKACK = L0CFGLOOPBACKACK; // OUTPUT
			this->L0COMPLETERID = L0COMPLETERID; // OUTPUT
			this->L0CORRERRMSGRCVD = L0CORRERRMSGRCVD; // OUTPUT
			this->L0DLLASRXSTATE = L0DLLASRXSTATE; // OUTPUT
			this->L0DLLASTXSTATE = L0DLLASTXSTATE; // OUTPUT
			this->L0DLLERRORVECTOR = L0DLLERRORVECTOR; // OUTPUT
			this->L0DLLRXACKOUTSTANDING = L0DLLRXACKOUTSTANDING; // OUTPUT
			this->L0DLLTXNONFCOUTSTANDING = L0DLLTXNONFCOUTSTANDING; // OUTPUT
			this->L0DLLTXOUTSTANDING = L0DLLTXOUTSTANDING; // OUTPUT
			this->L0DLLVCSTATUS = L0DLLVCSTATUS; // OUTPUT
			this->L0DLUPDOWN = L0DLUPDOWN; // OUTPUT
			this->L0ERRMSGREQID = L0ERRMSGREQID; // OUTPUT
			this->L0FATALERRMSGRCVD = L0FATALERRMSGRCVD; // OUTPUT
			this->L0FIRSTCFGWRITEOCCURRED = L0FIRSTCFGWRITEOCCURRED; // OUTPUT
			this->L0FWDCORRERROUT = L0FWDCORRERROUT; // OUTPUT
			this->L0FWDFATALERROUT = L0FWDFATALERROUT; // OUTPUT
			this->L0FWDNONFATALERROUT = L0FWDNONFATALERROUT; // OUTPUT
			this->L0LTSSMSTATE = L0LTSSMSTATE; // OUTPUT
			this->L0MACENTEREDL0 = L0MACENTEREDL0; // OUTPUT
			this->L0MACLINKTRAINING = L0MACLINKTRAINING; // OUTPUT
			this->L0MACLINKUP = L0MACLINKUP; // OUTPUT
			this->L0MACNEGOTIATEDLINKWIDTH = L0MACNEGOTIATEDLINKWIDTH; // OUTPUT
			this->L0MACNEWSTATEACK = L0MACNEWSTATEACK; // OUTPUT
			this->L0MACRXL0SSTATE = L0MACRXL0SSTATE; // OUTPUT
			this->L0MACUPSTREAMDOWNSTREAM = L0MACUPSTREAMDOWNSTREAM; // OUTPUT
			this->L0MCFOUND = L0MCFOUND; // OUTPUT
			this->L0MSIENABLE0 = L0MSIENABLE0; // OUTPUT
			this->L0MULTIMSGEN0 = L0MULTIMSGEN0; // OUTPUT
			this->L0NONFATALERRMSGRCVD = L0NONFATALERRMSGRCVD; // OUTPUT
			this->L0PMEACK = L0PMEACK; // OUTPUT
			this->L0PMEEN = L0PMEEN; // OUTPUT
			this->L0PMEREQOUT = L0PMEREQOUT; // OUTPUT
			this->L0POWERCONTROLLERCONTROL = L0POWERCONTROLLERCONTROL; // OUTPUT
			this->L0POWERINDICATORCONTROL = L0POWERINDICATORCONTROL; // OUTPUT
			this->L0PWRINHIBITTRANSFERS = L0PWRINHIBITTRANSFERS; // OUTPUT
			this->L0PWRL1STATE = L0PWRL1STATE; // OUTPUT
			this->L0PWRL23READYDEVICE = L0PWRL23READYDEVICE; // OUTPUT
			this->L0PWRL23READYSTATE = L0PWRL23READYSTATE; // OUTPUT
			this->L0PWRSTATE0 = L0PWRSTATE0; // OUTPUT
			this->L0PWRTURNOFFREQ = L0PWRTURNOFFREQ; // OUTPUT
			this->L0PWRTXL0SSTATE = L0PWRTXL0SSTATE; // OUTPUT
			this->L0RECEIVEDASSERTINTALEGACYINT = L0RECEIVEDASSERTINTALEGACYINT; // OUTPUT
			this->L0RECEIVEDASSERTINTBLEGACYINT = L0RECEIVEDASSERTINTBLEGACYINT; // OUTPUT
			this->L0RECEIVEDASSERTINTCLEGACYINT = L0RECEIVEDASSERTINTCLEGACYINT; // OUTPUT
			this->L0RECEIVEDASSERTINTDLEGACYINT = L0RECEIVEDASSERTINTDLEGACYINT; // OUTPUT
			this->L0RECEIVEDDEASSERTINTALEGACYINT = L0RECEIVEDDEASSERTINTALEGACYINT; // OUTPUT
			this->L0RECEIVEDDEASSERTINTBLEGACYINT = L0RECEIVEDDEASSERTINTBLEGACYINT; // OUTPUT
			this->L0RECEIVEDDEASSERTINTCLEGACYINT = L0RECEIVEDDEASSERTINTCLEGACYINT; // OUTPUT
			this->L0RECEIVEDDEASSERTINTDLEGACYINT = L0RECEIVEDDEASSERTINTDLEGACYINT; // OUTPUT
			this->L0RXBEACON = L0RXBEACON; // OUTPUT
			this->L0RXDLLFCCMPLMCCRED = L0RXDLLFCCMPLMCCRED; // OUTPUT
			this->L0RXDLLFCCMPLMCUPDATE = L0RXDLLFCCMPLMCUPDATE; // OUTPUT
			this->L0RXDLLFCNPOSTBYPCRED = L0RXDLLFCNPOSTBYPCRED; // OUTPUT
			this->L0RXDLLFCNPOSTBYPUPDATE = L0RXDLLFCNPOSTBYPUPDATE; // OUTPUT
			this->L0RXDLLFCPOSTORDCRED = L0RXDLLFCPOSTORDCRED; // OUTPUT
			this->L0RXDLLFCPOSTORDUPDATE = L0RXDLLFCPOSTORDUPDATE; // OUTPUT
			this->L0RXDLLPM = L0RXDLLPM; // OUTPUT
			this->L0RXDLLPMTYPE = L0RXDLLPMTYPE; // OUTPUT
			this->L0RXDLLSBFCDATA = L0RXDLLSBFCDATA; // OUTPUT
			this->L0RXDLLSBFCUPDATE = L0RXDLLSBFCUPDATE; // OUTPUT
			this->L0RXDLLTLPECRCOK = L0RXDLLTLPECRCOK; // OUTPUT
			this->L0RXDLLTLPEND = L0RXDLLTLPEND; // OUTPUT
			this->L0RXMACLINKERROR = L0RXMACLINKERROR; // OUTPUT
			this->L0STATSCFGOTHERRECEIVED = L0STATSCFGOTHERRECEIVED; // OUTPUT
			this->L0STATSCFGOTHERTRANSMITTED = L0STATSCFGOTHERTRANSMITTED; // OUTPUT
			this->L0STATSCFGRECEIVED = L0STATSCFGRECEIVED; // OUTPUT
			this->L0STATSCFGTRANSMITTED = L0STATSCFGTRANSMITTED; // OUTPUT
			this->L0STATSDLLPRECEIVED = L0STATSDLLPRECEIVED; // OUTPUT
			this->L0STATSDLLPTRANSMITTED = L0STATSDLLPTRANSMITTED; // OUTPUT
			this->L0STATSOSRECEIVED = L0STATSOSRECEIVED; // OUTPUT
			this->L0STATSOSTRANSMITTED = L0STATSOSTRANSMITTED; // OUTPUT
			this->L0STATSTLPRECEIVED = L0STATSTLPRECEIVED; // OUTPUT
			this->L0STATSTLPTRANSMITTED = L0STATSTLPTRANSMITTED; // OUTPUT
			this->L0TOGGLEELECTROMECHANICALINTERLOCK = L0TOGGLEELECTROMECHANICALINTERLOCK; // OUTPUT
			this->L0TRANSFORMEDVC = L0TRANSFORMEDVC; // OUTPUT
			this->L0TXDLLFCCMPLMCUPDATED = L0TXDLLFCCMPLMCUPDATED; // OUTPUT
			this->L0TXDLLFCNPOSTBYPUPDATED = L0TXDLLFCNPOSTBYPUPDATED; // OUTPUT
			this->L0TXDLLFCPOSTORDUPDATED = L0TXDLLFCPOSTORDUPDATED; // OUTPUT
			this->L0TXDLLPMUPDATED = L0TXDLLPMUPDATED; // OUTPUT
			this->L0TXDLLSBFCUPDATED = L0TXDLLSBFCUPDATED; // OUTPUT
			this->L0UCBYPFOUND = L0UCBYPFOUND; // OUTPUT
			this->L0UCORDFOUND = L0UCORDFOUND; // OUTPUT
			this->L0UNLOCKRECEIVED = L0UNLOCKRECEIVED; // OUTPUT
			this->LLKRX4DWHEADERN = LLKRX4DWHEADERN; // OUTPUT
			this->LLKRXCHCOMPLETIONAVAILABLEN = LLKRXCHCOMPLETIONAVAILABLEN; // OUTPUT
			this->LLKRXCHCOMPLETIONPARTIALN = LLKRXCHCOMPLETIONPARTIALN; // OUTPUT
			this->LLKRXCHCONFIGAVAILABLEN = LLKRXCHCONFIGAVAILABLEN; // OUTPUT
			this->LLKRXCHCONFIGPARTIALN = LLKRXCHCONFIGPARTIALN; // OUTPUT
			this->LLKRXCHNONPOSTEDAVAILABLEN = LLKRXCHNONPOSTEDAVAILABLEN; // OUTPUT
			this->LLKRXCHNONPOSTEDPARTIALN = LLKRXCHNONPOSTEDPARTIALN; // OUTPUT
			this->LLKRXCHPOSTEDAVAILABLEN = LLKRXCHPOSTEDAVAILABLEN; // OUTPUT
			this->LLKRXCHPOSTEDPARTIALN = LLKRXCHPOSTEDPARTIALN; // OUTPUT
			this->LLKRXDATA = LLKRXDATA; // OUTPUT
			this->LLKRXECRCBADN = LLKRXECRCBADN; // OUTPUT
			this->LLKRXEOFN = LLKRXEOFN; // OUTPUT
			this->LLKRXEOPN = LLKRXEOPN; // OUTPUT
			this->LLKRXPREFERREDTYPE = LLKRXPREFERREDTYPE; // OUTPUT
			this->LLKRXSOFN = LLKRXSOFN; // OUTPUT
			this->LLKRXSOPN = LLKRXSOPN; // OUTPUT
			this->LLKRXSRCDSCN = LLKRXSRCDSCN; // OUTPUT
			this->LLKRXSRCLASTREQN = LLKRXSRCLASTREQN; // OUTPUT
			this->LLKRXSRCRDYN = LLKRXSRCRDYN; // OUTPUT
			this->LLKRXVALIDN = LLKRXVALIDN; // OUTPUT
			this->LLKTCSTATUS = LLKTCSTATUS; // OUTPUT
			this->LLKTXCHANSPACE = LLKTXCHANSPACE; // OUTPUT
			this->LLKTXCHCOMPLETIONREADYN = LLKTXCHCOMPLETIONREADYN; // OUTPUT
			this->LLKTXCHNONPOSTEDREADYN = LLKTXCHNONPOSTEDREADYN; // OUTPUT
			this->LLKTXCHPOSTEDREADYN = LLKTXCHPOSTEDREADYN; // OUTPUT
			this->LLKTXCONFIGREADYN = LLKTXCONFIGREADYN; // OUTPUT
			this->LLKTXDSTRDYN = LLKTXDSTRDYN; // OUTPUT
			this->MAXPAYLOADSIZE = MAXPAYLOADSIZE; // OUTPUT
			this->MAXREADREQUESTSIZE = MAXREADREQUESTSIZE; // OUTPUT
			this->MEMSPACEENABLE = MEMSPACEENABLE; // OUTPUT
			this->MGMTPSO = MGMTPSO; // OUTPUT
			this->MGMTRDATA = MGMTRDATA; // OUTPUT
			this->MGMTSTATSCREDIT = MGMTSTATSCREDIT; // OUTPUT
			this->MIMDLLBRADD = MIMDLLBRADD; // OUTPUT
			this->MIMDLLBREN = MIMDLLBREN; // OUTPUT
			this->MIMDLLBWADD = MIMDLLBWADD; // OUTPUT
			this->MIMDLLBWDATA = MIMDLLBWDATA; // OUTPUT
			this->MIMDLLBWEN = MIMDLLBWEN; // OUTPUT
			this->MIMRXBRADD = MIMRXBRADD; // OUTPUT
			this->MIMRXBREN = MIMRXBREN; // OUTPUT
			this->MIMRXBWADD = MIMRXBWADD; // OUTPUT
			this->MIMRXBWDATA = MIMRXBWDATA; // OUTPUT
			this->MIMRXBWEN = MIMRXBWEN; // OUTPUT
			this->MIMTXBRADD = MIMTXBRADD; // OUTPUT
			this->MIMTXBREN = MIMTXBREN; // OUTPUT
			this->MIMTXBWADD = MIMTXBWADD; // OUTPUT
			this->MIMTXBWDATA = MIMTXBWDATA; // OUTPUT
			this->MIMTXBWEN = MIMTXBWEN; // OUTPUT
			this->PARITYERRORRESPONSE = PARITYERRORRESPONSE; // OUTPUT
			this->PIPEDESKEWLANESL0 = PIPEDESKEWLANESL0; // OUTPUT
			this->PIPEDESKEWLANESL1 = PIPEDESKEWLANESL1; // OUTPUT
			this->PIPEDESKEWLANESL2 = PIPEDESKEWLANESL2; // OUTPUT
			this->PIPEDESKEWLANESL3 = PIPEDESKEWLANESL3; // OUTPUT
			this->PIPEDESKEWLANESL4 = PIPEDESKEWLANESL4; // OUTPUT
			this->PIPEDESKEWLANESL5 = PIPEDESKEWLANESL5; // OUTPUT
			this->PIPEDESKEWLANESL6 = PIPEDESKEWLANESL6; // OUTPUT
			this->PIPEDESKEWLANESL7 = PIPEDESKEWLANESL7; // OUTPUT
			this->PIPEPOWERDOWNL0 = PIPEPOWERDOWNL0; // OUTPUT
			this->PIPEPOWERDOWNL1 = PIPEPOWERDOWNL1; // OUTPUT
			this->PIPEPOWERDOWNL2 = PIPEPOWERDOWNL2; // OUTPUT
			this->PIPEPOWERDOWNL3 = PIPEPOWERDOWNL3; // OUTPUT
			this->PIPEPOWERDOWNL4 = PIPEPOWERDOWNL4; // OUTPUT
			this->PIPEPOWERDOWNL5 = PIPEPOWERDOWNL5; // OUTPUT
			this->PIPEPOWERDOWNL6 = PIPEPOWERDOWNL6; // OUTPUT
			this->PIPEPOWERDOWNL7 = PIPEPOWERDOWNL7; // OUTPUT
			this->PIPERESETL0 = PIPERESETL0; // OUTPUT
			this->PIPERESETL1 = PIPERESETL1; // OUTPUT
			this->PIPERESETL2 = PIPERESETL2; // OUTPUT
			this->PIPERESETL3 = PIPERESETL3; // OUTPUT
			this->PIPERESETL4 = PIPERESETL4; // OUTPUT
			this->PIPERESETL5 = PIPERESETL5; // OUTPUT
			this->PIPERESETL6 = PIPERESETL6; // OUTPUT
			this->PIPERESETL7 = PIPERESETL7; // OUTPUT
			this->PIPERXPOLARITYL0 = PIPERXPOLARITYL0; // OUTPUT
			this->PIPERXPOLARITYL1 = PIPERXPOLARITYL1; // OUTPUT
			this->PIPERXPOLARITYL2 = PIPERXPOLARITYL2; // OUTPUT
			this->PIPERXPOLARITYL3 = PIPERXPOLARITYL3; // OUTPUT
			this->PIPERXPOLARITYL4 = PIPERXPOLARITYL4; // OUTPUT
			this->PIPERXPOLARITYL5 = PIPERXPOLARITYL5; // OUTPUT
			this->PIPERXPOLARITYL6 = PIPERXPOLARITYL6; // OUTPUT
			this->PIPERXPOLARITYL7 = PIPERXPOLARITYL7; // OUTPUT
			this->PIPETXCOMPLIANCEL0 = PIPETXCOMPLIANCEL0; // OUTPUT
			this->PIPETXCOMPLIANCEL1 = PIPETXCOMPLIANCEL1; // OUTPUT
			this->PIPETXCOMPLIANCEL2 = PIPETXCOMPLIANCEL2; // OUTPUT
			this->PIPETXCOMPLIANCEL3 = PIPETXCOMPLIANCEL3; // OUTPUT
			this->PIPETXCOMPLIANCEL4 = PIPETXCOMPLIANCEL4; // OUTPUT
			this->PIPETXCOMPLIANCEL5 = PIPETXCOMPLIANCEL5; // OUTPUT
			this->PIPETXCOMPLIANCEL6 = PIPETXCOMPLIANCEL6; // OUTPUT
			this->PIPETXCOMPLIANCEL7 = PIPETXCOMPLIANCEL7; // OUTPUT
			this->PIPETXDATAKL0 = PIPETXDATAKL0; // OUTPUT
			this->PIPETXDATAKL1 = PIPETXDATAKL1; // OUTPUT
			this->PIPETXDATAKL2 = PIPETXDATAKL2; // OUTPUT
			this->PIPETXDATAKL3 = PIPETXDATAKL3; // OUTPUT
			this->PIPETXDATAKL4 = PIPETXDATAKL4; // OUTPUT
			this->PIPETXDATAKL5 = PIPETXDATAKL5; // OUTPUT
			this->PIPETXDATAKL6 = PIPETXDATAKL6; // OUTPUT
			this->PIPETXDATAKL7 = PIPETXDATAKL7; // OUTPUT
			this->PIPETXDATAL0 = PIPETXDATAL0; // OUTPUT
			this->PIPETXDATAL1 = PIPETXDATAL1; // OUTPUT
			this->PIPETXDATAL2 = PIPETXDATAL2; // OUTPUT
			this->PIPETXDATAL3 = PIPETXDATAL3; // OUTPUT
			this->PIPETXDATAL4 = PIPETXDATAL4; // OUTPUT
			this->PIPETXDATAL5 = PIPETXDATAL5; // OUTPUT
			this->PIPETXDATAL6 = PIPETXDATAL6; // OUTPUT
			this->PIPETXDATAL7 = PIPETXDATAL7; // OUTPUT
			this->PIPETXDETECTRXLOOPBACKL0 = PIPETXDETECTRXLOOPBACKL0; // OUTPUT
			this->PIPETXDETECTRXLOOPBACKL1 = PIPETXDETECTRXLOOPBACKL1; // OUTPUT
			this->PIPETXDETECTRXLOOPBACKL2 = PIPETXDETECTRXLOOPBACKL2; // OUTPUT
			this->PIPETXDETECTRXLOOPBACKL3 = PIPETXDETECTRXLOOPBACKL3; // OUTPUT
			this->PIPETXDETECTRXLOOPBACKL4 = PIPETXDETECTRXLOOPBACKL4; // OUTPUT
			this->PIPETXDETECTRXLOOPBACKL5 = PIPETXDETECTRXLOOPBACKL5; // OUTPUT
			this->PIPETXDETECTRXLOOPBACKL6 = PIPETXDETECTRXLOOPBACKL6; // OUTPUT
			this->PIPETXDETECTRXLOOPBACKL7 = PIPETXDETECTRXLOOPBACKL7; // OUTPUT
			this->PIPETXELECIDLEL0 = PIPETXELECIDLEL0; // OUTPUT
			this->PIPETXELECIDLEL1 = PIPETXELECIDLEL1; // OUTPUT
			this->PIPETXELECIDLEL2 = PIPETXELECIDLEL2; // OUTPUT
			this->PIPETXELECIDLEL3 = PIPETXELECIDLEL3; // OUTPUT
			this->PIPETXELECIDLEL4 = PIPETXELECIDLEL4; // OUTPUT
			this->PIPETXELECIDLEL5 = PIPETXELECIDLEL5; // OUTPUT
			this->PIPETXELECIDLEL6 = PIPETXELECIDLEL6; // OUTPUT
			this->PIPETXELECIDLEL7 = PIPETXELECIDLEL7; // OUTPUT
			this->SERRENABLE = SERRENABLE; // OUTPUT
			this->URREPORTINGENABLE = URREPORTINGENABLE; // OUTPUT
			this->AUXPOWER = AUXPOWER; // INPUT
			this->CFGNEGOTIATEDLINKWIDTH = CFGNEGOTIATEDLINKWIDTH; // INPUT
			this->COMPLIANCEAVOID = COMPLIANCEAVOID; // INPUT
			this->CRMCFGBRIDGEHOTRESET = CRMCFGBRIDGEHOTRESET; // INPUT
			this->CRMCORECLK = CRMCORECLK; // INPUT
			this->CRMCORECLKDLO = CRMCORECLKDLO; // INPUT
			this->CRMCORECLKRXO = CRMCORECLKRXO; // INPUT
			this->CRMCORECLKTXO = CRMCORECLKTXO; // INPUT
			this->CRMLINKRSTN = CRMLINKRSTN; // INPUT
			this->CRMMACRSTN = CRMMACRSTN; // INPUT
			this->CRMMGMTRSTN = CRMMGMTRSTN; // INPUT
			this->CRMNVRSTN = CRMNVRSTN; // INPUT
			this->CRMTXHOTRESETN = CRMTXHOTRESETN; // INPUT
			this->CRMURSTN = CRMURSTN; // INPUT
			this->CRMUSERCFGRSTN = CRMUSERCFGRSTN; // INPUT
			this->CRMUSERCLK = CRMUSERCLK; // INPUT
			this->CRMUSERCLKRXO = CRMUSERCLKRXO; // INPUT
			this->CRMUSERCLKTXO = CRMUSERCLKTXO; // INPUT
			this->CROSSLINKSEED = CROSSLINKSEED; // INPUT
			this->L0ACKNAKTIMERADJUSTMENT = L0ACKNAKTIMERADJUSTMENT; // INPUT
			this->L0ALLDOWNPORTSINL1 = L0ALLDOWNPORTSINL1; // INPUT
			this->L0ALLDOWNRXPORTSINL0S = L0ALLDOWNRXPORTSINL0S; // INPUT
			this->L0ASE = L0ASE; // INPUT
			this->L0ASPORTCOUNT = L0ASPORTCOUNT; // INPUT
			this->L0ASTURNPOOLBITSCONSUMED = L0ASTURNPOOLBITSCONSUMED; // INPUT
			this->L0ATTENTIONBUTTONPRESSED = L0ATTENTIONBUTTONPRESSED; // INPUT
			this->L0CFGASSPANTREEOWNEDSTATE = L0CFGASSPANTREEOWNEDSTATE; // INPUT
			this->L0CFGASSTATECHANGECMD = L0CFGASSTATECHANGECMD; // INPUT
			this->L0CFGDISABLESCRAMBLE = L0CFGDISABLESCRAMBLE; // INPUT
			this->L0CFGEXTENDEDSYNC = L0CFGEXTENDEDSYNC; // INPUT
			this->L0CFGL0SENTRYENABLE = L0CFGL0SENTRYENABLE; // INPUT
			this->L0CFGL0SENTRYSUP = L0CFGL0SENTRYSUP; // INPUT
			this->L0CFGL0SEXITLAT = L0CFGL0SEXITLAT; // INPUT
			this->L0CFGLINKDISABLE = L0CFGLINKDISABLE; // INPUT
			this->L0CFGLOOPBACKMASTER = L0CFGLOOPBACKMASTER; // INPUT
			this->L0CFGNEGOTIATEDMAXP = L0CFGNEGOTIATEDMAXP; // INPUT
			this->L0CFGVCENABLE = L0CFGVCENABLE; // INPUT
			this->L0CFGVCID = L0CFGVCID; // INPUT
			this->L0DLLHOLDLINKUP = L0DLLHOLDLINKUP; // INPUT
			this->L0ELECTROMECHANICALINTERLOCKENGAGED = L0ELECTROMECHANICALINTERLOCKENGAGED; // INPUT
			this->L0FWDASSERTINTALEGACYINT = L0FWDASSERTINTALEGACYINT; // INPUT
			this->L0FWDASSERTINTBLEGACYINT = L0FWDASSERTINTBLEGACYINT; // INPUT
			this->L0FWDASSERTINTCLEGACYINT = L0FWDASSERTINTCLEGACYINT; // INPUT
			this->L0FWDASSERTINTDLEGACYINT = L0FWDASSERTINTDLEGACYINT; // INPUT
			this->L0FWDCORRERRIN = L0FWDCORRERRIN; // INPUT
			this->L0FWDDEASSERTINTALEGACYINT = L0FWDDEASSERTINTALEGACYINT; // INPUT
			this->L0FWDDEASSERTINTBLEGACYINT = L0FWDDEASSERTINTBLEGACYINT; // INPUT
			this->L0FWDDEASSERTINTCLEGACYINT = L0FWDDEASSERTINTCLEGACYINT; // INPUT
			this->L0FWDDEASSERTINTDLEGACYINT = L0FWDDEASSERTINTDLEGACYINT; // INPUT
			this->L0FWDFATALERRIN = L0FWDFATALERRIN; // INPUT
			this->L0FWDNONFATALERRIN = L0FWDNONFATALERRIN; // INPUT
			this->L0LEGACYINTFUNCT0 = L0LEGACYINTFUNCT0; // INPUT
			this->L0MRLSENSORCLOSEDN = L0MRLSENSORCLOSEDN; // INPUT
			this->L0MSIREQUEST0 = L0MSIREQUEST0; // INPUT
			this->L0PACKETHEADERFROMUSER = L0PACKETHEADERFROMUSER; // INPUT
			this->L0PMEREQIN = L0PMEREQIN; // INPUT
			this->L0PORTNUMBER = L0PORTNUMBER; // INPUT
			this->L0POWERFAULTDETECTED = L0POWERFAULTDETECTED; // INPUT
			this->L0PRESENCEDETECTSLOTEMPTYN = L0PRESENCEDETECTSLOTEMPTYN; // INPUT
			this->L0PWRNEWSTATEREQ = L0PWRNEWSTATEREQ; // INPUT
			this->L0PWRNEXTLINKSTATE = L0PWRNEXTLINKSTATE; // INPUT
			this->L0REPLAYTIMERADJUSTMENT = L0REPLAYTIMERADJUSTMENT; // INPUT
			this->L0ROOTTURNOFFREQ = L0ROOTTURNOFFREQ; // INPUT
			this->L0RXTLTLPNONINITIALIZEDVC = L0RXTLTLPNONINITIALIZEDVC; // INPUT
			this->L0SENDUNLOCKMESSAGE = L0SENDUNLOCKMESSAGE; // INPUT
			this->L0SETCOMPLETERABORTERROR = L0SETCOMPLETERABORTERROR; // INPUT
			this->L0SETCOMPLETIONTIMEOUTCORRERROR = L0SETCOMPLETIONTIMEOUTCORRERROR; // INPUT
			this->L0SETCOMPLETIONTIMEOUTUNCORRERROR = L0SETCOMPLETIONTIMEOUTUNCORRERROR; // INPUT
			this->L0SETDETECTEDCORRERROR = L0SETDETECTEDCORRERROR; // INPUT
			this->L0SETDETECTEDFATALERROR = L0SETDETECTEDFATALERROR; // INPUT
			this->L0SETDETECTEDNONFATALERROR = L0SETDETECTEDNONFATALERROR; // INPUT
			this->L0SETLINKDETECTEDPARITYERROR = L0SETLINKDETECTEDPARITYERROR; // INPUT
			this->L0SETLINKMASTERDATAPARITY = L0SETLINKMASTERDATAPARITY; // INPUT
			this->L0SETLINKRECEIVEDMASTERABORT = L0SETLINKRECEIVEDMASTERABORT; // INPUT
			this->L0SETLINKRECEIVEDTARGETABORT = L0SETLINKRECEIVEDTARGETABORT; // INPUT
			this->L0SETLINKSIGNALLEDTARGETABORT = L0SETLINKSIGNALLEDTARGETABORT; // INPUT
			this->L0SETLINKSYSTEMERROR = L0SETLINKSYSTEMERROR; // INPUT
			this->L0SETUNEXPECTEDCOMPLETIONCORRERROR = L0SETUNEXPECTEDCOMPLETIONCORRERROR; // INPUT
			this->L0SETUNEXPECTEDCOMPLETIONUNCORRERROR = L0SETUNEXPECTEDCOMPLETIONUNCORRERROR; // INPUT
			this->L0SETUNSUPPORTEDREQUESTNONPOSTEDERROR = L0SETUNSUPPORTEDREQUESTNONPOSTEDERROR; // INPUT
			this->L0SETUNSUPPORTEDREQUESTOTHERERROR = L0SETUNSUPPORTEDREQUESTOTHERERROR; // INPUT
			this->L0SETUSERDETECTEDPARITYERROR = L0SETUSERDETECTEDPARITYERROR; // INPUT
			this->L0SETUSERMASTERDATAPARITY = L0SETUSERMASTERDATAPARITY; // INPUT
			this->L0SETUSERRECEIVEDMASTERABORT = L0SETUSERRECEIVEDMASTERABORT; // INPUT
			this->L0SETUSERRECEIVEDTARGETABORT = L0SETUSERRECEIVEDTARGETABORT; // INPUT
			this->L0SETUSERSIGNALLEDTARGETABORT = L0SETUSERSIGNALLEDTARGETABORT; // INPUT
			this->L0SETUSERSYSTEMERROR = L0SETUSERSYSTEMERROR; // INPUT
			this->L0TLASFCCREDSTARVATION = L0TLASFCCREDSTARVATION; // INPUT
			this->L0TLLINKRETRAIN = L0TLLINKRETRAIN; // INPUT
			this->L0TRANSACTIONSPENDING = L0TRANSACTIONSPENDING; // INPUT
			this->L0TXBEACON = L0TXBEACON; // INPUT
			this->L0TXCFGPM = L0TXCFGPM; // INPUT
			this->L0TXCFGPMTYPE = L0TXCFGPMTYPE; // INPUT
			this->L0TXTLFCCMPLMCCRED = L0TXTLFCCMPLMCCRED; // INPUT
			this->L0TXTLFCCMPLMCUPDATE = L0TXTLFCCMPLMCUPDATE; // INPUT
			this->L0TXTLFCNPOSTBYPCRED = L0TXTLFCNPOSTBYPCRED; // INPUT
			this->L0TXTLFCNPOSTBYPUPDATE = L0TXTLFCNPOSTBYPUPDATE; // INPUT
			this->L0TXTLFCPOSTORDCRED = L0TXTLFCPOSTORDCRED; // INPUT
			this->L0TXTLFCPOSTORDUPDATE = L0TXTLFCPOSTORDUPDATE; // INPUT
			this->L0TXTLSBFCDATA = L0TXTLSBFCDATA; // INPUT
			this->L0TXTLSBFCUPDATE = L0TXTLSBFCUPDATE; // INPUT
			this->L0TXTLTLPDATA = L0TXTLTLPDATA; // INPUT
			this->L0TXTLTLPEDB = L0TXTLTLPEDB; // INPUT
			this->L0TXTLTLPENABLE = L0TXTLTLPENABLE; // INPUT
			this->L0TXTLTLPEND = L0TXTLTLPEND; // INPUT
			this->L0TXTLTLPLATENCY = L0TXTLTLPLATENCY; // INPUT
			this->L0TXTLTLPREQ = L0TXTLTLPREQ; // INPUT
			this->L0TXTLTLPREQEND = L0TXTLTLPREQEND; // INPUT
			this->L0TXTLTLPWIDTH = L0TXTLTLPWIDTH; // INPUT
			this->L0UPSTREAMRXPORTINL0S = L0UPSTREAMRXPORTINL0S; // INPUT
			this->L0VC0PREVIEWEXPAND = L0VC0PREVIEWEXPAND; // INPUT
			this->L0WAKEN = L0WAKEN; // INPUT
			this->LLKRXCHFIFO = LLKRXCHFIFO; // INPUT
			this->LLKRXCHTC = LLKRXCHTC; // INPUT
			this->LLKRXDSTCONTREQN = LLKRXDSTCONTREQN; // INPUT
			this->LLKRXDSTREQN = LLKRXDSTREQN; // INPUT
			this->LLKTX4DWHEADERN = LLKTX4DWHEADERN; // INPUT
			this->LLKTXCHFIFO = LLKTXCHFIFO; // INPUT
			this->LLKTXCHTC = LLKTXCHTC; // INPUT
			this->LLKTXCOMPLETEN = LLKTXCOMPLETEN; // INPUT
			this->LLKTXCREATEECRCN = LLKTXCREATEECRCN; // INPUT
			this->LLKTXDATA = LLKTXDATA; // INPUT
			this->LLKTXENABLEN = LLKTXENABLEN; // INPUT
			this->LLKTXEOFN = LLKTXEOFN; // INPUT
			this->LLKTXEOPN = LLKTXEOPN; // INPUT
			this->LLKTXSOFN = LLKTXSOFN; // INPUT
			this->LLKTXSOPN = LLKTXSOPN; // INPUT
			this->LLKTXSRCDSCN = LLKTXSRCDSCN; // INPUT
			this->LLKTXSRCRDYN = LLKTXSRCRDYN; // INPUT
			this->MAINPOWER = MAINPOWER; // INPUT
			this->MGMTADDR = MGMTADDR; // INPUT
			this->MGMTBWREN = MGMTBWREN; // INPUT
			this->MGMTRDEN = MGMTRDEN; // INPUT
			this->MGMTSTATSCREDITSEL = MGMTSTATSCREDITSEL; // INPUT
			this->MGMTWDATA = MGMTWDATA; // INPUT
			this->MGMTWREN = MGMTWREN; // INPUT
			this->MIMDLLBRDATA = MIMDLLBRDATA; // INPUT
			this->MIMRXBRDATA = MIMRXBRDATA; // INPUT
			this->MIMTXBRDATA = MIMTXBRDATA; // INPUT
			this->PIPEPHYSTATUSL0 = PIPEPHYSTATUSL0; // INPUT
			this->PIPEPHYSTATUSL1 = PIPEPHYSTATUSL1; // INPUT
			this->PIPEPHYSTATUSL2 = PIPEPHYSTATUSL2; // INPUT
			this->PIPEPHYSTATUSL3 = PIPEPHYSTATUSL3; // INPUT
			this->PIPEPHYSTATUSL4 = PIPEPHYSTATUSL4; // INPUT
			this->PIPEPHYSTATUSL5 = PIPEPHYSTATUSL5; // INPUT
			this->PIPEPHYSTATUSL6 = PIPEPHYSTATUSL6; // INPUT
			this->PIPEPHYSTATUSL7 = PIPEPHYSTATUSL7; // INPUT
			this->PIPERXCHANISALIGNEDL0 = PIPERXCHANISALIGNEDL0; // INPUT
			this->PIPERXCHANISALIGNEDL1 = PIPERXCHANISALIGNEDL1; // INPUT
			this->PIPERXCHANISALIGNEDL2 = PIPERXCHANISALIGNEDL2; // INPUT
			this->PIPERXCHANISALIGNEDL3 = PIPERXCHANISALIGNEDL3; // INPUT
			this->PIPERXCHANISALIGNEDL4 = PIPERXCHANISALIGNEDL4; // INPUT
			this->PIPERXCHANISALIGNEDL5 = PIPERXCHANISALIGNEDL5; // INPUT
			this->PIPERXCHANISALIGNEDL6 = PIPERXCHANISALIGNEDL6; // INPUT
			this->PIPERXCHANISALIGNEDL7 = PIPERXCHANISALIGNEDL7; // INPUT
			this->PIPERXDATAKL0 = PIPERXDATAKL0; // INPUT
			this->PIPERXDATAKL1 = PIPERXDATAKL1; // INPUT
			this->PIPERXDATAKL2 = PIPERXDATAKL2; // INPUT
			this->PIPERXDATAKL3 = PIPERXDATAKL3; // INPUT
			this->PIPERXDATAKL4 = PIPERXDATAKL4; // INPUT
			this->PIPERXDATAKL5 = PIPERXDATAKL5; // INPUT
			this->PIPERXDATAKL6 = PIPERXDATAKL6; // INPUT
			this->PIPERXDATAKL7 = PIPERXDATAKL7; // INPUT
			this->PIPERXDATAL0 = PIPERXDATAL0; // INPUT
			this->PIPERXDATAL1 = PIPERXDATAL1; // INPUT
			this->PIPERXDATAL2 = PIPERXDATAL2; // INPUT
			this->PIPERXDATAL3 = PIPERXDATAL3; // INPUT
			this->PIPERXDATAL4 = PIPERXDATAL4; // INPUT
			this->PIPERXDATAL5 = PIPERXDATAL5; // INPUT
			this->PIPERXDATAL6 = PIPERXDATAL6; // INPUT
			this->PIPERXDATAL7 = PIPERXDATAL7; // INPUT
			this->PIPERXELECIDLEL0 = PIPERXELECIDLEL0; // INPUT
			this->PIPERXELECIDLEL1 = PIPERXELECIDLEL1; // INPUT
			this->PIPERXELECIDLEL2 = PIPERXELECIDLEL2; // INPUT
			this->PIPERXELECIDLEL3 = PIPERXELECIDLEL3; // INPUT
			this->PIPERXELECIDLEL4 = PIPERXELECIDLEL4; // INPUT
			this->PIPERXELECIDLEL5 = PIPERXELECIDLEL5; // INPUT
			this->PIPERXELECIDLEL6 = PIPERXELECIDLEL6; // INPUT
			this->PIPERXELECIDLEL7 = PIPERXELECIDLEL7; // INPUT
			this->PIPERXSTATUSL0 = PIPERXSTATUSL0; // INPUT
			this->PIPERXSTATUSL1 = PIPERXSTATUSL1; // INPUT
			this->PIPERXSTATUSL2 = PIPERXSTATUSL2; // INPUT
			this->PIPERXSTATUSL3 = PIPERXSTATUSL3; // INPUT
			this->PIPERXSTATUSL4 = PIPERXSTATUSL4; // INPUT
			this->PIPERXSTATUSL5 = PIPERXSTATUSL5; // INPUT
			this->PIPERXSTATUSL6 = PIPERXSTATUSL6; // INPUT
			this->PIPERXSTATUSL7 = PIPERXSTATUSL7; // INPUT
			this->PIPERXVALIDL0 = PIPERXVALIDL0; // INPUT
			this->PIPERXVALIDL1 = PIPERXVALIDL1; // INPUT
			this->PIPERXVALIDL2 = PIPERXVALIDL2; // INPUT
			this->PIPERXVALIDL3 = PIPERXVALIDL3; // INPUT
			this->PIPERXVALIDL4 = PIPERXVALIDL4; // INPUT
			this->PIPERXVALIDL5 = PIPERXVALIDL5; // INPUT
			this->PIPERXVALIDL6 = PIPERXVALIDL6; // INPUT
			this->PIPERXVALIDL7 = PIPERXVALIDL7; // INPUT
		
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
