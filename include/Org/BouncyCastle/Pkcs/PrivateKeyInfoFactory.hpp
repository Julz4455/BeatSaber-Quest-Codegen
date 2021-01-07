// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Forward declaring type: PrivateKeyInfo
  class PrivateKeyInfo;
  // Forward declaring type: EncryptedPrivateKeyInfo
  class EncryptedPrivateKeyInfo;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Pkcs
namespace Org::BouncyCastle::Pkcs {
  // Size: 0x10
  // Autogenerated type: Org.BouncyCastle.Pkcs.PrivateKeyInfoFactory
  // [] Offset: FFFFFFFF
  class PrivateKeyInfoFactory : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: PrivateKeyInfoFactory
    PrivateKeyInfoFactory() noexcept {}
    // static public Org.BouncyCastle.Asn1.Pkcs.PrivateKeyInfo CreatePrivateKeyInfo(System.Char[] passPhrase, Org.BouncyCastle.Asn1.Pkcs.EncryptedPrivateKeyInfo encInfo)
    // Offset: 0x10A1C64
    static Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* CreatePrivateKeyInfo(::Array<::Il2CppChar>* passPhrase, Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encInfo);
    // static public Org.BouncyCastle.Asn1.Pkcs.PrivateKeyInfo CreatePrivateKeyInfo(System.Char[] passPhrase, System.Boolean wrongPkcs12Zero, Org.BouncyCastle.Asn1.Pkcs.EncryptedPrivateKeyInfo encInfo)
    // Offset: 0x10A1C70
    static Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* CreatePrivateKeyInfo(::Array<::Il2CppChar>* passPhrase, bool wrongPkcs12Zero, Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encInfo);
  }; // Org.BouncyCastle.Pkcs.PrivateKeyInfoFactory
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkcs::PrivateKeyInfoFactory*, "Org.BouncyCastle.Pkcs", "PrivateKeyInfoFactory");
#pragma pack(pop)
