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
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Autogenerated type: Org.BouncyCastle.Asn1.X9.X9FieldElement
  class X9FieldElement : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private Org.BouncyCastle.Math.EC.ECFieldElement f
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::ECFieldElement* f;
    // Creating conversion operator: operator Org::BouncyCastle::Math::EC::ECFieldElement*
    constexpr operator Org::BouncyCastle::Math::EC::ECFieldElement*() const noexcept {
      return f;
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECFieldElement f)
    // Offset: 0x1875624
    static X9FieldElement* New_ctor(Org::BouncyCastle::Math::EC::ECFieldElement* f);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x18764B0
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X9.X9FieldElement
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::X9FieldElement*, "Org.BouncyCastle.Asn1.X9", "X9FieldElement");
#pragma pack(pop)
