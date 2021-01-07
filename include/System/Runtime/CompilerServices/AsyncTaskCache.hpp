// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
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
  // Size: 0x10
  // Autogenerated type: System.Runtime.CompilerServices.AsyncTaskCache
  // [] Offset: FFFFFFFF
  class AsyncTaskCache : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AsyncTaskCache
    AsyncTaskCache() noexcept {}
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
    // Offset: 0x11626B4
    static ::Array<System::Threading::Tasks::Task_1<int>*>* CreateInt32Tasks();
    // static System.Threading.Tasks.Task`1<TResult> CreateCacheableTask(TResult result)
    // Offset: 0xFFFFFFFF
    template<class TResult>
    static System::Threading::Tasks::Task_1<TResult>* CreateCacheableTask(TResult result) {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("System::Runtime::CompilerServices").WithContext("AsyncTaskCache").WithContext("CreateCacheableTask");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.CompilerServices", "AsyncTaskCache", "CreateCacheableTask", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, ::il2cpp_utils::ExtractTypes(result)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<TResult>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, result);
    }
    // static private System.Void .cctor()
    // Offset: 0x11627DC
    static void _cctor();
  }; // System.Runtime.CompilerServices.AsyncTaskCache
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::AsyncTaskCache*, "System.Runtime.CompilerServices", "AsyncTaskCache");
#pragma pack(pop)
