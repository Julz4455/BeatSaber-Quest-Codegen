// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Net.NetworkInformation.Win32IPInterfaceProperties2
#include "System/Net/NetworkInformation/Win32IPInterfaceProperties2.hpp"
// Including type: System.Net.NetworkInformation.UnicastIPAddressInformationCollection
#include "System/Net/NetworkInformation/UnicastIPAddressInformationCollection.hpp"
// Including type: System.Net.NetworkInformation.GatewayIPAddressInformationCollection
#include "System/Net/NetworkInformation/GatewayIPAddressInformationCollection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Net.NetworkInformation.Win32IPInterfaceProperties2..ctor
System::Net::NetworkInformation::Win32IPInterfaceProperties2* System::Net::NetworkInformation::Win32IPInterfaceProperties2::New_ctor(System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES addr, System::Net::NetworkInformation::Win32_MIB_IFROW mib4, System::Net::NetworkInformation::Win32_MIB_IFROW mib6) {
  return THROW_UNLESS(il2cpp_utils::New<Win32IPInterfaceProperties2*>(addr, mib4, mib6));
}
// Autogenerated method: System.Net.NetworkInformation.Win32IPInterfaceProperties2.Win32FromUnicast
System::Net::NetworkInformation::UnicastIPAddressInformationCollection* System::Net::NetworkInformation::Win32IPInterfaceProperties2::Win32FromUnicast(System::IntPtr ptr) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::NetworkInformation::UnicastIPAddressInformationCollection*>("System.Net.NetworkInformation", "Win32IPInterfaceProperties2", "Win32FromUnicast", ptr));
}
// Autogenerated method: System.Net.NetworkInformation.Win32IPInterfaceProperties2.get_GatewayAddresses
System::Net::NetworkInformation::GatewayIPAddressInformationCollection* System::Net::NetworkInformation::Win32IPInterfaceProperties2::get_GatewayAddresses() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::NetworkInformation::GatewayIPAddressInformationCollection*>(this, "get_GatewayAddresses"));
}
// Autogenerated method: System.Net.NetworkInformation.Win32IPInterfaceProperties2.get_UnicastAddresses
System::Net::NetworkInformation::UnicastIPAddressInformationCollection* System::Net::NetworkInformation::Win32IPInterfaceProperties2::get_UnicastAddresses() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::NetworkInformation::UnicastIPAddressInformationCollection*>(this, "get_UnicastAddresses"));
}
