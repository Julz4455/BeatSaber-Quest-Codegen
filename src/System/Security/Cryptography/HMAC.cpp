// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.HMAC
#include "System/Security/Cryptography/HMAC.hpp"
// Including type: System.Security.Cryptography.HashAlgorithm
#include "System/Security/Cryptography/HashAlgorithm.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Cryptography.HMAC.get_BlockSizeValue
int System::Security::Cryptography::HMAC::get_BlockSizeValue() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_BlockSizeValue"));
}
// Autogenerated method: System.Security.Cryptography.HMAC.set_BlockSizeValue
void System::Security::Cryptography::HMAC::set_BlockSizeValue(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_BlockSizeValue", value));
}
// Autogenerated method: System.Security.Cryptography.HMAC.UpdateIOPadBuffers
void System::Security::Cryptography::HMAC::UpdateIOPadBuffers() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateIOPadBuffers"));
}
// Autogenerated method: System.Security.Cryptography.HMAC.InitializeKey
void System::Security::Cryptography::HMAC::InitializeKey(::Array<uint8_t>* key) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitializeKey", key));
}
// Autogenerated method: System.Security.Cryptography.HMAC.Create
System::Security::Cryptography::HMAC* System::Security::Cryptography::HMAC::Create() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::HMAC*>("System.Security.Cryptography", "HMAC", "Create"));
}
// Autogenerated method: System.Security.Cryptography.HMAC.get_Key
::Array<uint8_t>* System::Security::Cryptography::HMAC::get_Key() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_Key"));
}
// Autogenerated method: System.Security.Cryptography.HMAC.set_Key
void System::Security::Cryptography::HMAC::set_Key(::Array<uint8_t>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Key", value));
}
// Autogenerated method: System.Security.Cryptography.HMAC.Initialize
void System::Security::Cryptography::HMAC::Initialize() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Initialize"));
}
// Autogenerated method: System.Security.Cryptography.HMAC.HashCore
void System::Security::Cryptography::HMAC::HashCore(::Array<uint8_t>* rgb, int ib, int cb) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HashCore", rgb, ib, cb));
}
// Autogenerated method: System.Security.Cryptography.HMAC.HashFinal
::Array<uint8_t>* System::Security::Cryptography::HMAC::HashFinal() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "HashFinal"));
}
// Autogenerated method: System.Security.Cryptography.HMAC.Dispose
void System::Security::Cryptography::HMAC::Dispose(bool disposing) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
}
// Autogenerated method: System.Security.Cryptography.HMAC..ctor
System::Security::Cryptography::HMAC* System::Security::Cryptography::HMAC::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<HMAC*>());
}
