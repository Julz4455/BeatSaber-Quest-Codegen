// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DateTime
#include "System/DateTime.hpp"
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
  // Autogenerated type: Oculus.Platform.Models.AchievementProgress
  class AchievementProgress : public ::Il2CppObject {
    public:
    // public readonly System.String Bitfield
    // Offset: 0x10
    ::Il2CppString* Bitfield;
    // public readonly System.UInt64 Count
    // Offset: 0x18
    uint64_t Count;
    // public readonly System.Boolean IsUnlocked
    // Offset: 0x20
    bool IsUnlocked;
    // public readonly System.String Name
    // Offset: 0x28
    ::Il2CppString* Name;
    // public readonly System.DateTime UnlockTime
    // Offset: 0x30
    System::DateTime UnlockTime;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x136A73C
    static AchievementProgress* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.AchievementProgress
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AchievementProgress*, "Oculus.Platform.Models", "AchievementProgress");
#pragma pack(pop)
