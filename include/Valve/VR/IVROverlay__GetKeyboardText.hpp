// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_GetKeyboardText
  class IVROverlay::_GetKeyboardText : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1E39498
    static IVROverlay::_GetKeyboardText* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.Text.StringBuilder pchText, System.UInt32 cchText)
    // Offset: 0x1E394AC
    uint Invoke(System::Text::StringBuilder* pchText, uint cchText);
    // public System.IAsyncResult BeginInvoke(System.Text.StringBuilder pchText, System.UInt32 cchText, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1E398E0
    System::IAsyncResult* BeginInvoke(System::Text::StringBuilder* pchText, uint cchText, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1E3997C
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetKeyboardText
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetKeyboardText*, "Valve.VR", "IVROverlay/_GetKeyboardText");
#pragma pack(pop)
