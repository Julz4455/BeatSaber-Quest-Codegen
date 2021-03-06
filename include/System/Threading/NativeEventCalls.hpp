// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Microsoft::Win32::SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeWaitHandle
  class SafeWaitHandle;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.NativeEventCalls
  // [] Offset: FFFFFFFF
  class NativeEventCalls : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NativeEventCalls
    NativeEventCalls() noexcept {}
    // static public System.IntPtr CreateEvent_internal(System.Boolean manual, System.Boolean initial, System.String name, out System.Int32 errorCode)
    // Offset: 0x1A7CCAC
    static System::IntPtr CreateEvent_internal(bool manual, bool initial, ::Il2CppString* name, int& errorCode);
    // static public System.Boolean SetEvent(Microsoft.Win32.SafeHandles.SafeWaitHandle handle)
    // Offset: 0x1A7CDFC
    static bool SetEvent(Microsoft::Win32::SafeHandles::SafeWaitHandle* handle);
    // static private System.Boolean SetEvent_internal(System.IntPtr handle)
    // Offset: 0x1A7FFCC
    static bool SetEvent_internal(System::IntPtr handle);
    // static public System.Boolean ResetEvent(Microsoft.Win32.SafeHandles.SafeWaitHandle handle)
    // Offset: 0x1A7CD40
    static bool ResetEvent(Microsoft::Win32::SafeHandles::SafeWaitHandle* handle);
    // static private System.Boolean ResetEvent_internal(System.IntPtr handle)
    // Offset: 0x1A7FFD0
    static bool ResetEvent_internal(System::IntPtr handle);
    // static public System.Void CloseEvent_internal(System.IntPtr handle)
    // Offset: 0x1A7FFD4
    static void CloseEvent_internal(System::IntPtr handle);
  }; // System.Threading.NativeEventCalls
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::NativeEventCalls*, "System.Threading", "NativeEventCalls");
