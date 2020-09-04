// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: MainEffectSO
#include "GlobalNamespace/MainEffectSO.hpp"
// Including type: UnityEngine.RenderTexture
#include "UnityEngine/RenderTexture.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MainEffectSO.PreRender
void GlobalNamespace::MainEffectSO::PreRender() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PreRender"));
}
// Autogenerated method: MainEffectSO.Render
void GlobalNamespace::MainEffectSO::Render(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest, float fade) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Render", src, dest, fade));
}
// Autogenerated method: MainEffectSO.PostRender
void GlobalNamespace::MainEffectSO::PostRender(float fade) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PostRender", fade));
}
// Autogenerated method: MainEffectSO.get_hasPostProcessEffect
bool GlobalNamespace::MainEffectSO::get_hasPostProcessEffect() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_hasPostProcessEffect"));
}
// Autogenerated method: MainEffectSO..ctor
GlobalNamespace::MainEffectSO* GlobalNamespace::MainEffectSO::New_ctor() {
  return (MainEffectSO*)THROW_UNLESS(il2cpp_utils::New("", "MainEffectSO"));
}
