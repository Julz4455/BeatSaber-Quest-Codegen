// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.SortedList
#include "System/Collections/SortedList.hpp"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.SortedList/KeyList
  class SortedList::KeyList : public ::Il2CppObject, public System::Collections::IList {
    public:
    // private System.Collections.SortedList sortedList
    // Offset: 0x10
    System::Collections::SortedList* sortedList;
    // System.Void .ctor(System.Collections.SortedList sortedList)
    // Offset: 0x101E6A0
    static SortedList::KeyList* New_ctor(System::Collections::SortedList* sortedList);
    // public System.Int32 get_Count()
    // Offset: 0x101EB60
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x101EB7C
    // Implemented from: System.Collections.IList
    // Base method: System.Boolean IList::get_IsReadOnly()
    bool get_IsReadOnly();
    // Creating proxy method: System_Collections_IList_get_IsReadOnly
    // Maps to method: get_IsReadOnly
    bool System_Collections_IList_get_IsReadOnly();
    // public System.Int32 Add(System.Object key)
    // Offset: 0x101EB84
    // Implemented from: System.Collections.IList
    // Base method: System.Int32 IList::Add(System.Object key)
    int Add(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IList_Add
    // Maps to method: Add
    int System_Collections_IList_Add(::Il2CppObject* key);
    // public System.Void Clear()
    // Offset: 0x101EC04
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Clear()
    void Clear();
    // Creating proxy method: System_Collections_IList_Clear
    // Maps to method: Clear
    void System_Collections_IList_Clear();
    // public System.Boolean Contains(System.Object key)
    // Offset: 0x101EC84
    // Implemented from: System.Collections.IList
    // Base method: System.Boolean IList::Contains(System.Object key)
    bool Contains(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IList_Contains
    // Maps to method: Contains
    bool System_Collections_IList_Contains(::Il2CppObject* key);
    // public System.Void CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0x101ECA8
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 arrayIndex)
    void CopyTo(System::Array* array, int arrayIndex);
    // Creating proxy method: System_Collections_ICollection_CopyTo
    // Maps to method: CopyTo
    void System_Collections_ICollection_CopyTo(System::Array* array, int arrayIndex);
    // public System.Void Insert(System.Int32 index, System.Object value)
    // Offset: 0x101ED98
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Insert(System.Int32 index, System.Object value)
    void Insert(int index, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IList_Insert
    // Maps to method: Insert
    void System_Collections_IList_Insert(int index, ::Il2CppObject* value);
    // public System.Object get_Item(System.Int32 index)
    // Offset: 0x101EE18
    // Implemented from: System.Collections.IList
    // Base method: System.Object IList::get_Item(System.Int32 index)
    ::Il2CppObject* get_Item(int index);
    // Creating proxy method: System_Collections_IList_get_Item
    // Maps to method: get_Item
    ::Il2CppObject* System_Collections_IList_get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Object value)
    // Offset: 0x101EE3C
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::set_Item(System.Int32 index, System.Object value)
    void set_Item(int index, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IList_set_Item
    // Maps to method: set_Item
    void System_Collections_IList_set_Item(int index, ::Il2CppObject* value);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x101EEBC
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Int32 IndexOf(System.Object key)
    // Offset: 0x101EF58
    // Implemented from: System.Collections.IList
    // Base method: System.Int32 IList::IndexOf(System.Object key)
    int IndexOf(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IList_IndexOf
    // Maps to method: IndexOf
    int System_Collections_IList_IndexOf(::Il2CppObject* key);
    // public System.Void Remove(System.Object key)
    // Offset: 0x101F050
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Remove(System.Object key)
    void Remove(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IList_Remove
    // Maps to method: Remove
    void System_Collections_IList_Remove(::Il2CppObject* key);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x101F0D0
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::RemoveAt(System.Int32 index)
    void RemoveAt(int index);
    // Creating proxy method: System_Collections_IList_RemoveAt
    // Maps to method: RemoveAt
    void System_Collections_IList_RemoveAt(int index);
  }; // System.Collections.SortedList/KeyList
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::SortedList::KeyList*, "System.Collections", "SortedList/KeyList");
#pragma pack(pop)
