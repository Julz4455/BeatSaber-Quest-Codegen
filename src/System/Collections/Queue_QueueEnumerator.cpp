// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Queue/QueueEnumerator
#include "System/Collections/Queue_QueueEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Collections.Queue/QueueEnumerator..ctor
System::Collections::Queue::QueueEnumerator* System::Collections::Queue::QueueEnumerator::New_ctor(System::Collections::Queue* q) {
  return (Queue::QueueEnumerator*)THROW_UNLESS(il2cpp_utils::New("System.Collections", "Queue/QueueEnumerator", q));
}
// Autogenerated method: System.Collections.Queue/QueueEnumerator.Clone
::Il2CppObject* System::Collections::Queue::QueueEnumerator::Clone() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "Clone"));
}
// Autogenerated method: System.Collections.Queue/QueueEnumerator.MoveNext
bool System::Collections::Queue::QueueEnumerator::MoveNext() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
}
// Autogenerated method: System.Collections.Queue/QueueEnumerator.get_Current
::Il2CppObject* System::Collections::Queue::QueueEnumerator::get_Current() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_Current"));
}
::Il2CppObject* System::Collections::Queue::QueueEnumerator::System_Collections_IEnumerator_get_Current() {
  return System::Collections::Queue::QueueEnumerator::get_Current();
}
// Autogenerated method: System.Collections.Queue/QueueEnumerator.Reset
void System::Collections::Queue::QueueEnumerator::Reset() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
}
void System::Collections::Queue::QueueEnumerator::System_Collections_IEnumerator_Reset() {
  System::Collections::Queue::QueueEnumerator::Reset();
}
