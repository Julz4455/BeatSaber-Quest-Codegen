// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PoolableManager
#include "Zenject/PoolableManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable
  class IPoolable;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PoolableManager/<>c__DisplayClass3_0
  class PoolableManager::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    // public Zenject.IPoolable poolable
    // Offset: 0x10
    Zenject::IPoolable* poolable;
    // Creating conversion operator: operator Zenject::IPoolable*
    constexpr operator Zenject::IPoolable*() const noexcept {
      return poolable;
    }
    // System.Boolean <CreatePoolableInfo>b__0(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0x15136F8
    bool $CreatePoolableInfo$b__0(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // public System.Void .ctor()
    // Offset: 0x1513394
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PoolableManager::$$c__DisplayClass3_0* New_ctor();
  }; // Zenject.PoolableManager/<>c__DisplayClass3_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::PoolableManager::$$c__DisplayClass3_0*, "Zenject", "PoolableManager/<>c__DisplayClass3_0");
#pragma pack(pop)
