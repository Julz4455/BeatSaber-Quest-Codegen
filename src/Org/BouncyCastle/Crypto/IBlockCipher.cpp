// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.IBlockCipher.get_AlgorithmName
::Il2CppString* Org::BouncyCastle::Crypto::IBlockCipher::get_AlgorithmName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_AlgorithmName"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.IBlockCipher.Init
void Org::BouncyCastle::Crypto::IBlockCipher::Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", forEncryption, parameters));
}
// Autogenerated method: Org.BouncyCastle.Crypto.IBlockCipher.GetBlockSize
int Org::BouncyCastle::Crypto::IBlockCipher::GetBlockSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetBlockSize"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.IBlockCipher.get_IsPartialBlockOkay
bool Org::BouncyCastle::Crypto::IBlockCipher::get_IsPartialBlockOkay() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsPartialBlockOkay"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.IBlockCipher.ProcessBlock
int Org::BouncyCastle::Crypto::IBlockCipher::ProcessBlock(::Array<uint8_t>* inBuf, int inOff, ::Array<uint8_t>* outBuf, int outOff) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "ProcessBlock", inBuf, inOff, outBuf, outOff));
}
// Autogenerated method: Org.BouncyCastle.Crypto.IBlockCipher.Reset
void Org::BouncyCastle::Crypto::IBlockCipher::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
