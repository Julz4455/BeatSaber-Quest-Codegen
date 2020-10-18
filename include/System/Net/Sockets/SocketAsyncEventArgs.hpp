// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.ArraySegment`1
#include "System/ArraySegment_1.hpp"
// Including type: System.Net.Sockets.SocketAsyncOperation
#include "System/Net/Sockets/SocketAsyncOperation.hpp"
// Including type: System.Net.Sockets.SocketError
#include "System/Net/Sockets/SocketError.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: EndPoint
  class EndPoint;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
  // Forward declaring type: SocketAsyncResult
  class SocketAsyncResult;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Skipping declaration: IList`1 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler`1<TEventArgs>
  template<typename TEventArgs>
  class EventHandler_1;
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Autogenerated type: System.Net.Sockets.SocketAsyncEventArgs
  class SocketAsyncEventArgs : public System::EventArgs, public System::IDisposable {
    public:
    // private System.Boolean disposed
    // Offset: 0x10
    bool disposed;
    // System.Int32 in_progress
    // Offset: 0x14
    int in_progress;
    // System.Net.EndPoint remote_ep
    // Offset: 0x18
    System::Net::EndPoint* remote_ep;
    // System.Net.Sockets.Socket current_socket
    // Offset: 0x20
    System::Net::Sockets::Socket* current_socket;
    // System.Net.Sockets.SocketAsyncResult socket_async_result
    // Offset: 0x28
    System::Net::Sockets::SocketAsyncResult* socket_async_result;
    // private System.Net.Sockets.Socket <AcceptSocket>k__BackingField
    // Offset: 0x30
    System::Net::Sockets::Socket* AcceptSocket;
    // System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> m_BufferList
    // Offset: 0x38
    System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>* m_BufferList;
    // private System.Int32 <BytesTransferred>k__BackingField
    // Offset: 0x40
    int BytesTransferred;
    // private System.Int32 <Count>k__BackingField
    // Offset: 0x44
    int Count;
    // private System.Net.Sockets.SocketAsyncOperation <LastOperation>k__BackingField
    // Offset: 0x48
    System::Net::Sockets::SocketAsyncOperation LastOperation;
    // private System.Int32 <SendPacketsSendSize>k__BackingField
    // Offset: 0x4C
    int SendPacketsSendSize;
    // private System.Net.Sockets.SocketError <SocketError>k__BackingField
    // Offset: 0x50
    System::Net::Sockets::SocketError SocketError;
    // private System.Object <UserToken>k__BackingField
    // Offset: 0x58
    ::Il2CppObject* UserToken;
    // private System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> Completed
    // Offset: 0x60
    System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs*>* Completed;
    // public System.Net.Sockets.Socket get_AcceptSocket()
    // Offset: 0x13B4B44
    System::Net::Sockets::Socket* get_AcceptSocket();
    // public System.Void set_AcceptSocket(System.Net.Sockets.Socket value)
    // Offset: 0x13B4B4C
    void set_AcceptSocket(System::Net::Sockets::Socket* value);
    // public System.Collections.Generic.IList`1<System.ArraySegment`1<System.Byte>> get_BufferList()
    // Offset: 0x13B4B54
    System::Collections::Generic::IList_1<System::ArraySegment_1<uint8_t>>* get_BufferList();
    // System.Void set_BytesTransferred(System.Int32 value)
    // Offset: 0x13B4B5C
    void set_BytesTransferred(int value);
    // public System.Int32 get_Count()
    // Offset: 0x13B4B64
    int get_Count();
    // private System.Void set_LastOperation(System.Net.Sockets.SocketAsyncOperation value)
    // Offset: 0x13B4B6C
    void set_LastOperation(System::Net::Sockets::SocketAsyncOperation value);
    // public System.Void set_SendPacketsSendSize(System.Int32 value)
    // Offset: 0x13B4B74
    void set_SendPacketsSendSize(int value);
    // public System.Net.Sockets.SocketError get_SocketError()
    // Offset: 0x13B4B7C
    System::Net::Sockets::SocketError get_SocketError();
    // public System.Void set_SocketError(System.Net.Sockets.SocketError value)
    // Offset: 0x13B4B84
    void set_SocketError(System::Net::Sockets::SocketError value);
    // public System.Object get_UserToken()
    // Offset: 0x13B4B8C
    ::Il2CppObject* get_UserToken();
    // public System.Void set_UserToken(System.Object value)
    // Offset: 0x13B4B94
    void set_UserToken(::Il2CppObject* value);
    // public System.Void add_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> value)
    // Offset: 0x13B4B9C
    void add_Completed(System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs*>* value);
    // public System.Void remove_Completed(System.EventHandler`1<System.Net.Sockets.SocketAsyncEventArgs> value)
    // Offset: 0x13B4C40
    void remove_Completed(System::EventHandler_1<System::Net::Sockets::SocketAsyncEventArgs*>* value);
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x13B4D9C
    void Dispose(bool disposing);
    // System.Void SetLastOperation(System.Net.Sockets.SocketAsyncOperation op)
    // Offset: 0x13B4E24
    void SetLastOperation(System::Net::Sockets::SocketAsyncOperation op);
    // System.Void Complete()
    // Offset: 0x13B29B4
    void Complete();
    // protected System.Void OnCompleted(System.Net.Sockets.SocketAsyncEventArgs e)
    // Offset: 0x13B4F00
    void OnCompleted(System::Net::Sockets::SocketAsyncEventArgs* e);
    // public System.Void .ctor()
    // Offset: 0x13B4CE4
    // Implemented from: System.EventArgs
    // Base method: System.Void EventArgs::.ctor()
    // Base method: System.Void Object::.ctor()
    static SocketAsyncEventArgs* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x13B4D8C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Void Dispose()
    // Offset: 0x13B4DB0
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Net.Sockets.SocketAsyncEventArgs
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketAsyncEventArgs*, "System.Net.Sockets", "SocketAsyncEventArgs");
#pragma pack(pop)
