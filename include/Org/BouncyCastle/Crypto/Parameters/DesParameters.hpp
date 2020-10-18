// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.KeyParameter
#include "Org/BouncyCastle/Crypto/Parameters/KeyParameter.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.DesParameters
  class DesParameters : public Org::BouncyCastle::Crypto::Parameters::KeyParameter {
    public:
    // Get static field: static private readonly System.Byte[] DES_weak_keys
    static ::Array<uint8_t>* _get_DES_weak_keys();
    // Set static field: static private readonly System.Byte[] DES_weak_keys
    static void _set_DES_weak_keys(::Array<uint8_t>* value);
    // static public System.Boolean IsWeakKey(System.Byte[] key, System.Int32 offset)
    // Offset: 0x10EE0F4
    static bool IsWeakKey(::Array<uint8_t>* key, int offset);
    // static public System.Boolean IsWeakKey(System.Byte[] key)
    // Offset: 0x10EE338
    static bool IsWeakKey(::Array<uint8_t>* key);
    // static public System.Byte SetOddParity(System.Byte b)
    // Offset: 0x10EE5C4
    static uint8_t SetOddParity(uint8_t b);
    // static public System.Void SetOddParity(System.Byte[] bytes)
    // Offset: 0x10EE5E4
    static void SetOddParity(::Array<uint8_t>* bytes);
    // static private System.Void .cctor()
    // Offset: 0x10EE6C0
    static void _cctor();
    // public System.Void .ctor(System.Byte[] key)
    // Offset: 0x10EDF94
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.KeyParameter
    // Base method: System.Void KeyParameter::.ctor(System.Byte[] key)
    static DesParameters* New_ctor(::Array<uint8_t>* key);
    // public System.Void .ctor(System.Byte[] key, System.Int32 keyOff, System.Int32 keyLen)
    // Offset: 0x10EE3A0
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.KeyParameter
    // Base method: System.Void KeyParameter::.ctor(System.Byte[] key, System.Int32 keyOff, System.Int32 keyLen)
    static DesParameters* New_ctor(::Array<uint8_t>* key, int keyOff, int keyLen);
  }; // Org.BouncyCastle.Crypto.Parameters.DesParameters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DesParameters*, "Org.BouncyCastle.Crypto.Parameters", "DesParameters");
#pragma pack(pop)
