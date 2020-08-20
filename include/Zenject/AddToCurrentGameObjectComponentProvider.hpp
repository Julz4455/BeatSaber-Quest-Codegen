// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IProvider
#include "Zenject/IProvider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.AddToCurrentGameObjectComponentProvider
  class AddToCurrentGameObjectComponentProvider : public ::Il2CppObject, public Zenject::IProvider {
    public:
    // Nested type: Zenject::AddToCurrentGameObjectComponentProvider::$$c__DisplayClass15_0
    class $$c__DisplayClass15_0;
    // private readonly System.Type _componentType
    // Offset: 0x10
    System::Type* componentType;
    // private readonly Zenject.DiContainer _container
    // Offset: 0x18
    Zenject::DiContainer* container;
    // private readonly System.Collections.Generic.List`1<Zenject.TypeValuePair> _extraArguments
    // Offset: 0x20
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* extraArguments;
    // private readonly System.Object _concreteIdentifier
    // Offset: 0x28
    ::Il2CppObject* concreteIdentifier;
    // private readonly System.Action`2<Zenject.InjectContext,System.Object> _instantiateCallback
    // Offset: 0x30
    System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback;
    // public System.Void .ctor(Zenject.DiContainer container, System.Type componentType, System.Collections.Generic.IEnumerable`1<Zenject.TypeValuePair> extraArguments, System.Object concreteIdentifier, System.Action`2<Zenject.InjectContext,System.Object> instantiateCallback)
    // Offset: 0xCC2FF8
    static AddToCurrentGameObjectComponentProvider* New_ctor(Zenject::DiContainer* container, System::Type* componentType, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>* extraArguments, ::Il2CppObject* concreteIdentifier, System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback);
    // protected Zenject.DiContainer get_Container()
    // Offset: 0xCC311C
    Zenject::DiContainer* get_Container();
    // protected System.Type get_ComponentType()
    // Offset: 0xCC3124
    System::Type* get_ComponentType();
    // public System.Boolean get_IsCached()
    // Offset: 0xCC310C
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_IsCached()
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0xCC3114
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_TypeVariesBasedOnMemberType()
    bool get_TypeVariesBasedOnMemberType();
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0xCC312C
    // Implemented from: Zenject.IProvider
    // Base method: System.Type IProvider::GetInstanceType(Zenject.InjectContext context)
    System::Type* GetInstanceType(Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xCC3134
    // Implemented from: Zenject.IProvider
    // Base method: System.Void IProvider::GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.AddToCurrentGameObjectComponentProvider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::AddToCurrentGameObjectComponentProvider*, "Zenject", "AddToCurrentGameObjectComponentProvider");
#pragma pack(pop)
