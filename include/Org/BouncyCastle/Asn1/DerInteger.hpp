// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1TaggedObject
  class Asn1TaggedObject;
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Autogenerated type: Org.BouncyCastle.Asn1.DerInteger
  class DerInteger : public Org::BouncyCastle::Asn1::Asn1Object {
    public:
    // private readonly System.Byte[] bytes
    // Offset: 0x10
    ::Array<uint8_t>* bytes;
    // private readonly System.Int32 start
    // Offset: 0x18
    int start;
    // static System.Boolean AllowUnsafe()
    // Offset: 0x13248D0
    static bool AllowUnsafe();
    // static public Org.BouncyCastle.Asn1.DerInteger GetInstance(System.Object obj)
    // Offset: 0x1324980
    static Org::BouncyCastle::Asn1::DerInteger* GetInstance(::Il2CppObject* obj);
    // static public Org.BouncyCastle.Asn1.DerInteger GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean isExplicit)
    // Offset: 0x1324A80
    static Org::BouncyCastle::Asn1::DerInteger* GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);
    // public System.Void .ctor(System.Int32 value)
    // Offset: 0x13207B0
    static DerInteger* New_ctor(int value);
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger value)
    // Offset: 0x13204A8
    static DerInteger* New_ctor(Org::BouncyCastle::Math::BigInteger* value);
    // public System.Void .ctor(System.Byte[] bytes)
    // Offset: 0x1324BA8
    static DerInteger* New_ctor(::Array<uint8_t>* bytes);
    // System.Void .ctor(System.Byte[] bytes, System.Boolean clone)
    // Offset: 0x1315D0C
    static DerInteger* New_ctor(::Array<uint8_t>* bytes, bool clone);
    // public Org.BouncyCastle.Math.BigInteger get_PositiveValue()
    // Offset: 0x1320578
    Org::BouncyCastle::Math::BigInteger* get_PositiveValue();
    // public Org.BouncyCastle.Math.BigInteger get_Value()
    // Offset: 0x1324BB0
    Org::BouncyCastle::Math::BigInteger* get_Value();
    // public System.Int32 get_IntValueExact()
    // Offset: 0x1324C18
    int get_IntValueExact();
    // static System.Int32 IntValue(System.Byte[] bytes, System.Int32 start, System.Int32 signExt)
    // Offset: 0x1322B14
    static int IntValue(::Array<uint8_t>* bytes, int start, int signExt);
    // static System.Boolean IsMalformed(System.Byte[] bytes)
    // Offset: 0x1322918
    static bool IsMalformed(::Array<uint8_t>* bytes);
    // static System.Int32 SignBytesToSkip(System.Byte[] bytes)
    // Offset: 0x13229A0
    static int SignBytesToSkip(::Array<uint8_t>* bytes);
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1324CB8
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Int32 Asn1GetHashCode()
    // Offset: 0x1324CDC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Int32 Asn1Object::Asn1GetHashCode()
    int Asn1GetHashCode();
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x1324D48
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // public override System.String ToString()
    // Offset: 0x1324E20
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Asn1.DerInteger
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerInteger*, "Org.BouncyCastle.Asn1", "DerInteger");
#pragma pack(pop)