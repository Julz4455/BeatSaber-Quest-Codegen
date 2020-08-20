// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IConsoleDriver
#include "System/IConsoleDriver.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Handles
  struct Handles;
  // Forward declaring type: ConsoleScreenBufferInfo
  struct ConsoleScreenBufferInfo;
  // Forward declaring type: InputRecord
  struct InputRecord;
  // Forward declaring type: ConsoleKeyInfo
  struct ConsoleKeyInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.WindowsConsoleDriver
  class WindowsConsoleDriver : public ::Il2CppObject, public System::IConsoleDriver {
    public:
    // private System.IntPtr inputHandle
    // Offset: 0x10
    System::IntPtr inputHandle;
    // private System.IntPtr outputHandle
    // Offset: 0x18
    System::IntPtr outputHandle;
    // private System.Int16 defaultAttribute
    // Offset: 0x20
    int16_t defaultAttribute;
    // static private System.Boolean IsModifierKey(System.Int16 virtualKeyCode)
    // Offset: 0x16F79E8
    static bool IsModifierKey(int16_t virtualKeyCode);
    // static private System.IntPtr GetStdHandle(System.Handles handle)
    // Offset: 0x16F7658
    static System::IntPtr GetStdHandle(System::Handles handle);
    // static private System.Boolean GetConsoleScreenBufferInfo(System.IntPtr handle, System.ConsoleScreenBufferInfo info)
    // Offset: 0x16F76E0
    static bool GetConsoleScreenBufferInfo(System::IntPtr handle, System::ConsoleScreenBufferInfo& info);
    // static private System.Boolean ReadConsoleInput(System.IntPtr handle, System.InputRecord record, System.Int32 length, System.Int32 nread)
    // Offset: 0x16F78F8
    static bool ReadConsoleInput(System::IntPtr handle, System::InputRecord& record, int length, int& nread);
    // public System.Void .ctor()
    // Offset: 0x16F75F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static WindowsConsoleDriver* New_ctor();
    // public System.ConsoleKeyInfo ReadKey(System.Boolean intercept)
    // Offset: 0x16F7780
    // Implemented from: System.IConsoleDriver
    // Base method: System.ConsoleKeyInfo IConsoleDriver::ReadKey(System.Boolean intercept)
    System::ConsoleKeyInfo ReadKey(bool intercept);
  }; // System.WindowsConsoleDriver
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::WindowsConsoleDriver*, "System", "WindowsConsoleDriver");
#pragma pack(pop)
