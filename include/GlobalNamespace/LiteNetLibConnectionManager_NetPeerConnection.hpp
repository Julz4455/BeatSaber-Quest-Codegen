// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLibConnectionManager
#include "GlobalNamespace/LiteNetLibConnectionManager.hpp"
// Including type: IConnection
#include "GlobalNamespace/IConnection.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x30
  // Autogenerated type: LiteNetLibConnectionManager/NetPeerConnection
  // [] Offset: FFFFFFFF
  class LiteNetLibConnectionManager::NetPeerConnection : public ::Il2CppObject/*, public GlobalNamespace::IConnection, public System::IEquatable_1<GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*>*/ {
    public:
    // private readonly System.String _userId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String _userName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.Boolean _isConnectionOwner
    // Size: 0x1
    // Offset: 0x20
    bool isConnectionOwner;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isConnectionOwner and: netPeer
    char __padding2[0x7] = {};
    // public readonly LiteNetLib.NetPeer netPeer
    // Size: 0x8
    // Offset: 0x28
    LiteNetLib::NetPeer* netPeer;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetPeer*) == 0x8);
    // Creating value type constructor for type: NetPeerConnection
    NetPeerConnection(::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, bool isConnectionOwner_ = {}, LiteNetLib::NetPeer* netPeer_ = {}) noexcept : userId{userId_}, userName{userName_}, isConnectionOwner{isConnectionOwner_}, netPeer{netPeer_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IConnection
    operator GlobalNamespace::IConnection() noexcept {
      return *reinterpret_cast<GlobalNamespace::IConnection*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*>
    operator System::IEquatable_1<GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*>*>(this);
    }
    // public System.Void .ctor(LiteNetLib.NetPeer netPeer, System.String userId, System.String userName, System.Boolean isConnectionOwner)
    // Offset: 0x1B51680
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LiteNetLibConnectionManager::NetPeerConnection* New_ctor(LiteNetLib::NetPeer* netPeer, ::Il2CppString* userId, ::Il2CppString* userName, bool isConnectionOwner) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("NetPeerConnection").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LiteNetLibConnectionManager::NetPeerConnection*, creationType>(netPeer, userId, userName, isConnectionOwner)));
    }
    // public System.String get_userId()
    // Offset: 0x1B52250
    // Implemented from: IConnection
    // Base method: System.String IConnection::get_userId()
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0x1B52258
    // Implemented from: IConnection
    // Base method: System.String IConnection::get_userName()
    ::Il2CppString* get_userName();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0x1B52260
    // Implemented from: IConnection
    // Base method: System.Boolean IConnection::get_isConnectionOwner()
    bool get_isConnectionOwner();
    // public System.Void Send(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0x1B52268
    // Implemented from: IConnection
    // Base method: System.Void IConnection::Send(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.DeliveryMethod deliveryMethod)
    void Send(LiteNetLib::Utils::NetDataWriter* writer, LiteNetLib::DeliveryMethod deliveryMethod);
    // public System.Boolean Equals(LiteNetLibConnectionManager/NetPeerConnection other)
    // Offset: 0x1B52284
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(LiteNetLibConnectionManager/NetPeerConnection other)
    bool Equals(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1B522B0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1B523CC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public System.Void Disconnect()
    // Offset: 0x1B50C4C
    // Implemented from: IConnection
    // Base method: System.Void IConnection::Disconnect()
    void Disconnect();
  }; // LiteNetLibConnectionManager/NetPeerConnection
  static check_size<sizeof(LiteNetLibConnectionManager::NetPeerConnection), 40 + sizeof(LiteNetLib::NetPeer*)> __GlobalNamespace_LiteNetLibConnectionManager_NetPeerConnectionSizeCheck;
  static_assert(sizeof(LiteNetLibConnectionManager::NetPeerConnection) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*, "", "LiteNetLibConnectionManager/NetPeerConnection");
#pragma pack(pop)
