// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1OctetString
  class Asn1OctetString;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.RC2CbcParameter
  class RC2CbcParameter : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // Org.BouncyCastle.Asn1.DerInteger version
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerInteger* version;
    // Org.BouncyCastle.Asn1.Asn1OctetString iv
    // Offset: 0x18
    Org::BouncyCastle::Asn1::Asn1OctetString* iv;
    // static public Org.BouncyCastle.Asn1.Pkcs.RC2CbcParameter GetInstance(System.Object obj)
    // Offset: 0x1635C20
    static Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter* GetInstance(::Il2CppObject* obj);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1635D7C
    static RC2CbcParameter* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq);
    // public System.Byte[] GetIV()
    // Offset: 0x1635EC4
    ::Array<uint8_t>* GetIV();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1635F4C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.RC2CbcParameter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Pkcs::RC2CbcParameter*, "Org.BouncyCastle.Asn1.Pkcs", "RC2CbcParameter");
#pragma pack(pop)
