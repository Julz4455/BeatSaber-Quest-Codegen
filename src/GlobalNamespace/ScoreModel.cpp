// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: ScoreModel
#include "GlobalNamespace/ScoreModel.hpp"
// Including type: NoteCutInfo
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public System.Int32 kMaxMultiplier
int GlobalNamespace::ScoreModel::_get_kMaxMultiplier() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "ScoreModel", "kMaxMultiplier"));
}
// Autogenerated static field setter
// Set static field: static public System.Int32 kMaxMultiplier
void GlobalNamespace::ScoreModel::_set_kMaxMultiplier(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "ScoreModel", "kMaxMultiplier", value));
}
// Autogenerated static field getter
// Get static field: static public System.Int32 kMaxBeforeCutSwingRawScore
int GlobalNamespace::ScoreModel::_get_kMaxBeforeCutSwingRawScore() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "ScoreModel", "kMaxBeforeCutSwingRawScore"));
}
// Autogenerated static field setter
// Set static field: static public System.Int32 kMaxBeforeCutSwingRawScore
void GlobalNamespace::ScoreModel::_set_kMaxBeforeCutSwingRawScore(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "ScoreModel", "kMaxBeforeCutSwingRawScore", value));
}
// Autogenerated static field getter
// Get static field: static public System.Int32 kMaxCutDistanceRawScore
int GlobalNamespace::ScoreModel::_get_kMaxCutDistanceRawScore() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "ScoreModel", "kMaxCutDistanceRawScore"));
}
// Autogenerated static field setter
// Set static field: static public System.Int32 kMaxCutDistanceRawScore
void GlobalNamespace::ScoreModel::_set_kMaxCutDistanceRawScore(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "ScoreModel", "kMaxCutDistanceRawScore", value));
}
// Autogenerated static field getter
// Get static field: static public System.Int32 kMaxAfterCutSwingRawScore
int GlobalNamespace::ScoreModel::_get_kMaxAfterCutSwingRawScore() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "ScoreModel", "kMaxAfterCutSwingRawScore"));
}
// Autogenerated static field setter
// Set static field: static public System.Int32 kMaxAfterCutSwingRawScore
void GlobalNamespace::ScoreModel::_set_kMaxAfterCutSwingRawScore(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "ScoreModel", "kMaxAfterCutSwingRawScore", value));
}
// Autogenerated static field getter
// Get static field: static public System.Int32 kMaxCutRawScore
int GlobalNamespace::ScoreModel::_get_kMaxCutRawScore() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "ScoreModel", "kMaxCutRawScore"));
}
// Autogenerated static field setter
// Set static field: static public System.Int32 kMaxCutRawScore
void GlobalNamespace::ScoreModel::_set_kMaxCutRawScore(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "ScoreModel", "kMaxCutRawScore", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kSwingScorePart
float GlobalNamespace::ScoreModel::_get_kSwingScorePart() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "ScoreModel", "kSwingScorePart"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kSwingScorePart
void GlobalNamespace::ScoreModel::_set_kSwingScorePart(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "ScoreModel", "kSwingScorePart", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kDistanceToCenterScorePart
float GlobalNamespace::ScoreModel::_get_kDistanceToCenterScorePart() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "ScoreModel", "kDistanceToCenterScorePart"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kDistanceToCenterScorePart
void GlobalNamespace::ScoreModel::_set_kDistanceToCenterScorePart(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "ScoreModel", "kDistanceToCenterScorePart", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kMaxDistanceForDistanceToCenterScore
float GlobalNamespace::ScoreModel::_get_kMaxDistanceForDistanceToCenterScore() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "ScoreModel", "kMaxDistanceForDistanceToCenterScore"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kMaxDistanceForDistanceToCenterScore
void GlobalNamespace::ScoreModel::_set_kMaxDistanceForDistanceToCenterScore(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "ScoreModel", "kMaxDistanceForDistanceToCenterScore", value));
}
// Autogenerated method: ScoreModel.MaxRawScoreForNumberOfNotes
int GlobalNamespace::ScoreModel::MaxRawScoreForNumberOfNotes(int noteCount) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("", "ScoreModel", "MaxRawScoreForNumberOfNotes", noteCount));
}
// Autogenerated method: ScoreModel.RawScoreWithoutMultiplier
void GlobalNamespace::ScoreModel::RawScoreWithoutMultiplier(GlobalNamespace::NoteCutInfo* noteCutInfo, int& beforeCutRawScore, int& afterCutRawScore, int& cutDistanceRawScore) {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "ScoreModel", "RawScoreWithoutMultiplier", noteCutInfo, beforeCutRawScore, afterCutRawScore, cutDistanceRawScore));
}
// Autogenerated method: ScoreModel.GetModifiedScoreForGameplayModifiersScoreMultiplier
int GlobalNamespace::ScoreModel::GetModifiedScoreForGameplayModifiersScoreMultiplier(int rawScore, float gameplayModifiersScoreMultiplier) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("", "ScoreModel", "GetModifiedScoreForGameplayModifiersScoreMultiplier", rawScore, gameplayModifiersScoreMultiplier));
}
// Autogenerated method: ScoreModel..ctor
GlobalNamespace::ScoreModel* GlobalNamespace::ScoreModel::New_ctor() {
  return (ScoreModel*)THROW_UNLESS(il2cpp_utils::New("", "ScoreModel"));
}
