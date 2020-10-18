// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom
  class ParametersWithRandom : public ::Il2CppObject, public Org::BouncyCastle::Crypto::ICipherParameters {
    public:
    // private readonly Org.BouncyCastle.Crypto.ICipherParameters parameters
    // Offset: 0x10
    Org::BouncyCastle::Crypto::ICipherParameters* parameters;
    // private readonly Org.BouncyCastle.Security.SecureRandom random
    // Offset: 0x18
    Org::BouncyCastle::Security::SecureRandom* random;
    // public Org.BouncyCastle.Security.SecureRandom get_Random()
    // Offset: 0x10F2894
    Org::BouncyCastle::Security::SecureRandom* get_Random();
    // public Org.BouncyCastle.Crypto.ICipherParameters get_Parameters()
    // Offset: 0x10F289C
    Org::BouncyCastle::Crypto::ICipherParameters* get_Parameters();
  }; // Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ParametersWithRandom*, "Org.BouncyCastle.Crypto.Parameters", "ParametersWithRandom");
#pragma pack(pop)
