#ifndef UPMEM_PROFILER_ABI_INSTRUCTION_OP_CODE_H_
#define UPMEM_PROFILER_ABI_INSTRUCTION_OP_CODE_H_

namespace upmem_profiler::abi::instruction {

enum OpCode {
  ACQUIRE,
  RELEASE,

  ADD,
  ADDC,
  AND,
  ANDN,
  ASR,
  CAO,
  CLO,
  CLS,
  CLZ,
  CMPB4,
  DIV_STEP,
  EXTSB,
  EXTSH,
  EXTUB,
  EXTUH,
  LSL,
  LSL_ADD,
  LSL_SUB,
  LSL1,
  LSL1X,
  LSLX,
  LSR,
  LSR_ADD,
  LSR1,
  LSR1X,
  LSRX,
  MUL_SH_SH,
  MUL_SH_SL,
  MUL_SH_UH,
  MUL_SH_UL,
  MUL_SL_SH,
  MUL_SL_SL,
  MUL_SL_UH,
  MUL_SL_UL,
  MUL_STEP,
  MUL_UH_UH,
  MUL_UH_UL,
  MUL_UL_UH,
  MUL_UL_UL,
  NAND,
  NOR,
  NXOR,
  OR,
  ORN,
  ROL,
  ROL_ADD,
  ROR,
  RSUB,
  RSUBC,
  SUB,
  SUBC,
  XOR,

  BOOT,
  RESUME,
  STOP,

  CALL,

  FAULT,
  NOP,
  SATS,
  MOVD,
  SWAPD,

  HASH,
  TIME,
  TIME_CFG,

  LBS,
  LBU,
  LD,
  LHS,
  LHU,
  LW,

  SB,
  SB_ID,
  SD,
  SD_ID,
  SH,
  SH_ID,
  SW,
  SW_ID,

  LDMA,
  LDMAI,
  SDMA
};

}

#endif