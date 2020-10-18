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
  // Forward declaring type: CADArgHolder
  class CADArgHolder;
  // Forward declaring type: IMethodMessage
  class IMethodMessage;
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.CADMessageBase
  class CADMessageBase : public ::Il2CppObject {
    public:
    // protected System.Object[] _args
    // Offset: 0x10
    ::Array<::Il2CppObject*>* args;
    // protected System.Byte[] _serializedArgs
    // Offset: 0x18
    ::Array<uint8_t>* serializedArgs;
    // protected System.Int32 _propertyCount
    // Offset: 0x20
    int propertyCount;
    // protected System.Runtime.Remoting.Messaging.CADArgHolder _callContext
    // Offset: 0x28
    System::Runtime::Remoting::Messaging::CADArgHolder* callContext;
    // System.Byte[] serializedMethod
    // Offset: 0x30
    ::Array<uint8_t>* serializedMethod;
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMethodMessage msg)
    // Offset: 0x12A5B70
    static CADMessageBase* New_ctor(System::Runtime::Remoting::Messaging::IMethodMessage* msg);
    // System.Reflection.MethodBase GetMethod()
    // Offset: 0x12A5F38
    System::Reflection::MethodBase* GetMethod();
    // static protected System.Type[] GetSignature(System.Reflection.MethodBase methodBase, System.Boolean load)
    // Offset: 0x12A63D4
    static ::Array<System::Type*>* GetSignature(System::Reflection::MethodBase* methodBase, bool load);
    // static System.Int32 MarshalProperties(System.Collections.IDictionary dict, ref System.Collections.ArrayList args)
    // Offset: 0x12A658C
    static int MarshalProperties(System::Collections::IDictionary* dict, System::Collections::ArrayList*& args);
    // static System.Void UnmarshalProperties(System.Collections.IDictionary dict, System.Int32 count, System.Collections.ArrayList args)
    // Offset: 0x12A6C60
    static void UnmarshalProperties(System::Collections::IDictionary* dict, int count, System::Collections::ArrayList* args);
    // static private System.Boolean IsPossibleToIgnoreMarshal(System.Object obj)
    // Offset: 0x12A6DA0
    static bool IsPossibleToIgnoreMarshal(::Il2CppObject* obj);
    // protected System.Object MarshalArgument(System.Object arg, ref System.Collections.ArrayList args)
    // Offset: 0x12A6F2C
    ::Il2CppObject* MarshalArgument(::Il2CppObject* arg, System::Collections::ArrayList*& args);
    // protected System.Object UnmarshalArgument(System.Object arg, System.Collections.ArrayList args)
    // Offset: 0x12A7150
    ::Il2CppObject* UnmarshalArgument(::Il2CppObject* arg, System::Collections::ArrayList* args);
    // System.Object[] MarshalArguments(System.Object[] arguments, ref System.Collections.ArrayList args)
    // Offset: 0x12A76A4
    ::Array<::Il2CppObject*>* MarshalArguments(::Array<::Il2CppObject*>* arguments, System::Collections::ArrayList*& args);
    // System.Object[] UnmarshalArguments(System.Object[] arguments, System.Collections.ArrayList args)
    // Offset: 0x12A77C4
    ::Array<::Il2CppObject*>* UnmarshalArguments(::Array<::Il2CppObject*>* arguments, System::Collections::ArrayList* args);
    // protected System.Void SaveLogicalCallContext(System.Runtime.Remoting.Messaging.IMethodMessage msg, ref System.Collections.ArrayList serializeList)
    // Offset: 0x12A78E4
    void SaveLogicalCallContext(System::Runtime::Remoting::Messaging::IMethodMessage* msg, System::Collections::ArrayList*& serializeList);
    // System.Runtime.Remoting.Messaging.LogicalCallContext GetLogicalCallContext(System.Collections.ArrayList args)
    // Offset: 0x12A7BA0
    System::Runtime::Remoting::Messaging::LogicalCallContext* GetLogicalCallContext(System::Collections::ArrayList* args);
  }; // System.Runtime.Remoting.Messaging.CADMessageBase
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::CADMessageBase*, "System.Runtime.Remoting.Messaging", "CADMessageBase");
#pragma pack(pop)
