// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Org.BouncyCastle.Asn1.DerTaggedObject
#include "Org/BouncyCastle/Asn1/DerTaggedObject.hpp"
// Including type: Org.BouncyCastle.Asn1.DerOutputStream
#include "Org/BouncyCastle/Asn1/DerOutputStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Org.BouncyCastle.Asn1.DerTaggedObject..ctor
Org::BouncyCastle::Asn1::DerTaggedObject* Org::BouncyCastle::Asn1::DerTaggedObject::New_ctor(int tagNo, Org::BouncyCastle::Asn1::Asn1Encodable* obj) {
  return THROW_UNLESS(il2cpp_utils::New<DerTaggedObject*>(tagNo, obj));
}
// Autogenerated method: Org.BouncyCastle.Asn1.DerTaggedObject..ctor
Org::BouncyCastle::Asn1::DerTaggedObject* Org::BouncyCastle::Asn1::DerTaggedObject::New_ctor(bool explicitly, int tagNo, Org::BouncyCastle::Asn1::Asn1Encodable* obj) {
  return THROW_UNLESS(il2cpp_utils::New<DerTaggedObject*>(explicitly, tagNo, obj));
}
// Autogenerated method: Org.BouncyCastle.Asn1.DerTaggedObject.Encode
void Org::BouncyCastle::Asn1::DerTaggedObject::Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Encode", derOut));
}
