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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
  // Forward declaring type: Texture_t
  struct Texture_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRCompositor/_SetSkyboxOverride
  class IVRCompositor::_SetSkyboxOverride : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1E33B9C
    static IVRCompositor::_SetSkyboxOverride* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRCompositorError Invoke(in Valve.VR.Texture_t[] pTextures, System.UInt32 unTextureCount)
    // Offset: 0x1E33BB0
    Valve::VR::EVRCompositorError Invoke(::Array<Valve::VR::Texture_t>*& pTextures, uint unTextureCount);
    // public System.IAsyncResult BeginInvoke(in Valve.VR.Texture_t[] pTextures, System.UInt32 unTextureCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1E33E24
    System::IAsyncResult* BeginInvoke(::Array<Valve::VR::Texture_t>*& pTextures, uint unTextureCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRCompositorError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1E33EC0
    Valve::VR::EVRCompositorError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRCompositor/_SetSkyboxOverride
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRCompositor::_SetSkyboxOverride*, "Valve.VR", "IVRCompositor/_SetSkyboxOverride");
#pragma pack(pop)
