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
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.DelegateData
  class DelegateData : public ::Il2CppObject {
    public:
    // public System.Type target_type
    // Offset: 0x10
    System::Type* target_type;
    // public System.String method_name
    // Offset: 0x18
    ::Il2CppString* method_name;
    // public System.Boolean curried_first_arg
    // Offset: 0x20
    bool curried_first_arg;
    // public System.Void .ctor()
    // Offset: 0x19C7244
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DelegateData* New_ctor();
  }; // System.DelegateData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::DelegateData*, "System", "DelegateData");
#pragma pack(pop)
