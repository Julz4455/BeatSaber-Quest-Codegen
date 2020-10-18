// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.IDictionary`2
#include "System/Collections/Generic/IDictionary_2.hpp"
// Including type: System.Collections.IDictionary
#include "System/Collections/IDictionary.hpp"
// Including type: System.Collections.Generic.IReadOnlyDictionary`2
#include "System/Collections/Generic/IReadOnlyDictionary_2.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
// Including type: System.Collections.DictionaryEntry
#include "System/Collections/DictionaryEntry.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Concurrent
namespace System::Collections::Concurrent {
  // Skipping declaration: Tables because it is already included!
  // Skipping declaration: Node because it is already included!
  // Skipping declaration: DictionaryEnumerator because it is already included!
  // Skipping declaration: <GetEnumerator>d__32 because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEqualityComparer`1<T>
  template<typename T>
  class IEqualityComparer_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
  // Skipping declaration: ICollection because it is already included!
}
// Completed forward declares
// Type namespace: System.Collections.Concurrent
namespace System::Collections::Concurrent {
  // Autogenerated type: System.Collections.Concurrent.ConcurrentDictionary`2
  template<typename TKey, typename TValue>
  class ConcurrentDictionary_2 : public ::Il2CppObject, public System::Collections::Generic::IDictionary_2<TKey, TValue>, public System::Collections::IDictionary, public System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue> {
    public:
    // Nested type: System::Collections::Concurrent::ConcurrentDictionary_2::Tables<TKey, TValue>
    class Tables;
    // Nested type: System::Collections::Concurrent::ConcurrentDictionary_2::Node<TKey, TValue>
    class Node;
    // Nested type: System::Collections::Concurrent::ConcurrentDictionary_2::DictionaryEnumerator<TKey, TValue>
    class DictionaryEnumerator;
    // Nested type: System::Collections::Concurrent::ConcurrentDictionary_2::$GetEnumerator$d__32<TKey, TValue>
    class $GetEnumerator$d__32;
    // Autogenerated type: System.Collections.Concurrent.ConcurrentDictionary`2/Tables
    class Tables : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = ConcurrentDictionary_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "Tables";
      // readonly System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] _buckets
      // Offset: 0x0
      ::Array<typename System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::Node*>* buckets;
      // readonly System.Object[] _locks
      // Offset: 0x0
      ::Array<::Il2CppObject*>* locks;
      // System.Int32[] _countPerLock
      // Offset: 0x0
      ::Array<int>* countPerLock;
      // System.Void .ctor(System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] buckets, System.Object[] locks, System.Int32[] countPerLock)
      // Offset: 0xFFFFFFFF
      static typename ConcurrentDictionary_2<TKey, TValue>::Tables* New_ctor(::Array<typename System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::Node*>* buckets, ::Array<::Il2CppObject*>* locks, ::Array<int>* countPerLock) {
        return THROW_UNLESS((il2cpp_utils::New<typename ConcurrentDictionary_2<TKey, TValue>::Tables*>(buckets, locks, countPerLock)));
      }
    }; // System.Collections.Concurrent.ConcurrentDictionary`2/Tables
    // Autogenerated type: System.Collections.Concurrent.ConcurrentDictionary`2/Node
    class Node : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = ConcurrentDictionary_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "Node";
      // readonly TKey _key
      // Offset: 0x0
      TKey key;
      // TValue _value
      // Offset: 0x0
      TValue value;
      // System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> _next
      // Offset: 0x0
      typename System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::Node* next;
      // readonly System.Int32 _hashcode
      // Offset: 0x0
      int hashcode;
      // System.Void .ctor(TKey key, TValue value, System.Int32 hashcode, System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> next)
      // Offset: 0xFFFFFFFF
      static typename ConcurrentDictionary_2<TKey, TValue>::Node* New_ctor(TKey key, TValue value, int hashcode, typename System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::Node* next) {
        return THROW_UNLESS((il2cpp_utils::New<typename ConcurrentDictionary_2<TKey, TValue>::Node*>(key, value, hashcode, next)));
      }
    }; // System.Collections.Concurrent.ConcurrentDictionary`2/Node
    // Autogenerated type: System.Collections.Concurrent.ConcurrentDictionary`2/DictionaryEnumerator
    class DictionaryEnumerator : public ::Il2CppObject, public System::Collections::IDictionaryEnumerator, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = ConcurrentDictionary_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "DictionaryEnumerator";
      // private System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> _enumerator
      // Offset: 0x0
      System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* enumerator;
      // Creating conversion operator: operator System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
      constexpr operator System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() const noexcept {
        return enumerator;
      }
      // System.Void .ctor(System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> dictionary)
      // Offset: 0xFFFFFFFF
      static typename ConcurrentDictionary_2<TKey, TValue>::DictionaryEnumerator* New_ctor(System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* dictionary) {
        return THROW_UNLESS((il2cpp_utils::New<typename ConcurrentDictionary_2<TKey, TValue>::DictionaryEnumerator*>(dictionary)));
      }
      // public System.Collections.DictionaryEntry get_Entry()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IDictionaryEnumerator
      // Base method: System.Collections.DictionaryEntry IDictionaryEnumerator::get_Entry()
      System::Collections::DictionaryEntry get_Entry() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::DictionaryEntry>(this, "get_Entry"));
      }
      // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Entry
      // Maps to method: get_Entry
      System::Collections::DictionaryEntry System_Collections_IDictionaryEnumerator_get_Entry() {
        return get_Entry();
      }
      // public System.Object get_Key()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IDictionaryEnumerator
      // Base method: System.Object IDictionaryEnumerator::get_Key()
      ::Il2CppObject* get_Key() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_Key"));
      }
      // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Key
      // Maps to method: get_Key
      ::Il2CppObject* System_Collections_IDictionaryEnumerator_get_Key() {
        return get_Key();
      }
      // public System.Object get_Value()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IDictionaryEnumerator
      // Base method: System.Object IDictionaryEnumerator::get_Value()
      ::Il2CppObject* get_Value() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_Value"));
      }
      // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Value
      // Maps to method: get_Value
      ::Il2CppObject* System_Collections_IDictionaryEnumerator_get_Value() {
        return get_Value();
      }
      // public System.Object get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Object IEnumerator::get_Current()
      ::Il2CppObject* get_Current() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "get_Current"));
      }
      // Creating proxy method: System_Collections_IEnumerator_get_Current
      // Maps to method: get_Current
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        return get_Current();
      }
      // public System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Boolean IEnumerator::MoveNext()
      bool MoveNext() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
      }
      // Creating proxy method: System_Collections_IEnumerator_MoveNext
      // Maps to method: MoveNext
      bool System_Collections_IEnumerator_MoveNext() {
        return MoveNext();
      }
      // public System.Void Reset()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Void IEnumerator::Reset()
      void Reset() {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reset"));
      }
      // Creating proxy method: System_Collections_IEnumerator_Reset
      // Maps to method: Reset
      void System_Collections_IEnumerator_Reset() {
        Reset();
      }
    }; // System.Collections.Concurrent.ConcurrentDictionary`2/DictionaryEnumerator
    // Autogenerated type: System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32
    class $GetEnumerator$d__32 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey, TValue>>, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = ConcurrentDictionary_2<TKey, TValue>*;
      static constexpr std::string_view NESTED_NAME = "$GetEnumerator$d__32";
      // private System.Int32 <>1__state
      // Offset: 0x0
      int $$1__state;
      // private System.Collections.Generic.KeyValuePair`2<TKey,TValue> <>2__current
      // Offset: 0x0
      System::Collections::Generic::KeyValuePair_2<TKey, TValue> $$2__current;
      // public System.Collections.Concurrent.ConcurrentDictionary`2<TKey,TValue> <>4__this
      // Offset: 0x0
      System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* $$4__this;
      // private System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue>[] <buckets>5__1
      // Offset: 0x0
      ::Array<typename System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::Node*>* $buckets$5__1;
      // private System.Collections.Concurrent.ConcurrentDictionary`2/Node<TKey,TValue> <current>5__2
      // Offset: 0x0
      typename System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::Node* $current$5__2;
      // private System.Int32 <i>5__3
      // Offset: 0x0
      int $i$5__3;
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFF
      static typename ConcurrentDictionary_2<TKey, TValue>::$GetEnumerator$d__32* New_ctor(int $$1__state) {
        return THROW_UNLESS((il2cpp_utils::New<typename ConcurrentDictionary_2<TKey, TValue>::$GetEnumerator$d__32*>($$1__state)));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.IDisposable
      // Base method: System.Void IDisposable::Dispose()
      void System_IDisposable_Dispose() {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.IDisposable.Dispose"));
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Boolean IEnumerator::MoveNext()
      bool MoveNext() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
      }
      // Creating proxy method: System_Collections_IEnumerator_MoveNext
      // Maps to method: MoveNext
      bool System_Collections_IEnumerator_MoveNext() {
        return MoveNext();
      }
      // private System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.Generic.IEnumerator`1
      // Base method: T IEnumerator_1::get_Current()
      System::Collections::Generic::KeyValuePair_2<TKey, TValue> System_Collections_Generic_IEnumerator_1_get_Current() {
        return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::KeyValuePair_2<TKey, TValue>>(this, "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_Current")));
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Void IEnumerator::Reset()
      void System_Collections_IEnumerator_Reset() {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IEnumerator.Reset"));
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Object IEnumerator::get_Current()
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "System.Collections.IEnumerator.get_Current"));
      }
    }; // System.Collections.Concurrent.ConcurrentDictionary`2/<GetEnumerator>d__32
    // private System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> _tables
    // Offset: 0x0
    typename System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::Tables* tables;
    // private System.Collections.Generic.IEqualityComparer`1<TKey> _comparer
    // Offset: 0x0
    System::Collections::Generic::IEqualityComparer_1<TKey>* comparer;
    // private readonly System.Boolean _growLockArray
    // Offset: 0x0
    bool growLockArray;
    // private System.Int32 _budget
    // Offset: 0x0
    int budget;
    // Autogenerated static field getter
    // Get static field: static private System.Int32 DefaultCapacity
    static int _get_DefaultCapacity() {
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConcurrentDictionary_2<TKey, TValue>*>::get(), "DefaultCapacity")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 DefaultCapacity
    static void _set_DefaultCapacity(int value) {
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConcurrentDictionary_2<TKey, TValue>*>::get(), "DefaultCapacity", value)));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int32 MaxLockNumber
    static int _get_MaxLockNumber() {
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConcurrentDictionary_2<TKey, TValue>*>::get(), "MaxLockNumber")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 MaxLockNumber
    static void _set_MaxLockNumber(int value) {
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConcurrentDictionary_2<TKey, TValue>*>::get(), "MaxLockNumber", value)));
    }
    // Autogenerated static field getter
    // Get static field: static private readonly System.Boolean s_isValueWriteAtomic
    static bool _get_s_isValueWriteAtomic() {
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<bool>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConcurrentDictionary_2<TKey, TValue>*>::get(), "s_isValueWriteAtomic")));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.Boolean s_isValueWriteAtomic
    static void _set_s_isValueWriteAtomic(bool value) {
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConcurrentDictionary_2<TKey, TValue>*>::get(), "s_isValueWriteAtomic", value)));
    }
    // static private System.Boolean IsValueWriteAtomic()
    // Offset: 0xFFFFFFFF
    static bool IsValueWriteAtomic() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<bool>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConcurrentDictionary_2<TKey, TValue>*>::get(), "IsValueWriteAtomic")));
    }
    // System.Void .ctor(System.Int32 concurrencyLevel, System.Int32 capacity, System.Boolean growLockArray, System.Collections.Generic.IEqualityComparer`1<TKey> comparer)
    // Offset: 0xFFFFFFFF
    static ConcurrentDictionary_2<TKey, TValue>* New_ctor(int concurrencyLevel, int capacity, bool growLockArray, System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
      return THROW_UNLESS((il2cpp_utils::New<ConcurrentDictionary_2<TKey, TValue>*>(concurrencyLevel, capacity, growLockArray, comparer)));
    }
    // public System.Boolean TryAdd(TKey key, TValue value)
    // Offset: 0xFFFFFFFF
    bool TryAdd(TKey key, TValue value) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryAdd", key, value));
    }
    // public System.Boolean TryRemove(TKey key, out TValue value)
    // Offset: 0xFFFFFFFF
    bool TryRemove(TKey key, TValue& value) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryRemove", key, value));
    }
    // private System.Boolean TryRemoveInternal(TKey key, out TValue value, System.Boolean matchValue, TValue oldValue)
    // Offset: 0xFFFFFFFF
    bool TryRemoveInternal(TKey key, TValue& value, bool matchValue, TValue oldValue) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryRemoveInternal", key, value, matchValue, oldValue));
    }
    // private System.Boolean TryGetValueInternal(TKey key, System.Int32 hashcode, out TValue value)
    // Offset: 0xFFFFFFFF
    bool TryGetValueInternal(TKey key, int hashcode, TValue& value) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryGetValueInternal", key, hashcode, value));
    }
    // public System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] ToArray()
    // Offset: 0xFFFFFFFF
    ::Array<System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* ToArray() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<::Array<System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(this, "ToArray")));
    }
    // private System.Void CopyToPairs(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] array, System.Int32 index)
    // Offset: 0xFFFFFFFF
    void CopyToPairs(::Array<System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* array, int index) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "CopyToPairs", array, index));
    }
    // private System.Void CopyToEntries(System.Collections.DictionaryEntry[] array, System.Int32 index)
    // Offset: 0xFFFFFFFF
    void CopyToEntries(::Array<System::Collections::DictionaryEntry>* array, int index) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "CopyToEntries", array, index));
    }
    // private System.Void CopyToObjects(System.Object[] array, System.Int32 index)
    // Offset: 0xFFFFFFFF
    void CopyToObjects(::Array<::Il2CppObject*>* array, int index) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "CopyToObjects", array, index));
    }
    // public System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* GetEnumerator() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(this, "GetEnumerator")));
    }
    // private System.Boolean TryAddInternal(TKey key, System.Int32 hashcode, TValue value, System.Boolean updateIfExists, System.Boolean acquireLock, out TValue resultingValue)
    // Offset: 0xFFFFFFFF
    bool TryAddInternal(TKey key, int hashcode, TValue value, bool updateIfExists, bool acquireLock, TValue& resultingValue) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryAddInternal", key, hashcode, value, updateIfExists, acquireLock, resultingValue));
    }
    // static private System.Void ThrowKeyNotFoundException()
    // Offset: 0xFFFFFFFF
    static void ThrowKeyNotFoundException() {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConcurrentDictionary_2<TKey, TValue>*>::get(), "ThrowKeyNotFoundException")));
    }
    // static private System.Void ThrowKeyNullException()
    // Offset: 0xFFFFFFFF
    static void ThrowKeyNullException() {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConcurrentDictionary_2<TKey, TValue>*>::get(), "ThrowKeyNullException")));
    }
    // private System.Int32 GetCountInternal()
    // Offset: 0xFFFFFFFF
    int GetCountInternal() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetCountInternal"));
    }
    // public TValue GetOrAdd(TKey key, System.Func`2<TKey,TValue> valueFactory)
    // Offset: 0xFFFFFFFF
    TValue GetOrAdd(TKey key, System::Func_2<TKey, TValue>* valueFactory) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "GetOrAdd", key, valueFactory));
    }
    // public System.Boolean get_IsEmpty()
    // Offset: 0xFFFFFFFF
    bool get_IsEmpty() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_IsEmpty"));
    }
    // private System.Void GrowTable(System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> tables)
    // Offset: 0xFFFFFFFF
    void GrowTable(typename System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::Tables* tables) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "GrowTable", tables));
    }
    // static private System.Int32 GetBucket(System.Int32 hashcode, System.Int32 bucketCount)
    // Offset: 0xFFFFFFFF
    static int GetBucket(int hashcode, int bucketCount) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConcurrentDictionary_2<TKey, TValue>*>::get(), "GetBucket", hashcode, bucketCount)));
    }
    // static private System.Void GetBucketAndLockNo(System.Int32 hashcode, out System.Int32 bucketNo, out System.Int32 lockNo, System.Int32 bucketCount, System.Int32 lockCount)
    // Offset: 0xFFFFFFFF
    static void GetBucketAndLockNo(int hashcode, int& bucketNo, int& lockNo, int bucketCount, int lockCount) {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConcurrentDictionary_2<TKey, TValue>*>::get(), "GetBucketAndLockNo", hashcode, bucketNo, lockNo, bucketCount, lockCount)));
    }
    // static private System.Int32 get_DefaultConcurrencyLevel()
    // Offset: 0xFFFFFFFF
    static int get_DefaultConcurrencyLevel() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConcurrentDictionary_2<TKey, TValue>*>::get(), "get_DefaultConcurrencyLevel")));
    }
    // private System.Void AcquireAllLocks(ref System.Int32 locksAcquired)
    // Offset: 0xFFFFFFFF
    void AcquireAllLocks(int& locksAcquired) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "AcquireAllLocks", locksAcquired));
    }
    // private System.Void AcquireLocks(System.Int32 fromInclusive, System.Int32 toExclusive, ref System.Int32 locksAcquired)
    // Offset: 0xFFFFFFFF
    void AcquireLocks(int fromInclusive, int toExclusive, int& locksAcquired) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "AcquireLocks", fromInclusive, toExclusive, locksAcquired));
    }
    // private System.Void ReleaseLocks(System.Int32 fromInclusive, System.Int32 toExclusive)
    // Offset: 0xFFFFFFFF
    void ReleaseLocks(int fromInclusive, int toExclusive) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReleaseLocks", fromInclusive, toExclusive));
    }
    // private System.Collections.ObjectModel.ReadOnlyCollection`1<TKey> GetKeys()
    // Offset: 0xFFFFFFFF
    System::Collections::ObjectModel::ReadOnlyCollection_1<TKey>* GetKeys() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::ObjectModel::ReadOnlyCollection_1<TKey>*>(this, "GetKeys"));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConcurrentDictionary_2<TKey, TValue>*>::get(), ".cctor")));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ConcurrentDictionary_2<TKey, TValue>* New_ctor() {
      return THROW_UNLESS((il2cpp_utils::New<ConcurrentDictionary_2<TKey, TValue>*>()));
    }
    // public System.Boolean ContainsKey(TKey key)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IDictionary`2
    // Base method: System.Boolean IDictionary_2::ContainsKey(TKey key)
    bool ContainsKey(TKey key) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "ContainsKey", key));
    }
    // public System.Boolean TryGetValue(TKey key, out TValue value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IDictionary`2
    // Base method: System.Boolean IDictionary_2::TryGetValue(TKey key, out TValue value)
    // Base method: System.Boolean IReadOnlyDictionary_2::TryGetValue(TKey key, out TValue value)
    bool TryGetValue(TKey key, TValue& value) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryGetValue", key, value));
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection_1::Clear()
    void Clear() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
    }
    // Creating proxy method: System_Collections_Generic_ICollection_1_Clear
    // Maps to method: Clear
    void System_Collections_Generic_ICollection_1_Clear() {
      Clear();
    }
    // private System.Void System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] array, System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection_1::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] array, System.Int32 index)
    void System_Collections_Generic_ICollection_1_CopyTo(::Array<System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* array, int index) {
      THROW_UNLESS((il2cpp_utils::RunMethod(this, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", array, index)));
    }
    // public TValue get_Item(TKey key)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IDictionary`2
    // Base method: TValue IDictionary_2::get_Item(TKey key)
    TValue get_Item(TKey key) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "get_Item", key));
    }
    // public System.Void set_Item(TKey key, TValue value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IDictionary`2
    // Base method: System.Void IDictionary_2::set_Item(TKey key, TValue value)
    void set_Item(TKey key, TValue value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Item", key, value));
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Int32 ICollection_1::get_Count()
    // Base method: System.Int32 ICollection::get_Count()
    // Base method: System.Int32 IReadOnlyCollection_1::get_Count()
    int get_Count() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
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
    // private System.Void System.Collections.Generic.IDictionary<TKey,TValue>.Add(TKey key, TValue value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IDictionary`2
    // Base method: System.Void IDictionary_2::Add(TKey key, TValue value)
    void System_Collections_Generic_IDictionary_2_Add(TKey key, TValue value) {
      THROW_UNLESS((il2cpp_utils::RunMethod(this, "System.Collections.Generic.IDictionary<TKey,TValue>.Add", key, value)));
    }
    // private System.Boolean System.Collections.Generic.IDictionary<TKey,TValue>.Remove(TKey key)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IDictionary`2
    // Base method: System.Boolean IDictionary_2::Remove(TKey key)
    bool System_Collections_Generic_IDictionary_2_Remove(TKey key) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<bool>(this, "System.Collections.Generic.IDictionary<TKey,TValue>.Remove", key)));
    }
    // private System.Void System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue> keyValuePair)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection_1::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue> keyValuePair)
    void System_Collections_Generic_ICollection_1_Add(System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair) {
      THROW_UNLESS((il2cpp_utils::RunMethod(this, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", keyValuePair)));
    }
    // private System.Boolean System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue> keyValuePair)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection_1::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue> keyValuePair)
    bool System_Collections_Generic_ICollection_1_Contains(System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<bool>(this, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", keyValuePair)));
    }
    // private System.Boolean System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection_1::get_IsReadOnly()
    bool System_Collections_Generic_ICollection_1_get_IsReadOnly() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<bool>(this, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly")));
    }
    // private System.Boolean System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue> keyValuePair)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection_1::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue> keyValuePair)
    bool System_Collections_Generic_ICollection_1_Remove(System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<bool>(this, "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", keyValuePair)));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
    }
    // private System.Void System.Collections.IDictionary.Add(System.Object key, System.Object value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Void IDictionary::Add(System.Object key, System.Object value)
    void System_Collections_IDictionary_Add(::Il2CppObject* key, ::Il2CppObject* value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IDictionary.Add", key, value));
    }
    // private System.Boolean System.Collections.IDictionary.Contains(System.Object key)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Boolean IDictionary::Contains(System.Object key)
    bool System_Collections_IDictionary_Contains(::Il2CppObject* key) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "System.Collections.IDictionary.Contains", key));
    }
    // private System.Collections.IDictionaryEnumerator System.Collections.IDictionary.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Collections.IDictionaryEnumerator IDictionary::GetEnumerator()
    System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IDictionaryEnumerator*>(this, "System.Collections.IDictionary.GetEnumerator"));
    }
    // private System.Collections.ICollection System.Collections.IDictionary.get_Keys()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Collections.ICollection IDictionary::get_Keys()
    System::Collections::ICollection* System_Collections_IDictionary_get_Keys() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::ICollection*>(this, "System.Collections.IDictionary.get_Keys"));
    }
    // private System.Object System.Collections.IDictionary.get_Item(System.Object key)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Object IDictionary::get_Item(System.Object key)
    ::Il2CppObject* System_Collections_IDictionary_get_Item(::Il2CppObject* key) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "System.Collections.IDictionary.get_Item", key));
    }
    // private System.Void System.Collections.IDictionary.set_Item(System.Object key, System.Object value)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IDictionary
    // Base method: System.Void IDictionary::set_Item(System.Object key, System.Object value)
    void System_Collections_IDictionary_set_Item(::Il2CppObject* key, ::Il2CppObject* value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IDictionary.set_Item", key, value));
    }
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void System_Collections_ICollection_CopyTo(System::Array* array, int index) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.ICollection.CopyTo", array, index));
    }
  }; // System.Collections.Concurrent.ConcurrentDictionary`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Concurrent::ConcurrentDictionary_2, "System.Collections.Concurrent", "ConcurrentDictionary`2");
#pragma pack(pop)
