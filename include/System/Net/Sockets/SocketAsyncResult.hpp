// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IOAsyncResult
#include "System/IOAsyncResult.hpp"
// Including type: System.Net.Sockets.SocketOperation
#include "System/Net/Sockets/SocketOperation.hpp"
// Including type: System.Net.Sockets.SocketFlags
#include "System/Net/Sockets/SocketFlags.hpp"
// Including type: System.ArraySegment`1
#include "System/ArraySegment_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
  // Forward declaring type: SocketError
  struct SocketError;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: EndPoint
  class EndPoint;
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: IList`1 because it is already included!
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0xA4
  // Autogenerated type: System.Net.Sockets.SocketAsyncResult
  // [] Offset: FFFFFFFF
  class SocketAsyncResult : public System::IOAsyncResult {
    public:
    // Writing base type padding for base size: 0x2A to desired offset: 0x30
    char ___base_padding[0x6] = {};
    // Nested type: System::Net::Sockets::SocketAsyncResult::$$c
    class $$c;
    // public System.Net.Sockets.Socket socket
    // Size: 0x8
    // Offset: 0x30
    System::Net::Sockets::Socket* socket;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::Socket*) == 0x8);
    // public System.Net.Sockets.SocketOperation operation
    // Size: 0x4
    // Offset: 0x38
    System::Net::Sockets::SocketOperation operation;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::SocketOperation) == 0x4);
    // Padding between fields: operation and: DelayedException
    char __padding1[0x4] = {};
    // private System.Exception DelayedException
    // Size: 0x8
    // Offset: 0x40
    System::Exception* DelayedException;
    // Field size check
    static_assert(sizeof(System::Exception*) == 0x8);
    // public System.Net.EndPoint EndPoint
    // Size: 0x8
    // Offset: 0x48
    System::Net::EndPoint* EndPoint;
    // Field size check
    static_assert(sizeof(System::Net::EndPoint*) == 0x8);
    // public System.Byte[] Buffer
    // Size: 0x8
    // Offset: 0x50
    ::Array<uint8_t>* Buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Int32 Offset
    // Size: 0x4
    // Offset: 0x58
    int Offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Size
    // Size: 0x4
    // Offset: 0x5C
    int Size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Net.Sockets.SocketFlags SockFlags
    // Size: 0x4
    // Offset: 0x60
    System::Net::Sockets::SocketFlags SockFlags;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::SocketFlags) == 0x4);
    // Padding between fields: SockFlags and: AcceptSocket
    char __padding7[0x4] = {};
    // public System.Net.Sockets.Socket AcceptSocket
    // Size: 0x8
    // Offset: 0x68
    System::Net::Sockets::Socket* AcceptSocket;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::Socket*) == 0x8);
    // public System.Net.IPAddress[] Addresses
    // Size: 0x8
    // Offset: 0x70
    ::Array<System::Net::IPAddress*>* Addresses;
    // Field size check
    static_assert(sizeof(::Array<System::Net::IPAddress*>*) == 0x8);
    // public System.Int32 Port
    // Size: 0x4
    // Offset: 0x78
    int Port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Port and: Buffers
    char __padding10[0x4] = {};
    // public System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> Buffers
    // Size: 0x8
    // Offset: 0x80
    System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>* Buffers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>*) == 0x8);
    // public System.Boolean ReuseSocket
    // Size: 0x1
    // Offset: 0x88
    bool ReuseSocket;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: ReuseSocket and: CurrentAddress
    char __padding12[0x3] = {};
    // public System.Int32 CurrentAddress
    // Size: 0x4
    // Offset: 0x8C
    int CurrentAddress;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Net.Sockets.Socket AcceptedSocket
    // Size: 0x8
    // Offset: 0x90
    System::Net::Sockets::Socket* AcceptedSocket;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::Socket*) == 0x8);
    // public System.Int32 Total
    // Size: 0x4
    // Offset: 0x98
    int Total;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 error
    // Size: 0x4
    // Offset: 0x9C
    int error;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 EndCalled
    // Size: 0x4
    // Offset: 0xA0
    int EndCalled;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SocketAsyncResult
    SocketAsyncResult(System::Net::Sockets::Socket* socket_ = {}, System::Net::Sockets::SocketOperation operation_ = {}, System::Exception* DelayedException_ = {}, System::Net::EndPoint* EndPoint_ = {}, ::Array<uint8_t>* Buffer_ = {}, int Offset_ = {}, int Size_ = {}, System::Net::Sockets::SocketFlags SockFlags_ = {}, System::Net::Sockets::Socket* AcceptSocket_ = {}, ::Array<System::Net::IPAddress*>* Addresses_ = {}, int Port_ = {}, System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>* Buffers_ = {}, bool ReuseSocket_ = {}, int CurrentAddress_ = {}, System::Net::Sockets::Socket* AcceptedSocket_ = {}, int Total_ = {}, int error_ = {}, int EndCalled_ = {}) noexcept : socket{socket_}, operation{operation_}, DelayedException{DelayedException_}, EndPoint{EndPoint_}, Buffer{Buffer_}, Offset{Offset_}, Size{Size_}, SockFlags{SockFlags_}, AcceptSocket{AcceptSocket_}, Addresses{Addresses_}, Port{Port_}, Buffers{Buffers_}, ReuseSocket{ReuseSocket_}, CurrentAddress{CurrentAddress_}, AcceptedSocket{AcceptedSocket_}, Total{Total_}, error{error_}, EndCalled{EndCalled_} {}
    // public System.IntPtr get_Handle()
    // Offset: 0x1214A38
    System::IntPtr get_Handle();
    // public System.Void Init(System.Net.Sockets.Socket socket, System.AsyncCallback callback, System.Object state, System.Net.Sockets.SocketOperation operation)
    // Offset: 0x1214A90
    void Init(System::Net::Sockets::Socket* socket, System::AsyncCallback* callback, ::Il2CppObject* state, System::Net::Sockets::SocketOperation operation);
    // public System.Void .ctor(System.Net.Sockets.Socket socket, System.AsyncCallback callback, System.Object state, System.Net.Sockets.SocketOperation operation)
    // Offset: 0x1214B78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketAsyncResult* New_ctor(System::Net::Sockets::Socket* socket, System::AsyncCallback* callback, ::Il2CppObject* state, System::Net::Sockets::SocketOperation operation) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Sockets").WithContext("SocketAsyncResult").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketAsyncResult*, creationType>(socket, callback, state, operation)));
    }
    // public System.Net.Sockets.SocketError get_ErrorCode()
    // Offset: 0x1214BC8
    System::Net::Sockets::SocketError get_ErrorCode();
    // public System.Void CheckIfThrowDelayedException()
    // Offset: 0x1214C50
    void CheckIfThrowDelayedException();
    // public System.Void Complete()
    // Offset: 0x1212EA0
    void Complete();
    // public System.Void Complete(System.Boolean synch)
    // Offset: 0x1214D0C
    void Complete(bool synch);
    // public System.Void Complete(System.Int32 total)
    // Offset: 0x12138C4
    void Complete(int total);
    // public System.Void Complete(System.Exception e, System.Boolean synch)
    // Offset: 0x1214D18
    void Complete(System::Exception* e, bool synch);
    // public System.Void Complete(System.Exception e)
    // Offset: 0x12125D8
    void Complete(System::Exception* e);
    // public System.Void Complete(System.Net.Sockets.Socket s)
    // Offset: 0x1212600
    void Complete(System::Net::Sockets::Socket* s);
    // public System.Void Complete(System.Net.Sockets.Socket s, System.Int32 total)
    // Offset: 0x1212900
    void Complete(System::Net::Sockets::Socket* s, int total);
    // public System.Void .ctor()
    // Offset: 0x1214850
    // Implemented from: System.IOAsyncResult
    // Base method: System.Void IOAsyncResult::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SocketAsyncResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Net::Sockets").WithContext("SocketAsyncResult").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SocketAsyncResult*, creationType>()));
    }
    // override System.Void CompleteDisposed()
    // Offset: 0x1214D08
    // Implemented from: System.IOAsyncResult
    // Base method: System.Void IOAsyncResult::CompleteDisposed()
    void CompleteDisposed();
  }; // System.Net.Sockets.SocketAsyncResult
  static check_size<sizeof(SocketAsyncResult), 160 + sizeof(int)> __System_Net_Sockets_SocketAsyncResultSizeCheck;
  static_assert(sizeof(SocketAsyncResult) == 0xA4);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketAsyncResult*, "System.Net.Sockets", "SocketAsyncResult");
#pragma pack(pop)
