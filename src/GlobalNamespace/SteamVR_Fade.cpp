// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: SteamVR_Fade
#include "GlobalNamespace/SteamVR_Fade.hpp"
// Including type: UnityEngine.Material
#include "UnityEngine/Material.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private UnityEngine.Material fadeMaterial
UnityEngine::Material* GlobalNamespace::SteamVR_Fade::_get_fadeMaterial() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<UnityEngine::Material*>("", "SteamVR_Fade", "fadeMaterial"));
}
// Autogenerated static field setter
// Set static field: static private UnityEngine.Material fadeMaterial
void GlobalNamespace::SteamVR_Fade::_set_fadeMaterial(UnityEngine::Material* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SteamVR_Fade", "fadeMaterial", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int32 fadeMaterialColorID
int GlobalNamespace::SteamVR_Fade::_get_fadeMaterialColorID() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>("", "SteamVR_Fade", "fadeMaterialColorID"));
}
// Autogenerated static field setter
// Set static field: static private System.Int32 fadeMaterialColorID
void GlobalNamespace::SteamVR_Fade::_set_fadeMaterialColorID(int value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "SteamVR_Fade", "fadeMaterialColorID", value));
}
// Autogenerated method: SteamVR_Fade.Start
void GlobalNamespace::SteamVR_Fade::Start(UnityEngine::Color newColor, float duration, bool fadeOverlay) {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "SteamVR_Fade", "Start", newColor, duration, fadeOverlay));
}
// Autogenerated method: SteamVR_Fade.View
void GlobalNamespace::SteamVR_Fade::View(UnityEngine::Color newColor, float duration) {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "SteamVR_Fade", "View", newColor, duration));
}
// Autogenerated method: SteamVR_Fade.OnStartFade
void GlobalNamespace::SteamVR_Fade::OnStartFade(UnityEngine::Color newColor, float duration, bool fadeOverlay) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnStartFade", newColor, duration, fadeOverlay));
}
// Autogenerated method: SteamVR_Fade.OnEnable
void GlobalNamespace::SteamVR_Fade::OnEnable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnEnable"));
}
// Autogenerated method: SteamVR_Fade.OnDisable
void GlobalNamespace::SteamVR_Fade::OnDisable() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDisable"));
}
// Autogenerated method: SteamVR_Fade.OnPostRender
void GlobalNamespace::SteamVR_Fade::OnPostRender() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnPostRender"));
}
// Autogenerated method: SteamVR_Fade..ctor
GlobalNamespace::SteamVR_Fade* GlobalNamespace::SteamVR_Fade::New_ctor() {
  return (SteamVR_Fade*)THROW_UNLESS(il2cpp_utils::New("", "SteamVR_Fade"));
}
// Autogenerated method: SteamVR_Fade..cctor
void GlobalNamespace::SteamVR_Fade::_cctor() {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "SteamVR_Fade", ".cctor"));
}
