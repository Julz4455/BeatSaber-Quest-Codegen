// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: GetActiveRT
#include "GlobalNamespace/GetActiveRT.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: GetActiveRT.get_ColorBuffer
UnityEngine::RenderBuffer GlobalNamespace::GetActiveRT::get_ColorBuffer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::RenderBuffer>(this, "get_ColorBuffer"));
}
// Autogenerated method: GetActiveRT.get_DepthBuffer
UnityEngine::RenderBuffer GlobalNamespace::GetActiveRT::get_DepthBuffer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::RenderBuffer>(this, "get_DepthBuffer"));
}
// Autogenerated method: GetActiveRT.OnPreRender
void GlobalNamespace::GetActiveRT::OnPreRender() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnPreRender"));
}
// Autogenerated method: GetActiveRT..ctor
GlobalNamespace::GetActiveRT* GlobalNamespace::GetActiveRT::New_ctor() {
  return (GetActiveRT*)THROW_UNLESS(il2cpp_utils::New("", "GetActiveRT"));
}
