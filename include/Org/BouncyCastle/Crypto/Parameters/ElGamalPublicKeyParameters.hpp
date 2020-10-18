// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/ElGamalKeyParameters.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ElGamalParameters
  class ElGamalParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ElGamalPublicKeyParameters
  class ElGamalPublicKeyParameters : public Org::BouncyCastle::Crypto::Parameters::ElGamalKeyParameters {
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger y
    // Offset: 0x20
    Org::BouncyCastle::Math::BigInteger* y;
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger y, Org.BouncyCastle.Crypto.Parameters.ElGamalParameters parameters)
    // Offset: 0x10F1DD8
    static ElGamalPublicKeyParameters* New_ctor(Org::BouncyCastle::Math::BigInteger* y, Org::BouncyCastle::Crypto::Parameters::ElGamalParameters* parameters);
    // public Org.BouncyCastle.Math.BigInteger get_Y()
    // Offset: 0x10F1E94
    Org::BouncyCastle::Math::BigInteger* get_Y();
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.ElGamalPublicKeyParameters other)
    // Offset: 0x10F1F4C
    bool Equals(Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x10F1E9C
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters
    // Base method: System.Boolean ElGamalKeyParameters::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x10F1FA8
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.ElGamalKeyParameters
    // Base method: System.Int32 ElGamalKeyParameters::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.ElGamalPublicKeyParameters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ElGamalPublicKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "ElGamalPublicKeyParameters");
#pragma pack(pop)
