// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.Utils.IAssemblyLoadProxy
#include "UnityEngine/TestTools/Utils/IAssemblyLoadProxy.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::Utils
namespace UnityEngine::TestTools::Utils {
  // Forward declaring type: IAssemblyWrapper
  class IAssemblyWrapper;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Autogenerated type: UnityEngine.TestTools.Utils.AssemblyLoadProxy
  class AssemblyLoadProxy : public ::Il2CppObject, public UnityEngine::TestTools::Utils::IAssemblyLoadProxy {
    public:
    // public UnityEngine.TestTools.Utils.IAssemblyWrapper Load(System.String assemblyString)
    // Offset: 0x12C6EF0
    // Implemented from: UnityEngine.TestTools.Utils.IAssemblyLoadProxy
    // Base method: UnityEngine.TestTools.Utils.IAssemblyWrapper IAssemblyLoadProxy::Load(System.String assemblyString)
    UnityEngine::TestTools::Utils::IAssemblyWrapper* Load(::Il2CppString* assemblyString);
    // public System.Void .ctor()
    // Offset: 0x12C633C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static AssemblyLoadProxy* New_ctor();
  }; // UnityEngine.TestTools.Utils.AssemblyLoadProxy
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Utils::AssemblyLoadProxy*, "UnityEngine.TestTools.Utils", "AssemblyLoadProxy");
#pragma pack(pop)
