// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLibConnectionManager
#include "GlobalNamespace/LiteNetLibConnectionManager.hpp"
// Including type: IConnection
#include "GlobalNamespace/IConnection.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
  // Forward declaring type: DeliveryMethod
  struct DeliveryMethod;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LiteNetLibConnectionManager/NetPeerConnection
  class LiteNetLibConnectionManager::NetPeerConnection : public ::Il2CppObject, public GlobalNamespace::IConnection, public System::IEquatable_1<GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*> {
    public:
    // private readonly System.String _userId
    // Offset: 0x10
    ::Il2CppString* userId;
    // private readonly System.String _userName
    // Offset: 0x18
    ::Il2CppString* userName;
    // private readonly System.Boolean _isConnectionOwner
    // Offset: 0x20
    bool isConnectionOwner;
    // public readonly LiteNetLib.NetPeer netPeer
    // Offset: 0x28
    LiteNetLib::NetPeer* netPeer;
    // public System.Void .ctor(LiteNetLib.NetPeer netPeer, System.String userId, System.String userName, System.Boolean isConnectionOwner)
    // Offset: 0x1168200
    static LiteNetLibConnectionManager::NetPeerConnection* New_ctor(LiteNetLib::NetPeer* netPeer, ::Il2CppString* userId, ::Il2CppString* userName, bool isConnectionOwner);
    // public System.String get_userId()
    // Offset: 0x1168CD4
    // Implemented from: IConnection
    // Base method: System.String IConnection::get_userId()
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0x1168CDC
    // Implemented from: IConnection
    // Base method: System.String IConnection::get_userName()
    ::Il2CppString* get_userName();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0x1168CE4
    // Implemented from: IConnection
    // Base method: System.Boolean IConnection::get_isConnectionOwner()
    bool get_isConnectionOwner();
    // public System.Void Send(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0x1168CEC
    // Implemented from: IConnection
    // Base method: System.Void IConnection::Send(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.DeliveryMethod deliveryMethod)
    void Send(LiteNetLib::Utils::NetDataWriter* writer, LiteNetLib::DeliveryMethod deliveryMethod);
    // public System.Boolean Equals(LiteNetLibConnectionManager/NetPeerConnection other)
    // Offset: 0x1168D08
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(LiteNetLibConnectionManager/NetPeerConnection other)
    bool Equals(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1168D34
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1168E50
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public System.Void Disconnect()
    // Offset: 0x116772C
    // Implemented from: IConnection
    // Base method: System.Void IConnection::Disconnect()
    void Disconnect();
  }; // LiteNetLibConnectionManager/NetPeerConnection
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*, "", "LiteNetLibConnectionManager/NetPeerConnection");
#pragma pack(pop)
