// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IReadonlyBeatmapLineData
#include "GlobalNamespace/IReadonlyBeatmapLineData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLineData
  class BeatmapLineData : public ::Il2CppObject, public GlobalNamespace::IReadonlyBeatmapLineData {
    public:
    // private readonly System.Collections.Generic.List`1<BeatmapObjectData> _beatmapObjectsData
    // Offset: 0x10
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>* beatmapObjectsData;
    // Creating conversion operator: operator System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>*
    constexpr operator System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>*() const noexcept {
      return beatmapObjectsData;
    }
    // public System.Void .ctor(System.Int32 initialCapacity)
    // Offset: 0x221FF1C
    static BeatmapLineData* New_ctor(int initialCapacity);
    // public System.Void .ctor(System.Collections.Generic.List`1<BeatmapObjectData> beatmapObjectData)
    // Offset: 0x221FFA8
    static BeatmapLineData* New_ctor(System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>* beatmapObjectData);
    // public System.Void AddBeatmapObjectData(BeatmapObjectData beatmapObjectData)
    // Offset: 0x221FFDC
    void AddBeatmapObjectData(GlobalNamespace::BeatmapObjectData* beatmapObjectData);
    // public System.Collections.Generic.IReadOnlyList`1<BeatmapObjectData> get_beatmapObjectsData()
    // Offset: 0x221FF14
    // Implemented from: IReadonlyBeatmapLineData
    // Base method: System.Collections.Generic.IReadOnlyList`1<BeatmapObjectData> IReadonlyBeatmapLineData::get_beatmapObjectsData()
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::BeatmapObjectData*>* get_beatmapObjectsData();
  }; // BeatmapLineData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLineData*, "", "BeatmapLineData");
#pragma pack(pop)
