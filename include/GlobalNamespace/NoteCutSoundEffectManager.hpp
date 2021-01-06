// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: NoteCutSoundEffect
#include "GlobalNamespace/NoteCutSoundEffect.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioManagerSO
  class AudioManagerSO;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: SaberManager
  class SaberManager;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: RandomObjectPicker`1<T>
  template<typename T>
  class RandomObjectPicker_1;
  // Forward declaring type: MonoMemoryPoolContainer`1<T>
  template<typename T>
  class MonoMemoryPoolContainer_1;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  // Autogenerated type: NoteCutSoundEffectManager
  // [] Offset: FFFFFFFF
  class NoteCutSoundEffectManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::NoteCutSoundEffectManager::InitData
    class InitData;
    // private AudioManagerSO _audioManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AudioManagerSO* audioManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioManagerSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xDC1AF4
    // private System.Single _audioSamplesBeatAlignOffset
    // Size: 0x4
    // Offset: 0x20
    float audioSamplesBeatAlignOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: audioSamplesBeatAlignOffset and: longCutEffectsAudioClips
    char __padding1[0x4] = {};
    // private UnityEngine.AudioClip[] _longCutEffectsAudioClips
    // Size: 0x8
    // Offset: 0x28
    ::Array<UnityEngine::AudioClip*>* longCutEffectsAudioClips;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::AudioClip*>*) == 0x8);
    // private UnityEngine.AudioClip[] _shortCutEffectsAudioClips
    // Size: 0x8
    // Offset: 0x30
    ::Array<UnityEngine::AudioClip*>* shortCutEffectsAudioClips;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::AudioClip*>*) == 0x8);
    // [SpaceAttribute] Offset: 0xDC1B4C
    // private UnityEngine.AudioClip _testAudioClip
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AudioClip* testAudioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // [InjectOptionalAttribute] Offset: 0xDC1B84
    // private readonly NoteCutSoundEffectManager/InitData _initData
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::NoteCutSoundEffectManager::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteCutSoundEffectManager::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0xDC1B94
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC1BA4
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC1BB4
    // private readonly NoteCutSoundEffect/Pool _noteCutSoundEffectPool
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::NoteCutSoundEffect::Pool* noteCutSoundEffectPool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteCutSoundEffect::Pool*) == 0x8);
    // [InjectAttribute] Offset: 0xDC1BC4
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC1BD4
    // private System.Boolean <handleWrongSaberTypeAsGood>k__BackingField
    // Size: 0x1
    // Offset: 0x68
    bool handleWrongSaberTypeAsGood;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: handleWrongSaberTypeAsGood and: randomLongCutSoundPicker
    char __padding10[0x7] = {};
    // private RandomObjectPicker`1<UnityEngine.AudioClip> _randomLongCutSoundPicker
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>* randomLongCutSoundPicker;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>*) == 0x8);
    // private RandomObjectPicker`1<UnityEngine.AudioClip> _randomShortCutSoundPicker
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>* randomShortCutSoundPicker;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>*) == 0x8);
    // private System.Single _prevNoteATime
    // Size: 0x4
    // Offset: 0x80
    float prevNoteATime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _prevNoteBTime
    // Size: 0x4
    // Offset: 0x84
    float prevNoteBTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private NoteCutSoundEffect _prevNoteASoundEffect
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::NoteCutSoundEffect* prevNoteASoundEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteCutSoundEffect*) == 0x8);
    // private NoteCutSoundEffect _prevNoteBSoundEffect
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::NoteCutSoundEffect* prevNoteBSoundEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteCutSoundEffect*) == 0x8);
    // private System.Single _beatAlignOffset
    // Size: 0x4
    // Offset: 0x98
    float beatAlignOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _useTestAudioClips
    // Size: 0x1
    // Offset: 0x9C
    bool useTestAudioClips;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useTestAudioClips and: noteCutSoundEffectPoolContainer
    char __padding18[0x3] = {};
    // private MonoMemoryPoolContainer`1<NoteCutSoundEffect> _noteCutSoundEffectPoolContainer
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::NoteCutSoundEffect*>* noteCutSoundEffectPoolContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::NoteCutSoundEffect*>*) == 0x8);
    // Creating value type constructor for type: NoteCutSoundEffectManager
    NoteCutSoundEffectManager(GlobalNamespace::AudioManagerSO* audioManager_ = {}, float audioSamplesBeatAlignOffset_ = {}, ::Array<UnityEngine::AudioClip*>* longCutEffectsAudioClips_ = {}, ::Array<UnityEngine::AudioClip*>* shortCutEffectsAudioClips_ = {}, UnityEngine::AudioClip* testAudioClip_ = {}, GlobalNamespace::NoteCutSoundEffectManager::InitData* initData_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::SaberManager* saberManager_ = {}, GlobalNamespace::NoteCutSoundEffect::Pool* noteCutSoundEffectPool_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, bool handleWrongSaberTypeAsGood_ = {}, GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>* randomLongCutSoundPicker_ = {}, GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>* randomShortCutSoundPicker_ = {}, float prevNoteATime_ = {}, float prevNoteBTime_ = {}, GlobalNamespace::NoteCutSoundEffect* prevNoteASoundEffect_ = {}, GlobalNamespace::NoteCutSoundEffect* prevNoteBSoundEffect_ = {}, float beatAlignOffset_ = {}, bool useTestAudioClips_ = {}, GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::NoteCutSoundEffect*>* noteCutSoundEffectPoolContainer_ = {}) noexcept : audioManager{audioManager_}, audioSamplesBeatAlignOffset{audioSamplesBeatAlignOffset_}, longCutEffectsAudioClips{longCutEffectsAudioClips_}, shortCutEffectsAudioClips{shortCutEffectsAudioClips_}, testAudioClip{testAudioClip_}, initData{initData_}, beatmapObjectManager{beatmapObjectManager_}, saberManager{saberManager_}, noteCutSoundEffectPool{noteCutSoundEffectPool_}, audioTimeSyncController{audioTimeSyncController_}, handleWrongSaberTypeAsGood{handleWrongSaberTypeAsGood_}, randomLongCutSoundPicker{randomLongCutSoundPicker_}, randomShortCutSoundPicker{randomShortCutSoundPicker_}, prevNoteATime{prevNoteATime_}, prevNoteBTime{prevNoteBTime_}, prevNoteASoundEffect{prevNoteASoundEffect_}, prevNoteBSoundEffect{prevNoteBSoundEffect_}, beatAlignOffset{beatAlignOffset_}, useTestAudioClips{useTestAudioClips_}, noteCutSoundEffectPoolContainer{noteCutSoundEffectPoolContainer_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kMaxNumberOfEffects
    static constexpr const int kMaxNumberOfEffects = 64;
    // Get static field: static private System.Int32 kMaxNumberOfEffects
    static int _get_kMaxNumberOfEffects();
    // Set static field: static private System.Int32 kMaxNumberOfEffects
    static void _set_kMaxNumberOfEffects(int value);
    // static field const value: static private System.Single kTwoNotesAtTheSameTimeVolumeMul
    static constexpr const float kTwoNotesAtTheSameTimeVolumeMul = 0.9;
    // Get static field: static private System.Single kTwoNotesAtTheSameTimeVolumeMul
    static float _get_kTwoNotesAtTheSameTimeVolumeMul();
    // Set static field: static private System.Single kTwoNotesAtTheSameTimeVolumeMul
    static void _set_kTwoNotesAtTheSameTimeVolumeMul(float value);
    // static field const value: static private System.Single kDenseNotesVolumeMul
    static constexpr const float kDenseNotesVolumeMul = 0.9;
    // Get static field: static private System.Single kDenseNotesVolumeMul
    static float _get_kDenseNotesVolumeMul();
    // Set static field: static private System.Single kDenseNotesVolumeMul
    static void _set_kDenseNotesVolumeMul(float value);
    // public System.Boolean get_handleWrongSaberTypeAsGood()
    // Offset: 0xFE39CC
    bool get_handleWrongSaberTypeAsGood();
    // public System.Void set_handleWrongSaberTypeAsGood(System.Boolean value)
    // Offset: 0xFE39D4
    void set_handleWrongSaberTypeAsGood(bool value);
    // protected System.Void Start()
    // Offset: 0xFE39E0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xFE3C1C
    void OnDestroy();
    // private System.Void HandleNoteWasSpawned(NoteController noteController)
    // Offset: 0xFE3D0C
    void HandleNoteWasSpawned(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteWasCut(NoteController noteController, NoteCutInfo noteCutInfo)
    // Offset: 0xFE419C
    void HandleNoteWasCut(GlobalNamespace::NoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo);
    // private System.Void HandleCutSoundEffectDidFinish(NoteCutSoundEffect cutSoundEffect)
    // Offset: 0xFE42B8
    void HandleCutSoundEffectDidFinish(GlobalNamespace::NoteCutSoundEffect* cutSoundEffect);
    // public System.Void Pause()
    // Offset: 0xFE4364
    void Pause();
    // public System.Void Resume()
    // Offset: 0xFE4460
    void Resume();
    // public System.Void .ctor()
    // Offset: 0xFE45A8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutSoundEffectManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NoteCutSoundEffectManager").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutSoundEffectManager*, creationType>()));
    }
  }; // NoteCutSoundEffectManager
  static check_size<sizeof(NoteCutSoundEffectManager), 160 + sizeof(GlobalNamespace::MonoMemoryPoolContainer_1<GlobalNamespace::NoteCutSoundEffect*>*)> __GlobalNamespace_NoteCutSoundEffectManagerSizeCheck;
  static_assert(sizeof(NoteCutSoundEffectManager) == 0xA8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutSoundEffectManager*, "", "NoteCutSoundEffectManager");
#pragma pack(pop)
