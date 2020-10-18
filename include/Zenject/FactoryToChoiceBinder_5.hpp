// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinder`5
#include "Zenject/FactoryFromBinder_5.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryToChoiceBinder`5
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
  class FactoryToChoiceBinder_5 : public Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract> {
    public:
    // public Zenject.FactoryFromBinder`5<TParam1,TParam2,TParam3,TParam4,TContract> ToSelf()
    // Offset: 0xFFFFFFFF
    Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* ToSelf() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*>(this, "ToSelf")));
    }
    // public Zenject.FactoryFromBinder`5<TParam1,TParam2,TParam3,TParam4,TConcrete> To()
    // Offset: 0xFFFFFFFF
    template<class TConcrete>
    Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TConcrete>* To() {
      static_assert(std::is_convertible_v<TConcrete, TContract>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TConcrete>*>(this, "To", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get()})));
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.FactoryFromBinder`5
    // Base method: System.Void FactoryFromBinder_5::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    static FactoryToChoiceBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      return THROW_UNLESS((il2cpp_utils::New<FactoryToChoiceBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*>(bindContainer, bindInfo, factoryBindInfo)));
    }
  }; // Zenject.FactoryToChoiceBinder`5
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceBinder_5, "Zenject", "FactoryToChoiceBinder`5");
#pragma pack(pop)
