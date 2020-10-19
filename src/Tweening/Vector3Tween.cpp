// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Tweening.Vector3Tween
#include "Tweening/Vector3Tween.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: UnityEngine.AnimationCurve
#include "UnityEngine/AnimationCurve.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Tweening.Vector3Tween..ctor
Tweening::Vector3Tween* Tweening::Vector3Tween::New_ctor(UnityEngine::Vector3 fromValue, UnityEngine::Vector3 toValue, System::Action_1<UnityEngine::Vector3>* onUpdate, float duration, Tweening::EaseType easeType, float delay) {
  return THROW_UNLESS(il2cpp_utils::New<Vector3Tween*>(fromValue, toValue, onUpdate, duration, easeType, delay));
}
// Autogenerated method: Tweening.Vector3Tween..ctor
Tweening::Vector3Tween* Tweening::Vector3Tween::New_ctor(UnityEngine::Vector3 fromValue, UnityEngine::Vector3 toValue, System::Action_1<UnityEngine::Vector3>* onUpdate, float duration, UnityEngine::AnimationCurve* animationCurve, float delay) {
  return THROW_UNLESS(il2cpp_utils::New<Vector3Tween*>(fromValue, toValue, onUpdate, duration, animationCurve, delay));
}
// Autogenerated method: Tweening.Vector3Tween.GetValue
UnityEngine::Vector3 Tweening::Vector3Tween::GetValue(float t) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "GetValue", t));
}