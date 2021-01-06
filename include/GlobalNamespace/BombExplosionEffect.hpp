// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/EmitParams
#include "UnityEngine/ParticleSystem_EmitParams.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14F
  // Autogenerated type: BombExplosionEffect
  // [] Offset: FFFFFFFF
  class BombExplosionEffect : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem _debrisPS
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ParticleSystem* debrisPS;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.ParticleSystem _explosionPS
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::ParticleSystem* explosionPS;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private System.Int32 _debrisCount
    // Size: 0x4
    // Offset: 0x28
    int debrisCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _explosionParticlesCount
    // Size: 0x4
    // Offset: 0x2C
    int explosionParticlesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.ParticleSystem/EmitParams _emitParams
    // Size: 0x8F
    // Offset: 0x30
    UnityEngine::ParticleSystem::EmitParams emitParams;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::EmitParams) == 0x8F);
    // Padding between fields: emitParams and: explosionPSEmitParams
    char __padding4[0x1] = {};
    // private UnityEngine.ParticleSystem/EmitParams _explosionPSEmitParams
    // Size: 0x8F
    // Offset: 0xC0
    UnityEngine::ParticleSystem::EmitParams explosionPSEmitParams;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::EmitParams) == 0x8F);
    // Creating value type constructor for type: BombExplosionEffect
    BombExplosionEffect(UnityEngine::ParticleSystem* debrisPS_ = {}, UnityEngine::ParticleSystem* explosionPS_ = {}, int debrisCount_ = {}, int explosionParticlesCount_ = {}, UnityEngine::ParticleSystem::EmitParams emitParams_ = {}, UnityEngine::ParticleSystem::EmitParams explosionPSEmitParams_ = {}) noexcept : debrisPS{debrisPS_}, explosionPS{explosionPS_}, debrisCount{debrisCount_}, explosionParticlesCount{explosionParticlesCount_}, emitParams{emitParams_}, explosionPSEmitParams{explosionPSEmitParams_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1A30D10
    void Awake();
    // public System.Void SpawnExplosion(UnityEngine.Vector3 pos)
    // Offset: 0x1A30D48
    void SpawnExplosion(UnityEngine::Vector3 pos);
    // public System.Void .ctor()
    // Offset: 0x1A30E10
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BombExplosionEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BombExplosionEffect").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BombExplosionEffect*, creationType>()));
    }
  }; // BombExplosionEffect
  static check_size<sizeof(BombExplosionEffect), 192 + sizeof(UnityEngine::ParticleSystem::EmitParams)> __GlobalNamespace_BombExplosionEffectSizeCheck;
  static_assert(sizeof(BombExplosionEffect) == 0x14F);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BombExplosionEffect*, "", "BombExplosionEffect");
#pragma pack(pop)
