// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x28
  // Autogenerated type: HMUI.FlowCoordinator/<>c__DisplayClass38_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DA6300
  class FlowCoordinator::$$c__DisplayClass38_0 : public ::Il2CppObject {
    public:
    // public System.Boolean immediately
    // Size: 0x1
    // Offset: 0x10
    bool immediately;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: immediately and: $$4__this
    char __padding0[0x7] = {};
    // public HMUI.FlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x18
    HMUI::FlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(HMUI::FlowCoordinator*) == 0x8);
    // public System.Action finishedCallback
    // Size: 0x8
    // Offset: 0x20
    System::Action* finishedCallback;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass38_0
    $$c__DisplayClass38_0(bool immediately_ = {}, HMUI::FlowCoordinator* $$4__this_ = {}, System::Action* finishedCallback_ = {}) noexcept : immediately{immediately_}, $$4__this{$$4__this_}, finishedCallback{finishedCallback_} {}
    // public System.Void .ctor()
    // Offset: 0x10AF448
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlowCoordinator::$$c__DisplayClass38_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("HMUI").WithContext("$$c__DisplayClass38_0").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlowCoordinator::$$c__DisplayClass38_0*, creationType>()));
    }
  }; // HMUI.FlowCoordinator/<>c__DisplayClass38_0
  static check_size<sizeof(FlowCoordinator::$$c__DisplayClass38_0), 32 + sizeof(System::Action*)> __HMUI_FlowCoordinator_$$c__DisplayClass38_0SizeCheck;
  static_assert(sizeof(FlowCoordinator::$$c__DisplayClass38_0) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::FlowCoordinator::$$c__DisplayClass38_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass38_0");
#pragma pack(pop)
