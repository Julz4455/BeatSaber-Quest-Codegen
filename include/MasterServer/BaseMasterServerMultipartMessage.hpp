// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IMasterServerMultipartMessage
#include "MasterServer/IMasterServerMultipartMessage.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Size: 0x30
  // Autogenerated type: MasterServer.BaseMasterServerMultipartMessage
  // [] Offset: FFFFFFFF
  class BaseMasterServerMultipartMessage : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IMasterServerMultipartMessage*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDAA484
    // private System.UInt32 <multipartMessageId>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    uint multipartMessageId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDAA494
    // private System.Int32 <offset>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDAA4A4
    // private System.Int32 <length>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDAA4B4
    // private System.Int32 <totalLength>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    int totalLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: totalLength and: data
    char __padding3[0x4] = {};
    // private readonly System.Byte[] _data
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* data;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: BaseMasterServerMultipartMessage
    BaseMasterServerMultipartMessage(uint multipartMessageId_ = {}, int offset_ = {}, int length_ = {}, int totalLength_ = {}, ::Array<uint8_t>* data_ = {}) noexcept : multipartMessageId{multipartMessageId_}, offset{offset_}, length{length_}, totalLength{totalLength_}, data{data_} {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerMultipartMessage
    operator MasterServer::IMasterServerMultipartMessage() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerMultipartMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // static field const value: static public System.Int32 kDataChunkSize
    static constexpr const int kDataChunkSize = 384;
    // Get static field: static public System.Int32 kDataChunkSize
    static int _get_kDataChunkSize();
    // Set static field: static public System.Int32 kDataChunkSize
    static void _set_kDataChunkSize(int value);
    // static field const value: static public System.Int32 kMaximumDataSize
    static constexpr const int kMaximumDataSize = 32767;
    // Get static field: static public System.Int32 kMaximumDataSize
    static int _get_kMaximumDataSize();
    // Set static field: static public System.Int32 kMaximumDataSize
    static void _set_kMaximumDataSize(int value);
    // private System.Void set_multipartMessageId(System.UInt32 value)
    // Offset: 0x1B5662C
    void set_multipartMessageId(uint value);
    // private System.Void set_offset(System.Int32 value)
    // Offset: 0x1B5663C
    void set_offset(int value);
    // private System.Void set_length(System.Int32 value)
    // Offset: 0x1B5664C
    void set_length(int value);
    // private System.Void set_totalLength(System.Int32 value)
    // Offset: 0x1B5665C
    void set_totalLength(int value);
    // public MasterServer.BaseMasterServerMultipartMessage Init(System.UInt32 multipartMessageId, System.Byte[] data, System.Int32 offset, System.Int32 length, System.Int32 totalLength)
    // Offset: 0x1B5666C
    MasterServer::BaseMasterServerMultipartMessage* Init(uint multipartMessageId, ::Array<uint8_t>* data, int offset, int length, int totalLength);
    // public System.UInt32 get_multipartMessageId()
    // Offset: 0x1B56624
    // Implemented from: MasterServer.IMasterServerMultipartMessage
    // Base method: System.UInt32 IMasterServerMultipartMessage::get_multipartMessageId()
    uint get_multipartMessageId();
    // public System.Int32 get_offset()
    // Offset: 0x1B56634
    // Implemented from: MasterServer.IMasterServerMultipartMessage
    // Base method: System.Int32 IMasterServerMultipartMessage::get_offset()
    int get_offset();
    // public System.Int32 get_length()
    // Offset: 0x1B56644
    // Implemented from: MasterServer.IMasterServerMultipartMessage
    // Base method: System.Int32 IMasterServerMultipartMessage::get_length()
    int get_length();
    // public System.Int32 get_totalLength()
    // Offset: 0x1B56654
    // Implemented from: MasterServer.IMasterServerMultipartMessage
    // Base method: System.Int32 IMasterServerMultipartMessage::get_totalLength()
    int get_totalLength();
    // public System.Byte[] get_data()
    // Offset: 0x1B56664
    // Implemented from: MasterServer.IMasterServerMultipartMessage
    // Base method: System.Byte[] IMasterServerMultipartMessage::get_data()
    ::Array<uint8_t>* get_data();
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1B566C8
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1B56754
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // protected System.Void .ctor()
    // Offset: 0x1B568BC
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseMasterServerMultipartMessage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("BaseMasterServerMultipartMessage").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseMasterServerMultipartMessage*, creationType>()));
    }
  }; // MasterServer.BaseMasterServerMultipartMessage
  static check_size<sizeof(BaseMasterServerMultipartMessage), 40 + sizeof(::Array<uint8_t>*)> __MasterServer_BaseMasterServerMultipartMessageSizeCheck;
  static_assert(sizeof(BaseMasterServerMultipartMessage) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BaseMasterServerMultipartMessage*, "MasterServer", "BaseMasterServerMultipartMessage");
#pragma pack(pop)
