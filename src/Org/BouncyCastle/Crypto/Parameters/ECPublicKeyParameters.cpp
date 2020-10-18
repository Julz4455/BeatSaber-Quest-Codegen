// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/ECPublicKeyParameters.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECPoint
#include "Org/BouncyCastle/Math/EC/ECPoint.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.ECDomainParameters
#include "Org/BouncyCastle/Crypto/Parameters/ECDomainParameters.hpp"
// Including type: Org.BouncyCastle.Asn1.DerObjectIdentifier
#include "Org/BouncyCastle/Asn1/DerObjectIdentifier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters..ctor
Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::New_ctor(Org::BouncyCastle::Math::EC::ECPoint* q, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters) {
  return THROW_UNLESS(il2cpp_utils::New<ECPublicKeyParameters*>(q, parameters));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters..ctor
Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::New_ctor(::Il2CppString* algorithm, Org::BouncyCastle::Math::EC::ECPoint* q, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters) {
  return THROW_UNLESS(il2cpp_utils::New<ECPublicKeyParameters*>(algorithm, q, parameters));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters..ctor
Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::New_ctor(::Il2CppString* algorithm, Org::BouncyCastle::Math::EC::ECPoint* q, Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
  return THROW_UNLESS(il2cpp_utils::New<ECPublicKeyParameters*>(algorithm, q, publicKeyParamSet));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters.get_Q
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::get_Q() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "get_Q"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters.Equals
bool Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::Equals(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", other));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters.Equals
bool Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::Equals(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters.GetHashCode
int Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
