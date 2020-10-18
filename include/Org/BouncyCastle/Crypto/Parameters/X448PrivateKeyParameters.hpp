// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
#include "Org/BouncyCastle/Crypto/AsymmetricKeyParameter.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.X448PrivateKeyParameters
  class X448PrivateKeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
    public:
    // private readonly System.Byte[] data
    // Offset: 0x18
    ::Array<uint8_t>* data;
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // Get static field: static public readonly System.Int32 KeySize
    static int _get_KeySize();
    // Set static field: static public readonly System.Int32 KeySize
    static void _set_KeySize(int value);
    // Get static field: static public readonly System.Int32 SecretSize
    static int _get_SecretSize();
    // Set static field: static public readonly System.Int32 SecretSize
    static void _set_SecretSize(int value);
    // public System.Void .ctor(System.Byte[] buf, System.Int32 off)
    // Offset: 0x10F3CB4
    static X448PrivateKeyParameters* New_ctor(::Array<uint8_t>* buf, int off);
    // static private System.Void .cctor()
    // Offset: 0x10F3D8C
    static void _cctor();
  }; // Org.BouncyCastle.Crypto.Parameters.X448PrivateKeyParameters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::X448PrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "X448PrivateKeyParameters");
#pragma pack(pop)
