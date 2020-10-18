// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Interface.MonoTlsSettings
#include "Mono/Security/Interface/MonoTlsSettings.hpp"
// Including type: Mono.Security.Interface.MonoRemoteCertificateValidationCallback
#include "Mono/Security/Interface/MonoRemoteCertificateValidationCallback.hpp"
// Including type: Mono.Security.Interface.MonoLocalCertificateSelectionCallback
#include "Mono/Security/Interface/MonoLocalCertificateSelectionCallback.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509CertificateCollection
#include "System/Security/Cryptography/X509Certificates/X509CertificateCollection.hpp"
// Including type: Mono.Security.Interface.CipherSuiteCode
#include "Mono/Security/Interface/CipherSuiteCode.hpp"
// Including type: Mono.Security.Interface.ICertificateValidator
#include "Mono/Security/Interface/ICertificateValidator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private Mono.Security.Interface.MonoTlsSettings defaultSettings
Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::_get_defaultSettings() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Mono::Security::Interface::MonoTlsSettings*>("Mono.Security.Interface", "MonoTlsSettings", "defaultSettings"));
}
// Autogenerated static field setter
// Set static field: static private Mono.Security.Interface.MonoTlsSettings defaultSettings
void Mono::Security::Interface::MonoTlsSettings::_set_defaultSettings(Mono::Security::Interface::MonoTlsSettings* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Mono.Security.Interface", "MonoTlsSettings", "defaultSettings", value));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.get_RemoteCertificateValidationCallback
Mono::Security::Interface::MonoRemoteCertificateValidationCallback* Mono::Security::Interface::MonoTlsSettings::get_RemoteCertificateValidationCallback() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Security::Interface::MonoRemoteCertificateValidationCallback*>(this, "get_RemoteCertificateValidationCallback"));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.set_RemoteCertificateValidationCallback
void Mono::Security::Interface::MonoTlsSettings::set_RemoteCertificateValidationCallback(Mono::Security::Interface::MonoRemoteCertificateValidationCallback* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_RemoteCertificateValidationCallback", value));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.get_ClientCertificateSelectionCallback
Mono::Security::Interface::MonoLocalCertificateSelectionCallback* Mono::Security::Interface::MonoTlsSettings::get_ClientCertificateSelectionCallback() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>(this, "get_ClientCertificateSelectionCallback"));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.set_ClientCertificateSelectionCallback
void Mono::Security::Interface::MonoTlsSettings::set_ClientCertificateSelectionCallback(Mono::Security::Interface::MonoLocalCertificateSelectionCallback* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_ClientCertificateSelectionCallback", value));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.get_UseServicePointManagerCallback
System::Nullable_1<bool> Mono::Security::Interface::MonoTlsSettings::get_UseServicePointManagerCallback() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Nullable_1<bool>>(this, "get_UseServicePointManagerCallback"));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.set_UseServicePointManagerCallback
void Mono::Security::Interface::MonoTlsSettings::set_UseServicePointManagerCallback(System::Nullable_1<bool> value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_UseServicePointManagerCallback", value));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.get_CallbackNeedsCertificateChain
bool Mono::Security::Interface::MonoTlsSettings::get_CallbackNeedsCertificateChain() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_CallbackNeedsCertificateChain"));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.get_CertificateValidationTime
System::Nullable_1<System::DateTime> Mono::Security::Interface::MonoTlsSettings::get_CertificateValidationTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Nullable_1<System::DateTime>>(this, "get_CertificateValidationTime"));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.set_CertificateValidationTime
void Mono::Security::Interface::MonoTlsSettings::set_CertificateValidationTime(System::Nullable_1<System::DateTime> value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_CertificateValidationTime", value));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.get_TrustAnchors
System::Security::Cryptography::X509Certificates::X509CertificateCollection* Mono::Security::Interface::MonoTlsSettings::get_TrustAnchors() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::X509Certificates::X509CertificateCollection*>(this, "get_TrustAnchors"));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.set_TrustAnchors
void Mono::Security::Interface::MonoTlsSettings::set_TrustAnchors(System::Security::Cryptography::X509Certificates::X509CertificateCollection* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_TrustAnchors", value));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.get_UserSettings
::Il2CppObject* Mono::Security::Interface::MonoTlsSettings::get_UserSettings() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_UserSettings"));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.set_UserSettings
void Mono::Security::Interface::MonoTlsSettings::set_UserSettings(::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_UserSettings", value));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.get_CertificateSearchPaths
::Array<::Il2CppString*>* Mono::Security::Interface::MonoTlsSettings::get_CertificateSearchPaths() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppString*>*>(this, "get_CertificateSearchPaths"));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.set_CertificateSearchPaths
void Mono::Security::Interface::MonoTlsSettings::set_CertificateSearchPaths(::Array<::Il2CppString*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_CertificateSearchPaths", value));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.get_SendCloseNotify
bool Mono::Security::Interface::MonoTlsSettings::get_SendCloseNotify() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_SendCloseNotify"));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.set_SendCloseNotify
void Mono::Security::Interface::MonoTlsSettings::set_SendCloseNotify(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_SendCloseNotify", value));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.get_EnabledProtocols
System::Nullable_1<Mono::Security::Interface::TlsProtocols> Mono::Security::Interface::MonoTlsSettings::get_EnabledProtocols() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Nullable_1<Mono::Security::Interface::TlsProtocols>>(this, "get_EnabledProtocols"));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.set_EnabledProtocols
void Mono::Security::Interface::MonoTlsSettings::set_EnabledProtocols(System::Nullable_1<Mono::Security::Interface::TlsProtocols> value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_EnabledProtocols", value));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.get_EnabledCiphers
::Array<Mono::Security::Interface::CipherSuiteCode>* Mono::Security::Interface::MonoTlsSettings::get_EnabledCiphers() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<Mono::Security::Interface::CipherSuiteCode>*>(this, "get_EnabledCiphers"));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.set_EnabledCiphers
void Mono::Security::Interface::MonoTlsSettings::set_EnabledCiphers(::Array<Mono::Security::Interface::CipherSuiteCode>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_EnabledCiphers", value));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.get_DefaultSettings
Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::get_DefaultSettings() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Security::Interface::MonoTlsSettings*>("Mono.Security.Interface", "MonoTlsSettings", "get_DefaultSettings"));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.CopyDefaultSettings
Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::CopyDefaultSettings() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Security::Interface::MonoTlsSettings*>("Mono.Security.Interface", "MonoTlsSettings", "CopyDefaultSettings"));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.get_CertificateValidator
Mono::Security::Interface::ICertificateValidator* Mono::Security::Interface::MonoTlsSettings::get_CertificateValidator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Security::Interface::ICertificateValidator*>(this, "get_CertificateValidator"));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.CloneWithValidator
Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::CloneWithValidator(Mono::Security::Interface::ICertificateValidator* validator) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Security::Interface::MonoTlsSettings*>(this, "CloneWithValidator", validator));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings.Clone
Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::Clone() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Security::Interface::MonoTlsSettings*>(this, "Clone"));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings..ctor
Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::New_ctor(Mono::Security::Interface::MonoTlsSettings* other) {
  return THROW_UNLESS(il2cpp_utils::New<MonoTlsSettings*>(other));
}
// Autogenerated method: Mono.Security.Interface.MonoTlsSettings..ctor
Mono::Security::Interface::MonoTlsSettings* Mono::Security::Interface::MonoTlsSettings::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<MonoTlsSettings*>());
}
