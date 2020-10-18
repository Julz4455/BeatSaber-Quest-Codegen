// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.ICollection`1
#include "System/Collections/Generic/ICollection_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpListener
  class HttpListener;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.HttpListenerPrefixCollection
  class HttpListenerPrefixCollection : public ::Il2CppObject, public System::Collections::Generic::ICollection_1<::Il2CppString*> {
    public:
    // private System.Collections.Generic.List`1<System.String> prefixes
    // Offset: 0x10
    System::Collections::Generic::List_1<::Il2CppString*>* prefixes;
    // private System.Net.HttpListener listener
    // Offset: 0x18
    System::Net::HttpListener* listener;
    // System.Void .ctor(System.Net.HttpListener listener)
    // Offset: 0x14624B4
    static HttpListenerPrefixCollection* New_ctor(System::Net::HttpListener* listener);
    // public System.Void CopyTo(System.String[] array, System.Int32 offset)
    // Offset: 0x1465208
    void CopyTo(::Array<::Il2CppString*>* array, int offset);
    // public System.Collections.Generic.IEnumerator`1<System.String> GetEnumerator()
    // Offset: 0x1465284
    System::Collections::Generic::IEnumerator_1<::Il2CppString*>* GetEnumerator();
    // public System.Int32 get_Count()
    // Offset: 0x14643A0
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Int32 ICollection_1::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_Generic_ICollection_1_get_Count
    // Maps to method: get_Count
    int System_Collections_Generic_ICollection_1_get_Count();
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x1464D00
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection_1::get_IsReadOnly()
    bool get_IsReadOnly();
    // Creating proxy method: System_Collections_Generic_ICollection_1_get_IsReadOnly
    // Maps to method: get_IsReadOnly
    bool System_Collections_Generic_ICollection_1_get_IsReadOnly();
    // public System.Void Add(System.String uriPrefix)
    // Offset: 0x1464D08
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection_1::Add(System.String uriPrefix)
    void Add(::Il2CppString* uriPrefix);
    // Creating proxy method: System_Collections_Generic_ICollection_1_Add
    // Maps to method: Add
    void System_Collections_Generic_ICollection_1_Add(::Il2CppString* uriPrefix);
    // public System.Void Clear()
    // Offset: 0x14650E8
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Void ICollection_1::Clear()
    void Clear();
    // Creating proxy method: System_Collections_Generic_ICollection_1_Clear
    // Maps to method: Clear
    void System_Collections_Generic_ICollection_1_Clear();
    // public System.Boolean Contains(System.String uriPrefix)
    // Offset: 0x1465194
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection_1::Contains(System.String uriPrefix)
    bool Contains(::Il2CppString* uriPrefix);
    // Creating proxy method: System_Collections_Generic_ICollection_1_Contains
    // Maps to method: Contains
    bool System_Collections_Generic_ICollection_1_Contains(::Il2CppString* uriPrefix);
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1465310
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Boolean Remove(System.String uriPrefix)
    // Offset: 0x146539C
    // Implemented from: System.Collections.Generic.ICollection`1
    // Base method: System.Boolean ICollection_1::Remove(System.String uriPrefix)
    bool Remove(::Il2CppString* uriPrefix);
    // Creating proxy method: System_Collections_Generic_ICollection_1_Remove
    // Maps to method: Remove
    bool System_Collections_Generic_ICollection_1_Remove(::Il2CppString* uriPrefix);
  }; // System.Net.HttpListenerPrefixCollection
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListenerPrefixCollection*, "System.Net", "HttpListenerPrefixCollection");
#pragma pack(pop)
