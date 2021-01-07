// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x10
  // Autogenerated type: System.Runtime.Serialization.SerializationBinder
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3AA0C
  class SerializationBinder : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SerializationBinder
    SerializationBinder() noexcept {}
    // public System.Void BindToName(System.Type serializedType, out System.String assemblyName, out System.String typeName)
    // Offset: 0x1442D30
    void BindToName(System::Type* serializedType, ::Il2CppString*& assemblyName, ::Il2CppString*& typeName);
    // public System.Type BindToType(System.String assemblyName, System.String typeName)
    // Offset: 0xFFFFFFFF
    System::Type* BindToType(::Il2CppString* assemblyName, ::Il2CppString* typeName);
    // protected System.Void .ctor()
    // Offset: 0x1442D68
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationBinder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization").WithContext("SerializationBinder").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationBinder*, creationType>()));
    }
  }; // System.Runtime.Serialization.SerializationBinder
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationBinder*, "System.Runtime.Serialization", "SerializationBinder");
#pragma pack(pop)
