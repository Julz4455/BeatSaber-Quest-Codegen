// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/EmitParams
#include "UnityEngine/ParticleSystem_EmitParams.hpp"
// Including type: UnityEngine.ParticleSystem/MainModule
#include "UnityEngine/ParticleSystem_MainModule.hpp"
// Including type: UnityEngine.ParticleSystem/ShapeModule
#include "UnityEngine/ParticleSystem_ShapeModule.hpp"
// Including type: UnityEngine.ParticleSystem/ForceOverLifetimeModule
#include "UnityEngine/ParticleSystem_ForceOverLifetimeModule.hpp"
// Including type: UnityEngine.ParticleSystem/MinMaxCurve
#include "UnityEngine/ParticleSystem_MinMaxCurve.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Color32
  struct Color32;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x218
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutParticlesEffect
  // [] Offset: FFFFFFFF
  class NoteCutParticlesEffect : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem _sparklesPS
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ParticleSystem* sparklesPS;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.ParticleSystem _explosionPS
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::ParticleSystem* explosionPS;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.ParticleSystem _explosionCorePS
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::ParticleSystem* explosionCorePS;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.ParticleSystem/EmitParams _sparklesPSEmitParams
    // Size: 0x8F
    // Offset: 0x30
    UnityEngine::ParticleSystem::EmitParams sparklesPSEmitParams;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::EmitParams) == 0x8F);
    // Padding between fields: sparklesPSEmitParams and: sparklesPSMainModule
    char __padding3[0x1] = {};
    // private UnityEngine.ParticleSystem/MainModule _sparklesPSMainModule
    // Size: 0x8
    // Offset: 0xC0
    UnityEngine::ParticleSystem::MainModule sparklesPSMainModule;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::MainModule) == 0x8);
    // private UnityEngine.ParticleSystem/ShapeModule _sparklesPSShapeModule
    // Size: 0x8
    // Offset: 0xC8
    UnityEngine::ParticleSystem::ShapeModule sparklesPSShapeModule;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::ShapeModule) == 0x8);
    // private UnityEngine.ParticleSystem/ForceOverLifetimeModule _explosionPSForceOverLifetimeModule
    // Size: 0x8
    // Offset: 0xD0
    UnityEngine::ParticleSystem::ForceOverLifetimeModule explosionPSForceOverLifetimeModule;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::ForceOverLifetimeModule) == 0x8);
    // private UnityEngine.ParticleSystem/EmitParams _explosionPSEmitParams
    // Size: 0x8F
    // Offset: 0xD8
    UnityEngine::ParticleSystem::EmitParams explosionPSEmitParams;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::EmitParams) == 0x8F);
    // Padding between fields: explosionPSEmitParams and: explosionCoresPSEmitParams
    char __padding7[0x1] = {};
    // private UnityEngine.ParticleSystem/EmitParams _explosionCoresPSEmitParams
    // Size: 0x8F
    // Offset: 0x168
    UnityEngine::ParticleSystem::EmitParams explosionCoresPSEmitParams;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::EmitParams) == 0x8F);
    // Padding between fields: explosionCoresPSEmitParams and: sparklesLifetimeMinMaxCurve
    char __padding8[0x1] = {};
    // private UnityEngine.ParticleSystem/MinMaxCurve _sparklesLifetimeMinMaxCurve
    // Size: 0x20
    // Offset: 0x1F8
    UnityEngine::ParticleSystem::MinMaxCurve sparklesLifetimeMinMaxCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::MinMaxCurve) == 0x20);
    // Creating value type constructor for type: NoteCutParticlesEffect
    NoteCutParticlesEffect(UnityEngine::ParticleSystem* sparklesPS_ = {}, UnityEngine::ParticleSystem* explosionPS_ = {}, UnityEngine::ParticleSystem* explosionCorePS_ = {}, UnityEngine::ParticleSystem::EmitParams sparklesPSEmitParams_ = {}, UnityEngine::ParticleSystem::MainModule sparklesPSMainModule_ = {}, UnityEngine::ParticleSystem::ShapeModule sparklesPSShapeModule_ = {}, UnityEngine::ParticleSystem::ForceOverLifetimeModule explosionPSForceOverLifetimeModule_ = {}, UnityEngine::ParticleSystem::EmitParams explosionPSEmitParams_ = {}, UnityEngine::ParticleSystem::EmitParams explosionCoresPSEmitParams_ = {}, UnityEngine::ParticleSystem::MinMaxCurve sparklesLifetimeMinMaxCurve_ = {}) noexcept : sparklesPS{sparklesPS_}, explosionPS{explosionPS_}, explosionCorePS{explosionCorePS_}, sparklesPSEmitParams{sparklesPSEmitParams_}, sparklesPSMainModule{sparklesPSMainModule_}, sparklesPSShapeModule{sparklesPSShapeModule_}, explosionPSForceOverLifetimeModule{explosionPSForceOverLifetimeModule_}, explosionPSEmitParams{explosionPSEmitParams_}, explosionCoresPSEmitParams{explosionCoresPSEmitParams_}, sparklesLifetimeMinMaxCurve{sparklesLifetimeMinMaxCurve_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0xF911C8
    void Awake();
    // public System.Void SpawnParticles(UnityEngine.Vector3 pos, UnityEngine.Vector3 cutNormal, UnityEngine.Vector3 saberDir, UnityEngine.Vector3 moveVec, UnityEngine.Color32 color, System.Int32 sparkleParticlesCount, System.Int32 explosionParticlesCount, System.Single lifetimeMultiplier)
    // Offset: 0xF90614
    void SpawnParticles(UnityEngine::Vector3 pos, UnityEngine::Vector3 cutNormal, UnityEngine::Vector3 saberDir, UnityEngine::Vector3 moveVec, UnityEngine::Color32 color, int sparkleParticlesCount, int explosionParticlesCount, float lifetimeMultiplier);
    // public System.Void .ctor()
    // Offset: 0xF91318
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutParticlesEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteCutParticlesEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutParticlesEffect*, creationType>()));
    }
  }; // NoteCutParticlesEffect
  #pragma pack(pop)
  static check_size<sizeof(NoteCutParticlesEffect), 504 + sizeof(UnityEngine::ParticleSystem::MinMaxCurve)> __GlobalNamespace_NoteCutParticlesEffectSizeCheck;
  static_assert(sizeof(NoteCutParticlesEffect) == 0x218);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutParticlesEffect*, "", "NoteCutParticlesEffect");
