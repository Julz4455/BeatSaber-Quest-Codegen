// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.EventBasedNatPunchListener
#include "LiteNetLib/EventBasedNatPunchListener.hpp"
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
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NatAddressType
  struct NatAddressType;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Autogenerated type: LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess
  class EventBasedNatPunchListener::OnNatIntroductionSuccess : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A639E0
    static EventBasedNatPunchListener::OnNatIntroductionSuccess* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Net.IPEndPoint targetEndPoint, LiteNetLib.NatAddressType type, System.String token)
    // Offset: 0x1A63538
    void Invoke(System::Net::IPEndPoint* targetEndPoint, LiteNetLib::NatAddressType type, ::Il2CppString* token);
    // public System.IAsyncResult BeginInvoke(System.Net.IPEndPoint targetEndPoint, LiteNetLib.NatAddressType type, System.String token, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A639F4
    System::IAsyncResult* BeginInvoke(System::Net::IPEndPoint* targetEndPoint, LiteNetLib::NatAddressType type, ::Il2CppString* token, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A63A94
    void EndInvoke(System::IAsyncResult* result);
  }; // LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionSuccess
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionSuccess*, "LiteNetLib", "EventBasedNatPunchListener/OnNatIntroductionSuccess");
#pragma pack(pop)
