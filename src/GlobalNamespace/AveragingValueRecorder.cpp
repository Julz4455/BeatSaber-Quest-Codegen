// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: AveragingValueRecorder
#include "GlobalNamespace/AveragingValueRecorder.hpp"
// Including type: System.Collections.Generic.Queue`1
#include "System/Collections/Generic/Queue_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: AveragingValueRecorder..ctor
GlobalNamespace::AveragingValueRecorder* GlobalNamespace::AveragingValueRecorder::New_ctor(float averageWindowDuration, float historyWindowDuration, float historyValuesPerSecond) {
  return (AveragingValueRecorder*)THROW_UNLESS(il2cpp_utils::New("", "AveragingValueRecorder", averageWindowDuration, historyWindowDuration, historyValuesPerSecond));
}
// Autogenerated method: AveragingValueRecorder.Update
void GlobalNamespace::AveragingValueRecorder::Update(float value, float deltaTime) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Update", value, deltaTime));
}
// Autogenerated method: AveragingValueRecorder.GetAverageValue
float GlobalNamespace::AveragingValueRecorder::GetAverageValue() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "GetAverageValue"));
}
// Autogenerated method: AveragingValueRecorder.GetLastValue
float GlobalNamespace::AveragingValueRecorder::GetLastValue() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "GetLastValue"));
}
// Autogenerated method: AveragingValueRecorder.GetHistoryValues
System::Collections::Generic::Queue_1<float>* GlobalNamespace::AveragingValueRecorder::GetHistoryValues() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::Queue_1<float>*>(this, "GetHistoryValues"));
}
