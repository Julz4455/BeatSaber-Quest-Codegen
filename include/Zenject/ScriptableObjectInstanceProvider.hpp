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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ScriptableObjectInstanceProvider
  class ScriptableObjectInstanceProvider : public ::Il2CppObject, public Zenject::IProvider {
    public:
    // Nested type: Zenject::ScriptableObjectInstanceProvider::$$c__DisplayClass13_0
    class $$c__DisplayClass13_0;
    // private readonly Zenject.DiContainer _container
    // Offset: 0x10
    Zenject::DiContainer* container;
    // private readonly System.Type _resourceType
    // Offset: 0x18
    System::Type* resourceType;
    // private readonly System.Collections.Generic.List`1<Zenject.TypeValuePair> _extraArguments
    // Offset: 0x20
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* extraArguments;
    // private readonly System.Boolean _createNew
    // Offset: 0x28
    bool createNew;
    // private readonly System.Object _concreteIdentifier
    // Offset: 0x30
    ::Il2CppObject* concreteIdentifier;
    // private readonly System.Action`2<Zenject.InjectContext,System.Object> _instantiateCallback
    // Offset: 0x38
    System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback;
    // private readonly UnityEngine.Object _resource
    // Offset: 0x40
    UnityEngine::Object* resource;
    // public System.Void .ctor(UnityEngine.Object resource, System.Type resourceType, Zenject.DiContainer container, System.Collections.Generic.IEnumerable`1<Zenject.TypeValuePair> extraArguments, System.Boolean createNew, System.Object concreteIdentifier, System.Action`2<Zenject.InjectContext,System.Object> instantiateCallback)
    // Offset: 0x151C6A8
    static ScriptableObjectInstanceProvider* New_ctor(UnityEngine::Object* resource, System::Type* resourceType, Zenject::DiContainer* container, System::Collections::Generic::IEnumerable_1<Zenject::TypeValuePair>* extraArguments, bool createNew, ::Il2CppObject* concreteIdentifier, System::Action_2<Zenject::InjectContext*, ::Il2CppObject*>* instantiateCallback);
    // public System.Boolean get_IsCached()
    // Offset: 0x151C7BC
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_IsCached()
    bool get_IsCached();
    // public System.Boolean get_TypeVariesBasedOnMemberType()
    // Offset: 0x151C7C4
    // Implemented from: Zenject.IProvider
    // Base method: System.Boolean IProvider::get_TypeVariesBasedOnMemberType()
    bool get_TypeVariesBasedOnMemberType();
    // public System.Type GetInstanceType(Zenject.InjectContext context)
    // Offset: 0x151C7CC
    // Implemented from: Zenject.IProvider
    // Base method: System.Type IProvider::GetInstanceType(Zenject.InjectContext context)
    System::Type* GetInstanceType(Zenject::InjectContext* context);
    // public System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0x151C7D4
    // Implemented from: Zenject.IProvider
    // Base method: System.Void IProvider::GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer);
  }; // Zenject.ScriptableObjectInstanceProvider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScriptableObjectInstanceProvider*, "Zenject", "ScriptableObjectInstanceProvider");
#pragma pack(pop)
