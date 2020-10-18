// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SongController
#include "GlobalNamespace/SongController.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: BeatmapData
  class BeatmapData;
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PatternFightSongController
  class PatternFightSongController : public GlobalNamespace::SongController {
    public:
    // Nested type: GlobalNamespace::PatternFightSongController::GameplayPhase
    struct GameplayPhase;
    // Autogenerated type: PatternFightSongController/GameplayPhase
    struct GameplayPhase : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: GameplayPhase
      constexpr GameplayPhase(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public PatternFightSongController/GameplayPhase Undefined
      static constexpr const int Undefined = -1;
      // Get static field: static public PatternFightSongController/GameplayPhase Undefined
      static GlobalNamespace::PatternFightSongController::GameplayPhase _get_Undefined();
      // Set static field: static public PatternFightSongController/GameplayPhase Undefined
      static void _set_Undefined(GlobalNamespace::PatternFightSongController::GameplayPhase value);
      // static field const value: static public PatternFightSongController/GameplayPhase Start
      static constexpr const int Start = 0;
      // Get static field: static public PatternFightSongController/GameplayPhase Start
      static GlobalNamespace::PatternFightSongController::GameplayPhase _get_Start();
      // Set static field: static public PatternFightSongController/GameplayPhase Start
      static void _set_Start(GlobalNamespace::PatternFightSongController::GameplayPhase value);
      // static field const value: static public PatternFightSongController/GameplayPhase DefineThisPlayerPattern
      static constexpr const int DefineThisPlayerPattern = 1;
      // Get static field: static public PatternFightSongController/GameplayPhase DefineThisPlayerPattern
      static GlobalNamespace::PatternFightSongController::GameplayPhase _get_DefineThisPlayerPattern();
      // Set static field: static public PatternFightSongController/GameplayPhase DefineThisPlayerPattern
      static void _set_DefineThisPlayerPattern(GlobalNamespace::PatternFightSongController::GameplayPhase value);
      // static field const value: static public PatternFightSongController/GameplayPhase ReplayThisPlayerPattern
      static constexpr const int ReplayThisPlayerPattern = 2;
      // Get static field: static public PatternFightSongController/GameplayPhase ReplayThisPlayerPattern
      static GlobalNamespace::PatternFightSongController::GameplayPhase _get_ReplayThisPlayerPattern();
      // Set static field: static public PatternFightSongController/GameplayPhase ReplayThisPlayerPattern
      static void _set_ReplayThisPlayerPattern(GlobalNamespace::PatternFightSongController::GameplayPhase value);
    }; // PatternFightSongController/GameplayPhase
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Offset: 0x20
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // private readonly BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Offset: 0x28
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // private BeatmapData _beatmapData
    // Offset: 0x38
    GlobalNamespace::BeatmapData* beatmapData;
    // private PatternFightSongController/GameplayPhase _gameplayPhase
    // Offset: 0x40
    GlobalNamespace::PatternFightSongController::GameplayPhase gameplayPhase;
    // private System.Int32 _gameplayPhaseNumber
    // Offset: 0x44
    int gameplayPhaseNumber;
    // private readonly System.Collections.Generic.HashSet`1<NoteData> _thisPlayerSourcePatternNoteData
    // Offset: 0x48
    System::Collections::Generic::HashSet_1<GlobalNamespace::NoteData*>* thisPlayerSourcePatternNoteData;
    // private readonly System.Collections.Generic.HashSet`1<NoteData> _thisPlayerDefinedPatternNoteData
    // Offset: 0x50
    System::Collections::Generic::HashSet_1<GlobalNamespace::NoteData*>* thisPlayerDefinedPatternNoteData;
    // static field const value: static private System.Single kBPM
    static constexpr const float kBPM = 120;
    // Get static field: static private System.Single kBPM
    static float _get_kBPM();
    // Set static field: static private System.Single kBPM
    static void _set_kBPM(float value);
    // static field const value: static private System.Single kPhaseLengthInBeats
    static constexpr const float kPhaseLengthInBeats = 8;
    // Get static field: static private System.Single kPhaseLengthInBeats
    static float _get_kPhaseLengthInBeats();
    // Set static field: static private System.Single kPhaseLengthInBeats
    static void _set_kPhaseLengthInBeats(float value);
    // protected System.Void Start()
    // Offset: 0xFD5ED4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xFD6064
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0xFD6104
    void Update();
    // private System.Void HandleNoteWasCut(NoteController noteController, NoteCutInfo noteCutInfo)
    // Offset: 0xFD6480
    void HandleNoteWasCut(GlobalNamespace::NoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo);
    // private System.Void NoteWasMissed(NoteController noteController)
    // Offset: 0xFD6688
    void NoteWasMissed(GlobalNamespace::NoteController* noteController);
    // private System.Void CreatePattern(System.Single time)
    // Offset: 0xFD61B4
    void CreatePattern(float time);
    // public System.Void StartSong(System.Single startTimeOffset)
    // Offset: 0xFD6048
    void StartSong(float startTimeOffset);
    // public override System.Void StopSong()
    // Offset: 0xFD678C
    // Implemented from: SongController
    // Base method: System.Void SongController::StopSong()
    void StopSong();
    // public override System.Void PauseSong()
    // Offset: 0xFD67A8
    // Implemented from: SongController
    // Base method: System.Void SongController::PauseSong()
    void PauseSong();
    // public override System.Void ResumeSong()
    // Offset: 0xFD67C4
    // Implemented from: SongController
    // Base method: System.Void SongController::ResumeSong()
    void ResumeSong();
    // public System.Void .ctor()
    // Offset: 0xFD67E0
    // Implemented from: SongController
    // Base method: System.Void SongController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PatternFightSongController* New_ctor();
  }; // PatternFightSongController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PatternFightSongController*, "", "PatternFightSongController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PatternFightSongController::GameplayPhase, "", "PatternFightSongController/GameplayPhase");
#pragma pack(pop)
