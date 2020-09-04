// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IFactoryProviderBase`1
#include "Zenject/IFactoryProviderBase_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.IFactoryProvider`3
  template<typename TContract, typename TParam1, typename TParam2>
  class IFactoryProvider_3 : public Zenject::IFactoryProviderBase_1<TContract> {
    public:
    // public System.Void .ctor(Zenject.DiContainer container, System.Guid factoryId)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactoryProviderBase`1
    // Base method: System.Void IFactoryProviderBase`1::.ctor(Zenject.DiContainer container, System.Guid factoryId)
    static IFactoryProvider_3<TContract, TParam1, TParam2>* New_ctor(Zenject::DiContainer* container, System::Guid factoryId) {
      return (IFactoryProvider_3<TContract, TParam1, TParam2>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<IFactoryProvider_3<TContract, TParam1, TParam2>*>::get(), container, factoryId)));
    }
    // public override System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactoryProviderBase`1
    // Base method: System.Void IFactoryProviderBase`1::GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetAllInstancesWithInjectSplit", context, args, injectAction, buffer));
    }
  }; // Zenject.IFactoryProvider`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IFactoryProvider_3, "Zenject", "IFactoryProvider`3");
#pragma pack(pop)
