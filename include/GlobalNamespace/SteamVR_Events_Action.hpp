// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: SteamVR_Events/Action
  // [] Offset: FFFFFFFF
  class SteamVR_Events::Action : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Action
    Action() noexcept {}
    // public System.Void Enable(System.Boolean enabled)
    // Offset: 0xFFFFFFFF
    void Enable(bool enabled);
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0x11051B0
    void set_enabled(bool value);
    // protected System.Void .ctor()
    // Offset: 0x1106AF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Events::Action* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("Action").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Events::Action*, creationType>()));
    }
  }; // SteamVR_Events/Action
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Events::Action*, "", "SteamVR_Events/Action");
#pragma pack(pop)
