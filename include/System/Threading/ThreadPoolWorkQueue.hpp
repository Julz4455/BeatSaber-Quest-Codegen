// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ThreadPoolWorkQueueThreadLocals
  class ThreadPoolWorkQueueThreadLocals;
  // Forward declaring type: IThreadPoolWorkItem
  class IThreadPoolWorkItem;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.ThreadPoolWorkQueue
  class ThreadPoolWorkQueue : public ::Il2CppObject {
    public:
    // Nested type: System::Threading::ThreadPoolWorkQueue::SparseArray_1<T>
    template<typename T>
    class SparseArray_1;
    // Nested type: System::Threading::ThreadPoolWorkQueue::WorkStealingQueue
    class WorkStealingQueue;
    // Nested type: System::Threading::ThreadPoolWorkQueue::QueueSegment
    class QueueSegment;
    // System.Threading.ThreadPoolWorkQueue/QueueSegment queueHead
    // Offset: 0x10
    System::Threading::ThreadPoolWorkQueue::QueueSegment* queueHead;
    // System.Threading.ThreadPoolWorkQueue/QueueSegment queueTail
    // Offset: 0x18
    System::Threading::ThreadPoolWorkQueue::QueueSegment* queueTail;
    // private System.Int32 numOutstandingThreadRequests
    // Offset: 0x20
    int numOutstandingThreadRequests;
    // Get static field: static System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Threading.ThreadPoolWorkQueue/WorkStealingQueue> allThreadQueues
    static System::Threading::ThreadPoolWorkQueue::SparseArray_1<System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*>* _get_allThreadQueues();
    // Set static field: static System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Threading.ThreadPoolWorkQueue/WorkStealingQueue> allThreadQueues
    static void _set_allThreadQueues(System::Threading::ThreadPoolWorkQueue::SparseArray_1<System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*>* value);
    // public System.Threading.ThreadPoolWorkQueueThreadLocals EnsureCurrentThreadHasQueue()
    // Offset: 0x16E8B4C
    System::Threading::ThreadPoolWorkQueueThreadLocals* EnsureCurrentThreadHasQueue();
    // System.Void EnsureThreadRequested()
    // Offset: 0x16E8CFC
    void EnsureThreadRequested();
    // System.Void MarkThreadRequestSatisfied()
    // Offset: 0x16E8DB4
    void MarkThreadRequestSatisfied();
    // public System.Void Enqueue(System.Threading.IThreadPoolWorkItem callback, System.Boolean forceGlobal)
    // Offset: 0x16E87F4
    void Enqueue(System::Threading::IThreadPoolWorkItem* callback, bool forceGlobal);
    // System.Boolean LocalFindAndPop(System.Threading.IThreadPoolWorkItem callback)
    // Offset: 0x16E8920
    bool LocalFindAndPop(System::Threading::IThreadPoolWorkItem* callback);
    // public System.Void Dequeue(System.Threading.ThreadPoolWorkQueueThreadLocals tl, out System.Threading.IThreadPoolWorkItem callback, out System.Boolean missedSteal)
    // Offset: 0x16E963C
    void Dequeue(System::Threading::ThreadPoolWorkQueueThreadLocals* tl, System::Threading::IThreadPoolWorkItem*& callback, bool& missedSteal);
    // static System.Boolean Dispatch()
    // Offset: 0x16E9C84
    static bool Dispatch();
    // static private System.Void .cctor()
    // Offset: 0x16EA2AC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x16E8A58
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ThreadPoolWorkQueue* New_ctor();
  }; // System.Threading.ThreadPoolWorkQueue
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadPoolWorkQueue*, "System.Threading", "ThreadPoolWorkQueue");
#pragma pack(pop)
