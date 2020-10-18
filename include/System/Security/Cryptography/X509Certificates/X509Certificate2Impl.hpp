// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509CertificateImpl
#include "System/Security/Cryptography/X509Certificates/X509CertificateImpl.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509ExtensionCollection
  class X509ExtensionCollection;
  // Forward declaring type: X500DistinguishedName
  class X500DistinguishedName;
  // Forward declaring type: PublicKey
  class PublicKey;
  // Forward declaring type: X509CertificateImplCollection
  class X509CertificateImplCollection;
  // Forward declaring type: X509NameType
  struct X509NameType;
  // Forward declaring type: X509KeyStorageFlags
  struct X509KeyStorageFlags;
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
  // Forward declaring type: Oid
  class Oid;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
  class X509Certificate2Impl : public System::Security::Cryptography::X509Certificates::X509CertificateImpl {
    public:
    // public System.Security.Cryptography.X509Certificates.X509ExtensionCollection get_Extensions()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::X509Certificates::X509ExtensionCollection* get_Extensions();
    // public System.Security.Cryptography.X509Certificates.X500DistinguishedName get_IssuerName()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_IssuerName();
    // public System.Security.Cryptography.AsymmetricAlgorithm get_PrivateKey()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::AsymmetricAlgorithm* get_PrivateKey();
    // public System.Void set_PrivateKey(System.Security.Cryptography.AsymmetricAlgorithm value)
    // Offset: 0xFFFFFFFF
    void set_PrivateKey(System::Security::Cryptography::AsymmetricAlgorithm* value);
    // public System.Security.Cryptography.X509Certificates.PublicKey get_PublicKey()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::X509Certificates::PublicKey* get_PublicKey();
    // public System.Security.Cryptography.Oid get_SignatureAlgorithm()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::Oid* get_SignatureAlgorithm();
    // public System.Security.Cryptography.X509Certificates.X500DistinguishedName get_SubjectName()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::X509Certificates::X500DistinguishedName* get_SubjectName();
    // public System.Int32 get_Version()
    // Offset: 0xFFFFFFFF
    int get_Version();
    // System.Security.Cryptography.X509Certificates.X509CertificateImplCollection get_IntermediateCertificates()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::X509Certificates::X509CertificateImplCollection* get_IntermediateCertificates();
    // System.Security.Cryptography.X509Certificates.X509Certificate2Impl get_FallbackImpl()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::X509Certificates::X509Certificate2Impl* get_FallbackImpl();
    // public System.String GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType nameType, System.Boolean forIssuer)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* GetNameInfo(System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer);
    // public System.Void Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    // Offset: 0xFFFFFFFF
    void Import(::Array<uint8_t>* rawData, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    // public System.Boolean Verify(System.Security.Cryptography.X509Certificates.X509Certificate2 thisCertificate)
    // Offset: 0xFFFFFFFF
    bool Verify(System::Security::Cryptography::X509Certificates::X509Certificate2* thisCertificate);
    // public System.Void Reset()
    // Offset: 0xFFFFFFFF
    void Reset();
    // protected System.Void .ctor()
    // Offset: 0x16BC84C
    // Implemented from: System.Security.Cryptography.X509Certificates.X509CertificateImpl
    // Base method: System.Void X509CertificateImpl::.ctor()
    // Base method: System.Void Object::.ctor()
    static X509Certificate2Impl* New_ctor();
  }; // System.Security.Cryptography.X509Certificates.X509Certificate2Impl
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Certificate2Impl*, "System.Security.Cryptography.X509Certificates", "X509Certificate2Impl");
#pragma pack(pop)
