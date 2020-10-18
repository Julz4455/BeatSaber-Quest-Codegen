// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.X509.X509Certificate
#include "Mono/Security/X509/X509Certificate.hpp"
// Including type: Mono.Security.ASN1
#include "Mono/Security/ASN1.hpp"
// Including type: System.Security.Cryptography.RSA
#include "System/Security/Cryptography/RSA.hpp"
// Including type: System.Security.Cryptography.DSA
#include "System/Security/Cryptography/DSA.hpp"
// Including type: Mono.Security.X509.X509ExtensionCollection
#include "Mono/Security/X509/X509ExtensionCollection.hpp"
// Including type: System.Security.Cryptography.AsymmetricAlgorithm
#include "System/Security/Cryptography/AsymmetricAlgorithm.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String encoding_error
::Il2CppString* Mono::Security::X509::X509Certificate::_get_encoding_error() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("Mono.Security.X509", "X509Certificate", "encoding_error"));
}
// Autogenerated static field setter
// Set static field: static private System.String encoding_error
void Mono::Security::X509::X509Certificate::_set_encoding_error(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Mono.Security.X509", "X509Certificate", "encoding_error", value));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.Parse
void Mono::Security::X509::X509Certificate::Parse(::Array<uint8_t>* data) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Parse", data));
}
// Autogenerated method: Mono.Security.X509.X509Certificate..ctor
Mono::Security::X509::X509Certificate* Mono::Security::X509::X509Certificate::New_ctor(::Array<uint8_t>* data) {
  return THROW_UNLESS(il2cpp_utils::New<X509Certificate*>(data));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.GetUnsignedBigInteger
::Array<uint8_t>* Mono::Security::X509::X509Certificate::GetUnsignedBigInteger(::Array<uint8_t>* integer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GetUnsignedBigInteger", integer));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.get_DSA
System::Security::Cryptography::DSA* Mono::Security::X509::X509Certificate::get_DSA() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::DSA*>(this, "get_DSA"));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.set_DSA
void Mono::Security::X509::X509Certificate::set_DSA(System::Security::Cryptography::DSA* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_DSA", value));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.get_Extensions
Mono::Security::X509::X509ExtensionCollection* Mono::Security::X509::X509Certificate::get_Extensions() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Security::X509::X509ExtensionCollection*>(this, "get_Extensions"));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.get_Hash
::Array<uint8_t>* Mono::Security::X509::X509Certificate::get_Hash() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_Hash"));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.get_IssuerName
::Il2CppString* Mono::Security::X509::X509Certificate::get_IssuerName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_IssuerName"));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.get_KeyAlgorithm
::Il2CppString* Mono::Security::X509::X509Certificate::get_KeyAlgorithm() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_KeyAlgorithm"));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.get_KeyAlgorithmParameters
::Array<uint8_t>* Mono::Security::X509::X509Certificate::get_KeyAlgorithmParameters() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_KeyAlgorithmParameters"));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.set_KeyAlgorithmParameters
void Mono::Security::X509::X509Certificate::set_KeyAlgorithmParameters(::Array<uint8_t>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_KeyAlgorithmParameters", value));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.get_PublicKey
::Array<uint8_t>* Mono::Security::X509::X509Certificate::get_PublicKey() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_PublicKey"));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.get_RSA
System::Security::Cryptography::RSA* Mono::Security::X509::X509Certificate::get_RSA() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::RSA*>(this, "get_RSA"));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.set_RSA
void Mono::Security::X509::X509Certificate::set_RSA(System::Security::Cryptography::RSA* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_RSA", value));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.get_RawData
::Array<uint8_t>* Mono::Security::X509::X509Certificate::get_RawData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_RawData"));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.get_SerialNumber
::Array<uint8_t>* Mono::Security::X509::X509Certificate::get_SerialNumber() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_SerialNumber"));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.get_Signature
::Array<uint8_t>* Mono::Security::X509::X509Certificate::get_Signature() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_Signature"));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.get_SignatureAlgorithm
::Il2CppString* Mono::Security::X509::X509Certificate::get_SignatureAlgorithm() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_SignatureAlgorithm"));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.get_SubjectName
::Il2CppString* Mono::Security::X509::X509Certificate::get_SubjectName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_SubjectName"));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.get_ValidFrom
System::DateTime Mono::Security::X509::X509Certificate::get_ValidFrom() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>(this, "get_ValidFrom"));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.get_ValidUntil
System::DateTime Mono::Security::X509::X509Certificate::get_ValidUntil() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>(this, "get_ValidUntil"));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.get_Version
int Mono::Security::X509::X509Certificate::get_Version() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Version"));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.VerifySignature
bool Mono::Security::X509::X509Certificate::VerifySignature(System::Security::Cryptography::DSA* dsa) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "VerifySignature", dsa));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.VerifySignature
bool Mono::Security::X509::X509Certificate::VerifySignature(System::Security::Cryptography::RSA* rsa) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "VerifySignature", rsa));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.VerifySignature
bool Mono::Security::X509::X509Certificate::VerifySignature(System::Security::Cryptography::AsymmetricAlgorithm* aa) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "VerifySignature", aa));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.GetIssuerName
Mono::Security::ASN1* Mono::Security::X509::X509Certificate::GetIssuerName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Security::ASN1*>(this, "GetIssuerName"));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.GetSubjectName
Mono::Security::ASN1* Mono::Security::X509::X509Certificate::GetSubjectName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Security::ASN1*>(this, "GetSubjectName"));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.PEM
::Array<uint8_t>* Mono::Security::X509::X509Certificate::PEM(::Il2CppString* type, ::Array<uint8_t>* data) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("Mono.Security.X509", "X509Certificate", "PEM", type, data));
}
// Autogenerated method: Mono.Security.X509.X509Certificate..cctor
void Mono::Security::X509::X509Certificate::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Mono.Security.X509", "X509Certificate", ".cctor"));
}
// Autogenerated method: Mono.Security.X509.X509Certificate.GetObjectData
void Mono::Security::X509::X509Certificate::GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", info, context));
}
void Mono::Security::X509::X509Certificate::System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  Mono::Security::X509::X509Certificate::GetObjectData(info, context);
}
