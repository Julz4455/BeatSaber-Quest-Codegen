// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.SortedList
#include "System/Collections/SortedList.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
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
  // Autogenerated type: System.Collections.SortedList/SortedListEnumerator
  class SortedList::SortedListEnumerator : public ::Il2CppObject, public System::Collections::IDictionaryEnumerator, public System::ICloneable {
    public:
    // private System.Collections.SortedList sortedList
    // Offset: 0x10
    System::Collections::SortedList* sortedList;
    // private System.Object key
    // Offset: 0x18
    ::Il2CppObject* key;
    // private System.Object value
    // Offset: 0x20
    ::Il2CppObject* value;
    // private System.Int32 index
    // Offset: 0x28
    int index;
    // private System.Int32 startIndex
    // Offset: 0x2C
    int startIndex;
    // private System.Int32 endIndex
    // Offset: 0x30
    int endIndex;
    // private System.Int32 version
    // Offset: 0x34
    int version;
    // private System.Boolean current
    // Offset: 0x38
    bool current;
    // private System.Int32 getObjectRetType
    // Offset: 0x3C
    int getObjectRetType;
    // System.Void .ctor(System.Collections.SortedList sortedList, System.Int32 index, System.Int32 count, System.Int32 getObjRetType)
    // Offset: 0x101E424
    static SortedList::SortedListEnumerator* New_ctor(System::Collections::SortedList* sortedList, int index, int count, int getObjRetType);
    // public System.Object Clone()
    // Offset: 0x101F150
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // public System.Object get_Key()
    // Offset: 0x101F158
    // Implemented from: System.Collections.IDictionaryEnumerator
    // Base method: System.Object IDictionaryEnumerator::get_Key()
    ::Il2CppObject* get_Key();
    // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Key
    // Maps to method: get_Key
    ::Il2CppObject* System_Collections_IDictionaryEnumerator_get_Key();
    // public System.Boolean MoveNext()
    // Offset: 0x101F21C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // public System.Collections.DictionaryEntry get_Entry()
    // Offset: 0x101F384
    // Implemented from: System.Collections.IDictionaryEnumerator
    // Base method: System.Collections.DictionaryEntry IDictionaryEnumerator::get_Entry()
    System::Collections::DictionaryEntry get_Entry();
    // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Entry
    // Maps to method: get_Entry
    System::Collections::DictionaryEntry System_Collections_IDictionaryEnumerator_get_Entry();
    // public System.Object get_Current()
    // Offset: 0x101F464
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* get_Current();
    // Creating proxy method: System_Collections_IEnumerator_get_Current
    // Maps to method: get_Current
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Object get_Value()
    // Offset: 0x101F558
    // Implemented from: System.Collections.IDictionaryEnumerator
    // Base method: System.Object IDictionaryEnumerator::get_Value()
    ::Il2CppObject* get_Value();
    // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Value
    // Maps to method: get_Value
    ::Il2CppObject* System_Collections_IDictionaryEnumerator_get_Value();
    // public System.Void Reset()
    // Offset: 0x101F61C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
  }; // System.Collections.SortedList/SortedListEnumerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::SortedList::SortedListEnumerator*, "System.Collections", "SortedList/SortedListEnumerator");
#pragma pack(pop)
