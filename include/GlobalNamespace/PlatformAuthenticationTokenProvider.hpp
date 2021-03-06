// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IAuthenticationTokenProvider
#include "GlobalNamespace/IAuthenticationTokenProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPlatformUserModel
  class IPlatformUserModel;
  // Forward declaring type: UserInfo
  class UserInfo;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: PlatformAuthenticationTokenProvider
  // [] Offset: FFFFFFFF
  class PlatformAuthenticationTokenProvider : public ::Il2CppObject/*, public GlobalNamespace::IAuthenticationTokenProvider*/ {
    public:
    // Nested type: GlobalNamespace::PlatformAuthenticationTokenProvider::$$c
    class $$c;
    // Nested type: GlobalNamespace::PlatformAuthenticationTokenProvider::$GetAuthenticationToken$d__8
    struct $GetAuthenticationToken$d__8;
    // private readonly IPlatformUserModel _platformUserModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IPlatformUserModel* platformUserModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPlatformUserModel*) == 0x8);
    // private readonly System.String _userId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String _userName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String _hashedUserId
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* hashedUserId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly AuthenticationToken/Platform _platform
    // Size: 0x4
    // Offset: 0x30
    GlobalNamespace::AuthenticationToken::Platform platform;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AuthenticationToken::Platform) == 0x4);
    // Creating value type constructor for type: PlatformAuthenticationTokenProvider
    PlatformAuthenticationTokenProvider(GlobalNamespace::IPlatformUserModel* platformUserModel_ = {}, ::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, ::Il2CppString* hashedUserId_ = {}, GlobalNamespace::AuthenticationToken::Platform platform_ = {}) noexcept : platformUserModel{platformUserModel_}, userId{userId_}, userName{userName_}, hashedUserId{hashedUserId_}, platform{platform_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IAuthenticationTokenProvider
    operator GlobalNamespace::IAuthenticationTokenProvider() noexcept {
      return *reinterpret_cast<GlobalNamespace::IAuthenticationTokenProvider*>(this);
    }
    // public System.Void .ctor(IPlatformUserModel platformUserModel, UserInfo userInfo)
    // Offset: 0xF24868
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlatformAuthenticationTokenProvider* New_ctor(GlobalNamespace::IPlatformUserModel* platformUserModel, GlobalNamespace::UserInfo* userInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlatformAuthenticationTokenProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlatformAuthenticationTokenProvider*, creationType>(platformUserModel, userInfo)));
    }
    // public System.String get_hashedUserId()
    // Offset: 0xF24860
    // Implemented from: IAuthenticationTokenProvider
    // Base method: System.String IAuthenticationTokenProvider::get_hashedUserId()
    ::Il2CppString* get_hashedUserId();
    // public System.Threading.Tasks.Task`1<AuthenticationToken> GetAuthenticationToken()
    // Offset: 0xF24954
    // Implemented from: IAuthenticationTokenProvider
    // Base method: System.Threading.Tasks.Task`1<AuthenticationToken> IAuthenticationTokenProvider::GetAuthenticationToken()
    System::Threading::Tasks::Task_1<GlobalNamespace::AuthenticationToken>* GetAuthenticationToken();
  }; // PlatformAuthenticationTokenProvider
  #pragma pack(pop)
  static check_size<sizeof(PlatformAuthenticationTokenProvider), 48 + sizeof(GlobalNamespace::AuthenticationToken::Platform)> __GlobalNamespace_PlatformAuthenticationTokenProviderSizeCheck;
  static_assert(sizeof(PlatformAuthenticationTokenProvider) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformAuthenticationTokenProvider*, "", "PlatformAuthenticationTokenProvider");
