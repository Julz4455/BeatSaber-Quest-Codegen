// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.Warning
#include "RootMotion/Warning.hpp"
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
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.Warning/Logger
  class Warning::Logger : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18FC030
    static Warning::Logger* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.String message)
    // Offset: 0x18FBC78
    void Invoke(::Il2CppString* message);
    // public System.IAsyncResult BeginInvoke(System.String message, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18FC044
    System::IAsyncResult* BeginInvoke(::Il2CppString* message, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x18FC068
    void EndInvoke(System::IAsyncResult* result);
  }; // RootMotion.Warning/Logger
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Warning::Logger*, "RootMotion", "Warning/Logger");
#pragma pack(pop)
