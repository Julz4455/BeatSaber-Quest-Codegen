// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher
#include "Org/BouncyCastle/Crypto/Modes/GcmBlockCipher.hpp"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
// Including type: Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier
#include "Org/BouncyCastle/Crypto/Modes/Gcm/IGcmMultiplier.hpp"
// Including type: Org.BouncyCastle.Crypto.Modes.Gcm.IGcmExponentiator
#include "Org/BouncyCastle/Crypto/Modes/Gcm/IGcmExponentiator.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher..ctor
Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* c) {
  return THROW_UNLESS(il2cpp_utils::New<GcmBlockCipher*>(c));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher..ctor
Org::BouncyCastle::Crypto::Modes::GcmBlockCipher* Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* c, Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier* m) {
  return THROW_UNLESS(il2cpp_utils::New<GcmBlockCipher*>(c, m));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher.ProcessAadBytes
void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessAadBytes(::Array<uint8_t>* inBytes, int inOff, int len) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessAadBytes", inBytes, inOff, len));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher.InitCipher
void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::InitCipher() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitCipher"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher.Reset
void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::Reset(bool clearMac) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset", clearMac));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher.ProcessBlock
void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessBlock(::Array<uint8_t>* buf, int bufOff, ::Array<uint8_t>* output, int outOff) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessBlock", buf, bufOff, output, outOff));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher.ProcessPartial
void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessPartial(::Array<uint8_t>* buf, int off, int len, ::Array<uint8_t>* output, int outOff) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessPartial", buf, off, len, output, outOff));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher.gHASH
void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::gHASH(::Array<uint8_t>* Y, ::Array<uint8_t>* b, int len) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "gHASH", Y, b, len));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher.gHASHBlock
void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::gHASHBlock(::Array<uint8_t>* Y, ::Array<uint8_t>* b) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "gHASHBlock", Y, b));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher.gHASHBlock
void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::gHASHBlock(::Array<uint8_t>* Y, ::Array<uint8_t>* b, int off) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "gHASHBlock", Y, b, off));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher.gHASHPartial
void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::gHASHPartial(::Array<uint8_t>* Y, ::Array<uint8_t>* b, int off, int len) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "gHASHPartial", Y, b, off, len));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher.GetNextCtrBlock
void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetNextCtrBlock(::Array<uint8_t>* block) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetNextCtrBlock", block));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher.CheckStatus
void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::CheckStatus() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CheckStatus"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher.GetBlockSize
int Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetBlockSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetBlockSize"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher.Init
void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", forEncryption, parameters));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher.GetOutputSize
int Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetOutputSize(int len) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetOutputSize", len));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher.GetUpdateOutputSize
int Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::GetUpdateOutputSize(int len) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetUpdateOutputSize", len));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher.ProcessBytes
int Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::ProcessBytes(::Array<uint8_t>* input, int inOff, int len, ::Array<uint8_t>* output, int outOff) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "ProcessBytes", input, inOff, len, output, outOff));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher.DoFinal
int Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::DoFinal(::Array<uint8_t>* output, int outOff) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "DoFinal", output, outOff));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Modes.GcmBlockCipher.Reset
void Org::BouncyCastle::Crypto::Modes::GcmBlockCipher::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
