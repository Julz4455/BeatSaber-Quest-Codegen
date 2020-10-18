// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalNetworkDiscoveryManager
#include "GlobalNamespace/LocalNetworkDiscoveryManager.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LocalNetworkDiscoveryManager/JoinRespondedDelegate
  class LocalNetworkDiscoveryManager::JoinRespondedDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x103EEB4
    static LocalNetworkDiscoveryManager::JoinRespondedDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.String userId, System.String secret, System.Int32 multiplayerPort, System.Boolean blocked)
    // Offset: 0x103DA78
    void Invoke(::Il2CppString* userId, ::Il2CppString* secret, int multiplayerPort, bool blocked);
    // public System.IAsyncResult BeginInvoke(System.String userId, System.String secret, System.Int32 multiplayerPort, System.Boolean blocked, System.AsyncCallback callback, System.Object object)
    // Offset: 0x103EEC8
    System::IAsyncResult* BeginInvoke(::Il2CppString* userId, ::Il2CppString* secret, int multiplayerPort, bool blocked, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x103EF8C
    void EndInvoke(System::IAsyncResult* result);
  }; // LocalNetworkDiscoveryManager/JoinRespondedDelegate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalNetworkDiscoveryManager::JoinRespondedDelegate*, "", "LocalNetworkDiscoveryManager/JoinRespondedDelegate");
#pragma pack(pop)
