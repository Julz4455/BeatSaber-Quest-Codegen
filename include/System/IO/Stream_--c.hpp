// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.IO.Stream/ReadWriteParameters
#include "System/IO/Stream_ReadWriteParameters.hpp"
// Including type: System.Threading.Tasks.VoidTaskResult
#include "System/Threading/Tasks/VoidTaskResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`5<T1, T2, T3, T4, TResult>
  template<typename T1, typename T2, typename T3, typename T4, typename TResult>
  class Func_5;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SemaphoreSlim
  class SemaphoreSlim;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  // Autogenerated type: System.IO.Stream/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D393C0
  class Stream::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly System.IO.Stream/<>c <>9
    static System::IO::Stream::$$c* _get_$$9();
    // Set static field: static public readonly System.IO.Stream/<>c <>9
    static void _set_$$9(System::IO::Stream::$$c* value);
    // Get static field: static public System.Func`1<System.Threading.SemaphoreSlim> <>9__4_0
    static System::Func_1<System::Threading::SemaphoreSlim*>* _get_$$9__4_0();
    // Set static field: static public System.Func`1<System.Threading.SemaphoreSlim> <>9__4_0
    static void _set_$$9__4_0(System::Func_1<System::Threading::SemaphoreSlim*>* value);
    // Get static field: static public System.Func`2<System.Object,System.Int32> <>9__39_0
    static System::Func_2<::Il2CppObject*, int>* _get_$$9__39_0();
    // Set static field: static public System.Func`2<System.Object,System.Int32> <>9__39_0
    static void _set_$$9__39_0(System::Func_2<::Il2CppObject*, int>* value);
    // Get static field: static public System.Func`5<System.IO.Stream,System.IO.Stream/ReadWriteParameters,System.AsyncCallback,System.Object,System.IAsyncResult> <>9__43_0
    static System::Func_5<System::IO::Stream*, System::IO::Stream::ReadWriteParameters, System::AsyncCallback*, ::Il2CppObject*, System::IAsyncResult*>* _get_$$9__43_0();
    // Set static field: static public System.Func`5<System.IO.Stream,System.IO.Stream/ReadWriteParameters,System.AsyncCallback,System.Object,System.IAsyncResult> <>9__43_0
    static void _set_$$9__43_0(System::Func_5<System::IO::Stream*, System::IO::Stream::ReadWriteParameters, System::AsyncCallback*, ::Il2CppObject*, System::IAsyncResult*>* value);
    // Get static field: static public System.Func`3<System.IO.Stream,System.IAsyncResult,System.Int32> <>9__43_1
    static System::Func_3<System::IO::Stream*, System::IAsyncResult*, int>* _get_$$9__43_1();
    // Set static field: static public System.Func`3<System.IO.Stream,System.IAsyncResult,System.Int32> <>9__43_1
    static void _set_$$9__43_1(System::Func_3<System::IO::Stream*, System::IAsyncResult*, int>* value);
    // Get static field: static public System.Func`2<System.Object,System.Int32> <>9__46_0
    static System::Func_2<::Il2CppObject*, int>* _get_$$9__46_0();
    // Set static field: static public System.Func`2<System.Object,System.Int32> <>9__46_0
    static void _set_$$9__46_0(System::Func_2<::Il2CppObject*, int>* value);
    // Get static field: static public System.Action`2<System.Threading.Tasks.Task,System.Object> <>9__47_0
    static System::Action_2<System::Threading::Tasks::Task*, ::Il2CppObject*>* _get_$$9__47_0();
    // Set static field: static public System.Action`2<System.Threading.Tasks.Task,System.Object> <>9__47_0
    static void _set_$$9__47_0(System::Action_2<System::Threading::Tasks::Task*, ::Il2CppObject*>* value);
    // Get static field: static public System.Func`5<System.IO.Stream,System.IO.Stream/ReadWriteParameters,System.AsyncCallback,System.Object,System.IAsyncResult> <>9__53_0
    static System::Func_5<System::IO::Stream*, System::IO::Stream::ReadWriteParameters, System::AsyncCallback*, ::Il2CppObject*, System::IAsyncResult*>* _get_$$9__53_0();
    // Set static field: static public System.Func`5<System.IO.Stream,System.IO.Stream/ReadWriteParameters,System.AsyncCallback,System.Object,System.IAsyncResult> <>9__53_0
    static void _set_$$9__53_0(System::Func_5<System::IO::Stream*, System::IO::Stream::ReadWriteParameters, System::AsyncCallback*, ::Il2CppObject*, System::IAsyncResult*>* value);
    // Get static field: static public System.Func`3<System.IO.Stream,System.IAsyncResult,System.Threading.Tasks.VoidTaskResult> <>9__53_1
    static System::Func_3<System::IO::Stream*, System::IAsyncResult*, System::Threading::Tasks::VoidTaskResult>* _get_$$9__53_1();
    // Set static field: static public System.Func`3<System.IO.Stream,System.IAsyncResult,System.Threading.Tasks.VoidTaskResult> <>9__53_1
    static void _set_$$9__53_1(System::Func_3<System::IO::Stream*, System::IAsyncResult*, System::Threading::Tasks::VoidTaskResult>* value);
    // static private System.Void .cctor()
    // Offset: 0x13A7760
    static void _cctor();
    // System.Threading.SemaphoreSlim <EnsureAsyncActiveSemaphoreInitialized>b__4_0()
    // Offset: 0x13A77D0
    System::Threading::SemaphoreSlim* $EnsureAsyncActiveSemaphoreInitialized$b__4_0();
    // System.Int32 <BeginReadInternal>b__39_0(System.Object <p0>)
    // Offset: 0x13A7834
    int $BeginReadInternal$b__39_0(::Il2CppObject* $p0$);
    // System.IAsyncResult <BeginEndReadAsync>b__43_0(System.IO.Stream stream, System.IO.Stream/ReadWriteParameters args, System.AsyncCallback callback, System.Object state)
    // Offset: 0x13A7984
    System::IAsyncResult* $BeginEndReadAsync$b__43_0(System::IO::Stream* stream, System::IO::Stream::ReadWriteParameters args, System::AsyncCallback* callback, ::Il2CppObject* state);
    // System.Int32 <BeginEndReadAsync>b__43_1(System.IO.Stream stream, System.IAsyncResult asyncResult)
    // Offset: 0x13A79B8
    int $BeginEndReadAsync$b__43_1(System::IO::Stream* stream, System::IAsyncResult* asyncResult);
    // System.Int32 <BeginWriteInternal>b__46_0(System.Object <p0>)
    // Offset: 0x13A79E4
    int $BeginWriteInternal$b__46_0(::Il2CppObject* $p0$);
    // System.Void <RunReadWriteTaskWhenReady>b__47_0(System.Threading.Tasks.Task t, System.Object state)
    // Offset: 0x13A7AFC
    void $RunReadWriteTaskWhenReady$b__47_0(System::Threading::Tasks::Task* t, ::Il2CppObject* state);
    // System.IAsyncResult <BeginEndWriteAsync>b__53_0(System.IO.Stream stream, System.IO.Stream/ReadWriteParameters args, System.AsyncCallback callback, System.Object state)
    // Offset: 0x13A7B8C
    System::IAsyncResult* $BeginEndWriteAsync$b__53_0(System::IO::Stream* stream, System::IO::Stream::ReadWriteParameters args, System::AsyncCallback* callback, ::Il2CppObject* state);
    // System.Threading.Tasks.VoidTaskResult <BeginEndWriteAsync>b__53_1(System.IO.Stream stream, System.IAsyncResult asyncResult)
    // Offset: 0x13A7BC0
    System::Threading::Tasks::VoidTaskResult $BeginEndWriteAsync$b__53_1(System::IO::Stream* stream, System::IAsyncResult* asyncResult);
    // public System.Void .ctor()
    // Offset: 0x13A77C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stream::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::IO").WithContext("$$c").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stream::$$c*, creationType>()));
    }
  }; // System.IO.Stream/<>c
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::Stream::$$c*, "System.IO", "Stream/<>c");
#pragma pack(pop)
