// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.X509.X509Crl
#include "Mono/Security/X509/X509Crl.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509ExtensionCollection
  class X509ExtensionCollection;
}
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Autogenerated type: Mono.Security.X509.X509Crl/X509CrlEntry
  class X509Crl::X509CrlEntry : public ::Il2CppObject {
    public:
    // private System.Byte[] sn
    // Offset: 0x10
    ::Array<uint8_t>* sn;
    // private System.DateTime revocationDate
    // Offset: 0x18
    System::DateTime revocationDate;
    // private Mono.Security.X509.X509ExtensionCollection extensions
    // Offset: 0x20
    Mono::Security::X509::X509ExtensionCollection* extensions;
    // System.Void .ctor(Mono.Security.ASN1 entry)
    // Offset: 0x21E2BBC
    static X509Crl::X509CrlEntry* New_ctor(Mono::Security::ASN1* entry);
    // public System.Byte[] get_SerialNumber()
    // Offset: 0x21E30F8
    ::Array<uint8_t>* get_SerialNumber();
    // public System.DateTime get_RevocationDate()
    // Offset: 0x21E3668
    System::DateTime get_RevocationDate();
    // public Mono.Security.X509.X509ExtensionCollection get_Extensions()
    // Offset: 0x21E3670
    Mono::Security::X509::X509ExtensionCollection* get_Extensions();
  }; // Mono.Security.X509.X509Crl/X509CrlEntry
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::X509Crl::X509CrlEntry*, "Mono.Security.X509", "X509Crl/X509CrlEntry");
#pragma pack(pop)
