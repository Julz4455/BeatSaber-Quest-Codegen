// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Security.Cryptography.X509Certificates.X509ChainElementCollection
#include "System/Security/Cryptography/X509Certificates/X509ChainElementCollection.hpp"
// Including type: System.Collections.ArrayList
#include "System/Collections/ArrayList.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509ChainElement
#include "System/Security/Cryptography/X509Certificates/X509ChainElement.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509ChainElementEnumerator
#include "System/Security/Cryptography/X509Certificates/X509ChainElementEnumerator.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate2
#include "System/Security/Cryptography/X509Certificates/X509Certificate2.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainElementCollection.get_Item
System::Security::Cryptography::X509Certificates::X509ChainElement* System::Security::Cryptography::X509Certificates::X509ChainElementCollection::get_Item(int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::X509Certificates::X509ChainElement*>(this, "get_Item", index));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainElementCollection.GetEnumerator
System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator* System::Security::Cryptography::X509Certificates::X509ChainElementCollection::GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*>(this, "GetEnumerator"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainElementCollection.Add
void System::Security::Cryptography::X509Certificates::X509ChainElementCollection::Add(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", certificate));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainElementCollection.Clear
void System::Security::Cryptography::X509Certificates::X509ChainElementCollection::Clear() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainElementCollection.Contains
bool System::Security::Cryptography::X509Certificates::X509ChainElementCollection::Contains(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Contains", certificate));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainElementCollection..ctor
System::Security::Cryptography::X509Certificates::X509ChainElementCollection* System::Security::Cryptography::X509Certificates::X509ChainElementCollection::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<X509ChainElementCollection*>());
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainElementCollection.get_Count
int System::Security::Cryptography::X509Certificates::X509ChainElementCollection::get_Count() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
}
int System::Security::Cryptography::X509Certificates::X509ChainElementCollection::System_Collections_ICollection_get_Count() {
  return System::Security::Cryptography::X509Certificates::X509ChainElementCollection::get_Count();
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainElementCollection.System.Collections.ICollection.CopyTo
void System::Security::Cryptography::X509Certificates::X509ChainElementCollection::System_Collections_ICollection_CopyTo(System::Array* array, int index) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.ICollection.CopyTo", array, index));
}
// Autogenerated method: System.Security.Cryptography.X509Certificates.X509ChainElementCollection.System.Collections.IEnumerable.GetEnumerator
System::Collections::IEnumerator* System::Security::Cryptography::X509Certificates::X509ChainElementCollection::System_Collections_IEnumerable_GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
}
