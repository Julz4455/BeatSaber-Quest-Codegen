// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.OidEnumerator
#include "System/Security/Cryptography/OidEnumerator.hpp"
// Including type: System.Security.Cryptography.OidCollection
#include "System/Security/Cryptography/OidCollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Cryptography.OidEnumerator..ctor
System::Security::Cryptography::OidEnumerator* System::Security::Cryptography::OidEnumerator::New_ctor(System::Security::Cryptography::OidCollection* oids) {
  return THROW_UNLESS(il2cpp_utils::New<OidEnumerator*>(oids));
}
// Autogenerated method: System.Security.Cryptography.OidEnumerator.System.Collections.IEnumerator.get_Current
::Il2CppObject* System::Security::Cryptography::OidEnumerator::System_Collections_IEnumerator_get_Current() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "System.Collections.IEnumerator.get_Current"));
}
// Autogenerated method: System.Security.Cryptography.OidEnumerator.MoveNext
bool System::Security::Cryptography::OidEnumerator::MoveNext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
}
bool System::Security::Cryptography::OidEnumerator::System_Collections_IEnumerator_MoveNext() {
  return System::Security::Cryptography::OidEnumerator::MoveNext();
}
// Autogenerated method: System.Security.Cryptography.OidEnumerator.Reset
void System::Security::Cryptography::OidEnumerator::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
void System::Security::Cryptography::OidEnumerator::System_Collections_IEnumerator_Reset() {
  System::Security::Cryptography::OidEnumerator::Reset();
}
