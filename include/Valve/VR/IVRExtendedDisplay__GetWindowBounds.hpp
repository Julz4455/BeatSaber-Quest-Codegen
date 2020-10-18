// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRExtendedDisplay
#include "Valve/VR/IVRExtendedDisplay.hpp"
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
  // Autogenerated type: Valve.VR.IVRExtendedDisplay/_GetWindowBounds
  class IVRExtendedDisplay::_GetWindowBounds : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1E364C0
    static IVRExtendedDisplay::_GetWindowBounds* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(ref System.Int32 pnX, ref System.Int32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x1E364D4
    void Invoke(int& pnX, int& pnY, uint& pnWidth, uint& pnHeight);
    // public System.IAsyncResult BeginInvoke(ref System.Int32 pnX, ref System.Int32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1E3676C
    System::IAsyncResult* BeginInvoke(int& pnX, int& pnY, uint& pnWidth, uint& pnHeight, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.Int32 pnX, ref System.Int32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight, System.IAsyncResult result)
    // Offset: 0x1E36858
    void EndInvoke(int& pnX, int& pnY, uint& pnWidth, uint& pnHeight, System::IAsyncResult* result);
  }; // Valve.VR.IVRExtendedDisplay/_GetWindowBounds
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRExtendedDisplay::_GetWindowBounds*, "Valve.VR", "IVRExtendedDisplay/_GetWindowBounds");
#pragma pack(pop)
