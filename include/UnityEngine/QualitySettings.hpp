// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ColorSpace
  struct ColorSpace;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.QualitySettings
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CBDA1C
  // [StaticAccessorAttribute] Offset: CBDA1C
  // [NativeHeaderAttribute] Offset: CBDA1C
  class QualitySettings : public UnityEngine::Object {
    public:
    // Creating value type constructor for type: QualitySettings
    QualitySettings() noexcept {}
    // static public System.Void set_vSyncCount(System.Int32 value)
    // Offset: 0x1B3CD50
    static void set_vSyncCount(int value);
    // static public System.Int32 get_antiAliasing()
    // Offset: 0x1B3CD90
    static int get_antiAliasing();
    // static public System.Void set_antiAliasing(System.Int32 value)
    // Offset: 0x1B3CDC4
    static void set_antiAliasing(int value);
    // static public System.Void set_maxQueuedFrames(System.Int32 value)
    // Offset: 0x1B3CE04
    static void set_maxQueuedFrames(int value);
    // static public UnityEngine.ColorSpace get_activeColorSpace()
    // Offset: 0x1B3CE44
    static UnityEngine::ColorSpace get_activeColorSpace();
  }; // UnityEngine.QualitySettings
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::QualitySettings*, "UnityEngine", "QualitySettings");
