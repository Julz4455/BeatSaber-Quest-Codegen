// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine
#include "Org/BouncyCastle/Crypto/Engines/ChaCha7539Engine.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine..ctor
Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ChaCha7539Engine*>());
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine.get_AlgorithmName
::Il2CppString* Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::get_AlgorithmName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_AlgorithmName"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine.get_NonceSize
int Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::get_NonceSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_NonceSize"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine.AdvanceCounter
void Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::AdvanceCounter() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AdvanceCounter"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine.ResetCounter
void Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::ResetCounter() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ResetCounter"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine.SetKey
void Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::SetKey(::Array<uint8_t>* keyBytes, ::Array<uint8_t>* ivBytes) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetKey", keyBytes, ivBytes));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Engines.ChaCha7539Engine.GenerateKeyStream
void Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine::GenerateKeyStream(::Array<uint8_t>* output) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GenerateKeyStream", output));
}
