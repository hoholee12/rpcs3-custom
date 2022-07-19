/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Exegesis Tables                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


static const char *X86PfmCounterNames[] = {
  "cpu_clk_unhalted", // 0
  "cycles_not_in_halt", // 1
  "dispatched_fpu:pipe0", // 2
  "dispatched_fpu:pipe1", // 3
  "dispatched_fpu_ops:ops_pipe0 + dispatched_fpu_ops:ops_dual_pipe0", // 4
  "dispatched_fpu_ops:ops_pipe1 + dispatched_fpu_ops:ops_dual_pipe1", // 5
  "dispatched_fpu_ops:ops_pipe2 + dispatched_fpu_ops:ops_dual_pipe2", // 6
  "dispatched_fpu_ops:ops_pipe3 + dispatched_fpu_ops:ops_dual_pipe3", // 7
  "div_op_count", // 8
  "fpu_pipe_assignment:total0", // 9
  "fpu_pipe_assignment:total1", // 10
  "fpu_pipe_assignment:total2", // 11
  "fpu_pipe_assignment:total3", // 12
  "ls_dispatch:ld_dispatch", // 13
  "ls_dispatch:ld_dispatch + ls_dispatch:store_dispatch", // 14
  "ls_dispatch:store_dispatch", // 15
  "ops_type_dispatched_from_decoder:fp_disp_retire_mode", // 16
  "ops_type_dispatched_from_decoder:int_disp_retire_mode", // 17
  "retired_ops", // 18
  "retired_uops", // 19
  "unhalted_core_cycles", // 20
  "uops_dispatched_port:port_0", // 21
  "uops_dispatched_port:port_1", // 22
  "uops_dispatched_port:port_2", // 23
  "uops_dispatched_port:port_2 + uops_dispatched_port:port_3", // 24
  "uops_dispatched_port:port_3", // 25
  "uops_dispatched_port:port_4", // 26
  "uops_dispatched_port:port_5", // 27
  "uops_dispatched_port:port_6", // 28
  "uops_dispatched_port:port_7", // 29
  "uops_executed_port:port_0", // 30
  "uops_executed_port:port_1", // 31
  "uops_executed_port:port_2", // 32
  "uops_executed_port:port_3", // 33
  "uops_executed_port:port_4", // 34
  "uops_executed_port:port_5", // 35
  "uops_executed_port:port_6", // 36
  "uops_executed_port:port_7", // 37
  "uops_issued:any", // 38
  "uops_retired", // 39
  "uops_retired:all", // 40
  "uops_retired:any", // 41
};

static const PfmCountersInfo::IssueCounter X86PfmIssueCounters[] = {
  { X86PfmCounterNames[4], "PdFPU0"},
  { X86PfmCounterNames[5], "PdFPU1"},
  { X86PfmCounterNames[6], "PdFPU2"},
  { X86PfmCounterNames[7], "PdFPU3"},
  { X86PfmCounterNames[4], "SrFPU0"},
  { X86PfmCounterNames[5], "SrFPU1"},
  { X86PfmCounterNames[6], "SrFPU2"},
  { X86PfmCounterNames[30], "BWPort0"},
  { X86PfmCounterNames[31], "BWPort1"},
  { X86PfmCounterNames[32], "BWPort2"},
  { X86PfmCounterNames[33], "BWPort3"},
  { X86PfmCounterNames[34], "BWPort4"},
  { X86PfmCounterNames[35], "BWPort5"},
  { X86PfmCounterNames[36], "BWPort6"},
  { X86PfmCounterNames[37], "BWPort7"},
  { X86PfmCounterNames[2], "BtFPU0"},
  { X86PfmCounterNames[3], "BtFPU1"},
  { X86PfmCounterNames[2], "JFPU0"},
  { X86PfmCounterNames[3], "JFPU1"},
  { X86PfmCounterNames[30], "HWPort0"},
  { X86PfmCounterNames[31], "HWPort1"},
  { X86PfmCounterNames[32], "HWPort2"},
  { X86PfmCounterNames[33], "HWPort3"},
  { X86PfmCounterNames[34], "HWPort4"},
  { X86PfmCounterNames[35], "HWPort5"},
  { X86PfmCounterNames[36], "HWPort6"},
  { X86PfmCounterNames[37], "HWPort7"},
  { X86PfmCounterNames[21], "SBPort0"},
  { X86PfmCounterNames[22], "SBPort1"},
  { X86PfmCounterNames[24], "SBPort23"},
  { X86PfmCounterNames[26], "SBPort4"},
  { X86PfmCounterNames[27], "SBPort5"},
  { X86PfmCounterNames[21], "SKLPort0"},
  { X86PfmCounterNames[22], "SKLPort1"},
  { X86PfmCounterNames[23], "SKLPort2"},
  { X86PfmCounterNames[25], "SKLPort3"},
  { X86PfmCounterNames[26], "SKLPort4"},
  { X86PfmCounterNames[27], "SKLPort5"},
  { X86PfmCounterNames[28], "SKLPort6"},
  { X86PfmCounterNames[29], "SKLPort7"},
  { X86PfmCounterNames[21], "SKXPort0"},
  { X86PfmCounterNames[22], "SKXPort1"},
  { X86PfmCounterNames[23], "SKXPort2"},
  { X86PfmCounterNames[25], "SKXPort3"},
  { X86PfmCounterNames[26], "SKXPort4"},
  { X86PfmCounterNames[27], "SKXPort5"},
  { X86PfmCounterNames[28], "SKXPort6"},
  { X86PfmCounterNames[29], "SKXPort7"},
  { X86PfmCounterNames[9], "ZnFPU0"},
  { X86PfmCounterNames[10], "ZnFPU1"},
  { X86PfmCounterNames[11], "ZnFPU2"},
  { X86PfmCounterNames[12], "ZnFPU3"},
  { X86PfmCounterNames[8], "ZnDivider"},
  { X86PfmCounterNames[14], "Zn2AGU"},
  { X86PfmCounterNames[8], "Zn2Divider"},
  { X86PfmCounterNames[17], "Zn3Int"},
  { X86PfmCounterNames[16], "Zn3FPU"},
  { X86PfmCounterNames[13], "Zn3Load"},
  { X86PfmCounterNames[15], "Zn3Store"},
  { X86PfmCounterNames[8], "Zn3Divider"},
};

static const PfmCountersInfo X86AtomPfmCounters = {
  X86PfmCounterNames[20],  // Cycle counter
  X86PfmCounterNames[41],  // Uops counter
  nullptr,  // No issue counters.
  0
};

static const PfmCountersInfo X86BdVer2PfmCounters = {
  X86PfmCounterNames[0],  // Cycle counter
  X86PfmCounterNames[19],  // Uops counter
  X86PfmIssueCounters + 0, 4 // Issue counters.
};

static const PfmCountersInfo X86BdVer3PfmCounters = {
  X86PfmCounterNames[0],  // Cycle counter
  X86PfmCounterNames[19],  // Uops counter
  X86PfmIssueCounters + 4, 3 // Issue counters.
};

static const PfmCountersInfo X86BroadwellPfmCounters = {
  X86PfmCounterNames[20],  // Cycle counter
  X86PfmCounterNames[38],  // Uops counter
  X86PfmIssueCounters + 7, 8 // Issue counters.
};

static const PfmCountersInfo X86BtVer1PfmCounters = {
  X86PfmCounterNames[0],  // Cycle counter
  X86PfmCounterNames[19],  // Uops counter
  X86PfmIssueCounters + 15, 2 // Issue counters.
};

static const PfmCountersInfo X86BtVer2PfmCounters = {
  X86PfmCounterNames[0],  // Cycle counter
  X86PfmCounterNames[19],  // Uops counter
  X86PfmIssueCounters + 17, 2 // Issue counters.
};

static const PfmCountersInfo X86CorePfmCounters = {
  X86PfmCounterNames[20],  // Cycle counter
  X86PfmCounterNames[41],  // Uops counter
  nullptr,  // No issue counters.
  0
};

static const PfmCountersInfo X86DefaultAMDPfmCounters = {
  X86PfmCounterNames[0],  // Cycle counter
  X86PfmCounterNames[19],  // Uops counter
  nullptr,  // No issue counters.
  0
};

static const PfmCountersInfo X86DefaultPfmCounters = {
  nullptr,  // No cycle counter.
  nullptr,  // No uops counter.
  nullptr,  // No issue counters.
  0
};

static const PfmCountersInfo X86HaswellPfmCounters = {
  X86PfmCounterNames[20],  // Cycle counter
  X86PfmCounterNames[38],  // Uops counter
  X86PfmIssueCounters + 19, 8 // Issue counters.
};

static const PfmCountersInfo X86KnightPfmCounters = {
  X86PfmCounterNames[20],  // Cycle counter
  X86PfmCounterNames[40],  // Uops counter
  nullptr,  // No issue counters.
  0
};

static const PfmCountersInfo X86PentiumPfmCounters = {
  X86PfmCounterNames[0],  // Cycle counter
  X86PfmCounterNames[39],  // Uops counter
  nullptr,  // No issue counters.
  0
};

static const PfmCountersInfo X86SLMPfmCounters = {
  X86PfmCounterNames[20],  // Cycle counter
  X86PfmCounterNames[41],  // Uops counter
  nullptr,  // No issue counters.
  0
};

static const PfmCountersInfo X86SandyBridgePfmCounters = {
  X86PfmCounterNames[20],  // Cycle counter
  X86PfmCounterNames[38],  // Uops counter
  X86PfmIssueCounters + 27, 5 // Issue counters.
};

static const PfmCountersInfo X86SkylakeClientPfmCounters = {
  X86PfmCounterNames[20],  // Cycle counter
  X86PfmCounterNames[38],  // Uops counter
  X86PfmIssueCounters + 32, 8 // Issue counters.
};

static const PfmCountersInfo X86SkylakeServerPfmCounters = {
  X86PfmCounterNames[20],  // Cycle counter
  X86PfmCounterNames[38],  // Uops counter
  X86PfmIssueCounters + 40, 8 // Issue counters.
};

static const PfmCountersInfo X86ZnVer1PfmCounters = {
  X86PfmCounterNames[1],  // Cycle counter
  X86PfmCounterNames[19],  // Uops counter
  X86PfmIssueCounters + 48, 5 // Issue counters.
};

static const PfmCountersInfo X86ZnVer2PfmCounters = {
  X86PfmCounterNames[1],  // Cycle counter
  X86PfmCounterNames[19],  // Uops counter
  X86PfmIssueCounters + 53, 2 // Issue counters.
};

static const PfmCountersInfo X86ZnVer3PfmCounters = {
  X86PfmCounterNames[1],  // Cycle counter
  X86PfmCounterNames[18],  // Uops counter
  X86PfmIssueCounters + 55, 5 // Issue counters.
};

// Sorted (by CpuName) array of pfm counters.
static const CpuAndPfmCounters X86CpuPfmCounters[] = {
  { "", &X86DefaultPfmCounters },
  { "amdfam10", &X86DefaultAMDPfmCounters },
  { "athlon", &X86DefaultAMDPfmCounters },
  { "athlon-4", &X86DefaultAMDPfmCounters },
  { "athlon-fx", &X86DefaultAMDPfmCounters },
  { "athlon-mp", &X86DefaultAMDPfmCounters },
  { "athlon-tbird", &X86DefaultAMDPfmCounters },
  { "athlon-xp", &X86DefaultAMDPfmCounters },
  { "athlon64", &X86DefaultAMDPfmCounters },
  { "athlon64-sse3", &X86DefaultAMDPfmCounters },
  { "atom", &X86AtomPfmCounters },
  { "barcelona", &X86DefaultAMDPfmCounters },
  { "bdver1", &X86BdVer2PfmCounters },
  { "bdver2", &X86BdVer2PfmCounters },
  { "bdver3", &X86BdVer3PfmCounters },
  { "bdver4", &X86BdVer3PfmCounters },
  { "bonnell", &X86AtomPfmCounters },
  { "broadwell", &X86BroadwellPfmCounters },
  { "btver1", &X86BtVer1PfmCounters },
  { "btver2", &X86BtVer2PfmCounters },
  { "cannonlake", &X86SkylakeServerPfmCounters },
  { "cascadelake", &X86SkylakeServerPfmCounters },
  { "core2", &X86CorePfmCounters },
  { "corei7", &X86CorePfmCounters },
  { "goldmont", &X86SLMPfmCounters },
  { "goldmont-plus", &X86SLMPfmCounters },
  { "haswell", &X86HaswellPfmCounters },
  { "icelake-client", &X86SkylakeServerPfmCounters },
  { "icelake-server", &X86SkylakeServerPfmCounters },
  { "ivybridge", &X86SandyBridgePfmCounters },
  { "k8", &X86DefaultAMDPfmCounters },
  { "k8-sse3", &X86DefaultAMDPfmCounters },
  { "knl", &X86KnightPfmCounters },
  { "knm", &X86KnightPfmCounters },
  { "nehalem", &X86CorePfmCounters },
  { "opteron", &X86DefaultAMDPfmCounters },
  { "opteron-sse3", &X86DefaultAMDPfmCounters },
  { "penryn", &X86CorePfmCounters },
  { "pentium-m", &X86PentiumPfmCounters },
  { "pentium2", &X86PentiumPfmCounters },
  { "pentium3", &X86PentiumPfmCounters },
  { "pentium3m", &X86PentiumPfmCounters },
  { "pentiumpro", &X86PentiumPfmCounters },
  { "prescott", &X86CorePfmCounters },
  { "sandybridge", &X86SandyBridgePfmCounters },
  { "silvermont", &X86SLMPfmCounters },
  { "skylake", &X86SkylakeClientPfmCounters },
  { "skylake-avx512", &X86SkylakeServerPfmCounters },
  { "tremont", &X86SLMPfmCounters },
  { "westmere", &X86CorePfmCounters },
  { "yonah", &X86CorePfmCounters },
  { "znver1", &X86ZnVer1PfmCounters },
  { "znver2", &X86ZnVer2PfmCounters },
  { "znver3", &X86ZnVer3PfmCounters },
};

