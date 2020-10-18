// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerConnectedPlayerNoteController
#include "GlobalNamespace/MultiplayerConnectedPlayerNoteController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerConnectedPlayerBombNoteController
  class MultiplayerConnectedPlayerBombNoteController : public GlobalNamespace::MultiplayerConnectedPlayerNoteController {
    public:
    // Nested type: GlobalNamespace::MultiplayerConnectedPlayerBombNoteController::Pool
    class Pool;
    // public System.Void Init(NoteData noteData, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity)
    // Offset: 0xFCA29C
    void Init(GlobalNamespace::NoteData* noteData, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity);
    // public System.Void .ctor()
    // Offset: 0xFCAF40
    // Implemented from: MultiplayerConnectedPlayerNoteController
    // Base method: System.Void MultiplayerConnectedPlayerNoteController::.ctor()
    // Base method: System.Void NoteController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerConnectedPlayerBombNoteController* New_ctor();
  }; // MultiplayerConnectedPlayerBombNoteController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*, "", "MultiplayerConnectedPlayerBombNoteController");
#pragma pack(pop)
