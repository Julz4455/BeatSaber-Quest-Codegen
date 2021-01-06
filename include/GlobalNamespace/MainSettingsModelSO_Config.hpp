// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MainSettingsModelSO
#include "GlobalNamespace/MainSettingsModelSO.hpp"
// Including type: MainSettingsModelSO/WindowMode
#include "GlobalNamespace/MainSettingsModelSO_WindowMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD0
  // Autogenerated type: MainSettingsModelSO/Config
  // [] Offset: FFFFFFFF
  class MainSettingsModelSO::Config : public ::Il2CppObject {
    public:
    // public System.String version
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* version;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 windowResolutionWidth
    // Size: 0x4
    // Offset: 0x18
    int windowResolutionWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 windowResolutionHeight
    // Size: 0x4
    // Offset: 0x1C
    int windowResolutionHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public MainSettingsModelSO/WindowMode windowMode
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::MainSettingsModelSO::WindowMode windowMode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainSettingsModelSO::WindowMode) == 0x4);
    // public System.Single vrResolutionScale
    // Size: 0x4
    // Offset: 0x24
    float vrResolutionScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single menuVRResolutionScaleMultiplier
    // Size: 0x4
    // Offset: 0x28
    float menuVRResolutionScaleMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean useFixedFoveatedRenderingDuringGameplay
    // Size: 0x1
    // Offset: 0x2C
    bool useFixedFoveatedRenderingDuringGameplay;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useFixedFoveatedRenderingDuringGameplay and: antiAliasingLevel
    char __padding6[0x3] = {};
    // public System.Int32 antiAliasingLevel
    // Size: 0x4
    // Offset: 0x30
    int antiAliasingLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 mirrorGraphicsSettings
    // Size: 0x4
    // Offset: 0x34
    int mirrorGraphicsSettings;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 mainEffectGraphicsSettings
    // Size: 0x4
    // Offset: 0x38
    int mainEffectGraphicsSettings;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 bloomGraphicsSettings
    // Size: 0x4
    // Offset: 0x3C
    int bloomGraphicsSettings;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 smokeGraphicsSettings
    // Size: 0x4
    // Offset: 0x40
    int smokeGraphicsSettings;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean burnMarkTrailsEnabled
    // Size: 0x1
    // Offset: 0x44
    bool burnMarkTrailsEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean screenDisplacementEffectsEnabled
    // Size: 0x1
    // Offset: 0x45
    bool screenDisplacementEffectsEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: screenDisplacementEffectsEnabled and: roomCenterX
    char __padding13[0x2] = {};
    // public System.Single roomCenterX
    // Size: 0x4
    // Offset: 0x48
    float roomCenterX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single roomCenterY
    // Size: 0x4
    // Offset: 0x4C
    float roomCenterY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single roomCenterZ
    // Size: 0x4
    // Offset: 0x50
    float roomCenterZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single roomRotation
    // Size: 0x4
    // Offset: 0x54
    float roomRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single controllerPositionX
    // Size: 0x4
    // Offset: 0x58
    float controllerPositionX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single controllerPositionY
    // Size: 0x4
    // Offset: 0x5C
    float controllerPositionY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single controllerPositionZ
    // Size: 0x4
    // Offset: 0x60
    float controllerPositionZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single controllerRotationX
    // Size: 0x4
    // Offset: 0x64
    float controllerRotationX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single controllerRotationY
    // Size: 0x4
    // Offset: 0x68
    float controllerRotationY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single controllerRotationZ
    // Size: 0x4
    // Offset: 0x6C
    float controllerRotationZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 smoothCameraEnabled
    // Size: 0x4
    // Offset: 0x70
    int smoothCameraEnabled;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single smoothCameraFieldOfView
    // Size: 0x4
    // Offset: 0x74
    float smoothCameraFieldOfView;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single smoothCameraThirdPersonPositionX
    // Size: 0x4
    // Offset: 0x78
    float smoothCameraThirdPersonPositionX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single smoothCameraThirdPersonPositionY
    // Size: 0x4
    // Offset: 0x7C
    float smoothCameraThirdPersonPositionY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single smoothCameraThirdPersonPositionZ
    // Size: 0x4
    // Offset: 0x80
    float smoothCameraThirdPersonPositionZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single smoothCameraThirdPersonEulerAnglesX
    // Size: 0x4
    // Offset: 0x84
    float smoothCameraThirdPersonEulerAnglesX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single smoothCameraThirdPersonEulerAnglesY
    // Size: 0x4
    // Offset: 0x88
    float smoothCameraThirdPersonEulerAnglesY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single smoothCameraThirdPersonEulerAnglesZ
    // Size: 0x4
    // Offset: 0x8C
    float smoothCameraThirdPersonEulerAnglesZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 smoothCameraThirdPersonEnabled
    // Size: 0x4
    // Offset: 0x90
    int smoothCameraThirdPersonEnabled;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single smoothCameraRotationSmooth
    // Size: 0x4
    // Offset: 0x94
    float smoothCameraRotationSmooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single smoothCameraPositionSmooth
    // Size: 0x4
    // Offset: 0x98
    float smoothCameraPositionSmooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean useCustomServerEnvironment
    // Size: 0x1
    // Offset: 0x9C
    bool useCustomServerEnvironment;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useCustomServerEnvironment and: customServerHostName
    char __padding35[0x3] = {};
    // public System.String customServerHostName
    // Size: 0x8
    // Offset: 0xA0
    ::Il2CppString* customServerHostName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Single volume
    // Size: 0x4
    // Offset: 0xA8
    float volume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean controllersRumbleEnabled
    // Size: 0x1
    // Offset: 0xAC
    bool controllersRumbleEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: controllersRumbleEnabled and: enableAlphaFeatures
    char __padding38[0x3] = {};
    // public System.Int32 enableAlphaFeatures
    // Size: 0x4
    // Offset: 0xB0
    int enableAlphaFeatures;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 pauseButtonPressDurationLevel
    // Size: 0x4
    // Offset: 0xB4
    int pauseButtonPressDurationLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 maxShockwaveParticles
    // Size: 0x4
    // Offset: 0xB8
    int maxShockwaveParticles;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean overrideAudioLatency
    // Size: 0x1
    // Offset: 0xBC
    bool overrideAudioLatency;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideAudioLatency and: audioLatency
    char __padding42[0x3] = {};
    // public System.Single audioLatency
    // Size: 0x4
    // Offset: 0xC0
    float audioLatency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 maxNumberOfCutSoundEffects
    // Size: 0x4
    // Offset: 0xC4
    int maxNumberOfCutSoundEffects;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean onlineServicesEnabled
    // Size: 0x1
    // Offset: 0xC8
    bool onlineServicesEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean oculusMRCEnabled
    // Size: 0x1
    // Offset: 0xC9
    bool oculusMRCEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean openVrThreadedHaptics
    // Size: 0x1
    // Offset: 0xCA
    bool openVrThreadedHaptics;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: openVrThreadedHaptics and: languageSettings
    char __padding47[0x1] = {};
    // public System.Int32 languageSettings
    // Size: 0x4
    // Offset: 0xCC
    int languageSettings;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Config
    Config(::Il2CppString* version_ = {}, int windowResolutionWidth_ = {}, int windowResolutionHeight_ = {}, GlobalNamespace::MainSettingsModelSO::WindowMode windowMode_ = {}, float vrResolutionScale_ = {}, float menuVRResolutionScaleMultiplier_ = {}, bool useFixedFoveatedRenderingDuringGameplay_ = {}, int antiAliasingLevel_ = {}, int mirrorGraphicsSettings_ = {}, int mainEffectGraphicsSettings_ = {}, int bloomGraphicsSettings_ = {}, int smokeGraphicsSettings_ = {}, bool burnMarkTrailsEnabled_ = {}, bool screenDisplacementEffectsEnabled_ = {}, float roomCenterX_ = {}, float roomCenterY_ = {}, float roomCenterZ_ = {}, float roomRotation_ = {}, float controllerPositionX_ = {}, float controllerPositionY_ = {}, float controllerPositionZ_ = {}, float controllerRotationX_ = {}, float controllerRotationY_ = {}, float controllerRotationZ_ = {}, int smoothCameraEnabled_ = {}, float smoothCameraFieldOfView_ = {}, float smoothCameraThirdPersonPositionX_ = {}, float smoothCameraThirdPersonPositionY_ = {}, float smoothCameraThirdPersonPositionZ_ = {}, float smoothCameraThirdPersonEulerAnglesX_ = {}, float smoothCameraThirdPersonEulerAnglesY_ = {}, float smoothCameraThirdPersonEulerAnglesZ_ = {}, int smoothCameraThirdPersonEnabled_ = {}, float smoothCameraRotationSmooth_ = {}, float smoothCameraPositionSmooth_ = {}, bool useCustomServerEnvironment_ = {}, ::Il2CppString* customServerHostName_ = {}, float volume_ = {}, bool controllersRumbleEnabled_ = {}, int enableAlphaFeatures_ = {}, int pauseButtonPressDurationLevel_ = {}, int maxShockwaveParticles_ = {}, bool overrideAudioLatency_ = {}, float audioLatency_ = {}, int maxNumberOfCutSoundEffects_ = {}, bool onlineServicesEnabled_ = {}, bool oculusMRCEnabled_ = {}, bool openVrThreadedHaptics_ = {}, int languageSettings_ = {}) noexcept : version{version_}, windowResolutionWidth{windowResolutionWidth_}, windowResolutionHeight{windowResolutionHeight_}, windowMode{windowMode_}, vrResolutionScale{vrResolutionScale_}, menuVRResolutionScaleMultiplier{menuVRResolutionScaleMultiplier_}, useFixedFoveatedRenderingDuringGameplay{useFixedFoveatedRenderingDuringGameplay_}, antiAliasingLevel{antiAliasingLevel_}, mirrorGraphicsSettings{mirrorGraphicsSettings_}, mainEffectGraphicsSettings{mainEffectGraphicsSettings_}, bloomGraphicsSettings{bloomGraphicsSettings_}, smokeGraphicsSettings{smokeGraphicsSettings_}, burnMarkTrailsEnabled{burnMarkTrailsEnabled_}, screenDisplacementEffectsEnabled{screenDisplacementEffectsEnabled_}, roomCenterX{roomCenterX_}, roomCenterY{roomCenterY_}, roomCenterZ{roomCenterZ_}, roomRotation{roomRotation_}, controllerPositionX{controllerPositionX_}, controllerPositionY{controllerPositionY_}, controllerPositionZ{controllerPositionZ_}, controllerRotationX{controllerRotationX_}, controllerRotationY{controllerRotationY_}, controllerRotationZ{controllerRotationZ_}, smoothCameraEnabled{smoothCameraEnabled_}, smoothCameraFieldOfView{smoothCameraFieldOfView_}, smoothCameraThirdPersonPositionX{smoothCameraThirdPersonPositionX_}, smoothCameraThirdPersonPositionY{smoothCameraThirdPersonPositionY_}, smoothCameraThirdPersonPositionZ{smoothCameraThirdPersonPositionZ_}, smoothCameraThirdPersonEulerAnglesX{smoothCameraThirdPersonEulerAnglesX_}, smoothCameraThirdPersonEulerAnglesY{smoothCameraThirdPersonEulerAnglesY_}, smoothCameraThirdPersonEulerAnglesZ{smoothCameraThirdPersonEulerAnglesZ_}, smoothCameraThirdPersonEnabled{smoothCameraThirdPersonEnabled_}, smoothCameraRotationSmooth{smoothCameraRotationSmooth_}, smoothCameraPositionSmooth{smoothCameraPositionSmooth_}, useCustomServerEnvironment{useCustomServerEnvironment_}, customServerHostName{customServerHostName_}, volume{volume_}, controllersRumbleEnabled{controllersRumbleEnabled_}, enableAlphaFeatures{enableAlphaFeatures_}, pauseButtonPressDurationLevel{pauseButtonPressDurationLevel_}, maxShockwaveParticles{maxShockwaveParticles_}, overrideAudioLatency{overrideAudioLatency_}, audioLatency{audioLatency_}, maxNumberOfCutSoundEffects{maxNumberOfCutSoundEffects_}, onlineServicesEnabled{onlineServicesEnabled_}, oculusMRCEnabled{oculusMRCEnabled_}, openVrThreadedHaptics{openVrThreadedHaptics_}, languageSettings{languageSettings_} {}
    // public System.Void .ctor()
    // Offset: 0x1A6FA98
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainSettingsModelSO::Config* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("Config").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainSettingsModelSO::Config*, creationType>()));
    }
  }; // MainSettingsModelSO/Config
  static check_size<sizeof(MainSettingsModelSO::Config), 204 + sizeof(int)> __GlobalNamespace_MainSettingsModelSO_ConfigSizeCheck;
  static_assert(sizeof(MainSettingsModelSO::Config) == 0xD0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainSettingsModelSO::Config*, "", "MainSettingsModelSO/Config");
#pragma pack(pop)
