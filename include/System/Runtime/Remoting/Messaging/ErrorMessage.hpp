// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.IMethodCallMessage
#include "System/Runtime/Remoting/Messaging/IMethodCallMessage.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.ErrorMessage
  class ErrorMessage : public ::Il2CppObject, public System::Runtime::Remoting::Messaging::IMethodCallMessage {
    public:
    // private System.String _uri
    // Offset: 0x10
    ::Il2CppString* uri;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return uri;
    }
    // public System.Void .ctor()
    // Offset: 0x129B8C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ErrorMessage* New_ctor();
    // public System.Int32 get_ArgCount()
    // Offset: 0x12AA3F8
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Int32 IMethodMessage::get_ArgCount()
    int get_ArgCount();
    // public System.Object[] get_Args()
    // Offset: 0x12AA400
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Object[] IMethodMessage::get_Args()
    ::Array<::Il2CppObject*>* get_Args();
    // public System.Reflection.MethodBase get_MethodBase()
    // Offset: 0x12AA408
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Reflection.MethodBase IMethodMessage::get_MethodBase()
    System::Reflection::MethodBase* get_MethodBase();
    // public System.String get_MethodName()
    // Offset: 0x12AA410
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.String IMethodMessage::get_MethodName()
    ::Il2CppString* get_MethodName();
    // public System.Object get_MethodSignature()
    // Offset: 0x12AA458
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Object IMethodMessage::get_MethodSignature()
    ::Il2CppObject* get_MethodSignature();
    // public System.Collections.IDictionary get_Properties()
    // Offset: 0x12AA460
    // Implemented from: System.Runtime.Remoting.Messaging.IMessage
    // Base method: System.Collections.IDictionary IMessage::get_Properties()
    System::Collections::IDictionary* get_Properties();
    // public System.String get_TypeName()
    // Offset: 0x12AA468
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.String IMethodMessage::get_TypeName()
    ::Il2CppString* get_TypeName();
    // public System.String get_Uri()
    // Offset: 0x12AA4B0
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.String IMethodMessage::get_Uri()
    ::Il2CppString* get_Uri();
    // public System.Object GetArg(System.Int32 arg_num)
    // Offset: 0x12AA4B8
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Object IMethodMessage::GetArg(System.Int32 arg_num)
    ::Il2CppObject* GetArg(int arg_num);
    // public System.Runtime.Remoting.Messaging.LogicalCallContext get_LogicalCallContext()
    // Offset: 0x12AA4C0
    // Implemented from: System.Runtime.Remoting.Messaging.IMethodMessage
    // Base method: System.Runtime.Remoting.Messaging.LogicalCallContext IMethodMessage::get_LogicalCallContext()
    System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
  }; // System.Runtime.Remoting.Messaging.ErrorMessage
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ErrorMessage*, "System.Runtime.Remoting.Messaging", "ErrorMessage");
#pragma pack(pop)
