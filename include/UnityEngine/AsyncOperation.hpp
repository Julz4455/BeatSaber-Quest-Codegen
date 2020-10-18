// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.YieldInstruction
#include "UnityEngine/YieldInstruction.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AsyncOperation
  class AsyncOperation : public UnityEngine::YieldInstruction {
    public:
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // private System.Action`1<UnityEngine.AsyncOperation> m_completeCallback
    // Offset: 0x18
    System::Action_1<UnityEngine::AsyncOperation*>* m_completeCallback;
    // static private System.Void InternalDestroy(System.IntPtr ptr)
    // Offset: 0x19E0C14
    static void InternalDestroy(System::IntPtr ptr);
    // public System.Boolean get_isDone()
    // Offset: 0x19E0C54
    bool get_isDone();
    // public System.Single get_progress()
    // Offset: 0x19E0C94
    float get_progress();
    // public System.Void set_priority(System.Int32 value)
    // Offset: 0x19E0CD4
    void set_priority(int value);
    // public System.Void set_allowSceneActivation(System.Boolean value)
    // Offset: 0x19E0D24
    void set_allowSceneActivation(bool value);
    // System.Void InvokeCompletionEvent()
    // Offset: 0x19E0E10
    void InvokeCompletionEvent();
    // public System.Void add_completed(System.Action`1<UnityEngine.AsyncOperation> value)
    // Offset: 0x19E0E88
    void add_completed(System::Action_1<UnityEngine::AsyncOperation*>* value);
    // public System.Void remove_completed(System.Action`1<UnityEngine.AsyncOperation> value)
    // Offset: 0x19E0F70
    void remove_completed(System::Action_1<UnityEngine::AsyncOperation*>* value);
    // protected override System.Void Finalize()
    // Offset: 0x19E0D74
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Void .ctor()
    // Offset: 0x19E1000
    // Implemented from: UnityEngine.YieldInstruction
    // Base method: System.Void YieldInstruction::.ctor()
    // Base method: System.Void Object::.ctor()
    static AsyncOperation* New_ctor();
  }; // UnityEngine.AsyncOperation
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AsyncOperation*, "UnityEngine", "AsyncOperation");
#pragma pack(pop)
