// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: ArgInfoType
  struct ArgInfoType;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.ArgInfo
  class ArgInfo : public ::Il2CppObject {
    public:
    // private System.Int32[] _paramMap
    // Offset: 0x10
    ::Array<int>* paramMap;
    // private System.Int32 _inoutArgCount
    // Offset: 0x18
    int inoutArgCount;
    // private System.Reflection.MethodBase _method
    // Offset: 0x20
    System::Reflection::MethodBase* method;
    // public System.Void .ctor(System.Reflection.MethodBase method, System.Runtime.Remoting.Messaging.ArgInfoType type)
    // Offset: 0x12A5124
    static ArgInfo* New_ctor(System::Reflection::MethodBase* method, System::Runtime::Remoting::Messaging::ArgInfoType type);
    // public System.Object[] GetInOutArgs(System.Object[] args)
    // Offset: 0x12A5308
    ::Array<::Il2CppObject*>* GetInOutArgs(::Array<::Il2CppObject*>* args);
  }; // System.Runtime.Remoting.Messaging.ArgInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ArgInfo*, "System.Runtime.Remoting.Messaging", "ArgInfo");
#pragma pack(pop)
