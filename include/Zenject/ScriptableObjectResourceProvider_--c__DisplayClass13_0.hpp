// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ScriptableObjectResourceProvider
#include "Zenject/ScriptableObjectResourceProvider.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ScriptableObjectResourceProvider/<>c__DisplayClass13_0
  class ScriptableObjectResourceProvider::$$c__DisplayClass13_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.List`1<System.Object> buffer
    // Offset: 0x10
    System::Collections::Generic::List_1<::Il2CppObject*>* buffer;
    // public Zenject.ScriptableObjectResourceProvider <>4__this
    // Offset: 0x18
    Zenject::ScriptableObjectResourceProvider* $$4__this;
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
    // Offset: 0x20
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* args;
    // public Zenject.InjectContext context
    // Offset: 0x28
    Zenject::InjectContext* context;
    // System.Void <GetAllInstancesWithInjectSplit>b__0()
    // Offset: 0xFCEE98
    void $GetAllInstancesWithInjectSplit$b__0();
    // public System.Void .ctor()
    // Offset: 0xFCEE90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ScriptableObjectResourceProvider::$$c__DisplayClass13_0* New_ctor();
  }; // Zenject.ScriptableObjectResourceProvider/<>c__DisplayClass13_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScriptableObjectResourceProvider::$$c__DisplayClass13_0*, "Zenject", "ScriptableObjectResourceProvider/<>c__DisplayClass13_0");
#pragma pack(pop)
