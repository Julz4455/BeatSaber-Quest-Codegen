// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRCompositor
#include "Valve/VR/IVRCompositor.hpp"
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
  // Autogenerated type: Valve.VR.IVRCompositor/_GetVulkanInstanceExtensionsRequired
  class IVRCompositor::_GetVulkanInstanceExtensionsRequired : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1E32024
    static IVRCompositor::_GetVulkanInstanceExtensionsRequired* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.Text.StringBuilder pchValue, System.UInt32 unBufferSize)
    // Offset: 0x1E32038
    uint Invoke(System::Text::StringBuilder* pchValue, uint unBufferSize);
    // public System.IAsyncResult BeginInvoke(System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1E3246C
    System::IAsyncResult* BeginInvoke(System::Text::StringBuilder* pchValue, uint unBufferSize, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1E32508
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_GetVulkanInstanceExtensionsRequired
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_GetVulkanInstanceExtensionsRequired*, "Valve.VR", "IVRCompositor/_GetVulkanInstanceExtensionsRequired");
#pragma pack(pop)
