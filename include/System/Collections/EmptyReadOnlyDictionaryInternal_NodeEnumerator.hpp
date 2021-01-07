// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.EmptyReadOnlyDictionaryInternal
#include "System/Collections/EmptyReadOnlyDictionaryInternal.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: DictionaryEntry
  struct DictionaryEntry;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x10
  // Autogenerated type: System.Collections.EmptyReadOnlyDictionaryInternal/NodeEnumerator
  // [] Offset: FFFFFFFF
  class EmptyReadOnlyDictionaryInternal::NodeEnumerator : public ::Il2CppObject/*, public System::Collections::IDictionaryEnumerator*/ {
    public:
    // Creating value type constructor for type: NodeEnumerator
    NodeEnumerator() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IDictionaryEnumerator
    operator System::Collections::IDictionaryEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IDictionaryEnumerator*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x1CB5798
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EmptyReadOnlyDictionaryInternal::NodeEnumerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections").WithContext("NodeEnumerator").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EmptyReadOnlyDictionaryInternal::NodeEnumerator*, creationType>()));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x1CB5DEC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // public System.Object get_Current()
    // Offset: 0x1CB5DF4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* get_Current();
    // Creating proxy method: System_Collections_IEnumerator_get_Current
    // Maps to method: get_Current
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void Reset()
    // Offset: 0x1CB5E74
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
    // public System.Object get_Key()
    // Offset: 0x1CB5E78
    // Implemented from: System.Collections.IDictionaryEnumerator
    // Base method: System.Object IDictionaryEnumerator::get_Key()
    ::Il2CppObject* get_Key();
    // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Key
    // Maps to method: get_Key
    ::Il2CppObject* System_Collections_IDictionaryEnumerator_get_Key();
    // public System.Object get_Value()
    // Offset: 0x1CB5EF8
    // Implemented from: System.Collections.IDictionaryEnumerator
    // Base method: System.Object IDictionaryEnumerator::get_Value()
    ::Il2CppObject* get_Value();
    // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Value
    // Maps to method: get_Value
    ::Il2CppObject* System_Collections_IDictionaryEnumerator_get_Value();
    // public System.Collections.DictionaryEntry get_Entry()
    // Offset: 0x1CB5F78
    // Implemented from: System.Collections.IDictionaryEnumerator
    // Base method: System.Collections.DictionaryEntry IDictionaryEnumerator::get_Entry()
    System::Collections::DictionaryEntry get_Entry();
    // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Entry
    // Maps to method: get_Entry
    System::Collections::DictionaryEntry System_Collections_IDictionaryEnumerator_get_Entry();
  }; // System.Collections.EmptyReadOnlyDictionaryInternal/NodeEnumerator
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::EmptyReadOnlyDictionaryInternal::NodeEnumerator*, "System.Collections", "EmptyReadOnlyDictionaryInternal/NodeEnumerator");
#pragma pack(pop)
