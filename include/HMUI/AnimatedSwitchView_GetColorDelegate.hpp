// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.AnimatedSwitchView
#include "HMUI/AnimatedSwitchView.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.AnimatedSwitchView/GetColorDelegate
  class AnimatedSwitchView::GetColorDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11AF82C
    static AnimatedSwitchView::GetColorDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public UnityEngine.Color Invoke(HMUI.AnimatedSwitchView/ColorBlock colorBlock)
    // Offset: 0x11AFA0C
    UnityEngine::Color Invoke(HMUI::AnimatedSwitchView::ColorBlock* colorBlock);
    // public System.IAsyncResult BeginInvoke(HMUI.AnimatedSwitchView/ColorBlock colorBlock, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11B00B8
    System::IAsyncResult* BeginInvoke(HMUI::AnimatedSwitchView::ColorBlock* colorBlock, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public UnityEngine.Color EndInvoke(System.IAsyncResult result)
    // Offset: 0x11B00DC
    UnityEngine::Color EndInvoke(System::IAsyncResult* result);
  }; // HMUI.AnimatedSwitchView/GetColorDelegate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::AnimatedSwitchView::GetColorDelegate*, "HMUI", "AnimatedSwitchView/GetColorDelegate");
#pragma pack(pop)
