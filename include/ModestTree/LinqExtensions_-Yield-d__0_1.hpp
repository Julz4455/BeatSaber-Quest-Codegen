// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModestTree.LinqExtensions
#include "ModestTree/LinqExtensions.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Autogenerated type: ModestTree.LinqExtensions/<Yield>d__0`1
  template<typename T>
  class LinqExtensions::$Yield$d__0_1 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<T>, public System::Collections::Generic::IEnumerator_1<T> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // private T <>2__current
    // Offset: 0x0
    T $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x0
    int $$l__initialThreadId;
    // private T item
    // Offset: 0x0
    T item;
    // public T <>3__item
    // Offset: 0x0
    T $$3__item;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0xFFFFFFFF
    static LinqExtensions::$Yield$d__0_1<T>* New_ctor(int $$1__state) {
      return (LinqExtensions::$Yield$d__0_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LinqExtensions::$Yield$d__0_1<T>*>::get(), $$1__state));
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
    // private T System.Collections.Generic.IEnumerator<T>.get_Current()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    T System_Collections_Generic_IEnumerator_1_get_Current() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<T>(this, "System.Collections.Generic.IEnumerator<T>.get_Current")));
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
    // private System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<T>*>(this, "System.Collections.Generic.IEnumerable<T>.GetEnumerator")));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
    }
  }; // ModestTree.LinqExtensions/<Yield>d__0`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(ModestTree::LinqExtensions::$Yield$d__0_1, "ModestTree", "LinqExtensions/<Yield>d__0`1");
#pragma pack(pop)
