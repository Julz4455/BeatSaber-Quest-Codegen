// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ContextBoundObject
#include "System/ContextBoundObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: CrossContextDelegate
  class CrossContextDelegate;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Autogenerated type: System.Runtime.Remoting.Contexts.ContextCallbackObject
  class ContextCallbackObject : public System::ContextBoundObject {
    public:
    // public System.Void DoCallBack(System.Runtime.Remoting.Contexts.CrossContextDelegate deleg)
    // Offset: 0x12A1B48
    void DoCallBack(System::Runtime::Remoting::Contexts::CrossContextDelegate* deleg);
    // public System.Void .ctor()
    // Offset: 0x12A1B40
    // Implemented from: System.ContextBoundObject
    // Base method: System.Void ContextBoundObject::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    static ContextCallbackObject* New_ctor();
  }; // System.Runtime.Remoting.Contexts.ContextCallbackObject
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::ContextCallbackObject*, "System.Runtime.Remoting.Contexts", "ContextCallbackObject");
#pragma pack(pop)
