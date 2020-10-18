// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.AbstractFpFieldElement
#include "Org/BouncyCastle/Math/EC/AbstractFpFieldElement.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Skipping declaration: ECFieldElement because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement
  class SecP224R1FieldElement : public Org::BouncyCastle::Math::EC::AbstractFpFieldElement {
    public:
    // protected internal readonly System.UInt32[] x
    // Offset: 0x10
    ::Array<uint>* x;
    // Creating conversion operator: operator ::Array<uint>*
    constexpr operator ::Array<uint>*() const noexcept {
      return x;
    }
    // Get static field: static public readonly Org.BouncyCastle.Math.BigInteger Q
    static Org::BouncyCastle::Math::BigInteger* _get_Q();
    // Set static field: static public readonly Org.BouncyCastle.Math.BigInteger Q
    static void _set_Q(Org::BouncyCastle::Math::BigInteger* value);
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1B71780
    static SecP224R1FieldElement* New_ctor(Org::BouncyCastle::Math::BigInteger* x);
    // protected internal System.Void .ctor(System.UInt32[] x)
    // Offset: 0x1B71DCC
    static SecP224R1FieldElement* New_ctor(::Array<uint>* x);
    // public System.Boolean Equals(Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement other)
    // Offset: 0x1B7424C
    bool Equals(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement* other);
    // static private System.Boolean IsSquare(System.UInt32[] x)
    // Offset: 0x1B73E48
    static bool IsSquare(::Array<uint>* x);
    // static private System.Void RM(System.UInt32[] nc, System.UInt32[] d0, System.UInt32[] e0, System.UInt32[] d1, System.UInt32[] e1, System.UInt32[] f1, System.UInt32[] t)
    // Offset: 0x1B7433C
    static void RM(::Array<uint>* nc, ::Array<uint>* d0, ::Array<uint>* e0, ::Array<uint>* d1, ::Array<uint>* e1, ::Array<uint>* f1, ::Array<uint>* t);
    // static private System.Void RP(System.UInt32[] nc, System.UInt32[] d1, System.UInt32[] e1, System.UInt32[] f1, System.UInt32[] t)
    // Offset: 0x1B74464
    static void RP(::Array<uint>* nc, ::Array<uint>* d1, ::Array<uint>* e1, ::Array<uint>* f1, ::Array<uint>* t);
    // static private System.Void RS(System.UInt32[] d, System.UInt32[] e, System.UInt32[] f, System.UInt32[] t)
    // Offset: 0x1B745BC
    static void RS(::Array<uint>* d, ::Array<uint>* e, ::Array<uint>* f, ::Array<uint>* t);
    // static private System.Boolean TrySqrt(System.UInt32[] nc, System.UInt32[] r, System.UInt32[] t)
    // Offset: 0x1B73F54
    static bool TrySqrt(::Array<uint>* nc, ::Array<uint>* r, ::Array<uint>* t);
    // static private System.Void .cctor()
    // Offset: 0x1B7469C
    static void _cctor();
    // public override System.Boolean get_IsZero()
    // Offset: 0x1B734EC
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::get_IsZero()
    bool get_IsZero();
    // public override System.Boolean get_IsOne()
    // Offset: 0x1B734F8
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::get_IsOne()
    bool get_IsOne();
    // public override System.Boolean TestBitZero()
    // Offset: 0x1B73504
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::TestBitZero()
    bool TestBitZero();
    // public override Org.BouncyCastle.Math.BigInteger ToBigInteger()
    // Offset: 0x1B7352C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.BigInteger ECFieldElement::ToBigInteger()
    Org::BouncyCastle::Math::BigInteger* ToBigInteger();
    // public override System.Int32 get_FieldSize()
    // Offset: 0x1B73538
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Int32 ECFieldElement::get_FieldSize()
    int get_FieldSize();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Add(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1B735AC
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Add(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement AddOne()
    // Offset: 0x1B736A8
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::AddOne()
    Org::BouncyCastle::Math::EC::ECFieldElement* AddOne();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Subtract(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1B73758
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Multiply(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1B73854
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Divide(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x1B73950
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Divide(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Negate()
    // Offset: 0x1B73A54
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Negate()
    Org::BouncyCastle::Math::EC::ECFieldElement* Negate();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Square()
    // Offset: 0x1B73B04
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Square()
    Org::BouncyCastle::Math::EC::ECFieldElement* Square();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Invert()
    // Offset: 0x1B73BB4
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Invert()
    Org::BouncyCastle::Math::EC::ECFieldElement* Invert();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Sqrt()
    // Offset: 0x1B73C64
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Sqrt()
    Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1B74114
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Boolean Equals(Org.BouncyCastle.Math.EC.ECFieldElement other)
    // Offset: 0x1B741B0
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::Equals(Org.BouncyCastle.Math.EC.ECFieldElement other)
    bool Equals(Org::BouncyCastle::Math::EC::ECFieldElement* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1B74278
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Int32 ECFieldElement::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecP224R1FieldElement
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecP224R1FieldElement*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP224R1FieldElement");
#pragma pack(pop)
