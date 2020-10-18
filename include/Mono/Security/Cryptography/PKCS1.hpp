// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: HashAlgorithm
  class HashAlgorithm;
}
// Completed forward declares
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Autogenerated type: Mono.Security.Cryptography.PKCS1
  class PKCS1 : public ::Il2CppObject {
    public:
    // Get static field: static private System.Byte[] emptySHA1
    static ::Array<uint8_t>* _get_emptySHA1();
    // Set static field: static private System.Byte[] emptySHA1
    static void _set_emptySHA1(::Array<uint8_t>* value);
    // Get static field: static private System.Byte[] emptySHA256
    static ::Array<uint8_t>* _get_emptySHA256();
    // Set static field: static private System.Byte[] emptySHA256
    static void _set_emptySHA256(::Array<uint8_t>* value);
    // Get static field: static private System.Byte[] emptySHA384
    static ::Array<uint8_t>* _get_emptySHA384();
    // Set static field: static private System.Byte[] emptySHA384
    static void _set_emptySHA384(::Array<uint8_t>* value);
    // Get static field: static private System.Byte[] emptySHA512
    static ::Array<uint8_t>* _get_emptySHA512();
    // Set static field: static private System.Byte[] emptySHA512
    static void _set_emptySHA512(::Array<uint8_t>* value);
    // static System.String HashNameFromOid(System.String oid, System.Boolean throwOnError)
    // Offset: 0x1B833B4
    static ::Il2CppString* HashNameFromOid(::Il2CppString* oid, bool throwOnError);
    // static System.Security.Cryptography.HashAlgorithm CreateFromOid(System.String oid)
    // Offset: 0x1B83684
    static System::Security::Cryptography::HashAlgorithm* CreateFromOid(::Il2CppString* oid);
    // static System.Security.Cryptography.HashAlgorithm CreateFromName(System.String name)
    // Offset: 0x1B836F0
    static System::Security::Cryptography::HashAlgorithm* CreateFromName(::Il2CppString* name);
    // static private System.Void .cctor()
    // Offset: 0x1B83A60
    static void _cctor();
  }; // Mono.Security.Cryptography.PKCS1
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::PKCS1*, "Mono.Security.Cryptography", "PKCS1");
#pragma pack(pop)
