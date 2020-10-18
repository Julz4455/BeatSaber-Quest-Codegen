// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.ECPoint
#include "Org/BouncyCastle/Math/EC/ECPoint.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECPoint/ValidityCallback
#include "Org/BouncyCastle/Math/EC/ECPoint_ValidityCallback.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECCurve
#include "Org/BouncyCastle/Math/EC/ECCurve.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECFieldElement
#include "Org/BouncyCastle/Math/EC/ECFieldElement.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
// Including type: Org.BouncyCastle.Security.SecureRandom
#include "Org/BouncyCastle/Security/SecureRandom.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly Org.BouncyCastle.Security.SecureRandom Random
Org::BouncyCastle::Security::SecureRandom* Org::BouncyCastle::Math::EC::ECPoint::_get_Random() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Org::BouncyCastle::Security::SecureRandom*>("Org.BouncyCastle.Math.EC", "ECPoint", "Random"));
}
// Autogenerated static field setter
// Set static field: static private readonly Org.BouncyCastle.Security.SecureRandom Random
void Org::BouncyCastle::Math::EC::ECPoint::_set_Random(Org::BouncyCastle::Security::SecureRandom* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Math.EC", "ECPoint", "Random", value));
}
// Autogenerated static field getter
// Get static field: static protected Org.BouncyCastle.Math.EC.ECFieldElement[] EMPTY_ZS
::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* Org::BouncyCastle::Math::EC::ECPoint::_get_EMPTY_ZS() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>*>("Org.BouncyCastle.Math.EC", "ECPoint", "EMPTY_ZS"));
}
// Autogenerated static field setter
// Set static field: static protected Org.BouncyCastle.Math.EC.ECFieldElement[] EMPTY_ZS
void Org::BouncyCastle::Math::EC::ECPoint::_set_EMPTY_ZS(::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Math.EC", "ECPoint", "EMPTY_ZS", value));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.GetInitialZCoords
::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* Org::BouncyCastle::Math::EC::ECPoint::GetInitialZCoords(Org::BouncyCastle::Math::EC::ECCurve* curve) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>*>("Org.BouncyCastle.Math.EC", "ECPoint", "GetInitialZCoords", curve));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint..ctor
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECPoint::New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
  return THROW_UNLESS(il2cpp_utils::New<ECPoint*>(curve, x, y, withCompression));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint..ctor
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECPoint::New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression) {
  return THROW_UNLESS(il2cpp_utils::New<ECPoint*>(curve, x, y, zs, withCompression));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.SatisfiesCurveEquation
bool Org::BouncyCastle::Math::EC::ECPoint::SatisfiesCurveEquation() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "SatisfiesCurveEquation"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.SatisfiesOrder
bool Org::BouncyCastle::Math::EC::ECPoint::SatisfiesOrder() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "SatisfiesOrder"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.get_Curve
Org::BouncyCastle::Math::EC::ECCurve* Org::BouncyCastle::Math::EC::ECPoint::get_Curve() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECCurve*>(this, "get_Curve"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.get_CurveCoordinateSystem
int Org::BouncyCastle::Math::EC::ECPoint::get_CurveCoordinateSystem() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_CurveCoordinateSystem"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.get_AffineXCoord
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::ECPoint::get_AffineXCoord() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECFieldElement*>(this, "get_AffineXCoord"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.get_AffineYCoord
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::ECPoint::get_AffineYCoord() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECFieldElement*>(this, "get_AffineYCoord"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.get_XCoord
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::ECPoint::get_XCoord() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECFieldElement*>(this, "get_XCoord"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.get_YCoord
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::ECPoint::get_YCoord() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECFieldElement*>(this, "get_YCoord"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.GetZCoord
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::ECPoint::GetZCoord(int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECFieldElement*>(this, "GetZCoord", index));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.get_RawXCoord
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::ECPoint::get_RawXCoord() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECFieldElement*>(this, "get_RawXCoord"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.get_RawYCoord
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::ECPoint::get_RawYCoord() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECFieldElement*>(this, "get_RawYCoord"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.get_RawZCoords
::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* Org::BouncyCastle::Math::EC::ECPoint::get_RawZCoords() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>*>(this, "get_RawZCoords"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.CheckNormalized
void Org::BouncyCastle::Math::EC::ECPoint::CheckNormalized() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CheckNormalized"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.IsNormalized
bool Org::BouncyCastle::Math::EC::ECPoint::IsNormalized() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsNormalized"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.Normalize
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECPoint::Normalize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "Normalize"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.Normalize
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECPoint::Normalize(Org::BouncyCastle::Math::EC::ECFieldElement* zInv) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "Normalize", zInv));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.CreateScaledPoint
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECPoint::CreateScaledPoint(Org::BouncyCastle::Math::EC::ECFieldElement* sx, Org::BouncyCastle::Math::EC::ECFieldElement* sy) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "CreateScaledPoint", sx, sy));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.get_IsInfinity
bool Org::BouncyCastle::Math::EC::ECPoint::get_IsInfinity() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsInfinity"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.get_IsCompressed
bool Org::BouncyCastle::Math::EC::ECPoint::get_IsCompressed() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsCompressed"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.IsValid
bool Org::BouncyCastle::Math::EC::ECPoint::IsValid() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsValid"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.IsValidPartial
bool Org::BouncyCastle::Math::EC::ECPoint::IsValidPartial() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsValidPartial"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.ImplIsValid
bool Org::BouncyCastle::Math::EC::ECPoint::ImplIsValid(bool decompressed, bool checkOrder) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ImplIsValid", decompressed, checkOrder));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.ScaleX
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECPoint::ScaleX(Org::BouncyCastle::Math::EC::ECFieldElement* scale) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "ScaleX", scale));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.ScaleY
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECPoint::ScaleY(Org::BouncyCastle::Math::EC::ECFieldElement* scale) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "ScaleY", scale));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.Equals
bool Org::BouncyCastle::Math::EC::ECPoint::Equals(Org::BouncyCastle::Math::EC::ECPoint* other) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", other));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.GetEncoded
::Array<uint8_t>* Org::BouncyCastle::Math::EC::ECPoint::GetEncoded(bool compressed) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GetEncoded", compressed));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.get_CompressionYTilde
bool Org::BouncyCastle::Math::EC::ECPoint::get_CompressionYTilde() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CompressionYTilde"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.Add
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECPoint::Add(Org::BouncyCastle::Math::EC::ECPoint* b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "Add", b));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.Subtract
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECPoint::Subtract(Org::BouncyCastle::Math::EC::ECPoint* b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "Subtract", b));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.Negate
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECPoint::Negate() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "Negate"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.TimesPow2
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECPoint::TimesPow2(int e) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "TimesPow2", e));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.Twice
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECPoint::Twice() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "Twice"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.Multiply
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECPoint::Multiply(Org::BouncyCastle::Math::BigInteger* b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "Multiply", b));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.TwicePlus
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECPoint::TwicePlus(Org::BouncyCastle::Math::EC::ECPoint* b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "TwicePlus", b));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.ThreeTimes
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::ECPoint::ThreeTimes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "ThreeTimes"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint..cctor
void Org::BouncyCastle::Math::EC::ECPoint::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC", "ECPoint", ".cctor"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.Equals
bool Org::BouncyCastle::Math::EC::ECPoint::Equals(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.GetHashCode
int Org::BouncyCastle::Math::EC::ECPoint::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.ECPoint.ToString
::Il2CppString* Org::BouncyCastle::Math::EC::ECPoint::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}
