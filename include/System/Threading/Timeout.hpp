// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  // Autogenerated type: System.Threading.Timeout
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D39CA0
  class Timeout : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Timeout
    Timeout() noexcept {}
    // [ComVisibleAttribute] Offset: 0xD3EDAC
    // Get static field: static public readonly System.TimeSpan InfiniteTimeSpan
    static System::TimeSpan _get_InfiniteTimeSpan();
    // Set static field: static public readonly System.TimeSpan InfiniteTimeSpan
    static void _set_InfiniteTimeSpan(System::TimeSpan value);
    // static private System.Void .cctor()
    // Offset: 0x1D1DDE0
    static void _cctor();
  }; // System.Threading.Timeout
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Timeout*, "System.Threading", "Timeout");
#pragma pack(pop)
