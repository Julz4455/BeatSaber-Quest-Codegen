// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Animation
#include "UnityEngine/Animation.hpp"
// Including type: UnityEngine.Animation/Enumerator
#include "UnityEngine/Animation_Enumerator.hpp"
// Including type: UnityEngine.AnimationState
#include "UnityEngine/AnimationState.hpp"
// Including type: UnityEngine.PlayMode
#include "UnityEngine/PlayMode.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Animation.get_Item
UnityEngine::AnimationState* UnityEngine::Animation::get_Item(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AnimationState*>(this, "get_Item", name));
}
// Autogenerated method: UnityEngine.Animation.CrossFade
void UnityEngine::Animation::CrossFade(::Il2CppString* animation, float fadeLength, UnityEngine::PlayMode mode) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CrossFade", animation, fadeLength, mode));
}
// Autogenerated method: UnityEngine.Animation.CrossFade
void UnityEngine::Animation::CrossFade(::Il2CppString* animation, float fadeLength) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CrossFade", animation, fadeLength));
}
// Autogenerated method: UnityEngine.Animation.GetState
UnityEngine::AnimationState* UnityEngine::Animation::GetState(::Il2CppString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AnimationState*>(this, "GetState", name));
}
// Autogenerated method: UnityEngine.Animation.GetStateAtIndex
UnityEngine::AnimationState* UnityEngine::Animation::GetStateAtIndex(int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AnimationState*>(this, "GetStateAtIndex", index));
}
// Autogenerated method: UnityEngine.Animation.GetStateCount
int UnityEngine::Animation::GetStateCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetStateCount"));
}
// Autogenerated method: UnityEngine.Animation.get_animatePhysics
bool UnityEngine::Animation::get_animatePhysics() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_animatePhysics"));
}
// Autogenerated method: UnityEngine.Animation.GetEnumerator
System::Collections::IEnumerator* UnityEngine::Animation::GetEnumerator() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "GetEnumerator"));
}
System::Collections::IEnumerator* UnityEngine::Animation::System_Collections_IEnumerable_GetEnumerator() {
  return UnityEngine::Animation::GetEnumerator();
}
