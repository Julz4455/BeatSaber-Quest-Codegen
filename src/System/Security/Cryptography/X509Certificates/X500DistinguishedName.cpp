// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X500DistinguishedName
#include "System/Security/Cryptography/X509Certificates/X500DistinguishedName.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags
#include "System/Security/Cryptography/X509Certificates/X500DistinguishedNameFlags.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Cryptography.X509Certificates.X500DistinguishedName..ctor
System::Security::Cryptography::X509Certificates::X500DistinguishedName* System::Security::Cryptography::X509Certificates::X500DistinguishedName::New_ctor(::Array<uint8_t>* encodedDistinguishedName) {
  return THROW_UNLESS(il2cpp_utils::New<X500DistinguishedName*>(encodedDistinguishedName));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X500DistinguishedName.Decode
::Il2CppString* System::Security::Cryptography::X509Certificates::X500DistinguishedName::Decode(System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "Decode", flag));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X500DistinguishedName.GetSeparator
::Il2CppString* System::Security::Cryptography::X509Certificates::X500DistinguishedName::GetSeparator(System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.Security.Cryptography.X509Certificates", "X500DistinguishedName", "GetSeparator", flag));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X500DistinguishedName.DecodeRawData
void System::Security::Cryptography::X509Certificates::X500DistinguishedName::DecodeRawData() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "DecodeRawData"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X500DistinguishedName.Canonize
::Il2CppString* System::Security::Cryptography::X509Certificates::X500DistinguishedName::Canonize(::Il2CppString* s) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.Security.Cryptography.X509Certificates", "X500DistinguishedName", "Canonize", s));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X500DistinguishedName.AreEqual
bool System::Security::Cryptography::X509Certificates::X500DistinguishedName::AreEqual(System::Security::Cryptography::X509Certificates::X500DistinguishedName* name1, System::Security::Cryptography::X509Certificates::X500DistinguishedName* name2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Security.Cryptography.X509Certificates", "X500DistinguishedName", "AreEqual", name1, name2));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X500DistinguishedName.Format
::Il2CppString* System::Security::Cryptography::X509Certificates::X500DistinguishedName::Format(bool multiLine) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "Format", multiLine));
}
