// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/Media
  // [] Offset: FFFFFFFF
  class OVRPlugin::Media : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::OVRPlugin::Media::MrcActivationMode
    struct MrcActivationMode;
    // Nested type: GlobalNamespace::OVRPlugin::Media::InputVideoBufferType
    struct InputVideoBufferType;
    // Creating value type constructor for type: Media
    Media() noexcept {}
    // Get static field: static private UnityEngine.Texture2D cachedTexture
    static UnityEngine::Texture2D* _get_cachedTexture();
    // Set static field: static private UnityEngine.Texture2D cachedTexture
    static void _set_cachedTexture(UnityEngine::Texture2D* value);
    // static public System.Boolean Initialize()
    // Offset: 0x14629F8
    static bool Initialize();
    // static public System.Boolean Shutdown()
    // Offset: 0x1462AF8
    static bool Shutdown();
    // static public System.Boolean GetInitialized()
    // Offset: 0x144D3EC
    static bool GetInitialized();
    // static public System.Boolean Update()
    // Offset: 0x1462BF8
    static bool Update();
    // static public OVRPlugin/Media/MrcActivationMode GetMrcActivationMode()
    // Offset: 0x1462CF8
    static GlobalNamespace::OVRPlugin::Media::MrcActivationMode GetMrcActivationMode();
    // static public System.Boolean SetMrcActivationMode(OVRPlugin/Media/MrcActivationMode mode)
    // Offset: 0x1462E04
    static bool SetMrcActivationMode(GlobalNamespace::OVRPlugin::Media::MrcActivationMode mode);
    // static public System.Boolean IsMrcEnabled()
    // Offset: 0x1462F0C
    static bool IsMrcEnabled();
    // static public System.Boolean IsMrcActivated()
    // Offset: 0x146301C
    static bool IsMrcActivated();
    // static public System.Boolean UseMrcDebugCamera()
    // Offset: 0x144C8E0
    static bool UseMrcDebugCamera();
    // static public System.Boolean SetMrcInputVideoBufferType(OVRPlugin/Media/InputVideoBufferType videoBufferType)
    // Offset: 0x146312C
    static bool SetMrcInputVideoBufferType(GlobalNamespace::OVRPlugin::Media::InputVideoBufferType videoBufferType);
    // static public OVRPlugin/Media/InputVideoBufferType GetMrcInputVideoBufferType()
    // Offset: 0x1463234
    static GlobalNamespace::OVRPlugin::Media::InputVideoBufferType GetMrcInputVideoBufferType();
    // static public System.Boolean SetMrcFrameSize(System.Int32 frameWidth, System.Int32 frameHeight)
    // Offset: 0x146333C
    static bool SetMrcFrameSize(int frameWidth, int frameHeight);
    // static public System.Void GetMrcFrameSize(out System.Int32 frameWidth, out System.Int32 frameHeight)
    // Offset: 0x1463454
    static void GetMrcFrameSize(int& frameWidth, int& frameHeight);
    // static public System.Boolean SetMrcAudioSampleRate(System.Int32 sampleRate)
    // Offset: 0x1463578
    static bool SetMrcAudioSampleRate(int sampleRate);
    // static public System.Int32 GetMrcAudioSampleRate()
    // Offset: 0x1463680
    static int GetMrcAudioSampleRate();
    // static public System.Boolean SetMrcFrameImageFlipped(System.Boolean imageFlipped)
    // Offset: 0x1463784
    static bool SetMrcFrameImageFlipped(bool imageFlipped);
    // static public System.Boolean GetMrcFrameImageFlipped()
    // Offset: 0x1463890
    static bool GetMrcFrameImageFlipped();
    // static public System.Boolean EncodeMrcFrame(System.IntPtr textureHandle, System.Single[] audioData, System.Int32 audioFrames, System.Int32 audioChannels, System.Double timestamp, ref System.Int32 outSyncId)
    // Offset: 0x146399C
    static bool EncodeMrcFrame(System::IntPtr textureHandle, ::Array<float>* audioData, int audioFrames, int audioChannels, double timestamp, int& outSyncId);
    // static public System.Boolean EncodeMrcFrame(UnityEngine.RenderTexture frame, System.Single[] audioData, System.Int32 audioFrames, System.Int32 audioChannels, System.Double timestamp, ref System.Int32 outSyncId)
    // Offset: 0x1463BD8
    static bool EncodeMrcFrame(UnityEngine::RenderTexture* frame, ::Array<float>* audioData, int audioFrames, int audioChannels, double timestamp, int& outSyncId);
    // static public System.Boolean SyncMrcFrame(System.Int32 syncId)
    // Offset: 0x14640C4
    static bool SyncMrcFrame(int syncId);
    // static private System.Void .cctor()
    // Offset: 0x14641D4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x14641CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRPlugin::Media* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRPlugin::Media::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRPlugin::Media*, creationType>()));
    }
  }; // OVRPlugin/Media
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Media*, "", "OVRPlugin/Media");
