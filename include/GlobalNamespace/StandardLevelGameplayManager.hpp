// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: ILevelEndActions
#include "GlobalNamespace/ILevelEndActions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: GameEnergyCounter
  class GameEnergyCounter;
  // Forward declaring type: PauseController
  class PauseController;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelGameplayManager
  // [] Offset: FFFFFFFF
  class StandardLevelGameplayManager : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::ILevelEndActions*/ {
    public:
    // Nested type: GlobalNamespace::StandardLevelGameplayManager::InitData
    class InitData;
    // Nested type: GlobalNamespace::StandardLevelGameplayManager::GameState
    struct GameState;
    // Nested type: GlobalNamespace::StandardLevelGameplayManager::$Start$d__15
    class $Start$d__15;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: StandardLevelGameplayManager/GameState
    // [] Offset: FFFFFFFF
    struct GameState/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: GameState
      constexpr GameState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public StandardLevelGameplayManager/GameState Intro
      static constexpr const int Intro = 0;
      // Get static field: static public StandardLevelGameplayManager/GameState Intro
      static GlobalNamespace::StandardLevelGameplayManager::GameState _get_Intro();
      // Set static field: static public StandardLevelGameplayManager/GameState Intro
      static void _set_Intro(GlobalNamespace::StandardLevelGameplayManager::GameState value);
      // static field const value: static public StandardLevelGameplayManager/GameState Playing
      static constexpr const int Playing = 1;
      // Get static field: static public StandardLevelGameplayManager/GameState Playing
      static GlobalNamespace::StandardLevelGameplayManager::GameState _get_Playing();
      // Set static field: static public StandardLevelGameplayManager/GameState Playing
      static void _set_Playing(GlobalNamespace::StandardLevelGameplayManager::GameState value);
      // static field const value: static public StandardLevelGameplayManager/GameState Paused
      static constexpr const int Paused = 2;
      // Get static field: static public StandardLevelGameplayManager/GameState Paused
      static GlobalNamespace::StandardLevelGameplayManager::GameState _get_Paused();
      // Set static field: static public StandardLevelGameplayManager/GameState Paused
      static void _set_Paused(GlobalNamespace::StandardLevelGameplayManager::GameState value);
      // static field const value: static public StandardLevelGameplayManager/GameState Finished
      static constexpr const int Finished = 3;
      // Get static field: static public StandardLevelGameplayManager/GameState Finished
      static GlobalNamespace::StandardLevelGameplayManager::GameState _get_Finished();
      // Set static field: static public StandardLevelGameplayManager/GameState Finished
      static void _set_Finished(GlobalNamespace::StandardLevelGameplayManager::GameState value);
      // static field const value: static public StandardLevelGameplayManager/GameState Failed
      static constexpr const int Failed = 4;
      // Get static field: static public StandardLevelGameplayManager/GameState Failed
      static GlobalNamespace::StandardLevelGameplayManager::GameState _get_Failed();
      // Set static field: static public StandardLevelGameplayManager/GameState Failed
      static void _set_Failed(GlobalNamespace::StandardLevelGameplayManager::GameState value);
    }; // StandardLevelGameplayManager/GameState
    #pragma pack(pop)
    static check_size<sizeof(StandardLevelGameplayManager::GameState), 0 + sizeof(int)> __GlobalNamespace_StandardLevelGameplayManager_GameStateSizeCheck;
    static_assert(sizeof(StandardLevelGameplayManager::GameState) == 0x4);
    // [InjectAttribute] Offset: 0xD39DDC
    // private readonly GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD39DEC
    // private readonly GameSongController _gameSongController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameSongController* gameSongController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameSongController*) == 0x8);
    // [InjectAttribute] Offset: 0xD39DFC
    // private readonly GameEnergyCounter _gameEnergyCounter
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameEnergyCounter* gameEnergyCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameEnergyCounter*) == 0x8);
    // [InjectAttribute] Offset: 0xD39E0C
    // private readonly PauseController _pauseController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::PauseController* pauseController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PauseController*) == 0x8);
    // [InjectAttribute] Offset: 0xD39E1C
    // private readonly StandardLevelGameplayManager/InitData _initData
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::StandardLevelGameplayManager::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelGameplayManager::InitData*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD39E2C
    // private System.Action levelFailedEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action* levelFailedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD39E3C
    // private System.Action levelFinishedEvent
    // Size: 0x8
    // Offset: 0x48
    System::Action* levelFinishedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private StandardLevelGameplayManager/GameState _gameState
    // Size: 0x4
    // Offset: 0x50
    GlobalNamespace::StandardLevelGameplayManager::GameState gameState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StandardLevelGameplayManager::GameState) == 0x4);
    // Creating value type constructor for type: StandardLevelGameplayManager
    StandardLevelGameplayManager(GlobalNamespace::GameScenesManager* gameScenesManager_ = {}, GlobalNamespace::GameSongController* gameSongController_ = {}, GlobalNamespace::GameEnergyCounter* gameEnergyCounter_ = {}, GlobalNamespace::PauseController* pauseController_ = {}, GlobalNamespace::StandardLevelGameplayManager::InitData* initData_ = {}, System::Action* levelFailedEvent_ = {}, System::Action* levelFinishedEvent_ = {}, GlobalNamespace::StandardLevelGameplayManager::GameState gameState_ = {}) noexcept : gameScenesManager{gameScenesManager_}, gameSongController{gameSongController_}, gameEnergyCounter{gameEnergyCounter_}, pauseController{pauseController_}, initData{initData_}, levelFailedEvent{levelFailedEvent_}, levelFinishedEvent{levelFinishedEvent_}, gameState{gameState_} {}
    // Creating interface conversion operator: operator GlobalNamespace::ILevelEndActions
    operator GlobalNamespace::ILevelEndActions() noexcept {
      return *reinterpret_cast<GlobalNamespace::ILevelEndActions*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0xF7A5C0
    void Awake();
    // private System.Collections.IEnumerator Start()
    // Offset: 0xF7A5C8
    System::Collections::IEnumerator* Start();
    // protected System.Void OnDestroy()
    // Offset: 0xF7A670
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0xF7A8B0
    void Update();
    // private System.Void HandleGameEnergyDidReach0()
    // Offset: 0xF7A8F8
    void HandleGameEnergyDidReach0();
    // private System.Void HandleSongDidFinish()
    // Offset: 0xF7A944
    void HandleSongDidFinish();
    // private System.Void HandlePauseControllerCanPause(System.Action`1<System.Boolean> canPause)
    // Offset: 0xF7A974
    void HandlePauseControllerCanPause(System::Action_1<bool>* canPause);
    // private System.Void HandlePauseControllerDidPause()
    // Offset: 0xF7A9F0
    void HandlePauseControllerDidPause();
    // private System.Void HandlePauseControllerDidResume()
    // Offset: 0xF7AA08
    void HandlePauseControllerDidResume();
    // public System.Void add_levelFailedEvent(System.Action value)
    // Offset: 0xF7A330
    // Implemented from: ILevelEndActions
    // Base method: System.Void ILevelEndActions::add_levelFailedEvent(System.Action value)
    void add_levelFailedEvent(System::Action* value);
    // public System.Void remove_levelFailedEvent(System.Action value)
    // Offset: 0xF7A3D4
    // Implemented from: ILevelEndActions
    // Base method: System.Void ILevelEndActions::remove_levelFailedEvent(System.Action value)
    void remove_levelFailedEvent(System::Action* value);
    // public System.Void add_levelFinishedEvent(System.Action value)
    // Offset: 0xF7A478
    // Implemented from: ILevelEndActions
    // Base method: System.Void ILevelEndActions::add_levelFinishedEvent(System.Action value)
    void add_levelFinishedEvent(System::Action* value);
    // public System.Void remove_levelFinishedEvent(System.Action value)
    // Offset: 0xF7A51C
    // Implemented from: ILevelEndActions
    // Base method: System.Void ILevelEndActions::remove_levelFinishedEvent(System.Action value)
    void remove_levelFinishedEvent(System::Action* value);
    // public System.Void .ctor()
    // Offset: 0xF7AA20
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelGameplayManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardLevelGameplayManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelGameplayManager*, creationType>()));
    }
  }; // StandardLevelGameplayManager
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelGameplayManager), 80 + sizeof(GlobalNamespace::StandardLevelGameplayManager::GameState)> __GlobalNamespace_StandardLevelGameplayManagerSizeCheck;
  static_assert(sizeof(StandardLevelGameplayManager) == 0x54);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelGameplayManager*, "", "StandardLevelGameplayManager");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelGameplayManager::GameState, "", "StandardLevelGameplayManager/GameState");
