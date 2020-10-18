// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.Utils
#include "System/Security/Cryptography/Utils.hpp"
// Including type: System.Security.Cryptography.RNGCryptoServiceProvider
#include "System/Security/Cryptography/RNGCryptoServiceProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Security.Cryptography.RNGCryptoServiceProvider _rng
System::Security::Cryptography::RNGCryptoServiceProvider* System::Security::Cryptography::Utils::_get__rng() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Security::Cryptography::RNGCryptoServiceProvider*>("System.Security.Cryptography", "Utils", "_rng"));
}
// Autogenerated static field setter
// Set static field: static private System.Security.Cryptography.RNGCryptoServiceProvider _rng
void System::Security::Cryptography::Utils::_set__rng(System::Security::Cryptography::RNGCryptoServiceProvider* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Security.Cryptography", "Utils", "_rng", value));
}
// Autogenerated method: System.Security.Cryptography.Utils.get_StaticRandomNumberGenerator
System::Security::Cryptography::RNGCryptoServiceProvider* System::Security::Cryptography::Utils::get_StaticRandomNumberGenerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::RNGCryptoServiceProvider*>("System.Security.Cryptography", "Utils", "get_StaticRandomNumberGenerator"));
}
// Autogenerated method: System.Security.Cryptography.Utils.GenerateRandom
::Array<uint8_t>* System::Security::Cryptography::Utils::GenerateRandom(int keySize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("System.Security.Cryptography", "Utils", "GenerateRandom", keySize));
}
// Autogenerated method: System.Security.Cryptography.Utils.HasAlgorithm
bool System::Security::Cryptography::Utils::HasAlgorithm(int dwCalg, int dwKeySize) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Security.Cryptography", "Utils", "HasAlgorithm", dwCalg, dwKeySize));
}
// Autogenerated method: System.Security.Cryptography.Utils.DiscardWhiteSpaces
::Il2CppString* System::Security::Cryptography::Utils::DiscardWhiteSpaces(::Il2CppString* inputBuffer) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.Security.Cryptography", "Utils", "DiscardWhiteSpaces", inputBuffer));
}
// Autogenerated method: System.Security.Cryptography.Utils.DiscardWhiteSpaces
::Il2CppString* System::Security::Cryptography::Utils::DiscardWhiteSpaces(::Il2CppString* inputBuffer, int inputOffset, int inputCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("System.Security.Cryptography", "Utils", "DiscardWhiteSpaces", inputBuffer, inputOffset, inputCount));
}
// Autogenerated method: System.Security.Cryptography.Utils.ConvertByteArrayToInt
int System::Security::Cryptography::Utils::ConvertByteArrayToInt(::Array<uint8_t>* input) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Security.Cryptography", "Utils", "ConvertByteArrayToInt", input));
}
// Autogenerated method: System.Security.Cryptography.Utils.ConvertIntToByteArray
::Array<uint8_t>* System::Security::Cryptography::Utils::ConvertIntToByteArray(int dwInput) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("System.Security.Cryptography", "Utils", "ConvertIntToByteArray", dwInput));
}
// Autogenerated method: System.Security.Cryptography.Utils.FixupKeyParity
::Array<uint8_t>* System::Security::Cryptography::Utils::FixupKeyParity(::Array<uint8_t>* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>("System.Security.Cryptography", "Utils", "FixupKeyParity", key));
}
// Autogenerated method: System.Security.Cryptography.Utils.DWORDFromLittleEndian
void System::Security::Cryptography::Utils::DWORDFromLittleEndian(uint* x, int digits, uint8_t* block) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Security.Cryptography", "Utils", "DWORDFromLittleEndian", x, digits, block));
}
// Autogenerated method: System.Security.Cryptography.Utils.DWORDToLittleEndian
void System::Security::Cryptography::Utils::DWORDToLittleEndian(::Array<uint8_t>* block, ::Array<uint>* x, int digits) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Security.Cryptography", "Utils", "DWORDToLittleEndian", block, x, digits));
}
// Autogenerated method: System.Security.Cryptography.Utils.DWORDFromBigEndian
void System::Security::Cryptography::Utils::DWORDFromBigEndian(uint* x, int digits, uint8_t* block) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Security.Cryptography", "Utils", "DWORDFromBigEndian", x, digits, block));
}
// Autogenerated method: System.Security.Cryptography.Utils.DWORDToBigEndian
void System::Security::Cryptography::Utils::DWORDToBigEndian(::Array<uint8_t>* block, ::Array<uint>* x, int digits) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Security.Cryptography", "Utils", "DWORDToBigEndian", block, x, digits));
}
// Autogenerated method: System.Security.Cryptography.Utils.QuadWordFromBigEndian
void System::Security::Cryptography::Utils::QuadWordFromBigEndian(uint64_t* x, int digits, uint8_t* block) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Security.Cryptography", "Utils", "QuadWordFromBigEndian", x, digits, block));
}
// Autogenerated method: System.Security.Cryptography.Utils.QuadWordToBigEndian
void System::Security::Cryptography::Utils::QuadWordToBigEndian(::Array<uint8_t>* block, ::Array<uint64_t>* x, int digits) {
  THROW_UNLESS(il2cpp_utils::RunMethod("System.Security.Cryptography", "Utils", "QuadWordToBigEndian", block, x, digits));
}
// Autogenerated method: System.Security.Cryptography.Utils._ProduceLegacyHmacValues
bool System::Security::Cryptography::Utils::_ProduceLegacyHmacValues() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("System.Security.Cryptography", "Utils", "_ProduceLegacyHmacValues"));
}
