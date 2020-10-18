// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.IThreadPoolWorkItem
#include "System/Threading/IThreadPoolWorkItem.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitCallback
  class WaitCallback;
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
  // Forward declaring type: ContextCallback
  class ContextCallback;
  // Forward declaring type: StackCrawlMark
  struct StackCrawlMark;
  // Forward declaring type: ThreadAbortException
  class ThreadAbortException;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.QueueUserWorkItemCallback
  class QueueUserWorkItemCallback : public ::Il2CppObject, public System::Threading::IThreadPoolWorkItem {
    public:
    // private System.Threading.WaitCallback callback
    // Offset: 0x10
    System::Threading::WaitCallback* callback;
    // private System.Threading.ExecutionContext context
    // Offset: 0x18
    System::Threading::ExecutionContext* context;
    // private System.Object state
    // Offset: 0x20
    ::Il2CppObject* state;
    // Get static field: static System.Threading.ContextCallback ccb
    static System::Threading::ContextCallback* _get_ccb();
    // Set static field: static System.Threading.ContextCallback ccb
    static void _set_ccb(System::Threading::ContextCallback* value);
    // static private System.Void .cctor()
    // Offset: 0x16D593C
    static void _cctor();
    // System.Void .ctor(System.Threading.WaitCallback waitCallback, System.Object stateObj, System.Boolean compressStack, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x16D59BC
    static QueueUserWorkItemCallback* New_ctor(System::Threading::WaitCallback* waitCallback, ::Il2CppObject* stateObj, bool compressStack, System::Threading::StackCrawlMark& stackMark);
    // static private System.Void WaitCallback_Context(System.Object state)
    // Offset: 0x16D5F64
    static void WaitCallback_Context(::Il2CppObject* state);
    // private System.Void System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
    // Offset: 0x16D5AC0
    // Implemented from: System.Threading.IThreadPoolWorkItem
    // Base method: System.Void IThreadPoolWorkItem::ExecuteWorkItem()
    void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();
    // private System.Void System.Threading.IThreadPoolWorkItem.MarkAborted(System.Threading.ThreadAbortException tae)
    // Offset: 0x16D5F60
    // Implemented from: System.Threading.IThreadPoolWorkItem
    // Base method: System.Void IThreadPoolWorkItem::MarkAborted(System.Threading.ThreadAbortException tae)
    void System_Threading_IThreadPoolWorkItem_MarkAborted(System::Threading::ThreadAbortException* tae);
  }; // System.Threading.QueueUserWorkItemCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::QueueUserWorkItemCallback*, "System.Threading", "QueueUserWorkItemCallback");
#pragma pack(pop)
