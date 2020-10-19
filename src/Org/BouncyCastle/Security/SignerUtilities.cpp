// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Security.SignerUtilities
#include "Org/BouncyCastle/Security/SignerUtilities.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
// Including type: Org.BouncyCastle.Crypto.ISigner
#include "Org/BouncyCastle/Crypto/ISigner.hpp"
// Including type: Org.BouncyCastle.Asn1.DerObjectIdentifier
#include "Org/BouncyCastle/Asn1/DerObjectIdentifier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static readonly System.Collections.IDictionary algorithms
System::Collections::IDictionary* Org::BouncyCastle::Security::SignerUtilities::_get_algorithms() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::IDictionary*>("Org.BouncyCastle.Security", "SignerUtilities", "algorithms"));
}
// Autogenerated static field setter
// Set static field: static readonly System.Collections.IDictionary algorithms
void Org::BouncyCastle::Security::SignerUtilities::_set_algorithms(System::Collections::IDictionary* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Security", "SignerUtilities", "algorithms", value));
}
// Autogenerated static field getter
// Get static field: static readonly System.Collections.IDictionary oids
System::Collections::IDictionary* Org::BouncyCastle::Security::SignerUtilities::_get_oids() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::IDictionary*>("Org.BouncyCastle.Security", "SignerUtilities", "oids"));
}
// Autogenerated static field setter
// Set static field: static readonly System.Collections.IDictionary oids
void Org::BouncyCastle::Security::SignerUtilities::_set_oids(System::Collections::IDictionary* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Org.BouncyCastle.Security", "SignerUtilities", "oids", value));
}
// Autogenerated method: Org.BouncyCastle.Security.SignerUtilities..cctor
void Org::BouncyCastle::Security::SignerUtilities::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("Org.BouncyCastle.Security", "SignerUtilities", ".cctor"));
}
// Autogenerated method: Org.BouncyCastle.Security.SignerUtilities.GetSigner
Org::BouncyCastle::Crypto::ISigner* Org::BouncyCastle::Security::SignerUtilities::GetSigner(::Il2CppString* algorithm) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Org::BouncyCastle::Crypto::ISigner*>("Org.BouncyCastle.Security", "SignerUtilities", "GetSigner", algorithm));
}
// Autogenerated method: Org.BouncyCastle.Security.SignerUtilities.GetEncodingName
::Il2CppString* Org::BouncyCastle::Security::SignerUtilities::GetEncodingName(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>("Org.BouncyCastle.Security", "SignerUtilities", "GetEncodingName", oid));
}