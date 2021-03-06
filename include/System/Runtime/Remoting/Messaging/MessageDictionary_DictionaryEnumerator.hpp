// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.MessageDictionary
#include "System/Runtime/Remoting/Messaging/MessageDictionary.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: DictionaryEntry
  struct DictionaryEntry;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.MessageDictionary/DictionaryEnumerator
  // [] Offset: FFFFFFFF
  class MessageDictionary::DictionaryEnumerator : public ::Il2CppObject/*, public System::Collections::IDictionaryEnumerator*/ {
    public:
    // private System.Runtime.Remoting.Messaging.MessageDictionary _methodDictionary
    // Size: 0x8
    // Offset: 0x10
    System::Runtime::Remoting::Messaging::MessageDictionary* methodDictionary;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::MessageDictionary*) == 0x8);
    // private System.Collections.IDictionaryEnumerator _hashtableEnum
    // Size: 0x8
    // Offset: 0x18
    System::Collections::IDictionaryEnumerator* hashtableEnum;
    // Field size check
    static_assert(sizeof(System::Collections::IDictionaryEnumerator*) == 0x8);
    // private System.Int32 _posMethod
    // Size: 0x4
    // Offset: 0x20
    int posMethod;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DictionaryEnumerator
    DictionaryEnumerator(System::Runtime::Remoting::Messaging::MessageDictionary* methodDictionary_ = {}, System::Collections::IDictionaryEnumerator* hashtableEnum_ = {}, int posMethod_ = {}) noexcept : methodDictionary{methodDictionary_}, hashtableEnum{hashtableEnum_}, posMethod{posMethod_} {}
    // Creating interface conversion operator: operator System::Collections::IDictionaryEnumerator
    operator System::Collections::IDictionaryEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IDictionaryEnumerator*>(this);
    }
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.MessageDictionary methodDictionary)
    // Offset: 0x15778A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageDictionary::DictionaryEnumerator* New_ctor(System::Runtime::Remoting::Messaging::MessageDictionary* methodDictionary) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageDictionary::DictionaryEnumerator*, creationType>(methodDictionary)));
    }
    // public System.Object get_Current()
    // Offset: 0x1577A20
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* get_Current();
    // Creating proxy method: System_Collections_IEnumerator_get_Current
    // Maps to method: get_Current
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0x1577C00
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // public System.Void Reset()
    // Offset: 0x1577DC4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
    // public System.Collections.DictionaryEntry get_Entry()
    // Offset: 0x1577A8C
    // Implemented from: System.Collections.IDictionaryEnumerator
    // Base method: System.Collections.DictionaryEntry IDictionaryEnumerator::get_Entry()
    System::Collections::DictionaryEntry get_Entry();
    // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Entry
    // Maps to method: get_Entry
    System::Collections::DictionaryEntry System_Collections_IDictionaryEnumerator_get_Entry();
    // public System.Object get_Key()
    // Offset: 0x1577E80
    // Implemented from: System.Collections.IDictionaryEnumerator
    // Base method: System.Object IDictionaryEnumerator::get_Key()
    ::Il2CppObject* get_Key();
    // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Key
    // Maps to method: get_Key
    ::Il2CppObject* System_Collections_IDictionaryEnumerator_get_Key();
    // public System.Object get_Value()
    // Offset: 0x1577E84
    // Implemented from: System.Collections.IDictionaryEnumerator
    // Base method: System.Object IDictionaryEnumerator::get_Value()
    ::Il2CppObject* get_Value();
    // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Value
    // Maps to method: get_Value
    ::Il2CppObject* System_Collections_IDictionaryEnumerator_get_Value();
  }; // System.Runtime.Remoting.Messaging.MessageDictionary/DictionaryEnumerator
  #pragma pack(pop)
  static check_size<sizeof(MessageDictionary::DictionaryEnumerator), 32 + sizeof(int)> __System_Runtime_Remoting_Messaging_MessageDictionary_DictionaryEnumeratorSizeCheck;
  static_assert(sizeof(MessageDictionary::DictionaryEnumerator) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::MessageDictionary::DictionaryEnumerator*, "System.Runtime.Remoting.Messaging", "MessageDictionary/DictionaryEnumerator");
