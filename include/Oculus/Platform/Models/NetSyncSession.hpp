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
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.NetSyncSession
  class NetSyncSession : public ::Il2CppObject {
    public:
    // public readonly System.Int64 ConnectionId
    // Offset: 0x10
    int64_t ConnectionId;
    // public readonly System.Boolean Muted
    // Offset: 0x18
    bool Muted;
    // public readonly System.UInt64 SessionId
    // Offset: 0x20
    uint64_t SessionId;
    // public readonly System.UInt64 UserId
    // Offset: 0x28
    uint64_t UserId;
    // public readonly System.String VoipGroup
    // Offset: 0x30
    ::Il2CppString* VoipGroup;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x136B3F4
    static NetSyncSession* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.NetSyncSession
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::NetSyncSession*, "Oculus.Platform.Models", "NetSyncSession");
#pragma pack(pop)
