// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field
#include "Org/BouncyCastle/Math/EC/Custom/Sec/SecP521R1Field.hpp"
// Including type: Org.BouncyCastle.Math.BigInteger
#include "Org/BouncyCastle/Math/BigInteger.hpp"
// Including type: Org.BouncyCastle.Security.SecureRandom
#include "Org/BouncyCastle/Security/SecureRandom.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static readonly System.UInt32[] P
::Array<uint>* Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::_get_P() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Array<uint>*>("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", "P"));
}
// Autogenerated static field setter
// Set static field: static readonly System.UInt32[] P
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::_set_P(::Array<uint>* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", "P", value));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field.Add
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Add(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", "Add", x, y, z));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field.AddOne
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::AddOne(::Array<uint>* x, ::Array<uint>* z) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", "AddOne", x, z));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field.FromBigInteger
::Array<uint>* Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::FromBigInteger(Org::BouncyCastle::Math::BigInteger* x) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint>*>("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", "FromBigInteger", x));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field.Inv
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Inv(::Array<uint>* x, ::Array<uint>* z) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", "Inv", x, z));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field.IsZero
int Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::IsZero(::Array<uint>* x) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", "IsZero", x));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field.Multiply
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Multiply(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", "Multiply", x, y, z));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field.Negate
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Negate(::Array<uint>* x, ::Array<uint>* z) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", "Negate", x, z));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field.Random
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Random(Org::BouncyCastle::Security::SecureRandom* r, ::Array<uint>* z) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", "Random", r, z));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field.RandomMult
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::RandomMult(Org::BouncyCastle::Security::SecureRandom* r, ::Array<uint>* z) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", "RandomMult", r, z));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field.Reduce
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Reduce(::Array<uint>* xx, ::Array<uint>* z) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", "Reduce", xx, z));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field.Reduce23
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Reduce23(::Array<uint>* z) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", "Reduce23", z));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field.Square
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Square(::Array<uint>* x, ::Array<uint>* z) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", "Square", x, z));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field.SquareN
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::SquareN(::Array<uint>* x, int n, ::Array<uint>* z) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", "SquareN", x, n, z));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field.Subtract
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Subtract(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", "Subtract", x, y, z));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field.Twice
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::Twice(::Array<uint>* x, ::Array<uint>* z) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", "Twice", x, z));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field.ImplMultiply
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::ImplMultiply(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", "ImplMultiply", x, y, zz));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field.ImplSquare
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::ImplSquare(::Array<uint>* x, ::Array<uint>* zz) {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", "ImplSquare", x, zz));
}
// Autogenerated method: Org.BouncyCastle.Math.EC.Custom.Sec.SecP521R1Field..cctor
void Org::BouncyCastle::Math::EC::Custom::Sec::SecP521R1Field::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Math.EC.Custom.Sec", "SecP521R1Field", ".cctor"));
}