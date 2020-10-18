// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Resolution
  struct Resolution;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Screen
  class Screen : public ::Il2CppObject {
    public:
    // static public System.Int32 get_width()
    // Offset: 0x198EF34
    static int get_width();
    // static public System.Int32 get_height()
    // Offset: 0x198EF68
    static int get_height();
    // static public System.Single get_dpi()
    // Offset: 0x198EF9C
    static float get_dpi();
    // static public System.Boolean get_fullScreen()
    // Offset: 0x198EFD0
    static bool get_fullScreen();
    // static public System.Void set_fullScreen(System.Boolean value)
    // Offset: 0x198F004
    static void set_fullScreen(bool value);
    // static public UnityEngine.Resolution[] get_resolutions()
    // Offset: 0x198F044
    static ::Array<UnityEngine::Resolution>* get_resolutions();
  }; // UnityEngine.Screen
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Screen*, "UnityEngine", "Screen");
#pragma pack(pop)
