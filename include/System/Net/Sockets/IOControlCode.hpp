// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Autogenerated type: System.Net.Sockets.IOControlCode
  struct IOControlCode : public System::Enum {
    public:
    // public System.Int64 value__
    // Offset: 0x0
    int64_t value;
    // Creating value type constructor for type: IOControlCode
    constexpr IOControlCode(int64_t value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int64_t
    constexpr operator int64_t() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.Sockets.IOControlCode AsyncIO
    static constexpr const int64_t AsyncIO = 2147772029;
    // Get static field: static public System.Net.Sockets.IOControlCode AsyncIO
    static System::Net::Sockets::IOControlCode _get_AsyncIO();
    // Set static field: static public System.Net.Sockets.IOControlCode AsyncIO
    static void _set_AsyncIO(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode NonBlockingIO
    static constexpr const int64_t NonBlockingIO = 2147772030;
    // Get static field: static public System.Net.Sockets.IOControlCode NonBlockingIO
    static System::Net::Sockets::IOControlCode _get_NonBlockingIO();
    // Set static field: static public System.Net.Sockets.IOControlCode NonBlockingIO
    static void _set_NonBlockingIO(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode DataToRead
    static constexpr const int64_t DataToRead = 1074030207;
    // Get static field: static public System.Net.Sockets.IOControlCode DataToRead
    static System::Net::Sockets::IOControlCode _get_DataToRead();
    // Set static field: static public System.Net.Sockets.IOControlCode DataToRead
    static void _set_DataToRead(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode OobDataRead
    static constexpr const int64_t OobDataRead = 1074033415;
    // Get static field: static public System.Net.Sockets.IOControlCode OobDataRead
    static System::Net::Sockets::IOControlCode _get_OobDataRead();
    // Set static field: static public System.Net.Sockets.IOControlCode OobDataRead
    static void _set_OobDataRead(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode AssociateHandle
    static constexpr const int64_t AssociateHandle = 2281701377;
    // Get static field: static public System.Net.Sockets.IOControlCode AssociateHandle
    static System::Net::Sockets::IOControlCode _get_AssociateHandle();
    // Set static field: static public System.Net.Sockets.IOControlCode AssociateHandle
    static void _set_AssociateHandle(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode EnableCircularQueuing
    static constexpr const int64_t EnableCircularQueuing = 671088642;
    // Get static field: static public System.Net.Sockets.IOControlCode EnableCircularQueuing
    static System::Net::Sockets::IOControlCode _get_EnableCircularQueuing();
    // Set static field: static public System.Net.Sockets.IOControlCode EnableCircularQueuing
    static void _set_EnableCircularQueuing(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode Flush
    static constexpr const int64_t Flush = 671088644;
    // Get static field: static public System.Net.Sockets.IOControlCode Flush
    static System::Net::Sockets::IOControlCode _get_Flush();
    // Set static field: static public System.Net.Sockets.IOControlCode Flush
    static void _set_Flush(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode GetBroadcastAddress
    static constexpr const int64_t GetBroadcastAddress = 1207959557;
    // Get static field: static public System.Net.Sockets.IOControlCode GetBroadcastAddress
    static System::Net::Sockets::IOControlCode _get_GetBroadcastAddress();
    // Set static field: static public System.Net.Sockets.IOControlCode GetBroadcastAddress
    static void _set_GetBroadcastAddress(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode GetExtensionFunctionPointer
    static constexpr const int64_t GetExtensionFunctionPointer = 3355443206;
    // Get static field: static public System.Net.Sockets.IOControlCode GetExtensionFunctionPointer
    static System::Net::Sockets::IOControlCode _get_GetExtensionFunctionPointer();
    // Set static field: static public System.Net.Sockets.IOControlCode GetExtensionFunctionPointer
    static void _set_GetExtensionFunctionPointer(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode GetQos
    static constexpr const int64_t GetQos = 3355443207;
    // Get static field: static public System.Net.Sockets.IOControlCode GetQos
    static System::Net::Sockets::IOControlCode _get_GetQos();
    // Set static field: static public System.Net.Sockets.IOControlCode GetQos
    static void _set_GetQos(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode GetGroupQos
    static constexpr const int64_t GetGroupQos = 3355443208;
    // Get static field: static public System.Net.Sockets.IOControlCode GetGroupQos
    static System::Net::Sockets::IOControlCode _get_GetGroupQos();
    // Set static field: static public System.Net.Sockets.IOControlCode GetGroupQos
    static void _set_GetGroupQos(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode MultipointLoopback
    static constexpr const int64_t MultipointLoopback = 2281701385;
    // Get static field: static public System.Net.Sockets.IOControlCode MultipointLoopback
    static System::Net::Sockets::IOControlCode _get_MultipointLoopback();
    // Set static field: static public System.Net.Sockets.IOControlCode MultipointLoopback
    static void _set_MultipointLoopback(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode MulticastScope
    static constexpr const int64_t MulticastScope = 2281701386;
    // Get static field: static public System.Net.Sockets.IOControlCode MulticastScope
    static System::Net::Sockets::IOControlCode _get_MulticastScope();
    // Set static field: static public System.Net.Sockets.IOControlCode MulticastScope
    static void _set_MulticastScope(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode SetQos
    static constexpr const int64_t SetQos = 2281701387;
    // Get static field: static public System.Net.Sockets.IOControlCode SetQos
    static System::Net::Sockets::IOControlCode _get_SetQos();
    // Set static field: static public System.Net.Sockets.IOControlCode SetQos
    static void _set_SetQos(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode SetGroupQos
    static constexpr const int64_t SetGroupQos = 2281701388;
    // Get static field: static public System.Net.Sockets.IOControlCode SetGroupQos
    static System::Net::Sockets::IOControlCode _get_SetGroupQos();
    // Set static field: static public System.Net.Sockets.IOControlCode SetGroupQos
    static void _set_SetGroupQos(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode TranslateHandle
    static constexpr const int64_t TranslateHandle = 3355443213;
    // Get static field: static public System.Net.Sockets.IOControlCode TranslateHandle
    static System::Net::Sockets::IOControlCode _get_TranslateHandle();
    // Set static field: static public System.Net.Sockets.IOControlCode TranslateHandle
    static void _set_TranslateHandle(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode RoutingInterfaceQuery
    static constexpr const int64_t RoutingInterfaceQuery = 3355443220;
    // Get static field: static public System.Net.Sockets.IOControlCode RoutingInterfaceQuery
    static System::Net::Sockets::IOControlCode _get_RoutingInterfaceQuery();
    // Set static field: static public System.Net.Sockets.IOControlCode RoutingInterfaceQuery
    static void _set_RoutingInterfaceQuery(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode RoutingInterfaceChange
    static constexpr const int64_t RoutingInterfaceChange = 2281701397;
    // Get static field: static public System.Net.Sockets.IOControlCode RoutingInterfaceChange
    static System::Net::Sockets::IOControlCode _get_RoutingInterfaceChange();
    // Set static field: static public System.Net.Sockets.IOControlCode RoutingInterfaceChange
    static void _set_RoutingInterfaceChange(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode AddressListQuery
    static constexpr const int64_t AddressListQuery = 1207959574;
    // Get static field: static public System.Net.Sockets.IOControlCode AddressListQuery
    static System::Net::Sockets::IOControlCode _get_AddressListQuery();
    // Set static field: static public System.Net.Sockets.IOControlCode AddressListQuery
    static void _set_AddressListQuery(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode AddressListChange
    static constexpr const int64_t AddressListChange = 671088663;
    // Get static field: static public System.Net.Sockets.IOControlCode AddressListChange
    static System::Net::Sockets::IOControlCode _get_AddressListChange();
    // Set static field: static public System.Net.Sockets.IOControlCode AddressListChange
    static void _set_AddressListChange(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode QueryTargetPnpHandle
    static constexpr const int64_t QueryTargetPnpHandle = 1207959576;
    // Get static field: static public System.Net.Sockets.IOControlCode QueryTargetPnpHandle
    static System::Net::Sockets::IOControlCode _get_QueryTargetPnpHandle();
    // Set static field: static public System.Net.Sockets.IOControlCode QueryTargetPnpHandle
    static void _set_QueryTargetPnpHandle(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode NamespaceChange
    static constexpr const int64_t NamespaceChange = 2281701401;
    // Get static field: static public System.Net.Sockets.IOControlCode NamespaceChange
    static System::Net::Sockets::IOControlCode _get_NamespaceChange();
    // Set static field: static public System.Net.Sockets.IOControlCode NamespaceChange
    static void _set_NamespaceChange(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode AddressListSort
    static constexpr const int64_t AddressListSort = 3355443225;
    // Get static field: static public System.Net.Sockets.IOControlCode AddressListSort
    static System::Net::Sockets::IOControlCode _get_AddressListSort();
    // Set static field: static public System.Net.Sockets.IOControlCode AddressListSort
    static void _set_AddressListSort(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode ReceiveAll
    static constexpr const int64_t ReceiveAll = 2550136833;
    // Get static field: static public System.Net.Sockets.IOControlCode ReceiveAll
    static System::Net::Sockets::IOControlCode _get_ReceiveAll();
    // Set static field: static public System.Net.Sockets.IOControlCode ReceiveAll
    static void _set_ReceiveAll(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode ReceiveAllMulticast
    static constexpr const int64_t ReceiveAllMulticast = 2550136834;
    // Get static field: static public System.Net.Sockets.IOControlCode ReceiveAllMulticast
    static System::Net::Sockets::IOControlCode _get_ReceiveAllMulticast();
    // Set static field: static public System.Net.Sockets.IOControlCode ReceiveAllMulticast
    static void _set_ReceiveAllMulticast(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode ReceiveAllIgmpMulticast
    static constexpr const int64_t ReceiveAllIgmpMulticast = 2550136835;
    // Get static field: static public System.Net.Sockets.IOControlCode ReceiveAllIgmpMulticast
    static System::Net::Sockets::IOControlCode _get_ReceiveAllIgmpMulticast();
    // Set static field: static public System.Net.Sockets.IOControlCode ReceiveAllIgmpMulticast
    static void _set_ReceiveAllIgmpMulticast(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode KeepAliveValues
    static constexpr const int64_t KeepAliveValues = 2550136836;
    // Get static field: static public System.Net.Sockets.IOControlCode KeepAliveValues
    static System::Net::Sockets::IOControlCode _get_KeepAliveValues();
    // Set static field: static public System.Net.Sockets.IOControlCode KeepAliveValues
    static void _set_KeepAliveValues(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode AbsorbRouterAlert
    static constexpr const int64_t AbsorbRouterAlert = 2550136837;
    // Get static field: static public System.Net.Sockets.IOControlCode AbsorbRouterAlert
    static System::Net::Sockets::IOControlCode _get_AbsorbRouterAlert();
    // Set static field: static public System.Net.Sockets.IOControlCode AbsorbRouterAlert
    static void _set_AbsorbRouterAlert(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode UnicastInterface
    static constexpr const int64_t UnicastInterface = 2550136838;
    // Get static field: static public System.Net.Sockets.IOControlCode UnicastInterface
    static System::Net::Sockets::IOControlCode _get_UnicastInterface();
    // Set static field: static public System.Net.Sockets.IOControlCode UnicastInterface
    static void _set_UnicastInterface(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode LimitBroadcasts
    static constexpr const int64_t LimitBroadcasts = 2550136839;
    // Get static field: static public System.Net.Sockets.IOControlCode LimitBroadcasts
    static System::Net::Sockets::IOControlCode _get_LimitBroadcasts();
    // Set static field: static public System.Net.Sockets.IOControlCode LimitBroadcasts
    static void _set_LimitBroadcasts(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode BindToInterface
    static constexpr const int64_t BindToInterface = 2550136840;
    // Get static field: static public System.Net.Sockets.IOControlCode BindToInterface
    static System::Net::Sockets::IOControlCode _get_BindToInterface();
    // Set static field: static public System.Net.Sockets.IOControlCode BindToInterface
    static void _set_BindToInterface(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode MulticastInterface
    static constexpr const int64_t MulticastInterface = 2550136841;
    // Get static field: static public System.Net.Sockets.IOControlCode MulticastInterface
    static System::Net::Sockets::IOControlCode _get_MulticastInterface();
    // Set static field: static public System.Net.Sockets.IOControlCode MulticastInterface
    static void _set_MulticastInterface(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode AddMulticastGroupOnInterface
    static constexpr const int64_t AddMulticastGroupOnInterface = 2550136842;
    // Get static field: static public System.Net.Sockets.IOControlCode AddMulticastGroupOnInterface
    static System::Net::Sockets::IOControlCode _get_AddMulticastGroupOnInterface();
    // Set static field: static public System.Net.Sockets.IOControlCode AddMulticastGroupOnInterface
    static void _set_AddMulticastGroupOnInterface(System::Net::Sockets::IOControlCode value);
    // static field const value: static public System.Net.Sockets.IOControlCode DeleteMulticastGroupFromInterface
    static constexpr const int64_t DeleteMulticastGroupFromInterface = 2550136843;
    // Get static field: static public System.Net.Sockets.IOControlCode DeleteMulticastGroupFromInterface
    static System::Net::Sockets::IOControlCode _get_DeleteMulticastGroupFromInterface();
    // Set static field: static public System.Net.Sockets.IOControlCode DeleteMulticastGroupFromInterface
    static void _set_DeleteMulticastGroupFromInterface(System::Net::Sockets::IOControlCode value);
  }; // System.Net.Sockets.IOControlCode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::IOControlCode, "System.Net.Sockets", "IOControlCode");
#pragma pack(pop)
