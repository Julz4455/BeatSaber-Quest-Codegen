// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable
  class IPoolable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
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
  // Autogenerated type: Zenject.PoolableManager
  class PoolableManager : public ::Il2CppObject {
    public:
    // Nested type: Zenject::PoolableManager::PoolableInfo
    struct PoolableInfo;
    // Nested type: Zenject::PoolableManager::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: Zenject::PoolableManager::$$c
    class $$c;
    // Nested type: Zenject::PoolableManager::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // private readonly System.Collections.Generic.List`1<Zenject.IPoolable> _poolables
    // Offset: 0x10
    System::Collections::Generic::List_1<Zenject::IPoolable*>* poolables;
    // private System.Boolean _isSpawned
    // Offset: 0x18
    bool isSpawned;
    // public System.Void .ctor(System.Collections.Generic.List`1<Zenject.IPoolable> poolables, System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> priorities)
    // Offset: 0x1512F14
    static PoolableManager* New_ctor(System::Collections::Generic::List_1<Zenject::IPoolable*>* poolables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* priorities);
    // private Zenject.PoolableManager/PoolableInfo CreatePoolableInfo(Zenject.IPoolable poolable, System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> priorities)
    // Offset: 0x15131A0
    Zenject::PoolableManager::PoolableInfo CreatePoolableInfo(Zenject::IPoolable* poolable, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* priorities);
    // public System.Void TriggerOnSpawned()
    // Offset: 0x15133C8
    void TriggerOnSpawned();
    // public System.Void TriggerOnDespawned()
    // Offset: 0x15134E0
    void TriggerOnDespawned();
  }; // Zenject.PoolableManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::PoolableManager*, "Zenject", "PoolableManager");
#pragma pack(pop)
