// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
  // Forward declaring type: ECPoint
  class ECPoint;
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
}
// Forward declaring namespace: Org::BouncyCastle::Math::Field
namespace Org::BouncyCastle::Math::Field {
  // Forward declaring type: IFiniteField
  class IFiniteField;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Forward declaring type: ECEndomorphism
  class ECEndomorphism;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x10
  // Autogenerated type: Org.BouncyCastle.Math.EC.ECAlgorithms
  // [] Offset: FFFFFFFF
  class ECAlgorithms : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ECAlgorithms
    ECAlgorithms() noexcept {}
    // static public System.Boolean IsF2mCurve(Org.BouncyCastle.Math.EC.ECCurve c)
    // Offset: 0x1937F6C
    static bool IsF2mCurve(Org::BouncyCastle::Math::EC::ECCurve* c);
    // static public System.Boolean IsF2mField(Org.BouncyCastle.Math.Field.IFiniteField field)
    // Offset: 0x1937F94
    static bool IsF2mField(Org::BouncyCastle::Math::Field::IFiniteField* field);
    // static public System.Boolean IsFpCurve(Org.BouncyCastle.Math.EC.ECCurve c)
    // Offset: 0x1938128
    static bool IsFpCurve(Org::BouncyCastle::Math::EC::ECCurve* c);
    // static public System.Boolean IsFpField(Org.BouncyCastle.Math.Field.IFiniteField field)
    // Offset: 0x1938150
    static bool IsFpField(Org::BouncyCastle::Math::Field::IFiniteField* field);
    // static public Org.BouncyCastle.Math.EC.ECPoint ImportPoint(Org.BouncyCastle.Math.EC.ECCurve c, Org.BouncyCastle.Math.EC.ECPoint p)
    // Offset: 0x193820C
    static Org::BouncyCastle::Math::EC::ECPoint* ImportPoint(Org::BouncyCastle::Math::EC::ECCurve* c, Org::BouncyCastle::Math::EC::ECPoint* p);
    // static public System.Void MontgomeryTrick(Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Int32 off, System.Int32 len, Org.BouncyCastle.Math.EC.ECFieldElement scale)
    // Offset: 0x19382E0
    static void MontgomeryTrick(::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, int off, int len, Org::BouncyCastle::Math::EC::ECFieldElement* scale);
    // static public Org.BouncyCastle.Math.EC.ECPoint ReferenceMultiply(Org.BouncyCastle.Math.EC.ECPoint p, Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0x19385F8
    static Org::BouncyCastle::Math::EC::ECPoint* ReferenceMultiply(Org::BouncyCastle::Math::EC::ECPoint* p, Org::BouncyCastle::Math::BigInteger* k);
    // static public Org.BouncyCastle.Math.EC.ECPoint CleanPoint(Org.BouncyCastle.Math.EC.ECCurve c, Org.BouncyCastle.Math.EC.ECPoint p)
    // Offset: 0x193873C
    static Org::BouncyCastle::Math::EC::ECPoint* CleanPoint(Org::BouncyCastle::Math::EC::ECCurve* c, Org::BouncyCastle::Math::EC::ECPoint* p);
    // static Org.BouncyCastle.Math.EC.ECPoint ImplCheckResult(Org.BouncyCastle.Math.EC.ECPoint p)
    // Offset: 0x1938834
    static Org::BouncyCastle::Math::EC::ECPoint* ImplCheckResult(Org::BouncyCastle::Math::EC::ECPoint* p);
    // static Org.BouncyCastle.Math.EC.ECPoint ImplShamirsTrickWNaf(Org.BouncyCastle.Math.EC.ECPoint P, Org.BouncyCastle.Math.BigInteger k, Org.BouncyCastle.Math.EC.ECPoint Q, Org.BouncyCastle.Math.BigInteger l)
    // Offset: 0x19388DC
    static Org::BouncyCastle::Math::EC::ECPoint* ImplShamirsTrickWNaf(Org::BouncyCastle::Math::EC::ECPoint* P, Org::BouncyCastle::Math::BigInteger* k, Org::BouncyCastle::Math::EC::ECPoint* Q, Org::BouncyCastle::Math::BigInteger* l);
    // static Org.BouncyCastle.Math.EC.ECPoint ImplShamirsTrickWNaf(Org.BouncyCastle.Math.EC.Endo.ECEndomorphism endomorphism, Org.BouncyCastle.Math.EC.ECPoint P, Org.BouncyCastle.Math.BigInteger k, Org.BouncyCastle.Math.BigInteger l)
    // Offset: 0x19393E0
    static Org::BouncyCastle::Math::EC::ECPoint* ImplShamirsTrickWNaf(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism, Org::BouncyCastle::Math::EC::ECPoint* P, Org::BouncyCastle::Math::BigInteger* k, Org::BouncyCastle::Math::BigInteger* l);
    // static private Org.BouncyCastle.Math.EC.ECPoint ImplShamirsTrickWNaf(Org.BouncyCastle.Math.EC.ECPoint[] preCompP, Org.BouncyCastle.Math.EC.ECPoint[] preCompNegP, System.Byte[] wnafP, Org.BouncyCastle.Math.EC.ECPoint[] preCompQ, Org.BouncyCastle.Math.EC.ECPoint[] preCompNegQ, System.Byte[] wnafQ)
    // Offset: 0x1939100
    static Org::BouncyCastle::Math::EC::ECPoint* ImplShamirsTrickWNaf(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* preCompP, ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* preCompNegP, ::Array<uint8_t>* wnafP, ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* preCompQ, ::Array<Org::BouncyCastle::Math::EC::ECPoint*>* preCompNegQ, ::Array<uint8_t>* wnafQ);
    // static private Org.BouncyCastle.Math.EC.ECPoint ImplShamirsTrickFixedPoint(Org.BouncyCastle.Math.EC.ECPoint p, Org.BouncyCastle.Math.BigInteger k, Org.BouncyCastle.Math.EC.ECPoint q, Org.BouncyCastle.Math.BigInteger l)
    // Offset: 0x1938C5C
    static Org::BouncyCastle::Math::EC::ECPoint* ImplShamirsTrickFixedPoint(Org::BouncyCastle::Math::EC::ECPoint* p, Org::BouncyCastle::Math::BigInteger* k, Org::BouncyCastle::Math::EC::ECPoint* q, Org::BouncyCastle::Math::BigInteger* l);
  }; // Org.BouncyCastle.Math.EC.ECAlgorithms
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::ECAlgorithms*, "Org.BouncyCastle.Math.EC", "ECAlgorithms");
#pragma pack(pop)
