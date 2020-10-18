// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1OctetString
  class Asn1OctetString;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.X509Extension
  class X509Extension : public ::Il2CppObject {
    public:
    // System.Boolean critical
    // Offset: 0x10
    bool critical;
    // Org.BouncyCastle.Asn1.Asn1OctetString value
    // Offset: 0x18
    Org::BouncyCastle::Asn1::Asn1OctetString* value;
    // public System.Void .ctor(System.Boolean critical, Org.BouncyCastle.Asn1.Asn1OctetString value)
    // Offset: 0x186ACB0
    static X509Extension* New_ctor(bool critical, Org::BouncyCastle::Asn1::Asn1OctetString* value);
    // public System.Boolean get_IsCritical()
    // Offset: 0x186ACF8
    bool get_IsCritical();
    // public Org.BouncyCastle.Asn1.Asn1OctetString get_Value()
    // Offset: 0x186AD00
    Org::BouncyCastle::Asn1::Asn1OctetString* get_Value();
    // static public Org.BouncyCastle.Asn1.Asn1Object ConvertValueToObject(Org.BouncyCastle.Asn1.X509.X509Extension ext)
    // Offset: 0x1863824
    static Org::BouncyCastle::Asn1::Asn1Object* ConvertValueToObject(Org::BouncyCastle::Asn1::X509::X509Extension* ext);
    // public override System.Int32 GetHashCode()
    // Offset: 0x186AD08
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x186AD44
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // Org.BouncyCastle.Asn1.X509.X509Extension
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::X509Extension*, "Org.BouncyCastle.Asn1.X509", "X509Extension");
#pragma pack(pop)
