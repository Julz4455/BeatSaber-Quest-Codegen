// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelInfoSaveData
  class StandardLevelInfoSaveData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: StandardLevelLoader
  // [] Offset: FFFFFFFF
  class StandardLevelLoader : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: StandardLevelLoader
    StandardLevelLoader() noexcept {}
    // static public StandardLevelInfoSaveData LoadStandardLevelSaveData(System.String levelInfoFilenamePath)
    // Offset: 0xF449B4
    static GlobalNamespace::StandardLevelInfoSaveData* LoadStandardLevelSaveData(::Il2CppString* levelInfoFilenamePath);
  }; // StandardLevelLoader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelLoader*, "", "StandardLevelLoader");
#pragma pack(pop)
