// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LeaderboardScoreUploader
  class LeaderboardScoreUploader : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::LeaderboardScoreUploader::ScoreData
    class ScoreData;
    // Nested type: GlobalNamespace::LeaderboardScoreUploader::ScoresToUploadData
    class ScoresToUploadData;
    // Nested type: GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback
    class UploadScoreCallback;
    // Nested type: GlobalNamespace::LeaderboardScoreUploader::$$c__DisplayClass14_0
    class $$c__DisplayClass14_0;
    // Nested type: GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$d__14
    class $UploadScoresCoroutine$d__14;
    // private System.Action allScoresDidUploadEvent
    // Offset: 0x18
    System::Action* allScoresDidUploadEvent;
    // private System.Collections.Generic.List`1<LeaderboardScoreUploader/ScoreData> _scoresToUpload
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::LeaderboardScoreUploader::ScoreData*>* scoresToUpload;
    // private System.Collections.Generic.List`1<LeaderboardScoreUploader/ScoreData> _scoresToUploadForCurrentPlayer
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::LeaderboardScoreUploader::ScoreData*>* scoresToUploadForCurrentPlayer;
    // private LeaderboardScoreUploader/UploadScoreCallback _uploadScoreCallback
    // Offset: 0x30
    GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback* uploadScoreCallback;
    // private System.String _playerId
    // Offset: 0x38
    ::Il2CppString* playerId;
    // private System.Boolean _uploading
    // Offset: 0x40
    bool uploading;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kScoresToUploadFileName
    static constexpr const char* kScoresToUploadFileName = "ScoresToUpload.dat";
    // Get static field: static private System.String kScoresToUploadFileName
    static ::Il2CppString* _get_kScoresToUploadFileName();
    // Set static field: static private System.String kScoresToUploadFileName
    static void _set_kScoresToUploadFileName(::Il2CppString* value);
    // public System.Void add_allScoresDidUploadEvent(System.Action value)
    // Offset: 0x101B91C
    void add_allScoresDidUploadEvent(System::Action* value);
    // public System.Void remove_allScoresDidUploadEvent(System.Action value)
    // Offset: 0x101B9C0
    void remove_allScoresDidUploadEvent(System::Action* value);
    // public System.Void Init(LeaderboardScoreUploader/UploadScoreCallback uploadScoreCallback, System.String playerId)
    // Offset: 0x101BA64
    void Init(GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback* uploadScoreCallback, ::Il2CppString* playerId);
    // private System.Void OnApplicationQuit()
    // Offset: 0x101BB40
    void OnApplicationQuit();
    // private System.Collections.IEnumerator UploadScoresCoroutine()
    // Offset: 0x101BAC4
    System::Collections::IEnumerator* UploadScoresCoroutine();
    // private System.Void LoadScoresToUploadFromFile()
    // Offset: 0x101BB70
    void LoadScoresToUploadFromFile();
    // private System.Void SaveScoresToUploadToFile()
    // Offset: 0x101BD78
    void SaveScoresToUploadToFile();
    // public System.Void AddScore(LeaderboardScoreUploader/ScoreData scoreData)
    // Offset: 0x101BE8C
    void AddScore(GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData);
    // private System.Boolean <UploadScoresCoroutine>b__14_1()
    // Offset: 0x101C008
    bool $UploadScoresCoroutine$b__14_1();
    // public System.Void .ctor()
    // Offset: 0x101BF60
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LeaderboardScoreUploader* New_ctor();
  }; // LeaderboardScoreUploader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardScoreUploader*, "", "LeaderboardScoreUploader");
#pragma pack(pop)
