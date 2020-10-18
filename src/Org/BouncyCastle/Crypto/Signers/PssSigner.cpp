// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Signers.PssSigner
#include "Org/BouncyCastle/Crypto/Signers/PssSigner.hpp"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
// Including type: Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
#include "Org/BouncyCastle/Crypto/IAsymmetricBlockCipher.hpp"
// Including type: Org.BouncyCastle.Security.SecureRandom
#include "Org/BouncyCastle/Security/SecureRandom.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.PssSigner.CreateRawSigner
Org::BouncyCastle::Crypto::Signers::PssSigner* Org::BouncyCastle::Crypto::Signers::PssSigner::CreateRawSigner(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Crypto::Signers::PssSigner*>("Org.BouncyCastle.Crypto.Signers", "PssSigner", "CreateRawSigner", cipher, digest));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.PssSigner..ctor
Org::BouncyCastle::Crypto::Signers::PssSigner* Org::BouncyCastle::Crypto::Signers::PssSigner::New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(il2cpp_utils::New<PssSigner*>(cipher, digest));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.PssSigner..ctor
Org::BouncyCastle::Crypto::Signers::PssSigner* Org::BouncyCastle::Crypto::Signers::PssSigner::New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* digest, int saltLen) {
  return THROW_UNLESS(il2cpp_utils::New<PssSigner*>(cipher, digest, saltLen));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.PssSigner..ctor
Org::BouncyCastle::Crypto::Signers::PssSigner* Org::BouncyCastle::Crypto::Signers::PssSigner::New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* digest, int saltLen, uint8_t trailer) {
  return THROW_UNLESS(il2cpp_utils::New<PssSigner*>(cipher, digest, saltLen, trailer));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.PssSigner..ctor
Org::BouncyCastle::Crypto::Signers::PssSigner* Org::BouncyCastle::Crypto::Signers::PssSigner::New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* contentDigest, Org::BouncyCastle::Crypto::IDigest* mgfDigest, int saltLen, uint8_t trailer) {
  return THROW_UNLESS(il2cpp_utils::New<PssSigner*>(cipher, contentDigest, mgfDigest, saltLen, trailer));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.PssSigner..ctor
Org::BouncyCastle::Crypto::Signers::PssSigner* Org::BouncyCastle::Crypto::Signers::PssSigner::New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* contentDigest1, Org::BouncyCastle::Crypto::IDigest* contentDigest2, Org::BouncyCastle::Crypto::IDigest* mgfDigest, int saltLen, ::Array<uint8_t>* salt, uint8_t trailer) {
  return THROW_UNLESS(il2cpp_utils::New<PssSigner*>(cipher, contentDigest1, contentDigest2, mgfDigest, saltLen, salt, trailer));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.PssSigner.ClearBlock
void Org::BouncyCastle::Crypto::Signers::PssSigner::ClearBlock(::Array<uint8_t>* block) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ClearBlock", block));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.PssSigner.ItoOSP
void Org::BouncyCastle::Crypto::Signers::PssSigner::ItoOSP(int i, ::Array<uint8_t>* sp) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ItoOSP", i, sp));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.PssSigner.MaskGeneratorFunction1
::Array<uint8_t>* Org::BouncyCastle::Crypto::Signers::PssSigner::MaskGeneratorFunction1(::Array<uint8_t>* Z, int zOff, int zLen, int length) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "MaskGeneratorFunction1", Z, zOff, zLen, length));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.PssSigner.Init
void Org::BouncyCastle::Crypto::Signers::PssSigner::Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", forSigning, parameters));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.PssSigner.BlockUpdate
void Org::BouncyCastle::Crypto::Signers::PssSigner::BlockUpdate(::Array<uint8_t>* input, int inOff, int length) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "BlockUpdate", input, inOff, length));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Signers.PssSigner.GenerateSignature
::Array<uint8_t>* Org::BouncyCastle::Crypto::Signers::PssSigner::GenerateSignature() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GenerateSignature"));
}
