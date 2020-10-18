// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Queue
#include "System/Collections/Queue.hpp"
// Including type: System.Collections.Queue/QueueEnumerator
#include "System/Collections/Queue_QueueEnumerator.hpp"
// Including type: System.Collections.Queue/QueueDebugView
#include "System/Collections/Queue_QueueDebugView.hpp"
// Including type: System.Array
#include "System/Array.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Collections.Queue..ctor
System::Collections::Queue* System::Collections::Queue::New_ctor(int capacity) {
  return THROW_UNLESS(il2cpp_utils::New<Queue*>(capacity));
}
// Autogenerated method: System.Collections.Queue..ctor
System::Collections::Queue* System::Collections::Queue::New_ctor(int capacity, float growFactor) {
  return THROW_UNLESS(il2cpp_utils::New<Queue*>(capacity, growFactor));
}
// Autogenerated method: System.Collections.Queue..ctor
System::Collections::Queue* System::Collections::Queue::New_ctor(System::Collections::ICollection* col) {
  return THROW_UNLESS(il2cpp_utils::New<Queue*>(col));
}
// Autogenerated method: System.Collections.Queue.Clear
void System::Collections::Queue::Clear() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
}
// Autogenerated method: System.Collections.Queue.Enqueue
void System::Collections::Queue::Enqueue(::Il2CppObject* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Enqueue", obj));
}
// Autogenerated method: System.Collections.Queue.Dequeue
::Il2CppObject* System::Collections::Queue::Dequeue() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "Dequeue"));
}
// Autogenerated method: System.Collections.Queue.Peek
::Il2CppObject* System::Collections::Queue::Peek() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "Peek"));
}
// Autogenerated method: System.Collections.Queue.GetElement
::Il2CppObject* System::Collections::Queue::GetElement(int i) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "GetElement", i));
}
// Autogenerated method: System.Collections.Queue.ToArray
::Array<::Il2CppObject*>* System::Collections::Queue::ToArray() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::Il2CppObject*>*>(this, "ToArray"));
}
// Autogenerated method: System.Collections.Queue.SetCapacity
void System::Collections::Queue::SetCapacity(int capacity) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetCapacity", capacity));
}
// Autogenerated method: System.Collections.Queue..ctor
System::Collections::Queue* System::Collections::Queue::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<Queue*>());
}
// Autogenerated method: System.Collections.Queue.get_Count
int System::Collections::Queue::get_Count() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
}
int System::Collections::Queue::System_Collections_ICollection_get_Count() {
  return System::Collections::Queue::get_Count();
}
// Autogenerated method: System.Collections.Queue.Clone
::Il2CppObject* System::Collections::Queue::Clone() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "Clone"));
}
::Il2CppObject* System::Collections::Queue::System_ICloneable_Clone() {
  return System::Collections::Queue::Clone();
}
// Autogenerated method: System.Collections.Queue.CopyTo
void System::Collections::Queue::CopyTo(System::Array* array, int index) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CopyTo", array, index));
}
void System::Collections::Queue::System_Collections_ICollection_CopyTo(System::Array* array, int index) {
  System::Collections::Queue::CopyTo(array, index);
}
// Autogenerated method: System.Collections.Queue.GetEnumerator
System::Collections::IEnumerator* System::Collections::Queue::GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "GetEnumerator"));
}
System::Collections::IEnumerator* System::Collections::Queue::System_Collections_IEnumerable_GetEnumerator() {
  return System::Collections::Queue::GetEnumerator();
}
