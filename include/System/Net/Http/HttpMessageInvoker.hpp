// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http
namespace System::Net::Http {
  // Forward declaring type: HttpMessageHandler
  class HttpMessageHandler;
  // Forward declaring type: HttpResponseMessage
  class HttpResponseMessage;
  // Forward declaring type: HttpRequestMessage
  class HttpRequestMessage;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Autogenerated type: System.Net.Http.HttpMessageInvoker
  class HttpMessageInvoker : public ::Il2CppObject, public System::IDisposable {
    public:
    // private System.Net.Http.HttpMessageHandler handler
    // Offset: 0x10
    System::Net::Http::HttpMessageHandler* handler;
    // private readonly System.Boolean disposeHandler
    // Offset: 0x18
    bool disposeHandler;
    // public System.Void .ctor(System.Net.Http.HttpMessageHandler handler, System.Boolean disposeHandler)
    // Offset: 0x13ABE98
    static HttpMessageInvoker* New_ctor(System::Net::Http::HttpMessageHandler* handler, bool disposeHandler);
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x13ABFA4
    void Dispose(bool disposing);
    // public System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> SendAsync(System.Net.Http.HttpRequestMessage request, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x13AC95C
    System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage*>* SendAsync(System::Net::Http::HttpRequestMessage* request, System::Threading::CancellationToken cancellationToken);
    // public System.Void Dispose()
    // Offset: 0x13B05FC
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Net.Http.HttpMessageInvoker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpMessageInvoker*, "System.Net.Http", "HttpMessageInvoker");
#pragma pack(pop)
