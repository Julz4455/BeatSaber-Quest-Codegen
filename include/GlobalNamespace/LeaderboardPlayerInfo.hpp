// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LeaderboardPlayerInfo
  class LeaderboardPlayerInfo : public ::Il2CppObject {
    public:
    // public System.String serverKey
    // Offset: 0x10
    ::Il2CppString* serverKey;
    // private System.String <playerId>k__BackingField
    // Offset: 0x18
    ::Il2CppString* playerId;
    // private System.String <playerName>k__BackingField
    // Offset: 0x20
    ::Il2CppString* playerName;
    // private System.String <playerKey>k__BackingField
    // Offset: 0x28
    ::Il2CppString* playerKey;
    // private System.String <authType>k__BackingField
    // Offset: 0x30
    ::Il2CppString* authType;
    // private System.String <playerFriends>k__BackingField
    // Offset: 0x38
    ::Il2CppString* playerFriends;
    // private System.Boolean <succeeded>k__BackingField
    // Offset: 0x40
    bool succeeded;
    // public System.String get_playerId()
    // Offset: 0x101B80C
    ::Il2CppString* get_playerId();
    // private System.Void set_playerId(System.String value)
    // Offset: 0x101B814
    void set_playerId(::Il2CppString* value);
    // public System.String get_playerName()
    // Offset: 0x101B81C
    ::Il2CppString* get_playerName();
    // private System.Void set_playerName(System.String value)
    // Offset: 0x101B824
    void set_playerName(::Il2CppString* value);
    // public System.String get_playerKey()
    // Offset: 0x101B82C
    ::Il2CppString* get_playerKey();
    // private System.Void set_playerKey(System.String value)
    // Offset: 0x101B834
    void set_playerKey(::Il2CppString* value);
    // public System.String get_authType()
    // Offset: 0x101B83C
    ::Il2CppString* get_authType();
    // private System.Void set_authType(System.String value)
    // Offset: 0x101B844
    void set_authType(::Il2CppString* value);
    // public System.String get_playerFriends()
    // Offset: 0x101B84C
    ::Il2CppString* get_playerFriends();
    // private System.Void set_playerFriends(System.String value)
    // Offset: 0x101B854
    void set_playerFriends(::Il2CppString* value);
    // public System.Boolean get_succeeded()
    // Offset: 0x101B85C
    bool get_succeeded();
    // private System.Void set_succeeded(System.Boolean value)
    // Offset: 0x101B864
    void set_succeeded(bool value);
    // public System.Void .ctor(System.Boolean succeeded, System.String playerId, System.String playerName, System.String playerKey, System.String authType, System.String playerFriends)
    // Offset: 0x101B870
    static LeaderboardPlayerInfo* New_ctor(bool succeeded, ::Il2CppString* playerId, ::Il2CppString* playerName, ::Il2CppString* playerKey, ::Il2CppString* authType, ::Il2CppString* playerFriends);
  }; // LeaderboardPlayerInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardPlayerInfo*, "", "LeaderboardPlayerInfo");
#pragma pack(pop)
