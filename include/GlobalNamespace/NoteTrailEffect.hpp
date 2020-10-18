// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteMovement
  class NoteMovement;
  // Forward declaring type: NoteTrailParticleSystem
  class NoteTrailParticleSystem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteTrailEffect
  class NoteTrailEffect : public UnityEngine::MonoBehaviour {
    public:
    // private System.Int32 _particlesPerFrame
    // Offset: 0x18
    int particlesPerFrame;
    // private System.Single _maxSpawnDistance
    // Offset: 0x1C
    float maxSpawnDistance;
    // private NoteMovement _noteMovement
    // Offset: 0x20
    GlobalNamespace::NoteMovement* noteMovement;
    // private NoteTrailParticleSystem _noteTrailParticleSystem
    // Offset: 0x28
    GlobalNamespace::NoteTrailParticleSystem* noteTrailParticleSystem;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x10B2868
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x10B2948
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x10B2A50
    void Update();
    // private System.Void HandleNoteMovementDidInit()
    // Offset: 0x10B2C0C
    void HandleNoteMovementDidInit();
    // private System.Void HandleNoteDidStartJump()
    // Offset: 0x10B2C18
    void HandleNoteDidStartJump();
    // public System.Void .ctor()
    // Offset: 0x10B2C24
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NoteTrailEffect* New_ctor();
  }; // NoteTrailEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteTrailEffect*, "", "NoteTrailEffect");
#pragma pack(pop)
