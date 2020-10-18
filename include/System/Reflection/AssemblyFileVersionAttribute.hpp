// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.AssemblyFileVersionAttribute
  class AssemblyFileVersionAttribute : public System::Attribute {
    public:
    // private System.String _version
    // Offset: 0x10
    ::Il2CppString* version;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return version;
    }
    // public System.Void .ctor(System.String version)
    // Offset: 0x1AB8E14
    static AssemblyFileVersionAttribute* New_ctor(::Il2CppString* version);
  }; // System.Reflection.AssemblyFileVersionAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyFileVersionAttribute*, "System.Reflection", "AssemblyFileVersionAttribute");
#pragma pack(pop)
