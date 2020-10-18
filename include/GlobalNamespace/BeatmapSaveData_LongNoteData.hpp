// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapSaveData
#include "GlobalNamespace/BeatmapSaveData.hpp"
// Including type: BeatmapSaveData/ITime
#include "GlobalNamespace/BeatmapSaveData_ITime.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
// Including type: BeatmapSaveData/LongNoteType
#include "GlobalNamespace/BeatmapSaveData_LongNoteType.hpp"
// Including type: NoteCutDirection
#include "GlobalNamespace/NoteCutDirection.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapSaveData/LongNoteData
  class BeatmapSaveData::LongNoteData : public ::Il2CppObject, public GlobalNamespace::BeatmapSaveData::ITime {
    public:
    // private System.Single _time
    // Offset: 0x10
    float time;
    // private System.Int32 _lineIndex
    // Offset: 0x14
    int lineIndex;
    // private NoteLineLayer _lineLayer
    // Offset: 0x18
    GlobalNamespace::NoteLineLayer lineLayer;
    // private BeatmapSaveData/LongNoteType _type
    // Offset: 0x1C
    GlobalNamespace::BeatmapSaveData::LongNoteType type;
    // private NoteCutDirection _cutDirection
    // Offset: 0x20
    GlobalNamespace::NoteCutDirection cutDirection;
    // private System.Single _duration
    // Offset: 0x24
    float duration;
    // public System.Int32 get_lineIndex()
    // Offset: 0xF18CC8
    int get_lineIndex();
    // public NoteLineLayer get_lineLayer()
    // Offset: 0xF18CD0
    GlobalNamespace::NoteLineLayer get_lineLayer();
    // public BeatmapSaveData/LongNoteType get_type()
    // Offset: 0xF18CD8
    GlobalNamespace::BeatmapSaveData::LongNoteType get_type();
    // public NoteCutDirection get_cutDirection()
    // Offset: 0xF18CE0
    GlobalNamespace::NoteCutDirection get_cutDirection();
    // public System.Single get_duration()
    // Offset: 0xF18CE8
    float get_duration();
    // public System.Void .ctor(System.Single time, System.Int32 lineIndex, NoteLineLayer lineLayer, BeatmapSaveData/LongNoteType type, NoteCutDirection cutDirection, System.Single duration)
    // Offset: 0xF18CF0
    static BeatmapSaveData::LongNoteData* New_ctor(float time, int lineIndex, GlobalNamespace::NoteLineLayer lineLayer, GlobalNamespace::BeatmapSaveData::LongNoteType type, GlobalNamespace::NoteCutDirection cutDirection, float duration);
    // public System.Single get_time()
    // Offset: 0xF18CC0
    // Implemented from: BeatmapSaveData/ITime
    // Base method: System.Single ITime::get_time()
    float get_time();
    // public System.Void MoveTime(System.Single offset)
    // Offset: 0xF18D54
    // Implemented from: BeatmapSaveData/ITime
    // Base method: System.Void ITime::MoveTime(System.Single offset)
    void MoveTime(float offset);
  }; // BeatmapSaveData/LongNoteData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSaveData::LongNoteData*, "", "BeatmapSaveData/LongNoteData");
#pragma pack(pop)
