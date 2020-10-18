// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RankModel
#include "GlobalNamespace/RankModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: RankModelHelper
  class RankModelHelper : public ::Il2CppObject {
    public:
    // static public RankModel/Rank MaxRankForGameplayModifiers(GameplayModifiers gameplayModifiers, GameplayModifiersModelSO gameplayModifiersModel)
    // Offset: 0xF77624
    static GlobalNamespace::RankModel::Rank MaxRankForGameplayModifiers(GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel);
  }; // RankModelHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RankModelHelper*, "", "RankModelHelper");
#pragma pack(pop)
