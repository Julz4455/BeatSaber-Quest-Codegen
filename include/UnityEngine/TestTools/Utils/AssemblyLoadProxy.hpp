// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.Utils.IAssemblyLoadProxy
#include "UnityEngine/TestTools/Utils/IAssemblyLoadProxy.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x10
  // Autogenerated type: UnityEngine.TestTools.Utils.AssemblyLoadProxy
  // [] Offset: FFFFFFFF
  class AssemblyLoadProxy : public ::Il2CppObject/*, public UnityEngine::TestTools::Utils::IAssemblyLoadProxy*/ {
    public:
    // Creating value type constructor for type: AssemblyLoadProxy
    AssemblyLoadProxy() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::TestTools::Utils::IAssemblyLoadProxy
    operator UnityEngine::TestTools::Utils::IAssemblyLoadProxy() noexcept {
      return *reinterpret_cast<UnityEngine::TestTools::Utils::IAssemblyLoadProxy*>(this);
    }
    // public UnityEngine.TestTools.Utils.IAssemblyWrapper Load(System.String assemblyString)
    // Offset: 0x11980BC
    // Implemented from: UnityEngine.TestTools.Utils.IAssemblyLoadProxy
    // Base method: UnityEngine.TestTools.Utils.IAssemblyWrapper IAssemblyLoadProxy::Load(System.String assemblyString)
    UnityEngine::TestTools::Utils::IAssemblyWrapper* Load(::Il2CppString* assemblyString);
    // public System.Void .ctor()
    // Offset: 0x1197508
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyLoadProxy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::TestTools::Utils").WithContext("AssemblyLoadProxy").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyLoadProxy*, creationType>()));
    }
  }; // UnityEngine.TestTools.Utils.AssemblyLoadProxy
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Utils::AssemblyLoadProxy*, "UnityEngine.TestTools.Utils", "AssemblyLoadProxy");
#pragma pack(pop)
