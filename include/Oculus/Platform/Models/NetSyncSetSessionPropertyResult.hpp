// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: NetSyncSession
  class NetSyncSession;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.NetSyncSetSessionPropertyResult
  class NetSyncSetSessionPropertyResult : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.Models.NetSyncSession Session
    // Offset: 0x10
    Oculus::Platform::Models::NetSyncSession* Session;
    // Creating conversion operator: operator Oculus::Platform::Models::NetSyncSession*
    constexpr operator Oculus::Platform::Models::NetSyncSession*() const noexcept {
      return Session;
    }
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1366F74
    static NetSyncSetSessionPropertyResult* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.NetSyncSetSessionPropertyResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::NetSyncSetSessionPropertyResult*, "Oculus.Platform.Models", "NetSyncSetSessionPropertyResult");
#pragma pack(pop)
