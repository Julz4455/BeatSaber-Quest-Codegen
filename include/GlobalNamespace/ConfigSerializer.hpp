// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: ConfigSerializer
  // [] Offset: FFFFFFFF
  class ConfigSerializer : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ConfigSerializer
    ConfigSerializer() noexcept {}
    // static public System.Void SaveConfig(System.Object config, System.String filePath)
    // Offset: 0x102B770
    static void SaveConfig(::Il2CppObject* config, ::Il2CppString* filePath);
    // static public System.Boolean LoadConfig(System.Object config, System.String filePath)
    // Offset: 0x102BBE0
    static bool LoadConfig(::Il2CppObject* config, ::Il2CppString* filePath);
    // public System.Void .ctor()
    // Offset: 0x102C1A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConfigSerializer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("ConfigSerializer").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConfigSerializer*, creationType>()));
    }
  }; // ConfigSerializer
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConfigSerializer*, "", "ConfigSerializer");
#pragma pack(pop)
