// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking::PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Forward declaring type: MessageEventArgs
  class MessageEventArgs;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Autogenerated type: UnityEngine.TestTools.TestRunner.Callbacks.PlayerQuitHandler
  class PlayerQuitHandler : public UnityEngine::MonoBehaviour {
    public:
    // public System.Void Start()
    // Offset: 0x10BE274
    void Start();
    // private System.Void ProcessPlayerQuiteMessage(UnityEngine.Networking.PlayerConnection.MessageEventArgs arg0)
    // Offset: 0x10BE32C
    void ProcessPlayerQuiteMessage(UnityEngine::Networking::PlayerConnection::MessageEventArgs* arg0);
    // public System.Void RunStarted(NUnit.Framework.Interfaces.ITest testsToRun)
    // Offset: 0x10BE370
    void RunStarted(NUnit::Framework::Interfaces::ITest* testsToRun);
    // public System.Void RunFinished(NUnit.Framework.Interfaces.ITestResult testResults)
    // Offset: 0x10BE374
    void RunFinished(NUnit::Framework::Interfaces::ITestResult* testResults);
    // public System.Void TestStarted(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x10BE378
    void TestStarted(NUnit::Framework::Interfaces::ITest* test);
    // public System.Void TestFinished(NUnit.Framework.Interfaces.ITestResult result)
    // Offset: 0x10BE37C
    void TestFinished(NUnit::Framework::Interfaces::ITestResult* result);
    // public System.Void .ctor()
    // Offset: 0x10BE380
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PlayerQuitHandler* New_ctor();
  }; // UnityEngine.TestTools.TestRunner.Callbacks.PlayerQuitHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::Callbacks::PlayerQuitHandler*, "UnityEngine.TestTools.TestRunner.Callbacks", "PlayerQuitHandler");
#pragma pack(pop)