// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.ListDictionaryInternal
#include "System/Collections/ListDictionaryInternal.hpp"
// Including type: System.Collections.ListDictionaryInternal/NodeEnumerator
#include "System/Collections/ListDictionaryInternal_NodeEnumerator.hpp"
// Including type: System.Collections.ListDictionaryInternal/NodeKeyValueCollection
#include "System/Collections/ListDictionaryInternal_NodeKeyValueCollection.hpp"
// Including type: System.Collections.ListDictionaryInternal/DictionaryNode
#include "System/Collections/ListDictionaryInternal_DictionaryNode.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Collections.ListDictionaryInternal..ctor
System::Collections::ListDictionaryInternal* System::Collections::ListDictionaryInternal::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ListDictionaryInternal*>());
}
// Autogenerated method: System.Collections.ListDictionaryInternal.get_Item
::Il2CppObject* System::Collections::ListDictionaryInternal::get_Item(::Il2CppObject* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_Item", key));
}
::Il2CppObject* System::Collections::ListDictionaryInternal::System_Collections_IDictionary_get_Item(::Il2CppObject* key) {
  return System::Collections::ListDictionaryInternal::get_Item(key);
}
// Autogenerated method: System.Collections.ListDictionaryInternal.set_Item
void System::Collections::ListDictionaryInternal::set_Item(::Il2CppObject* key, ::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Item", key, value));
}
void System::Collections::ListDictionaryInternal::System_Collections_IDictionary_set_Item(::Il2CppObject* key, ::Il2CppObject* value) {
  System::Collections::ListDictionaryInternal::set_Item(key, value);
}
// Autogenerated method: System.Collections.ListDictionaryInternal.get_Count
int System::Collections::ListDictionaryInternal::get_Count() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
}
int System::Collections::ListDictionaryInternal::System_Collections_ICollection_get_Count() {
  return System::Collections::ListDictionaryInternal::get_Count();
}
// Autogenerated method: System.Collections.ListDictionaryInternal.get_Keys
System::Collections::ICollection* System::Collections::ListDictionaryInternal::get_Keys() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::ICollection*>(this, "get_Keys"));
}
System::Collections::ICollection* System::Collections::ListDictionaryInternal::System_Collections_IDictionary_get_Keys() {
  return System::Collections::ListDictionaryInternal::get_Keys();
}
// Autogenerated method: System.Collections.ListDictionaryInternal.Add
void System::Collections::ListDictionaryInternal::Add(::Il2CppObject* key, ::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", key, value));
}
void System::Collections::ListDictionaryInternal::System_Collections_IDictionary_Add(::Il2CppObject* key, ::Il2CppObject* value) {
  System::Collections::ListDictionaryInternal::Add(key, value);
}
// Autogenerated method: System.Collections.ListDictionaryInternal.Contains
bool System::Collections::ListDictionaryInternal::Contains(::Il2CppObject* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Contains", key));
}
bool System::Collections::ListDictionaryInternal::System_Collections_IDictionary_Contains(::Il2CppObject* key) {
  return System::Collections::ListDictionaryInternal::Contains(key);
}
// Autogenerated method: System.Collections.ListDictionaryInternal.CopyTo
void System::Collections::ListDictionaryInternal::CopyTo(System::Array* array, int index) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CopyTo", array, index));
}
void System::Collections::ListDictionaryInternal::System_Collections_ICollection_CopyTo(System::Array* array, int index) {
  System::Collections::ListDictionaryInternal::CopyTo(array, index);
}
// Autogenerated method: System.Collections.ListDictionaryInternal.GetEnumerator
System::Collections::IDictionaryEnumerator* System::Collections::ListDictionaryInternal::GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IDictionaryEnumerator*>(this, "GetEnumerator"));
}
System::Collections::IDictionaryEnumerator* System::Collections::ListDictionaryInternal::System_Collections_IDictionary_GetEnumerator() {
  return System::Collections::ListDictionaryInternal::GetEnumerator();
}
// Autogenerated method: System.Collections.ListDictionaryInternal.System.Collections.IEnumerable.GetEnumerator
System::Collections::IEnumerator* System::Collections::ListDictionaryInternal::System_Collections_IEnumerable_GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
}
