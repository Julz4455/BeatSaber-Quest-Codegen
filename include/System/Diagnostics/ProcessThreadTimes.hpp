// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Autogenerated type: System.Diagnostics.ProcessThreadTimes
  class ProcessThreadTimes : public ::Il2CppObject {
    public:
    // System.Int64 create
    // Offset: 0x10
    int64_t create;
    // System.Int64 exit
    // Offset: 0x18
    int64_t exit;
    // System.Int64 kernel
    // Offset: 0x20
    int64_t kernel;
    // System.Int64 user
    // Offset: 0x28
    int64_t user;
    // public System.TimeSpan get_TotalProcessorTime()
    // Offset: 0x172A7A4
    System::TimeSpan get_TotalProcessorTime();
    // public System.Void .ctor()
    // Offset: 0x172A580
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ProcessThreadTimes* New_ctor();
  }; // System.Diagnostics.ProcessThreadTimes
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::ProcessThreadTimes*, "System.Diagnostics", "ProcessThreadTimes");
#pragma pack(pop)
