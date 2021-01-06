// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: StringComparer
  class StringComparer;
  // Forward declaring type: DBNull
  class DBNull;
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x44
  // Autogenerated type: System.Collections.Specialized.NameObjectCollectionBase
  // [] Offset: FFFFFFFF
  class NameObjectCollectionBase : public ::Il2CppObject/*, public System::Collections::ICollection, public System::Runtime::Serialization::ISerializable, public System::Runtime::Serialization::IDeserializationCallback*/ {
    public:
    // Nested type: System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry
    class NameObjectEntry;
    // Nested type: System::Collections::Specialized::NameObjectCollectionBase::NameObjectKeysEnumerator
    class NameObjectKeysEnumerator;
    // private System.Boolean _readOnly
    // Size: 0x1
    // Offset: 0x10
    bool readOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: readOnly and: entriesArray
    char __padding0[0x7] = {};
    // private System.Collections.ArrayList _entriesArray
    // Size: 0x8
    // Offset: 0x18
    System::Collections::ArrayList* entriesArray;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Collections.IEqualityComparer _keyComparer
    // Size: 0x8
    // Offset: 0x20
    System::Collections::IEqualityComparer* keyComparer;
    // Field size check
    static_assert(sizeof(System::Collections::IEqualityComparer*) == 0x8);
    // private System.Collections.Hashtable _entriesTable
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Hashtable* entriesTable;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // private System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry _nullKeyEntry
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry* nullKeyEntry;
    // Field size check
    static_assert(sizeof(System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry*) == 0x8);
    // private System.Runtime.Serialization.SerializationInfo _serializationInfo
    // Size: 0x8
    // Offset: 0x38
    System::Runtime::Serialization::SerializationInfo* serializationInfo;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::SerializationInfo*) == 0x8);
    // private System.Int32 _version
    // Size: 0x4
    // Offset: 0x40
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NameObjectCollectionBase
    NameObjectCollectionBase(bool readOnly_ = {}, System::Collections::ArrayList* entriesArray_ = {}, System::Collections::IEqualityComparer* keyComparer_ = {}, System::Collections::Hashtable* entriesTable_ = {}, System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry* nullKeyEntry_ = {}, System::Runtime::Serialization::SerializationInfo* serializationInfo_ = {}, int version_ = {}) noexcept : readOnly{readOnly_}, entriesArray{entriesArray_}, keyComparer{keyComparer_}, entriesTable{entriesTable_}, nullKeyEntry{nullKeyEntry_}, serializationInfo{serializationInfo_}, version{version_} {}
    // Creating interface conversion operator: operator System::Collections::ICollection
    operator System::Collections::ICollection() noexcept {
      return *reinterpret_cast<System::Collections::ICollection*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::IDeserializationCallback
    operator System::Runtime::Serialization::IDeserializationCallback() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // Get static field: static private System.StringComparer defaultComparer
    static System::StringComparer* _get_defaultComparer();
    // Set static field: static private System.StringComparer defaultComparer
    static void _set_defaultComparer(System::StringComparer* value);
    // protected System.Void .ctor(System.Collections.IEqualityComparer equalityComparer)
    // Offset: 0x147D250
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameObjectCollectionBase* New_ctor(System::Collections::IEqualityComparer* equalityComparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("NameObjectCollectionBase").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameObjectCollectionBase*, creationType>(equalityComparer)));
    }
    // protected System.Void .ctor(System.Int32 capacity, System.Collections.IEqualityComparer equalityComparer)
    // Offset: 0x147D3C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameObjectCollectionBase* New_ctor(int capacity, System::Collections::IEqualityComparer* equalityComparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("NameObjectCollectionBase").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameObjectCollectionBase*, creationType>(capacity, equalityComparer)));
    }
    // protected System.Void .ctor(System.Int32 capacity)
    // Offset: 0x147D4C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameObjectCollectionBase* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("NameObjectCollectionBase").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameObjectCollectionBase*, creationType>(capacity)));
    }
    // System.Void .ctor(System.DBNull dummy)
    // Offset: 0x147D59C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameObjectCollectionBase* New_ctor(System::DBNull* dummy) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("NameObjectCollectionBase").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameObjectCollectionBase*, creationType>(dummy)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x147D5A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameObjectCollectionBase* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("NameObjectCollectionBase").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameObjectCollectionBase*, creationType>(info, context)));
    }
    // private System.Void Reset()
    // Offset: 0x147D2F4
    void Reset();
    // private System.Void Reset(System.Int32 capacity)
    // Offset: 0x147D3F0
    void Reset(int capacity);
    // private System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry FindEntry(System.String key)
    // Offset: 0x147E328
    System::Collections::Specialized::NameObjectCollectionBase::NameObjectEntry* FindEntry(::Il2CppString* key);
    // protected System.Boolean get_IsReadOnly()
    // Offset: 0x147E3F0
    bool get_IsReadOnly();
    // protected System.Void BaseAdd(System.String name, System.Object value)
    // Offset: 0x147E1C8
    void BaseAdd(::Il2CppString* name, ::Il2CppObject* value);
    // protected System.Void BaseRemove(System.String name)
    // Offset: 0x147E448
    void BaseRemove(::Il2CppString* name);
    // protected System.Object BaseGet(System.String name)
    // Offset: 0x147E708
    ::Il2CppObject* BaseGet(::Il2CppString* name);
    // protected System.Void BaseSet(System.String name, System.Object value)
    // Offset: 0x147E724
    void BaseSet(::Il2CppString* name, ::Il2CppObject* value);
    // protected System.Object BaseGet(System.Int32 index)
    // Offset: 0x147E800
    ::Il2CppObject* BaseGet(int index);
    // protected System.String BaseGetKey(System.Int32 index)
    // Offset: 0x147E65C
    ::Il2CppString* BaseGetKey(int index);
    // static private System.Void .cctor()
    // Offset: 0x147ECA0
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x147D1E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameObjectCollectionBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("NameObjectCollectionBase").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameObjectCollectionBase*, creationType>()));
    }
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x147D5D8
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Void OnDeserialization(System.Object sender)
    // Offset: 0x147DB30
    // Implemented from: System.Runtime.Serialization.IDeserializationCallback
    // Base method: System.Void IDeserializationCallback::OnDeserialization(System.Object sender)
    void OnDeserialization(::Il2CppObject* sender);
    // Creating proxy method: System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
    // Maps to method: OnDeserialization
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x147E8AC
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Int32 get_Count()
    // Offset: 0x147E96C
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x147E990
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
  }; // System.Collections.Specialized.NameObjectCollectionBase
  static check_size<sizeof(NameObjectCollectionBase), 64 + sizeof(int)> __System_Collections_Specialized_NameObjectCollectionBaseSizeCheck;
  static_assert(sizeof(NameObjectCollectionBase) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::NameObjectCollectionBase*, "System.Collections.Specialized", "NameObjectCollectionBase");
#pragma pack(pop)
