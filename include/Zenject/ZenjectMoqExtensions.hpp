// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ScopeConcreteIdArgConditionCopyNonLazyBinder
  class ScopeConcreteIdArgConditionCopyNonLazyBinder;
  // Forward declaring type: FromBinderGeneric`1<TContract>
  template<typename TContract>
  class FromBinderGeneric_1;
  // Forward declaring type: ConditionCopyNonLazyBinder
  class ConditionCopyNonLazyBinder;
  // Forward declaring type: FactoryFromBinder`1<TContract>
  template<typename TContract>
  class FactoryFromBinder_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  // Autogenerated type: Zenject.ZenjectMoqExtensions
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ZenjectMoqExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ZenjectMoqExtensions
    ZenjectMoqExtensions() noexcept {}
    // static public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder FromMock(Zenject.FromBinderGeneric`1<TContract> binder)
    // Offset: 0xFFFFFFFF
    template<class TContract>
    static Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* FromMock(Zenject::FromBinderGeneric_1<TContract>* binder) {
      static_assert(std::is_convertible_v<TContract, UnityEngine::MonoBehaviour*>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("ZenjectMoqExtensions").WithContext("FromMock");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject", "ZenjectMoqExtensions", "FromMock", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::il2cpp_utils::ExtractTypes(binder)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, binder);
    }
    // static public Zenject.ConditionCopyNonLazyBinder FromMock(Zenject.FactoryFromBinder`1<TContract> binder)
    // Offset: 0xFFFFFFFF
    template<class TContract>
    static Zenject::ConditionCopyNonLazyBinder* FromMock(Zenject::FactoryFromBinder_1<TContract>* binder) {
      static_assert(std::is_convertible_v<TContract, UnityEngine::MonoBehaviour*>);
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Zenject").WithContext("ZenjectMoqExtensions").WithContext("FromMock");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject", "ZenjectMoqExtensions", "FromMock", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::il2cpp_utils::ExtractTypes(binder)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConditionCopyNonLazyBinder*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, binder);
    }
  }; // Zenject.ZenjectMoqExtensions
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectMoqExtensions*, "Zenject", "ZenjectMoqExtensions");
#pragma pack(pop)
