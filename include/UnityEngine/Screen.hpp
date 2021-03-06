// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Resolution
#include "UnityEngine/Resolution.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: FullScreenMode
  struct FullScreenMode;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Screen
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CBD634
  // [StaticAccessorAttribute] Offset: CBD634
  // [NativeHeaderAttribute] Offset: CBD634
  class Screen : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Screen
    Screen() noexcept {}
    // static public System.Int32 get_width()
    // Offset: 0x1AB1E6C
    static int get_width();
    // static public System.Int32 get_height()
    // Offset: 0x1AB1EA0
    static int get_height();
    // static public System.Single get_dpi()
    // Offset: 0x1AB1ED4
    static float get_dpi();
    // static public System.Boolean get_fullScreen()
    // Offset: 0x1AB1F08
    static bool get_fullScreen();
    // static public System.Void set_fullScreen(System.Boolean value)
    // Offset: 0x1AB1F3C
    static void set_fullScreen(bool value);
    // static public System.Void SetResolution(System.Int32 width, System.Int32 height, UnityEngine.FullScreenMode fullscreenMode, System.Int32 preferredRefreshRate)
    // Offset: 0x1AB1F7C
    static void SetResolution(int width, int height, UnityEngine::FullScreenMode fullscreenMode, int preferredRefreshRate);
    // static public System.Void SetResolution(System.Int32 width, System.Int32 height, System.Boolean fullscreen, System.Int32 preferredRefreshRate)
    // Offset: 0x1AB1FE4
    static void SetResolution(int width, int height, bool fullscreen, int preferredRefreshRate);
    // static public System.Void SetResolution(System.Int32 width, System.Int32 height, System.Boolean fullscreen)
    // Offset: 0x1AB2054
    static void SetResolution(int width, int height, bool fullscreen);
    // static public UnityEngine.Resolution[] get_resolutions()
    // Offset: 0x1AB20B8
    static ::Array<UnityEngine::Resolution>* get_resolutions();
  }; // UnityEngine.Screen
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Screen*, "UnityEngine", "Screen");
