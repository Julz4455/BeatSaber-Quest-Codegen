// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SaberManager
#include "GlobalNamespace/SaberManager.hpp"
// Including type: SaberType
#include "GlobalNamespace/SaberType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SaberManager/InitData
  class SaberManager::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean oneSaberMode
    // Offset: 0x10
    bool oneSaberMode;
    // public readonly SaberType oneSaberType
    // Offset: 0x14
    GlobalNamespace::SaberType oneSaberType;
    // public System.Void .ctor(System.Boolean oneSaberMode, SaberType oneSaberType)
    // Offset: 0xF80694
    static SaberManager::InitData* New_ctor(bool oneSaberMode, GlobalNamespace::SaberType oneSaberType);
  }; // SaberManager/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberManager::InitData*, "", "SaberManager/InitData");
#pragma pack(pop)
