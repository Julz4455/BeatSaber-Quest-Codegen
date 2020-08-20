// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IAudioTimeSource
#include "GlobalNamespace/IAudioTimeSource.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: State because it is already included!
  // Forward declaring type: FloatSO
  class FloatSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: WaitUntil
  class WaitUntil;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AudioTimeSyncController
  class AudioTimeSyncController : public UnityEngine::MonoBehaviour, public GlobalNamespace::IAudioTimeSource {
    public:
    // Nested type: GlobalNamespace::AudioTimeSyncController::InitData
    class InitData;
    // Nested type: GlobalNamespace::AudioTimeSyncController::State
    struct State;
    // Autogenerated type: AudioTimeSyncController/State
    struct State : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public AudioTimeSyncController/State Playing
      static constexpr const int Playing = 0;
      // Get static field: static public AudioTimeSyncController/State Playing
      static GlobalNamespace::AudioTimeSyncController::State _get_Playing();
      // Set static field: static public AudioTimeSyncController/State Playing
      static void _set_Playing(GlobalNamespace::AudioTimeSyncController::State value);
      // static field const value: static public AudioTimeSyncController/State Paused
      static constexpr const int Paused = 1;
      // Get static field: static public AudioTimeSyncController/State Paused
      static GlobalNamespace::AudioTimeSyncController::State _get_Paused();
      // Set static field: static public AudioTimeSyncController/State Paused
      static void _set_Paused(GlobalNamespace::AudioTimeSyncController::State value);
      // static field const value: static public AudioTimeSyncController/State Stopped
      static constexpr const int Stopped = 2;
      // Get static field: static public AudioTimeSyncController/State Stopped
      static GlobalNamespace::AudioTimeSyncController::State _get_Stopped();
      // Set static field: static public AudioTimeSyncController/State Stopped
      static void _set_Stopped(GlobalNamespace::AudioTimeSyncController::State value);
      // Creating value type constructor for type: State
      State(int value_ = {}) : value{value_} {}
    }; // AudioTimeSyncController/State
    // private System.Single _audioSyncLerpSpeed
    // Offset: 0x18
    float audioSyncLerpSpeed;
    // private System.Single _forcedSyncDeltaTime
    // Offset: 0x1C
    float forcedSyncDeltaTime;
    // private System.Single _startSyncDeltaTime
    // Offset: 0x20
    float startSyncDeltaTime;
    // private System.Single _stopSyncDeltaTime
    // Offset: 0x24
    float stopSyncDeltaTime;
    // private UnityEngine.AudioSource _audioSource
    // Offset: 0x28
    UnityEngine::AudioSource* audioSource;
    // private FloatSO _audioLatency
    // Offset: 0x30
    GlobalNamespace::FloatSO* audioLatency;
    // private AudioTimeSyncController/InitData _initData
    // Offset: 0x38
    GlobalNamespace::AudioTimeSyncController::InitData* initData;
    // public System.Boolean forcedNoAudioSync
    // Offset: 0x40
    bool forcedNoAudioSync;
    // private System.Boolean _fixingAudioSyncError
    // Offset: 0x41
    bool fixingAudioSyncError;
    // private System.Single _audioStartTimeOffsetSinceStart
    // Offset: 0x44
    float audioStartTimeOffsetSinceStart;
    // private System.Int32 _playbackLoopIndex
    // Offset: 0x48
    int playbackLoopIndex;
    // private System.Int32 _prevAudioSamplePos
    // Offset: 0x4C
    int prevAudioSamplePos;
    // private System.Single _startSongTime
    // Offset: 0x50
    float startSongTime;
    // private System.Single _songTimeOffset
    // Offset: 0x54
    float songTimeOffset;
    // private System.Boolean _audioStarted
    // Offset: 0x58
    bool audioStarted;
    // private System.Single _timeScale
    // Offset: 0x5C
    float timeScale;
    // private System.Single _songTime
    // Offset: 0x60
    float songTime;
    // private System.Double _dspTimeOffset
    // Offset: 0x68
    double dspTimeOffset;
    // private AudioTimeSyncController/State _state
    // Offset: 0x70
    GlobalNamespace::AudioTimeSyncController::State state;
    // private System.Boolean _canStartSong
    // Offset: 0x74
    bool canStartSong;
    // public AudioTimeSyncController/State get_state()
    // Offset: 0x18F141C
    GlobalNamespace::AudioTimeSyncController::State get_state();
    // public System.Single get_songLength()
    // Offset: 0x18F142C
    float get_songLength();
    // public System.Boolean get_isAudioLoaded()
    // Offset: 0x18F1454
    bool get_isAudioLoaded();
    // public System.Single get_songEndTime()
    // Offset: 0x18F1488
    float get_songEndTime();
    // public System.Single get_timeScale()
    // Offset: 0x18F14B0
    float get_timeScale();
    // public System.Double get_dspTimeOffset()
    // Offset: 0x18F14B8
    double get_dspTimeOffset();
    // public UnityEngine.WaitUntil get_waitUntilAudioIsLoaded()
    // Offset: 0x18F14C0
    UnityEngine::WaitUntil* get_waitUntilAudioIsLoaded();
    // public UnityEngine.AudioSource get_audioSource()
    // Offset: 0x18F1558
    UnityEngine::AudioSource* get_audioSource();
    // protected System.Void Awake()
    // Offset: 0x18F1560
    void Awake();
    // protected System.Void Start()
    // Offset: 0x18F15B4
    void Start();
    // protected System.Void Update()
    // Offset: 0x18F1690
    void Update();
    // private System.Single get_timeSinceStart()
    // Offset: 0x18F19F8
    float get_timeSinceStart();
    // public System.Void StartSong()
    // Offset: 0x18F1A24
    void StartSong();
    // public System.Void StopSong()
    // Offset: 0x18F1B9C
    void StopSong();
    // public System.Void Pause()
    // Offset: 0x18F1BD4
    void Pause();
    // public System.Void Resume()
    // Offset: 0x18F1C1C
    void Resume();
    // private System.Boolean <get_waitUntilAudioIsLoaded>b__25_0()
    // Offset: 0x18F1C64
    bool $get_waitUntilAudioIsLoaded$b__25_0();
    // public System.Single get_songTime()
    // Offset: 0x18F1424
    // Implemented from: IAudioTimeSource
    // Base method: System.Single IAudioTimeSource::get_songTime()
    float get_songTime();
    // public System.Void .ctor()
    // Offset: 0x18F1C50
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AudioTimeSyncController* New_ctor();
  }; // AudioTimeSyncController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioTimeSyncController*, "", "AudioTimeSyncController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioTimeSyncController::State, "", "AudioTimeSyncController/State");
#pragma pack(pop)
