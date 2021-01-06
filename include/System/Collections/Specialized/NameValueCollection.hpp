// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Specialized.NameObjectCollectionBase
#include "System/Collections/Specialized/NameObjectCollectionBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DBNull
  class DBNull;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Collections.Specialized
namespace System::Collections::Specialized {
  // Size: 0x58
  // Autogenerated type: System.Collections.Specialized.NameValueCollection
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: D45AB4
  class NameValueCollection : public System::Collections::Specialized::NameObjectCollectionBase {
    public:
    // Writing base type padding for base size: 0x44 to desired offset: 0x48
    char ___base_padding[0x4] = {};
    // private System.String[] _all
    // Size: 0x8
    // Offset: 0x48
    ::Array<::Il2CppString*>* all;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.String[] _allKeys
    // Size: 0x8
    // Offset: 0x50
    ::Array<::Il2CppString*>* allKeys;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: NameValueCollection
    NameValueCollection(::Array<::Il2CppString*>* all_ = {}, ::Array<::Il2CppString*>* allKeys_ = {}) noexcept : all{all_}, allKeys{allKeys_} {}
    // protected System.Void InvalidateCachedArrays()
    // Offset: 0x147F1E0
    void InvalidateCachedArrays();
    // static private System.String GetAsOneString(System.Collections.ArrayList list)
    // Offset: 0x147F214
    static ::Il2CppString* GetAsOneString(System::Collections::ArrayList* list);
    // static private System.String[] GetAsStringArray(System.Collections.ArrayList list)
    // Offset: 0x147F3CC
    static ::Array<::Il2CppString*>* GetAsStringArray(System::Collections::ArrayList* list);
    // public System.Void Add(System.String name, System.String value)
    // Offset: 0x147F47C
    void Add(::Il2CppString* name, ::Il2CppString* value);
    // public System.String Get(System.String name)
    // Offset: 0x147F608
    ::Il2CppString* Get(::Il2CppString* name);
    // public System.String[] GetValues(System.String name)
    // Offset: 0x147F6A4
    ::Array<::Il2CppString*>* GetValues(::Il2CppString* name);
    // public System.Void Set(System.String name, System.String value)
    // Offset: 0x147F740
    void Set(::Il2CppString* name, ::Il2CppString* value);
    // public System.Void Remove(System.String name)
    // Offset: 0x147F844
    void Remove(::Il2CppString* name);
    // public System.String get_Item(System.String name)
    // Offset: 0x147F888
    ::Il2CppString* get_Item(::Il2CppString* name);
    // public System.Void set_Item(System.String name, System.String value)
    // Offset: 0x147F898
    void set_Item(::Il2CppString* name, ::Il2CppString* value);
    // public System.String Get(System.Int32 index)
    // Offset: 0x147F8A8
    ::Il2CppString* Get(int index);
    // public System.String[] GetValues(System.Int32 index)
    // Offset: 0x147F93C
    ::Array<::Il2CppString*>* GetValues(int index);
    // public System.String GetKey(System.Int32 index)
    // Offset: 0x147F9D0
    ::Il2CppString* GetKey(int index);
    // public System.Void .ctor()
    // Offset: 0x147EF98
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Void NameObjectCollectionBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameValueCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("NameValueCollection").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameValueCollection*, creationType>()));
    }
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0x147EFFC
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Void NameObjectCollectionBase::.ctor(System.Int32 capacity)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameValueCollection* New_ctor(int capacity) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("NameValueCollection").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameValueCollection*, creationType>(capacity)));
    }
    // public System.Void .ctor(System.Int32 capacity, System.Collections.IEqualityComparer equalityComparer)
    // Offset: 0x147F070
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Void NameObjectCollectionBase::.ctor(System.Int32 capacity, System.Collections.IEqualityComparer equalityComparer)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameValueCollection* New_ctor(int capacity, System::Collections::IEqualityComparer* equalityComparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("NameValueCollection").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameValueCollection*, creationType>(capacity, equalityComparer)));
    }
    // System.Void .ctor(System.DBNull dummy)
    // Offset: 0x147F0F4
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Void NameObjectCollectionBase::.ctor(System.DBNull dummy)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameValueCollection* New_ctor(System::DBNull* dummy) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("NameValueCollection").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameValueCollection*, creationType>(dummy)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x147F15C
    // Implemented from: System.Collections.Specialized.NameObjectCollectionBase
    // Base method: System.Void NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameValueCollection* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Collections::Specialized").WithContext("NameValueCollection").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameValueCollection*, creationType>(info, context)));
    }
  }; // System.Collections.Specialized.NameValueCollection
  static check_size<sizeof(NameValueCollection), 80 + sizeof(::Array<::Il2CppString*>*)> __System_Collections_Specialized_NameValueCollectionSizeCheck;
  static_assert(sizeof(NameValueCollection) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::NameValueCollection*, "System.Collections.Specialized", "NameValueCollection");
#pragma pack(pop)
