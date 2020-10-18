// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Macs.HMac
#include "Org/BouncyCastle/Crypto/Macs/HMac.hpp"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
// Including type: Org.BouncyCastle.Utilities.IMemoable
#include "Org/BouncyCastle/Utilities/IMemoable.hpp"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.HMac..ctor
Org::BouncyCastle::Crypto::Macs::HMac* Org::BouncyCastle::Crypto::Macs::HMac::New_ctor(Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(il2cpp_utils::New<HMac*>(digest));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.HMac.XorPad
void Org::BouncyCastle::Crypto::Macs::HMac::XorPad(::Array<uint8_t>* pad, int len, uint8_t n) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Crypto.Macs", "HMac", "XorPad", pad, len, n));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.HMac.Init
void Org::BouncyCastle::Crypto::Macs::HMac::Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", parameters));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.HMac.GetMacSize
int Org::BouncyCastle::Crypto::Macs::HMac::GetMacSize() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetMacSize"));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.HMac.Update
void Org::BouncyCastle::Crypto::Macs::HMac::Update(uint8_t input) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update", input));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.HMac.BlockUpdate
void Org::BouncyCastle::Crypto::Macs::HMac::BlockUpdate(::Array<uint8_t>* input, int inOff, int len) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "BlockUpdate", input, inOff, len));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.HMac.DoFinal
int Org::BouncyCastle::Crypto::Macs::HMac::DoFinal(::Array<uint8_t>* output, int outOff) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "DoFinal", output, outOff));
}
// Autogenerated method: Org.BouncyCastle.Crypto.Macs.HMac.Reset
void Org::BouncyCastle::Crypto::Macs::HMac::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
