// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_GetD3D9AdapterIndex
  class IVRSystem::_GetD3D9AdapterIndex : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F5A588
    static IVRSystem::_GetD3D9AdapterIndex* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Int32 Invoke()
    // Offset: 0x1F5A59C
    int Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F5A7B0
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Int32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1F5A7DC
    int EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetD3D9AdapterIndex
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetD3D9AdapterIndex*, "Valve.VR", "IVRSystem/_GetD3D9AdapterIndex");
#pragma pack(pop)
