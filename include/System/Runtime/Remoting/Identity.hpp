// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
  // Forward declaring type: IMessage
  class IMessage;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: DynamicPropertyCollection
  class DynamicPropertyCollection;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ObjRef
  class ObjRef;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Autogenerated type: System.Runtime.Remoting.Identity
  class Identity : public ::Il2CppObject {
    public:
    // protected System.String _objectUri
    // Offset: 0x10
    ::Il2CppString* objectUri;
    // protected System.Runtime.Remoting.Messaging.IMessageSink _channelSink
    // Offset: 0x18
    System::Runtime::Remoting::Messaging::IMessageSink* channelSink;
    // protected System.Runtime.Remoting.Messaging.IMessageSink _envoySink
    // Offset: 0x20
    System::Runtime::Remoting::Messaging::IMessageSink* envoySink;
    // private System.Runtime.Remoting.Contexts.DynamicPropertyCollection _clientDynamicProperties
    // Offset: 0x28
    System::Runtime::Remoting::Contexts::DynamicPropertyCollection* clientDynamicProperties;
    // private System.Runtime.Remoting.Contexts.DynamicPropertyCollection _serverDynamicProperties
    // Offset: 0x30
    System::Runtime::Remoting::Contexts::DynamicPropertyCollection* serverDynamicProperties;
    // protected System.Runtime.Remoting.ObjRef _objRef
    // Offset: 0x38
    System::Runtime::Remoting::ObjRef* objRef;
    // private System.Boolean _disposed
    // Offset: 0x40
    bool disposed;
    // public System.Void .ctor(System.String objectUri)
    // Offset: 0x129C790
    static Identity* New_ctor(::Il2CppString* objectUri);
    // public System.Runtime.Remoting.ObjRef CreateObjRef(System.Type requestedType)
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::ObjRef* CreateObjRef(System::Type* requestedType);
    // public System.Runtime.Remoting.Messaging.IMessageSink get_ChannelSink()
    // Offset: 0x12A2D7C
    System::Runtime::Remoting::Messaging::IMessageSink* get_ChannelSink();
    // public System.Void set_ChannelSink(System.Runtime.Remoting.Messaging.IMessageSink value)
    // Offset: 0x12A2D84
    void set_ChannelSink(System::Runtime::Remoting::Messaging::IMessageSink* value);
    // public System.Runtime.Remoting.Messaging.IMessageSink get_EnvoySink()
    // Offset: 0x12A2D8C
    System::Runtime::Remoting::Messaging::IMessageSink* get_EnvoySink();
    // public System.String get_ObjectUri()
    // Offset: 0x12A2D94
    ::Il2CppString* get_ObjectUri();
    // public System.Void set_ObjectUri(System.String value)
    // Offset: 0x12A2D9C
    void set_ObjectUri(::Il2CppString* value);
    // public System.Boolean get_IsConnected()
    // Offset: 0x12A2DA4
    bool get_IsConnected();
    // public System.Boolean get_Disposed()
    // Offset: 0x12A2DB4
    bool get_Disposed();
    // public System.Void set_Disposed(System.Boolean value)
    // Offset: 0x12A2DBC
    void set_Disposed(bool value);
    // public System.Runtime.Remoting.Contexts.DynamicPropertyCollection get_ClientDynamicProperties()
    // Offset: 0x12A09D8
    System::Runtime::Remoting::Contexts::DynamicPropertyCollection* get_ClientDynamicProperties();
    // public System.Boolean get_HasServerDynamicSinks()
    // Offset: 0x12A2DC8
    bool get_HasServerDynamicSinks();
    // public System.Void NotifyClientDynamicSinks(System.Boolean start, System.Runtime.Remoting.Messaging.IMessage req_msg, System.Boolean client_site, System.Boolean async)
    // Offset: 0x12A2E0C
    void NotifyClientDynamicSinks(bool start, System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async);
    // public System.Void NotifyServerDynamicSinks(System.Boolean start, System.Runtime.Remoting.Messaging.IMessage req_msg, System.Boolean client_site, System.Boolean async)
    // Offset: 0x12A2EA0
    void NotifyServerDynamicSinks(bool start, System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async);
  }; // System.Runtime.Remoting.Identity
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Identity*, "System.Runtime.Remoting", "Identity");
#pragma pack(pop)
