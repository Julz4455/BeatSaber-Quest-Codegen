// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IRichPresenceData
#include "GlobalNamespace/IRichPresenceData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PlayingDifficultyBeatmapRichPresenceData
  // [] Offset: FFFFFFFF
  class PlayingDifficultyBeatmapRichPresenceData : public ::Il2CppObject/*, public GlobalNamespace::IRichPresenceData*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD370B0
    // private System.String <apiName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* apiName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD370C0
    // private System.String <localizedDescription>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* localizedDescription;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: PlayingDifficultyBeatmapRichPresenceData
    PlayingDifficultyBeatmapRichPresenceData(::Il2CppString* apiName_ = {}, ::Il2CppString* localizedDescription_ = {}) noexcept : apiName{apiName_}, localizedDescription{localizedDescription_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IRichPresenceData
    operator GlobalNamespace::IRichPresenceData() noexcept {
      return *reinterpret_cast<GlobalNamespace::IRichPresenceData*>(this);
    }
    // private System.Void set_apiName(System.String value)
    // Offset: 0xFBCF78
    void set_apiName(::Il2CppString* value);
    // private System.Void set_localizedDescription(System.String value)
    // Offset: 0xFBCF88
    void set_localizedDescription(::Il2CppString* value);
    // public System.Void .ctor(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xFBCF90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayingDifficultyBeatmapRichPresenceData* New_ctor(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayingDifficultyBeatmapRichPresenceData*, creationType>(difficultyBeatmap)));
    }
    // private System.String GetDestinationLocalizedString(IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0xFBCFE8
    ::Il2CppString* GetDestinationLocalizedString(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.String get_apiName()
    // Offset: 0xFBCF70
    // Implemented from: IRichPresenceData
    // Base method: System.String IRichPresenceData::get_apiName()
    ::Il2CppString* get_apiName();
    // public System.String get_localizedDescription()
    // Offset: 0xFBCF80
    // Implemented from: IRichPresenceData
    // Base method: System.String IRichPresenceData::get_localizedDescription()
    ::Il2CppString* get_localizedDescription();
  }; // PlayingDifficultyBeatmapRichPresenceData
  #pragma pack(pop)
  static check_size<sizeof(PlayingDifficultyBeatmapRichPresenceData), 24 + sizeof(::Il2CppString*)> __GlobalNamespace_PlayingDifficultyBeatmapRichPresenceDataSizeCheck;
  static_assert(sizeof(PlayingDifficultyBeatmapRichPresenceData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayingDifficultyBeatmapRichPresenceData*, "", "PlayingDifficultyBeatmapRichPresenceData");
