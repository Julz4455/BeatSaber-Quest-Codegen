// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.X509.X509V2AttributeCertificate
#include "Org/BouncyCastle/X509/X509V2AttributeCertificate.hpp"
// Including type: Org.BouncyCastle.Asn1.X509.AttributeCertificate
#include "Org/BouncyCastle/Asn1/X509/AttributeCertificate.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: Org.BouncyCastle.Asn1.X509.X509Extensions
#include "Org/BouncyCastle/Asn1/X509/X509Extensions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.X509.X509V2AttributeCertificate.GetObject
Org::BouncyCastle::Asn1::X509::AttributeCertificate* Org::BouncyCastle::X509::X509V2AttributeCertificate::GetObject(System::IO::Stream* input) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::X509::AttributeCertificate*>("Org.BouncyCastle.X509", "X509V2AttributeCertificate", "GetObject", input));
}
// Autogenerated method: Org.BouncyCastle.X509.X509V2AttributeCertificate..ctor
Org::BouncyCastle::X509::X509V2AttributeCertificate* Org::BouncyCastle::X509::X509V2AttributeCertificate::New_ctor(System::IO::Stream* encIn) {
  return THROW_UNLESS(il2cpp_utils::New<X509V2AttributeCertificate*>(encIn));
}
// Autogenerated method: Org.BouncyCastle.X509.X509V2AttributeCertificate..ctor
Org::BouncyCastle::X509::X509V2AttributeCertificate* Org::BouncyCastle::X509::X509V2AttributeCertificate::New_ctor(::Array<uint8_t>* encoded) {
  return THROW_UNLESS(il2cpp_utils::New<X509V2AttributeCertificate*>(encoded));
}
// Autogenerated method: Org.BouncyCastle.X509.X509V2AttributeCertificate..ctor
Org::BouncyCastle::X509::X509V2AttributeCertificate* Org::BouncyCastle::X509::X509V2AttributeCertificate::New_ctor(Org::BouncyCastle::Asn1::X509::AttributeCertificate* cert) {
  return THROW_UNLESS(il2cpp_utils::New<X509V2AttributeCertificate*>(cert));
}
// Autogenerated method: Org.BouncyCastle.X509.X509V2AttributeCertificate.GetX509Extensions
Org::BouncyCastle::Asn1::X509::X509Extensions* Org::BouncyCastle::X509::X509V2AttributeCertificate::GetX509Extensions() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Asn1::X509::X509Extensions*>(this, "GetX509Extensions"));
}
// Autogenerated method: Org.BouncyCastle.X509.X509V2AttributeCertificate.Equals
bool Org::BouncyCastle::X509::X509V2AttributeCertificate::Equals(::Il2CppObject* obj) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
}
// Autogenerated method: Org.BouncyCastle.X509.X509V2AttributeCertificate.GetHashCode
int Org::BouncyCastle::X509::X509V2AttributeCertificate::GetHashCode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
}
