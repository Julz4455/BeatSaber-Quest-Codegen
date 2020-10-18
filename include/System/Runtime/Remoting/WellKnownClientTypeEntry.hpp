// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.TypeEntry
#include "System/Runtime/Remoting/TypeEntry.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Autogenerated type: System.Runtime.Remoting.WellKnownClientTypeEntry
  class WellKnownClientTypeEntry : public System::Runtime::Remoting::TypeEntry {
    public:
    // private System.Type obj_type
    // Offset: 0x20
    System::Type* obj_type;
    // private System.String obj_url
    // Offset: 0x28
    ::Il2CppString* obj_url;
    // private System.String app_url
    // Offset: 0x30
    ::Il2CppString* app_url;
    // public System.Void .ctor(System.String typeName, System.String assemblyName, System.String objectUrl)
    // Offset: 0x1506A88
    static WellKnownClientTypeEntry* New_ctor(::Il2CppString* typeName, ::Il2CppString* assemblyName, ::Il2CppString* objectUrl);
    // public System.String get_ApplicationUrl()
    // Offset: 0x1506BF0
    ::Il2CppString* get_ApplicationUrl();
    // public System.Type get_ObjectType()
    // Offset: 0x1506BF8
    System::Type* get_ObjectType();
    // public System.String get_ObjectUrl()
    // Offset: 0x1506C00
    ::Il2CppString* get_ObjectUrl();
    // public override System.String ToString()
    // Offset: 0x1506C08
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Runtime.Remoting.WellKnownClientTypeEntry
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::WellKnownClientTypeEntry*, "System.Runtime.Remoting", "WellKnownClientTypeEntry");
#pragma pack(pop)
