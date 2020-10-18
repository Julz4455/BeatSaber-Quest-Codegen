// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: HMUI.ViewControllerTransitionHelpers
#include "HMUI/ViewControllerTransitionHelpers.hpp"
// Including type: HMUI.ViewControllerTransitionHelpers/<DoPresentTransition>d__3
#include "HMUI/ViewControllerTransitionHelpers_-DoPresentTransition-d__3.hpp"
// Including type: HMUI.ViewControllerTransitionHelpers/<DoDismissTransition>d__4
#include "HMUI/ViewControllerTransitionHelpers_-DoDismissTransition-d__4.hpp"
// Including type: HMUI.ViewControllerTransitionHelpers/<>c__DisplayClass5_0
#include "HMUI/ViewControllerTransitionHelpers_--c__DisplayClass5_0.hpp"
// Including type: HMUI.ViewControllerTransitionHelpers/<DoHorizontalTransition>d__5
#include "HMUI/ViewControllerTransitionHelpers_-DoHorizontalTransition-d__5.hpp"
// Including type: HMUI.ViewControllerTransitionHelpers/<>c__DisplayClass6_0
#include "HMUI/ViewControllerTransitionHelpers_--c__DisplayClass6_0.hpp"
// Including type: HMUI.ViewControllerTransitionHelpers/<DoVerticalTransition>d__6
#include "HMUI/ViewControllerTransitionHelpers_-DoVerticalTransition-d__6.hpp"
// Including type: HMUI.ViewControllerTransitionHelpers/<AnimationCoroutine>d__8
#include "HMUI/ViewControllerTransitionHelpers_-AnimationCoroutine-d__8.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: HMUI.ViewController/AnimationDirection
#include "HMUI/ViewController_AnimationDirection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Single kTransitionDuration
float HMUI::ViewControllerTransitionHelpers::_get_kTransitionDuration() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("HMUI", "ViewControllerTransitionHelpers", "kTransitionDuration"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kTransitionDuration
void HMUI::ViewControllerTransitionHelpers::_set_kTransitionDuration(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("HMUI", "ViewControllerTransitionHelpers", "kTransitionDuration", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kHorizontalTransitionMoveOffset
float HMUI::ViewControllerTransitionHelpers::_get_kHorizontalTransitionMoveOffset() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("HMUI", "ViewControllerTransitionHelpers", "kHorizontalTransitionMoveOffset"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kHorizontalTransitionMoveOffset
void HMUI::ViewControllerTransitionHelpers::_set_kHorizontalTransitionMoveOffset(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("HMUI", "ViewControllerTransitionHelpers", "kHorizontalTransitionMoveOffset", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kVerticalTransitionMoveOffset
float HMUI::ViewControllerTransitionHelpers::_get_kVerticalTransitionMoveOffset() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("HMUI", "ViewControllerTransitionHelpers", "kVerticalTransitionMoveOffset"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kVerticalTransitionMoveOffset
void HMUI::ViewControllerTransitionHelpers::_set_kVerticalTransitionMoveOffset(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("HMUI", "ViewControllerTransitionHelpers", "kVerticalTransitionMoveOffset", value));
}
// Autogenerated method: HMUI.ViewControllerTransitionHelpers.DoPresentTransition
System::Collections::IEnumerator* HMUI::ViewControllerTransitionHelpers::DoPresentTransition(HMUI::ViewController* toPresentViewController, HMUI::ViewController* toDismissViewController, HMUI::ViewController::AnimationDirection animationDirection, float moveOffsetMultiplier) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>("HMUI", "ViewControllerTransitionHelpers", "DoPresentTransition", toPresentViewController, toDismissViewController, animationDirection, moveOffsetMultiplier));
}
// Autogenerated method: HMUI.ViewControllerTransitionHelpers.DoDismissTransition
System::Collections::IEnumerator* HMUI::ViewControllerTransitionHelpers::DoDismissTransition(HMUI::ViewController* toPresentViewController, HMUI::ViewController* toDismissViewController, HMUI::ViewController::AnimationDirection animationDirection, float moveOffsetMultiplier) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>("HMUI", "ViewControllerTransitionHelpers", "DoDismissTransition", toPresentViewController, toDismissViewController, animationDirection, moveOffsetMultiplier));
}
// Autogenerated method: HMUI.ViewControllerTransitionHelpers.DoHorizontalTransition
System::Collections::IEnumerator* HMUI::ViewControllerTransitionHelpers::DoHorizontalTransition(HMUI::ViewController* toPresentViewController, HMUI::ViewController* toDismissViewController, float moveOffsetMultiplier) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>("HMUI", "ViewControllerTransitionHelpers", "DoHorizontalTransition", toPresentViewController, toDismissViewController, moveOffsetMultiplier));
}
// Autogenerated method: HMUI.ViewControllerTransitionHelpers.DoVerticalTransition
System::Collections::IEnumerator* HMUI::ViewControllerTransitionHelpers::DoVerticalTransition(HMUI::ViewController* toPresentViewController, HMUI::ViewController* toDismissViewController, float moveOffsetMultiplier) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>("HMUI", "ViewControllerTransitionHelpers", "DoVerticalTransition", toPresentViewController, toDismissViewController, moveOffsetMultiplier));
}
// Autogenerated method: HMUI.ViewControllerTransitionHelpers.ImmediateTransition
void HMUI::ViewControllerTransitionHelpers::ImmediateTransition(HMUI::ViewController* toPresentViewController, HMUI::ViewController* toDismissViewController) {
  THROW_UNLESS(il2cpp_utils::RunMethod("HMUI", "ViewControllerTransitionHelpers", "ImmediateTransition", toPresentViewController, toDismissViewController));
}
// Autogenerated method: HMUI.ViewControllerTransitionHelpers.AnimationCoroutine
System::Collections::IEnumerator* HMUI::ViewControllerTransitionHelpers::AnimationCoroutine(System::Action_1<float>* transitionAnimation) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>("HMUI", "ViewControllerTransitionHelpers", "AnimationCoroutine", transitionAnimation));
}
// Autogenerated method: HMUI.ViewControllerTransitionHelpers..ctor
HMUI::ViewControllerTransitionHelpers* HMUI::ViewControllerTransitionHelpers::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<ViewControllerTransitionHelpers*>());
}
