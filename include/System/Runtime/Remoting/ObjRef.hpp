// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.IObjectReference
#include "System/Runtime/Serialization/IObjectReference.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: IChannelInfo
  class IChannelInfo;
  // Forward declaring type: IRemotingTypeInfo
  class IRemotingTypeInfo;
  // Forward declaring type: IEnvoyInfo
  class IEnvoyInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Autogenerated type: System.Runtime.Remoting.ObjRef
  class ObjRef : public ::Il2CppObject, public System::Runtime::Serialization::IObjectReference, public System::Runtime::Serialization::ISerializable {
    public:
    // private System.Runtime.Remoting.IChannelInfo channel_info
    // Offset: 0x10
    System::Runtime::Remoting::IChannelInfo* channel_info;
    // private System.String uri
    // Offset: 0x18
    ::Il2CppString* uri;
    // private System.Runtime.Remoting.IRemotingTypeInfo typeInfo
    // Offset: 0x20
    System::Runtime::Remoting::IRemotingTypeInfo* typeInfo;
    // private System.Runtime.Remoting.IEnvoyInfo envoyInfo
    // Offset: 0x28
    System::Runtime::Remoting::IEnvoyInfo* envoyInfo;
    // private System.Int32 flags
    // Offset: 0x30
    int flags;
    // private System.Type _serverType
    // Offset: 0x38
    System::Type* serverType;
    // Get static field: static private System.Int32 MarshalledObjectRef
    static int _get_MarshalledObjectRef();
    // Set static field: static private System.Int32 MarshalledObjectRef
    static void _set_MarshalledObjectRef(int value);
    // Get static field: static private System.Int32 WellKnowObjectRef
    static int _get_WellKnowObjectRef();
    // Set static field: static private System.Int32 WellKnowObjectRef
    static void _set_WellKnowObjectRef(int value);
    // System.Void .ctor(System.String uri, System.Runtime.Remoting.IChannelInfo cinfo)
    // Offset: 0x14FAF10
    static ObjRef* New_ctor(::Il2CppString* uri, System::Runtime::Remoting::IChannelInfo* cinfo);
    // System.Runtime.Remoting.ObjRef DeserializeInTheCurrentDomain(System.Int32 domainId, System.Byte[] tInfo)
    // Offset: 0x14FAF60
    System::Runtime::Remoting::ObjRef* DeserializeInTheCurrentDomain(int domainId, ::Array<uint8_t>* tInfo);
    // System.Byte[] SerializeType()
    // Offset: 0x14FB088
    ::Array<uint8_t>* SerializeType();
    // System.Void .ctor(System.Type type, System.String url, System.Object remoteChannelData)
    // Offset: 0x14FB128
    static ObjRef* New_ctor(System::Type* type, ::Il2CppString* url, ::Il2CppObject* remoteChannelData);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x14FB654
    static ObjRef* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Boolean get_IsReferenceToWellKnow()
    // Offset: 0x14FBAC0
    bool get_IsReferenceToWellKnow();
    // public System.Runtime.Remoting.IChannelInfo get_ChannelInfo()
    // Offset: 0x14FBB38
    System::Runtime::Remoting::IChannelInfo* get_ChannelInfo();
    // public System.Runtime.Remoting.IEnvoyInfo get_EnvoyInfo()
    // Offset: 0x14FBB40
    System::Runtime::Remoting::IEnvoyInfo* get_EnvoyInfo();
    // public System.Void set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo value)
    // Offset: 0x14FBB48
    void set_EnvoyInfo(System::Runtime::Remoting::IEnvoyInfo* value);
    // public System.Runtime.Remoting.IRemotingTypeInfo get_TypeInfo()
    // Offset: 0x14FBB50
    System::Runtime::Remoting::IRemotingTypeInfo* get_TypeInfo();
    // public System.Void set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo value)
    // Offset: 0x14FBB58
    void set_TypeInfo(System::Runtime::Remoting::IRemotingTypeInfo* value);
    // public System.String get_URI()
    // Offset: 0x14FBB60
    ::Il2CppString* get_URI();
    // public System.Void set_URI(System.String value)
    // Offset: 0x14FBB68
    void set_URI(::Il2CppString* value);
    // System.Void UpdateChannelInfo()
    // Offset: 0x14FAEA8
    void UpdateChannelInfo();
    // System.Type get_ServerType()
    // Offset: 0x14FBE04
    System::Type* get_ServerType();
    // static private System.Void .cctor()
    // Offset: 0x14FBF54
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x14FAE80
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ObjRef* New_ctor();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x14FBB70
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Object GetRealObject(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x14FBCE0
    // Implemented from: System.Runtime.Serialization.IObjectReference
    // Base method: System.Object IObjectReference::GetRealObject(System.Runtime.Serialization.StreamingContext context)
    ::Il2CppObject* GetRealObject(System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_IObjectReference_GetRealObject
    // Maps to method: GetRealObject
    ::Il2CppObject* System_Runtime_Serialization_IObjectReference_GetRealObject(System::Runtime::Serialization::StreamingContext context);
  }; // System.Runtime.Remoting.ObjRef
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ObjRef*, "System.Runtime.Remoting", "ObjRef");
#pragma pack(pop)
