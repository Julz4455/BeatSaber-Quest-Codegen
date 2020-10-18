// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.ResultStateException
#include "NUnit/Framework/ResultStateException.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogMatch
  class LogMatch;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Autogenerated type: UnityEngine.TestTools.TestRunner.UnexpectedLogMessageException
  class UnexpectedLogMessageException : public NUnit::Framework::ResultStateException {
    public:
    // public UnityEngine.TestTools.Logging.LogMatch LogEvent
    // Offset: 0x88
    UnityEngine::TestTools::Logging::LogMatch* LogEvent;
    // Creating conversion operator: operator UnityEngine::TestTools::Logging::LogMatch*
    constexpr operator UnityEngine::TestTools::Logging::LogMatch*() const noexcept {
      return LogEvent;
    }
    // public System.Void .ctor(UnityEngine.TestTools.Logging.LogMatch log)
    // Offset: 0x12B5678
    static UnexpectedLogMessageException* New_ctor(UnityEngine::TestTools::Logging::LogMatch* log);
    // static private System.String BuildMessage(UnityEngine.TestTools.Logging.LogMatch log)
    // Offset: 0x12C6D68
    static ::Il2CppString* BuildMessage(UnityEngine::TestTools::Logging::LogMatch* log);
    // public override NUnit.Framework.Interfaces.ResultState get_ResultState()
    // Offset: 0x12C6DBC
    // Implemented from: NUnit.Framework.ResultStateException
    // Base method: NUnit.Framework.Interfaces.ResultState ResultStateException::get_ResultState()
    NUnit::Framework::Interfaces::ResultState* get_ResultState();
    // public override System.String get_StackTrace()
    // Offset: 0x12C6E24
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_StackTrace()
    ::Il2CppString* get_StackTrace();
  }; // UnityEngine.TestTools.TestRunner.UnexpectedLogMessageException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException*, "UnityEngine.TestTools.TestRunner", "UnexpectedLogMessageException");
#pragma pack(pop)
