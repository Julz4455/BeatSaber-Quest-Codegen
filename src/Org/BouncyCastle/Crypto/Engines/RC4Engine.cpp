// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.RC4Engine
#include "Org/BouncyCastle/Crypto/Engines/RC4Engine.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly System.Int32 STATE_LENGTH
int Org::BouncyCastle::Crypto::Engines::RC4Engine::_get_STATE_LENGTH() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("Org.BouncyCastle.Crypto.Engines", "RC4Engine", "STATE_LENGTH"));
}
// Autogenerated static field setter
// Set static field: static private readonly System.Int32 STATE_LENGTH
void Org::BouncyCastle::Crypto::Engines::RC4Engine::_set_STATE_LENGTH(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Crypto.Engines", "RC4Engine", "STATE_LENGTH", value));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC4Engine.SetKey
void Org::BouncyCastle::Crypto::Engines::RC4Engine::SetKey(::Array<uint8_t>* keyBytes) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetKey", keyBytes));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC4Engine..cctor
void Org::BouncyCastle::Crypto::Engines::RC4Engine::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Crypto.Engines", "RC4Engine", ".cctor"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC4Engine.Init
void Org::BouncyCastle::Crypto::Engines::RC4Engine::Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", forEncryption, parameters));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC4Engine.ProcessBytes
void Org::BouncyCastle::Crypto::Engines::RC4Engine::ProcessBytes(::Array<uint8_t>* input, int inOff, int length, ::Array<uint8_t>* output, int outOff) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessBytes", input, inOff, length, output, outOff));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC4Engine.Reset
void Org::BouncyCastle::Crypto::Engines::RC4Engine::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.RC4Engine..ctor
Org::BouncyCastle::Crypto::Engines::RC4Engine* Org::BouncyCastle::Crypto::Engines::RC4Engine::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<RC4Engine*>());
}