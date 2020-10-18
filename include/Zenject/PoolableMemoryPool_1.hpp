// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MemoryPool`1
#include "Zenject/MemoryPool_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable
  class IPoolable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PoolableMemoryPool`1
  template<typename TValue>
  class PoolableMemoryPool_1 : public Zenject::MemoryPool_1<TValue> {
    static_assert((!std::is_complete_v<std::remove_pointer_t<TValue>> || std::is_base_of_v<Zenject::IPoolable, std::remove_pointer_t<TValue>>));
    public:
    // protected override System.Void OnDespawned(TValue item)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Void MemoryPoolBase_1::OnDespawned(TValue item)
    void OnDespawned(TValue item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDespawned", item));
    }
    // protected override System.Void Reinitialize(TValue item)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPool`1
    // Base method: System.Void MemoryPool_1::Reinitialize(TValue item)
    void Reinitialize(TValue item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reinitialize", item));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPool`1
    // Base method: System.Void MemoryPool_1::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    static PoolableMemoryPool_1<TValue>* New_ctor() {
      return THROW_UNLESS(il2cpp_utils::New<PoolableMemoryPool_1<TValue>*>());
    }
  }; // Zenject.PoolableMemoryPool`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableMemoryPool_1, "Zenject", "PoolableMemoryPool`1");
#pragma pack(pop)
