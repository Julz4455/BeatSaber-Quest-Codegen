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
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Gost3410ValidationParameters
  class Gost3410ValidationParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters
  class Gost3410Parameters : public ::Il2CppObject, public Org::BouncyCastle::Crypto::ICipherParameters {
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger p
    // Offset: 0x10
    Org::BouncyCastle::Math::BigInteger* p;
    // private readonly Org.BouncyCastle.Math.BigInteger q
    // Offset: 0x18
    Org::BouncyCastle::Math::BigInteger* q;
    // private readonly Org.BouncyCastle.Math.BigInteger a
    // Offset: 0x20
    Org::BouncyCastle::Math::BigInteger* a;
    // private readonly Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters validation
    // Offset: 0x28
    Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* validation;
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger p, Org.BouncyCastle.Math.BigInteger q, Org.BouncyCastle.Math.BigInteger a)
    // Offset: 0x10F2194
    static Gost3410Parameters* New_ctor(Org::BouncyCastle::Math::BigInteger* p, Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* a);
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger p, Org.BouncyCastle.Math.BigInteger q, Org.BouncyCastle.Math.BigInteger a, Org.BouncyCastle.Crypto.Parameters.Gost3410ValidationParameters validation)
    // Offset: 0x10F219C
    static Gost3410Parameters* New_ctor(Org::BouncyCastle::Math::BigInteger* p, Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* a, Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* validation);
    // public Org.BouncyCastle.Math.BigInteger get_P()
    // Offset: 0x10F22C4
    Org::BouncyCastle::Math::BigInteger* get_P();
    // public Org.BouncyCastle.Math.BigInteger get_Q()
    // Offset: 0x10F22CC
    Org::BouncyCastle::Math::BigInteger* get_Q();
    // public Org.BouncyCastle.Math.BigInteger get_A()
    // Offset: 0x10F22D4
    Org::BouncyCastle::Math::BigInteger* get_A();
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters other)
    // Offset: 0x10F238C
    bool Equals(Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x10F22DC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x10F2410
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*, "Org.BouncyCastle.Crypto.Parameters", "Gost3410Parameters");
#pragma pack(pop)
