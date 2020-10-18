// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.X509.X509CertificateParser
#include "Org/BouncyCastle/X509/X509CertificateParser.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Set
#include "Org/BouncyCastle/Asn1/Asn1Set.hpp"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: Org.BouncyCastle.X509.PemParser
#include "Org/BouncyCastle/X509/PemParser.hpp"
// Including type: Org.BouncyCastle.X509.X509Certificate
#include "Org/BouncyCastle/X509/X509Certificate.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1InputStream
#include "Org/BouncyCastle/Asn1/Asn1InputStream.hpp"
// Including type: Org.BouncyCastle.Asn1.X509.X509CertificateStructure
#include "Org/BouncyCastle/Asn1/X509/X509CertificateStructure.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly Org.BouncyCastle.X509.PemParser PemCertParser
Org::BouncyCastle::X509::PemParser* Org::BouncyCastle::X509::X509CertificateParser::_get_PemCertParser() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Org::BouncyCastle::X509::PemParser*>("Org.BouncyCastle.X509", "X509CertificateParser", "PemCertParser"));
}
// Autogenerated static field setter
// Set static field: static private readonly Org.BouncyCastle.X509.PemParser PemCertParser
void Org::BouncyCastle::X509::X509CertificateParser::_set_PemCertParser(Org::BouncyCastle::X509::PemParser* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.X509", "X509CertificateParser", "PemCertParser", value));
}
// Autogenerated method: Org.BouncyCastle.X509.X509CertificateParser.ReadDerCertificate
Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificateParser::ReadDerCertificate(Org::BouncyCastle::Asn1::Asn1InputStream* dIn) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::X509::X509Certificate*>(this, "ReadDerCertificate", dIn));
}
// Autogenerated method: Org.BouncyCastle.X509.X509CertificateParser.GetCertificate
Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificateParser::GetCertificate() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::X509::X509Certificate*>(this, "GetCertificate"));
}
// Autogenerated method: Org.BouncyCastle.X509.X509CertificateParser.ReadPemCertificate
Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificateParser::ReadPemCertificate(System::IO::Stream* inStream) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::X509::X509Certificate*>(this, "ReadPemCertificate", inStream));
}
// Autogenerated method: Org.BouncyCastle.X509.X509CertificateParser.CreateX509Certificate
Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificateParser::CreateX509Certificate(Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::X509::X509Certificate*>(this, "CreateX509Certificate", c));
}
// Autogenerated method: Org.BouncyCastle.X509.X509CertificateParser.ReadCertificate
Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificateParser::ReadCertificate(::Array<uint8_t>* input) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::X509::X509Certificate*>(this, "ReadCertificate", input));
}
// Autogenerated method: Org.BouncyCastle.X509.X509CertificateParser.ReadCertificates
System::Collections::ICollection* Org::BouncyCastle::X509::X509CertificateParser::ReadCertificates(::Array<uint8_t>* input) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::ICollection*>(this, "ReadCertificates", input));
}
// Autogenerated method: Org.BouncyCastle.X509.X509CertificateParser.ReadCertificate
Org::BouncyCastle::X509::X509Certificate* Org::BouncyCastle::X509::X509CertificateParser::ReadCertificate(System::IO::Stream* inStream) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::X509::X509Certificate*>(this, "ReadCertificate", inStream));
}
// Autogenerated method: Org.BouncyCastle.X509.X509CertificateParser.ReadCertificates
System::Collections::ICollection* Org::BouncyCastle::X509::X509CertificateParser::ReadCertificates(System::IO::Stream* inStream) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::ICollection*>(this, "ReadCertificates", inStream));
}
// Autogenerated method: Org.BouncyCastle.X509.X509CertificateParser..cctor
void Org::BouncyCastle::X509::X509CertificateParser::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.X509", "X509CertificateParser", ".cctor"));
}
// Autogenerated method: Org.BouncyCastle.X509.X509CertificateParser..ctor
Org::BouncyCastle::X509::X509CertificateParser* Org::BouncyCastle::X509::X509CertificateParser::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<X509CertificateParser*>());
}
