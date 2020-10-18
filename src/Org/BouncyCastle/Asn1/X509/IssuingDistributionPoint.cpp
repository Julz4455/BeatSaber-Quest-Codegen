// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint
#include "Org/BouncyCastle/Asn1/X509/IssuingDistributionPoint.hpp"
// Including type: Org.BouncyCastle.Asn1.X509.DistributionPointName
#include "Org/BouncyCastle/Asn1/X509/DistributionPointName.hpp"
// Including type: Org.BouncyCastle.Asn1.X509.ReasonFlags
#include "Org/BouncyCastle/Asn1/X509/ReasonFlags.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Sequence
#include "Org/BouncyCastle/Asn1/Asn1Sequence.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint.GetInstance
Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::GetInstance(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint*>("Org.BouncyCastle.Asn1.X509", "IssuingDistributionPoint", "GetInstance", obj));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint..ctor
Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint* Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
  return THROW_UNLESS(il2cpp_utils::New<IssuingDistributionPoint*>(seq));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint.get_IsIndirectCrl
bool Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::get_IsIndirectCrl() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsIndirectCrl"));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint.appendObject
void Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::appendObject(System::Text::StringBuilder* buf, ::Il2CppString* sep, ::Il2CppString* name, ::Il2CppString* val) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "appendObject", buf, sep, name, val));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint.ToAsn1Object
Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::ToAsn1Object() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::Asn1Object*>(this, "ToAsn1Object"));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.IssuingDistributionPoint.ToString
::Il2CppString* Org::BouncyCastle::Asn1::X509::IssuingDistributionPoint::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}
