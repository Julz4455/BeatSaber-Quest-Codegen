// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FilteredBeatmapLevel
#include "GlobalNamespace/FilteredBeatmapLevel.hpp"
// Including type: FilteredBeatmapLevel/FilteredBeatmapLevelData
#include "GlobalNamespace/FilteredBeatmapLevel_FilteredBeatmapLevelData.hpp"
// Including type: PreviewDifficultyBeatmapSet
#include "GlobalNamespace/PreviewDifficultyBeatmapSet.hpp"
// Including type: IBeatmapLevelData
#include "GlobalNamespace/IBeatmapLevelData.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
// Including type: BeatmapCharacteristicSO
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
// Including type: EnvironmentInfoSO
#include "GlobalNamespace/EnvironmentInfoSO.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: UnityEngine.AudioClip
#include "UnityEngine/AudioClip.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: UnityEngine.Sprite
#include "UnityEngine/Sprite.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: FilteredBeatmapLevel.set_previewDifficultyBeatmapSets
void GlobalNamespace::FilteredBeatmapLevel::set_previewDifficultyBeatmapSets(::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_previewDifficultyBeatmapSets", value));
}
// Autogenerated method: FilteredBeatmapLevel.set_beatmapLevelData
void GlobalNamespace::FilteredBeatmapLevel::set_beatmapLevelData(GlobalNamespace::IBeatmapLevelData* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_beatmapLevelData", value));
}
// Autogenerated method: FilteredBeatmapLevel.get_isEmpty
bool GlobalNamespace::FilteredBeatmapLevel::get_isEmpty() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isEmpty"));
}
// Autogenerated method: FilteredBeatmapLevel..ctor
GlobalNamespace::FilteredBeatmapLevel* GlobalNamespace::FilteredBeatmapLevel::New_ctor(GlobalNamespace::IBeatmapLevel* beatmapLevel, GlobalNamespace::BeatmapDifficultyMask allowedBeatmapDifficultyMask, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapCharacteristicSO*>* notAllowedCharacteristics) {
  return THROW_UNLESS(il2cpp_utils::New<FilteredBeatmapLevel*>(beatmapLevel, allowedBeatmapDifficultyMask, notAllowedCharacteristics));
}
// Autogenerated method: FilteredBeatmapLevel.get_levelID
::Il2CppString* GlobalNamespace::FilteredBeatmapLevel::get_levelID() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_levelID"));
}
// Autogenerated method: FilteredBeatmapLevel.get_songName
::Il2CppString* GlobalNamespace::FilteredBeatmapLevel::get_songName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_songName"));
}
// Autogenerated method: FilteredBeatmapLevel.get_songSubName
::Il2CppString* GlobalNamespace::FilteredBeatmapLevel::get_songSubName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_songSubName"));
}
// Autogenerated method: FilteredBeatmapLevel.get_songAuthorName
::Il2CppString* GlobalNamespace::FilteredBeatmapLevel::get_songAuthorName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_songAuthorName"));
}
// Autogenerated method: FilteredBeatmapLevel.get_levelAuthorName
::Il2CppString* GlobalNamespace::FilteredBeatmapLevel::get_levelAuthorName() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_levelAuthorName"));
}
// Autogenerated method: FilteredBeatmapLevel.get_beatsPerMinute
float GlobalNamespace::FilteredBeatmapLevel::get_beatsPerMinute() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_beatsPerMinute"));
}
// Autogenerated method: FilteredBeatmapLevel.get_songTimeOffset
float GlobalNamespace::FilteredBeatmapLevel::get_songTimeOffset() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_songTimeOffset"));
}
// Autogenerated method: FilteredBeatmapLevel.get_shuffle
float GlobalNamespace::FilteredBeatmapLevel::get_shuffle() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_shuffle"));
}
// Autogenerated method: FilteredBeatmapLevel.get_shufflePeriod
float GlobalNamespace::FilteredBeatmapLevel::get_shufflePeriod() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_shufflePeriod"));
}
// Autogenerated method: FilteredBeatmapLevel.get_previewStartTime
float GlobalNamespace::FilteredBeatmapLevel::get_previewStartTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_previewStartTime"));
}
// Autogenerated method: FilteredBeatmapLevel.get_previewDuration
float GlobalNamespace::FilteredBeatmapLevel::get_previewDuration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_previewDuration"));
}
// Autogenerated method: FilteredBeatmapLevel.get_songDuration
float GlobalNamespace::FilteredBeatmapLevel::get_songDuration() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_songDuration"));
}
// Autogenerated method: FilteredBeatmapLevel.get_environmentInfo
GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::FilteredBeatmapLevel::get_environmentInfo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::EnvironmentInfoSO*>(this, "get_environmentInfo"));
}
// Autogenerated method: FilteredBeatmapLevel.get_allDirectionsEnvironmentInfo
GlobalNamespace::EnvironmentInfoSO* GlobalNamespace::FilteredBeatmapLevel::get_allDirectionsEnvironmentInfo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::EnvironmentInfoSO*>(this, "get_allDirectionsEnvironmentInfo"));
}
// Autogenerated method: FilteredBeatmapLevel.get_previewDifficultyBeatmapSets
::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* GlobalNamespace::FilteredBeatmapLevel::get_previewDifficultyBeatmapSets() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>*>(this, "get_previewDifficultyBeatmapSets"));
}
// Autogenerated method: FilteredBeatmapLevel.GetPreviewAudioClipAsync
System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* GlobalNamespace::FilteredBeatmapLevel::GetPreviewAudioClipAsync(System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>*>(this, "GetPreviewAudioClipAsync", cancellationToken));
}
// Autogenerated method: FilteredBeatmapLevel.GetCoverImageAsync
System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* GlobalNamespace::FilteredBeatmapLevel::GetCoverImageAsync(System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<UnityEngine::Sprite*>*>(this, "GetCoverImageAsync", cancellationToken));
}
// Autogenerated method: FilteredBeatmapLevel.get_beatmapLevelData
GlobalNamespace::IBeatmapLevelData* GlobalNamespace::FilteredBeatmapLevel::get_beatmapLevelData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IBeatmapLevelData*>(this, "get_beatmapLevelData"));
}
