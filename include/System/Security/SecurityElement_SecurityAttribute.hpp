// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.SecurityElement
#include "System/Security/SecurityElement.hpp"
// Completed includes
// Type namespace: System.Security
namespace System::Security {
  // Autogenerated type: System.Security.SecurityElement/SecurityAttribute
  class SecurityElement::SecurityAttribute : public ::Il2CppObject {
    public:
    // private System.String _name
    // Offset: 0x10
    ::Il2CppString* name;
    // private System.String _value
    // Offset: 0x18
    ::Il2CppString* value;
    // public System.Void .ctor(System.String name, System.String value)
    // Offset: 0x1439634
    static SecurityElement::SecurityAttribute* New_ctor(::Il2CppString* name, ::Il2CppString* value);
    // public System.String get_Name()
    // Offset: 0x143AA98
    ::Il2CppString* get_Name();
    // public System.String get_Value()
    // Offset: 0x143AAA0
    ::Il2CppString* get_Value();
  }; // System.Security.SecurityElement/SecurityAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::SecurityElement::SecurityAttribute*, "System.Security", "SecurityElement/SecurityAttribute");
#pragma pack(pop)
