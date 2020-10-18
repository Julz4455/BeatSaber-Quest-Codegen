// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.DES
#include "System/Security/Cryptography/DES.hpp"
// Including type: System.Security.Cryptography.KeySizes
#include "System/Security/Cryptography/KeySizes.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
::Array<System::Security::Cryptography::KeySizes*>* System::Security::Cryptography::DES::_get_s_legalBlockSizes() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<System::Security::Cryptography::KeySizes*>*>("System.Security.Cryptography", "DES", "s_legalBlockSizes"));
}
// Autogenerated static field setter
// Set static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
void System::Security::Cryptography::DES::_set_s_legalBlockSizes(::Array<System::Security::Cryptography::KeySizes*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security.Cryptography", "DES", "s_legalBlockSizes", value));
}
// Autogenerated static field getter
// Get static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
::Array<System::Security::Cryptography::KeySizes*>* System::Security::Cryptography::DES::_get_s_legalKeySizes() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<System::Security::Cryptography::KeySizes*>*>("System.Security.Cryptography", "DES", "s_legalKeySizes"));
}
// Autogenerated static field setter
// Set static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
void System::Security::Cryptography::DES::_set_s_legalKeySizes(::Array<System::Security::Cryptography::KeySizes*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security.Cryptography", "DES", "s_legalKeySizes", value));
}
// Autogenerated method: System.Security.Cryptography.DES.Create
System::Security::Cryptography::DES* System::Security::Cryptography::DES::Create() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::DES*>("System.Security.Cryptography", "DES", "Create"));
}
// Autogenerated method: System.Security.Cryptography.DES.IsWeakKey
bool System::Security::Cryptography::DES::IsWeakKey(::Array<uint8_t>* rgbKey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Security.Cryptography", "DES", "IsWeakKey", rgbKey));
}
// Autogenerated method: System.Security.Cryptography.DES.IsSemiWeakKey
bool System::Security::Cryptography::DES::IsSemiWeakKey(::Array<uint8_t>* rgbKey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Security.Cryptography", "DES", "IsSemiWeakKey", rgbKey));
}
// Autogenerated method: System.Security.Cryptography.DES.IsLegalKeySize
bool System::Security::Cryptography::DES::IsLegalKeySize(::Array<uint8_t>* rgbKey) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Security.Cryptography", "DES", "IsLegalKeySize", rgbKey));
}
// Autogenerated method: System.Security.Cryptography.DES.QuadWordFromBigEndian
uint64_t System::Security::Cryptography::DES::QuadWordFromBigEndian(::Array<uint8_t>* block) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<uint64_t>("System.Security.Cryptography", "DES", "QuadWordFromBigEndian", block));
}
// Autogenerated method: System.Security.Cryptography.DES..cctor
void System::Security::Cryptography::DES::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Security.Cryptography", "DES", ".cctor"));
}
// Autogenerated method: System.Security.Cryptography.DES..ctor
System::Security::Cryptography::DES* System::Security::Cryptography::DES::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<DES*>());
}
// Autogenerated method: System.Security.Cryptography.DES.get_Key
::Array<uint8_t>* System::Security::Cryptography::DES::get_Key() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_Key"));
}
// Autogenerated method: System.Security.Cryptography.DES.set_Key
void System::Security::Cryptography::DES::set_Key(::Array<uint8_t>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Key", value));
}
