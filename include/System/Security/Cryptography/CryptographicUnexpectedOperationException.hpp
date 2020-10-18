// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.CryptographicException
#include "System/Security/Cryptography/CryptographicException.hpp"
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
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.CryptographicUnexpectedOperationException
  class CryptographicUnexpectedOperationException : public System::Security::Cryptography::CryptographicException {
    public:
    // public System.Void .ctor()
    // Offset: 0x19CC84C
    // Implemented from: System.Security.Cryptography.CryptographicException
    // Base method: System.Void CryptographicException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static CryptographicUnexpectedOperationException* New_ctor();
    // public System.Void .ctor(System.String message)
    // Offset: 0x19CC87C
    // Implemented from: System.Security.Cryptography.CryptographicException
    // Base method: System.Void CryptographicException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    static CryptographicUnexpectedOperationException* New_ctor(::Il2CppString* message);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x19CC8C8
    // Implemented from: System.Security.Cryptography.CryptographicException
    // Base method: System.Void CryptographicException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static CryptographicUnexpectedOperationException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.Security.Cryptography.CryptographicUnexpectedOperationException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::CryptographicUnexpectedOperationException*, "System.Security.Cryptography", "CryptographicUnexpectedOperationException");
#pragma pack(pop)
