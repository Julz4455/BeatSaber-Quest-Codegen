// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.X509.X509Extension
#include "Org/BouncyCastle/Asn1/X509/X509Extension.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1OctetString
#include "Org/BouncyCastle/Asn1/Asn1OctetString.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Object
#include "Org/BouncyCastle/Asn1/Asn1Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Asn1.X509.X509Extension..ctor
Org::BouncyCastle::Asn1::X509::X509Extension* Org::BouncyCastle::Asn1::X509::X509Extension::New_ctor(bool critical, Org::BouncyCastle::Asn1::Asn1OctetString* value) {
  return THROW_UNLESS(il2cpp_utils::New<X509Extension*>(critical, value));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.X509Extension.get_IsCritical
bool Org::BouncyCastle::Asn1::X509::X509Extension::get_IsCritical() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsCritical"));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.X509Extension.get_Value
Org::BouncyCastle::Asn1::Asn1OctetString* Org::BouncyCastle::Asn1::X509::X509Extension::get_Value() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::Asn1OctetString*>(this, "get_Value"));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.X509Extension.ConvertValueToObject
Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::X509::X509Extension::ConvertValueToObject(Org::BouncyCastle::Asn1::X509::X509Extension* ext) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::Asn1Object*>("Org.BouncyCastle.Asn1.X509", "X509Extension", "ConvertValueToObject", ext));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.X509Extension.GetHashCode
int Org::BouncyCastle::Asn1::X509::X509Extension::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
// Autogenerated method: Org.BouncyCastle.Asn1.X509.X509Extension.Equals
bool Org::BouncyCastle::Asn1::X509::X509Extension::Equals(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
}
