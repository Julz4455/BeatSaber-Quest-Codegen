// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectManager
#include "GlobalNamespace/BeatmapObjectManager.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: MultiplayerConnectedPlayerGameNoteController
#include "GlobalNamespace/MultiplayerConnectedPlayerGameNoteController.hpp"
// Including type: MultiplayerConnectedPlayerBombNoteController
#include "GlobalNamespace/MultiplayerConnectedPlayerBombNoteController.hpp"
// Including type: MultiplayerConnectedPlayerObstacleController
#include "GlobalNamespace/MultiplayerConnectedPlayerObstacleController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: ObstacleController because it is already included!
  // Forward declaring type: MonoMemoryPoolContainer`1<T>
  template<typename T>
  class MonoMemoryPoolContainer_1;
  // Forward declaring type: ObstacleData
  class ObstacleData;
  // Skipping declaration: NoteController because it is already included!
  // Forward declaring type: NoteCutInfoNetSerializable
  class NoteCutInfoNetSerializable;
  // Forward declaring type: IConnectedPlayerNoteEventManager
  class IConnectedPlayerNoteEventManager;
  // Forward declaring type: NoteData
  class NoteData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MultiplayerConnectedPlayerBeatmapObjectManager
  // [] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerBeatmapObjectManager : public GlobalNamespace::BeatmapObjectManager/*, public System::IDisposable*/ {
    public:
    // Writing base type padding for base size: 0x49 to desired offset: 0x50
    char ___base_padding[0x7] = {};
    // Nested type: GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::InitData
    class InitData;
    // private readonly System.Collections.Generic.HashSet`1<ObstacleController> _emptyObstaclesSet
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleController*>* emptyObstaclesSet;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleController*>*) == 0x8);
    // private System.Nullable`1<System.Single> _firstBasicNoteTime
    // Size: 0xFFFFFFFF
    // Offset: 0x58
    System::Nullable_1<float> firstBasicNoteTime;
    // private readonly MonoMemoryPoolContainer`1<MultiplayerConnectedPlayerGameNoteController> _gameNotePoolContainer
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* gameNotePoolContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>*) == 0x8);
    // private readonly MonoMemoryPoolContainer`1<MultiplayerConnectedPlayerBombNoteController> _bombNotePoolContainer
    // Size: 0x8
    // Offset: 0x68
    GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*>* bombNotePoolContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*>*) == 0x8);
    // private readonly MonoMemoryPoolContainer`1<MultiplayerConnectedPlayerObstacleController> _obstaclePoolContainer
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>* obstaclePoolContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>*) == 0x8);
    // private readonly IConnectedPlayerNoteEventManager _noteEventManager
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::IConnectedPlayerNoteEventManager* noteEventManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayerNoteEventManager*) == 0x8);
    // private readonly MultiplayerConnectedPlayerBeatmapObjectManager/InitData _initData
    // Size: 0x8
    // Offset: 0x80
    GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::InitData*) == 0x8);
    // Creating value type constructor for type: MultiplayerConnectedPlayerBeatmapObjectManager
    MultiplayerConnectedPlayerBeatmapObjectManager(System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleController*>* emptyObstaclesSet_ = {}, System::Nullable_1<float> firstBasicNoteTime_ = {}, GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerGameNoteController*>* gameNotePoolContainer_ = {}, GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerBombNoteController*>* bombNotePoolContainer_ = {}, GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::MultiplayerConnectedPlayerObstacleController*>* obstaclePoolContainer_ = {}, GlobalNamespace::IConnectedPlayerNoteEventManager* noteEventManager_ = {}, GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::InitData* initData_ = {}) noexcept : emptyObstaclesSet{emptyObstaclesSet_}, firstBasicNoteTime{firstBasicNoteTime_}, gameNotePoolContainer{gameNotePoolContainer_}, bombNotePoolContainer{bombNotePoolContainer_}, obstaclePoolContainer{obstaclePoolContainer_}, noteEventManager{noteEventManager_}, initData{initData_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // private System.Void .ctor(MultiplayerConnectedPlayerBeatmapObjectManager/InitData initData, IConnectedPlayerNoteEventManager noteEventManager, MultiplayerConnectedPlayerGameNoteController/Pool gameNotePool, MultiplayerConnectedPlayerBombNoteController/Pool bombNotePool, MultiplayerConnectedPlayerObstacleController/Pool obstaclePool)
    // Offset: 0x1017EF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerBeatmapObjectManager* New_ctor(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::InitData* initData, GlobalNamespace::IConnectedPlayerNoteEventManager* noteEventManager, GlobalNamespace::MultiplayerConnectedPlayerGameNoteController::Pool* gameNotePool, GlobalNamespace::MultiplayerConnectedPlayerBombNoteController::Pool* bombNotePool, GlobalNamespace::MultiplayerConnectedPlayerObstacleController::Pool* obstaclePool) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerBeatmapObjectManager*, creationType>(initData, noteEventManager, gameNotePool, bombNotePool, obstaclePool)));
    }
    // private System.Void HandleMultiplayerNoteEventManagerNoteWasCut(NoteCutInfoNetSerializable noteCutInfo)
    // Offset: 0x1019088
    void HandleMultiplayerNoteEventManagerNoteWasCut(GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);
    // static private System.Boolean AreNotesSame(NoteController noteController, NoteCutInfoNetSerializable noteCutInfo)
    // Offset: 0x10192C0
    static bool AreNotesSame(GlobalNamespace::NoteController* noteController, GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo);
    // public override System.Collections.Generic.HashSet`1<ObstacleController> get_activeObstacleControllers()
    // Offset: 0x1017EE8
    // Implemented from: BeatmapObjectManager
    // Base method: System.Collections.Generic.HashSet`1<ObstacleController> BeatmapObjectManager::get_activeObstacleControllers()
    System::Collections::Generic::HashSet_1<GlobalNamespace::ObstacleController*>* get_activeObstacleControllers();
    // public System.Void Dispose()
    // Offset: 0x1018110
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // protected override ObstacleController SpawnObstacleInternal(ObstacleData obstacleData, BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    // Offset: 0x1018210
    // Implemented from: BeatmapObjectManager
    // Base method: ObstacleController BeatmapObjectManager::SpawnObstacleInternal(ObstacleData obstacleData, BeatmapObjectSpawnMovementData/ObstacleSpawnData obstacleSpawnData, System.Single rotation)
    GlobalNamespace::ObstacleController* SpawnObstacleInternal(GlobalNamespace::ObstacleData* obstacleData, GlobalNamespace::BeatmapObjectSpawnMovementData::ObstacleSpawnData obstacleSpawnData, float rotation);
    // protected override NoteController SpawnBombNoteInternal(NoteData bombNoteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation)
    // Offset: 0x10182E8
    // Implemented from: BeatmapObjectManager
    // Base method: NoteController BeatmapObjectManager::SpawnBombNoteInternal(NoteData bombNoteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation)
    GlobalNamespace::NoteController* SpawnBombNoteInternal(GlobalNamespace::NoteData* bombNoteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation);
    // protected override NoteController SpawnBasicNoteInternal(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation, System.Single cutDirectionAngleOffset)
    // Offset: 0x1018400
    // Implemented from: BeatmapObjectManager
    // Base method: NoteController BeatmapObjectManager::SpawnBasicNoteInternal(NoteData noteData, BeatmapObjectSpawnMovementData/NoteSpawnData noteSpawnData, System.Single rotation, System.Single cutDirectionAngleOffset)
    GlobalNamespace::NoteController* SpawnBasicNoteInternal(GlobalNamespace::NoteData* noteData, GlobalNamespace::BeatmapObjectSpawnMovementData::NoteSpawnData noteSpawnData, float rotation, float cutDirectionAngleOffset);
    // protected override System.Void DespawnInternal(NoteController noteController)
    // Offset: 0x101867C
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::DespawnInternal(NoteController noteController)
    void DespawnInternal(GlobalNamespace::NoteController* noteController);
    // protected override System.Void DespawnInternal(ObstacleController obstacleController)
    // Offset: 0x1018770
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::DespawnInternal(ObstacleController obstacleController)
    void DespawnInternal(GlobalNamespace::ObstacleController* obstacleController);
    // public override System.Void DissolveAllObjects()
    // Offset: 0x1018820
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::DissolveAllObjects()
    void DissolveAllObjects();
    // public override System.Void HideAllBeatmapObjects(System.Boolean hide)
    // Offset: 0x1018AF0
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::HideAllBeatmapObjects(System.Boolean hide)
    void HideAllBeatmapObjects(bool hide);
    // public override System.Void PauseAllBeatmapObjects(System.Boolean pause)
    // Offset: 0x1018DBC
    // Implemented from: BeatmapObjectManager
    // Base method: System.Void BeatmapObjectManager::PauseAllBeatmapObjects(System.Boolean pause)
    void PauseAllBeatmapObjects(bool pause);
  }; // MultiplayerConnectedPlayerBeatmapObjectManager
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerBeatmapObjectManager*, "", "MultiplayerConnectedPlayerBeatmapObjectManager");
