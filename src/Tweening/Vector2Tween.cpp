// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Tweening.Vector2Tween
#include "Tweening/Vector2Tween.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: UnityEngine.AnimationCurve
#include "UnityEngine/AnimationCurve.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: Tweening.Vector2Tween..ctor
Tweening::Vector2Tween* Tweening::Vector2Tween::New_ctor(UnityEngine::Vector2 fromValue, UnityEngine::Vector2 toValue, System::Action_1<UnityEngine::Vector2>* onUpdate, float duration, Tweening::EaseType easeType, float delay) {
  return THROW_UNLESS(il2cpp_utils::New<Vector2Tween*>(fromValue, toValue, onUpdate, duration, easeType, delay));
}
// Autogenerated method: Tweening.Vector2Tween..ctor
Tweening::Vector2Tween* Tweening::Vector2Tween::New_ctor(UnityEngine::Vector2 fromValue, UnityEngine::Vector2 toValue, System::Action_1<UnityEngine::Vector2>* onUpdate, float duration, UnityEngine::AnimationCurve* animationCurve, float delay) {
  return THROW_UNLESS(il2cpp_utils::New<Vector2Tween*>(fromValue, toValue, onUpdate, duration, animationCurve, delay));
}
// Autogenerated method: Tweening.Vector2Tween.GetValue
UnityEngine::Vector2 Tweening::Vector2Tween::GetValue(float t) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector2>(this, "GetValue", t));
}
