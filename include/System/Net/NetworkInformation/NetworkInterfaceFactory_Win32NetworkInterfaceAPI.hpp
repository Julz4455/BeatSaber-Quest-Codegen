// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.NetworkInterfaceFactory
#include "System/Net/NetworkInformation/NetworkInterfaceFactory.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: Win32_IP_ADAPTER_ADDRESSES
  struct Win32_IP_ADAPTER_ADDRESSES;
  // Forward declaring type: NetworkInterface
  class NetworkInterface;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.NetworkInterfaceFactory/Win32NetworkInterfaceAPI
  class NetworkInterfaceFactory::Win32NetworkInterfaceAPI : public System::Net::NetworkInformation::NetworkInterfaceFactory {
    public:
    // static private System.Int32 GetAdaptersAddresses(System.UInt32 family, System.UInt32 flags, System.IntPtr reserved, System.IntPtr info, ref System.Int32 size)
    // Offset: 0x12CBA94
    static int GetAdaptersAddresses(uint family, uint flags, System::IntPtr reserved, System::IntPtr info, int& size);
    // static private System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES[] GetAdaptersAddresses()
    // Offset: 0x12CBB50
    static ::Array<System::Net::NetworkInformation::Win32_IP_ADAPTER_ADDRESSES>* GetAdaptersAddresses();
    // public override System.Net.NetworkInformation.NetworkInterface[] GetAllNetworkInterfaces()
    // Offset: 0x12CBDD4
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory
    // Base method: System.Net.NetworkInformation.NetworkInterface[] NetworkInterfaceFactory::GetAllNetworkInterfaces()
    ::Array<System::Net::NetworkInformation::NetworkInterface*>* GetAllNetworkInterfaces();
    // public System.Void .ctor()
    // Offset: 0x12CA6A0
    // Implemented from: System.Net.NetworkInformation.NetworkInterfaceFactory
    // Base method: System.Void NetworkInterfaceFactory::.ctor()
    // Base method: System.Void Object::.ctor()
    static NetworkInterfaceFactory::Win32NetworkInterfaceAPI* New_ctor();
  }; // System.Net.NetworkInformation.NetworkInterfaceFactory/Win32NetworkInterfaceAPI
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI*, "System.Net.NetworkInformation", "NetworkInterfaceFactory/Win32NetworkInterfaceAPI");
#pragma pack(pop)
