// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x20
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveTyped
  // [] Offset: FFFFFFFF
  class MemberPrimitiveTyped : public ::Il2CppObject {
    public:
    // System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE primitiveTypeEnum
    // Size: 0x4
    // Offset: 0x10
    System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE primitiveTypeEnum;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE) == 0x4);
    // Padding between fields: primitiveTypeEnum and: value
    char __padding0[0x4] = {};
    // System.Object value
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: MemberPrimitiveTyped
    MemberPrimitiveTyped(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE primitiveTypeEnum_ = {}, ::Il2CppObject* value_ = {}) noexcept : primitiveTypeEnum{primitiveTypeEnum_}, value{value_} {}
    // System.Void Set(System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE primitiveTypeEnum, System.Object value)
    // Offset: 0x12F2C20
    void Set(System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE primitiveTypeEnum, ::Il2CppObject* value);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x12F2C30
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x12F2C94
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0x12F307C
    void Dump();
    // System.Void .ctor()
    // Offset: 0x12F2C18
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemberPrimitiveTyped* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::Serialization::Formatters::Binary").WithContext("MemberPrimitiveTyped").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemberPrimitiveTyped*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.MemberPrimitiveTyped
  static check_size<sizeof(MemberPrimitiveTyped), 24 + sizeof(::Il2CppObject*)> __System_Runtime_Serialization_Formatters_Binary_MemberPrimitiveTypedSizeCheck;
  static_assert(sizeof(MemberPrimitiveTyped) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped*, "System.Runtime.Serialization.Formatters.Binary", "MemberPrimitiveTyped");
#pragma pack(pop)
