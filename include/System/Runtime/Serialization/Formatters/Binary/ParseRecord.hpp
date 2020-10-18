// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalParseTypeE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalObjectTypeE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalArrayTypeE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalMemberTypeE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE
#include "System/Runtime/Serialization/Formatters/Binary/InternalMemberValueE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE
#include "System/Runtime/Serialization/Formatters/Binary/InternalObjectPositionE.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE
#include "System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: ReadObjectInfo
  class ReadObjectInfo;
  // Forward declaring type: PrimitiveArray
  class PrimitiveArray;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ParseRecord
  class ParseRecord : public ::Il2CppObject {
    public:
    // System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE PRparseTypeEnum
    // Offset: 0x10
    System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE PRparseTypeEnum;
    // System.Runtime.Serialization.Formatters.Binary.InternalObjectTypeE PRobjectTypeEnum
    // Offset: 0x14
    System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE PRobjectTypeEnum;
    // System.Runtime.Serialization.Formatters.Binary.InternalArrayTypeE PRarrayTypeEnum
    // Offset: 0x18
    System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE PRarrayTypeEnum;
    // System.Runtime.Serialization.Formatters.Binary.InternalMemberTypeE PRmemberTypeEnum
    // Offset: 0x1C
    System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE PRmemberTypeEnum;
    // System.Runtime.Serialization.Formatters.Binary.InternalMemberValueE PRmemberValueEnum
    // Offset: 0x20
    System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE PRmemberValueEnum;
    // System.Runtime.Serialization.Formatters.Binary.InternalObjectPositionE PRobjectPositionEnum
    // Offset: 0x24
    System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE PRobjectPositionEnum;
    // System.String PRname
    // Offset: 0x28
    ::Il2CppString* PRname;
    // System.String PRvalue
    // Offset: 0x30
    ::Il2CppString* PRvalue;
    // System.Object PRvarValue
    // Offset: 0x38
    ::Il2CppObject* PRvarValue;
    // System.String PRkeyDt
    // Offset: 0x40
    ::Il2CppString* PRkeyDt;
    // System.Type PRdtType
    // Offset: 0x48
    System::Type* PRdtType;
    // System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE PRdtTypeCode
    // Offset: 0x50
    System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE PRdtTypeCode;
    // System.Boolean PRisEnum
    // Offset: 0x54
    bool PRisEnum;
    // System.Int64 PRobjectId
    // Offset: 0x58
    int64_t PRobjectId;
    // System.Int64 PRidRef
    // Offset: 0x60
    int64_t PRidRef;
    // System.String PRarrayElementTypeString
    // Offset: 0x68
    ::Il2CppString* PRarrayElementTypeString;
    // System.Type PRarrayElementType
    // Offset: 0x70
    System::Type* PRarrayElementType;
    // System.Boolean PRisArrayVariant
    // Offset: 0x78
    bool PRisArrayVariant;
    // System.Runtime.Serialization.Formatters.Binary.InternalPrimitiveTypeE PRarrayElementTypeCode
    // Offset: 0x7C
    System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE PRarrayElementTypeCode;
    // System.Int32 PRrank
    // Offset: 0x80
    int PRrank;
    // System.Int32[] PRlengthA
    // Offset: 0x88
    ::Array<int>* PRlengthA;
    // System.Int32[] PRpositionA
    // Offset: 0x90
    ::Array<int>* PRpositionA;
    // System.Int32[] PRlowerBoundA
    // Offset: 0x98
    ::Array<int>* PRlowerBoundA;
    // System.Int32[] PRupperBoundA
    // Offset: 0xA0
    ::Array<int>* PRupperBoundA;
    // System.Int32[] PRindexMap
    // Offset: 0xA8
    ::Array<int>* PRindexMap;
    // System.Int32 PRmemberIndex
    // Offset: 0xB0
    int PRmemberIndex;
    // System.Int32 PRlinearlength
    // Offset: 0xB4
    int PRlinearlength;
    // System.Int32[] PRrectangularMap
    // Offset: 0xB8
    ::Array<int>* PRrectangularMap;
    // System.Boolean PRisLowerBound
    // Offset: 0xC0
    bool PRisLowerBound;
    // System.Int64 PRtopId
    // Offset: 0xC8
    int64_t PRtopId;
    // System.Int64 PRheaderId
    // Offset: 0xD0
    int64_t PRheaderId;
    // System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo PRobjectInfo
    // Offset: 0xD8
    System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* PRobjectInfo;
    // System.Boolean PRisValueTypeFixup
    // Offset: 0xE0
    bool PRisValueTypeFixup;
    // System.Object PRnewObj
    // Offset: 0xE8
    ::Il2CppObject* PRnewObj;
    // System.Object[] PRobjectA
    // Offset: 0xF0
    ::Array<::Il2CppObject*>* PRobjectA;
    // System.Runtime.Serialization.Formatters.Binary.PrimitiveArray PRprimitiveArray
    // Offset: 0xF8
    System::Runtime::Serialization::Formatters::Binary::PrimitiveArray* PRprimitiveArray;
    // System.Boolean PRisRegistered
    // Offset: 0x100
    bool PRisRegistered;
    // System.Object[] PRmemberData
    // Offset: 0x108
    ::Array<::Il2CppObject*>* PRmemberData;
    // System.Runtime.Serialization.SerializationInfo PRsi
    // Offset: 0x110
    System::Runtime::Serialization::SerializationInfo* PRsi;
    // System.Int32 PRnullCount
    // Offset: 0x118
    int PRnullCount;
    // Get static field: static System.Int32 parseRecordIdCount
    static int _get_parseRecordIdCount();
    // Set static field: static System.Int32 parseRecordIdCount
    static void _set_parseRecordIdCount(int value);
    // System.Void Init()
    // Offset: 0x14BF9A8
    void Init();
    // static private System.Void .cctor()
    // Offset: 0x14C8DE4
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0x14BF8D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ParseRecord* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.ParseRecord
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ParseRecord*, "System.Runtime.Serialization.Formatters.Binary", "ParseRecord");
#pragma pack(pop)
