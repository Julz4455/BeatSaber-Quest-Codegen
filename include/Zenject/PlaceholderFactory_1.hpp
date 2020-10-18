// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PlaceholderFactoryBase`1
#include "Zenject/PlaceholderFactoryBase_1.hpp"
// Including type: Zenject.IFactory`1
#include "Zenject/IFactory_1.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <get_ParamTypes>d__2 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PlaceholderFactory`1
  template<typename TValue>
  class PlaceholderFactory_1 : public Zenject::PlaceholderFactoryBase_1<TValue>, public Zenject::IFactory_1<TValue> {
    public:
    // Nested type: Zenject::PlaceholderFactory_1::$get_ParamTypes$d__2<TValue>
    class $get_ParamTypes$d__2;
    // Autogenerated type: Zenject.PlaceholderFactory`1/<get_ParamTypes>d__2
    class $get_ParamTypes$d__2 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<System::Type*>, public System::Collections::Generic::IEnumerator_1<System::Type*>, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = PlaceholderFactory_1<TValue>*;
      static constexpr std::string_view NESTED_NAME = "$get_ParamTypes$d__2";
      // private System.Int32 <>1__state
      // Offset: 0x0
      int $$1__state;
      // private System.Type <>2__current
      // Offset: 0x0
      System::Type* $$2__current;
      // private System.Int32 <>l__initialThreadId
      // Offset: 0x0
      int $$l__initialThreadId;
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFF
      static typename PlaceholderFactory_1<TValue>::$get_ParamTypes$d__2* New_ctor(int $$1__state) {
        return THROW_UNLESS(il2cpp_utils::New<typename PlaceholderFactory_1<TValue>::$get_ParamTypes$d__2*>($$1__state));
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
      // private System.Type System.Collections.Generic.IEnumerator<System.Type>.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.Generic.IEnumerator`1
      // Base method: T IEnumerator_1::get_Current()
      System::Type* System_Collections_Generic_IEnumerator_1_get_Current() {
        return THROW_UNLESS((il2cpp_utils::RunMethod<System::Type*>(this, "System.Collections.Generic.IEnumerator<System.Type>.get_Current")));
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
      // private System.Collections.Generic.IEnumerator`1<System.Type> System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.Generic.IEnumerable`1
      // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
      System::Collections::Generic::IEnumerator_1<System::Type*>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
        return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<System::Type*>*>(this, "System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator")));
      }
      // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerable
      // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
      System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
      }
    }; // Zenject.PlaceholderFactory`1/<get_ParamTypes>d__2
    // public TValue Create()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactory`1
    // Base method: TValue IFactory_1::Create()
    TValue Create() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Create"));
    }
    // Creating proxy method: Zenject_IFactory_1_Create
    // Maps to method: Create
    TValue Zenject_IFactory_1_Create() {
      return Create();
    }
    // protected override System.Collections.Generic.IEnumerable`1<System.Type> get_ParamTypes()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PlaceholderFactoryBase`1
    // Base method: System.Collections.Generic.IEnumerable`1<System.Type> PlaceholderFactoryBase_1::get_ParamTypes()
    System::Collections::Generic::IEnumerable_1<System::Type*>* get_ParamTypes() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<System::Type*>*>(this, "get_ParamTypes"));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PlaceholderFactoryBase`1
    // Base method: System.Void PlaceholderFactoryBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlaceholderFactory_1<TValue>* New_ctor() {
      return THROW_UNLESS(il2cpp_utils::New<PlaceholderFactory_1<TValue>*>());
    }
  }; // Zenject.PlaceholderFactory`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PlaceholderFactory_1, "Zenject", "PlaceholderFactory`1");
#pragma pack(pop)
