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
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: DistributionPointName
  class DistributionPointName;
  // Forward declaring type: ReasonFlags
  class ReasonFlags;
  // Forward declaring type: GeneralNames
  class GeneralNames;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.DistributionPoint
  class DistributionPoint : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // readonly Org.BouncyCastle.Asn1.X509.DistributionPointName distributionPoint
    // Offset: 0x10
    Org::BouncyCastle::Asn1::X509::DistributionPointName* distributionPoint;
    // readonly Org.BouncyCastle.Asn1.X509.ReasonFlags reasons
    // Offset: 0x18
    Org::BouncyCastle::Asn1::X509::ReasonFlags* reasons;
    // readonly Org.BouncyCastle.Asn1.X509.GeneralNames cRLIssuer
    // Offset: 0x20
    Org::BouncyCastle::Asn1::X509::GeneralNames* cRLIssuer;
    // static public Org.BouncyCastle.Asn1.X509.DistributionPoint GetInstance(System.Object obj)
    // Offset: 0x1864714
    static Org::BouncyCastle::Asn1::X509::DistributionPoint* GetInstance(::Il2CppObject* obj);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x18654A8
    static DistributionPoint* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq);
    // private System.Void appendObject(System.Text.StringBuilder buf, System.String sep, System.String name, System.String val)
    // Offset: 0x186597C
    void appendObject(System::Text::StringBuilder* buf, ::Il2CppString* sep, ::Il2CppString* name, ::Il2CppString* val);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x186572C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
    // public override System.String ToString()
    // Offset: 0x18657FC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.Asn1.X509.DistributionPoint
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::DistributionPoint*, "Org.BouncyCastle.Asn1.X509", "DistributionPoint");
#pragma pack(pop)
