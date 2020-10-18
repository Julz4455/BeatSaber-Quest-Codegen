// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ISigner
  class ISigner;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Autogenerated type: Org.BouncyCastle.Security.SignerUtilities
  class SignerUtilities : public ::Il2CppObject {
    public:
    // Get static field: static readonly System.Collections.IDictionary algorithms
    static System::Collections::IDictionary* _get_algorithms();
    // Set static field: static readonly System.Collections.IDictionary algorithms
    static void _set_algorithms(System::Collections::IDictionary* value);
    // Get static field: static readonly System.Collections.IDictionary oids
    static System::Collections::IDictionary* _get_oids();
    // Set static field: static readonly System.Collections.IDictionary oids
    static void _set_oids(System::Collections::IDictionary* value);
    // static private System.Void .cctor()
    // Offset: 0x11DCD80
    static void _cctor();
    // static public Org.BouncyCastle.Crypto.ISigner GetSigner(System.String algorithm)
    // Offset: 0x11E7BDC
    static Org::BouncyCastle::Crypto::ISigner* GetSigner(::Il2CppString* algorithm);
    // static public System.String GetEncodingName(Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x11E8A5C
    static ::Il2CppString* GetEncodingName(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
  }; // Org.BouncyCastle.Security.SignerUtilities
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::SignerUtilities*, "Org.BouncyCastle.Security", "SignerUtilities");
#pragma pack(pop)
