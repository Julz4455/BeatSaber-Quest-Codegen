// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayersAtGameStartNetSerializable
  class PlayersAtGameStartNetSerializable : public ::Il2CppObject, public LiteNetLib::Utils::INetSerializable {
    public:
    // private System.Collections.Generic.List`1<IConnectedPlayer> <playersAtGameStart>k__BackingField
    // Offset: 0x10
    System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* playersAtGameStart;
    // Creating conversion operator: operator System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>*
    constexpr operator System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>*() const noexcept {
      return playersAtGameStart;
    }
    // public System.Collections.Generic.List`1<IConnectedPlayer> get_playersAtGameStart()
    // Offset: 0x1C3F2B0
    System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* get_playersAtGameStart();
    // private System.Void set_playersAtGameStart(System.Collections.Generic.List`1<IConnectedPlayer> value)
    // Offset: 0x1C3F2B8
    void set_playersAtGameStart(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void .ctor(System.Collections.Generic.List`1<IConnectedPlayer> playersAtGameStart)
    // Offset: 0x1C3EC78
    static PlayersAtGameStartNetSerializable* New_ctor(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* playersAtGameStart);
    // public System.Void .ctor()
    // Offset: 0x1C3E960
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayersAtGameStartNetSerializable* New_ctor();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1C3F2C0
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1C3F4DC
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
  }; // PlayersAtGameStartNetSerializable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayersAtGameStartNetSerializable*, "", "PlayersAtGameStartNetSerializable");
#pragma pack(pop)
