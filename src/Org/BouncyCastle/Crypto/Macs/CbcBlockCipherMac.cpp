// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac
#include "Org/BouncyCastle/Crypto/Macs/CbcBlockCipherMac.hpp"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
// Including type: Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
#include "Org/BouncyCastle/Crypto/Paddings/IBlockCipherPadding.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac..ctor
Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac* Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
  return THROW_UNLESS(il2cpp_utils::New<CbcBlockCipherMac*>(cipher));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac..ctor
Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac* Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher, int macSizeInBits) {
  return THROW_UNLESS(il2cpp_utils::New<CbcBlockCipherMac*>(cipher, macSizeInBits));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac..ctor
Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac* Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher, int macSizeInBits, Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding) {
  return THROW_UNLESS(il2cpp_utils::New<CbcBlockCipherMac*>(cipher, macSizeInBits, padding));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac.Init
void Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", parameters));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac.GetMacSize
int Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::GetMacSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetMacSize"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac.Update
void Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::Update(uint8_t input) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update", input));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac.BlockUpdate
void Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::BlockUpdate(::Array<uint8_t>* input, int inOff, int len) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "BlockUpdate", input, inOff, len));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac.DoFinal
int Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::DoFinal(::Array<uint8_t>* output, int outOff) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "DoFinal", output, outOff));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac.Reset
void Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
