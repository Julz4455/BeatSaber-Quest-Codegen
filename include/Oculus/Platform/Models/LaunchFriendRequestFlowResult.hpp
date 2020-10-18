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
  // Autogenerated type: Oculus.Platform.Models.LaunchFriendRequestFlowResult
  class LaunchFriendRequestFlowResult : public ::Il2CppObject {
    public:
    // public readonly System.Boolean DidCancel
    // Offset: 0x10
    bool DidCancel;
    // public readonly System.Boolean DidSendRequest
    // Offset: 0x11
    bool DidSendRequest;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1364674
    static LaunchFriendRequestFlowResult* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.LaunchFriendRequestFlowResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LaunchFriendRequestFlowResult*, "Oculus.Platform.Models", "LaunchFriendRequestFlowResult");
#pragma pack(pop)
