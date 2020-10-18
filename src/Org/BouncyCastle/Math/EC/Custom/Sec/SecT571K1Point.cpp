// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Point
#include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT571K1Point.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECCurve
#include "Org/BouncyCastle/Math/EC/ECCurve.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECFieldElement
#include "Org/BouncyCastle/Math/EC/ECFieldElement.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECPoint
#include "Org/BouncyCastle/Math/EC/ECPoint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Point..ctor
Org::BouncyCastle::Math::EC::Custom::Sec::SecT571K1Point* Org::BouncyCastle::Math::EC::Custom::Sec::SecT571K1Point::New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y) {
  return THROW_UNLESS(il2cpp_utils::New<SecT571K1Point*>(curve, x, y));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Point..ctor
Org::BouncyCastle::Math::EC::Custom::Sec::SecT571K1Point* Org::BouncyCastle::Math::EC::Custom::Sec::SecT571K1Point::New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression) {
  return THROW_UNLESS(il2cpp_utils::New<SecT571K1Point*>(curve, x, y, withCompression));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Point..ctor
Org::BouncyCastle::Math::EC::Custom::Sec::SecT571K1Point* Org::BouncyCastle::Math::EC::Custom::Sec::SecT571K1Point::New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression) {
  return THROW_UNLESS(il2cpp_utils::New<SecT571K1Point*>(curve, x, y, zs, withCompression));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Point.get_YCoord
Org::BouncyCastle::Math::EC::ECFieldElement* Org::BouncyCastle::Math::EC::Custom::Sec::SecT571K1Point::get_YCoord() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECFieldElement*>(this, "get_YCoord"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Point.get_CompressionYTilde
bool Org::BouncyCastle::Math::EC::Custom::Sec::SecT571K1Point::get_CompressionYTilde() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CompressionYTilde"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Point.Add
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecT571K1Point::Add(Org::BouncyCastle::Math::EC::ECPoint* b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "Add", b));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Point.Twice
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecT571K1Point::Twice() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "Twice"));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Point.TwicePlus
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecT571K1Point::TwicePlus(Org::BouncyCastle::Math::EC::ECPoint* b) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "TwicePlus", b));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecT571K1Point.Negate
Org::BouncyCastle::Math::EC::ECPoint* Org::BouncyCastle::Math::EC::Custom::Sec::SecT571K1Point::Negate() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Math::EC::ECPoint*>(this, "Negate"));
}
