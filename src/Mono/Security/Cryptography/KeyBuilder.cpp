// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Cryptography.KeyBuilder
#include "Mono/Security/Cryptography/KeyBuilder.hpp"
// Including type: System.Security.Cryptography.RandomNumberGenerator
#include "System/Security/Cryptography/RandomNumberGenerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Security.Cryptography.RandomNumberGenerator rng
System::Security::Cryptography::RandomNumberGenerator* Mono::Security::Cryptography::KeyBuilder::_get_rng() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Security::Cryptography::RandomNumberGenerator*>("Mono.Security.Cryptography", "KeyBuilder", "rng"));
}
// Autogenerated static field setter
// Set static field: static private System.Security.Cryptography.RandomNumberGenerator rng
void Mono::Security::Cryptography::KeyBuilder::_set_rng(System::Security::Cryptography::RandomNumberGenerator* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Mono.Security.Cryptography", "KeyBuilder", "rng", value));
}
// Autogenerated method: Mono.Security.Cryptography.KeyBuilder.get_Rng
System::Security::Cryptography::RandomNumberGenerator* Mono::Security::Cryptography::KeyBuilder::get_Rng() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::RandomNumberGenerator*>("Mono.Security.Cryptography", "KeyBuilder", "get_Rng"));
}
// Autogenerated method: Mono.Security.Cryptography.KeyBuilder.Key
::Array<uint8_t>* Mono::Security::Cryptography::KeyBuilder::Key(int size) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("Mono.Security.Cryptography", "KeyBuilder", "Key", size));
}