// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinder3Extensions
#include "Zenject/FactoryFromBinder3Extensions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`4<TParam1, TParam2, TParam3, TParam4>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4>
  class IPoolable_4;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPoolInitialSizeMaxSizeBinder`1<TContract>
  template<typename TContract>
  class MemoryPoolInitialSizeMaxSizeBinder_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinder3Extensions/<>c__3`4
  template<typename TParam1, typename TParam2, typename TParam3, typename TContract>
  class FactoryFromBinder3Extensions::$$c__3_4 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static public readonly Zenject.FactoryFromBinder3Extensions/<>c__3`4<TParam1,TParam2,TParam3,TContract> <>9
    static Zenject::FactoryFromBinder3Extensions::$$c__3_4<TParam1, TParam2, TParam3, TContract>* _get_$$9() {
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<Zenject::FactoryFromBinder3Extensions::$$c__3_4<TParam1, TParam2, TParam3, TContract>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder3Extensions::$$c__3_4<TParam1, TParam2, TParam3, TContract>*>::get(), "<>9")));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly Zenject.FactoryFromBinder3Extensions/<>c__3`4<TParam1,TParam2,TParam3,TContract> <>9
    static void _set_$$9(Zenject::FactoryFromBinder3Extensions::$$c__3_4<TParam1, TParam2, TParam3, TContract>* value) {
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder3Extensions::$$c__3_4<TParam1, TParam2, TParam3, TContract>*>::get(), "<>9", value)));
    }
    // Autogenerated static field getter
    // Get static field: static public System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> <>9__3_0
    static System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* _get_$$9__3_0() {
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder3Extensions::$$c__3_4<TParam1, TParam2, TParam3, TContract>*>::get(), "<>9__3_0")));
    }
    // Autogenerated static field setter
    // Set static field: static public System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> <>9__3_0
    static void _set_$$9__3_0(System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value) {
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder3Extensions::$$c__3_4<TParam1, TParam2, TParam3, TContract>*>::get(), "<>9__3_0", value)));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder3Extensions::$$c__3_4<TParam1, TParam2, TParam3, TContract>*>::get(), ".cctor")));
    }
    // System.Void <FromMonoPoolableMemoryPool>b__3_0(Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract> x)
    // Offset: 0xFFFFFFFF
    void $FromMonoPoolableMemoryPool$b__3_0(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "<FromMonoPoolableMemoryPool>b__3_0", x));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FactoryFromBinder3Extensions::$$c__3_4<TParam1, TParam2, TParam3, TContract>* New_ctor() {
      return THROW_UNLESS((il2cpp_utils::New<FactoryFromBinder3Extensions::$$c__3_4<TParam1, TParam2, TParam3, TContract>*>()));
    }
  }; // Zenject.FactoryFromBinder3Extensions/<>c__3`4
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder3Extensions::$$c__3_4, "Zenject", "FactoryFromBinder3Extensions/<>c__3`4");
#pragma pack(pop)
