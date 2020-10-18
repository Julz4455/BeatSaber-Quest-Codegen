// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate2
#include "System/Security/Cryptography/X509Certificates/X509Certificate2.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate2Impl
#include "System/Security/Cryptography/X509Certificates/X509Certificate2Impl.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509ExtensionCollection
#include "System/Security/Cryptography/X509Certificates/X509ExtensionCollection.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X500DistinguishedName
#include "System/Security/Cryptography/X509Certificates/X500DistinguishedName.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.Security.Cryptography.AsymmetricAlgorithm
#include "System/Security/Cryptography/AsymmetricAlgorithm.hpp"
// Including type: System.Security.Cryptography.X509Certificates.PublicKey
#include "System/Security/Cryptography/X509Certificates/PublicKey.hpp"
// Including type: System.Security.Cryptography.Oid
#include "System/Security/Cryptography/Oid.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509NameType
#include "System/Security/Cryptography/X509Certificates/X509NameType.hpp"
// Including type: System.Text.StringBuilder
#include "System/Text/StringBuilder.hpp"
// Including type: Mono.Security.X509.X509Certificate
#include "Mono/Security/X509/X509Certificate.hpp"
// Including type: System.Runtime.Serialization.SerializationInfo
#include "System/Runtime/Serialization/SerializationInfo.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
#include "System/Security/Cryptography/X509Certificates/X509KeyStorageFlags.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Byte[] signedData
::Array<uint8_t>* System::Security::Cryptography::X509Certificates::X509Certificate2::_get_signedData() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint8_t>*>("System.Security.Cryptography.X509Certificates", "X509Certificate2", "signedData"));
}
// Autogenerated static field setter
// Set static field: static private System.Byte[] signedData
void System::Security::Cryptography::X509Certificates::X509Certificate2::_set_signedData(::Array<uint8_t>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security.Cryptography.X509Certificates", "X509Certificate2", "signedData", value));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.get_Impl
System::Security::Cryptography::X509Certificates::X509Certificate2Impl* System::Security::Cryptography::X509Certificates::X509Certificate2::get_Impl() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::X509Certificates::X509Certificate2Impl*>(this, "get_Impl"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2..ctor
System::Security::Cryptography::X509Certificates::X509Certificate2* System::Security::Cryptography::X509Certificates::X509Certificate2::New_ctor(::Il2CppString* fileName) {
  return THROW_UNLESS(il2cpp_utils::New<X509Certificate2*>(fileName));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.get_Extensions
System::Security::Cryptography::X509Certificates::X509ExtensionCollection* System::Security::Cryptography::X509Certificates::X509Certificate2::get_Extensions() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::X509Certificates::X509ExtensionCollection*>(this, "get_Extensions"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.get_IssuerName
System::Security::Cryptography::X509Certificates::X500DistinguishedName* System::Security::Cryptography::X509Certificates::X509Certificate2::get_IssuerName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(this, "get_IssuerName"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.get_NotAfter
System::DateTime System::Security::Cryptography::X509Certificates::X509Certificate2::get_NotAfter() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>(this, "get_NotAfter"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.get_NotBefore
System::DateTime System::Security::Cryptography::X509Certificates::X509Certificate2::get_NotBefore() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::DateTime>(this, "get_NotBefore"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.get_PrivateKey
System::Security::Cryptography::AsymmetricAlgorithm* System::Security::Cryptography::X509Certificates::X509Certificate2::get_PrivateKey() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::AsymmetricAlgorithm*>(this, "get_PrivateKey"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.set_PrivateKey
void System::Security::Cryptography::X509Certificates::X509Certificate2::set_PrivateKey(System::Security::Cryptography::AsymmetricAlgorithm* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_PrivateKey", value));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.get_PublicKey
System::Security::Cryptography::X509Certificates::PublicKey* System::Security::Cryptography::X509Certificates::X509Certificate2::get_PublicKey() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::X509Certificates::PublicKey*>(this, "get_PublicKey"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.get_SerialNumber
::Il2CppString* System::Security::Cryptography::X509Certificates::X509Certificate2::get_SerialNumber() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_SerialNumber"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.get_SignatureAlgorithm
System::Security::Cryptography::Oid* System::Security::Cryptography::X509Certificates::X509Certificate2::get_SignatureAlgorithm() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::Oid*>(this, "get_SignatureAlgorithm"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.get_SubjectName
System::Security::Cryptography::X509Certificates::X500DistinguishedName* System::Security::Cryptography::X509Certificates::X509Certificate2::get_SubjectName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::X509Certificates::X500DistinguishedName*>(this, "get_SubjectName"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.get_Thumbprint
::Il2CppString* System::Security::Cryptography::X509Certificates::X509Certificate2::get_Thumbprint() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Thumbprint"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.get_Version
int System::Security::Cryptography::X509Certificates::X509Certificate2::get_Version() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Version"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.GetNameInfo
::Il2CppString* System::Security::Cryptography::X509Certificates::X509Certificate2::GetNameInfo(System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "GetNameInfo", nameType, forIssuer));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.AppendBuffer
void System::Security::Cryptography::X509Certificates::X509Certificate2::AppendBuffer(System::Text::StringBuilder* sb, ::Array<uint8_t>* buffer) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Security.Cryptography.X509Certificates", "X509Certificate2", "AppendBuffer", sb, buffer));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.Verify
bool System::Security::Cryptography::X509Certificates::X509Certificate2::Verify() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Verify"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.get_MonoCertificate
Mono::Security::X509::X509Certificate* System::Security::Cryptography::X509Certificates::X509Certificate2::get_MonoCertificate() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Security::X509::X509Certificate*>(this, "get_MonoCertificate"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2..cctor
void System::Security::Cryptography::X509Certificates::X509Certificate2::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Security.Cryptography.X509Certificates", "X509Certificate2", ".cctor"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2..ctor
System::Security::Cryptography::X509Certificates::X509Certificate2* System::Security::Cryptography::X509Certificates::X509Certificate2::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<X509Certificate2*>());
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2..ctor
System::Security::Cryptography::X509Certificates::X509Certificate2* System::Security::Cryptography::X509Certificates::X509Certificate2::New_ctor(::Array<uint8_t>* rawData) {
  return THROW_UNLESS(il2cpp_utils::New<X509Certificate2*>(rawData));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2..ctor
System::Security::Cryptography::X509Certificates::X509Certificate2* System::Security::Cryptography::X509Certificates::X509Certificate2::New_ctor(System::Security::Cryptography::X509Certificates::X509Certificate* certificate) {
  return THROW_UNLESS(il2cpp_utils::New<X509Certificate2*>(certificate));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2..ctor
System::Security::Cryptography::X509Certificates::X509Certificate2* System::Security::Cryptography::X509Certificates::X509Certificate2::New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(il2cpp_utils::New<X509Certificate2*>(info, context));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.Import
void System::Security::Cryptography::X509Certificates::X509Certificate2::Import(::Array<uint8_t>* rawData, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Import", rawData, password, keyStorageFlags));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.Import
void System::Security::Cryptography::X509Certificates::X509Certificate2::Import(::Il2CppString* fileName, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Import", fileName, password, keyStorageFlags));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.Reset
void System::Security::Cryptography::X509Certificates::X509Certificate2::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.ToString
::Il2CppString* System::Security::Cryptography::X509Certificates::X509Certificate2::ToString() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509Certificate2.ToString
::Il2CppString* System::Security::Cryptography::X509Certificates::X509Certificate2::ToString(bool verbose) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString", verbose));
}
