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
  // Autogenerated type: Oculus.Platform.Models.AssetFileDeleteResult
  class AssetFileDeleteResult : public ::Il2CppObject {
    public:
    // public readonly System.UInt64 AssetFileId
    // Offset: 0x10
    uint64_t AssetFileId;
    // public readonly System.UInt64 AssetId
    // Offset: 0x18
    uint64_t AssetId;
    // public readonly System.String Filepath
    // Offset: 0x20
    ::Il2CppString* Filepath;
    // public readonly System.Boolean Success
    // Offset: 0x28
    bool Success;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x1362574
    static AssetFileDeleteResult* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.AssetFileDeleteResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AssetFileDeleteResult*, "Oculus.Platform.Models", "AssetFileDeleteResult");
#pragma pack(pop)
