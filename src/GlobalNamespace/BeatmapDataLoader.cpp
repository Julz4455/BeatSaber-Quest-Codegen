// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapDataLoader
#include "GlobalNamespace/BeatmapDataLoader.hpp"
// Including type: BeatmapDataLoader/BpmChangeData
#include "GlobalNamespace/BeatmapDataLoader_BpmChangeData.hpp"
// Including type: BeatmapDataLoader/<>c__DisplayClass2_0
#include "GlobalNamespace/BeatmapDataLoader_--c__DisplayClass2_0.hpp"
// Including type: BeatmapDataLoader/<>c
#include "GlobalNamespace/BeatmapDataLoader_--c.hpp"
// Including type: BeatmapData
#include "GlobalNamespace/BeatmapData.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: ColorType
#include "GlobalNamespace/ColorType.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
// Including type: BeatmapSaveData/NoteData
#include "GlobalNamespace/BeatmapSaveData_NoteData.hpp"
// Including type: BeatmapSaveData/LongNoteData
#include "GlobalNamespace/BeatmapSaveData_LongNoteData.hpp"
// Including type: BeatmapSaveData/ObstacleData
#include "GlobalNamespace/BeatmapSaveData_ObstacleData.hpp"
// Including type: BeatmapSaveData/EventData
#include "GlobalNamespace/BeatmapSaveData_EventData.hpp"
// Including type: BeatmapSaveData/NoteType
#include "GlobalNamespace/BeatmapSaveData_NoteType.hpp"
// Including type: BeatmapSaveData/LongNoteType
#include "GlobalNamespace/BeatmapSaveData_LongNoteType.hpp"
// Including type: BeatmapSaveData/BeatmapEventType
#include "GlobalNamespace/BeatmapSaveData_BeatmapEventType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapDataLoader.GetRealTimeFromBPMTime
float GlobalNamespace::BeatmapDataLoader::GetRealTimeFromBPMTime(float bmpTime, float bpm, float shuffle, float shufflePeriod) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "GetRealTimeFromBPMTime", bmpTime, bpm, shuffle, shufflePeriod));
}
// Autogenerated method: BeatmapDataLoader.GetBeatmapDataFromBeatmapSaveData
GlobalNamespace::BeatmapData* GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromBeatmapSaveData(System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::NoteData*>* notesSaveData, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::LongNoteData*>* longNotesSaveData, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::ObstacleData*>* obstaclesSaveData, System::Collections::Generic::List_1<GlobalNamespace::BeatmapSaveData::EventData*>* eventsSaveData, float startBpm, float shuffle, float shufflePeriod) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapData*>(this, "GetBeatmapDataFromBeatmapSaveData", notesSaveData, longNotesSaveData, obstaclesSaveData, eventsSaveData, startBpm, shuffle, shufflePeriod));
}
// Autogenerated method: BeatmapDataLoader.GetBeatmapDataFromBinary
GlobalNamespace::BeatmapData* GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromBinary(::Array<uint8_t>* data, float startBPM, float shuffle, float shufflePeriod) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapData*>(this, "GetBeatmapDataFromBinary", data, startBPM, shuffle, shufflePeriod));
}
// Autogenerated method: BeatmapDataLoader.GetBeatmapDataFromJson
GlobalNamespace::BeatmapData* GlobalNamespace::BeatmapDataLoader::GetBeatmapDataFromJson(::Il2CppString* json, float startBPM, float shuffle, float shufflePeriod) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapData*>(this, "GetBeatmapDataFromJson", json, startBPM, shuffle, shufflePeriod));
}
// Autogenerated method: BeatmapDataLoader.ConvertFromBeatmapSaveDataNoteType
GlobalNamespace::ColorType GlobalNamespace::BeatmapDataLoader::ConvertFromBeatmapSaveDataNoteType(GlobalNamespace::BeatmapSaveData::NoteType noteType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::ColorType>("", "BeatmapDataLoader", "ConvertFromBeatmapSaveDataNoteType", noteType));
}
// Autogenerated method: BeatmapDataLoader.ConvertFromBeatmapSaveDataLongNoteType
GlobalNamespace::ColorType GlobalNamespace::BeatmapDataLoader::ConvertFromBeatmapSaveDataLongNoteType(GlobalNamespace::BeatmapSaveData::LongNoteType longNoteType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::ColorType>("", "BeatmapDataLoader", "ConvertFromBeatmapSaveDataLongNoteType", longNoteType));
}
// Autogenerated method: BeatmapDataLoader.ConvertFromBeatmapSaveDataBeatmapEventType
GlobalNamespace::BeatmapEventType GlobalNamespace::BeatmapDataLoader::ConvertFromBeatmapSaveDataBeatmapEventType(GlobalNamespace::BeatmapSaveData::BeatmapEventType beatmapEventType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapEventType>("", "BeatmapDataLoader", "ConvertFromBeatmapSaveDataBeatmapEventType", beatmapEventType));
}
// Autogenerated method: BeatmapDataLoader.<GetBeatmapDataFromBeatmapSaveData>g__ProcessTime|2_3
float GlobalNamespace::BeatmapDataLoader::$GetBeatmapDataFromBeatmapSaveData$g__ProcessTime|2_3(float bpmTime, GlobalNamespace::BeatmapDataLoader::$$c__DisplayClass2_0& param_1) {
  return THROW_UNLESS((il2cpp_utils::RunMethod<float>(this, "<GetBeatmapDataFromBeatmapSaveData>g__ProcessTime|2_3", bpmTime, param_1)));
}
// Autogenerated method: BeatmapDataLoader..ctor
GlobalNamespace::BeatmapDataLoader* GlobalNamespace::BeatmapDataLoader::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<BeatmapDataLoader*>());
}
