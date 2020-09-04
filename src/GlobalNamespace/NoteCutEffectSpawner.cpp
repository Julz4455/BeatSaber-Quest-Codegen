// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: NoteCutEffectSpawner
#include "GlobalNamespace/NoteCutEffectSpawner.hpp"
// Including type: NoteCutEffectSpawner/InitData
#include "GlobalNamespace/NoteCutEffectSpawner_InitData.hpp"
// Including type: NoteCutParticlesEffect
#include "GlobalNamespace/NoteCutParticlesEffect.hpp"
// Including type: NoteDebrisSpawner
#include "GlobalNamespace/NoteDebrisSpawner.hpp"
// Including type: NoteCutHapticEffect
#include "GlobalNamespace/NoteCutHapticEffect.hpp"
// Including type: FlyingSpriteSpawner
#include "GlobalNamespace/FlyingSpriteSpawner.hpp"
// Including type: FlyingScoreSpawner
#include "GlobalNamespace/FlyingScoreSpawner.hpp"
// Including type: ShockwaveEffect
#include "GlobalNamespace/ShockwaveEffect.hpp"
// Including type: BombExplosionEffect
#include "GlobalNamespace/BombExplosionEffect.hpp"
// Including type: ColorManager
#include "GlobalNamespace/ColorManager.hpp"
// Including type: BeatmapObjectManager
#include "GlobalNamespace/BeatmapObjectManager.hpp"
// Including type: ScoreController
#include "GlobalNamespace/ScoreController.hpp"
// Including type: INoteController
#include "GlobalNamespace/INoteController.hpp"
// Including type: NoteCutInfo
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: NoteCutEffectSpawner.Start
void GlobalNamespace::NoteCutEffectSpawner::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: NoteCutEffectSpawner.OnDestroy
void GlobalNamespace::NoteCutEffectSpawner::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: NoteCutEffectSpawner.HandleNoteWasCutEvent
void GlobalNamespace::NoteCutEffectSpawner::HandleNoteWasCutEvent(GlobalNamespace::INoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleNoteWasCutEvent", noteController, noteCutInfo));
}
// Autogenerated method: NoteCutEffectSpawner.SpawnNoteCutEffect
void GlobalNamespace::NoteCutEffectSpawner::SpawnNoteCutEffect(UnityEngine::Vector3 pos, GlobalNamespace::INoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SpawnNoteCutEffect", pos, noteController, noteCutInfo));
}
// Autogenerated method: NoteCutEffectSpawner.SpawnBombCutEffect
void GlobalNamespace::NoteCutEffectSpawner::SpawnBombCutEffect(UnityEngine::Vector3 pos, GlobalNamespace::INoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SpawnBombCutEffect", pos, noteController, noteCutInfo));
}
// Autogenerated method: NoteCutEffectSpawner..ctor
GlobalNamespace::NoteCutEffectSpawner* GlobalNamespace::NoteCutEffectSpawner::New_ctor() {
  return (NoteCutEffectSpawner*)THROW_UNLESS(il2cpp_utils::New("", "NoteCutEffectSpawner"));
}
