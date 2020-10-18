// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MissingMemberException
#include "System/MissingMemberException.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.MissingMethodException
  class MissingMethodException : public System::MissingMemberException {
    public:
    // private System.String signature
    // Offset: 0xA0
    ::Il2CppString* signature;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return signature;
    }
    // public System.Void .ctor(System.String className, System.String methodName)
    // Offset: 0x159E530
    static MissingMethodException* New_ctor(::Il2CppString* className, ::Il2CppString* methodName);
    // private System.Void .ctor(System.String className, System.String methodName, System.String signature, System.String message)
    // Offset: 0x159E57C
    static MissingMethodException* New_ctor(::Il2CppString* className, ::Il2CppString* methodName, ::Il2CppString* signature, ::Il2CppString* message);
    // public System.Void .ctor()
    // Offset: 0x159E390
    // Implemented from: System.MissingMemberException
    // Base method: System.Void MissingMemberException::.ctor()
    // Base method: System.Void MemberAccessException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissingMethodException* New_ctor();
    // public System.Void .ctor(System.String message)
    // Offset: 0x159E400
    // Implemented from: System.MissingMemberException
    // Base method: System.Void MissingMemberException::.ctor(System.String message)
    // Base method: System.Void MemberAccessException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    static MissingMethodException* New_ctor(::Il2CppString* message);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x159E430
    // Implemented from: System.MissingMemberException
    // Base method: System.Void MissingMemberException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void MemberAccessException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static MissingMethodException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.String get_Message()
    // Offset: 0x159E434
    // Implemented from: System.MissingMemberException
    // Base method: System.String MissingMemberException::get_Message()
    ::Il2CppString* get_Message();
  }; // System.MissingMethodException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::MissingMethodException*, "System", "MissingMethodException");
#pragma pack(pop)
