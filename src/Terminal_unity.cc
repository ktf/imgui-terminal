
// Completely optional.  Intended to simplify use in other projects.
// Eventually, we'll collapse a bunch of the source files so this may not
// be necessary.

#include "attributes.cc"
#include "colormap.cc"
#include "CursorState.cc"
#include "ParseState.cc"
#include "ScreenState.cc"
//#include "Terminal.cc"

#include "commands/C0/ACK.cc"
#include "commands/C0/CAN.cc"
#include "commands/C0/DC1.cc"
#include "commands/C0/DC2.cc"
#include "commands/C0/DC3.cc"
#include "commands/C0/DC4.cc"
#include "commands/C0/DLE.cc"
#include "commands/C0/EM.cc"
#include "commands/C0/ENQ.cc"
#include "commands/C0/EOT.cc"
#include "commands/C0/ETB.cc"
#include "commands/C0/ETX.cc"
#include "commands/C0/IS1.cc"
#include "commands/C0/IS2.cc"
#include "commands/C0/IS3.cc"
#include "commands/C0/IS4.cc"
#include "commands/C0/NAK.cc"
#include "commands/C0/NUL_.cc"
#include "commands/C0/SOH.cc"
#include "commands/C0/STX.cc"
#include "commands/C0/SUB.cc"
#include "commands/C0/SYN.cc"

#include "commands/C1/BPH.cc"
#include "commands/C1/CCH.cc"
#include "commands/C1/EPA.cc"
#include "commands/C1/MW.cc"
#include "commands/C1/NBH.cc"
#include "commands/C1/PLD.cc"
#include "commands/C1/PLU.cc"
#include "commands/C1/PU1.cc"
#include "commands/C1/PU2.cc"
#include "commands/C1/SCI.cc"
#include "commands/C1/SPA.cc"
#include "commands/C1/SSA.cc"
#include "commands/C1/STS.cc"

#include "commands/audible_attributes/BEL.cc"
//#include "commands/audible_attributes/DECPS.cc"
//#include "commands/audible_attributes/DECSMBV.cc"
//#include "commands/audible_attributes/DECSWBV.cc"

#include "commands/colour_selection/DECAC.cc"
#include "commands/colour_selection/DECATC.cc"
//#include "commands/colour_selection/DECATCBM.cc"
//#include "commands/colour_selection/DECATCUM.cc"
//#include "commands/colour_selection/DECBBSM.cc"
//#include "commands/colour_selection/DECCTR.cc"
//#include "commands/colour_selection/DECECM.cc"
//#include "commands/colour_selection/DECSTGLT.cc"

#include "commands/editing/DCH.cc"
#include "commands/editing/DECCARA.cc"
#include "commands/editing/DECCRA.cc"
#include "commands/editing/DECDC.cc"
#include "commands/editing/DECERA.cc"
#include "commands/editing/DECFRA.cc"
//#include "commands/editing/DECIC.cc"
#include "commands/editing/DECRARA.cc"
//#include "commands/editing/DECSACE.cc"
#include "commands/editing/DECSCA.cc"
#include "commands/editing/DECSED.cc"
#include "commands/editing/DECSEL.cc"
#include "commands/editing/DECSERA.cc"
#include "commands/editing/DL.cc"
#include "commands/editing/ECH.cc"
#include "commands/editing/ED.cc"
#include "commands/editing/EL.cc"
#include "commands/editing/ICH.cc"
#include "commands/editing/IL.cc"
#include "commands/editing/IRM.cc"

//#include "commands/graphic_character_sets/CRM.cc"
//#include "commands/graphic_character_sets/DECAUPSS.cc"
//#include "commands/graphic_character_sets/DECAUPSS.cc"
//#include "commands/graphic_character_sets/DECDLD.cc"
//#include "commands/graphic_character_sets/DECDLDA.cc"
//#include "commands/graphic_character_sets/DECNRCM.cc"
//#include "commands/graphic_character_sets/DECRQUPSS.cc"
//#include "commands/graphic_character_sets/DECSZS.cc"
//#include "commands/graphic_character_sets/LS.cc"
#include "commands/graphic_character_sets/LS0.cc"
#include "commands/graphic_character_sets/LS1.cc"
#include "commands/graphic_character_sets/LS1R.cc"
#include "commands/graphic_character_sets/LS2.cc"
#include "commands/graphic_character_sets/LS2R.cc"
#include "commands/graphic_character_sets/LS3.cc"
#include "commands/graphic_character_sets/LS3R.cc"
//#include "commands/graphic_character_sets/S7C1T.cc"
//#include "commands/graphic_character_sets/S8C1T.cc"
//#include "commands/graphic_character_sets/SCODPCC.cc"
//#include "commands/graphic_character_sets/SCS.cc"
#include "commands/graphic_character_sets/SS2.cc"
#include "commands/graphic_character_sets/SS3.cc"

#include "commands/keyboard_processing/DECARM.cc"
//#include "commands/keyboard_processing/DECARR.cc"
//#include "commands/keyboard_processing/DECBKM.cc"
//#include "commands/keyboard_processing/DECCAPSLK.cc"
//#include "commands/keyboard_processing/DECCKD.cc"
#include "commands/keyboard_processing/DECCKM.cc"
//#include "commands/keyboard_processing/DECEKBD.cc"
//#include "commands/keyboard_processing/DECELF.cc"
//#include "commands/keyboard_processing/DECESKM.cc"
//#include "commands/keyboard_processing/DECHEBM.cc"
//#include "commands/keyboard_processing/DECHEM.cc"
//#include "commands/keyboard_processing/DECKBD.cc"
//#include "commands/keyboard_processing/DECKBUM.cc"
//#include "commands/keyboard_processing/DECKLHIM.cc"
#include "commands/keyboard_processing/DECKPAM.cc"
//#include "commands/keyboard_processing/DECKPM.cc"
#include "commands/keyboard_processing/DECKPNM.cc"
//#include "commands/keyboard_processing/DECLFKC.cc"
//#include "commands/keyboard_processing/DECNAKB.cc"
//#include "commands/keyboard_processing/DECNKM.cc"
//#include "commands/keyboard_processing/DECNUMLK.cc"
//#include "commands/keyboard_processing/DECPAK.cc"
//#include "commands/keyboard_processing/DECPFK.cc"
//#include "commands/keyboard_processing/DECPKA.cc"
//#include "commands/keyboard_processing/DECPKFMR.cc"
//#include "commands/keyboard_processing/DECRPAK.cc"
//#include "commands/keyboard_processing/DECRPFK.cc"
//#include "commands/keyboard_processing/DECRPKT.cc"
//#include "commands/keyboard_processing/DECRQKD.cc"
//#include "commands/keyboard_processing/DECRQKT.cc"
//#include "commands/keyboard_processing/DECRQPKFM.cc"
//#include "commands/keyboard_processing/DECSKCV.cc"
//#include "commands/keyboard_processing/DECSLCK.cc"
//#include "commands/keyboard_processing/DECSMKR.cc"
//#include "commands/keyboard_processing/DECUDK.cc"
//#include "commands/keyboard_processing/KAM.cc"
//#include "commands/keyboard_processing/SCODFK.cc"

//#include "commands/printer/DECIPEM.cc"
//#include "commands/printer/DECPEX.cc"
//#include "commands/printer/DECPFF.cc"
//#include "commands/printer/DECSDPT.cc"
//#include "commands/printer/DECSPPCS.cc"
//#include "commands/printer/DECSPRTT.cc"
#include "commands/printer/MC.cc"

#include "commands/reports/DDD1.cc"
#include "commands/reports/DDD2.cc"
#include "commands/reports/DDD3.cc"
//#include "commands/reports/DECCKSR.cc"
//#include "commands/reports/DECCTR.cc"
//#include "commands/reports/DECDMAC.cc"
//#include "commands/reports/DECINVM.cc"
//#include "commands/reports/DECMSR.cc"
//#include "commands/reports/DECPSR.cc"
//#include "commands/reports/DECRPM.cc"
//#include "commands/reports/DECRPSS.cc"
//#include "commands/reports/DECRQCRA.cc"
//#include "commands/reports/DECRQM.cc"
//#include "commands/reports/DECRQPSR.cc"
//#include "commands/reports/DECRQSS.cc"
//#include "commands/reports/DECRQTSR.cc"
//#include "commands/reports/DECRSPS.cc"
//#include "commands/reports/DECRSTS.cc"
//#include "commands/reports/DECTABSR.cc"
//#include "commands/reports/DECTSR.cc"
#include "commands/reports/DSR.cc"

#include "commands/session_management/DECES.cc"
#include "commands/session_management/DECSPMA.cc"
#include "commands/session_management/DECUS.cc"

//#include "commands/terminal_communications/DECSCP.cc"
//#include "commands/terminal_communications/DECSCS.cc"
//#include "commands/terminal_communications/DECSPP.cc"
//#include "commands/terminal_communications/DECSTRL.cc"
//#include "commands/terminal_communications/DECXRLM.cc"

//#include "commands/terminal_management/CRM.cc"
#include "commands/terminal_management/DA.cc"
#include "commands/terminal_management/DA2.cc"
#include "commands/terminal_management/DA3.cc"
//#include "commands/terminal_management/DECAAM.cc"
//#include "commands/terminal_management/DECANM.cc"
//#include "commands/terminal_management/DECCANSM.cc"
//#include "commands/terminal_management/DECCRTSM.cc"
//#include "commands/terminal_management/DECCRTST.cc"
//#include "commands/terminal_management/DECHWUM.cc"
#include "commands/terminal_management/DECID.cc"
//#include "commands/terminal_management/DECLANS.cc"
//#include "commands/terminal_management/DECLBAN.cc"
//#include "commands/terminal_management/DECLTOD.cc"
//#include "commands/terminal_management/DECNCSM.cc"
//#include "commands/terminal_management/DECPCTERM.cc"
//#include "commands/terminal_management/DECRPM.cc"
#include "commands/terminal_management/DECRST.cc"
//#include "commands/terminal_management/DECRPTUI.cc"
//#include "commands/terminal_management/DECSASD.cc"
//#include "commands/terminal_management/DECSCL.cc"
//#include "commands/terminal_management/DECSEST.cc"
#include "commands/terminal_management/DECSET.cc"
//#include "commands/terminal_management/DECSR.cc"
//#include "commands/terminal_management/DECSRC.cc"
//#include "commands/terminal_management/DECSSDT.cc"
//#include "commands/terminal_management/DECSSL.cc"
//#include "commands/terminal_management/DECSTR.cc"
//#include "commands/terminal_management/DECSTUI.cc"
//#include "commands/terminal_management/DECTID.cc"
//#include "commands/terminal_management/DECTME.cc"
#include "commands/terminal_management/DECTST.cc"
#include "commands/terminal_management/RIS.cc"
#include "commands/terminal_management/RM.cc"
#include "commands/terminal_management/SM.cc"
//#include "commands/terminal_management/SRM.cc"

//#include "commands/terminal_synchronization/DC1.cc"
//#include "commands/terminal_synchronization/DC3.cc"
//#include "commands/terminal_synchronization/DECHDPXM.cc"
//#include "commands/terminal_synchronization/DECMCM.cc"
//#include "commands/terminal_synchronization/DECNULM.cc"
//#include "commands/terminal_synchronization/DECSDDT.cc"
//#include "commands/terminal_synchronization/DECSFC.cc"

#include "commands/text_processing/BS.cc"
#include "commands/text_processing/CBT.cc"
#include "commands/text_processing/CHA.cc"
#include "commands/text_processing/CHT.cc"
#include "commands/text_processing/CNL.cc"
#include "commands/text_processing/CPL.cc"
#include "commands/text_processing/CPR.cc"
#include "commands/text_processing/CR.cc"
#include "commands/text_processing/CTC.cc"
#include "commands/text_processing/CUB.cc"
#include "commands/text_processing/CUD.cc"
#include "commands/text_processing/CUF.cc"
#include "commands/text_processing/CUP.cc"
#include "commands/text_processing/CUU.cc"
#include "commands/text_processing/CVT.cc"
#include "commands/text_processing/DECAWM.cc"
#include "commands/text_processing/DECBI.cc"
//#include "commands/text_processing/DECCIR.cc"
#include "commands/text_processing/DECCOLM.cc"
#include "commands/text_processing/DECFI.cc"
//#include "commands/text_processing/DECLRMM.cc"
//#include "commands/text_processing/DECNCSM.cc"
#include "commands/text_processing/DECOM.cc"
#include "commands/text_processing/DECRC.cc"
//#include "commands/text_processing/DECRLCM.cc"
//#include "commands/text_processing/DECRLM.cc"
#include "commands/text_processing/DECSC.cc"
#include "commands/text_processing/DECSCLM.cc"
//#include "commands/text_processing/DECSCPP.cc"
//#include "commands/text_processing/DECSCUSR.cc"
//#include "commands/text_processing/DECSLPP.cc"
#include "commands/text_processing/DECSLRM.cc"
//#include "commands/text_processing/DECSSCLS.cc"
#include "commands/text_processing/DECST8C.cc"
#include "commands/text_processing/DECSTBM.cc"
#include "commands/text_processing/DECTCEM.cc"
//#include "commands/text_processing/DECXCPR.cc"
#include "commands/text_processing/FF.cc"
#include "commands/text_processing/HPA.cc"
#include "commands/text_processing/HPB.cc"
#include "commands/text_processing/HPR.cc"
#include "commands/text_processing/HT.cc"
#include "commands/text_processing/HTJ.cc"
#include "commands/text_processing/HTS.cc"
#include "commands/text_processing/HVP.cc"
#include "commands/text_processing/IND.cc"
#include "commands/text_processing/LF.cc"
#include "commands/text_processing/LNM.cc"
#include "commands/text_processing/NEL.cc"
#include "commands/text_processing/NP.cc"
#include "commands/text_processing/PP.cc"
#include "commands/text_processing/PPA.cc"
#include "commands/text_processing/PPB.cc"
#include "commands/text_processing/PPR.cc"
#include "commands/text_processing/RI.cc"
//#include "commands/text_processing/SCORC.cc"
//#include "commands/text_processing/SCOSC.cc"
#include "commands/text_processing/TAC.cc"
#include "commands/text_processing/TALE.cc"
#include "commands/text_processing/TATE.cc"
#include "commands/text_processing/TBC.cc"
#include "commands/text_processing/TCC.cc"
#include "commands/text_processing/TSR.cc"
#include "commands/text_processing/VPA.cc"
#include "commands/text_processing/VPB.cc"
#include "commands/text_processing/VPR.cc"
#include "commands/text_processing/VT.cc"
#include "commands/text_processing/VTS.cc"

#include "commands/visual_attributes/DECDHL.cc"
#include "commands/visual_attributes/DECDWL.cc"
#include "commands/visual_attributes/DECSCNM.cc"
#include "commands/visual_attributes/DECSWL.cc"
#include "commands/visual_attributes/SGR.cc"

//#include "commands/window_management/DECARSM.cc"
//#include "commands/window_management/DECFWM.cc"
//#include "commands/window_management/DECHCCM.cc"
//#include "commands/window_management/DECPCCM.cc"
//#include "commands/window_management/DECRPDE.cc"
//#include "commands/window_management/DECRPL.cc"
//#include "commands/window_management/DECRQDE.cc"
//#include "commands/window_management/DECSIN.cc"
//#include "commands/window_management/DECSNLS.cc"
//#include "commands/window_management/DECSWT.cc"
//#include "commands/window_management/DECVCCM.cc"
#include "commands/window_management/SD.cc"
#include "commands/window_management/SL.cc"
#include "commands/window_management/SR.cc"
#include "commands/window_management/SU.cc"

#include "commands/APC.cc"
#include "commands/CMD.cc"
#include "commands/DAQ.cc"
#include "commands/DECALN.cc"
#include "commands/DMI.cc"
#include "commands/DTA.cc"
#include "commands/EA.cc"
#include "commands/EF.cc"
#include "commands/EMI.cc"
#include "commands/ESA.cc"
#include "commands/FNK.cc"
#include "commands/FNT.cc"
#include "commands/GCC.cc"
#include "commands/GSM.cc"
#include "commands/GSS.cc"
#include "commands/IDCS.cc"
#include "commands/IGS.cc"
#include "commands/INT.cc"
#include "commands/JFY.cc"
#include "commands/PEC.cc"
#include "commands/PFS.cc"
#include "commands/PM.cc"
#include "commands/PTX.cc"
#include "commands/QUAD.cc"
#include "commands/REP.cc"
#include "commands/SACS.cc"
#include "commands/SAPV.cc"
#include "commands/SCO.cc"
#include "commands/SCP.cc"
#include "commands/SCS.cc"
#include "commands/SDS.cc"
#include "commands/SEE.cc"
#include "commands/SEF.cc"
#include "commands/SHS.cc"
#include "commands/SIMD.cc"
#include "commands/SLH.cc"
#include "commands/SLL.cc"
#include "commands/SLS.cc"
#include "commands/SPD.cc"
#include "commands/SPH.cc"
#include "commands/SPI.cc"
#include "commands/SPL.cc"
#include "commands/SPQR.cc"
#include "commands/SRCS.cc"
#include "commands/SRS.cc"
#include "commands/SSU.cc"
#include "commands/SSW.cc"
#include "commands/STAB.cc"
#include "commands/SVS.cc"
#include "commands/TSS.cc"

#include "draw/draw.cc"

#include "input/parse.cc"
#include "input/dispatch.cc"
#include "input/dispatch_csi.cc"
#include "input/dispatch_dcs.cc"
#include "input/dispatch_esc.cc"
#include "input/dispatch_osc.cc"

#include "mode/mode.cc"

#include "output/output.cc"
