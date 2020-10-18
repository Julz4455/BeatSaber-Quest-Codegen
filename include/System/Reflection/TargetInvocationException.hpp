// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ApplicationException
#include "System/ApplicationException.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.TargetInvocationException
  class TargetInvocationException : public System::ApplicationException {
    public:
    // public System.Void .ctor(System.Exception inner)
    // Offset: 0x18D0568
    static TargetInvocationException* New_ctor(System::Exception* inner);
    // private System.Void .ctor()
    // Offset: 0x18D6C70
    // Implemented from: System.ApplicationException
    // Base method: System.Void ApplicationException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static TargetInvocationException* New_ctor();
    // public System.Void .ctor(System.String message, System.Exception inner)
    // Offset: 0x18D6CE4
    // Implemented from: System.ApplicationException
    // Base method: System.Void ApplicationException::.ctor(System.String message, System.Exception inner)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception inner)
    static TargetInvocationException* New_ctor(::Il2CppString* message, System::Exception* inner);
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x18D6D18
    // Implemented from: System.ApplicationException
    // Base method: System.Void ApplicationException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static TargetInvocationException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.Reflection.TargetInvocationException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::TargetInvocationException*, "System.Reflection", "TargetInvocationException");
#pragma pack(pop)
