// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Org.BouncyCastle.Math.EC.AbstractFpCurve
#include "Org/BouncyCastle/Math/EC/AbstractFpCurve.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
// Including type: Org.BouncyCastle.Security.SecureRandom
#include "Org/BouncyCastle/Security/SecureRandom.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECFieldElement
#include "Org/BouncyCastle/Math/EC/ECFieldElement.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECPoint
#include "Org/BouncyCastle/Math/EC/ECPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Math.EC.AbstractFpCurve..ctor
Org::BouncyCastle::Math::EC::AbstractFpCurve* Org::BouncyCastle::Math::EC::AbstractFpCurve::New_ctor(Org::BouncyCastle::Math::BigInteger* q) {
  return THROW_UNLESS(il2cpp_utils::New<AbstractFpCurve*>(q));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.AbstractFpCurve.ImplRandomFieldElementMult
Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::AbstractFpCurve::ImplRandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom* r, Org::BouncyCastle::Math::BigInteger* p) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::BigInteger*>("Org.BouncyCastle.Math.EC", "AbstractFpCurve", "ImplRandomFieldElementMult", r, p));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.AbstractFpCurve.RandomFieldElementMult
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::AbstractFpCurve::RandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom* r) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECFieldElement*>(this, "RandomFieldElementMult", r));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.AbstractFpCurve.DecompressPoint
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::AbstractFpCurve::DecompressPoint(int yTilde, Org::BouncyCastle::Math::BigInteger* X1) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "DecompressPoint", yTilde, X1));
}
