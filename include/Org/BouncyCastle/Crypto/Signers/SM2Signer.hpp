// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.ISigner
#include "Org/BouncyCastle/Crypto/ISigner.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Forward declaring type: IDsaKCalculator
  class IDsaKCalculator;
  // Forward declaring type: IDsaEncoding
  class IDsaEncoding;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ECDomainParameters
  class ECDomainParameters;
  // Forward declaring type: ECKeyParameters
  class ECKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: ECMultiplier
  class ECMultiplier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.SM2Signer
  class SM2Signer : public ::Il2CppObject, public Org::BouncyCastle::Crypto::ISigner {
    public:
    // private readonly Org.BouncyCastle.Crypto.Signers.IDsaKCalculator kCalculator
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator;
    // private readonly Org.BouncyCastle.Crypto.IDigest digest
    // Offset: 0x18
    Org::BouncyCastle::Crypto::IDigest* digest;
    // private readonly Org.BouncyCastle.Crypto.Signers.IDsaEncoding encoding
    // Offset: 0x20
    Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding;
    // private Org.BouncyCastle.Crypto.Parameters.ECDomainParameters ecParams
    // Offset: 0x28
    Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams;
    // private Org.BouncyCastle.Math.EC.ECPoint pubPoint
    // Offset: 0x30
    Org::BouncyCastle::Math::EC::ECPoint* pubPoint;
    // private Org.BouncyCastle.Crypto.Parameters.ECKeyParameters ecKey
    // Offset: 0x38
    Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* ecKey;
    // private System.Byte[] z
    // Offset: 0x40
    ::Array<uint8_t>* z;
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x10FD8E0
    static SM2Signer* New_ctor(Org::BouncyCastle::Crypto::IDigest* digest);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Signers.IDsaEncoding encoding, Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x10FD960
    static SM2Signer* New_ctor(Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding, Org::BouncyCastle::Crypto::IDigest* digest);
    // private System.Byte[] GetZ(System.Byte[] userID)
    // Offset: 0x10FE020
    ::Array<uint8_t>* GetZ(::Array<uint8_t>* userID);
    // private System.Void AddUserID(Org.BouncyCastle.Crypto.IDigest digest, System.Byte[] userID)
    // Offset: 0x10FE764
    void AddUserID(Org::BouncyCastle::Crypto::IDigest* digest, ::Array<uint8_t>* userID);
    // private System.Void AddFieldElement(Org.BouncyCastle.Crypto.IDigest digest, Org.BouncyCastle.Math.EC.ECFieldElement v)
    // Offset: 0x10FE90C
    void AddFieldElement(Org::BouncyCastle::Crypto::IDigest* digest, Org::BouncyCastle::Math::EC::ECFieldElement* v);
    // protected Org.BouncyCastle.Math.BigInteger CalculateE(Org.BouncyCastle.Math.BigInteger n, System.Byte[] message)
    // Offset: 0x10FE9F8
    Org::BouncyCastle::Math::BigInteger* CalculateE(Org::BouncyCastle::Math::BigInteger* n, ::Array<uint8_t>* message);
    // protected Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier CreateBasePointMultiplier()
    // Offset: 0x10FEA5C
    Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateBasePointMultiplier();
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x10FDA04
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] buf, System.Int32 off, System.Int32 len)
    // Offset: 0x10FE1A8
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::BlockUpdate(System.Byte[] buf, System.Int32 off, System.Int32 len)
    void BlockUpdate(::Array<uint8_t>* buf, int off, int len);
    // public System.Byte[] GenerateSignature()
    // Offset: 0x10FE284
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Byte[] ISigner::GenerateSignature()
    ::Array<uint8_t>* GenerateSignature();
  }; // Org.BouncyCastle.Crypto.Signers.SM2Signer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::SM2Signer*, "Org.BouncyCastle.Crypto.Signers", "SM2Signer");
#pragma pack(pop)
