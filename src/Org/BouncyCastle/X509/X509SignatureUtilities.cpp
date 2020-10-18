// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.X509.X509SignatureUtilities
#include "Org/BouncyCastle/X509/X509SignatureUtilities.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Null
#include "Org/BouncyCastle/Asn1/Asn1Null.hpp"
// Including type: Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier
#include "Org/BouncyCastle/Asn1/X509/AlgorithmIdentifier.hpp"
// Including type: Org.BouncyCastle.Asn1.DerObjectIdentifier
#include "Org/BouncyCastle/Asn1/DerObjectIdentifier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private readonly Org.BouncyCastle.Asn1.Asn1Null derNull
Org::BouncyCastle::Asn1::Asn1Null* Org::BouncyCastle::X509::X509SignatureUtilities::_get_derNull() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<Org::BouncyCastle::Asn1::Asn1Null*>("Org.BouncyCastle.X509", "X509SignatureUtilities", "derNull"));
}
// Autogenerated static field setter
// Set static field: static private readonly Org.BouncyCastle.Asn1.Asn1Null derNull
void Org::BouncyCastle::X509::X509SignatureUtilities::_set_derNull(Org::BouncyCastle::Asn1::Asn1Null* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.X509", "X509SignatureUtilities", "derNull", value));
}
// Autogenerated method: Org.BouncyCastle.X509.X509SignatureUtilities.GetSignatureName
::Il2CppString* Org::BouncyCastle::X509::X509SignatureUtilities::GetSignatureName(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* sigAlgId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("Org.BouncyCastle.X509", "X509SignatureUtilities", "GetSignatureName", sigAlgId));
}
// Autogenerated method: Org.BouncyCastle.X509.X509SignatureUtilities.GetDigestAlgName
::Il2CppString* Org::BouncyCastle::X509::X509SignatureUtilities::GetDigestAlgName(Org::BouncyCastle::Asn1::DerObjectIdentifier* digestAlgOID) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("Org.BouncyCastle.X509", "X509SignatureUtilities", "GetDigestAlgName", digestAlgOID));
}
// Autogenerated method: Org.BouncyCastle.X509.X509SignatureUtilities..cctor
void Org::BouncyCastle::X509::X509SignatureUtilities::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.X509", "X509SignatureUtilities", ".cctor"));
}
