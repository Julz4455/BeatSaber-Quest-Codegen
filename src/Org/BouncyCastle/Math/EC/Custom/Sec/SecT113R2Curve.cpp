// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve
#include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT113R2Curve.hpp"
// Including type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve/SecT113R2LookupTable
#include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT113R2Curve_SecT113R2LookupTable.hpp"
// Including type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Point
#include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT113R2Point.hpp"
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
// Get static field: static private readonly Org.BouncyCastle.Math.EC.ECFieldElement[] SECT113R2_AFFINE_ZS
::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::_get_SECT113R2_AFFINE_ZS() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>*>("Org.BouncyCastle.Math.EC.Custom.Sec", "SecT113R2Curve", "SECT113R2_AFFINE_ZS"));
}
// Autogenerated static field setter
// Set static field: static private readonly Org.BouncyCastle.Math.EC.ECFieldElement[] SECT113R2_AFFINE_ZS
void Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::_set_SECT113R2_AFFINE_ZS(::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Math.EC.Custom.Sec", "SecT113R2Curve", "SECT113R2_AFFINE_ZS", value));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve..cctor
void Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecT113R2Curve", ".cctor"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve..ctor
Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve* Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<SecT113R2Curve*>());
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve.CloneCurve
Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::CloneCurve() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECCurve*>(this, "CloneCurve"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve.SupportsCoordinateSystem
bool Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::SupportsCoordinateSystem(int coord) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "SupportsCoordinateSystem", coord));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve.get_Infinity
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::get_Infinity() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "get_Infinity"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve.get_FieldSize
int Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::get_FieldSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_FieldSize"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve.FromBigInteger
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::FromBigInteger(Org::BouncyCastle::Math::BigInteger* x) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECFieldElement*>(this, "FromBigInteger", x));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve.CreateRawPoint
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "CreateRawPoint", x, y, withCompression));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve.CreateRawPoint
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "CreateRawPoint", x, y, zs, withCompression));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve.get_IsKoblitz
bool Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::get_IsKoblitz() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsKoblitz"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT113R2Curve.CreateCacheSafeLookupTable
Org::BouncyCastle::Math::EC::ECLookupTable* Org::BouncyCastle::Math::EC::Custom::Sec::SecT113R2Curve::CreateCacheSafeLookupTable(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* points, int off, int len) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECLookupTable*>(this, "CreateCacheSafeLookupTable", points, off, len));
}
