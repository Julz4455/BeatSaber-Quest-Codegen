// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: UserInfo
  class UserInfo;
  // Forward declaring type: AccessToken
  class AccessToken;
}
// Completed forward declares
// Type namespace: BeatSaberAPI.DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Autogenerated type: BeatSaberAPI.DataTransferObjects.UserAuthenticationResult
  class UserAuthenticationResult : public ::Il2CppObject {
    public:
    // public BeatSaberAPI.DataTransferObjects.UserInfo userInfo
    // Offset: 0x10
    BeatSaberAPI::DataTransferObjects::UserInfo* userInfo;
    // public BeatSaberAPI.DataTransferObjects.AccessToken accessToken
    // Offset: 0x18
    BeatSaberAPI::DataTransferObjects::AccessToken* accessToken;
    // public System.Void .ctor()
    // Offset: 0x1046808
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static UserAuthenticationResult* New_ctor();
  }; // BeatSaberAPI.DataTransferObjects.UserAuthenticationResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(BeatSaberAPI::DataTransferObjects::UserAuthenticationResult*, "BeatSaberAPI.DataTransferObjects", "UserAuthenticationResult");
#pragma pack(pop)
