// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.MessageHandler
#include "MasterServer/MessageHandler.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: PacketEncryptionLayer
#include "GlobalNamespace/PacketEncryptionLayer.hpp"
// Including type: System.UInt32
#include "System/UInt32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.MessageHandler/ConnectionState
  // [] Offset: FFFFFFFF
  class MessageHandler::ConnectionState : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private System.String _userId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _userName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.UInt32 _protocolVersion
    // Size: 0x4
    // Offset: 0x20
    uint protocolVersion;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Boolean _hasIdentity
    // Size: 0x1
    // Offset: 0x24
    bool hasIdentity;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasIdentity and: encryptionState
    char __padding3[0x3] = {};
    // private PacketEncryptionLayer/IEncryptionState _encryptionState
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::PacketEncryptionLayer::IEncryptionState* encryptionState;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PacketEncryptionLayer::IEncryptionState*) == 0x8);
    // private System.Int32 _lastReceivedRequestIndex
    // Size: 0x4
    // Offset: 0x30
    int lastReceivedRequestIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt32 _lastReceivedRequestId
    // Size: 0x4
    // Offset: 0x34
    uint lastReceivedRequestId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Int32 _receivedRequestCount
    // Size: 0x4
    // Offset: 0x38
    int receivedRequestCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: receivedRequestCount and: receivedRequest
    char __padding7[0x4] = {};
    // private readonly System.Boolean[] _receivedRequest
    // Size: 0x8
    // Offset: 0x40
    ::Array<bool>* receivedRequest;
    // Field size check
    static_assert(sizeof(::Array<bool>*) == 0x8);
    // private System.UInt32 _currentRequestId
    // Size: 0x4
    // Offset: 0x48
    uint currentRequestId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _currentEpoch
    // Size: 0x4
    // Offset: 0x4C
    uint currentEpoch;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: ConnectionState
    ConnectionState(::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, uint protocolVersion_ = {}, bool hasIdentity_ = {}, GlobalNamespace::PacketEncryptionLayer::IEncryptionState* encryptionState_ = {}, int lastReceivedRequestIndex_ = {}, uint lastReceivedRequestId_ = {}, int receivedRequestCount_ = {}, ::Array<bool>* receivedRequest_ = {}, uint currentRequestId_ = {}, uint currentEpoch_ = {}) noexcept : userId{userId_}, userName{userName_}, protocolVersion{protocolVersion_}, hasIdentity{hasIdentity_}, encryptionState{encryptionState_}, lastReceivedRequestIndex{lastReceivedRequestIndex_}, lastReceivedRequestId{lastReceivedRequestId_}, receivedRequestCount{receivedRequestCount_}, receivedRequest{receivedRequest_}, currentRequestId{currentRequestId_}, currentEpoch{currentEpoch_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // static field const value: static private System.Int32 kEpochBitOffset
    static constexpr const int kEpochBitOffset = 24;
    // Get static field: static private System.Int32 kEpochBitOffset
    static int _get_kEpochBitOffset();
    // Set static field: static private System.Int32 kEpochBitOffset
    static void _set_kEpochBitOffset(int value);
    // static field const value: static private System.UInt32 kRequestIdRange
    static constexpr const uint kRequestIdRange = 16777216u;
    // Get static field: static private System.UInt32 kRequestIdRange
    static uint _get_kRequestIdRange();
    // Set static field: static private System.UInt32 kRequestIdRange
    static void _set_kRequestIdRange(uint value);
    // static field const value: static private System.UInt32 kRangeMask
    static constexpr const uint kRangeMask = 16777215u;
    // Get static field: static private System.UInt32 kRangeMask
    static uint _get_kRangeMask();
    // Set static field: static private System.UInt32 kRangeMask
    static void _set_kRangeMask(uint value);
    // static field const value: static private System.UInt32 kEpochMask
    static constexpr const uint kEpochMask = 4278190080u;
    // Get static field: static private System.UInt32 kEpochMask
    static uint _get_kEpochMask();
    // Set static field: static private System.UInt32 kEpochMask
    static void _set_kEpochMask(uint value);
    // static field const value: static private System.Int32 kRequestBufferLength
    static constexpr const int kRequestBufferLength = 64;
    // Get static field: static private System.Int32 kRequestBufferLength
    static int _get_kRequestBufferLength();
    // Set static field: static private System.Int32 kRequestBufferLength
    static void _set_kRequestBufferLength(int value);
    // public System.Boolean get_isEncrypted()
    // Offset: 0x11225E4
    bool get_isEncrypted();
    // public System.UInt32 GetNextRequestId()
    // Offset: 0x11223C8
    uint GetNextRequestId();
    // public System.Void BeginSession()
    // Offset: 0x11222D0
    void BeginSession();
    // public System.Boolean IsValidSessionStartRequestId(System.UInt32 requestId)
    // Offset: 0x1122514
    bool IsValidSessionStartRequestId(uint requestId);
    // public System.Void BeginSession(System.UInt32 requestId)
    // Offset: 0x1122390
    void BeginSession(uint requestId);
    // private System.Void SetEpoch(System.UInt32 epoch)
    // Offset: 0x1123FFC
    void SetEpoch(uint epoch);
    // public System.Boolean CanAcceptRequest(System.UInt32 requestId)
    // Offset: 0x1120558
    bool CanAcceptRequest(uint requestId);
    // public System.Void SetEncryptionState(PacketEncryptionLayer/IEncryptionState encryptionState)
    // Offset: 0x1124020
    void SetEncryptionState(GlobalNamespace::PacketEncryptionLayer::IEncryptionState* encryptionState);
    // public System.Void SetIdentity(System.UInt32 protocolVersion, System.String userId, System.String userName)
    // Offset: 0x1124028
    void SetIdentity(uint protocolVersion, ::Il2CppString* userId, ::Il2CppString* userName);
    // public System.Boolean VerifyIdentity(System.UInt32 protocolVersion, System.String userId, System.String userName)
    // Offset: 0x1124070
    bool VerifyIdentity(uint protocolVersion, ::Il2CppString* userId, ::Il2CppString* userName);
    // static private System.Void LogD(System.String message)
    // Offset: 0x1124128
    static void LogD(::Il2CppString* message);
    // public System.Void Dispose()
    // Offset: 0x11240E0
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public System.Void .ctor()
    // Offset: 0x11223E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageHandler::ConnectionState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::MessageHandler::ConnectionState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageHandler::ConnectionState*, creationType>()));
    }
  }; // MasterServer.MessageHandler/ConnectionState
  #pragma pack(pop)
  static check_size<sizeof(MessageHandler::ConnectionState), 76 + sizeof(uint)> __MasterServer_MessageHandler_ConnectionStateSizeCheck;
  static_assert(sizeof(MessageHandler::ConnectionState) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::MessageHandler::ConnectionState*, "MasterServer", "MessageHandler/ConnectionState");
