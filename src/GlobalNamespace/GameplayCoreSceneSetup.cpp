// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: GameplayCoreSceneSetup
#include "GlobalNamespace/GameplayCoreSceneSetup.hpp"
// Including type: BeatmapObjectSpawnControllerPlayerHeightSetter
#include "GlobalNamespace/BeatmapObjectSpawnControllerPlayerHeightSetter.hpp"
// Including type: PlayerHeightDetector
#include "GlobalNamespace/PlayerHeightDetector.hpp"
// Including type: BeatLineManager
#include "GlobalNamespace/BeatLineManager.hpp"
// Including type: AudioManagerSO
#include "GlobalNamespace/AudioManagerSO.hpp"
// Including type: BeatmapCharacteristicSO
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
// Including type: EffectPoolsInstaller
#include "GlobalNamespace/EffectPoolsInstaller.hpp"
// Including type: PlayerSpecificSettings
#include "GlobalNamespace/PlayerSpecificSettings.hpp"
// Including type: GameplayCoreSceneSetupData
#include "GlobalNamespace/GameplayCoreSceneSetupData.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
// Including type: GameplayCoreHUDInstaller/HudType
#include "GlobalNamespace/GameplayCoreHUDInstaller_HudType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: GameplayCoreSceneSetup.GetGameplayCoreHUDTypeForEnvironmentSize
GlobalNamespace::GameplayCoreHUDInstaller::HudType GlobalNamespace::GameplayCoreSceneSetup::GetGameplayCoreHUDTypeForEnvironmentSize(GlobalNamespace::EnvironmentSizeData::Width environmentWidth) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::GameplayCoreHUDInstaller::HudType>(this, "GetGameplayCoreHUDTypeForEnvironmentSize", environmentWidth));
}
// Autogenerated method: GameplayCoreSceneSetup.UseOneSaberOnly
bool GlobalNamespace::GameplayCoreSceneSetup::UseOneSaberOnly(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::SaberType& saberType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "UseOneSaberOnly", beatmapCharacteristic, playerSpecificSettings, saberType));
}
// Autogenerated method: GameplayCoreSceneSetup.InstallBindings
void GlobalNamespace::GameplayCoreSceneSetup::InstallBindings() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InstallBindings"));
}
// Autogenerated method: GameplayCoreSceneSetup..ctor
GlobalNamespace::GameplayCoreSceneSetup* GlobalNamespace::GameplayCoreSceneSetup::New_ctor() {
  return (GameplayCoreSceneSetup*)THROW_UNLESS(il2cpp_utils::New("", "GameplayCoreSceneSetup"));
}
