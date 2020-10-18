// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT193R1Curve
#include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT193R1Curve.hpp"
// Including type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT193R1Curve/SecT193R1LookupTable
#include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT193R1Curve_SecT193R1LookupTable.hpp"
// Including type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT193R1Point
#include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT193R1Point.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECFieldElement
#include "Org/BouncyCastle/Math/EC/ECFieldElement.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECPoint
#include "Org/BouncyCastle/Math/EC/ECPoint.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECLookupTable
#include "Org/BouncyCastle/Math/EC/ECLookupTable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly Org.BouncyCastle.Math.EC.ECFieldElement[] SECT193R1_AFFINE_ZS
::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Curve::_get_SECT193R1_AFFINE_ZS() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>*>("Org.BouncyCastle.Math.EC.Custom.Sec", "SecT193R1Curve", "SECT193R1_AFFINE_ZS"));
}
// Autogenerated static field setter
// Set static field: static private readonly Org.BouncyCastle.Math.EC.ECFieldElement[] SECT193R1_AFFINE_ZS
void Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Curve::_set_SECT193R1_AFFINE_ZS(::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Math.EC.Custom.Sec", "SecT193R1Curve", "SECT193R1_AFFINE_ZS", value));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT193R1Curve..cctor
void Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Curve::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecT193R1Curve", ".cctor"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT193R1Curve..ctor
Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Curve* Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Curve::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<SecT193R1Curve*>());
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT193R1Curve.CloneCurve
Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Curve::CloneCurve() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECCurve*>(this, "CloneCurve"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT193R1Curve.SupportsCoordinateSystem
bool Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Curve::SupportsCoordinateSystem(int coord) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "SupportsCoordinateSystem", coord));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT193R1Curve.get_Infinity
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Curve::get_Infinity() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "get_Infinity"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT193R1Curve.get_FieldSize
int Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Curve::get_FieldSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_FieldSize"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT193R1Curve.FromBigInteger
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Curve::FromBigInteger(Org::BouncyCastle::Math::BigInteger* x) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECFieldElement*>(this, "FromBigInteger", x));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT193R1Curve.CreateRawPoint
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Curve::CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "CreateRawPoint", x, y, withCompression));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT193R1Curve.CreateRawPoint
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Curve::CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "CreateRawPoint", x, y, zs, withCompression));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT193R1Curve.get_IsKoblitz
bool Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Curve::get_IsKoblitz() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsKoblitz"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT193R1Curve.CreateCacheSafeLookupTable
Org::BouncyCastle::Math::EC::ECLookupTable* Org::BouncyCastle::Math::EC::Custom::Sec::SecT193R1Curve::CreateCacheSafeLookupTable(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* points, int off, int len) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECLookupTable*>(this, "CreateCacheSafeLookupTable", points, off, len));
}
