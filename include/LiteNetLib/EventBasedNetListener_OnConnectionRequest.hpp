// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.EventBasedNetListener
#include "LiteNetLib/EventBasedNetListener.hpp"
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
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: ConnectionRequest
  class ConnectionRequest;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Autogenerated type: LiteNetLib.EventBasedNetListener/OnConnectionRequest
  class EventBasedNetListener::OnConnectionRequest : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A66624
    static EventBasedNetListener::OnConnectionRequest* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(LiteNetLib.ConnectionRequest request)
    // Offset: 0x1A65E50
    void Invoke(LiteNetLib::ConnectionRequest* request);
    // public System.IAsyncResult BeginInvoke(LiteNetLib.ConnectionRequest request, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A66638
    System::IAsyncResult* BeginInvoke(LiteNetLib::ConnectionRequest* request, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A6665C
    void EndInvoke(System::IAsyncResult* result);
  }; // LiteNetLib.EventBasedNetListener/OnConnectionRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::EventBasedNetListener::OnConnectionRequest*, "LiteNetLib", "EventBasedNetListener/OnConnectionRequest");
#pragma pack(pop)
