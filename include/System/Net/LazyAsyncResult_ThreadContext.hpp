// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.LazyAsyncResult
#include "System/Net/LazyAsyncResult.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.LazyAsyncResult/ThreadContext
  class LazyAsyncResult::ThreadContext : public ::Il2CppObject {
    public:
    // System.Int32 m_NestedIOCount
    // Offset: 0x10
    int m_NestedIOCount;
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_NestedIOCount;
    }
    // public System.Void .ctor()
    // Offset: 0x14720EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LazyAsyncResult::ThreadContext* New_ctor();
  }; // System.Net.LazyAsyncResult/ThreadContext
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::LazyAsyncResult::ThreadContext*, "System.Net", "LazyAsyncResult/ThreadContext");
#pragma pack(pop)
