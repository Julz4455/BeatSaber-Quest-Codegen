// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.IMethodReturnMessage
#include "System/Runtime/Remoting/Messaging/IMethodReturnMessage.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Remoting.Messaging.IInternalMessage
#include "System/Runtime/Remoting/Messaging/IInternalMessage.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: ArgInfo
  class ArgInfo;
  // Forward declaring type: IMethodCallMessage
  class IMethodCallMessage;
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
  // Forward declaring type: CADMethodReturnMessage
  class CADMethodReturnMessage;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: Identity
  class Identity;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.MethodResponse
  class MethodResponse : public ::Il2CppObject, public System::Runtime::Remoting::Messaging::IMethodReturnMessage, public System::Runtime::Serialization::ISerializable, public System::Runtime::Remoting::Messaging::IInternalMessage {
    public:
    // private System.String _methodName
    // Offset: 0x10
    ::Il2CppString* methodName;
    // private System.String _uri
    // Offset: 0x18
    ::Il2CppString* uri;
    // private System.String _typeName
    // Offset: 0x20
    ::Il2CppString* typeName;
    // private System.Reflection.MethodBase _methodBase
    // Offset: 0x28
    System::Reflection::MethodBase* methodBase;
    // private System.Object _returnValue
    // Offset: 0x30
    ::Il2CppObject* returnValue;
    // private System.Exception _exception
    // Offset: 0x38
    System::Exception* exception;
    // private System.Type[] _methodSignature
    // Offset: 0x40
    ::Array<System::Type*>* methodSignature;
    // private System.Runtime.Remoting.Messaging.ArgInfo _inArgInfo
    // Offset: 0x48
    System::Runtime::Remoting::Messaging::ArgInfo* inArgInfo;
    // private System.Object[] _args
    // Offset: 0x50
    ::Array<::Il2CppObject*>* args;
    // private System.Object[] _outArgs
    // Offset: 0x58
    ::Array<::Il2CppObject*>* outArgs;
    // private System.Runtime.Remoting.Messaging.IMethodCallMessage _callMsg
    // Offset: 0x60
    System::Runtime::Remoting::Messaging::IMethodCallMessage* callMsg;
    // private System.Runtime.Remoting.Messaging.LogicalCallContext _callContext
    // Offset: 0x68
    System::Runtime::Remoting::Messaging::LogicalCallContext* callContext;
    // private System.Runtime.Remoting.Identity _targetIdentity
    // Offset: 0x70
    System::Runtime::Remoting::Identity* targetIdentity;
    // protected System.Collections.IDictionary ExternalProperties
    // Offset: 0x78
    System::Collections::IDictionary* ExternalProperties;
    // protected System.Collections.IDictionary InternalProperties
    // Offset: 0x80
    System::Collections::IDictionary* InternalProperties;
    // System.Void .ctor(System.Exception e, System.Runtime.Remoting.Messaging.IMethodCallMessage msg)
    // Offset: 0x14F5138
    static MethodResponse* New_ctor(System::Exception* e, System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);
    // System.Void .ctor(System.Object returnValue, System.Object[] outArgs, System.Runtime.Remoting.Messaging.LogicalCallContext callCtx, System.Runtime.Remoting.Messaging.IMethodCallMessage msg)
    // Offset: 0x14F527C
    static MethodResponse* New_ctor(::Il2CppObject* returnValue, ::Array<::Il2CppObject*>* outArgs, System::Runtime::Remoting::Messaging::LogicalCallContext* callCtx, System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);
    // System.Void .ctor(System.Runtime.Remoting.Messaging.IMethodCallMessage msg, System.Runtime.Remoting.Messaging.CADMethodReturnMessage retmsg)
    // Offset: 0x14F53A4
    static MethodResponse* New_ctor(System::Runtime::Remoting::Messaging::IMethodCallMessage* msg, System::Runtime::Remoting::Messaging::CADMethodReturnMessage* retmsg);
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x14F5694
    static MethodResponse* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Void InitMethodProperty(System.String key, System.Object value)
    // Offset: 0x14F5710
    void InitMethodProperty(::Il2CppString* key, ::Il2CppObject* value);
    // public System.Void set_Uri(System.String value)
    // Offset: 0x14F6330
    void set_Uri(::Il2CppString* value);
    // public System.Int32 get_ArgCount()
    // Offset: 0x14F5AE8
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Int32 IMethodMessage::get_ArgCount()
    int get_ArgCount();
    // public System.Object[] get_Args()
    // Offset: 0x14F5B00
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Object[] IMethodMessage::get_Args()
    ::Array<::Il2CppObject*>* get_Args();
    // public System.Exception get_Exception()
    // Offset: 0x14F5B08
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodReturnMessage
    // Base method: System.Exception IMethodReturnMessage::get_Exception()
    System::Exception* get_Exception();
    // public System.Runtime.Remoting.Messaging.LogicalCallContext get_LogicalCallContext()
    // Offset: 0x14F5B10
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Runtime.Remoting.Messaging.LogicalCallContext IMethodMessage::get_LogicalCallContext()
    System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
    // public System.Reflection.MethodBase get_MethodBase()
    // Offset: 0x14F5B88
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Reflection.MethodBase IMethodMessage::get_MethodBase()
    System::Reflection::MethodBase* get_MethodBase();
    // public System.String get_MethodName()
    // Offset: 0x14F5CBC
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.String IMethodMessage::get_MethodName()
    ::Il2CppString* get_MethodName();
    // public System.Object get_MethodSignature()
    // Offset: 0x14F5E74
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Object IMethodMessage::get_MethodSignature()
    ::Il2CppObject* get_MethodSignature();
    // public System.Object[] get_OutArgs()
    // Offset: 0x14F5F88
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodReturnMessage
    // Base method: System.Object[] IMethodReturnMessage::get_OutArgs()
    ::Array<::Il2CppObject*>* get_OutArgs();
    // public System.Collections.IDictionary get_Properties()
    // Offset: 0x14F6070
    // Implemented from: System.Runtime.Remoting.Messaging.IMessage
    // Base method: System.Collections.IDictionary IMessage::get_Properties()
    System::Collections::IDictionary* get_Properties();
    // public System.Object get_ReturnValue()
    // Offset: 0x14F624C
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodReturnMessage
    // Base method: System.Object IMethodReturnMessage::get_ReturnValue()
    ::Il2CppObject* get_ReturnValue();
    // public System.String get_TypeName()
    // Offset: 0x14F5D98
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.String IMethodMessage::get_TypeName()
    ::Il2CppString* get_TypeName();
    // public System.String get_Uri()
    // Offset: 0x14F6254
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.String IMethodMessage::get_Uri()
    ::Il2CppString* get_Uri();
    // private System.String System.Runtime.Remoting.Messaging.IInternalMessage.get_Uri()
    // Offset: 0x14F6338
    // Implemented from: System.Runtime.Remoting.Messaging.IInternalMessage
    // Base method: System.String IInternalMessage::get_Uri()
    ::Il2CppString* System_Runtime_Remoting_Messaging_IInternalMessage_get_Uri();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String value)
    // Offset: 0x14F633C
    // Implemented from: System.Runtime.Remoting.Messaging.IInternalMessage
    // Base method: System.Void IInternalMessage::set_Uri(System.String value)
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(::Il2CppString* value);
    // public System.Object GetArg(System.Int32 argNum)
    // Offset: 0x14F6344
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Object IMethodMessage::GetArg(System.Int32 argNum)
    ::Il2CppObject* GetArg(int argNum);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x14F6380
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Runtime.Remoting.Identity System.Runtime.Remoting.Messaging.IInternalMessage.get_TargetIdentity()
    // Offset: 0x14F6744
    // Implemented from: System.Runtime.Remoting.Messaging.IInternalMessage
    // Base method: System.Runtime.Remoting.Identity IInternalMessage::get_TargetIdentity()
    System::Runtime::Remoting::Identity* System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity();
    // private System.Void System.Runtime.Remoting.Messaging.IInternalMessage.set_TargetIdentity(System.Runtime.Remoting.Identity value)
    // Offset: 0x14F674C
    // Implemented from: System.Runtime.Remoting.Messaging.IInternalMessage
    // Base method: System.Void IInternalMessage::set_TargetIdentity(System.Runtime.Remoting.Identity value)
    void System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity(System::Runtime::Remoting::Identity* value);
  }; // System.Runtime.Remoting.Messaging.MethodResponse
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::MethodResponse*, "System.Runtime.Remoting.Messaging", "MethodResponse");
#pragma pack(pop)
