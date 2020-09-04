// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: ScreenCaptureCache
#include "GlobalNamespace/ScreenCaptureCache.hpp"
// Including type: UnityEngine.Texture2D
#include "UnityEngine/Texture2D.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: ScreenCaptureCache.GetLastScreenshot
UnityEngine::Texture2D* GlobalNamespace::ScreenCaptureCache::GetLastScreenshot(GlobalNamespace::ScreenCaptureCache::ScreenshotType screenshotType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Texture2D*>(this, "GetLastScreenshot", screenshotType));
}
// Autogenerated method: ScreenCaptureCache.StoreScreenshot
void GlobalNamespace::ScreenCaptureCache::StoreScreenshot(GlobalNamespace::ScreenCaptureCache::ScreenshotType screenshotType, UnityEngine::Texture2D* texture) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StoreScreenshot", screenshotType, texture));
}
// Autogenerated method: ScreenCaptureCache..ctor
GlobalNamespace::ScreenCaptureCache* GlobalNamespace::ScreenCaptureCache::New_ctor() {
  return (ScreenCaptureCache*)THROW_UNLESS(il2cpp_utils::New("", "ScreenCaptureCache"));
}
