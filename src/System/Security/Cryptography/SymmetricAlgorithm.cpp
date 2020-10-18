// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.SymmetricAlgorithm
#include "System/Security/Cryptography/SymmetricAlgorithm.hpp"
// Including type: System.Security.Cryptography.KeySizes
#include "System/Security/Cryptography/KeySizes.hpp"
// Including type: System.Security.Cryptography.ICryptoTransform
#include "System/Security/Cryptography/ICryptoTransform.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.Clear
void System::Security::Cryptography::SymmetricAlgorithm::Clear() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.Dispose
void System::Security::Cryptography::SymmetricAlgorithm::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.get_BlockSize
int System::Security::Cryptography::SymmetricAlgorithm::get_BlockSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_BlockSize"));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.set_BlockSize
void System::Security::Cryptography::SymmetricAlgorithm::set_BlockSize(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_BlockSize", value));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.get_FeedbackSize
int System::Security::Cryptography::SymmetricAlgorithm::get_FeedbackSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_FeedbackSize"));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.get_IV
::Array<uint8_t>* System::Security::Cryptography::SymmetricAlgorithm::get_IV() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_IV"));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.set_IV
void System::Security::Cryptography::SymmetricAlgorithm::set_IV(::Array<uint8_t>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_IV", value));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.get_Key
::Array<uint8_t>* System::Security::Cryptography::SymmetricAlgorithm::get_Key() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_Key"));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.set_Key
void System::Security::Cryptography::SymmetricAlgorithm::set_Key(::Array<uint8_t>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Key", value));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.get_LegalKeySizes
::Array<System::Security::Cryptography::KeySizes*>* System::Security::Cryptography::SymmetricAlgorithm::get_LegalKeySizes() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<System::Security::Cryptography::KeySizes*>*>(this, "get_LegalKeySizes"));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.get_KeySize
int System::Security::Cryptography::SymmetricAlgorithm::get_KeySize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_KeySize"));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.set_KeySize
void System::Security::Cryptography::SymmetricAlgorithm::set_KeySize(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_KeySize", value));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.get_Mode
System::Security::Cryptography::CipherMode System::Security::Cryptography::SymmetricAlgorithm::get_Mode() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::CipherMode>(this, "get_Mode"));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.set_Mode
void System::Security::Cryptography::SymmetricAlgorithm::set_Mode(System::Security::Cryptography::CipherMode value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Mode", value));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.get_Padding
System::Security::Cryptography::PaddingMode System::Security::Cryptography::SymmetricAlgorithm::get_Padding() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::PaddingMode>(this, "get_Padding"));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.set_Padding
void System::Security::Cryptography::SymmetricAlgorithm::set_Padding(System::Security::Cryptography::PaddingMode value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Padding", value));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.ValidKeySize
bool System::Security::Cryptography::SymmetricAlgorithm::ValidKeySize(int bitLength) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ValidKeySize", bitLength));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.Create
System::Security::Cryptography::SymmetricAlgorithm* System::Security::Cryptography::SymmetricAlgorithm::Create(::Il2CppString* algName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::SymmetricAlgorithm*>("System.Security.Cryptography", "SymmetricAlgorithm", "Create", algName));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.CreateEncryptor
System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::SymmetricAlgorithm::CreateEncryptor() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::ICryptoTransform*>(this, "CreateEncryptor"));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.CreateEncryptor
System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::SymmetricAlgorithm::CreateEncryptor(::Array<uint8_t>* rgbKey, ::Array<uint8_t>* rgbIV) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::ICryptoTransform*>(this, "CreateEncryptor", rgbKey, rgbIV));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.CreateDecryptor
System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::SymmetricAlgorithm::CreateDecryptor() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::ICryptoTransform*>(this, "CreateDecryptor"));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.CreateDecryptor
System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::SymmetricAlgorithm::CreateDecryptor(::Array<uint8_t>* rgbKey, ::Array<uint8_t>* rgbIV) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::ICryptoTransform*>(this, "CreateDecryptor", rgbKey, rgbIV));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.GenerateKey
void System::Security::Cryptography::SymmetricAlgorithm::GenerateKey() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GenerateKey"));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.GenerateIV
void System::Security::Cryptography::SymmetricAlgorithm::GenerateIV() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GenerateIV"));
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm..ctor
System::Security::Cryptography::SymmetricAlgorithm* System::Security::Cryptography::SymmetricAlgorithm::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<SymmetricAlgorithm*>());
}
// Autogenerated method: System.Security.Cryptography.SymmetricAlgorithm.Dispose
void System::Security::Cryptography::SymmetricAlgorithm::Dispose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
}
void System::Security::Cryptography::SymmetricAlgorithm::System_IDisposable_Dispose() {
  System::Security::Cryptography::SymmetricAlgorithm::Dispose();
}
