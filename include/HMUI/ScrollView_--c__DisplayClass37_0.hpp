// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ScrollView
#include "HMUI/ScrollView.hpp"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.ScrollView/<>c__DisplayClass37_0
  class ScrollView::$$c__DisplayClass37_0 : public ::Il2CppObject {
    public:
    // public System.Single threshold
    // Offset: 0x10
    float threshold;
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return threshold;
    }
    // System.Boolean <PageDownButtonPressed>b__0(System.Single posy)
    // Offset: 0x11777C8
    bool $PageDownButtonPressed$b__0(float posy);
    // public System.Void .ctor()
    // Offset: 0x1176F38
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ScrollView::$$c__DisplayClass37_0* New_ctor();
  }; // HMUI.ScrollView/<>c__DisplayClass37_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::ScrollView::$$c__DisplayClass37_0*, "HMUI", "ScrollView/<>c__DisplayClass37_0");
#pragma pack(pop)
