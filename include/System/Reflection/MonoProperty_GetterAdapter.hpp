// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.MonoProperty
#include "System/Reflection/MonoProperty.hpp"
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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.MonoProperty/GetterAdapter
  class MonoProperty::GetterAdapter : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18D3E44
    static MonoProperty::GetterAdapter* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Object Invoke(System.Object _this)
    // Offset: 0x18D3E58
    ::Il2CppObject* Invoke(::Il2CppObject* _this);
    // public System.IAsyncResult BeginInvoke(System.Object _this, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18D4218
    System::IAsyncResult* BeginInvoke(::Il2CppObject* _this, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Object EndInvoke(System.IAsyncResult result)
    // Offset: 0x18D423C
    ::Il2CppObject* EndInvoke(System::IAsyncResult* result);
  }; // System.Reflection.MonoProperty/GetterAdapter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoProperty::GetterAdapter*, "System.Reflection", "MonoProperty/GetterAdapter");
#pragma pack(pop)
