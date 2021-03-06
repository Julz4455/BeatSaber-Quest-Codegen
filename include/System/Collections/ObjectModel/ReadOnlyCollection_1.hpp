// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.IList`1
#include "System/Collections/Generic/IList_1.hpp"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
// Including type: System.Collections.Generic.IReadOnlyList`1
#include "System/Collections/Generic/IReadOnlyList_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections.ObjectModel
namespace System::Collections::ObjectModel {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.ObjectModel.ReadOnlyCollection`1
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: CAD9C4
  // [ComVisibleAttribute] Offset: CAD9C4
  // [DebuggerTypeProxyAttribute] Offset: CAD9C4
  // [DebuggerDisplayAttribute] Offset: CAD9C4
  template<typename T>
  class ReadOnlyCollection_1 : public ::Il2CppObject/*, public System::Collections::Generic::IList_1<T>, public System::Collections::IList, public System::Collections::Generic::IReadOnlyList_1<T>*/ {
    public:
    // private System.Collections.Generic.IList`1<T> list
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::IList_1<T>* list;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<T>*) == 0x8);
    // private System.Object _syncRoot
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* syncRoot;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: ReadOnlyCollection_1
    ReadOnlyCollection_1(System::Collections::Generic::IList_1<T>* list_ = {}, ::Il2CppObject* syncRoot_ = {}) noexcept : list{list_}, syncRoot{syncRoot_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IList_1<T>
    operator System::Collections::Generic::IList_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IList_1<T>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::IList
    operator System::Collections::IList() noexcept {
      return *reinterpret_cast<System::Collections::IList*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IReadOnlyList_1<T>
    operator System::Collections::Generic::IReadOnlyList_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IReadOnlyList_1<T>*>(this);
    }
    // public System.Void .ctor(System.Collections.Generic.IList`1<T> list)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReadOnlyCollection_1<T>* New_ctor(System::Collections::Generic::IList_1<T>* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReadOnlyCollection_1<T>*, creationType>(list)));
    }
    // static private System.Boolean IsCompatibleObject(System.Object value)
    // Offset: 0xFFFFFFFF
    static bool IsCompatibleObject(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::IsCompatibleObject");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReadOnlyCollection_1<T>*>::get(), "IsCompatibleObject", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value))));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, value);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Int32 ICollection_1::get_Count()
    // Base method: System.Int32 ICollection::get_Count()
    // Base method: System.Int32 IReadOnlyCollection_1::get_Count()
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::get_Count");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_get_Count
    // Maps to method: get_Count
    int System_Collections_Generic_ICollection_1_get_Count() {
      return get_Count();
    }
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count() {
      return get_Count();
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IReadOnlyList`1
    // Base method: T IReadOnlyList_1::get_Item(System.Int32 index)
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::get_Item");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index)));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method, index);
    }
    // Creating proxy method: System_Collections_Generic_IReadOnlyList_1_get_Item
    // Maps to method: get_Item
    T System_Collections_Generic_IReadOnlyList_1_get_Item(int index) {
      return get_Item(index);
    }
    // public System.Boolean Contains(T value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection_1::Contains(T value)
    bool Contains(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::Contains");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Contains", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, value);
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_Contains
    // Maps to method: Contains
    bool System_Collections_Generic_ICollection_1_Contains(T value) {
      return Contains(value);
    }
    // public System.Void CopyTo(T[] array, System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection_1::CopyTo(T[] array, System.Int32 index)
    void CopyTo(::Array<T>* array, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::CopyTo");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CopyTo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(array, index)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, array, index);
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_CopyTo
    // Maps to method: CopyTo
    void System_Collections_Generic_ICollection_1_CopyTo(::Array<T>* array, int index) {
      CopyTo(array, index);
    }
    // public System.Collections.Generic.IEnumerator`1<T> GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
    // Creating proxy method: System_Collections_Generic_IEnumerable_1_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
      return GetEnumerator();
    }
    // public System.Int32 IndexOf(T value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: System.Int32 IList_1::IndexOf(T value)
    int IndexOf(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::IndexOf");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "IndexOf", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, value);
    }
    // Creating proxy method: System_Collections_Generic_IList_1_IndexOf
    // Maps to method: IndexOf
    int System_Collections_Generic_IList_1_IndexOf(T value) {
      return IndexOf(value);
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.get_IsReadOnly()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection_1::get_IsReadOnly()
    bool System_Collections_Generic_ICollection_1_get_IsReadOnly() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.Generic.ICollection<T>.get_IsReadOnly");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.ICollection<T>.get_IsReadOnly", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // private T System.Collections.Generic.IList<T>.get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: T IList_1::get_Item(System.Int32 index)
    T System_Collections_Generic_IList_1_get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.Generic.IList<T>.get_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IList<T>.get_Item", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index))));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method, index);
    }
    // private System.Void System.Collections.Generic.IList<T>.set_Item(System.Int32 index, T value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: System.Void IList_1::set_Item(System.Int32 index, T value)
    void System_Collections_Generic_IList_1_set_Item(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.Generic.IList<T>.set_Item");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IList<T>.set_Item", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index, value))));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index, value);
    }
    // private System.Void System.Collections.Generic.ICollection<T>.Add(T value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection_1::Add(T value)
    void System_Collections_Generic_ICollection_1_Add(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.Generic.ICollection<T>.Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.ICollection<T>.Add", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value))));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private System.Void System.Collections.Generic.ICollection<T>.Clear()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection_1::Clear()
    void System_Collections_Generic_ICollection_1_Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.Generic.ICollection<T>.Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.ICollection<T>.Clear", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Void System.Collections.Generic.IList<T>.Insert(System.Int32 index, T value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: System.Void IList_1::Insert(System.Int32 index, T value)
    void System_Collections_Generic_IList_1_Insert(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.Generic.IList<T>.Insert");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IList<T>.Insert", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index, value))));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index, value);
    }
    // private System.Boolean System.Collections.Generic.ICollection<T>.Remove(T value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection_1::Remove(T value)
    bool System_Collections_Generic_ICollection_1_Remove(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.Generic.ICollection<T>.Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.ICollection<T>.Remove", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value))));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, value);
    }
    // private System.Void System.Collections.Generic.IList<T>.RemoveAt(System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IList`1
    // Base method: System.Void IList_1::RemoveAt(System.Int32 index)
    void System_Collections_Generic_IList_1_RemoveAt(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.Generic.IList<T>.RemoveAt");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IList<T>.RemoveAt", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index))));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IEnumerable.GetEnumerator");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void System_Collections_ICollection_CopyTo(System::Array* array, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.ICollection.CopyTo");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(array, index)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, array, index);
    }
    // private System.Boolean System.Collections.IList.get_IsReadOnly()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Boolean IList::get_IsReadOnly()
    bool System_Collections_IList_get_IsReadOnly() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.get_IsReadOnly");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IList.get_IsReadOnly", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // private System.Object System.Collections.IList.get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Object IList::get_Item(System.Int32 index)
    ::Il2CppObject* System_Collections_IList_get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.get_Item");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IList.get_Item", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index)));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method, index);
    }
    // private System.Void System.Collections.IList.set_Item(System.Int32 index, System.Object value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::set_Item(System.Int32 index, System.Object value)
    void System_Collections_IList_set_Item(int index, ::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.set_Item");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IList.set_Item", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index, value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index, value);
    }
    // private System.Int32 System.Collections.IList.Add(System.Object value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Int32 IList::Add(System.Object value)
    int System_Collections_IList_Add(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.Add");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IList.Add", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, value);
    }
    // private System.Void System.Collections.IList.Clear()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Clear()
    void System_Collections_IList_Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.Clear");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IList.Clear", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Boolean System.Collections.IList.Contains(System.Object value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Boolean IList::Contains(System.Object value)
    bool System_Collections_IList_Contains(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.Contains");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IList.Contains", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, value);
    }
    // private System.Int32 System.Collections.IList.IndexOf(System.Object value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Int32 IList::IndexOf(System.Object value)
    int System_Collections_IList_IndexOf(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.IndexOf");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IList.IndexOf", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, value);
    }
    // private System.Void System.Collections.IList.Insert(System.Int32 index, System.Object value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Insert(System.Int32 index, System.Object value)
    void System_Collections_IList_Insert(int index, ::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.Insert");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IList.Insert", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index, value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index, value);
    }
    // private System.Void System.Collections.IList.Remove(System.Object value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Remove(System.Object value)
    void System_Collections_IList_Remove(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.Remove");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IList.Remove", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // private System.Void System.Collections.IList.RemoveAt(System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::RemoveAt(System.Int32 index)
    void System_Collections_IList_RemoveAt(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ObjectModel::ReadOnlyCollection_1::System.Collections.IList.RemoveAt");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IList.RemoveAt", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(index)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, index);
    }
  }; // System.Collections.ObjectModel.ReadOnlyCollection`1
  // Could not write size check! Type: System.Collections.ObjectModel.ReadOnlyCollection`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::ObjectModel::ReadOnlyCollection_1, "System.Collections.ObjectModel", "ReadOnlyCollection`1");
