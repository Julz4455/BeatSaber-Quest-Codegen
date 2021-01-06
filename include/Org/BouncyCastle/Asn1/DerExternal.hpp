// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1EncodableVector
  class Asn1EncodableVector;
  // Skipping declaration: Asn1Encodable because it is already included!
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x38
  // Autogenerated type: Org.BouncyCastle.Asn1.DerExternal
  // [] Offset: FFFFFFFF
  class DerExternal : public Org::BouncyCastle::Asn1::Asn1Object {
    public:
    // private Org.BouncyCastle.Asn1.DerObjectIdentifier directReference
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerObjectIdentifier* directReference;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    // private Org.BouncyCastle.Asn1.DerInteger indirectReference
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerInteger* indirectReference;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private Org.BouncyCastle.Asn1.Asn1Object dataValueDescriptor
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::Asn1Object* dataValueDescriptor;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Object*) == 0x8);
    // private System.Int32 encoding
    // Size: 0x4
    // Offset: 0x28
    int encoding;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: encoding and: externalContent
    char __padding3[0x4] = {};
    // private Org.BouncyCastle.Asn1.Asn1Object externalContent
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Asn1::Asn1Object* externalContent;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Object*) == 0x8);
    // Creating value type constructor for type: DerExternal
    DerExternal(Org::BouncyCastle::Asn1::DerObjectIdentifier* directReference_ = {}, Org::BouncyCastle::Asn1::DerInteger* indirectReference_ = {}, Org::BouncyCastle::Asn1::Asn1Object* dataValueDescriptor_ = {}, int encoding_ = {}, Org::BouncyCastle::Asn1::Asn1Object* externalContent_ = {}) noexcept : directReference{directReference_}, indirectReference{indirectReference_}, dataValueDescriptor{dataValueDescriptor_}, encoding{encoding_}, externalContent{externalContent_} {}
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1EncodableVector vector)
    // Offset: 0x1371BC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerExternal* New_ctor(Org::BouncyCastle::Asn1::Asn1EncodableVector* vector) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Org::BouncyCastle::Asn1").WithContext("DerExternal").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerExternal*, creationType>(vector)));
    }
    // public Org.BouncyCastle.Asn1.Asn1Object get_DataValueDescriptor()
    // Offset: 0x1381A20
    Org::BouncyCastle::Asn1::Asn1Object* get_DataValueDescriptor();
    // public Org.BouncyCastle.Asn1.DerObjectIdentifier get_DirectReference()
    // Offset: 0x1381A28
    Org::BouncyCastle::Asn1::DerObjectIdentifier* get_DirectReference();
    // public System.Int32 get_Encoding()
    // Offset: 0x1381A30
    int get_Encoding();
    // public System.Void set_Encoding(System.Int32 value)
    // Offset: 0x1381680
    void set_Encoding(int value);
    // public Org.BouncyCastle.Asn1.Asn1Object get_ExternalContent()
    // Offset: 0x1381A38
    Org::BouncyCastle::Asn1::Asn1Object* get_ExternalContent();
    // public Org.BouncyCastle.Asn1.DerInteger get_IndirectReference()
    // Offset: 0x1381A40
    Org::BouncyCastle::Asn1::DerInteger* get_IndirectReference();
    // static private Org.BouncyCastle.Asn1.Asn1Object GetObjFromVector(Org.BouncyCastle.Asn1.Asn1EncodableVector v, System.Int32 index)
    // Offset: 0x13815C0
    static Org::BouncyCastle::Asn1::Asn1Object* GetObjFromVector(Org::BouncyCastle::Asn1::Asn1EncodableVector* v, int index);
    // static private System.Void WriteEncodable(System.IO.MemoryStream ms, Org.BouncyCastle.Asn1.Asn1Encodable e)
    // Offset: 0x1381860
    static void WriteEncodable(System::IO::MemoryStream* ms, Org::BouncyCastle::Asn1::Asn1Encodable* e);
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x138174C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x13818BC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Int32 Asn1Object::Asn1GetHashCode()
    int Asn1GetHashCode();
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x1381924
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
  }; // Org.BouncyCastle.Asn1.DerExternal
  static check_size<sizeof(DerExternal), 48 + sizeof(Org::BouncyCastle::Asn1::Asn1Object*)> __Org_BouncyCastle_Asn1_DerExternalSizeCheck;
  static_assert(sizeof(DerExternal) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerExternal*, "Org.BouncyCastle.Asn1", "DerExternal");
#pragma pack(pop)
