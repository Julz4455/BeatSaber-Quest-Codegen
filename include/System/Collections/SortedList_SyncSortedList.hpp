// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.SortedList
#include "System/Collections/SortedList.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
  // Forward declaring type: IList
  class IList;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.SortedList/SyncSortedList
  class SortedList::SyncSortedList : public System::Collections::SortedList {
    public:
    // private System.Collections.SortedList _list
    // Offset: 0x48
    System::Collections::SortedList* list;
    // private System.Object _root
    // Offset: 0x50
    ::Il2CppObject* root;
    // System.Void .ctor(System.Collections.SortedList list)
    // Offset: 0x17E932C
    static SortedList::SyncSortedList* New_ctor(System::Collections::SortedList* list);
    // public override System.Int32 get_Count()
    // Offset: 0x17E9FF0
    // Implemented from: System.Collections.SortedList
    // Base method: System.Int32 SortedList::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public override System.Object get_SyncRoot()
    // Offset: 0x17EA0B8
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::get_SyncRoot()
    ::Il2CppObject* get_SyncRoot();
    // public override System.Object get_Item(System.Object key)
    // Offset: 0x17EA0C0
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::get_Item(System.Object key)
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_get_Item
    // Maps to method: get_Item
    ::Il2CppObject* System_Collections_IDictionary_get_Item(::Il2CppObject* key);
    // public override System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x17EA190
    // Implemented from: System.Collections.SortedList
    // Base method: System.Void SortedList::set_Item(System.Object key, System.Object value)
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IDictionary_set_Item
    // Maps to method: set_Item
    void System_Collections_IDictionary_set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public override System.Void Add(System.Object key, System.Object value)
    // Offset: 0x17EA258
    // Implemented from: System.Collections.SortedList
    // Base method: System.Void SortedList::Add(System.Object key, System.Object value)
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IDictionary_Add
    // Maps to method: Add
    void System_Collections_IDictionary_Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public override System.Int32 get_Capacity()
    // Offset: 0x17EA320
    // Implemented from: System.Collections.SortedList
    // Base method: System.Int32 SortedList::get_Capacity()
    int get_Capacity();
    // public override System.Object Clone()
    // Offset: 0x17EA3E8
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
    // public override System.Boolean Contains(System.Object key)
    // Offset: 0x17EA4B0
    // Implemented from: System.Collections.SortedList
    // Base method: System.Boolean SortedList::Contains(System.Object key)
    bool Contains(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_Contains
    // Maps to method: Contains
    bool System_Collections_IDictionary_Contains(::Il2CppObject* key);
    // public override System.Boolean ContainsValue(System.Object key)
    // Offset: 0x17EA580
    // Implemented from: System.Collections.SortedList
    // Base method: System.Boolean SortedList::ContainsValue(System.Object key)
    bool ContainsValue(::Il2CppObject* key);
    // public override System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x17EA650
    // Implemented from: System.Collections.SortedList
    // Base method: System.Void SortedList::CopyTo(System.Array array, System.Int32 index)
    void CopyTo(System::Array* array, int index);
    // Creating proxy method: System_Collections_ICollection_CopyTo
    // Maps to method: CopyTo
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // public override System.Object GetByIndex(System.Int32 index)
    // Offset: 0x17EA718
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::GetByIndex(System.Int32 index)
    ::Il2CppObject* GetByIndex(int index);
    // public override System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x17EA7E8
    // Implemented from: System.Collections.SortedList
    // Base method: System.Collections.IDictionaryEnumerator SortedList::GetEnumerator()
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IDictionary_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();
    // public override System.Object GetKey(System.Int32 index)
    // Offset: 0x17EA8B0
    // Implemented from: System.Collections.SortedList
    // Base method: System.Object SortedList::GetKey(System.Int32 index)
    ::Il2CppObject* GetKey(int index);
    // public override System.Collections.IList GetKeyList()
    // Offset: 0x17EA980
    // Implemented from: System.Collections.SortedList
    // Base method: System.Collections.IList SortedList::GetKeyList()
    System::Collections::IList* GetKeyList();
    // public override System.Collections.IList GetValueList()
    // Offset: 0x17EAA48
    // Implemented from: System.Collections.SortedList
    // Base method: System.Collections.IList SortedList::GetValueList()
    System::Collections::IList* GetValueList();
    // public override System.Int32 IndexOfKey(System.Object key)
    // Offset: 0x17EAB10
    // Implemented from: System.Collections.SortedList
    // Base method: System.Int32 SortedList::IndexOfKey(System.Object key)
    int IndexOfKey(::Il2CppObject* key);
    // public override System.Int32 IndexOfValue(System.Object value)
    // Offset: 0x17EAC68
    // Implemented from: System.Collections.SortedList
    // Base method: System.Int32 SortedList::IndexOfValue(System.Object value)
    int IndexOfValue(::Il2CppObject* value);
    // public override System.Void RemoveAt(System.Int32 index)
    // Offset: 0x17EAD38
    // Implemented from: System.Collections.SortedList
    // Base method: System.Void SortedList::RemoveAt(System.Int32 index)
    void RemoveAt(int index);
  }; // System.Collections.SortedList/SyncSortedList
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::SortedList::SyncSortedList*, "System.Collections", "SortedList/SyncSortedList");
#pragma pack(pop)
