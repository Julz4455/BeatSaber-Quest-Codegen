// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: UnicastIPAddressInformationCollection
  class UnicastIPAddressInformationCollection;
  // Forward declaring type: GatewayIPAddressInformationCollection
  class GatewayIPAddressInformationCollection;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Size: 0x10
  // Autogenerated type: System.Net.NetworkInformation.IPInterfaceProperties
  // [] Offset: FFFFFFFF
  class IPInterfaceProperties : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IPInterfaceProperties
    IPInterfaceProperties() noexcept {}
    // public System.Net.NetworkInformation.UnicastIPAddressInformationCollection get_UnicastAddresses()
    // Offset: 0xFFFFFFFF
    System::Net::NetworkInformation::UnicastIPAddressInformationCollection* get_UnicastAddresses();
    // public System.Net.NetworkInformation.GatewayIPAddressInformationCollection get_GatewayAddresses()
    // Offset: 0xFFFFFFFF
    System::Net::NetworkInformation::GatewayIPAddressInformationCollection* get_GatewayAddresses();
    // protected System.Void .ctor()
    // Offset: 0x1199DD4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IPInterfaceProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::NetworkInformation").WithContext("IPInterfaceProperties").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IPInterfaceProperties*, creationType>()));
    }
  }; // System.Net.NetworkInformation.IPInterfaceProperties
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::IPInterfaceProperties*, "System.Net.NetworkInformation", "IPInterfaceProperties");
#pragma pack(pop)
