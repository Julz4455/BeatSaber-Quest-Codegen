// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRIOBuffer
#include "OVR/OpenVR/IVRIOBuffer.hpp"
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRIOBuffer/_PropertyContainer
  class IVRIOBuffer::_PropertyContainer : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D61010
    static IVRIOBuffer::_PropertyContainer* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt64 Invoke(System.UInt64 ulBuffer)
    // Offset: 0x1D61024
    uint64_t Invoke(uint64_t ulBuffer);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulBuffer, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D6128C
    System::IAsyncResult* BeginInvoke(uint64_t ulBuffer, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt64 EndInvoke(System.IAsyncResult result)
    // Offset: 0x1D61318
    uint64_t EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRIOBuffer/_PropertyContainer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRIOBuffer::_PropertyContainer*, "OVR.OpenVR", "IVRIOBuffer/_PropertyContainer");
#pragma pack(pop)
