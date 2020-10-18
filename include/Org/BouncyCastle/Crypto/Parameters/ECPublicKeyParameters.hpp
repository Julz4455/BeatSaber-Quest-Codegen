// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/ECKeyParameters.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ECDomainParameters
  class ECDomainParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters
  class ECPublicKeyParameters : public Org::BouncyCastle::Crypto::Parameters::ECKeyParameters {
    public:
    // private readonly Org.BouncyCastle.Math.EC.ECPoint q
    // Offset: 0x30
    Org::BouncyCastle::Math::EC::ECPoint* q;
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECPoint q, Org.BouncyCastle.Crypto.Parameters.ECDomainParameters parameters)
    // Offset: 0x10F068C
    static ECPublicKeyParameters* New_ctor(Org::BouncyCastle::Math::EC::ECPoint* q, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters);
    // public System.Void .ctor(System.String algorithm, Org.BouncyCastle.Math.EC.ECPoint q, Org.BouncyCastle.Crypto.Parameters.ECDomainParameters parameters)
    // Offset: 0x10F06F4
    static ECPublicKeyParameters* New_ctor(::Il2CppString* algorithm, Org::BouncyCastle::Math::EC::ECPoint* q, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters);
    // public System.Void .ctor(System.String algorithm, Org.BouncyCastle.Math.EC.ECPoint q, Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet)
    // Offset: 0x10F07A8
    static ECPublicKeyParameters* New_ctor(::Il2CppString* algorithm, Org::BouncyCastle::Math::EC::ECPoint* q, Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);
    // public Org.BouncyCastle.Math.EC.ECPoint get_Q()
    // Offset: 0x10F085C
    Org::BouncyCastle::Math::EC::ECPoint* get_Q();
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters other)
    // Offset: 0x10F0914
    bool Equals(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x10F0864
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
    // Base method: System.Boolean ECKeyParameters::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x10F0974
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
    // Base method: System.Int32 ECKeyParameters::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "ECPublicKeyParameters");
#pragma pack(pop)
