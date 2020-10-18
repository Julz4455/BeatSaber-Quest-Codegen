// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: SparselyPopulatedArray`1<T>
  template<typename T>
  class SparselyPopulatedArray_1;
  // Forward declaring type: CancellationCallbackInfo
  class CancellationCallbackInfo;
  // Forward declaring type: CancellationTokenRegistration
  struct CancellationTokenRegistration;
  // Forward declaring type: Timer
  class Timer;
  // Forward declaring type: TimerCallback
  class TimerCallback;
  // Forward declaring type: CancellationToken
  struct CancellationToken;
  // Forward declaring type: SynchronizationContext
  class SynchronizationContext;
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
  // Forward declaring type: CancellationCallbackCoreWorkArguments
  struct CancellationCallbackCoreWorkArguments;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.CancellationTokenSource
  class CancellationTokenSource : public ::Il2CppObject, public System::IDisposable {
    public:
    // private System.Threading.ManualResetEvent m_kernelEvent
    // Offset: 0x10
    System::Threading::ManualResetEvent* m_kernelEvent;
    // private System.Threading.SparselyPopulatedArray`1<System.Threading.CancellationCallbackInfo>[] m_registeredCallbacksLists
    // Offset: 0x18
    ::Array<System::Threading::SparselyPopulatedArray_1<System::Threading::CancellationCallbackInfo*>*>* m_registeredCallbacksLists;
    // private System.Int32 m_state
    // Offset: 0x20
    int m_state;
    // private System.Int32 m_threadIDExecutingCallbacks
    // Offset: 0x24
    int m_threadIDExecutingCallbacks;
    // private System.Boolean m_disposed
    // Offset: 0x28
    bool m_disposed;
    // private System.Threading.CancellationTokenRegistration[] m_linkingRegistrations
    // Offset: 0x30
    ::Array<System::Threading::CancellationTokenRegistration>* m_linkingRegistrations;
    // private System.Threading.CancellationCallbackInfo m_executingCallback
    // Offset: 0x38
    System::Threading::CancellationCallbackInfo* m_executingCallback;
    // private System.Threading.Timer m_timer
    // Offset: 0x40
    System::Threading::Timer* m_timer;
    // Get static field: static private readonly System.Threading.CancellationTokenSource _staticSource_Set
    static System::Threading::CancellationTokenSource* _get__staticSource_Set();
    // Set static field: static private readonly System.Threading.CancellationTokenSource _staticSource_Set
    static void _set__staticSource_Set(System::Threading::CancellationTokenSource* value);
    // Get static field: static private readonly System.Threading.CancellationTokenSource _staticSource_NotCancelable
    static System::Threading::CancellationTokenSource* _get__staticSource_NotCancelable();
    // Set static field: static private readonly System.Threading.CancellationTokenSource _staticSource_NotCancelable
    static void _set__staticSource_NotCancelable(System::Threading::CancellationTokenSource* value);
    // Get static field: static private readonly System.Int32 s_nLists
    static int _get_s_nLists();
    // Set static field: static private readonly System.Int32 s_nLists
    static void _set_s_nLists(int value);
    // static field const value: static private System.Int32 CANNOT_BE_CANCELED
    static constexpr const int CANNOT_BE_CANCELED = 0;
    // Get static field: static private System.Int32 CANNOT_BE_CANCELED
    static int _get_CANNOT_BE_CANCELED();
    // Set static field: static private System.Int32 CANNOT_BE_CANCELED
    static void _set_CANNOT_BE_CANCELED(int value);
    // static field const value: static private System.Int32 NOT_CANCELED
    static constexpr const int NOT_CANCELED = 1;
    // Get static field: static private System.Int32 NOT_CANCELED
    static int _get_NOT_CANCELED();
    // Set static field: static private System.Int32 NOT_CANCELED
    static void _set_NOT_CANCELED(int value);
    // static field const value: static private System.Int32 NOTIFYING
    static constexpr const int NOTIFYING = 2;
    // Get static field: static private System.Int32 NOTIFYING
    static int _get_NOTIFYING();
    // Set static field: static private System.Int32 NOTIFYING
    static void _set_NOTIFYING(int value);
    // static field const value: static private System.Int32 NOTIFYINGCOMPLETE
    static constexpr const int NOTIFYINGCOMPLETE = 3;
    // Get static field: static private System.Int32 NOTIFYINGCOMPLETE
    static int _get_NOTIFYINGCOMPLETE();
    // Set static field: static private System.Int32 NOTIFYINGCOMPLETE
    static void _set_NOTIFYINGCOMPLETE(int value);
    // Get static field: static private readonly System.Action`1<System.Object> s_LinkedTokenCancelDelegate
    static System::Action_1<::Il2CppObject*>* _get_s_LinkedTokenCancelDelegate();
    // Set static field: static private readonly System.Action`1<System.Object> s_LinkedTokenCancelDelegate
    static void _set_s_LinkedTokenCancelDelegate(System::Action_1<::Il2CppObject*>* value);
    // Get static field: static private readonly System.Threading.TimerCallback s_timerCallback
    static System::Threading::TimerCallback* _get_s_timerCallback();
    // Set static field: static private readonly System.Threading.TimerCallback s_timerCallback
    static void _set_s_timerCallback(System::Threading::TimerCallback* value);
    // static private System.Void LinkedTokenCancelDelegate(System.Object source)
    // Offset: 0x1A19244
    static void LinkedTokenCancelDelegate(::Il2CppObject* source);
    // public System.Boolean get_IsCancellationRequested()
    // Offset: 0x1A180E8
    bool get_IsCancellationRequested();
    // System.Boolean get_IsCancellationCompleted()
    // Offset: 0x1A18FF0
    bool get_IsCancellationCompleted();
    // System.Boolean get_IsDisposed()
    // Offset: 0x1A192F8
    bool get_IsDisposed();
    // System.Void set_ThreadIDExecutingCallbacks(System.Int32 value)
    // Offset: 0x1A19300
    void set_ThreadIDExecutingCallbacks(int value);
    // System.Int32 get_ThreadIDExecutingCallbacks()
    // Offset: 0x1A19018
    int get_ThreadIDExecutingCallbacks();
    // public System.Threading.CancellationToken get_Token()
    // Offset: 0x1A19328
    System::Threading::CancellationToken get_Token();
    // System.Boolean get_CanBeCanceled()
    // Offset: 0x1A18148
    bool get_CanBeCanceled();
    // System.Threading.CancellationCallbackInfo get_ExecutingCallback()
    // Offset: 0x1A193C8
    System::Threading::CancellationCallbackInfo* get_ExecutingCallback();
    // private System.Void .ctor(System.Boolean set)
    // Offset: 0x1A1942C
    static CancellationTokenSource* New_ctor(bool set);
    // public System.Void Cancel()
    // Offset: 0x1A192D0
    void Cancel();
    // public System.Void Cancel(System.Boolean throwOnFirstException)
    // Offset: 0x1A19480
    void Cancel(bool throwOnFirstException);
    // public System.Void CancelAfter(System.TimeSpan delay)
    // Offset: 0x1A1961C
    void CancelAfter(System::TimeSpan delay);
    // public System.Void CancelAfter(System.Int32 millisecondsDelay)
    // Offset: 0x1A196CC
    void CancelAfter(int millisecondsDelay);
    // static private System.Void TimerCallbackLogic(System.Object obj)
    // Offset: 0x1A198B4
    static void TimerCallbackLogic(::Il2CppObject* obj);
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1A19A60
    void Dispose(bool disposing);
    // System.Void ThrowIfDisposed()
    // Offset: 0x1A1935C
    void ThrowIfDisposed();
    // static private System.Void ThrowObjectDisposedException()
    // Offset: 0x1A19B6C
    static void ThrowObjectDisposedException();
    // static System.Threading.CancellationTokenSource InternalGetStaticSource(System.Boolean set)
    // Offset: 0x1A18A60
    static System::Threading::CancellationTokenSource* InternalGetStaticSource(bool set);
    // System.Threading.CancellationTokenRegistration InternalRegister(System.Action`1<System.Object> callback, System.Object stateForCallback, System.Threading.SynchronizationContext targetSyncContext, System.Threading.ExecutionContext executionContext)
    // Offset: 0x1A186BC
    System::Threading::CancellationTokenRegistration InternalRegister(System::Action_1<::Il2CppObject*>* callback, ::Il2CppObject* stateForCallback, System::Threading::SynchronizationContext* targetSyncContext, System::Threading::ExecutionContext* executionContext);
    // private System.Void NotifyCancellation(System.Boolean throwOnFirstException)
    // Offset: 0x1A194AC
    void NotifyCancellation(bool throwOnFirstException);
    // private System.Void ExecuteCallbackHandlers(System.Boolean throwOnFirstException)
    // Offset: 0x1A19C7C
    void ExecuteCallbackHandlers(bool throwOnFirstException);
    // private System.Void CancellationCallbackCoreWork_OnSyncContext(System.Object obj)
    // Offset: 0x1A1A1D0
    void CancellationCallbackCoreWork_OnSyncContext(::Il2CppObject* obj);
    // private System.Void CancellationCallbackCoreWork(System.Threading.CancellationCallbackCoreWorkArguments args)
    // Offset: 0x1A1A0F8
    void CancellationCallbackCoreWork(System::Threading::CancellationCallbackCoreWorkArguments args);
    // static public System.Threading.CancellationTokenSource CreateLinkedTokenSource(System.Threading.CancellationToken token1, System.Threading.CancellationToken token2)
    // Offset: 0x1A1A258
    static System::Threading::CancellationTokenSource* CreateLinkedTokenSource(System::Threading::CancellationToken token1, System::Threading::CancellationToken token2);
    // System.Void WaitForCallbackToComplete(System.Threading.CancellationCallbackInfo callbackInfo)
    // Offset: 0x1A1903C
    void WaitForCallbackToComplete(System::Threading::CancellationCallbackInfo* callbackInfo);
    // static private System.Void .cctor()
    // Offset: 0x1A1A494
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1A193EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CancellationTokenSource* New_ctor();
    // public System.Void Dispose()
    // Offset: 0x1A199E4
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Threading.CancellationTokenSource
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::CancellationTokenSource*, "System.Threading", "CancellationTokenSource");
#pragma pack(pop)
