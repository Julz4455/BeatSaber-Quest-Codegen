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
  // Autogenerated type: Org.BouncyCastle.Math.Raw.Nat576
  class Nat576 : public ::Il2CppObject {
    public:
    // static public System.Void Copy64(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0x11A1EA8
    static void Copy64(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Copy64(System.UInt64[] x, System.Int32 xOff, System.UInt64[] z, System.Int32 zOff)
    // Offset: 0x11A1FC8
    static void Copy64(::Array<uint64_t>* x, int xOff, ::Array<uint64_t>* z, int zOff);
    // static public System.UInt64[] Create64()
    // Offset: 0x11A2198
    static ::Array<uint64_t>* Create64();
    // static public System.UInt64[] CreateExt64()
    // Offset: 0x11A21E4
    static ::Array<uint64_t>* CreateExt64();
    // static public System.Boolean Eq64(System.UInt64[] x, System.UInt64[] y)
    // Offset: 0x11A2230
    static bool Eq64(::Array<uint64_t>* x, ::Array<uint64_t>* y);
    // static public System.Boolean IsOne64(System.UInt64[] x)
    // Offset: 0x11A22A0
    static bool IsOne64(::Array<uint64_t>* x);
    // static public System.Boolean IsZero64(System.UInt64[] x)
    // Offset: 0x11A230C
    static bool IsZero64(::Array<uint64_t>* x);
    // static public Org.BouncyCastle.Math.BigInteger ToBigInteger64(System.UInt64[] x)
    // Offset: 0x11A236C
    static Org::BouncyCastle::Math::BigInteger* ToBigInteger64(::Array<uint64_t>* x);
  }; // Org.BouncyCastle.Math.Raw.Nat576
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Nat576*, "Org.BouncyCastle.Math.Raw", "Nat576");
#pragma pack(pop)
