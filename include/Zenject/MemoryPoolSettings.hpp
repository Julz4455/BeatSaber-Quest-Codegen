// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PoolExpandMethods
#include "Zenject/PoolExpandMethods.hpp"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MemoryPoolSettings
  class MemoryPoolSettings : public ::Il2CppObject {
    public:
    // public System.Int32 InitialSize
    // Offset: 0x10
    int InitialSize;
    // public System.Int32 MaxSize
    // Offset: 0x14
    int MaxSize;
    // public Zenject.PoolExpandMethods ExpandMethod
    // Offset: 0x18
    Zenject::PoolExpandMethods ExpandMethod;
    // Get static field: static public readonly Zenject.MemoryPoolSettings Default
    static Zenject::MemoryPoolSettings* _get_Default();
    // Set static field: static public readonly Zenject.MemoryPoolSettings Default
    static void _set_Default(Zenject::MemoryPoolSettings* value);
    // public System.Void .ctor(System.Int32 initialSize, System.Int32 maxSize, Zenject.PoolExpandMethods expandMethod)
    // Offset: 0x1511D48
    static MemoryPoolSettings* New_ctor(int initialSize, int maxSize, Zenject::PoolExpandMethods expandMethod);
    // static private System.Void .cctor()
    // Offset: 0x1511D88
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1511D14
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MemoryPoolSettings* New_ctor();
  }; // Zenject.MemoryPoolSettings
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::MemoryPoolSettings*, "Zenject", "MemoryPoolSettings");
#pragma pack(pop)
