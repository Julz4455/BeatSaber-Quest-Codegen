// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: BeatmapObjectsAvoidance
#include "GlobalNamespace/BeatmapObjectsAvoidance.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: IAudioTimeSource
#include "GlobalNamespace/IAudioTimeSource.hpp"
// Including type: IReadonlyBeatmapData
#include "GlobalNamespace/IReadonlyBeatmapData.hpp"
// Including type: BeatmapObjectSpawnController
#include "GlobalNamespace/BeatmapObjectSpawnController.hpp"
// Including type: PlayerTransforms
#include "GlobalNamespace/PlayerTransforms.hpp"
// Including type: BeatmapObjectAvoidanceYOffsetEvaluator
#include "GlobalNamespace/BeatmapObjectAvoidanceYOffsetEvaluator.hpp"
// Including type: BeatmapObjectAvoidancePathEvaluator
#include "GlobalNamespace/BeatmapObjectAvoidancePathEvaluator.hpp"
// Including type: BeatmapObjectAvoidanceTiltEvaluator
#include "GlobalNamespace/BeatmapObjectAvoidanceTiltEvaluator.hpp"
// Including type: BezierSplineEvaluator
#include "GlobalNamespace/BezierSplineEvaluator.hpp"
// Including type: OffsetDirection
#include "GlobalNamespace/OffsetDirection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapObjectsAvoidance.Awake
void GlobalNamespace::BeatmapObjectsAvoidance::Awake() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BeatmapObjectsAvoidance").WithContext("Awake");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Awake", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BeatmapObjectsAvoidance.Start
void GlobalNamespace::BeatmapObjectsAvoidance::Start() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BeatmapObjectsAvoidance").WithContext("Start");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Start", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BeatmapObjectsAvoidance.OnDestroy
void GlobalNamespace::BeatmapObjectsAvoidance::OnDestroy() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BeatmapObjectsAvoidance").WithContext("OnDestroy");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "OnDestroy", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BeatmapObjectsAvoidance.Update
void GlobalNamespace::BeatmapObjectsAvoidance::Update() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BeatmapObjectsAvoidance").WithContext("Update");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "Update", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BeatmapObjectsAvoidance.SetupAndRun
void GlobalNamespace::BeatmapObjectsAvoidance::SetupAndRun() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BeatmapObjectsAvoidance").WithContext("SetupAndRun");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "SetupAndRun", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BeatmapObjectsAvoidance.BuildAnimationCurvePath
bool GlobalNamespace::BeatmapObjectsAvoidance::BuildAnimationCurvePath() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BeatmapObjectsAvoidance").WithContext("BuildAnimationCurvePath");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<bool>(), "BuildAnimationCurvePath", {}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: BeatmapObjectsAvoidance.AdjustPositionWithOffsetDirection
void GlobalNamespace::BeatmapObjectsAvoidance::AdjustPositionWithOffsetDirection(UnityEngine::Vector2& position, int lineIndex, GlobalNamespace::OffsetDirection offsetDirection) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BeatmapObjectsAvoidance").WithContext("AdjustPositionWithOffsetDirection");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "AdjustPositionWithOffsetDirection", {}, ::il2cpp_utils::ExtractTypes(position, lineIndex, offsetDirection)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, position, lineIndex, offsetDirection);
}
// Autogenerated method: BeatmapObjectsAvoidance.HandleBeatmapObjectSpawnControllerDidInit
void GlobalNamespace::BeatmapObjectsAvoidance::HandleBeatmapObjectSpawnControllerDidInit() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BeatmapObjectsAvoidance").WithContext("HandleBeatmapObjectSpawnControllerDidInit");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, il2cpp_utils::NoArgClass<void>(), "HandleBeatmapObjectSpawnControllerDidInit", {}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: BeatmapObjectsAvoidance..ctor
GlobalNamespace::BeatmapObjectsAvoidance* GlobalNamespace::BeatmapObjectsAvoidance::New_ctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("BeatmapObjectsAvoidance").WithContext(".ctor");
  return THROW_UNLESS(::il2cpp_utils::New<BeatmapObjectsAvoidance*>());
}