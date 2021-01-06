// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.ArgInfoType
#include "System/Runtime/Remoting/Messaging/ArgInfoType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x28
  // Autogenerated type: System.Runtime.Remoting.Messaging.ArgInfo
  // [] Offset: FFFFFFFF
  class ArgInfo : public ::Il2CppObject {
    public:
    // private System.Int32[] _paramMap
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* paramMap;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32 _inoutArgCount
    // Size: 0x4
    // Offset: 0x18
    int inoutArgCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: inoutArgCount and: method
    char __padding1[0x4] = {};
    // private System.Reflection.MethodBase _method
    // Size: 0x8
    // Offset: 0x20
    System::Reflection::MethodBase* method;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodBase*) == 0x8);
    // Creating value type constructor for type: ArgInfo
    ArgInfo(::Array<int>* paramMap_ = {}, int inoutArgCount_ = {}, System::Reflection::MethodBase* method_ = {}) noexcept : paramMap{paramMap_}, inoutArgCount{inoutArgCount_}, method{method_} {}
    // public System.Void .ctor(System.Reflection.MethodBase method, System.Runtime.Remoting.Messaging.ArgInfoType type)
    // Offset: 0x11772F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgInfo* New_ctor(System::Reflection::MethodBase* method, System::Runtime::Remoting::Messaging::ArgInfoType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Remoting::Messaging").WithContext("ArgInfo").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgInfo*, creationType>(method, type)));
    }
    // public System.Object[] GetInOutArgs(System.Object[] args)
    // Offset: 0x11774D4
    ::Array<::Il2CppObject*>* GetInOutArgs(::Array<::Il2CppObject*>* args);
  }; // System.Runtime.Remoting.Messaging.ArgInfo
  static check_size<sizeof(ArgInfo), 32 + sizeof(System::Reflection::MethodBase*)> __System_Runtime_Remoting_Messaging_ArgInfoSizeCheck;
  static_assert(sizeof(ArgInfo) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ArgInfo*, "System.Runtime.Remoting.Messaging", "ArgInfo");
#pragma pack(pop)
