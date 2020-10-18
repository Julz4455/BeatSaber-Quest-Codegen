// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Autogenerated type: Org.BouncyCastle.Math.EC.ECFieldElement
  class ECFieldElement : public ::Il2CppObject {
    public:
    // public Org.BouncyCastle.Math.BigInteger ToBigInteger()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::BigInteger* ToBigInteger();
    // public System.Int32 get_FieldSize()
    // Offset: 0xFFFFFFFF
    int get_FieldSize();
    // public Org.BouncyCastle.Math.EC.ECFieldElement Add(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECFieldElement* Add(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public Org.BouncyCastle.Math.EC.ECFieldElement AddOne()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECFieldElement* AddOne();
    // public Org.BouncyCastle.Math.EC.ECFieldElement Subtract(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public Org.BouncyCastle.Math.EC.ECFieldElement Multiply(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public Org.BouncyCastle.Math.EC.ECFieldElement Divide(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECFieldElement* Divide(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public Org.BouncyCastle.Math.EC.ECFieldElement Negate()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECFieldElement* Negate();
    // public Org.BouncyCastle.Math.EC.ECFieldElement Square()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECFieldElement* Square();
    // public Org.BouncyCastle.Math.EC.ECFieldElement Invert()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECFieldElement* Invert();
    // public Org.BouncyCastle.Math.EC.ECFieldElement Sqrt()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt();
    // public System.Int32 get_BitLength()
    // Offset: 0x2019D24
    int get_BitLength();
    // public System.Boolean get_IsOne()
    // Offset: 0x2019D4C
    bool get_IsOne();
    // public System.Boolean get_IsZero()
    // Offset: 0x2019D74
    bool get_IsZero();
    // public Org.BouncyCastle.Math.EC.ECFieldElement MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x2019DA4
    Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyMinusProduct(Org::BouncyCastle::Math::EC::ECFieldElement* b, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public Org.BouncyCastle.Math.EC.ECFieldElement MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x2019E0C
    Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyPlusProduct(Org::BouncyCastle::Math::EC::ECFieldElement* b, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public Org.BouncyCastle.Math.EC.ECFieldElement SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x2019E74
    Org::BouncyCastle::Math::EC::ECFieldElement* SquarePlusProduct(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public Org.BouncyCastle.Math.EC.ECFieldElement SquarePow(System.Int32 pow)
    // Offset: 0x2019EE0
    Org::BouncyCastle::Math::EC::ECFieldElement* SquarePow(int pow);
    // public System.Boolean TestBitZero()
    // Offset: 0x2019F28
    bool TestBitZero();
    // public System.Boolean Equals(Org.BouncyCastle.Math.EC.ECFieldElement other)
    // Offset: 0x2019FF0
    bool Equals(Org::BouncyCastle::Math::EC::ECFieldElement* other);
    // public System.Byte[] GetEncoded()
    // Offset: 0x201A0C0
    ::Array<uint8_t>* GetEncoded();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2019F54
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x201A068
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x201A094
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // protected System.Void .ctor()
    // Offset: 0x201A11C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ECFieldElement* New_ctor();
  }; // Org.BouncyCastle.Math.EC.ECFieldElement
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::ECFieldElement*, "Org.BouncyCastle.Math.EC", "ECFieldElement");
#pragma pack(pop)
