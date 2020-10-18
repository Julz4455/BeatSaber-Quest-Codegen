// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.HMAC
#include "System/Security/Cryptography/HMAC.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.HMACSHA1
  class HMACSHA1 : public System::Security::Cryptography::HMAC {
    public:
    // public System.Void .ctor(System.Byte[] key)
    // Offset: 0x19D1354
    static HMACSHA1* New_ctor(::Array<uint8_t>* key);
    // public System.Void .ctor(System.Byte[] key, System.Boolean useManagedSha1)
    // Offset: 0x19D135C
    static HMACSHA1* New_ctor(::Array<uint8_t>* key, bool useManagedSha1);
    // public System.Void .ctor()
    // Offset: 0x19D0704
    // Implemented from: System.Security.Cryptography.HMAC
    // Base method: System.Void HMAC::.ctor()
    // Base method: System.Void KeyedHashAlgorithm::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    static HMACSHA1* New_ctor();
  }; // System.Security.Cryptography.HMACSHA1
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::HMACSHA1*, "System.Security.Cryptography", "HMACSHA1");
#pragma pack(pop)
