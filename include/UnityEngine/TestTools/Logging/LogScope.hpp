// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogMatch
  class LogMatch;
  // Forward declaring type: LogEvent
  class LogEvent;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LogType
  struct LogType;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Logging
namespace UnityEngine::TestTools::Logging {
  // Autogenerated type: UnityEngine.TestTools.Logging.LogScope
  class LogScope : public ::Il2CppObject, public System::IDisposable {
    public:
    // Nested type: UnityEngine::TestTools::Logging::LogScope::$$c
    class $$c;
    // private readonly System.Object m_Lock
    // Offset: 0x10
    ::Il2CppObject* m_Lock;
    // private System.Boolean m_Disposed
    // Offset: 0x18
    bool m_Disposed;
    // private System.Boolean m_NeedToProcessLogs
    // Offset: 0x19
    bool m_NeedToProcessLogs;
    // private System.Collections.Generic.Queue`1<UnityEngine.TestTools.Logging.LogMatch> <ExpectedLogs>k__BackingField
    // Offset: 0x20
    System::Collections::Generic::Queue_1<UnityEngine::TestTools::Logging::LogMatch*>* ExpectedLogs;
    // private readonly System.Collections.Generic.List`1<UnityEngine.TestTools.Logging.LogEvent> <AllLogs>k__BackingField
    // Offset: 0x28
    System::Collections::Generic::List_1<UnityEngine::TestTools::Logging::LogEvent*>* AllLogs;
    // private readonly System.Collections.Generic.List`1<UnityEngine.TestTools.Logging.LogEvent> <FailingLogs>k__BackingField
    // Offset: 0x30
    System::Collections::Generic::List_1<UnityEngine::TestTools::Logging::LogEvent*>* FailingLogs;
    // private System.Boolean <IgnoreFailingMessages>k__BackingField
    // Offset: 0x38
    bool IgnoreFailingMessages;
    // private System.Boolean <IsNUnitException>k__BackingField
    // Offset: 0x39
    bool IsNUnitException;
    // private System.Boolean <IsNUnitSuccessException>k__BackingField
    // Offset: 0x3A
    bool IsNUnitSuccessException;
    // private System.Boolean <IsNUnitInconclusiveException>k__BackingField
    // Offset: 0x3B
    bool IsNUnitInconclusiveException;
    // private System.Boolean <IsNUnitIgnoreException>k__BackingField
    // Offset: 0x3C
    bool IsNUnitIgnoreException;
    // private System.String <NUnitExceptionMessage>k__BackingField
    // Offset: 0x40
    ::Il2CppString* NUnitExceptionMessage;
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.TestTools.Logging.LogScope> s_ActiveScopes
    static System::Collections::Generic::List_1<UnityEngine::TestTools::Logging::LogScope*>* _get_s_ActiveScopes();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.TestTools.Logging.LogScope> s_ActiveScopes
    static void _set_s_ActiveScopes(System::Collections::Generic::List_1<UnityEngine::TestTools::Logging::LogScope*>* value);
    // public System.Collections.Generic.Queue`1<UnityEngine.TestTools.Logging.LogMatch> get_ExpectedLogs()
    // Offset: 0xD9DB1C
    System::Collections::Generic::Queue_1<UnityEngine::TestTools::Logging::LogMatch*>* get_ExpectedLogs();
    // public System.Void set_ExpectedLogs(System.Collections.Generic.Queue`1<UnityEngine.TestTools.Logging.LogMatch> value)
    // Offset: 0xD9DB24
    void set_ExpectedLogs(System::Collections::Generic::Queue_1<UnityEngine::TestTools::Logging::LogMatch*>* value);
    // public System.Collections.Generic.List`1<UnityEngine.TestTools.Logging.LogEvent> get_AllLogs()
    // Offset: 0xD9DB2C
    System::Collections::Generic::List_1<UnityEngine::TestTools::Logging::LogEvent*>* get_AllLogs();
    // public System.Collections.Generic.List`1<UnityEngine.TestTools.Logging.LogEvent> get_FailingLogs()
    // Offset: 0xD9DB34
    System::Collections::Generic::List_1<UnityEngine::TestTools::Logging::LogEvent*>* get_FailingLogs();
    // public System.Boolean get_IgnoreFailingMessages()
    // Offset: 0xD9DB3C
    bool get_IgnoreFailingMessages();
    // public System.Void set_IgnoreFailingMessages(System.Boolean value)
    // Offset: 0xD9DB44
    void set_IgnoreFailingMessages(bool value);
    // private System.Void set_IsNUnitException(System.Boolean value)
    // Offset: 0xD9DB50
    void set_IsNUnitException(bool value);
    // private System.Void set_IsNUnitSuccessException(System.Boolean value)
    // Offset: 0xD9DB5C
    void set_IsNUnitSuccessException(bool value);
    // private System.Void set_IsNUnitInconclusiveException(System.Boolean value)
    // Offset: 0xD9DB68
    void set_IsNUnitInconclusiveException(bool value);
    // private System.Void set_IsNUnitIgnoreException(System.Boolean value)
    // Offset: 0xD9DB74
    void set_IsNUnitIgnoreException(bool value);
    // private System.Void set_NUnitExceptionMessage(System.String value)
    // Offset: 0xD9DB80
    void set_NUnitExceptionMessage(::Il2CppString* value);
    // private System.Void Activate()
    // Offset: 0xD9DB88
    void Activate();
    // private System.Void Deactivate()
    // Offset: 0xD9DCFC
    void Deactivate();
    // static private System.Void RegisterScope(UnityEngine.TestTools.Logging.LogScope logScope)
    // Offset: 0xD9DC84
    static void RegisterScope(UnityEngine::TestTools::Logging::LogScope* logScope);
    // static private System.Void UnregisterScope(UnityEngine.TestTools.Logging.LogScope logScope)
    // Offset: 0xD9DDC0
    static void UnregisterScope(UnityEngine::TestTools::Logging::LogScope* logScope);
    // public System.Void AddLog(System.String message, System.String stacktrace, UnityEngine.LogType type)
    // Offset: 0xD9DE38
    void AddLog(::Il2CppString* message, ::Il2CppString* stacktrace, UnityEngine::LogType type);
    // static private System.Boolean IsNUnitResultStateException(System.String stacktrace, UnityEngine.LogType logType)
    // Offset: 0xD9E1E0
    static bool IsNUnitResultStateException(::Il2CppString* stacktrace, UnityEngine::LogType logType);
    // static private System.Boolean IsFailingLog(UnityEngine.LogType type)
    // Offset: 0xD9E27C
    static bool IsFailingLog(UnityEngine::LogType type);
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0xD9E298
    void Dispose(bool disposing);
    // public System.Boolean AnyFailingLogs()
    // Offset: 0xD8C268
    bool AnyFailingLogs();
    // public System.Void ProcessExpectedLogs()
    // Offset: 0xD9E2B4
    void ProcessExpectedLogs();
    // public System.Void NoUnexpectedReceived()
    // Offset: 0xD9E654
    void NoUnexpectedReceived();
    // static private System.Void .cctor()
    // Offset: 0xD9E818
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0xD8C154
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LogScope* New_ctor();
    // public System.Void Dispose()
    // Offset: 0xD8C378
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // UnityEngine.TestTools.Logging.LogScope
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Logging::LogScope*, "UnityEngine.TestTools.Logging", "LogScope");
#pragma pack(pop)
