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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EIOBufferError
  struct EIOBufferError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRIOBuffer/_Write
  class IVRIOBuffer::_Write : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D61728
    static IVRIOBuffer::_Write* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EIOBufferError Invoke(System.UInt64 ulBuffer, System.IntPtr pSrc, System.UInt32 unBytes)
    // Offset: 0x1D6173C
    OVR::OpenVR::EIOBufferError Invoke(uint64_t ulBuffer, System::IntPtr pSrc, uint unBytes);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulBuffer, System.IntPtr pSrc, System.UInt32 unBytes, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D619D4
    System::IAsyncResult* BeginInvoke(uint64_t ulBuffer, System::IntPtr pSrc, uint unBytes, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EIOBufferError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1D61AA0
    OVR::OpenVR::EIOBufferError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRIOBuffer/_Write
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRIOBuffer::_Write*, "OVR.OpenVR", "IVRIOBuffer/_Write");
#pragma pack(pop)
