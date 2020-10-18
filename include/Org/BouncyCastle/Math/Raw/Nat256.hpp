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
// Type namespace: Org.BouncyCastle.Math.Raw
namespace Org::BouncyCastle::Math::Raw {
  // Autogenerated type: Org.BouncyCastle.Math.Raw.Nat256
  class Nat256 : public ::Il2CppObject {
    public:
    // static public System.UInt32 Add(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x119DD30
    static uint Add(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.UInt32 AddBothTo(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x119DF10
    static uint AddBothTo(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.UInt32 AddTo(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x119E130
    static uint AddTo(::Array<uint>* x, ::Array<uint>* z);
    // static public System.UInt32 AddTo(System.UInt32[] x, System.Int32 xOff, System.UInt32[] z, System.Int32 zOff, System.UInt32 cIn)
    // Offset: 0x119E2B0
    static uint AddTo(::Array<uint>* x, int xOff, ::Array<uint>* z, int zOff, uint cIn);
    // static public System.UInt32 AddToEachOther(System.UInt32[] u, System.Int32 uOff, System.UInt32[] v, System.Int32 vOff)
    // Offset: 0x119E4D4
    static uint AddToEachOther(::Array<uint>* u, int uOff, ::Array<uint>* v, int vOff);
    // static public System.Void Copy(System.UInt32[] x, System.Int32 xOff, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x119E78C
    static void Copy(::Array<uint>* x, int xOff, ::Array<uint>* z, int zOff);
    // static public System.Void Copy64(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x119E92C
    static void Copy64(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Copy64(System.UInt64[] x, System.Int32 xOff, System.UInt64[] z, System.Int32 zOff)
    // Offset: 0x119E9C0
    static void Copy64(::Array<uint64_t>* x, int xOff, ::Array<uint64_t>* z, int zOff);
    // static public System.UInt32[] Create()
    // Offset: 0x119EAA0
    static ::Array<uint>* Create();
    // static public System.UInt64[] Create64()
    // Offset: 0x119EAEC
    static ::Array<uint64_t>* Create64();
    // static public System.UInt32[] CreateExt()
    // Offset: 0x119EB38
    static ::Array<uint>* CreateExt();
    // static public System.UInt64[] CreateExt64()
    // Offset: 0x119EB84
    static ::Array<uint64_t>* CreateExt64();
    // static public System.Boolean Diff(System.UInt32[] x, System.Int32 xOff, System.UInt32[] y, System.Int32 yOff, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x119EBD0
    static bool Diff(::Array<uint>* x, int xOff, ::Array<uint>* y, int yOff, ::Array<uint>* z, int zOff);
    // static public System.Boolean Eq(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x119EFA0
    static bool Eq(::Array<uint>* x, ::Array<uint>* y);
    // static public System.Boolean Eq64(System.UInt64[] x, System.UInt64[] y)
    // Offset: 0x119F010
    static bool Eq64(::Array<uint64_t>* x, ::Array<uint64_t>* y);
    // static public System.UInt32[] FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x119F080
    static ::Array<uint>* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // static public System.UInt32 GetBit(System.UInt32[] x, System.Int32 bit)
    // Offset: 0x119F184
    static uint GetBit(::Array<uint>* x, int bit);
    // static public System.Boolean Gte(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x119F1F4
    static bool Gte(::Array<uint>* x, ::Array<uint>* y);
    // static public System.Boolean Gte(System.UInt32[] x, System.Int32 xOff, System.UInt32[] y, System.Int32 yOff)
    // Offset: 0x119EC58
    static bool Gte(::Array<uint>* x, int xOff, ::Array<uint>* y, int yOff);
    // static public System.Boolean IsOne(System.UInt32[] x)
    // Offset: 0x119F270
    static bool IsOne(::Array<uint>* x);
    // static public System.Boolean IsOne64(System.UInt64[] x)
    // Offset: 0x119F2DC
    static bool IsOne64(::Array<uint64_t>* x);
    // static public System.Boolean IsZero(System.UInt32[] x)
    // Offset: 0x119F348
    static bool IsZero(::Array<uint>* x);
    // static public System.Boolean IsZero64(System.UInt64[] x)
    // Offset: 0x119F3A8
    static bool IsZero64(::Array<uint64_t>* x);
    // static public System.Void Mul(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0x119F408
    static void Mul(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz);
    // static public System.Void Mul(System.UInt32[] x, System.Int32 xOff, System.UInt32[] y, System.Int32 yOff, System.UInt32[] zz, System.Int32 zzOff)
    // Offset: 0x119F668
    static void Mul(::Array<uint>* x, int xOff, ::Array<uint>* y, int yOff, ::Array<uint>* zz, int zzOff);
    // static public System.UInt32 MulAddTo(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0x119FA08
    static uint MulAddTo(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz);
    // static public System.UInt64 Mul33Add(System.UInt32 w, System.UInt32[] x, System.Int32 xOff, System.UInt32[] y, System.Int32 yOff, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x119FBD0
    static uint64_t Mul33Add(uint w, ::Array<uint>* x, int xOff, ::Array<uint>* y, int yOff, ::Array<uint>* z, int zOff);
    // static public System.UInt32 MulByWordAddTo(System.UInt32 x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x119FEAC
    static uint MulByWordAddTo(uint x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.UInt32 Mul33DWordAdd(System.UInt32 x, System.UInt64 y, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x11A0030
    static uint Mul33DWordAdd(uint x, uint64_t y, ::Array<uint>* z, int zOff);
    // static public System.UInt32 Mul33WordAdd(System.UInt32 x, System.UInt32 y, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x11A0110
    static uint Mul33WordAdd(uint x, uint y, ::Array<uint>* z, int zOff);
    // static public System.Void Square(System.UInt32[] x, System.UInt32[] zz)
    // Offset: 0x11A01C4
    static void Square(::Array<uint>* x, ::Array<uint>* zz);
    // static public System.Void Square(System.UInt32[] x, System.Int32 xOff, System.UInt32[] zz, System.Int32 zzOff)
    // Offset: 0x11A05B4
    static void Square(::Array<uint>* x, int xOff, ::Array<uint>* zz, int zzOff);
    // static public System.Int32 Sub(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x11A0BA8
    static int Sub(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Int32 Sub(System.UInt32[] x, System.Int32 xOff, System.UInt32[] y, System.Int32 yOff, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x119ECE4
    static int Sub(::Array<uint>* x, int xOff, ::Array<uint>* y, int yOff, ::Array<uint>* z, int zOff);
    // static public System.Int32 SubFrom(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x11A0D88
    static int SubFrom(::Array<uint>* x, ::Array<uint>* z);
    // static public Org.BouncyCastle.Math.BigInteger ToBigInteger(System.UInt32[] x)
    // Offset: 0x11A0F08
    static Org::BouncyCastle::Math::BigInteger* ToBigInteger(::Array<uint>* x);
    // static public Org.BouncyCastle.Math.BigInteger ToBigInteger64(System.UInt64[] x)
    // Offset: 0x11A0FEC
    static Org::BouncyCastle::Math::BigInteger* ToBigInteger64(::Array<uint64_t>* x);
  }; // Org.BouncyCastle.Math.Raw.Nat256
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Nat256*, "Org.BouncyCastle.Math.Raw", "Nat256");
#pragma pack(pop)
