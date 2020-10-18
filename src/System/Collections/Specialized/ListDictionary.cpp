// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Specialized.ListDictionary
#include "System/Collections/Specialized/ListDictionary.hpp"
// Including type: System.Collections.Specialized.ListDictionary/NodeEnumerator
#include "System/Collections/Specialized/ListDictionary_NodeEnumerator.hpp"
// Including type: System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
#include "System/Collections/Specialized/ListDictionary_NodeKeyValueCollection.hpp"
// Including type: System.Collections.Specialized.ListDictionary/DictionaryNode
#include "System/Collections/Specialized/ListDictionary_DictionaryNode.hpp"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Collections.Specialized.ListDictionary..ctor
System::Collections::Specialized::ListDictionary* System::Collections::Specialized::ListDictionary::New_ctor(System::Collections::IComparer* comparer) {
  return THROW_UNLESS(il2cpp_utils::New<ListDictionary*>(comparer));
}
// Autogenerated method: System.Collections.Specialized.ListDictionary.get_Values
System::Collections::ICollection* System::Collections::Specialized::ListDictionary::get_Values() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::ICollection*>(this, "get_Values"));
}
// Autogenerated method: System.Collections.Specialized.ListDictionary..ctor
System::Collections::Specialized::ListDictionary* System::Collections::Specialized::ListDictionary::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ListDictionary*>());
}
// Autogenerated method: System.Collections.Specialized.ListDictionary.get_Item
::Il2CppObject* System::Collections::Specialized::ListDictionary::get_Item(::Il2CppObject* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_Item", key));
}
::Il2CppObject* System::Collections::Specialized::ListDictionary::System_Collections_IDictionary_get_Item(::Il2CppObject* key) {
  return System::Collections::Specialized::ListDictionary::get_Item(key);
}
// Autogenerated method: System.Collections.Specialized.ListDictionary.set_Item
void System::Collections::Specialized::ListDictionary::set_Item(::Il2CppObject* key, ::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Item", key, value));
}
void System::Collections::Specialized::ListDictionary::System_Collections_IDictionary_set_Item(::Il2CppObject* key, ::Il2CppObject* value) {
  System::Collections::Specialized::ListDictionary::set_Item(key, value);
}
// Autogenerated method: System.Collections.Specialized.ListDictionary.get_Count
int System::Collections::Specialized::ListDictionary::get_Count() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
}
int System::Collections::Specialized::ListDictionary::System_Collections_ICollection_get_Count() {
  return System::Collections::Specialized::ListDictionary::get_Count();
}
// Autogenerated method: System.Collections.Specialized.ListDictionary.get_Keys
System::Collections::ICollection* System::Collections::Specialized::ListDictionary::get_Keys() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::ICollection*>(this, "get_Keys"));
}
System::Collections::ICollection* System::Collections::Specialized::ListDictionary::System_Collections_IDictionary_get_Keys() {
  return System::Collections::Specialized::ListDictionary::get_Keys();
}
// Autogenerated method: System.Collections.Specialized.ListDictionary.Add
void System::Collections::Specialized::ListDictionary::Add(::Il2CppObject* key, ::Il2CppObject* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", key, value));
}
void System::Collections::Specialized::ListDictionary::System_Collections_IDictionary_Add(::Il2CppObject* key, ::Il2CppObject* value) {
  System::Collections::Specialized::ListDictionary::Add(key, value);
}
// Autogenerated method: System.Collections.Specialized.ListDictionary.Contains
bool System::Collections::Specialized::ListDictionary::Contains(::Il2CppObject* key) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Contains", key));
}
bool System::Collections::Specialized::ListDictionary::System_Collections_IDictionary_Contains(::Il2CppObject* key) {
  return System::Collections::Specialized::ListDictionary::Contains(key);
}
// Autogenerated method: System.Collections.Specialized.ListDictionary.CopyTo
void System::Collections::Specialized::ListDictionary::CopyTo(System::Array* array, int index) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CopyTo", array, index));
}
void System::Collections::Specialized::ListDictionary::System_Collections_ICollection_CopyTo(System::Array* array, int index) {
  System::Collections::Specialized::ListDictionary::CopyTo(array, index);
}
// Autogenerated method: System.Collections.Specialized.ListDictionary.GetEnumerator
System::Collections::IDictionaryEnumerator* System::Collections::Specialized::ListDictionary::GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IDictionaryEnumerator*>(this, "GetEnumerator"));
}
System::Collections::IDictionaryEnumerator* System::Collections::Specialized::ListDictionary::System_Collections_IDictionary_GetEnumerator() {
  return System::Collections::Specialized::ListDictionary::GetEnumerator();
}
// Autogenerated method: System.Collections.Specialized.ListDictionary.System.Collections.IEnumerable.GetEnumerator
System::Collections::IEnumerator* System::Collections::Specialized::ListDictionary::System_Collections_IEnumerable_GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
}
