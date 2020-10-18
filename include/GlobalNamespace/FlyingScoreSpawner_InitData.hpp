// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FlyingScoreSpawner
#include "GlobalNamespace/FlyingScoreSpawner.hpp"
// Including type: FlyingScoreSpawner/SpawnPosition
#include "GlobalNamespace/FlyingScoreSpawner_SpawnPosition.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FlyingScoreSpawner/InitData
  class FlyingScoreSpawner::InitData : public ::Il2CppObject {
    public:
    // public readonly FlyingScoreSpawner/SpawnPosition spawnPosition
    // Offset: 0x10
    GlobalNamespace::FlyingScoreSpawner::SpawnPosition spawnPosition;
    // Creating conversion operator: operator GlobalNamespace::FlyingScoreSpawner::SpawnPosition
    constexpr operator GlobalNamespace::FlyingScoreSpawner::SpawnPosition() const noexcept {
      return spawnPosition;
    }
    // public System.Void .ctor(FlyingScoreSpawner/SpawnPosition spawnPosition)
    // Offset: 0xF6D944
    static FlyingScoreSpawner::InitData* New_ctor(GlobalNamespace::FlyingScoreSpawner::SpawnPosition spawnPosition);
  }; // FlyingScoreSpawner/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingScoreSpawner::InitData*, "", "FlyingScoreSpawner/InitData");
#pragma pack(pop)
