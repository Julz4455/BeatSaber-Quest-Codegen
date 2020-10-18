// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.AsyncTaskCache
  class AsyncTaskCache : public ::Il2CppObject {
    public:
    // Get static field: static readonly System.Threading.Tasks.Task`1<System.Boolean> TrueTask
    static System::Threading::Tasks::Task_1<bool>* _get_TrueTask();
    // Set static field: static readonly System.Threading.Tasks.Task`1<System.Boolean> TrueTask
    static void _set_TrueTask(System::Threading::Tasks::Task_1<bool>* value);
    // Get static field: static readonly System.Threading.Tasks.Task`1<System.Boolean> FalseTask
    static System::Threading::Tasks::Task_1<bool>* _get_FalseTask();
    // Set static field: static readonly System.Threading.Tasks.Task`1<System.Boolean> FalseTask
    static void _set_FalseTask(System::Threading::Tasks::Task_1<bool>* value);
    // Get static field: static readonly System.Threading.Tasks.Task`1<System.Int32>[] Int32Tasks
    static ::Array<System::Threading::Tasks::Task_1<int>*>* _get_Int32Tasks();
    // Set static field: static readonly System.Threading.Tasks.Task`1<System.Int32>[] Int32Tasks
    static void _set_Int32Tasks(::Array<System::Threading::Tasks::Task_1<int>*>* value);
    // static private System.Threading.Tasks.Task`1<System.Int32>[] CreateInt32Tasks()
    // Offset: 0x12904E8
    static ::Array<System::Threading::Tasks::Task_1<int>*>* CreateInt32Tasks();
    // static System.Threading.Tasks.Task`1<TResult> CreateCacheableTask(TResult result)
    // Offset: 0xFFFFFFFF
    template<class TResult>
    static System::Threading::Tasks::Task_1<TResult>* CreateCacheableTask(TResult result) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Threading::Tasks::Task_1<TResult>*>("System.Runtime.CompilerServices", "AsyncTaskCache", "CreateCacheableTask", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, result)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1290610
    static void _cctor();
  }; // System.Runtime.CompilerServices.AsyncTaskCache
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::AsyncTaskCache*, "System.Runtime.CompilerServices", "AsyncTaskCache");
#pragma pack(pop)
