// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IInitializable
#include "Zenject/IInitializable.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Zenject.ITickable
#include "Zenject/ITickable.hpp"
// Including type: Zenject.ILateTickable
#include "Zenject/ILateTickable.hpp"
// Including type: Zenject.IFixedTickable
#include "Zenject/IFixedTickable.hpp"
// Including type: Zenject.ILateDisposable
#include "Zenject/ILateDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: TickableManager
  class TickableManager;
  // Forward declaring type: InitializableManager
  class InitializableManager;
  // Forward declaring type: DisposableManager
  class DisposableManager;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Kernel
  // [] Offset: FFFFFFFF
  // [DebuggerStepThroughAttribute] Offset: FFFFFFFF
  class Kernel : public ::Il2CppObject/*, public Zenject::IInitializable, public System::IDisposable, public Zenject::ITickable, public Zenject::ILateTickable, public Zenject::IFixedTickable, public Zenject::ILateDisposable*/ {
    public:
    // [InjectLocalAttribute] Offset: 0xD0699C
    // private Zenject.TickableManager _tickableManager
    // Size: 0x8
    // Offset: 0x10
    Zenject::TickableManager* tickableManager;
    // Field size check
    static_assert(sizeof(Zenject::TickableManager*) == 0x8);
    // [InjectLocalAttribute] Offset: 0xD069AC
    // private Zenject.InitializableManager _initializableManager
    // Size: 0x8
    // Offset: 0x18
    Zenject::InitializableManager* initializableManager;
    // Field size check
    static_assert(sizeof(Zenject::InitializableManager*) == 0x8);
    // [InjectLocalAttribute] Offset: 0xD069BC
    // private Zenject.DisposableManager _disposablesManager
    // Size: 0x8
    // Offset: 0x20
    Zenject::DisposableManager* disposablesManager;
    // Field size check
    static_assert(sizeof(Zenject::DisposableManager*) == 0x8);
    // Creating value type constructor for type: Kernel
    Kernel(Zenject::TickableManager* tickableManager_ = {}, Zenject::InitializableManager* initializableManager_ = {}, Zenject::DisposableManager* disposablesManager_ = {}) noexcept : tickableManager{tickableManager_}, initializableManager{initializableManager_}, disposablesManager{disposablesManager_} {}
    // Creating interface conversion operator: operator Zenject::IInitializable
    operator Zenject::IInitializable() noexcept {
      return *reinterpret_cast<Zenject::IInitializable*>(this);
    }
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator Zenject::ITickable
    operator Zenject::ITickable() noexcept {
      return *reinterpret_cast<Zenject::ITickable*>(this);
    }
    // Creating interface conversion operator: operator Zenject::ILateTickable
    operator Zenject::ILateTickable() noexcept {
      return *reinterpret_cast<Zenject::ILateTickable*>(this);
    }
    // Creating interface conversion operator: operator Zenject::IFixedTickable
    operator Zenject::IFixedTickable() noexcept {
      return *reinterpret_cast<Zenject::IFixedTickable*>(this);
    }
    // Creating interface conversion operator: operator Zenject::ILateDisposable
    operator Zenject::ILateDisposable() noexcept {
      return *reinterpret_cast<Zenject::ILateDisposable*>(this);
    }
    // public System.Void Initialize()
    // Offset: 0x15B3ACC
    // Implemented from: Zenject.IInitializable
    // Base method: System.Void IInitializable::Initialize()
    void Initialize();
    // public System.Void Dispose()
    // Offset: 0x15B3AE8
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public System.Void LateDispose()
    // Offset: 0x15B3B04
    // Implemented from: Zenject.ILateDisposable
    // Base method: System.Void ILateDisposable::LateDispose()
    void LateDispose();
    // public System.Void Tick()
    // Offset: 0x15B3B20
    // Implemented from: Zenject.ITickable
    // Base method: System.Void ITickable::Tick()
    void Tick();
    // public System.Void LateTick()
    // Offset: 0x15B3BBC
    // Implemented from: Zenject.ILateTickable
    // Base method: System.Void ILateTickable::LateTick()
    void LateTick();
    // public System.Void FixedTick()
    // Offset: 0x15B3C58
    // Implemented from: Zenject.IFixedTickable
    // Base method: System.Void IFixedTickable::FixedTick()
    void FixedTick();
    // public System.Void .ctor()
    // Offset: 0x15B3CF4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Kernel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Kernel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Kernel*, creationType>()));
    }
  }; // Zenject.Kernel
  #pragma pack(pop)
  static check_size<sizeof(Kernel), 32 + sizeof(Zenject::DisposableManager*)> __Zenject_KernelSizeCheck;
  static_assert(sizeof(Kernel) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Kernel*, "Zenject", "Kernel");
