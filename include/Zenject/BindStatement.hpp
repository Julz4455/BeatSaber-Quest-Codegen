// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
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
  // Forward declaring type: IBindingFinalizer
  class IBindingFinalizer;
  // Forward declaring type: BindingInheritanceMethods
  struct BindingInheritanceMethods;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.BindStatement
  class BindStatement : public ::Il2CppObject, public System::IDisposable {
    public:
    // private readonly System.Collections.Generic.List`1<System.IDisposable> _disposables
    // Offset: 0x10
    System::Collections::Generic::List_1<System::IDisposable*>* disposables;
    // private Zenject.IBindingFinalizer _bindingFinalizer
    // Offset: 0x18
    Zenject::IBindingFinalizer* bindingFinalizer;
    // public Zenject.BindingInheritanceMethods get_BindingInheritanceMethod()
    // Offset: 0x11F432C
    Zenject::BindingInheritanceMethods get_BindingInheritanceMethod();
    // public System.Boolean get_HasFinalizer()
    // Offset: 0x11F444C
    bool get_HasFinalizer();
    // public System.Void SetFinalizer(Zenject.IBindingFinalizer bindingFinalizer)
    // Offset: 0x11F445C
    void SetFinalizer(Zenject::IBindingFinalizer* bindingFinalizer);
    // private System.Void AssertHasFinalizer()
    // Offset: 0x11F43E4
    void AssertHasFinalizer();
    // public System.Void AddDisposable(System.IDisposable disposable)
    // Offset: 0x11F4464
    void AddDisposable(System::IDisposable* disposable);
    // public Zenject.BindInfo SpawnBindInfo()
    // Offset: 0x11F44CC
    Zenject::BindInfo* SpawnBindInfo();
    // public System.Void FinalizeBinding(Zenject.DiContainer container)
    // Offset: 0x11F4548
    void FinalizeBinding(Zenject::DiContainer* container);
    // public System.Void Reset()
    // Offset: 0x11F4210
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x11F418C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BindStatement* New_ctor();
    // public System.Void Dispose()
    // Offset: 0x11F4614
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // Zenject.BindStatement
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::BindStatement*, "Zenject", "BindStatement");
#pragma pack(pop)
