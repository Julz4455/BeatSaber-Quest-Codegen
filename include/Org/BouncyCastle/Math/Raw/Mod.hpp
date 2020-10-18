// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.Raw
namespace Org::BouncyCastle::Math::Raw {
  // Autogenerated type: Org.BouncyCastle.Math.Raw.Mod
  class Mod : public ::Il2CppObject {
    public:
    // Get static field: static private readonly Org.BouncyCastle.Security.SecureRandom RandomSource
    static Org::BouncyCastle::Security::SecureRandom* _get_RandomSource();
    // Set static field: static private readonly Org.BouncyCastle.Security.SecureRandom RandomSource
    static void _set_RandomSource(Org::BouncyCastle::Security::SecureRandom* value);
    // static public System.Void Invert(System.UInt32[] p, System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x1B6263C
    static void Invert(::Array<uint>* p, ::Array<uint>* x, ::Array<uint>* z);
    // static public System.UInt32[] Random(System.UInt32[] p)
    // Offset: 0x1B62BE4
    static ::Array<uint>* Random(::Array<uint>* p);
    // static private System.Void InversionResult(System.UInt32[] p, System.Int32 ac, System.UInt32[] a, System.UInt32[] z)
    // Offset: 0x1B62B9C
    static void InversionResult(::Array<uint>* p, int ac, ::Array<uint>* a, ::Array<uint>* z);
    // static private System.Void InversionStep(System.UInt32[] p, System.UInt32[] u, System.Int32 uLen, System.UInt32[] x, ref System.Int32 xc)
    // Offset: 0x1B62A68
    static void InversionStep(::Array<uint>* p, ::Array<uint>* u, int uLen, ::Array<uint>* x, int& xc);
    // static private System.Void .cctor()
    // Offset: 0x1B62D50
    static void _cctor();
  }; // Org.BouncyCastle.Math.Raw.Mod
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Mod*, "Org.BouncyCastle.Math.Raw", "Mod");
#pragma pack(pop)
