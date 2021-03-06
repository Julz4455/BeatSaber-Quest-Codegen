// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.ILogger
#include "UnityEngine/ILogger.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ILogHandler because it is already included!
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Logger
  // [] Offset: FFFFFFFF
  class Logger : public ::Il2CppObject/*, public UnityEngine::ILogger*/ {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xCC2380
    // [CompilerGeneratedAttribute] Offset: 0xCC2380
    // private UnityEngine.ILogHandler <logHandler>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::ILogHandler* logHandler;
    // Field size check
    static_assert(sizeof(UnityEngine::ILogHandler*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xCC23BC
    // [CompilerGeneratedAttribute] Offset: 0xCC23BC
    // private System.Boolean <logEnabled>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool logEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: logEnabled and: filterLogType
    char __padding1[0x3] = {};
    // [DebuggerBrowsableAttribute] Offset: 0xCC23F8
    // [CompilerGeneratedAttribute] Offset: 0xCC23F8
    // private UnityEngine.LogType <filterLogType>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    UnityEngine::LogType filterLogType;
    // Field size check
    static_assert(sizeof(UnityEngine::LogType) == 0x4);
    // Creating value type constructor for type: Logger
    Logger(UnityEngine::ILogHandler* logHandler_ = {}, bool logEnabled_ = {}, UnityEngine::LogType filterLogType_ = {}) noexcept : logHandler{logHandler_}, logEnabled{logEnabled_}, filterLogType{filterLogType_} {}
    // Creating interface conversion operator: operator UnityEngine::ILogger
    operator UnityEngine::ILogger() noexcept {
      return *reinterpret_cast<UnityEngine::ILogger*>(this);
    }
    // public System.Void .ctor(UnityEngine.ILogHandler logHandler)
    // Offset: 0x1A1CD48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Logger* New_ctor(UnityEngine::ILogHandler* logHandler) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Logger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Logger*, creationType>(logHandler)));
    }
    // public System.Void set_logHandler(UnityEngine.ILogHandler value)
    // Offset: 0x1A25A7C
    void set_logHandler(UnityEngine::ILogHandler* value);
    // public System.Boolean get_logEnabled()
    // Offset: 0x1A25A84
    bool get_logEnabled();
    // public System.Void set_logEnabled(System.Boolean value)
    // Offset: 0x1A25A8C
    void set_logEnabled(bool value);
    // public UnityEngine.LogType get_filterLogType()
    // Offset: 0x1A25A98
    UnityEngine::LogType get_filterLogType();
    // public System.Void set_filterLogType(UnityEngine.LogType value)
    // Offset: 0x1A25AA0
    void set_filterLogType(UnityEngine::LogType value);
    // public System.Boolean IsLogTypeAllowed(UnityEngine.LogType logType)
    // Offset: 0x1A25AA8
    bool IsLogTypeAllowed(UnityEngine::LogType logType);
    // static private System.String GetString(System.Object message)
    // Offset: 0x1A25AE4
    static ::Il2CppString* GetString(::Il2CppObject* message);
    // public UnityEngine.ILogHandler get_logHandler()
    // Offset: 0x1A25A74
    // Implemented from: UnityEngine.ILogger
    // Base method: UnityEngine.ILogHandler ILogger::get_logHandler()
    UnityEngine::ILogHandler* get_logHandler();
    // public System.Void Log(UnityEngine.LogType logType, System.Object message)
    // Offset: 0x1A25C14
    // Implemented from: UnityEngine.ILogger
    // Base method: System.Void ILogger::Log(UnityEngine.LogType logType, System.Object message)
    void Log(UnityEngine::LogType logType, ::Il2CppObject* message);
    // public System.Void Log(UnityEngine.LogType logType, System.Object message, UnityEngine.Object context)
    // Offset: 0x1A25D94
    // Implemented from: UnityEngine.ILogger
    // Base method: System.Void ILogger::Log(UnityEngine.LogType logType, System.Object message, UnityEngine.Object context)
    void Log(UnityEngine::LogType logType, ::Il2CppObject* message, UnityEngine::Object* context);
    // public System.Void LogFormat(UnityEngine.LogType logType, System.String format, params System.Object[] args)
    // Offset: 0x1A25F24
    // Implemented from: UnityEngine.ILogger
    // Base method: System.Void ILogger::LogFormat(UnityEngine.LogType logType, System.String format, params System.Object[] args)
    void LogFormat(UnityEngine::LogType logType, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void LogFormat(UnityEngine.LogType logType, System.String format, params System.Object[] args)
    void LogFormat(UnityEngine::LogType logType, ::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogFormat(UnityEngine.LogType logType, System.String format, params System.Object[] args)
    template<class ...TParams>
    void LogFormat(UnityEngine::LogType logType, ::Il2CppString* format, TParams&&... args) {
      LogFormat(logType, format, {args...});
    }
    // public System.Void LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, params System.Object[] args)
    // Offset: 0x1A26038
    // Implemented from: UnityEngine.ILogHandler
    // Base method: System.Void ILogHandler::LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, params System.Object[] args)
    void LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, params System.Object[] args)
    void LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::Il2CppString* format, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, params System.Object[] args)
    template<class ...TParams>
    void LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::Il2CppString* format, TParams&&... args) {
      LogFormat(logType, context, format, {args...});
    }
    // public System.Void LogException(System.Exception exception, UnityEngine.Object context)
    // Offset: 0x1A26150
    // Implemented from: UnityEngine.ILogHandler
    // Base method: System.Void ILogHandler::LogException(System.Exception exception, UnityEngine.Object context)
    void LogException(System::Exception* exception, UnityEngine::Object* context);
  }; // UnityEngine.Logger
  #pragma pack(pop)
  static check_size<sizeof(Logger), 28 + sizeof(UnityEngine::LogType)> __UnityEngine_LoggerSizeCheck;
  static_assert(sizeof(Logger) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Logger*, "UnityEngine", "Logger");
