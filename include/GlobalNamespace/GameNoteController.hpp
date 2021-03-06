// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
// Including type: IGameNoteControllerInitializable`1
#include "GlobalNamespace/IGameNoteControllerInitializable_1.hpp"
// Including type: IGameNoteTypeProvider
#include "GlobalNamespace/IGameNoteTypeProvider.hpp"
// Including type: GameNoteController/GameNoteType
#include "GlobalNamespace/GameNoteController_GameNoteType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoxCuttableBySaber
  class BoxCuttableBySaber;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: Saber
  class Saber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA5
  #pragma pack(push, 1)
  // Autogenerated type: GameNoteController
  // [] Offset: FFFFFFFF
  class GameNoteController : public GlobalNamespace::NoteController/*, public GlobalNamespace::IGameNoteControllerInitializable_1<GlobalNamespace::GameNoteController*>, public GlobalNamespace::IGameNoteTypeProvider*/ {
    public:
    // Writing base type padding for base size: 0x71 to desired offset: 0x78
    char ___base_padding[0x7] = {};
    // Nested type: GlobalNamespace::GameNoteController::Pool
    class Pool;
    // private BoxCuttableBySaber _bigCuttableBySaber
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::BoxCuttableBySaber* bigCuttableBySaber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoxCuttableBySaber*) == 0x8);
    // private BoxCuttableBySaber _smallCuttableBySaber
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::BoxCuttableBySaber* smallCuttableBySaber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoxCuttableBySaber*) == 0x8);
    // private UnityEngine.GameObject _wrapperGO
    // Size: 0x8
    // Offset: 0x88
    UnityEngine::GameObject* wrapperGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0xD37984
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD37994
    // private System.Action`1<GameNoteController> gameNoteControllerDidInitEvent
    // Size: 0x8
    // Offset: 0x98
    System::Action_1<GlobalNamespace::GameNoteController*>* gameNoteControllerDidInitEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::GameNoteController*>*) == 0x8);
    // private GameNoteController/GameNoteType _gameNoteType
    // Size: 0x4
    // Offset: 0xA0
    GlobalNamespace::GameNoteController_GameNoteType gameNoteType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameNoteController_GameNoteType) == 0x4);
    // private System.Boolean _hidden
    // Size: 0x1
    // Offset: 0xA4
    bool hidden;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: GameNoteController
    GameNoteController(GlobalNamespace::BoxCuttableBySaber* bigCuttableBySaber_ = {}, GlobalNamespace::BoxCuttableBySaber* smallCuttableBySaber_ = {}, UnityEngine::GameObject* wrapperGO_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, System::Action_1<GlobalNamespace::GameNoteController*>* gameNoteControllerDidInitEvent_ = {}, GlobalNamespace::GameNoteController_GameNoteType gameNoteType_ = {}, bool hidden_ = {}) noexcept : bigCuttableBySaber{bigCuttableBySaber_}, smallCuttableBySaber{smallCuttableBySaber_}, wrapperGO{wrapperGO_}, audioTimeSyncController{audioTimeSyncController_}, gameNoteControllerDidInitEvent{gameNoteControllerDidInitEvent_}, gameNoteType{gameNoteType_}, hidden{hidden_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IGameNoteControllerInitializable_1<GlobalNamespace::GameNoteController*>
    operator GlobalNamespace::IGameNoteControllerInitializable_1<GlobalNamespace::GameNoteController*>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IGameNoteControllerInitializable_1<GlobalNamespace::GameNoteController*>*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IGameNoteTypeProvider
    operator GlobalNamespace::IGameNoteTypeProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::IGameNoteTypeProvider*>(this);
    }
    // public System.Void add_gameNoteControllerDidInitEvent(System.Action`1<GameNoteController> value)
    // Offset: 0xF33C08
    void add_gameNoteControllerDidInitEvent(System::Action_1<GlobalNamespace::GameNoteController*>* value);
    // public System.Void remove_gameNoteControllerDidInitEvent(System.Action`1<GameNoteController> value)
    // Offset: 0xF33CAC
    void remove_gameNoteControllerDidInitEvent(System::Action_1<GlobalNamespace::GameNoteController*>* value);
    // public System.Void Init(NoteData noteData, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity, GameNoteController/GameNoteType gameNoteType, System.Single cutDirectionAngleOffset)
    // Offset: 0xF33DB4
    void Init(GlobalNamespace::NoteData* noteData, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity, GlobalNamespace::GameNoteController_GameNoteType gameNoteType, float cutDirectionAngleOffset);
    // private System.Void HandleBigWasCutBySaber(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0xF341E0
    void HandleBigWasCutBySaber(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec);
    // private System.Void HandleSmallWasCutBySaber(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0xF34588
    void HandleSmallWasCutBySaber(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec);
    // private System.Void HandleCut(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec, System.Boolean allowBadCut)
    // Offset: 0xF341F8
    void HandleCut(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec, bool allowBadCut);
    // public GameNoteController/GameNoteType get_gameNoteType()
    // Offset: 0xF33D50
    // Implemented from: IGameNoteTypeProvider
    // Base method: GameNoteController/GameNoteType IGameNoteTypeProvider::get_gameNoteType()
    GlobalNamespace::GameNoteController_GameNoteType get_gameNoteType();
    // public override System.Void set_hide(System.Boolean value)
    // Offset: 0xF33D58
    // Implemented from: NoteController
    // Base method: System.Void NoteController::set_hide(System.Boolean value)
    void set_hide(bool value);
    // public override System.Boolean get_hide()
    // Offset: 0xF33D9C
    // Implemented from: NoteController
    // Base method: System.Boolean NoteController::get_hide()
    bool get_hide();
    // public override System.Void set_pause(System.Boolean value)
    // Offset: 0xF33DA4
    // Implemented from: NoteController
    // Base method: System.Void NoteController::set_pause(System.Boolean value)
    void set_pause(bool value);
    // protected override System.Void Awake()
    // Offset: 0xF33F14
    // Implemented from: NoteController
    // Base method: System.Void NoteController::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0xF33FE8
    // Implemented from: NoteController
    // Base method: System.Void NoteController::OnDestroy()
    void OnDestroy();
    // protected override System.Void NoteDidPassMissedMarker()
    // Offset: 0xF3413C
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidPassMissedMarker()
    void NoteDidPassMissedMarker();
    // protected override System.Void NoteDidStartDissolving()
    // Offset: 0xF34194
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidStartDissolving()
    void NoteDidStartDissolving();
    // protected override System.Void NoteDidStartJump()
    // Offset: 0xF345A0
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidStartJump()
    void NoteDidStartJump();
    // public System.Void .ctor()
    // Offset: 0xF345EC
    // Implemented from: NoteController
    // Base method: System.Void NoteController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameNoteController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameNoteController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameNoteController*, creationType>()));
    }
  }; // GameNoteController
  #pragma pack(pop)
  static check_size<sizeof(GameNoteController), 164 + sizeof(bool)> __GlobalNamespace_GameNoteControllerSizeCheck;
  static_assert(sizeof(GameNoteController) == 0xA5);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameNoteController*, "", "GameNoteController");
