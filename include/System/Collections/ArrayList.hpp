// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: ICollection because it is already included!
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.ArrayList
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CAD174
  // [DebuggerTypeProxyAttribute] Offset: CAD174
  // [DebuggerDisplayAttribute] Offset: CAD174
  // [DefaultMemberAttribute] Offset: CAD174
  class ArrayList : public ::Il2CppObject/*, public System::Collections::IList, public System::ICloneable*/ {
    public:
    // Nested type: System::Collections::ArrayList::ReadOnlyArrayList
    class ReadOnlyArrayList;
    // Nested type: System::Collections::ArrayList::ArrayListEnumeratorSimple
    class ArrayListEnumeratorSimple;
    // Nested type: System::Collections::ArrayList::ArrayListDebugView
    class ArrayListDebugView;
    // private System.Object[] _items
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppObject*>* items;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // private System.Int32 _size
    // Size: 0x4
    // Offset: 0x18
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x1C
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Object _syncRoot
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* syncRoot;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: ArrayList
    ArrayList(::Array<::Il2CppObject*>* items_ = {}, int size_ = {}, int version_ = {}, ::Il2CppObject* syncRoot_ = {}) noexcept : items{items_}, size{size_}, version{version_}, syncRoot{syncRoot_} {}
    // Creating interface conversion operator: operator System::Collections::IList
    operator System::Collections::IList() noexcept {
      return *reinterpret_cast<System::Collections::IList*>(this);
    }
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Get static field: static private readonly System.Object[] emptyArray
    static ::Array<::Il2CppObject*>* _get_emptyArray();
    // Set static field: static private readonly System.Object[] emptyArray
    static void _set_emptyArray(::Array<::Il2CppObject*>* value);
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0x168A8B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayList* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ArrayList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayList*, creationType>(capacity)));
    }
    // public System.Void .ctor(System.Collections.ICollection c)
    // Offset: 0x168A9FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayList* New_ctor(System::Collections::ICollection* c) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ArrayList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayList*, creationType>(c)));
    }
    // public System.Void set_Capacity(System.Int32 value)
    // Offset: 0x168AB9C
    void set_Capacity(int value);
    // public System.Object get_SyncRoot()
    // Offset: 0x168ACEC
    ::Il2CppObject* get_SyncRoot();
    // public System.Void AddRange(System.Collections.ICollection c)
    // Offset: 0x168B074
    void AddRange(System::Collections::ICollection* c);
    // public System.Void CopyTo(System.Array array)
    // Offset: 0x168B244
    void CopyTo(System::Array* array);
    // public System.Void CopyTo(System.Int32 index, System.Array array, System.Int32 arrayIndex, System.Int32 count)
    // Offset: 0x168B31C
    void CopyTo(int index, System::Array* array, int arrayIndex, int count);
    // private System.Void EnsureCapacity(System.Int32 min)
    // Offset: 0x168B01C
    void EnsureCapacity(int min);
    // public System.Void InsertRange(System.Int32 index, System.Collections.ICollection c)
    // Offset: 0x168B6FC
    void InsertRange(int index, System::Collections::ICollection* c);
    // static public System.Collections.ArrayList ReadOnly(System.Collections.ArrayList list)
    // Offset: 0x168B958
    static System::Collections::ArrayList* ReadOnly(System::Collections::ArrayList* list);
    // public System.Void RemoveRange(System.Int32 index, System.Int32 count)
    // Offset: 0x168BBE0
    void RemoveRange(int index, int count);
    // public System.Void Reverse()
    // Offset: 0x168BD98
    void Reverse();
    // public System.Void Reverse(System.Int32 index, System.Int32 count)
    // Offset: 0x168BDDC
    void Reverse(int index, int count);
    // public System.Object[] ToArray()
    // Offset: 0x168BF38
    ::Array<::Il2CppObject*>* ToArray();
    // public System.Array ToArray(System.Type type)
    // Offset: 0x168BFB0
    System::Array* ToArray(System::Type* type);
    // static private System.Void .cctor()
    // Offset: 0x168C0D0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x168A834
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ArrayList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayList*, creationType>()));
    }
    // public System.Int32 get_Count()
    // Offset: 0x168ACDC
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x168ACE4
    // Implemented from: System.Collections.IList
    // Base method: System.Boolean IList::get_IsReadOnly()
    bool get_IsReadOnly();
    // Creating proxy method: System_Collections_IList_get_IsReadOnly
    // Maps to method: get_IsReadOnly
    bool System_Collections_IList_get_IsReadOnly();
    // public System.Object get_Item(System.Int32 index)
    // Offset: 0x168AD64
    // Implemented from: System.Collections.IList
    // Base method: System.Object IList::get_Item(System.Int32 index)
    ::Il2CppObject* get_Item(int index);
    // Creating proxy method: System_Collections_IList_get_Item
    // Maps to method: get_Item
    ::Il2CppObject* System_Collections_IList_get_Item(int index);
    // public System.Void set_Item(System.Int32 index, System.Object value)
    // Offset: 0x168AE44
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::set_Item(System.Int32 index, System.Object value)
    void set_Item(int index, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IList_set_Item
    // Maps to method: set_Item
    void System_Collections_IList_set_Item(int index, ::Il2CppObject* value);
    // public System.Int32 Add(System.Object value)
    // Offset: 0x168AF60
    // Implemented from: System.Collections.IList
    // Base method: System.Int32 IList::Add(System.Object value)
    int Add(::Il2CppObject* value);
    // Creating proxy method: System_Collections_IList_Add
    // Maps to method: Add
    int System_Collections_IList_Add(::Il2CppObject* value);
    // public System.Void Clear()
    // Offset: 0x168B090
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Clear()
    void Clear();
    // Creating proxy method: System_Collections_IList_Clear
    // Maps to method: Clear
    void System_Collections_IList_Clear();
    // public System.Object Clone()
    // Offset: 0x168B0D4
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
    // public System.Boolean Contains(System.Object item)
    // Offset: 0x168B170
    // Implemented from: System.Collections.IList
    // Base method: System.Boolean IList::Contains(System.Object item)
    bool Contains(::Il2CppObject* item);
    // Creating proxy method: System_Collections_IList_Contains
    // Maps to method: Contains
    bool System_Collections_IList_Contains(::Il2CppObject* item);
    // public System.Void CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0x168B258
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 arrayIndex)
    void CopyTo(System::Array* array, int arrayIndex);
    // Creating proxy method: System_Collections_ICollection_CopyTo
    // Maps to method: CopyTo
    void System_Collections_ICollection_CopyTo(System::Array* array, int arrayIndex);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x168B40C
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Int32 IndexOf(System.Object value)
    // Offset: 0x168B588
    // Implemented from: System.Collections.IList
    // Base method: System.Int32 IList::IndexOf(System.Object value)
    int IndexOf(::Il2CppObject* value);
    // Creating proxy method: System_Collections_IList_IndexOf
    // Maps to method: IndexOf
    int System_Collections_IList_IndexOf(::Il2CppObject* value);
    // public System.Void Insert(System.Int32 index, System.Object value)
    // Offset: 0x168B59C
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Insert(System.Int32 index, System.Object value)
    void Insert(int index, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IList_Insert
    // Maps to method: Insert
    void System_Collections_IList_Insert(int index, ::Il2CppObject* value);
    // public System.Void Remove(System.Object obj)
    // Offset: 0x168BA74
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Remove(System.Object obj)
    void Remove(::Il2CppObject* obj);
    // Creating proxy method: System_Collections_IList_Remove
    // Maps to method: Remove
    void System_Collections_IList_Remove(::Il2CppObject* obj);
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x168BAC4
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::RemoveAt(System.Int32 index)
    void RemoveAt(int index);
    // Creating proxy method: System_Collections_IList_RemoveAt
    // Maps to method: RemoveAt
    void System_Collections_IList_RemoveAt(int index);
  }; // System.Collections.ArrayList
  #pragma pack(pop)
  static check_size<sizeof(ArrayList), 32 + sizeof(::Il2CppObject*)> __System_Collections_ArrayListSizeCheck;
  static_assert(sizeof(ArrayList) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::ArrayList*, "System.Collections", "ArrayList");
