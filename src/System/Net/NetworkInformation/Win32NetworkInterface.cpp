// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: System.Net.NetworkInformation.Win32NetworkInterface
#include "System/Net/NetworkInformation/Win32NetworkInterface.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Net.NetworkInformation.Win32_FIXED_INFO fixedInfo
System::Net::NetworkInformation::Win32_FIXED_INFO System::Net::NetworkInformation::Win32NetworkInterface::_get_fixedInfo() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Net::NetworkInformation::Win32_FIXED_INFO>("System.Net.NetworkInformation", "Win32NetworkInterface", "fixedInfo"));
}
// Autogenerated static field setter
// Set static field: static private System.Net.NetworkInformation.Win32_FIXED_INFO fixedInfo
void System::Net::NetworkInformation::Win32NetworkInterface::_set_fixedInfo(System::Net::NetworkInformation::Win32_FIXED_INFO value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net.NetworkInformation", "Win32NetworkInterface", "fixedInfo", value));
}
// Autogenerated static field getter
// Get static field: static private System.Boolean initialized
bool System::Net::NetworkInformation::Win32NetworkInterface::_get_initialized() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("System.Net.NetworkInformation", "Win32NetworkInterface", "initialized"));
}
// Autogenerated static field setter
// Set static field: static private System.Boolean initialized
void System::Net::NetworkInformation::Win32NetworkInterface::_set_initialized(bool value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("System.Net.NetworkInformation", "Win32NetworkInterface", "initialized", value));
}
// Autogenerated method: System.Net.NetworkInformation.Win32NetworkInterface.GetNetworkParams
int System::Net::NetworkInformation::Win32NetworkInterface::GetNetworkParams(System::IntPtr ptr, int& size) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>("System.Net.NetworkInformation", "Win32NetworkInterface", "GetNetworkParams", ptr, size));
}
// Autogenerated method: System.Net.NetworkInformation.Win32NetworkInterface.get_FixedInfo
System::Net::NetworkInformation::Win32_FIXED_INFO System::Net::NetworkInformation::Win32NetworkInterface::get_FixedInfo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Net::NetworkInformation::Win32_FIXED_INFO>("System.Net.NetworkInformation", "Win32NetworkInterface", "get_FixedInfo"));
}
