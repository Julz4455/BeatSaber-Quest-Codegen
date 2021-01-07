// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSA
  class RSA;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x10
  // Autogenerated type: Mono.Security.Cryptography.CryptoConvert
  // [] Offset: FFFFFFFF
  class CryptoConvert : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CryptoConvert
    CryptoConvert() noexcept {}
    // static private System.Int32 ToInt32LE(System.Byte[] bytes, System.Int32 offset)
    // Offset: 0x17B265C
    static int ToInt32LE(::Array<uint8_t>* bytes, int offset);
    // static private System.UInt32 ToUInt32LE(System.Byte[] bytes, System.Int32 offset)
    // Offset: 0x17B26DC
    static uint ToUInt32LE(::Array<uint8_t>* bytes, int offset);
    // static private System.Byte[] Trim(System.Byte[] array)
    // Offset: 0x17B275C
    static ::Array<uint8_t>* Trim(::Array<uint8_t>* array);
    // static public System.Security.Cryptography.RSA FromCapiPrivateKeyBlob(System.Byte[] blob)
    // Offset: 0x17B139C
    static System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(::Array<uint8_t>* blob);
    // static public System.Security.Cryptography.RSA FromCapiPrivateKeyBlob(System.Byte[] blob, System.Int32 offset)
    // Offset: 0x17B282C
    static System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(::Array<uint8_t>* blob, int offset);
    // static public System.String ToHex(System.Byte[] input)
    // Offset: 0x17B2FA4
    static ::Il2CppString* ToHex(::Array<uint8_t>* input);
  }; // Mono.Security.Cryptography.CryptoConvert
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::CryptoConvert*, "Mono.Security.Cryptography", "CryptoConvert");
#pragma pack(pop)
