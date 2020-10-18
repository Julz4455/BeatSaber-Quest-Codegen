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
  // Forward declaring type: NoteDebrisSpawner
  class NoteDebrisSpawner;
  // Forward declaring type: BombExplosionEffect
  class BombExplosionEffect;
  // Forward declaring type: IConnectedPlayerNoteEventManager
  class IConnectedPlayerNoteEventManager;
  // Forward declaring type: NoteCutInfoNetSerializable
  class NoteCutInfoNetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerConnectedPlayerEffectsSpawner
  class MultiplayerConnectedPlayerEffectsSpawner : public UnityEngine::MonoBehaviour {
    public:
    // private NoteDebrisSpawner _noteDebrisSpawner
    // Offset: 0x18
    GlobalNamespace::NoteDebrisSpawner* noteDebrisSpawner;
    // private BombExplosionEffect _bombExplosionEffect
    // Offset: 0x20
    GlobalNamespace::BombExplosionEffect* bombExplosionEffect;
    // private readonly IConnectedPlayerNoteEventManager _noteEventManager
    // Offset: 0x28
    GlobalNamespace::IConnectedPlayerNoteEventManager* noteEventManager;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xFCB378
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xFCB468
    void OnDestroy();
    // private System.Void HandleNoteEventManagerConnectedPlayerNoteWasCut(NoteCutInfoNetSerializable noteCutInfo)
    // Offset: 0xFCB568
    void HandleNoteEventManagerConnectedPlayerNoteWasCut(GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);
    // public System.Void .ctor()
    // Offset: 0xFCB648
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerConnectedPlayerEffectsSpawner* New_ctor();
  }; // MultiplayerConnectedPlayerEffectsSpawner
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerEffectsSpawner*, "", "MultiplayerConnectedPlayerEffectsSpawner");
#pragma pack(pop)
