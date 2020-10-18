// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamLevelProductsModelSO
#include "GlobalNamespace/SteamLevelProductsModelSO.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamLevelProductsModelSO/LevelProductData
  class SteamLevelProductsModelSO::LevelProductData : public ::Il2CppObject {
    public:
    // private System.UInt32 _appId
    // Offset: 0x10
    uint appId;
    // private System.String _levelId
    // Offset: 0x18
    ::Il2CppString* levelId;
    // public System.UInt32 get_appId()
    // Offset: 0xF2CA14
    uint get_appId();
    // public System.String get_levelId()
    // Offset: 0xF2CA1C
    ::Il2CppString* get_levelId();
    // public System.Void .ctor()
    // Offset: 0xF2CA24
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SteamLevelProductsModelSO::LevelProductData* New_ctor();
  }; // SteamLevelProductsModelSO/LevelProductData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamLevelProductsModelSO::LevelProductData*, "", "SteamLevelProductsModelSO/LevelProductData");
#pragma pack(pop)
