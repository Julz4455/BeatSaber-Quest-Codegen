// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Uri
#include "System/Uri.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x40
  // Autogenerated type: System.Uri/MoreInfo
  // [] Offset: FFFFFFFF
  class Uri::MoreInfo : public ::Il2CppObject {
    public:
    // public System.String Path
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Path;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String Query
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Query;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String Fragment
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* Fragment;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String AbsoluteUri
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* AbsoluteUri;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 Hash
    // Size: 0x4
    // Offset: 0x30
    int Hash;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Hash and: RemoteUrl
    char __padding4[0x4] = {};
    // public System.String RemoteUrl
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* RemoteUrl;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MoreInfo
    MoreInfo(::Il2CppString* Path_ = {}, ::Il2CppString* Query_ = {}, ::Il2CppString* Fragment_ = {}, ::Il2CppString* AbsoluteUri_ = {}, int Hash_ = {}, ::Il2CppString* RemoteUrl_ = {}) noexcept : Path{Path_}, Query{Query_}, Fragment{Fragment_}, AbsoluteUri{AbsoluteUri_}, Hash{Hash_}, RemoteUrl{RemoteUrl_} {}
    // public System.Void .ctor()
    // Offset: 0x19D3CC8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Uri::MoreInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System").WithContext("MoreInfo").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Uri::MoreInfo*, creationType>()));
    }
  }; // System.Uri/MoreInfo
  static check_size<sizeof(Uri::MoreInfo), 56 + sizeof(::Il2CppString*)> __System_Uri_MoreInfoSizeCheck;
  static_assert(sizeof(Uri::MoreInfo) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(System::Uri::MoreInfo*, "System", "Uri/MoreInfo");
#pragma pack(pop)
