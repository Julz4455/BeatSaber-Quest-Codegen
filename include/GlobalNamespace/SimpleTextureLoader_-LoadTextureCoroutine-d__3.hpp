// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SimpleTextureLoader
#include "GlobalNamespace/SimpleTextureLoader.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SimpleTextureLoader/<LoadTextureCoroutine>d__3
  class SimpleTextureLoader::$LoadTextureCoroutine$d__3 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // public System.Boolean useCache
    // Offset: 0x20
    bool useCache;
    // public System.String filePath
    // Offset: 0x28
    ::Il2CppString* filePath;
    // public System.Action`1<UnityEngine.Texture2D> finishedCallback
    // Offset: 0x30
    System::Action_1<UnityEngine::Texture2D*>* finishedCallback;
    // private UnityEngine.Networking.UnityWebRequest <uwr>5__2
    // Offset: 0x38
    UnityEngine::Networking::UnityWebRequest* $uwr$5__2;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0x18FF710
    static SimpleTextureLoader::$LoadTextureCoroutine$d__3* New_ctor(int $$1__state);
    // private System.Void <>m__Finally1()
    // Offset: 0x18FF7D4
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x18FF7B8
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x18FF894
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x18FFB88
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x18FFB90
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x18FFBF0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // SimpleTextureLoader/<LoadTextureCoroutine>d__3
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleTextureLoader::$LoadTextureCoroutine$d__3*, "", "SimpleTextureLoader/<LoadTextureCoroutine>d__3");
#pragma pack(pop)
