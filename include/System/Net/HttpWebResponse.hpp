// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebResponse
#include "System/Net/WebResponse.hpp"
// Including type: System.Net.HttpStatusCode
#include "System/Net/HttpStatusCode.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: Version
  class Version;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: CookieCollection
  class CookieCollection;
  // Forward declaring type: CookieContainer
  class CookieContainer;
  // Forward declaring type: WebConnectionData
  class WebConnectionData;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.HttpWebResponse
  class HttpWebResponse : public System::Net::WebResponse {
    public:
    // private System.Uri uri
    // Offset: 0x18
    System::Uri* uri;
    // private System.Net.WebHeaderCollection webHeaders
    // Offset: 0x20
    System::Net::WebHeaderCollection* webHeaders;
    // private System.Net.CookieCollection cookieCollection
    // Offset: 0x28
    System::Net::CookieCollection* cookieCollection;
    // private System.String method
    // Offset: 0x30
    ::Il2CppString* method;
    // private System.Version version
    // Offset: 0x38
    System::Version* version;
    // private System.Net.HttpStatusCode statusCode
    // Offset: 0x40
    System::Net::HttpStatusCode statusCode;
    // private System.String statusDescription
    // Offset: 0x48
    ::Il2CppString* statusDescription;
    // private System.Int64 contentLength
    // Offset: 0x50
    int64_t contentLength;
    // private System.String contentType
    // Offset: 0x58
    ::Il2CppString* contentType;
    // private System.Net.CookieContainer cookie_container
    // Offset: 0x60
    System::Net::CookieContainer* cookie_container;
    // private System.Boolean disposed
    // Offset: 0x68
    bool disposed;
    // private System.IO.Stream stream
    // Offset: 0x70
    System::IO::Stream* stream;
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // System.Void .ctor(System.Uri uri, System.String method, System.Net.WebConnectionData data, System.Net.CookieContainer container)
    // Offset: 0x146E064
    static HttpWebResponse* New_ctor(System::Uri* uri, ::Il2CppString* method, System::Net::WebConnectionData* data, System::Net::CookieContainer* container);
    // public System.Net.HttpStatusCode get_StatusCode()
    // Offset: 0x146F90C
    System::Net::HttpStatusCode get_StatusCode();
    // public System.String get_StatusDescription()
    // Offset: 0x146F914
    ::Il2CppString* get_StatusDescription();
    // System.Void ReadAll()
    // Offset: 0x146D4B8
    void ReadAll();
    // private System.Void CheckDisposed()
    // Offset: 0x146F860
    void CheckDisposed();
    // private System.Void FillCookies()
    // Offset: 0x146F328
    void FillCookies();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x146F558
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    static HttpWebResponse* New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.Net.WebHeaderCollection get_Headers()
    // Offset: 0x146F834
    // Implemented from: System.Net.WebResponse
    // Base method: System.Net.WebHeaderCollection WebResponse::get_Headers()
    System::Net::WebHeaderCollection* get_Headers();
    // public override System.Uri get_ResponseUri()
    // Offset: 0x146F83C
    // Implemented from: System.Net.WebResponse
    // Base method: System.Uri WebResponse::get_ResponseUri()
    System::Uri* get_ResponseUri();
    // public override System.IO.Stream GetResponseStream()
    // Offset: 0x146F938
    // Implemented from: System.Net.WebResponse
    // Base method: System.IO.Stream WebResponse::GetResponseStream()
    System::IO::Stream* GetResponseStream();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x146F9D8
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // protected override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x146F9E4
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.Void Close()
    // Offset: 0x146FB34
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::Close()
    void Close();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x146FB7C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x146FB8C
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public System.Void .ctor()
    // Offset: 0x146FBA0
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    static HttpWebResponse* New_ctor();
  }; // System.Net.HttpWebResponse
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpWebResponse*, "System.Net", "HttpWebResponse");
#pragma pack(pop)
