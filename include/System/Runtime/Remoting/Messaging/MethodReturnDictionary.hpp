// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.MessageDictionary
#include "System/Runtime/Remoting/Messaging/MessageDictionary.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMethodReturnMessage
  class IMethodReturnMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.MethodReturnDictionary
  class MethodReturnDictionary : public System::Runtime::Remoting::Messaging::MessageDictionary {
    public:
    // Get static field: static public System.String[] InternalReturnKeys
    static ::Array<::Il2CppString*>* _get_InternalReturnKeys();
    // Set static field: static public System.String[] InternalReturnKeys
    static void _set_InternalReturnKeys(::Array<::Il2CppString*>* value);
    // Get static field: static public System.String[] InternalExceptionKeys
    static ::Array<::Il2CppString*>* _get_InternalExceptionKeys();
    // Set static field: static public System.String[] InternalExceptionKeys
    static void _set_InternalExceptionKeys(::Array<::Il2CppString*>* value);
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMethodReturnMessage message)
    // Offset: 0x14F6114
    static MethodReturnDictionary* New_ctor(System::Runtime::Remoting::Messaging::IMethodReturnMessage* message);
    // static private System.Void .cctor()
    // Offset: 0x14F6754
    static void _cctor();
  }; // System.Runtime.Remoting.Messaging.MethodReturnDictionary
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::MethodReturnDictionary*, "System.Runtime.Remoting.Messaging", "MethodReturnDictionary");
#pragma pack(pop)
