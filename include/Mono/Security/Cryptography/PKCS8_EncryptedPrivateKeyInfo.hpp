// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Cryptography.PKCS8
#include "Mono/Security/Cryptography/PKCS8.hpp"
// Completed includes
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Autogenerated type: Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
  class PKCS8::EncryptedPrivateKeyInfo : public ::Il2CppObject {
    public:
    // private System.String _algorithm
    // Offset: 0x10
    ::Il2CppString* algorithm;
    // private System.Byte[] _salt
    // Offset: 0x18
    ::Array<uint8_t>* salt;
    // private System.Int32 _iterations
    // Offset: 0x20
    int iterations;
    // private System.Byte[] _data
    // Offset: 0x28
    ::Array<uint8_t>* data;
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x1B83B98
    static PKCS8::EncryptedPrivateKeyInfo* New_ctor(::Array<uint8_t>* data);
    // public System.String get_Algorithm()
    // Offset: 0x1B83E68
    ::Il2CppString* get_Algorithm();
    // public System.Byte[] get_EncryptedData()
    // Offset: 0x1B83E70
    ::Array<uint8_t>* get_EncryptedData();
    // public System.Byte[] get_Salt()
    // Offset: 0x1B83EEC
    ::Array<uint8_t>* get_Salt();
    // public System.Int32 get_IterationCount()
    // Offset: 0x1B83FBC
    int get_IterationCount();
    // private System.Void Decode(System.Byte[] data)
    // Offset: 0x1B83BC8
    void Decode(::Array<uint8_t>* data);
    // public System.Void .ctor()
    // Offset: 0x1B83B90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PKCS8::EncryptedPrivateKeyInfo* New_ctor();
  }; // Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo*, "Mono.Security.Cryptography", "PKCS8/EncryptedPrivateKeyInfo");
#pragma pack(pop)
