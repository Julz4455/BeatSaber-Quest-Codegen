// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UnhandledExceptionHandler
#include "UnityEngine/UnhandledExceptionHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: UnhandledExceptionEventHandler
  class UnhandledExceptionEventHandler;
  // Forward declaring type: UnhandledExceptionEventArgs
  class UnhandledExceptionEventArgs;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  // Autogenerated type: UnityEngine.UnhandledExceptionHandler/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D4D9F0
  class UnhandledExceptionHandler::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.UnhandledExceptionHandler/<>c <>9
    static UnityEngine::UnhandledExceptionHandler::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UnhandledExceptionHandler/<>c <>9
    static void _set_$$9(UnityEngine::UnhandledExceptionHandler::$$c* value);
    // Get static field: static public System.UnhandledExceptionEventHandler <>9__0_0
    static System::UnhandledExceptionEventHandler* _get_$$9__0_0();
    // Set static field: static public System.UnhandledExceptionEventHandler <>9__0_0
    static void _set_$$9__0_0(System::UnhandledExceptionEventHandler* value);
    // static private System.Void .cctor()
    // Offset: 0x16C93BC
    static void _cctor();
    // System.Void <RegisterUECatcher>b__0_0(System.Object sender, System.UnhandledExceptionEventArgs e)
    // Offset: 0x16C942C
    void $RegisterUECatcher$b__0_0(::Il2CppObject* sender, System::UnhandledExceptionEventArgs* e);
    // public System.Void .ctor()
    // Offset: 0x16C9424
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnhandledExceptionHandler::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine").WithContext("$$c").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnhandledExceptionHandler::$$c*, creationType>()));
    }
  }; // UnityEngine.UnhandledExceptionHandler/<>c
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnhandledExceptionHandler::$$c*, "UnityEngine", "UnhandledExceptionHandler/<>c");
#pragma pack(pop)
