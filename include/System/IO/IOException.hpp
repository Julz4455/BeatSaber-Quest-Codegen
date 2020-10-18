// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.SystemException
#include "System/SystemException.hpp"
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
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.IOException
  class IOException : public System::SystemException {
    public:
    // private System.String _maybeFullPath
    // Offset: 0x88
    ::Il2CppString* maybeFullPath;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return maybeFullPath;
    }
    // public System.Void .ctor(System.String message, System.Int32 hresult)
    // Offset: 0x169A2DC
    static IOException* New_ctor(::Il2CppString* message, int hresult);
    // System.Void .ctor(System.String message, System.Int32 hresult, System.String maybeFullPath)
    // Offset: 0x169A310
    static IOException* New_ctor(::Il2CppString* message, int hresult, ::Il2CppString* maybeFullPath);
    // public System.Void .ctor()
    // Offset: 0x16994D8
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static IOException* New_ctor();
    // public System.Void .ctor(System.String message)
    // Offset: 0x168CEC4
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    static IOException* New_ctor(::Il2CppString* message);
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x168CB0C
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception innerException)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception innerException)
    static IOException* New_ctor(::Il2CppString* message, System::Exception* innerException);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1692280
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static IOException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.IO.IOException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::IOException*, "System.IO", "IOException");
#pragma pack(pop)
