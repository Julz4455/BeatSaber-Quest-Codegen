// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.ArrayList
#include "System/Collections/ArrayList.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Completed includes
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.ArrayList/ArrayListEnumeratorSimple
  class ArrayList::ArrayListEnumeratorSimple : public ::Il2CppObject, public System::Collections::IEnumerator, public System::ICloneable {
    public:
    // private System.Collections.ArrayList list
    // Offset: 0x10
    System::Collections::ArrayList* list;
    // private System.Int32 index
    // Offset: 0x18
    int index;
    // private System.Int32 version
    // Offset: 0x1C
    int version;
    // private System.Object currentElement
    // Offset: 0x20
    ::Il2CppObject* currentElement;
    // private System.Boolean isArrayList
    // Offset: 0x28
    bool isArrayList;
    // Get static field: static private System.Object dummyObject
    static ::Il2CppObject* _get_dummyObject();
    // Set static field: static private System.Object dummyObject
    static void _set_dummyObject(::Il2CppObject* value);
    // System.Void .ctor(System.Collections.ArrayList list)
    // Offset: 0x15D278C
    static ArrayList::ArrayListEnumeratorSimple* New_ctor(System::Collections::ArrayList* list);
    // static private System.Void .cctor()
    // Offset: 0x15D3850
    static void _cctor();
    // public System.Object Clone()
    // Offset: 0x15D346C
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
    // public System.Boolean MoveNext()
    // Offset: 0x15D3474
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // public System.Object get_Current()
    // Offset: 0x15D3678
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* get_Current();
    // Creating proxy method: System_Collections_IEnumerator_get_Current
    // Maps to method: get_Current
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void Reset()
    // Offset: 0x15D3764
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
  }; // System.Collections.ArrayList/ArrayListEnumeratorSimple
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::ArrayList::ArrayListEnumeratorSimple*, "System.Collections", "ArrayList/ArrayListEnumeratorSimple");
#pragma pack(pop)
