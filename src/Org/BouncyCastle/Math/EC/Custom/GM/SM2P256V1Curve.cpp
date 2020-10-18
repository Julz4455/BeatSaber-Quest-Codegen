// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve
#include "Org/BouncyCastle/Math/EC/Custom/GM/SM2P256V1Curve.hpp"
// Including type: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve/SM2P256V1LookupTable
#include "Org/BouncyCastle/Math/EC/Custom/GM/SM2P256V1Curve_SM2P256V1LookupTable.hpp"
// Including type: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Point
#include "Org/BouncyCastle/Math/EC/Custom/GM/SM2P256V1Point.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECFieldElement
#include "Org/BouncyCastle/Math/EC/ECFieldElement.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECPoint
#include "Org/BouncyCastle/Math/EC/ECPoint.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECLookupTable
#include "Org/BouncyCastle/Math/EC/ECLookupTable.hpp"
// Including type: Org.BouncyCastle.Security.SecureRandom
#include "Org/BouncyCastle/Security/SecureRandom.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public readonly Org.BouncyCastle.Math.BigInteger q
Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve::_get_q() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Org::BouncyCastle::Math::BigInteger*>("Org.BouncyCastle.Math.EC.Custom.GM", "SM2P256V1Curve", "q"));
}
// Autogenerated static field setter
// Set static field: static public readonly Org.BouncyCastle.Math.BigInteger q
void Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve::_set_q(Org::BouncyCastle::Math::BigInteger* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Math.EC.Custom.GM", "SM2P256V1Curve", "q", value));
}
// Autogenerated static field getter
// Get static field: static private readonly Org.BouncyCastle.Math.EC.ECFieldElement[] SM2P256V1_AFFINE_ZS
::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve::_get_SM2P256V1_AFFINE_ZS() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>*>("Org.BouncyCastle.Math.EC.Custom.GM", "SM2P256V1Curve", "SM2P256V1_AFFINE_ZS"));
}
// Autogenerated static field setter
// Set static field: static private readonly Org.BouncyCastle.Math.EC.ECFieldElement[] SM2P256V1_AFFINE_ZS
void Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve::_set_SM2P256V1_AFFINE_ZS(::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Math.EC.Custom.GM", "SM2P256V1Curve", "SM2P256V1_AFFINE_ZS", value));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve..cctor
void Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC.Custom.GM", "SM2P256V1Curve", ".cctor"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve..ctor
Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve* Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<SM2P256V1Curve*>());
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve.CloneCurve
Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve::CloneCurve() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECCurve*>(this, "CloneCurve"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve.SupportsCoordinateSystem
bool Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve::SupportsCoordinateSystem(int coord) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "SupportsCoordinateSystem", coord));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve.get_Infinity
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve::get_Infinity() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "get_Infinity"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve.get_FieldSize
int Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve::get_FieldSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_FieldSize"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve.FromBigInteger
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve::FromBigInteger(Org::BouncyCastle::Math::BigInteger* x) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECFieldElement*>(this, "FromBigInteger", x));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve.CreateRawPoint
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve::CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "CreateRawPoint", x, y, withCompression));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve.CreateRawPoint
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve::CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "CreateRawPoint", x, y, zs, withCompression));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve.CreateCacheSafeLookupTable
Org::BouncyCastle::Math::EC::ECLookupTable* Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve::CreateCacheSafeLookupTable(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* points, int off, int len) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECLookupTable*>(this, "CreateCacheSafeLookupTable", points, off, len));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.GM.SM2P256V1Curve.RandomFieldElementMult
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::GM::SM2P256V1Curve::RandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom* r) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECFieldElement*>(this, "RandomFieldElementMult", r));
}
