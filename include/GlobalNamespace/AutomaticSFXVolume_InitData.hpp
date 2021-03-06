// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AutomaticSFXVolume
#include "GlobalNamespace/AutomaticSFXVolume.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x15
  #pragma pack(push, 1)
  // Autogenerated type: AutomaticSFXVolume/InitData
  // [] Offset: FFFFFFFF
  class AutomaticSFXVolume::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Single volumeOffset
    // Size: 0x4
    // Offset: 0x10
    float volumeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public readonly System.Boolean adaptiveSfx
    // Size: 0x1
    // Offset: 0x14
    bool adaptiveSfx;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InitData
    InitData(float volumeOffset_ = {}, bool adaptiveSfx_ = {}) noexcept : volumeOffset{volumeOffset_}, adaptiveSfx{adaptiveSfx_} {}
    // public System.Void .ctor(System.Single volumeOffset, System.Boolean adaptiveSfx)
    // Offset: 0x1031D98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AutomaticSFXVolume::InitData* New_ctor(float volumeOffset, bool adaptiveSfx) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AutomaticSFXVolume::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AutomaticSFXVolume::InitData*, creationType>(volumeOffset, adaptiveSfx)));
    }
  }; // AutomaticSFXVolume/InitData
  #pragma pack(pop)
  static check_size<sizeof(AutomaticSFXVolume::InitData), 20 + sizeof(bool)> __GlobalNamespace_AutomaticSFXVolume_InitDataSizeCheck;
  static_assert(sizeof(AutomaticSFXVolume::InitData) == 0x15);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AutomaticSFXVolume::InitData*, "", "AutomaticSFXVolume/InitData");
