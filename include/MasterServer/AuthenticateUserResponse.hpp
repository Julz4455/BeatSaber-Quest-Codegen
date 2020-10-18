// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IUserServerToClientMessage
#include "MasterServer/IUserServerToClientMessage.hpp"
// Including type: MasterServer.IMasterServerAuthenticateResponse
#include "MasterServer/IMasterServerAuthenticateResponse.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Skipping declaration: Result because it is already included!
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Autogenerated type: MasterServer.AuthenticateUserResponse
  class AuthenticateUserResponse : public GlobalNamespace::BaseMasterServerReliableResponse, public MasterServer::IUserServerToClientMessage, public MasterServer::IMasterServerAuthenticateResponse {
    public:
    // Nested type: MasterServer::AuthenticateUserResponse::Result
    struct Result;
    // Autogenerated type: MasterServer.AuthenticateUserResponse/Result
    struct Result : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: Result
      constexpr Result(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MasterServer.AuthenticateUserResponse/Result Success
      static constexpr const int Success = 0;
      // Get static field: static public MasterServer.AuthenticateUserResponse/Result Success
      static MasterServer::AuthenticateUserResponse::Result _get_Success();
      // Set static field: static public MasterServer.AuthenticateUserResponse/Result Success
      static void _set_Success(MasterServer::AuthenticateUserResponse::Result value);
      // static field const value: static public MasterServer.AuthenticateUserResponse/Result Failed
      static constexpr const int Failed = 1;
      // Get static field: static public MasterServer.AuthenticateUserResponse/Result Failed
      static MasterServer::AuthenticateUserResponse::Result _get_Failed();
      // Set static field: static public MasterServer.AuthenticateUserResponse/Result Failed
      static void _set_Failed(MasterServer::AuthenticateUserResponse::Result value);
      // static field const value: static public MasterServer.AuthenticateUserResponse/Result UnknownError
      static constexpr const int UnknownError = 2;
      // Get static field: static public MasterServer.AuthenticateUserResponse/Result UnknownError
      static MasterServer::AuthenticateUserResponse::Result _get_UnknownError();
      // Set static field: static public MasterServer.AuthenticateUserResponse/Result UnknownError
      static void _set_UnknownError(MasterServer::AuthenticateUserResponse::Result value);
    }; // MasterServer.AuthenticateUserResponse/Result
    // public MasterServer.AuthenticateUserResponse/Result result
    // Offset: 0x18
    MasterServer::AuthenticateUserResponse::Result result;
    // Creating conversion operator: operator MasterServer::AuthenticateUserResponse::Result
    constexpr operator MasterServer::AuthenticateUserResponse::Result() const noexcept {
      return result;
    }
    // static public PacketPool`1<MasterServer.AuthenticateUserResponse> get_pool()
    // Offset: 0x116951C
    static GlobalNamespace::PacketPool_1<MasterServer::AuthenticateUserResponse*>* get_pool();
    // public MasterServer.AuthenticateUserResponse Init(MasterServer.AuthenticateUserResponse/Result result)
    // Offset: 0x116960C
    MasterServer::AuthenticateUserResponse* Init(MasterServer::AuthenticateUserResponse::Result result);
    // public override System.Byte get_resultCode()
    // Offset: 0x1169564
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Byte BaseMasterServerReliableResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x116956C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.String BaseMasterServerReliableResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public System.Boolean get_isAuthenticated()
    // Offset: 0x11695FC
    // Implemented from: MasterServer.IMasterServerAuthenticateResponse
    // Base method: System.Boolean IMasterServerAuthenticateResponse::get_isAuthenticated()
    bool get_isAuthenticated();
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1169614
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x116964C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x116968C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x11696E8
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    static AuthenticateUserResponse* New_ctor();
  }; // MasterServer.AuthenticateUserResponse
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::AuthenticateUserResponse*, "MasterServer", "AuthenticateUserResponse");
DEFINE_IL2CPP_ARG_TYPE(MasterServer::AuthenticateUserResponse::Result, "MasterServer", "AuthenticateUserResponse/Result");
#pragma pack(pop)
