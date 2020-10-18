// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AvatarVisualController
#include "GlobalNamespace/AvatarVisualController.hpp"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AvatarVisualController/HighlighterDelegate
  class AvatarVisualController::HighlighterDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFB8834
    static AvatarVisualController::HighlighterDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Boolean highlighted, System.Int32 uvSegmentNumber)
    // Offset: 0xFB90C8
    void Invoke(bool highlighted, int uvSegmentNumber);
    // public System.IAsyncResult BeginInvoke(System.Boolean highlighted, System.Int32 uvSegmentNumber, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFB941C
    System::IAsyncResult* BeginInvoke(bool highlighted, int uvSegmentNumber, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xFB94CC
    void EndInvoke(System::IAsyncResult* result);
  }; // AvatarVisualController/HighlighterDelegate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarVisualController::HighlighterDelegate*, "", "AvatarVisualController/HighlighterDelegate");
#pragma pack(pop)
