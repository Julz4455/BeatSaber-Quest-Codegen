// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetworkPlayersTableView
#include "GlobalNamespace/NetworkPlayersTableView.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NetworkPlayersTableView/CellInfo
  class NetworkPlayersTableView::CellInfo : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType
    struct CellType;
    // Autogenerated type: NetworkPlayersTableView/CellInfo/CellType
    struct CellType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: CellType
      constexpr CellType(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public NetworkPlayersTableView/CellInfo/CellType Header
      static constexpr const int Header = 0;
      // Get static field: static public NetworkPlayersTableView/CellInfo/CellType Header
      static GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType _get_Header();
      // Set static field: static public NetworkPlayersTableView/CellInfo/CellType Header
      static void _set_Header(GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType value);
      // static field const value: static public NetworkPlayersTableView/CellInfo/CellType Player
      static constexpr const int Player = 1;
      // Get static field: static public NetworkPlayersTableView/CellInfo/CellType Player
      static GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType _get_Player();
      // Set static field: static public NetworkPlayersTableView/CellInfo/CellType Player
      static void _set_Player(GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType value);
      // static field const value: static public NetworkPlayersTableView/CellInfo/CellType Options
      static constexpr const int Options = 2;
      // Get static field: static public NetworkPlayersTableView/CellInfo/CellType Options
      static GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType _get_Options();
      // Set static field: static public NetworkPlayersTableView/CellInfo/CellType Options
      static void _set_Options(GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType value);
    }; // NetworkPlayersTableView/CellInfo/CellType
    // public NetworkPlayersTableView/CellInfo/CellType type
    // Offset: 0x10
    GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType type;
    // public System.String headerString
    // Offset: 0x18
    ::Il2CppString* headerString;
    // public INetworkPlayer player
    // Offset: 0x20
    GlobalNamespace::INetworkPlayer* player;
    // public System.Boolean lastCellInParty
    // Offset: 0x28
    bool lastCellInParty;
    // public System.Void .ctor()
    // Offset: 0xF10E0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NetworkPlayersTableView::CellInfo* New_ctor();
  }; // NetworkPlayersTableView/CellInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayersTableView::CellInfo*, "", "NetworkPlayersTableView/CellInfo");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType, "", "NetworkPlayersTableView/CellInfo/CellType");
#pragma pack(pop)
