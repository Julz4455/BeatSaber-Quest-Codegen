// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MainSettingsModelSO
#include "GlobalNamespace/MainSettingsModelSO.hpp"
// Including type: MainSettingsModelSO/WindowMode
#include "GlobalNamespace/MainSettingsModelSO_WindowMode.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MainSettingsModelSO/Config
  class MainSettingsModelSO::Config : public ::Il2CppObject {
    public:
    // public System.String version
    // Offset: 0x10
    ::Il2CppString* version;
    // public System.Int32 windowResolutionWidth
    // Offset: 0x18
    int windowResolutionWidth;
    // public System.Int32 windowResolutionHeight
    // Offset: 0x1C
    int windowResolutionHeight;
    // public MainSettingsModelSO/WindowMode windowMode
    // Offset: 0x20
    GlobalNamespace::MainSettingsModelSO::WindowMode windowMode;
    // public System.Single vrResolutionScale
    // Offset: 0x24
    float vrResolutionScale;
    // public System.Single menuVRResolutionScaleMultiplier
    // Offset: 0x28
    float menuVRResolutionScaleMultiplier;
    // public System.Boolean useFixedFoveatedRenderingDuringGameplay
    // Offset: 0x2C
    bool useFixedFoveatedRenderingDuringGameplay;
    // public System.Int32 antiAliasingLevel
    // Offset: 0x30
    int antiAliasingLevel;
    // public System.Int32 mirrorGraphicsSettings
    // Offset: 0x34
    int mirrorGraphicsSettings;
    // public System.Int32 mainEffectGraphicsSettings
    // Offset: 0x38
    int mainEffectGraphicsSettings;
    // public System.Int32 bloomGraphicsSettings
    // Offset: 0x3C
    int bloomGraphicsSettings;
    // public System.Int32 smokeGraphicsSettings
    // Offset: 0x40
    int smokeGraphicsSettings;
    // public System.Boolean burnMarkTrailsEnabled
    // Offset: 0x44
    bool burnMarkTrailsEnabled;
    // public System.Boolean screenDisplacementEffectsEnabled
    // Offset: 0x45
    bool screenDisplacementEffectsEnabled;
    // public System.Single roomCenterX
    // Offset: 0x48
    float roomCenterX;
    // public System.Single roomCenterY
    // Offset: 0x4C
    float roomCenterY;
    // public System.Single roomCenterZ
    // Offset: 0x50
    float roomCenterZ;
    // public System.Single roomRotation
    // Offset: 0x54
    float roomRotation;
    // public System.Single controllerPositionX
    // Offset: 0x58
    float controllerPositionX;
    // public System.Single controllerPositionY
    // Offset: 0x5C
    float controllerPositionY;
    // public System.Single controllerPositionZ
    // Offset: 0x60
    float controllerPositionZ;
    // public System.Single controllerRotationX
    // Offset: 0x64
    float controllerRotationX;
    // public System.Single controllerRotationY
    // Offset: 0x68
    float controllerRotationY;
    // public System.Single controllerRotationZ
    // Offset: 0x6C
    float controllerRotationZ;
    // public System.Int32 smoothCameraEnabled
    // Offset: 0x70
    int smoothCameraEnabled;
    // public System.Single smoothCameraFieldOfView
    // Offset: 0x74
    float smoothCameraFieldOfView;
    // public System.Single smoothCameraThirdPersonPositionX
    // Offset: 0x78
    float smoothCameraThirdPersonPositionX;
    // public System.Single smoothCameraThirdPersonPositionY
    // Offset: 0x7C
    float smoothCameraThirdPersonPositionY;
    // public System.Single smoothCameraThirdPersonPositionZ
    // Offset: 0x80
    float smoothCameraThirdPersonPositionZ;
    // public System.Single smoothCameraThirdPersonEulerAnglesX
    // Offset: 0x84
    float smoothCameraThirdPersonEulerAnglesX;
    // public System.Single smoothCameraThirdPersonEulerAnglesY
    // Offset: 0x88
    float smoothCameraThirdPersonEulerAnglesY;
    // public System.Single smoothCameraThirdPersonEulerAnglesZ
    // Offset: 0x8C
    float smoothCameraThirdPersonEulerAnglesZ;
    // public System.Int32 smoothCameraThirdPersonEnabled
    // Offset: 0x90
    int smoothCameraThirdPersonEnabled;
    // public System.Single smoothCameraRotationSmooth
    // Offset: 0x94
    float smoothCameraRotationSmooth;
    // public System.Single smoothCameraPositionSmooth
    // Offset: 0x98
    float smoothCameraPositionSmooth;
    // public System.Single volume
    // Offset: 0x9C
    float volume;
    // public System.Boolean controllersRumbleEnabled
    // Offset: 0xA0
    bool controllersRumbleEnabled;
    // public System.Int32 enableAlphaFeatures
    // Offset: 0xA4
    int enableAlphaFeatures;
    // public System.Int32 pauseButtonPressDurationLevel
    // Offset: 0xA8
    int pauseButtonPressDurationLevel;
    // public System.Int32 maxShockwaveParticles
    // Offset: 0xAC
    int maxShockwaveParticles;
    // public System.Boolean overrideAudioLatency
    // Offset: 0xB0
    bool overrideAudioLatency;
    // public System.Single audioLatency
    // Offset: 0xB4
    float audioLatency;
    // public System.Int32 maxNumberOfCutSoundEffects
    // Offset: 0xB8
    int maxNumberOfCutSoundEffects;
    // public System.Boolean onlineServicesEnabled
    // Offset: 0xBC
    bool onlineServicesEnabled;
    // public System.Boolean oculusMRCEnabled
    // Offset: 0xBD
    bool oculusMRCEnabled;
    // public System.Boolean openVrThreadedHaptics
    // Offset: 0xBE
    bool openVrThreadedHaptics;
    // public System.Int32 languageSettings
    // Offset: 0xC0
    int languageSettings;
    // public System.Void .ctor()
    // Offset: 0xED6998
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MainSettingsModelSO::Config* New_ctor();
  }; // MainSettingsModelSO/Config
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainSettingsModelSO::Config*, "", "MainSettingsModelSO/Config");
#pragma pack(pop)
