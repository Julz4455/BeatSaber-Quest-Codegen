// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.IDictionary`2
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: CADF54
  template<typename TKey, typename TValue>
  class IDictionary_2/*, public System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*/ {
    public:
    // Creating value type constructor for type: IDictionary_2
    IDictionary_2() noexcept {}
    // Creating interface conversion operator: operator System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<TKey, TValue>>
    operator System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(this);
    }
    // public TValue get_Item(TKey key)
    // Offset: 0xFFFFFFFF
    TValue get_Item(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::IDictionary_2::get_Item");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Item", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key)));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method, key);
    }
    // public System.Void set_Item(TKey key, TValue value)
    // Offset: 0xFFFFFFFF
    void set_Item(TKey key, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::IDictionary_2::set_Item");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_Item", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key, value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, key, value);
    }
    // public System.Boolean ContainsKey(TKey key)
    // Offset: 0xFFFFFFFF
    bool ContainsKey(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::IDictionary_2::ContainsKey");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ContainsKey", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key);
    }
    // public System.Void Add(TKey key, TValue value)
    // Offset: 0xFFFFFFFF
    void System_Collections_Generic_IDictionary_2_Add(TKey key, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::IDictionary_2::Add");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key, value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, key, value);
    }
    // public System.Boolean Remove(TKey key)
    // Offset: 0xFFFFFFFF
    bool System_Collections_Generic_IDictionary_2_Remove(TKey key) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::IDictionary_2::Remove");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key);
    }
    // public System.Boolean TryGetValue(TKey key, out TValue value)
    // Offset: 0xFFFFFFFF
    bool TryGetValue(TKey key, TValue& value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::IDictionary_2::TryGetValue");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "TryGetValue", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(key, value)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, key, value);
    }
  }; // System.Collections.Generic.IDictionary`2
  // Could not write size check! Type: System.Collections.Generic.IDictionary`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::IDictionary_2, "System.Collections.Generic", "IDictionary`2");
