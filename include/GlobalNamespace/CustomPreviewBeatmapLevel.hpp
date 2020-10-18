// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelInfoSaveData
  class StandardLevelInfoSaveData;
  // Forward declaring type: IAudioClipAsyncLoader
  class IAudioClipAsyncLoader;
  // Forward declaring type: ISpriteAsyncLoader
  class ISpriteAsyncLoader;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: PreviewDifficultyBeatmapSet
  class PreviewDifficultyBeatmapSet;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CustomPreviewBeatmapLevel
  class CustomPreviewBeatmapLevel : public ::Il2CppObject, public GlobalNamespace::IPreviewBeatmapLevel {
    public:
    // Nested type: GlobalNamespace::CustomPreviewBeatmapLevel::$GetPreviewAudioClipAsync$d__60
    struct $GetPreviewAudioClipAsync$d__60;
    // Nested type: GlobalNamespace::CustomPreviewBeatmapLevel::$GetCoverImageAsync$d__61
    struct $GetCoverImageAsync$d__61;
    // private StandardLevelInfoSaveData _standardLevelInfoSaveData
    // Offset: 0x10
    GlobalNamespace::StandardLevelInfoSaveData* standardLevelInfoSaveData;
    // private System.String _customLevelPath
    // Offset: 0x18
    ::Il2CppString* customLevelPath;
    // private IAudioClipAsyncLoader _audioClipAsyncLoader
    // Offset: 0x20
    GlobalNamespace::IAudioClipAsyncLoader* audioClipAsyncLoader;
    // private ISpriteAsyncLoader _spriteAsyncLoader
    // Offset: 0x28
    GlobalNamespace::ISpriteAsyncLoader* spriteAsyncLoader;
    // private System.String _levelID
    // Offset: 0x30
    ::Il2CppString* levelID;
    // private System.String _songName
    // Offset: 0x38
    ::Il2CppString* songName;
    // private System.String _songSubName
    // Offset: 0x40
    ::Il2CppString* songSubName;
    // private System.String _songAuthorName
    // Offset: 0x48
    ::Il2CppString* songAuthorName;
    // private System.String _levelAuthorName
    // Offset: 0x50
    ::Il2CppString* levelAuthorName;
    // private UnityEngine.AudioClip _previewAudioClip
    // Offset: 0x58
    UnityEngine::AudioClip* previewAudioClip;
    // private System.Single _beatsPerMinute
    // Offset: 0x60
    float beatsPerMinute;
    // private System.Single _songTimeOffset
    // Offset: 0x64
    float songTimeOffset;
    // private System.Single _shuffle
    // Offset: 0x68
    float shuffle;
    // private System.Single _shufflePeriod
    // Offset: 0x6C
    float shufflePeriod;
    // private System.Single _previewStartTime
    // Offset: 0x70
    float previewStartTime;
    // private System.Single _previewDuration
    // Offset: 0x74
    float previewDuration;
    // private System.Single _songDuration
    // Offset: 0x78
    float songDuration;
    // private UnityEngine.Sprite _defaultCoverImage
    // Offset: 0x80
    UnityEngine::Sprite* defaultCoverImage;
    // private UnityEngine.Sprite _coverImage
    // Offset: 0x88
    UnityEngine::Sprite* coverImage;
    // private EnvironmentInfoSO _environmentInfo
    // Offset: 0x90
    GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // private EnvironmentInfoSO _allDirectionsEnvironmentInfo
    // Offset: 0x98
    GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo;
    // private PreviewDifficultyBeatmapSet[] _previewDifficultyBeatmapSets
    // Offset: 0xA0
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets;
    // public IAudioClipAsyncLoader get_audioClipAsyncLoader()
    // Offset: 0xF5B95C
    GlobalNamespace::IAudioClipAsyncLoader* get_audioClipAsyncLoader();
    // public ISpriteAsyncLoader get_spriteAsyncLoader()
    // Offset: 0xF5B964
    GlobalNamespace::ISpriteAsyncLoader* get_spriteAsyncLoader();
    // public StandardLevelInfoSaveData get_standardLevelInfoSaveData()
    // Offset: 0xF5B96C
    GlobalNamespace::StandardLevelInfoSaveData* get_standardLevelInfoSaveData();
    // public System.String get_customLevelPath()
    // Offset: 0xF5B974
    ::Il2CppString* get_customLevelPath();
    // public UnityEngine.Sprite get_defaultCoverImage()
    // Offset: 0xF5B9D4
    UnityEngine::Sprite* get_defaultCoverImage();
    // public System.Void .ctor(UnityEngine.Sprite defaultCoverImage, StandardLevelInfoSaveData standardLevelInfoSaveData, System.String customLevelPath, IAudioClipAsyncLoader audioClipAsyncLoader, ISpriteAsyncLoader spriteAsyncLoader, System.String levelID, System.String songName, System.String songSubName, System.String songAuthorName, System.String levelAuthorName, System.Single beatsPerMinute, System.Single songTimeOffset, System.Single shuffle, System.Single shufflePeriod, System.Single previewStartTime, System.Single previewDuration, EnvironmentInfoSO environmentInfo, EnvironmentInfoSO allDirectionsEnvironmentInfo, PreviewDifficultyBeatmapSet[] previewDifficultyBeatmapSets)
    // Offset: 0xF5B598
    static CustomPreviewBeatmapLevel* New_ctor(UnityEngine::Sprite* defaultCoverImage, GlobalNamespace::StandardLevelInfoSaveData* standardLevelInfoSaveData, ::Il2CppString* customLevelPath, GlobalNamespace::IAudioClipAsyncLoader* audioClipAsyncLoader, GlobalNamespace::ISpriteAsyncLoader* spriteAsyncLoader, ::Il2CppString* levelID, ::Il2CppString* songName, ::Il2CppString* songSubName, ::Il2CppString* songAuthorName, ::Il2CppString* levelAuthorName, float beatsPerMinute, float songTimeOffset, float shuffle, float shufflePeriod, float previewStartTime, float previewDuration, GlobalNamespace::EnvironmentInfoSO* environmentInfo, GlobalNamespace::EnvironmentInfoSO* allDirectionsEnvironmentInfo, ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* previewDifficultyBeatmapSets);
    // public System.String get_levelID()
    // Offset: 0xF5B97C
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_levelID()
    ::Il2CppString* get_levelID();
    // public System.String get_songName()
    // Offset: 0xF5B984
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songName()
    ::Il2CppString* get_songName();
    // public System.String get_songSubName()
    // Offset: 0xF5B98C
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songSubName()
    ::Il2CppString* get_songSubName();
    // public System.String get_songAuthorName()
    // Offset: 0xF5B994
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_songAuthorName()
    ::Il2CppString* get_songAuthorName();
    // public System.String get_levelAuthorName()
    // Offset: 0xF5B99C
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.String IPreviewBeatmapLevel::get_levelAuthorName()
    ::Il2CppString* get_levelAuthorName();
    // public System.Single get_beatsPerMinute()
    // Offset: 0xF5B9A4
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_beatsPerMinute()
    float get_beatsPerMinute();
    // public System.Single get_songTimeOffset()
    // Offset: 0xF5B9AC
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_songTimeOffset()
    float get_songTimeOffset();
    // public System.Single get_songDuration()
    // Offset: 0xF5B9B4
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_songDuration()
    float get_songDuration();
    // public System.Single get_shuffle()
    // Offset: 0xF5B9BC
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_shuffle()
    float get_shuffle();
    // public System.Single get_shufflePeriod()
    // Offset: 0xF5B9C4
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_shufflePeriod()
    float get_shufflePeriod();
    // public System.Single get_previewStartTime()
    // Offset: 0xF5B9CC
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_previewStartTime()
    float get_previewStartTime();
    // public System.Single get_previewDuration()
    // Offset: 0xF5B9DC
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Single IPreviewBeatmapLevel::get_previewDuration()
    float get_previewDuration();
    // public EnvironmentInfoSO get_environmentInfo()
    // Offset: 0xF5B9E4
    // Implemented from: IPreviewBeatmapLevel
    // Base method: EnvironmentInfoSO IPreviewBeatmapLevel::get_environmentInfo()
    GlobalNamespace::EnvironmentInfoSO* get_environmentInfo();
    // public EnvironmentInfoSO get_allDirectionsEnvironmentInfo()
    // Offset: 0xF5B9EC
    // Implemented from: IPreviewBeatmapLevel
    // Base method: EnvironmentInfoSO IPreviewBeatmapLevel::get_allDirectionsEnvironmentInfo()
    GlobalNamespace::EnvironmentInfoSO* get_allDirectionsEnvironmentInfo();
    // public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xF5B9F4
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Threading.Tasks.Task`1<UnityEngine.AudioClip> IPreviewBeatmapLevel::GetPreviewAudioClipAsync(System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* GetPreviewAudioClipAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Threading.Tasks.Task`1<UnityEngine.Sprite> GetCoverImageAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0xF5BB44
    // Implemented from: IPreviewBeatmapLevel
    // Base method: System.Threading.Tasks.Task`1<UnityEngine.Sprite> IPreviewBeatmapLevel::GetCoverImageAsync(System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* GetCoverImageAsync(System::Threading::CancellationToken cancellationToken);
    // public PreviewDifficultyBeatmapSet[] get_previewDifficultyBeatmapSets()
    // Offset: 0xF5BC94
    // Implemented from: IPreviewBeatmapLevel
    // Base method: PreviewDifficultyBeatmapSet[] IPreviewBeatmapLevel::get_previewDifficultyBeatmapSets()
    ::Array<GlobalNamespace::PreviewDifficultyBeatmapSet*>* get_previewDifficultyBeatmapSets();
  }; // CustomPreviewBeatmapLevel
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomPreviewBeatmapLevel*, "", "CustomPreviewBeatmapLevel");
#pragma pack(pop)
