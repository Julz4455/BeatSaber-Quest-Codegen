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
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.MemberReference
  class MemberReference : public ::Il2CppObject {
    public:
    // System.Int32 idRef
    // Offset: 0x10
    int idRef;
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return idRef;
    }
    // System.Void Set(System.Int32 idRef)
    // Offset: 0x14BE0FC
    void Set(int idRef);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x14BE104
    void Write(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x14BE180
    void Read(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0x14BE1E4
    void Dump();
    // System.Void .ctor()
    // Offset: 0x14BE0F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MemberReference* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.MemberReference
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::MemberReference*, "System.Runtime.Serialization.Formatters.Binary", "MemberReference");
#pragma pack(pop)
