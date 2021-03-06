// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IUserServerToClientMessage
#include "MasterServer/IUserServerToClientMessage.hpp"
// Including type: PublicServerInfo
#include "GlobalNamespace/PublicServerInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.GetPublicServersResponse
  // [] Offset: FFFFFFFF
  class GetPublicServersResponse : public GlobalNamespace::BaseMasterServerReliableResponse/*, public MasterServer::IUserServerToClientMessage*/ {
    public:
    // Nested type: MasterServer::GetPublicServersResponse::Result
    struct Result;
    // Size: 0x1
    #pragma pack(push, 1)
    // Autogenerated type: MasterServer.GetPublicServersResponse/Result
    // [] Offset: FFFFFFFF
    struct Result/*, public System::Enum*/ {
      public:
      // public System.Byte value__
      // Size: 0x1
      // Offset: 0x0
      uint8_t value;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      // Creating value type constructor for type: Result
      constexpr Result(uint8_t value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return value;
      }
      // static field const value: static public MasterServer.GetPublicServersResponse/Result Success
      static constexpr const uint8_t Success = 0u;
      // Get static field: static public MasterServer.GetPublicServersResponse/Result Success
      static MasterServer::GetPublicServersResponse::Result _get_Success();
      // Set static field: static public MasterServer.GetPublicServersResponse/Result Success
      static void _set_Success(MasterServer::GetPublicServersResponse::Result value);
      // static field const value: static public MasterServer.GetPublicServersResponse/Result UnknownError
      static constexpr const uint8_t UnknownError = 1u;
      // Get static field: static public MasterServer.GetPublicServersResponse/Result UnknownError
      static MasterServer::GetPublicServersResponse::Result _get_UnknownError();
      // Set static field: static public MasterServer.GetPublicServersResponse/Result UnknownError
      static void _set_UnknownError(MasterServer::GetPublicServersResponse::Result value);
    }; // MasterServer.GetPublicServersResponse/Result
    #pragma pack(pop)
    static check_size<sizeof(GetPublicServersResponse::Result), 0 + sizeof(uint8_t)> __MasterServer_GetPublicServersResponse_ResultSizeCheck;
    static_assert(sizeof(GetPublicServersResponse::Result) == 0x1);
    // public MasterServer.GetPublicServersResponse/Result result
    // Size: 0x1
    // Offset: 0x18
    MasterServer::GetPublicServersResponse::Result result;
    // Field size check
    static_assert(sizeof(MasterServer::GetPublicServersResponse::Result) == 0x1);
    // Padding between fields: result and: publicServers
    char __padding0[0x7] = {};
    // public readonly System.Collections.Generic.List`1<PublicServerInfo> publicServers
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<GlobalNamespace::PublicServerInfo>* publicServers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PublicServerInfo>*) == 0x8);
    // Creating value type constructor for type: GetPublicServersResponse
    GetPublicServersResponse(MasterServer::GetPublicServersResponse::Result result_ = {}, System::Collections::Generic::List_1<GlobalNamespace::PublicServerInfo>* publicServers_ = {}) noexcept : result{result_}, publicServers{publicServers_} {}
    // Creating interface conversion operator: operator MasterServer::IUserServerToClientMessage
    operator MasterServer::IUserServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IUserServerToClientMessage*>(this);
    }
    // static public PacketPool`1<MasterServer.GetPublicServersResponse> get_pool()
    // Offset: 0x111CD18
    static GlobalNamespace::PacketPool_1<MasterServer::GetPublicServersResponse*>* get_pool();
    // public MasterServer.GetPublicServersResponse InitForFailure(MasterServer.GetPublicServersResponse/Result result)
    // Offset: 0x111CDF8
    MasterServer::GetPublicServersResponse* InitForFailure(MasterServer::GetPublicServersResponse::Result result);
    // public MasterServer.GetPublicServersResponse InitForSuccess(System.Collections.Generic.IEnumerable`1<PublicServerInfo> publicServers)
    // Offset: 0x111CE90
    MasterServer::GetPublicServersResponse* InitForSuccess(System::Collections::Generic::IEnumerable_1<GlobalNamespace::PublicServerInfo>* publicServers);
    // public override System.Byte get_resultCode()
    // Offset: 0x111CD60
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Byte BaseMasterServerReliableResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x111CD68
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.String BaseMasterServerReliableResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x111CF5C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x111D080
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x111D19C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x111D210
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetPublicServersResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::GetPublicServersResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetPublicServersResponse*, creationType>()));
    }
  }; // MasterServer.GetPublicServersResponse
  #pragma pack(pop)
  static check_size<sizeof(GetPublicServersResponse), 32 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::PublicServerInfo>*)> __MasterServer_GetPublicServersResponseSizeCheck;
  static_assert(sizeof(GetPublicServersResponse) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::GetPublicServersResponse*, "MasterServer", "GetPublicServersResponse");
DEFINE_IL2CPP_ARG_TYPE(MasterServer::GetPublicServersResponse::Result, "MasterServer", "GetPublicServersResponse/Result");
