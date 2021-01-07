// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.CAPI
#include "Oculus/Platform/CAPI.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: VoipMuteState
  struct VoipMuteState;
  // Forward declaring type: SystemVoipStatus
  struct SystemVoipStatus;
  // Forward declaring type: VoipDtxState
  struct VoipDtxState;
  // Forward declaring type: VoipBitrate
  struct VoipBitrate;
  // Forward declaring type: VoipOptions
  class VoipOptions;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: SystemVoipState
  class SystemVoipState;
  // Forward declaring type: NetworkingPeer
  class NetworkingPeer;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  // Autogenerated type: Oculus.Platform.Voip
  // [] Offset: FFFFFFFF
  class Voip : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Voip
    Voip() noexcept {}
    // static public System.Void Start(System.UInt64 userID)
    // Offset: 0x19F9FE4
    static void Start(uint64_t userID);
    // static public System.Void Accept(System.UInt64 userID)
    // Offset: 0x19FA0D0
    static void Accept(uint64_t userID);
    // static public System.Void Stop(System.UInt64 userID)
    // Offset: 0x19FA1BC
    static void Stop(uint64_t userID);
    // static public System.Void SetMicrophoneFilterCallback(Oculus.Platform.CAPI/FilterCallback callback)
    // Offset: 0x19FA2A8
    static void SetMicrophoneFilterCallback(Oculus::Platform::CAPI::FilterCallback* callback);
    // static public System.Void SetMicrophoneMuted(Oculus.Platform.VoipMuteState state)
    // Offset: 0x19FA3CC
    static void SetMicrophoneMuted(Oculus::Platform::VoipMuteState state);
    // static public Oculus.Platform.VoipMuteState GetSystemVoipMicrophoneMuted()
    // Offset: 0x19FA4B8
    static Oculus::Platform::VoipMuteState GetSystemVoipMicrophoneMuted();
    // static public Oculus.Platform.SystemVoipStatus GetSystemVoipStatus()
    // Offset: 0x19FA594
    static Oculus::Platform::SystemVoipStatus GetSystemVoipStatus();
    // static public Oculus.Platform.VoipDtxState GetIsConnectionUsingDtx(System.UInt64 peerID)
    // Offset: 0x19FA670
    static Oculus::Platform::VoipDtxState GetIsConnectionUsingDtx(uint64_t peerID);
    // static public Oculus.Platform.VoipBitrate GetLocalBitrate(System.UInt64 peerID)
    // Offset: 0x19FA760
    static Oculus::Platform::VoipBitrate GetLocalBitrate(uint64_t peerID);
    // static public Oculus.Platform.VoipBitrate GetRemoteBitrate(System.UInt64 peerID)
    // Offset: 0x19FA850
    static Oculus::Platform::VoipBitrate GetRemoteBitrate(uint64_t peerID);
    // static public System.Void SetNewConnectionOptions(Oculus.Platform.VoipOptions voipOptions)
    // Offset: 0x19FA940
    static void SetNewConnectionOptions(Oculus::Platform::VoipOptions* voipOptions);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.SystemVoipState> SetSystemVoipSuppressed(System.Boolean suppressed)
    // Offset: 0x19FAAA8
    static Oculus::Platform::Request_1<Oculus::Platform::Models::SystemVoipState*>* SetSystemVoipSuppressed(bool suppressed);
    // static public System.Void SetVoipConnectRequestCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetworkingPeer> callback)
    // Offset: 0x19FABC4
    static void SetVoipConnectRequestCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::NetworkingPeer*>::Callback* callback);
    // static public System.Void SetVoipStateChangeCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetworkingPeer> callback)
    // Offset: 0x19FAC3C
    static void SetVoipStateChangeCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::NetworkingPeer*>::Callback* callback);
    // static public System.Void SetSystemVoipStateNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.SystemVoipState> callback)
    // Offset: 0x19FACB4
    static void SetSystemVoipStateNotificationCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::SystemVoipState*>::Callback* callback);
  }; // Oculus.Platform.Voip
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Voip*, "Oculus.Platform", "Voip");
#pragma pack(pop)
