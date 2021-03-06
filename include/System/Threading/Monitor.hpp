// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Monitor
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CAA640
  class Monitor : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Monitor
    Monitor() noexcept {}
    // static public System.Void Enter(System.Object obj)
    // Offset: 0x1A7FB48
    static void Enter(::Il2CppObject* obj);
    // static public System.Void Enter(System.Object obj, ref System.Boolean lockTaken)
    // Offset: 0x1A7F138
    static void Enter(::Il2CppObject* obj, bool& lockTaken);
    // static private System.Void ThrowLockTakenException()
    // Offset: 0x1A7FB4C
    static void ThrowLockTakenException();
    // static public System.Void Exit(System.Object obj)
    // Offset: 0x1A7F158
    static void Exit(::Il2CppObject* obj);
    // static public System.Boolean Wait(System.Object obj, System.Int32 millisecondsTimeout, System.Boolean exitContext)
    // Offset: 0x1A7FBE4
    static bool Wait(::Il2CppObject* obj, int millisecondsTimeout, bool exitContext);
    // static public System.Boolean Wait(System.Object obj, System.Int32 millisecondsTimeout)
    // Offset: 0x1A7F850
    static bool Wait(::Il2CppObject* obj, int millisecondsTimeout);
    // static public System.Void Pulse(System.Object obj)
    // Offset: 0x1A7FD4C
    static void Pulse(::Il2CppObject* obj);
    // static public System.Void PulseAll(System.Object obj)
    // Offset: 0x1A7F30C
    static void PulseAll(::Il2CppObject* obj);
    // static private System.Boolean Monitor_test_synchronised(System.Object obj)
    // Offset: 0x1A7FEE8
    static bool Monitor_test_synchronised(::Il2CppObject* obj);
    // static private System.Void Monitor_pulse(System.Object obj)
    // Offset: 0x1A7FEEC
    static void Monitor_pulse(::Il2CppObject* obj);
    // static private System.Void ObjPulse(System.Object obj)
    // Offset: 0x1A7FDD0
    static void ObjPulse(::Il2CppObject* obj);
    // static private System.Void Monitor_pulse_all(System.Object obj)
    // Offset: 0x1A7FEF0
    static void Monitor_pulse_all(::Il2CppObject* obj);
    // static private System.Void ObjPulseAll(System.Object obj)
    // Offset: 0x1A7FE5C
    static void ObjPulseAll(::Il2CppObject* obj);
    // static private System.Boolean Monitor_wait(System.Object obj, System.Int32 ms)
    // Offset: 0x1A7FEF4
    static bool Monitor_wait(::Il2CppObject* obj, int ms);
    // static private System.Boolean ObjWait(System.Boolean exitContext, System.Int32 millisecondsTimeout, System.Object obj)
    // Offset: 0x1A7FC7C
    static bool ObjWait(bool exitContext, int millisecondsTimeout, ::Il2CppObject* obj);
    // static private System.Void try_enter_with_atomic_var(System.Object obj, System.Int32 millisecondsTimeout, ref System.Boolean lockTaken)
    // Offset: 0x1A7FEF8
    static void try_enter_with_atomic_var(::Il2CppObject* obj, int millisecondsTimeout, bool& lockTaken);
    // static private System.Void ReliableEnterTimeout(System.Object obj, System.Int32 timeout, ref System.Boolean lockTaken)
    // Offset: 0x1A7FEFC
    static void ReliableEnterTimeout(::Il2CppObject* obj, int timeout, bool& lockTaken);
    // static private System.Void ReliableEnter(System.Object obj, ref System.Boolean lockTaken)
    // Offset: 0x1A7FBD8
    static void ReliableEnter(::Il2CppObject* obj, bool& lockTaken);
  }; // System.Threading.Monitor
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Monitor*, "System.Threading", "Monitor");
