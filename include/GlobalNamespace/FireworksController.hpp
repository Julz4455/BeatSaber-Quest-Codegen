// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: FireworkItemController
#include "GlobalNamespace/FireworkItemController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  // Autogenerated type: FireworksController
  // [] Offset: FFFFFFFF
  class FireworksController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::FireworksController::$SpawningCoroutine$d__5
    class $SpawningCoroutine$d__5;
    // private UnityEngine.Vector3 _spawnSize
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Vector3 spawnSize;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Single _minSpawnInterval
    // Size: 0x4
    // Offset: 0x24
    float minSpawnInterval;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _maxSpawnInterval
    // Size: 0x4
    // Offset: 0x28
    float maxSpawnInterval;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maxSpawnInterval and: fireworkItemPool
    char __padding2[0x4] = {};
    // [InjectAttribute] Offset: 0xDC6820
    // private readonly FireworkItemController/Pool _fireworkItemPool
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::FireworkItemController::Pool* fireworkItemPool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FireworkItemController::Pool*) == 0x8);
    // Creating value type constructor for type: FireworksController
    FireworksController(UnityEngine::Vector3 spawnSize_ = {}, float minSpawnInterval_ = {}, float maxSpawnInterval_ = {}, GlobalNamespace::FireworkItemController::Pool* fireworkItemPool_ = {}) noexcept : spawnSize{spawnSize_}, minSpawnInterval{minSpawnInterval_}, maxSpawnInterval{maxSpawnInterval_}, fireworkItemPool{fireworkItemPool_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnEnable()
    // Offset: 0x1A131A4
    void OnEnable();
    // private System.Collections.IEnumerator SpawningCoroutine()
    // Offset: 0x1A131D0
    System::Collections::IEnumerator* SpawningCoroutine();
    // private System.Void HandleFireworkItemControllerDidFinish(FireworkItemController fireworkItemController)
    // Offset: 0x1A13278
    void HandleFireworkItemControllerDidFinish(GlobalNamespace::FireworkItemController* fireworkItemController);
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x1A13324
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0x1A133A8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FireworksController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("FireworksController").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FireworksController*, creationType>()));
    }
  }; // FireworksController
  static check_size<sizeof(FireworksController), 48 + sizeof(GlobalNamespace::FireworkItemController::Pool*)> __GlobalNamespace_FireworksControllerSizeCheck;
  static_assert(sizeof(FireworksController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FireworksController*, "", "FireworksController");
#pragma pack(pop)
