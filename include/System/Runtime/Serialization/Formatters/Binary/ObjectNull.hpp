// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
  // Forward declaring type: BinaryHeaderEnum
  struct BinaryHeaderEnum;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ObjectNull
  class ObjectNull : public ::Il2CppObject {
    public:
    // System.Int32 nullCount
    // Offset: 0x10
    int nullCount;
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return nullCount;
    }
    // System.Void SetNullCount(System.Int32 nullCount)
    // Offset: 0x14BF720
    void SetNullCount(int nullCount);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x14BF728
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input, System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
    // Offset: 0x14BF7D8
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input, System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum);
    // public System.Void Dump()
    // Offset: 0x14BF858
    void Dump();
    // System.Void .ctor()
    // Offset: 0x14BF718
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ObjectNull* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.ObjectNull
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ObjectNull*, "System.Runtime.Serialization.Formatters.Binary", "ObjectNull");
#pragma pack(pop)
