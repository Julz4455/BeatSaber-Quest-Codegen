// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: UnityEngine.Random
#include "UnityEngine/Random.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Random.InitState
void UnityEngine::Random::InitState(int seed) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Random", "InitState", seed));
}
// Autogenerated method: UnityEngine.Random.Range
float UnityEngine::Random::Range(float min, float max) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("UnityEngine", "Random", "Range", min, max));
}
// Autogenerated method: UnityEngine.Random.Range
int UnityEngine::Random::Range(int min, int max) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine", "Random", "Range", min, max));
}
// Autogenerated method: UnityEngine.Random.RandomRangeInt
int UnityEngine::Random::RandomRangeInt(int min, int max) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("UnityEngine", "Random", "RandomRangeInt", min, max));
}
// Autogenerated method: UnityEngine.Random.get_value
float UnityEngine::Random::get_value() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>("UnityEngine", "Random", "get_value"));
}
// Autogenerated method: UnityEngine.Random.get_insideUnitSphere
UnityEngine::Vector3 UnityEngine::Random::get_insideUnitSphere() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("UnityEngine", "Random", "get_insideUnitSphere"));
}
// Autogenerated method: UnityEngine.Random.get_onUnitSphere
UnityEngine::Vector3 UnityEngine::Random::get_onUnitSphere() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("UnityEngine", "Random", "get_onUnitSphere"));
}
// Autogenerated method: UnityEngine.Random.get_insideUnitSphere_Injected
void UnityEngine::Random::get_insideUnitSphere_Injected(UnityEngine::Vector3& ret) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Random", "get_insideUnitSphere_Injected", ret));
}
// Autogenerated method: UnityEngine.Random.get_onUnitSphere_Injected
void UnityEngine::Random::get_onUnitSphere_Injected(UnityEngine::Vector3& ret) {
  THROW_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Random", "get_onUnitSphere_Injected", ret));
}
