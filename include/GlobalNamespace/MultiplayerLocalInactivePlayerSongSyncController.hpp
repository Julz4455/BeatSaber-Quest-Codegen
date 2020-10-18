// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IStartSeekSongController
#include "GlobalNamespace/IStartSeekSongController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CrossFadeAudioSource
  class CrossFadeAudioSource;
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IMultiplayerObservable
  class IMultiplayerObservable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: WaitUntil
  class WaitUntil;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerLocalInactivePlayerSongSyncController
  class MultiplayerLocalInactivePlayerSongSyncController : public UnityEngine::MonoBehaviour, public GlobalNamespace::IStartSeekSongController {
    public:
    // Nested type: GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::InitData
    class InitData;
    // private CrossFadeAudioSource _audioSource
    // Offset: 0x18
    GlobalNamespace::CrossFadeAudioSource* audioSource;
    // private FloatSO _audioLatency
    // Offset: 0x20
    GlobalNamespace::FloatSO* audioLatency;
    // private readonly MultiplayerLocalInactivePlayerSongSyncController/InitData _initData
    // Offset: 0x28
    GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController::InitData* initData;
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Offset: 0x30
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // private System.Single _timeScale
    // Offset: 0x38
    float timeScale;
    // private System.Single _startSongTime
    // Offset: 0x3C
    float startSongTime;
    // private System.Single _songTimeOffset
    // Offset: 0x40
    float songTimeOffset;
    // private System.Single _songTime
    // Offset: 0x44
    float songTime;
    // private System.Boolean _audioStarted
    // Offset: 0x48
    bool audioStarted;
    // private System.Boolean _currentObservableIsFailed
    // Offset: 0x49
    bool currentObservableIsFailed;
    // private IMultiplayerObservable _observable
    // Offset: 0x50
    GlobalNamespace::IMultiplayerObservable* observable;
    // private System.Single _lastLatencyOffsetTime
    // Offset: 0x58
    float lastLatencyOffsetTime;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kReSyncThreshold
    static constexpr const float kReSyncThreshold = 0.05;
    // Get static field: static private System.Single kReSyncThreshold
    static float _get_kReSyncThreshold();
    // Set static field: static private System.Single kReSyncThreshold
    static void _set_kReSyncThreshold(float value);
    // private System.Boolean get_isAudioLoaded()
    // Offset: 0x223F7CC
    bool get_isAudioLoaded();
    // protected System.Void Awake()
    // Offset: 0x223F878
    void Awake();
    // protected System.Void Update()
    // Offset: 0x223F994
    void Update();
    // public System.Void FollowOffsetSyncTime(IMultiplayerObservable observable)
    // Offset: 0x2240078
    void FollowOffsetSyncTime(GlobalNamespace::IMultiplayerObservable* observable);
    // private System.Void UpdateOffsetSyncTime(System.Single offsetSyncTime, System.Boolean forceUpdate)
    // Offset: 0x223FC58
    void UpdateOffsetSyncTime(float offsetSyncTime, bool forceUpdate);
    // private System.Void SeekTo(System.Single offsetTime, System.Boolean crossFade, System.Single toVolume)
    // Offset: 0x223FEAC
    void SeekTo(float offsetTime, bool crossFade, float toVolume);
    // private System.Boolean <get_waitUntilIsReadyToStartTheSong>b__6_0()
    // Offset: 0x2240290
    bool $get_waitUntilIsReadyToStartTheSong$b__6_0();
    // public UnityEngine.WaitUntil get_waitUntilIsReadyToStartTheSong()
    // Offset: 0x223F734
    // Implemented from: IStartSeekSongController
    // Base method: UnityEngine.WaitUntil IStartSeekSongController::get_waitUntilIsReadyToStartTheSong()
    UnityEngine::WaitUntil* get_waitUntilIsReadyToStartTheSong();
    // public System.Void StartSong(System.Single offsetTime)
    // Offset: 0x223FDB4
    // Implemented from: IStartSeekSongController
    // Base method: System.Void IStartSeekSongController::StartSong(System.Single offsetTime)
    void StartSong(float offsetTime);
    // public System.Void SeekTo(System.Single offsetTime)
    // Offset: 0x224027C
    // Implemented from: IStartSeekSongController
    // Base method: System.Void IStartSeekSongController::SeekTo(System.Single offsetTime)
    void SeekTo(float offsetTime);
    // public System.Void .ctor()
    // Offset: 0x2240288
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerLocalInactivePlayerSongSyncController* New_ctor();
  }; // MultiplayerLocalInactivePlayerSongSyncController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalInactivePlayerSongSyncController*, "", "MultiplayerLocalInactivePlayerSongSyncController");
#pragma pack(pop)
