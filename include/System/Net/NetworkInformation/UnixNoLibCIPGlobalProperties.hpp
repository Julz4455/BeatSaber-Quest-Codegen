// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.UnixIPGlobalProperties
#include "System/Net/NetworkInformation/UnixIPGlobalProperties.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.UnixNoLibCIPGlobalProperties
  class UnixNoLibCIPGlobalProperties : public System::Net::NetworkInformation::UnixIPGlobalProperties {
    public:
    // public override System.String get_DomainName()
    // Offset: 0x12CC844
    // Implemented from: System.Net.NetworkInformation.CommonUnixIPGlobalProperties
    // Base method: System.String CommonUnixIPGlobalProperties::get_DomainName()
    ::Il2CppString* get_DomainName();
    // public System.Void .ctor()
    // Offset: 0x12C8A80
    // Implemented from: System.Net.NetworkInformation.UnixIPGlobalProperties
    // Base method: System.Void UnixIPGlobalProperties::.ctor()
    // Base method: System.Void CommonUnixIPGlobalProperties::.ctor()
    // Base method: System.Void IPGlobalProperties::.ctor()
    // Base method: System.Void Object::.ctor()
    static UnixNoLibCIPGlobalProperties* New_ctor();
  }; // System.Net.NetworkInformation.UnixNoLibCIPGlobalProperties
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::UnixNoLibCIPGlobalProperties*, "System.Net.NetworkInformation", "UnixNoLibCIPGlobalProperties");
#pragma pack(pop)
