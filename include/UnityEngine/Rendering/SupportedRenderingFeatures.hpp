// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.LightmapBakeType
#include "UnityEngine/LightmapBakeType.hpp"
// Including type: UnityEngine.LightmapsMode
#include "UnityEngine/LightmapsMode.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Skipping declaration: LightmapMixedBakeModes because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MixedLightingMode
  struct MixedLightingMode;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Autogenerated type: UnityEngine.Rendering.SupportedRenderingFeatures
  class SupportedRenderingFeatures : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes
    struct ReflectionProbeModes;
    // Nested type: UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes
    struct LightmapMixedBakeModes;
    // Autogenerated type: UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes
    struct ReflectionProbeModes : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: ReflectionProbeModes
      constexpr ReflectionProbeModes(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes None
      static UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes _get_None();
      // Set static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes None
      static void _set_None(UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes value);
      // static field const value: static public UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes Rotation
      static constexpr const int Rotation = 1;
      // Get static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes Rotation
      static UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes _get_Rotation();
      // Set static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes Rotation
      static void _set_Rotation(UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes value);
    }; // UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes
    // Autogenerated type: UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes
    struct LightmapMixedBakeModes : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: LightmapMixedBakeModes
      constexpr LightmapMixedBakeModes(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes None
      static constexpr const int None = 0;
      // Get static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes None
      static UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes _get_None();
      // Set static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes None
      static void _set_None(UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes value);
      // static field const value: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes IndirectOnly
      static constexpr const int IndirectOnly = 1;
      // Get static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes IndirectOnly
      static UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes _get_IndirectOnly();
      // Set static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes IndirectOnly
      static void _set_IndirectOnly(UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes value);
      // static field const value: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes Subtractive
      static constexpr const int Subtractive = 2;
      // Get static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes Subtractive
      static UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes _get_Subtractive();
      // Set static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes Subtractive
      static void _set_Subtractive(UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes value);
      // static field const value: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes Shadowmask
      static constexpr const int Shadowmask = 4;
      // Get static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes Shadowmask
      static UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes _get_Shadowmask();
      // Set static field: static public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes Shadowmask
      static void _set_Shadowmask(UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes value);
    }; // UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes
    // private UnityEngine.Rendering.SupportedRenderingFeatures/ReflectionProbeModes <reflectionProbeModes>k__BackingField
    // Offset: 0x10
    UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes reflectionProbeModes;
    // private UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes <defaultMixedLightingModes>k__BackingField
    // Offset: 0x14
    UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes defaultMixedLightingModes;
    // private UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes <mixedLightingModes>k__BackingField
    // Offset: 0x18
    UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes mixedLightingModes;
    // private UnityEngine.LightmapBakeType <lightmapBakeTypes>k__BackingField
    // Offset: 0x1C
    UnityEngine::LightmapBakeType lightmapBakeTypes;
    // private UnityEngine.LightmapsMode <lightmapsModes>k__BackingField
    // Offset: 0x20
    UnityEngine::LightmapsMode lightmapsModes;
    // private System.Boolean <enlighten>k__BackingField
    // Offset: 0x24
    bool enlighten;
    // private System.Boolean <lightProbeProxyVolumes>k__BackingField
    // Offset: 0x25
    bool lightProbeProxyVolumes;
    // private System.Boolean <motionVectors>k__BackingField
    // Offset: 0x26
    bool motionVectors;
    // private System.Boolean <receiveShadows>k__BackingField
    // Offset: 0x27
    bool receiveShadows;
    // private System.Boolean <reflectionProbes>k__BackingField
    // Offset: 0x28
    bool reflectionProbes;
    // private System.Boolean <rendererPriority>k__BackingField
    // Offset: 0x29
    bool rendererPriority;
    // private System.Boolean <terrainDetailUnsupported>k__BackingField
    // Offset: 0x2A
    bool terrainDetailUnsupported;
    // private System.Boolean <overridesEnvironmentLighting>k__BackingField
    // Offset: 0x2B
    bool overridesEnvironmentLighting;
    // private System.Boolean <overridesFog>k__BackingField
    // Offset: 0x2C
    bool overridesFog;
    // private System.Boolean <overridesOtherLightingSettings>k__BackingField
    // Offset: 0x2D
    bool overridesOtherLightingSettings;
    // private System.Boolean <editableMaterialRenderQueue>k__BackingField
    // Offset: 0x2E
    bool editableMaterialRenderQueue;
    // private System.Boolean <overridesLODBias>k__BackingField
    // Offset: 0x2F
    bool overridesLODBias;
    // private System.Boolean <overridesMaximumLODLevel>k__BackingField
    // Offset: 0x30
    bool overridesMaximumLODLevel;
    // Get static field: static private UnityEngine.Rendering.SupportedRenderingFeatures s_Active
    static UnityEngine::Rendering::SupportedRenderingFeatures* _get_s_Active();
    // Set static field: static private UnityEngine.Rendering.SupportedRenderingFeatures s_Active
    static void _set_s_Active(UnityEngine::Rendering::SupportedRenderingFeatures* value);
    // static public UnityEngine.Rendering.SupportedRenderingFeatures get_active()
    // Offset: 0x198CFA0
    static UnityEngine::Rendering::SupportedRenderingFeatures* get_active();
    // static public System.Void set_active(UnityEngine.Rendering.SupportedRenderingFeatures value)
    // Offset: 0x198BFAC
    static void set_active(UnityEngine::Rendering::SupportedRenderingFeatures* value);
    // public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes get_defaultMixedLightingModes()
    // Offset: 0x198D0A0
    UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes get_defaultMixedLightingModes();
    // public UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes get_mixedLightingModes()
    // Offset: 0x198D0A8
    UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes get_mixedLightingModes();
    // public UnityEngine.LightmapBakeType get_lightmapBakeTypes()
    // Offset: 0x198D0B0
    UnityEngine::LightmapBakeType get_lightmapBakeTypes();
    // public UnityEngine.LightmapsMode get_lightmapsModes()
    // Offset: 0x198D0B8
    UnityEngine::LightmapsMode get_lightmapsModes();
    // public System.Boolean get_enlighten()
    // Offset: 0x198D0C0
    bool get_enlighten();
    // static System.Void FallbackMixedLightingModeByRef(System.IntPtr fallbackModePtr)
    // Offset: 0x198D0C8
    static void FallbackMixedLightingModeByRef(System::IntPtr fallbackModePtr);
    // static System.Boolean IsMixedLightingModeSupported(UnityEngine.MixedLightingMode mixedMode)
    // Offset: 0x198D22C
    static bool IsMixedLightingModeSupported(UnityEngine::MixedLightingMode mixedMode);
    // static System.Void IsMixedLightingModeSupportedByRef(UnityEngine.MixedLightingMode mixedMode, System.IntPtr isSupportedPtr)
    // Offset: 0x198D2A8
    static void IsMixedLightingModeSupportedByRef(UnityEngine::MixedLightingMode mixedMode, System::IntPtr isSupportedPtr);
    // static System.Boolean IsLightmapBakeTypeSupported(UnityEngine.LightmapBakeType bakeType)
    // Offset: 0x198D3D8
    static bool IsLightmapBakeTypeSupported(UnityEngine::LightmapBakeType bakeType);
    // static System.Void IsLightmapBakeTypeSupportedByRef(UnityEngine.LightmapBakeType bakeType, System.IntPtr isSupportedPtr)
    // Offset: 0x198D454
    static void IsLightmapBakeTypeSupportedByRef(UnityEngine::LightmapBakeType bakeType, System::IntPtr isSupportedPtr);
    // static System.Void IsLightmapsModeSupportedByRef(UnityEngine.LightmapsMode mode, System.IntPtr isSupportedPtr)
    // Offset: 0x198D5A4
    static void IsLightmapsModeSupportedByRef(UnityEngine::LightmapsMode mode, System::IntPtr isSupportedPtr);
    // static System.Void IsLightmapperSupportedByRef(System.Int32 lightmapper, System.IntPtr isSupportedPtr)
    // Offset: 0x198D640
    static void IsLightmapperSupportedByRef(int lightmapper, System::IntPtr isSupportedPtr);
    // static System.Void FallbackLightmapperByRef(System.IntPtr lightmapperPtr)
    // Offset: 0x198D708
    static void FallbackLightmapperByRef(System::IntPtr lightmapperPtr);
    // static private System.Void .cctor()
    // Offset: 0x198D728
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x198BF70
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SupportedRenderingFeatures* New_ctor();
  }; // UnityEngine.Rendering.SupportedRenderingFeatures
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::SupportedRenderingFeatures*, "UnityEngine.Rendering", "SupportedRenderingFeatures");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::SupportedRenderingFeatures::ReflectionProbeModes, "UnityEngine.Rendering", "SupportedRenderingFeatures/ReflectionProbeModes");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::SupportedRenderingFeatures::LightmapMixedBakeModes, "UnityEngine.Rendering", "SupportedRenderingFeatures/LightmapMixedBakeModes");
#pragma pack(pop)
