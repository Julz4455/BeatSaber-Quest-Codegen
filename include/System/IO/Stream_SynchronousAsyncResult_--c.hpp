// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream/SynchronousAsyncResult
#include "System/IO/Stream_SynchronousAsyncResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  // Autogenerated type: System.IO.Stream/SynchronousAsyncResult/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D393B0
  class Stream::SynchronousAsyncResult::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly System.IO.Stream/SynchronousAsyncResult/<>c <>9
    static System::IO::Stream::SynchronousAsyncResult::$$c* _get_$$9();
    // Set static field: static public readonly System.IO.Stream/SynchronousAsyncResult/<>c <>9
    static void _set_$$9(System::IO::Stream::SynchronousAsyncResult::$$c* value);
    // Get static field: static public System.Func`1<System.Threading.ManualResetEvent> <>9__12_0
    static System::Func_1<System::Threading::ManualResetEvent*>* _get_$$9__12_0();
    // Set static field: static public System.Func`1<System.Threading.ManualResetEvent> <>9__12_0
    static void _set_$$9__12_0(System::Func_1<System::Threading::ManualResetEvent*>* value);
    // static private System.Void .cctor()
    // Offset: 0x13A8808
    static void _cctor();
    // System.Threading.ManualResetEvent <get_AsyncWaitHandle>b__12_0()
    // Offset: 0x13A8878
    System::Threading::ManualResetEvent* $get_AsyncWaitHandle$b__12_0();
    // public System.Void .ctor()
    // Offset: 0x13A8870
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stream::SynchronousAsyncResult::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO").WithContext("$$c").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stream::SynchronousAsyncResult::$$c*, creationType>()));
    }
  }; // System.IO.Stream/SynchronousAsyncResult/<>c
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::Stream::SynchronousAsyncResult::$$c*, "System.IO", "Stream/SynchronousAsyncResult/<>c");
#pragma pack(pop)
