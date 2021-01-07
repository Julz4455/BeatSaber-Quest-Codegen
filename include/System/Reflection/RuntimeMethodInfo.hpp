// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.MethodInfo
#include "System/Reflection/MethodInfo.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: RuntimeModule
  class RuntimeModule;
  // Forward declaring type: Module
  class Module;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  // Autogenerated type: System.Reflection.RuntimeMethodInfo
  // [] Offset: FFFFFFFF
  class RuntimeMethodInfo : public System::Reflection::MethodInfo/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // Creating value type constructor for type: RuntimeMethodInfo
    RuntimeMethodInfo() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // System.Reflection.BindingFlags get_BindingFlags()
    // Offset: 0x15D1170
    System::Reflection::BindingFlags get_BindingFlags();
    // private System.RuntimeType get_ReflectedTypeInternal()
    // Offset: 0x15D1210
    System::RuntimeType* get_ReflectedTypeInternal();
    // System.Reflection.RuntimeModule GetRuntimeModule()
    // Offset: 0x15D117C
    System::Reflection::RuntimeModule* GetRuntimeModule();
    // System.String SerializationToString()
    // Offset: 0x15C9468
    ::Il2CppString* SerializationToString();
    // public override System.Reflection.Module get_Module()
    // Offset: 0x15D1178
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.Module MemberInfo::get_Module()
    System::Reflection::Module* get_Module();
    // override System.String FormatNameAndSig(System.Boolean serialization)
    // Offset: 0x15D129C
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.String MethodBase::FormatNameAndSig(System.Boolean serialization)
    ::Il2CppString* FormatNameAndSig(bool serialization);
    // public override System.String ToString()
    // Offset: 0x15D13EC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x15D1484
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // protected System.Void .ctor()
    // Offset: 0x15CC770
    // Implemented from: System.Reflection.MethodInfo
    // Base method: System.Void MethodInfo::.ctor()
    // Base method: System.Void MethodBase::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeMethodInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Reflection").WithContext("RuntimeMethodInfo").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeMethodInfo*, creationType>()));
    }
  }; // System.Reflection.RuntimeMethodInfo
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::RuntimeMethodInfo*, "System.Reflection", "RuntimeMethodInfo");
#pragma pack(pop)
