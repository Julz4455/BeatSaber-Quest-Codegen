// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.TestRunner.PlaymodeTestsController
#include "UnityEngine/TestTools/TestRunner/PlaymodeTestsController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::TestTools::Utils
namespace UnityEngine::TestTools::Utils {
  // Forward declaring type: IAssemblyWrapper
  class IAssemblyWrapper;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Autogenerated type: UnityEngine.TestTools.TestRunner.PlaymodeTestsController/<>c
  class PlaymodeTestsController::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.TestTools.TestRunner.PlaymodeTestsController/<>c <>9
    static UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestTools.TestRunner.PlaymodeTestsController/<>c <>9
    static void _set_$$9(UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.TestTools.Utils.IAssemblyWrapper,System.Reflection.Assembly> <>9__16_0
    static System::Func_2<UnityEngine::TestTools::Utils::IAssemblyWrapper*, System::Reflection::Assembly*>* _get_$$9__16_0();
    // Set static field: static public System.Func`2<UnityEngine.TestTools.Utils.IAssemblyWrapper,System.Reflection.Assembly> <>9__16_0
    static void _set_$$9__16_0(System::Func_2<UnityEngine::TestTools::Utils::IAssemblyWrapper*, System::Reflection::Assembly*>* value);
    // static private System.Void .cctor()
    // Offset: 0x12C5DFC
    static void _cctor();
    // System.Reflection.Assembly <Run>b__16_0(UnityEngine.TestTools.Utils.IAssemblyWrapper a)
    // Offset: 0x12C5E6C
    System::Reflection::Assembly* $Run$b__16_0(UnityEngine::TestTools::Utils::IAssemblyWrapper* a);
    // public System.Void .ctor()
    // Offset: 0x12C5E64
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlaymodeTestsController::$$c* New_ctor();
  }; // UnityEngine.TestTools.TestRunner.PlaymodeTestsController/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::PlaymodeTestsController::$$c*, "UnityEngine.TestTools.TestRunner", "PlaymodeTestsController/<>c");
#pragma pack(pop)
