// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Cryptography.RC4
#include "Mono/Security/Cryptography/RC4.hpp"
// Including type: System.Security.Cryptography.KeySizes
#include "System/Security/Cryptography/KeySizes.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
::Array<System::Security::Cryptography::KeySizes*>* Mono::Security::Cryptography::RC4::_get_s_legalBlockSizes() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<System::Security::Cryptography::KeySizes*>*>("Mono.Security.Cryptography", "RC4", "s_legalBlockSizes"));
}
// Autogenerated static field setter
// Set static field: static private System.Security.Cryptography.KeySizes[] s_legalBlockSizes
void Mono::Security::Cryptography::RC4::_set_s_legalBlockSizes(::Array<System::Security::Cryptography::KeySizes*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Mono.Security.Cryptography", "RC4", "s_legalBlockSizes", value));
}
// Autogenerated static field getter
// Get static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
::Array<System::Security::Cryptography::KeySizes*>* Mono::Security::Cryptography::RC4::_get_s_legalKeySizes() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<System::Security::Cryptography::KeySizes*>*>("Mono.Security.Cryptography", "RC4", "s_legalKeySizes"));
}
// Autogenerated static field setter
// Set static field: static private System.Security.Cryptography.KeySizes[] s_legalKeySizes
void Mono::Security::Cryptography::RC4::_set_s_legalKeySizes(::Array<System::Security::Cryptography::KeySizes*>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Mono.Security.Cryptography", "RC4", "s_legalKeySizes", value));
}
// Autogenerated method: Mono.Security.Cryptography.RC4.Create
Mono::Security::Cryptography::RC4* Mono::Security::Cryptography::RC4::Create() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Mono::Security::Cryptography::RC4*>("Mono.Security.Cryptography", "RC4", "Create"));
}
// Autogenerated method: Mono.Security.Cryptography.RC4..cctor
void Mono::Security::Cryptography::RC4::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Mono.Security.Cryptography", "RC4", ".cctor"));
}
// Autogenerated method: Mono.Security.Cryptography.RC4..ctor
Mono::Security::Cryptography::RC4* Mono::Security::Cryptography::RC4::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<RC4*>());
}
// Autogenerated method: Mono.Security.Cryptography.RC4.get_IV
::Array<uint8_t>* Mono::Security::Cryptography::RC4::get_IV() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "get_IV"));
}
// Autogenerated method: Mono.Security.Cryptography.RC4.set_IV
void Mono::Security::Cryptography::RC4::set_IV(::Array<uint8_t>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_IV", value));
}
