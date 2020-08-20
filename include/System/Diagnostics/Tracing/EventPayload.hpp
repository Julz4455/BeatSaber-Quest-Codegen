// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.IDictionary`2
#include "System/Collections/Generic/IDictionary_2.hpp"
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Skipping declaration: ICollection`1 because it is already included!
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EventPayload
  class EventPayload : public ::Il2CppObject, public System::Collections::Generic::IDictionary_2<::Il2CppString*, ::Il2CppObject*>, public System::Collections::Generic::ICollection_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, ::Il2CppObject*>> {
    public:
    // Nested type: System::Diagnostics::Tracing::EventPayload::$GetEnumerator$d__17
    class $GetEnumerator$d__17;
    // private System.Collections.Generic.List`1<System.String> m_names
    // Offset: 0x10
    System::Collections::Generic::List_1<::Il2CppString*>* m_names;
    // private System.Collections.Generic.List`1<System.Object> m_values
    // Offset: 0x18
    System::Collections::Generic::List_1<::Il2CppObject*>* m_values;
    // System.Void .ctor(System.Collections.Generic.List`1<System.String> payloadNames, System.Collections.Generic.List`1<System.Object> payloadValues)
    // Offset: 0xBF92A4
    static EventPayload* New_ctor(System::Collections::Generic::List_1<::Il2CppString*>* payloadNames, System::Collections::Generic::List_1<::Il2CppObject*>* payloadValues);
    // public System.Collections.Generic.ICollection`1<System.String> get_Keys()
    // Offset: 0xBF92F4
    System::Collections::Generic::ICollection_1<::Il2CppString*>* get_Keys();
    // public System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> GetEnumerator()
    // Offset: 0xBF982C
    System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, ::Il2CppObject*>>* GetEnumerator();
    // public System.Void CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[] payloadEntries, System.Int32 count)
    // Offset: 0xBF9978
    void CopyTo(::Array<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, ::Il2CppObject*>>* payloadEntries, int count);
    // public System.Boolean TryGetValue(System.String key, System.Object value)
    // Offset: 0xBF9A98
    bool TryGetValue(::Il2CppString* key, ::Il2CppObject*& value);
    // public System.Object get_Item(System.String key)
    // Offset: 0xBF92FC
    // Implemented from: System.Collections.Generic.IDictionary`2
    // Base method: TValue IDictionary`2::get_Item(System.String key)
    ::Il2CppObject* get_Item(::Il2CppString* key);
    // public System.Void set_Item(System.String key, System.Object value)
    // Offset: 0xBF94B4
    // Implemented from: System.Collections.Generic.IDictionary`2
    // Base method: System.Void IDictionary`2::set_Item(System.String key, System.Object value)
    void set_Item(::Il2CppString* key, ::Il2CppObject* value);
    // public System.Void Add(System.String key, System.Object value)
    // Offset: 0xBF9514
    // Implemented from: System.Collections.Generic.IDictionary`2
    // Base method: System.Void IDictionary`2::Add(System.String key, System.Object value)
    void Add(::Il2CppString* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_Generic_IDictionary_2_Add
    // Maps to method: Add
    void System_Collections_Generic_IDictionary_2_Add(::Il2CppString* key, ::Il2CppObject* value);
    // public System.Void Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object> payloadEntry)
    // Offset: 0xBF9574
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection`1::Add(System.Collections.Generic.KeyValuePair`2<System.String,System.Object> payloadEntry)
    void Add(System::Collections::Generic::KeyValuePair_2<::Il2CppString*, ::Il2CppObject*> payloadEntry);
    // Creating proxy method: System_Collections_Generic_ICollection_1_Add
    // Maps to method: Add
    void System_Collections_Generic_ICollection_1_Add(System::Collections::Generic::KeyValuePair_2<::Il2CppString*, ::Il2CppObject*> payloadEntry);
    // public System.Void Clear()
    // Offset: 0xBF95D4
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection`1::Clear()
    void Clear();
    // Creating proxy method: System_Collections_Generic_ICollection_1_Clear
    // Maps to method: Clear
    void System_Collections_Generic_ICollection_1_Clear();
    // public System.Boolean Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object> entry)
    // Offset: 0xBF9634
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection`1::Contains(System.Collections.Generic.KeyValuePair`2<System.String,System.Object> entry)
    bool Contains(System::Collections::Generic::KeyValuePair_2<::Il2CppString*, ::Il2CppObject*> entry);
    // Creating proxy method: System_Collections_Generic_ICollection_1_Contains
    // Maps to method: Contains
    bool System_Collections_Generic_ICollection_1_Contains(System::Collections::Generic::KeyValuePair_2<::Il2CppString*, ::Il2CppObject*> entry);
    // public System.Boolean ContainsKey(System.String key)
    // Offset: 0xBF9688
    // Implemented from: System.Collections.Generic.IDictionary`2
    // Base method: System.Boolean IDictionary`2::ContainsKey(System.String key)
    bool ContainsKey(::Il2CppString* key);
    // public System.Int32 get_Count()
    // Offset: 0xBF97D4
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Int32 ICollection`1::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_Generic_ICollection_1_get_Count
    // Maps to method: get_Count
    int System_Collections_Generic_ICollection_1_get_Count();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0xBF9824
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection`1::get_IsReadOnly()
    bool get_IsReadOnly();
    // Creating proxy method: System_Collections_Generic_ICollection_1_get_IsReadOnly
    // Maps to method: get_IsReadOnly
    bool System_Collections_Generic_ICollection_1_get_IsReadOnly();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xBF98D4
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Boolean Remove(System.String key)
    // Offset: 0xBF99D8
    // Implemented from: System.Collections.Generic.IDictionary`2
    // Base method: System.Boolean IDictionary`2::Remove(System.String key)
    bool Remove(::Il2CppString* key);
    // Creating proxy method: System_Collections_Generic_IDictionary_2_Remove
    // Maps to method: Remove
    bool System_Collections_Generic_IDictionary_2_Remove(::Il2CppString* key);
    // public System.Boolean Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object> entry)
    // Offset: 0xBF9A38
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection`1::Remove(System.Collections.Generic.KeyValuePair`2<System.String,System.Object> entry)
    bool Remove(System::Collections::Generic::KeyValuePair_2<::Il2CppString*, ::Il2CppObject*> entry);
    // Creating proxy method: System_Collections_Generic_ICollection_1_Remove
    // Maps to method: Remove
    bool System_Collections_Generic_ICollection_1_Remove(System::Collections::Generic::KeyValuePair_2<::Il2CppString*, ::Il2CppObject*> entry);
  }; // System.Diagnostics.Tracing.EventPayload
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventPayload*, "System.Diagnostics.Tracing", "EventPayload");
#pragma pack(pop)
