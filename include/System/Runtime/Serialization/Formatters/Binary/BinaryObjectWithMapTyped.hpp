// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: BinaryTypeEnum
  struct BinaryTypeEnum;
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped
  class BinaryObjectWithMapTyped : public ::Il2CppObject {
    public:
    // System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum
    // Offset: 0x10
    System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;
    // System.Int32 objectId
    // Offset: 0x14
    int objectId;
    // System.String name
    // Offset: 0x18
    ::Il2CppString* name;
    // System.Int32 numMembers
    // Offset: 0x20
    int numMembers;
    // System.String[] memberNames
    // Offset: 0x28
    ::Array<::Il2CppString*>* memberNames;
    // System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA
    // Offset: 0x30
    ::Array<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA;
    // System.Object[] typeInformationA
    // Offset: 0x38
    ::Array<::Il2CppObject*>* typeInformationA;
    // System.Int32[] memberAssemIds
    // Offset: 0x40
    ::Array<int>* memberAssemIds;
    // System.Int32 assemId
    // Offset: 0x48
    int assemId;
    // System.Void .ctor(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
    // Offset: 0x150CC74
    static BinaryObjectWithMapTyped* New_ctor(System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);
    // System.Void Set(System.Int32 objectId, System.String name, System.Int32 numMembers, System.String[] memberNames, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA, System.Object[] typeInformationA, System.Int32[] memberAssemIds, System.Int32 assemId)
    // Offset: 0x150CCA0
    void Set(int objectId, ::Il2CppString* name, int numMembers, ::Array<::Il2CppString*>* memberNames, ::Array<System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>* binaryTypeEnumA, ::Array<::Il2CppObject*>* typeInformationA, ::Array<int>* memberAssemIds, int assemId);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x150CD5C
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x150CF00
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // System.Void .ctor()
    // Offset: 0x150CC6C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BinaryObjectWithMapTyped* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectWithMapTyped");
#pragma pack(pop)
