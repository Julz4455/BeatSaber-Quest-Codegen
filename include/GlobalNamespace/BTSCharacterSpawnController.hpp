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
  // Forward declaring type: BTSCharacterSpawnAnimationController
  class BTSCharacterSpawnAnimationController;
  // Forward declaring type: BTSCharacterSpawnEventEffect
  class BTSCharacterSpawnEventEffect;
  // Forward declaring type: IGamePause
  class IGamePause;
  // Forward declaring type: ILevelEndActions
  class ILevelEndActions;
  // Forward declaring type: BTSCharacter
  class BTSCharacter;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BTSCharacterSpawnController
  class BTSCharacterSpawnController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BTSCharacterSpawnController::$TimelineStoppedDelayed$d__15
    class $TimelineStoppedDelayed$d__15;
    // private BTSCharacterSpawnAnimationController _characterSpawnAnimationController
    // Offset: 0x18
    GlobalNamespace::BTSCharacterSpawnAnimationController* characterSpawnAnimationController;
    // private BTSCharacterSpawnEventEffect _btsCharacterSpawnEventEffect
    // Offset: 0x20
    GlobalNamespace::BTSCharacterSpawnEventEffect* btsCharacterSpawnEventEffect;
    // private readonly IGamePause _gamePause
    // Offset: 0x28
    GlobalNamespace::IGamePause* gamePause;
    // private readonly ILevelEndActions _levelEndActions
    // Offset: 0x30
    GlobalNamespace::ILevelEndActions* levelEndActions;
    // private System.Boolean _characterSpawned
    // Offset: 0x38
    bool characterSpawned;
    // private System.Double _playableDirectorTimeBeforePause
    // Offset: 0x40
    double playableDirectorTimeBeforePause;
    // private System.Single _animatorNormalizedTimeBeforePause
    // Offset: 0x48
    float animatorNormalizedTimeBeforePause;
    // private UnityEngine.Coroutine _despawnCharacterCoroutine
    // Offset: 0x50
    UnityEngine::Coroutine* despawnCharacterCoroutine;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x1A4A998
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1A4AD34
    void OnDestroy();
    // private System.Void HandleStartCharacterAnimation(BTSCharacter btsCharacter)
    // Offset: 0x1A4B154
    void HandleStartCharacterAnimation(GlobalNamespace::BTSCharacter* btsCharacter);
    // private System.Void HandleGamePauseDidPause()
    // Offset: 0x1A4B2B0
    void HandleGamePauseDidPause();
    // private System.Void HandleGamePauseWillResume()
    // Offset: 0x1A4B2FC
    void HandleGamePauseWillResume();
    // private System.Void HandleGamePauseDidResume()
    // Offset: 0x1A4B350
    void HandleGamePauseDidResume();
    // private System.Void HandleLevelEndActionsLevelFailed()
    // Offset: 0x1A4B374
    void HandleLevelEndActionsLevelFailed();
    // private System.Collections.IEnumerator TimelineStoppedDelayed()
    // Offset: 0x1A4B234
    System::Collections::IEnumerator* TimelineStoppedDelayed();
    // public System.Void .ctor()
    // Offset: 0x1A4B3C4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BTSCharacterSpawnController* New_ctor();
  }; // BTSCharacterSpawnController
  check_size<sizeof(BTSCharacterSpawnController), 80 + sizeof(void*) + ((80 + sizeof(void*)) % 8 != 0 ? (8 - (80 + sizeof(void*)) % 8) : 0)> __GlobalNamespace_BTSCharacterSpawnControllerSizeCheck;
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterSpawnController*, "", "BTSCharacterSpawnController");
#pragma pack(pop)