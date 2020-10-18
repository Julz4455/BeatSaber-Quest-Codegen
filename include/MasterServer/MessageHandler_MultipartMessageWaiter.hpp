// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.MessageHandler
#include "MasterServer/MessageHandler.hpp"
// Including type: MasterServer.MessageHandler/RequestWaiter
#include "MasterServer/MessageHandler_RequestWaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SmallBufferPool
  class SmallBufferPool;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IMasterServerMultipartMessage
  class IMasterServerMultipartMessage;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Autogenerated type: MasterServer.MessageHandler/MultipartMessageWaiter
  class MessageHandler::MultipartMessageWaiter : public MasterServer::MessageHandler::RequestWaiter {
    public:
    // private readonly SmallBufferPool _bufferPool
    // Offset: 0x10
    GlobalNamespace::SmallBufferPool* bufferPool;
    // private System.Byte[] _buffer
    // Offset: 0x18
    ::Array<uint8_t>* buffer;
    // private System.Int32 _length
    // Offset: 0x20
    int length;
    // private readonly System.Collections.Generic.List`1<System.Int32> _ranges
    // Offset: 0x28
    System::Collections::Generic::List_1<int>* ranges;
    // private System.Boolean _isComplete
    // Offset: 0x30
    bool isComplete;
    // private System.Boolean _isDisposed
    // Offset: 0x31
    bool isDisposed;
    // public System.Void .ctor(SmallBufferPool bufferPool)
    // Offset: 0x10C56FC
    static MessageHandler::MultipartMessageWaiter* New_ctor(GlobalNamespace::SmallBufferPool* bufferPool);
    // public System.Void Append(MasterServer.IMasterServerMultipartMessage packet)
    // Offset: 0x10C57F4
    void Append(MasterServer::IMasterServerMultipartMessage* packet);
    // public System.Boolean get_isWaiting()
    // Offset: 0x10C6290
    bool get_isWaiting();
    // public System.Byte[] get_data()
    // Offset: 0x10C62B0
    ::Array<uint8_t>* get_data();
    // public System.Int32 get_length()
    // Offset: 0x10C62B8
    int get_length();
    // public override System.Void Dispose()
    // Offset: 0x10C579C
    // Implemented from: MasterServer.MessageHandler/RequestWaiter
    // Base method: System.Void RequestWaiter::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // MasterServer.MessageHandler/MultipartMessageWaiter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::MessageHandler::MultipartMessageWaiter*, "MasterServer", "MessageHandler/MultipartMessageWaiter");
#pragma pack(pop)
