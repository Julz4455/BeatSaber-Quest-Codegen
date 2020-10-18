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
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Autogenerated type: System.Diagnostics.DebuggerDisplayAttribute
  class DebuggerDisplayAttribute : public System::Attribute {
    public:
    // private System.String name
    // Offset: 0x10
    ::Il2CppString* name;
    // private System.String value
    // Offset: 0x18
    ::Il2CppString* value;
    // private System.String type
    // Offset: 0x20
    ::Il2CppString* type;
    // public System.Void .ctor(System.String value)
    // Offset: 0x19C8C74
    static DebuggerDisplayAttribute* New_ctor(::Il2CppString* value);
  }; // System.Diagnostics.DebuggerDisplayAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DebuggerDisplayAttribute*, "System.Diagnostics", "DebuggerDisplayAttribute");
#pragma pack(pop)
