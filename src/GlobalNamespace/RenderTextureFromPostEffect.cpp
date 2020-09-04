// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: RenderTextureFromPostEffect
#include "GlobalNamespace/RenderTextureFromPostEffect.hpp"
// Including type: UnityEngine.RenderTexture
#include "UnityEngine/RenderTexture.hpp"
// Including type: UnityEngine.Camera
#include "UnityEngine/Camera.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RenderTextureFromPostEffect.get_targetTexture
UnityEngine::RenderTexture* GlobalNamespace::RenderTextureFromPostEffect::get_targetTexture() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::RenderTexture*>(this, "get_targetTexture"));
}
// Autogenerated method: RenderTextureFromPostEffect.Awake
void GlobalNamespace::RenderTextureFromPostEffect::Awake() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Awake"));
}
// Autogenerated method: RenderTextureFromPostEffect.OnRenderImage
void GlobalNamespace::RenderTextureFromPostEffect::OnRenderImage(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dst) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnRenderImage", src, dst));
}
// Autogenerated method: RenderTextureFromPostEffect..ctor
GlobalNamespace::RenderTextureFromPostEffect* GlobalNamespace::RenderTextureFromPostEffect::New_ctor() {
  return (RenderTextureFromPostEffect*)THROW_UNLESS(il2cpp_utils::New("", "RenderTextureFromPostEffect"));
}
