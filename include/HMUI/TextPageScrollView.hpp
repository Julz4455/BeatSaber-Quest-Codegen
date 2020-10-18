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
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.TextPageScrollView
  class TextPageScrollView : public HMUI::ScrollView {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Offset: 0x90
    TMPro::TextMeshProUGUI* text;
    // public System.Void SetText(System.String text)
    // Offset: 0x1181664
    void SetText(::Il2CppString* text);
    // public System.Void .ctor()
    // Offset: 0x11816C8
    // Implemented from: HMUI.ScrollView
    // Base method: System.Void ScrollView::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TextPageScrollView* New_ctor();
  }; // HMUI.TextPageScrollView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::TextPageScrollView*, "HMUI", "TextPageScrollView");
#pragma pack(pop)
