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
  // Autogenerated type: Zenject.IFactoryProvider`7
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract>
  class IFactoryProvider_7 : public Zenject::IFactoryProviderBase_1<TContract> {
    public:
    // public System.Void .ctor(Zenject.DiContainer container, System.Guid factoryId)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactoryProviderBase`1
    // Base method: System.Void IFactoryProviderBase_1::.ctor(Zenject.DiContainer container, System.Guid factoryId)
    static IFactoryProvider_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>* New_ctor(Zenject::DiContainer* container, System::Guid factoryId) {
      return THROW_UNLESS((il2cpp_utils::New<IFactoryProvider_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract>*>(container, factoryId)));
    }
    // public override System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactoryProviderBase`1
    // Base method: System.Void IFactoryProviderBase_1::GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetAllInstancesWithInjectSplit", context, args, injectAction, buffer));
    }
  }; // Zenject.IFactoryProvider`7
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IFactoryProvider_7, "Zenject", "IFactoryProvider`7");
#pragma pack(pop)
