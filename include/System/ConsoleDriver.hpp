// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IConsoleDriver
  class IConsoleDriver;
  // Forward declaring type: ConsoleKeyInfo
  struct ConsoleKeyInfo;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.ConsoleDriver
  class ConsoleDriver : public ::Il2CppObject {
    public:
    // Get static field: static System.IConsoleDriver driver
    static System::IConsoleDriver* _get_driver();
    // Set static field: static System.IConsoleDriver driver
    static void _set_driver(System::IConsoleDriver* value);
    // Get static field: static private System.Boolean is_console
    static bool _get_is_console();
    // Set static field: static private System.Boolean is_console
    static void _set_is_console(bool value);
    // Get static field: static private System.Boolean called_isatty
    static bool _get_called_isatty();
    // Set static field: static private System.Boolean called_isatty
    static void _set_called_isatty(bool value);
    // static private System.Void .cctor()
    // Offset: 0x10C5218
    static void _cctor();
    // static private System.IConsoleDriver CreateNullConsoleDriver()
    // Offset: 0x10C52EC
    static System::IConsoleDriver* CreateNullConsoleDriver();
    // static private System.IConsoleDriver CreateWindowsConsoleDriver()
    // Offset: 0x10C5348
    static System::IConsoleDriver* CreateWindowsConsoleDriver();
    // static private System.IConsoleDriver CreateTermInfoDriver(System.String term)
    // Offset: 0x10C53A4
    static System::IConsoleDriver* CreateTermInfoDriver(::Il2CppString* term);
    // static public System.ConsoleKeyInfo ReadKey(System.Boolean intercept)
    // Offset: 0x10C429C
    static System::ConsoleKeyInfo ReadKey(bool intercept);
    // static public System.Boolean get_IsConsole()
    // Offset: 0x10C3A7C
    static bool get_IsConsole();
    // static private System.Boolean Isatty(System.IntPtr handle)
    // Offset: 0x10C5408
    static bool Isatty(System::IntPtr handle);
    // static System.Int32 InternalKeyAvailable(System.Int32 ms_timeout)
    // Offset: 0x10C540C
    static int InternalKeyAvailable(int ms_timeout);
    // static System.Boolean TtySetup(System.String keypadXmit, System.String teardown, out System.Byte[] control_characters, out System.Int32* address)
    // Offset: 0x10C5410
    static bool TtySetup(::Il2CppString* keypadXmit, ::Il2CppString* teardown, ::Array<uint8_t>*& control_characters, int*& address);
    // static System.Boolean SetEcho(System.Boolean wantEcho)
    // Offset: 0x10C5414
    static bool SetEcho(bool wantEcho);
  }; // System.ConsoleDriver
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ConsoleDriver*, "System", "ConsoleDriver");
#pragma pack(pop)
