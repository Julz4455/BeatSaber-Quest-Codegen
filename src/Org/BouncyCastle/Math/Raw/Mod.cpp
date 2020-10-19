// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.Raw.Mod
#include "Org/BouncyCastle/Math/Raw/Mod.hpp"
// Including type: Org.BouncyCastle.Security.SecureRandom
#include "Org/BouncyCastle/Security/SecureRandom.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly Org.BouncyCastle.Security.SecureRandom RandomSource
Org::BouncyCastle::Security::SecureRandom* Org::BouncyCastle::Math::Raw::Mod::_get_RandomSource() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Org::BouncyCastle::Security::SecureRandom*>("Org.BouncyCastle.Math.Raw", "Mod", "RandomSource"));
}
// Autogenerated static field setter
// Set static field: static private readonly Org.BouncyCastle.Security.SecureRandom RandomSource
void Org::BouncyCastle::Math::Raw::Mod::_set_RandomSource(Org::BouncyCastle::Security::SecureRandom* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Math.Raw", "Mod", "RandomSource", value));
}
// Autogenerated method: Org.BouncyCastle.Math.Raw.Mod.Invert
void Org::BouncyCastle::Math::Raw::Mod::Invert(::Array<uint>* p, ::Array<uint>* x, ::Array<uint>* z) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.Raw", "Mod", "Invert", p, x, z));
}
// Autogenerated method: Org.BouncyCastle.Math.Raw.Mod.Random
::Array<uint>* Org::BouncyCastle::Math::Raw::Mod::Random(::Array<uint>* p) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint>*>("Org.BouncyCastle.Math.Raw", "Mod", "Random", p));
}
// Autogenerated method: Org.BouncyCastle.Math.Raw.Mod.InversionResult
void Org::BouncyCastle::Math::Raw::Mod::InversionResult(::Array<uint>* p, int ac, ::Array<uint>* a, ::Array<uint>* z) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.Raw", "Mod", "InversionResult", p, ac, a, z));
}
// Autogenerated method: Org.BouncyCastle.Math.Raw.Mod.InversionStep
void Org::BouncyCastle::Math::Raw::Mod::InversionStep(::Array<uint>* p, ::Array<uint>* u, int uLen, ::Array<uint>* x, int& xc) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.Raw", "Mod", "InversionStep", p, u, uLen, x, xc));
}
// Autogenerated method: Org.BouncyCastle.Math.Raw.Mod..cctor
void Org::BouncyCastle::Math::Raw::Mod::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.Raw", "Mod", ".cctor"));
}