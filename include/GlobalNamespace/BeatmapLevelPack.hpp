// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IBeatmapLevelPack
#include "GlobalNamespace/IBeatmapLevelPack.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelPack
  class BeatmapLevelPack : public ::Il2CppObject, public GlobalNamespace::IBeatmapLevelPack {
    public:
    // private System.String _levelPackID
    // Offset: 0x10
    ::Il2CppString* levelPackID;
    // private System.String _packName
    // Offset: 0x18
    ::Il2CppString* packName;
    // private System.String _shortPackName
    // Offset: 0x20
    ::Il2CppString* shortPackName;
    // private UnityEngine.Sprite _coverImage
    // Offset: 0x28
    UnityEngine::Sprite* coverImage;
    // private IBeatmapLevelCollection _beatmapLevelCollection
    // Offset: 0x30
    GlobalNamespace::IBeatmapLevelCollection* beatmapLevelCollection;
    // public System.Void .ctor(System.String levelPackID, System.String packName, System.String shortPackName, UnityEngine.Sprite coverImage, IBeatmapLevelCollection levelCollection)
    // Offset: 0x1055C34
    static BeatmapLevelPack* New_ctor(::Il2CppString* levelPackID, ::Il2CppString* packName, ::Il2CppString* shortPackName, UnityEngine::Sprite* coverImage, GlobalNamespace::IBeatmapLevelCollection* levelCollection);
    // static public BeatmapLevelPack CreateBeatmapLevelPackByUsingBeatmapCharacteristicFiltering(IBeatmapLevelPack beatmapLevelPack, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x1055CC8
    static GlobalNamespace::BeatmapLevelPack* CreateBeatmapLevelPackByUsingBeatmapCharacteristicFiltering(GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // public System.String get_packID()
    // Offset: 0x1055C04
    // Implemented from: IBeatmapLevelPack
    // Base method: System.String IBeatmapLevelPack::get_packID()
    ::Il2CppString* get_packID();
    // public System.String get_packName()
    // Offset: 0x1055C0C
    // Implemented from: IBeatmapLevelPack
    // Base method: System.String IBeatmapLevelPack::get_packName()
    ::Il2CppString* get_packName();
    // public System.String get_shortPackName()
    // Offset: 0x1055C14
    // Implemented from: IBeatmapLevelPack
    // Base method: System.String IBeatmapLevelPack::get_shortPackName()
    ::Il2CppString* get_shortPackName();
    // public System.String get_collectionName()
    // Offset: 0x1055C1C
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: System.String IAnnotatedBeatmapLevelCollection::get_collectionName()
    ::Il2CppString* get_collectionName();
    // public UnityEngine.Sprite get_coverImage()
    // Offset: 0x1055C24
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: UnityEngine.Sprite IAnnotatedBeatmapLevelCollection::get_coverImage()
    UnityEngine::Sprite* get_coverImage();
    // public IBeatmapLevelCollection get_beatmapLevelCollection()
    // Offset: 0x1055C2C
    // Implemented from: IAnnotatedBeatmapLevelCollection
    // Base method: IBeatmapLevelCollection IAnnotatedBeatmapLevelCollection::get_beatmapLevelCollection()
    GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();
  }; // BeatmapLevelPack
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelPack*, "", "BeatmapLevelPack");
#pragma pack(pop)
