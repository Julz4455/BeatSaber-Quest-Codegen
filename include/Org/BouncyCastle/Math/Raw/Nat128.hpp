// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
// Type namespace: Org.BouncyCastle.Math.Raw
namespace Org::BouncyCastle::Math::Raw {
  // Size: 0x10
  // Autogenerated type: Org.BouncyCastle.Math.Raw.Nat128
  // [] Offset: FFFFFFFF
  class Nat128 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Nat128
    Nat128() noexcept {}
    // static public System.UInt32 Add(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x108FAAC
    static uint Add(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.UInt32 AddBothTo(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x108FBAC
    static uint AddBothTo(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void Copy(System.UInt32[] x, System.Int32 xOff, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x108FCCC
    static void Copy(::Array<uint>* x, int xOff, ::Array<uint>* z, int zOff);
    // static public System.Void Copy64(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x108FDAC
    static void Copy64(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Copy64(System.UInt64[] x, System.Int32 xOff, System.UInt64[] z, System.Int32 zOff)
    // Offset: 0x108FE08
    static void Copy64(::Array<uint64_t>* x, int xOff, ::Array<uint64_t>* z, int zOff);
    // static public System.UInt32[] Create()
    // Offset: 0x108FE88
    static ::Array<uint>* Create();
    // static public System.UInt64[] Create64()
    // Offset: 0x108FED4
    static ::Array<uint64_t>* Create64();
    // static public System.UInt32[] CreateExt()
    // Offset: 0x108FF20
    static ::Array<uint>* CreateExt();
    // static public System.UInt64[] CreateExt64()
    // Offset: 0x108FF6C
    static ::Array<uint64_t>* CreateExt64();
    // static public System.Boolean Eq(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x108FFB8
    static bool Eq(::Array<uint>* x, ::Array<uint>* y);
    // static public System.Boolean Eq64(System.UInt64[] x, System.UInt64[] y)
    // Offset: 0x1090028
    static bool Eq64(::Array<uint64_t>* x, ::Array<uint64_t>* y);
    // static public System.UInt32[] FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x10900A0
    static ::Array<uint>* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // static public System.UInt32 GetBit(System.UInt32[] x, System.Int32 bit)
    // Offset: 0x10901A4
    static uint GetBit(::Array<uint>* x, int bit);
    // static public System.Boolean Gte(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x1090214
    static bool Gte(::Array<uint>* x, ::Array<uint>* y);
    // static public System.Boolean IsOne(System.UInt32[] x)
    // Offset: 0x1090290
    static bool IsOne(::Array<uint>* x);
    // static public System.Boolean IsOne64(System.UInt64[] x)
    // Offset: 0x10902FC
    static bool IsOne64(::Array<uint64_t>* x);
    // static public System.Boolean IsZero(System.UInt32[] x)
    // Offset: 0x1090354
    static bool IsZero(::Array<uint>* x);
    // static public System.Boolean IsZero64(System.UInt64[] x)
    // Offset: 0x10903B4
    static bool IsZero64(::Array<uint64_t>* x);
    // static public System.Void Mul(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0x109040C
    static void Mul(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz);
    // static public System.UInt32 MulAddTo(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0x1090574
    static uint MulAddTo(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz);
    // static public System.Void Square(System.UInt32[] x, System.UInt32[] zz)
    // Offset: 0x1090694
    static void Square(::Array<uint>* x, ::Array<uint>* zz);
    // static public System.Int32 Sub(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x1090860
    static int Sub(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Int32 SubFrom(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x1090960
    static int SubFrom(::Array<uint>* x, ::Array<uint>* z);
    // static public Org.BouncyCastle.Math.BigInteger ToBigInteger(System.UInt32[] x)
    // Offset: 0x1090A30
    static Org::BouncyCastle::Math::BigInteger* ToBigInteger(::Array<uint>* x);
    // static public Org.BouncyCastle.Math.BigInteger ToBigInteger64(System.UInt64[] x)
    // Offset: 0x1090B14
    static Org::BouncyCastle::Math::BigInteger* ToBigInteger64(::Array<uint64_t>* x);
  }; // Org.BouncyCastle.Math.Raw.Nat128
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Nat128*, "Org.BouncyCastle.Math.Raw", "Nat128");
#pragma pack(pop)
