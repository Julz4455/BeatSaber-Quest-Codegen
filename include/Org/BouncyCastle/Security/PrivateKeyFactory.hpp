// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: AsymmetricKeyParameter
  class AsymmetricKeyParameter;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Forward declaring type: PrivateKeyInfo
  class PrivateKeyInfo;
  // Forward declaring type: EncryptedPrivateKeyInfo
  class EncryptedPrivateKeyInfo;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Autogenerated type: Org.BouncyCastle.Security.PrivateKeyFactory
  class PrivateKeyFactory : public ::Il2CppObject {
    public:
    // static public Org.BouncyCastle.Crypto.AsymmetricKeyParameter CreateKey(Org.BouncyCastle.Asn1.Pkcs.PrivateKeyInfo keyInfo)
    // Offset: 0x11D9834
    static Org::BouncyCastle::Crypto::AsymmetricKeyParameter* CreateKey(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* keyInfo);
    // static private System.Byte[] GetRawKey(Org.BouncyCastle.Asn1.Pkcs.PrivateKeyInfo keyInfo, System.Int32 expectedSize)
    // Offset: 0x11DAC90
    static ::Array<uint8_t>* GetRawKey(Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* keyInfo, int expectedSize);
    // static public Org.BouncyCastle.Crypto.AsymmetricKeyParameter DecryptKey(System.Char[] passPhrase, Org.BouncyCastle.Asn1.Pkcs.EncryptedPrivateKeyInfo encInfo)
    // Offset: 0x11DAD54
    static Org::BouncyCastle::Crypto::AsymmetricKeyParameter* DecryptKey(::Array<::Il2CppChar>* passPhrase, Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encInfo);
  }; // Org.BouncyCastle.Security.PrivateKeyFactory
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::PrivateKeyFactory*, "Org.BouncyCastle.Security", "PrivateKeyFactory");
#pragma pack(pop)
