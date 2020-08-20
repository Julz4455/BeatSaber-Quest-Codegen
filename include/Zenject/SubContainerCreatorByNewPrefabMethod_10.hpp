// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerCreatorByNewPrefabDynamicContext
#include "Zenject/SubContainerCreatorByNewPrefabDynamicContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass2_0 because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IPrefabProvider
  class IPrefabProvider;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: GameObjectContext
  class GameObjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`11<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
  class Action_11;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SubContainerCreatorByNewPrefabMethod`10
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10>
  class SubContainerCreatorByNewPrefabMethod_10 : public Zenject::SubContainerCreatorByNewPrefabDynamicContext {
    public:
    // Nested type: Zenject::SubContainerCreatorByNewPrefabMethod_10::$$c__DisplayClass2_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>
    class $$c__DisplayClass2_0;
    // Autogenerated type: Zenject.SubContainerCreatorByNewPrefabMethod`10/<>c__DisplayClass2_0
    class $$c__DisplayClass2_0 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = SubContainerCreatorByNewPrefabMethod_10<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>*;
      // public Zenject.SubContainerCreatorByNewPrefabMethod`10<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10> <>4__this
      // Offset: 0x0
      Zenject::SubContainerCreatorByNewPrefabMethod_10<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>* $$4__this;
      // public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
      // Offset: 0x0
      System::Collections::Generic::List_1<Zenject::TypeValuePair>* args;
      // System.Void <AddInstallers>b__0(Zenject.DiContainer subContainer)
      // Offset: 0xFFFFFFFF
      void $AddInstallers$b__0(Zenject::DiContainer* subContainer) {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "<AddInstallers>b__0", subContainer));
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename SubContainerCreatorByNewPrefabMethod_10<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>::$$c__DisplayClass2_0* New_ctor() {
        return (typename SubContainerCreatorByNewPrefabMethod_10<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>::$$c__DisplayClass2_0*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename SubContainerCreatorByNewPrefabMethod_10<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>::$$c__DisplayClass2_0*>::get())));
      }
    }; // Zenject.SubContainerCreatorByNewPrefabMethod`10/<>c__DisplayClass2_0
    // private readonly System.Action`11<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10> _installerMethod
    // Offset: 0x0
    System::Action_11<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>* installerMethod;
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.IPrefabProvider prefabProvider, Zenject.GameObjectCreationParameters gameObjectBindInfo, System.Action`11<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10> installerMethod)
    // Offset: 0xFFFFFFFF
    static SubContainerCreatorByNewPrefabMethod_10<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>* New_ctor(Zenject::DiContainer* container, Zenject::IPrefabProvider* prefabProvider, Zenject::GameObjectCreationParameters* gameObjectBindInfo, System::Action_11<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>* installerMethod) {
      return (SubContainerCreatorByNewPrefabMethod_10<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SubContainerCreatorByNewPrefabMethod_10<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>*>::get(), container, prefabProvider, gameObjectBindInfo, installerMethod)));
    }
    // protected override System.Void AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.SubContainerCreatorDynamicContext
    // Base method: System.Void SubContainerCreatorDynamicContext::AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    void AddInstallers(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::GameObjectContext* context) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddInstallers", args, context));
    }
  }; // Zenject.SubContainerCreatorByNewPrefabMethod`10
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::SubContainerCreatorByNewPrefabMethod_10, "Zenject", "SubContainerCreatorByNewPrefabMethod`10");
#pragma pack(pop)
