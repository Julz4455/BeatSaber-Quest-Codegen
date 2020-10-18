// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ProjectKernel
  class ProjectKernel;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: SceneContext
  class SceneContext;
  // Forward declaring type: LoadSceneRelationship
  struct LoadSceneRelationship;
}
// Forward declaring namespace: UnityEngine::SceneManagement
namespace UnityEngine::SceneManagement {
  // Forward declaring type: LoadSceneMode
  struct LoadSceneMode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ZenjectSceneLoader
  class ZenjectSceneLoader : public ::Il2CppObject {
    public:
    // private readonly Zenject.ProjectKernel _projectKernel
    // Offset: 0x10
    Zenject::ProjectKernel* projectKernel;
    // private readonly Zenject.DiContainer _sceneContainer
    // Offset: 0x18
    Zenject::DiContainer* sceneContainer;
    // public System.Void .ctor(Zenject.SceneContext sceneRoot, Zenject.ProjectKernel projectKernel)
    // Offset: 0x21EBB0C
    static ZenjectSceneLoader* New_ctor(Zenject::SceneContext* sceneRoot, Zenject::ProjectKernel* projectKernel);
    // public System.Void LoadScene(System.String sceneName)
    // Offset: 0x21EBBD4
    void LoadScene(::Il2CppString* sceneName);
    // public System.Void LoadScene(System.String sceneName, UnityEngine.SceneManagement.LoadSceneMode loadMode)
    // Offset: 0x21EBBE8
    void LoadScene(::Il2CppString* sceneName, UnityEngine::SceneManagement::LoadSceneMode loadMode);
    // public System.Void LoadScene(System.String sceneName, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings)
    // Offset: 0x21EBBF8
    void LoadScene(::Il2CppString* sceneName, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer*>* extraBindings);
    // public System.Void LoadScene(System.String sceneName, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings, Zenject.LoadSceneRelationship containerMode)
    // Offset: 0x21EBC04
    void LoadScene(::Il2CppString* sceneName, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer*>* extraBindings, Zenject::LoadSceneRelationship containerMode);
    // public System.Void LoadScene(System.String sceneName, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings, Zenject.LoadSceneRelationship containerMode, System.Action`1<Zenject.DiContainer> extraBindingsLate)
    // Offset: 0x21EBC0C
    void LoadScene(::Il2CppString* sceneName, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer*>* extraBindings, Zenject::LoadSceneRelationship containerMode, System::Action_1<Zenject::DiContainer*>* extraBindingsLate);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.String sceneName)
    // Offset: 0x21EBF10
    UnityEngine::AsyncOperation* LoadSceneAsync(::Il2CppString* sceneName);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.String sceneName, UnityEngine.SceneManagement.LoadSceneMode loadMode)
    // Offset: 0x21EBF28
    UnityEngine::AsyncOperation* LoadSceneAsync(::Il2CppString* sceneName, UnityEngine::SceneManagement::LoadSceneMode loadMode);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.String sceneName, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings)
    // Offset: 0x21EBF3C
    UnityEngine::AsyncOperation* LoadSceneAsync(::Il2CppString* sceneName, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer*>* extraBindings);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.String sceneName, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings, Zenject.LoadSceneRelationship containerMode)
    // Offset: 0x21EBF50
    UnityEngine::AsyncOperation* LoadSceneAsync(::Il2CppString* sceneName, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer*>* extraBindings, Zenject::LoadSceneRelationship containerMode);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.String sceneName, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindingsEarly, System.Action`1<Zenject.DiContainer> extraBindings, Zenject.LoadSceneRelationship containerMode, System.Action`1<Zenject.DiContainer> extraBindingsLate)
    // Offset: 0x21EBF64
    UnityEngine::AsyncOperation* LoadSceneAsync(::Il2CppString* sceneName, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer*>* extraBindingsEarly, System::Action_1<Zenject::DiContainer*>* extraBindings, Zenject::LoadSceneRelationship containerMode, System::Action_1<Zenject::DiContainer*>* extraBindingsLate);
    // private System.Void PrepareForLoadScene(UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindingsEarly, System.Action`1<Zenject.DiContainer> extraBindings, System.Action`1<Zenject.DiContainer> extraBindingsLate, Zenject.LoadSceneRelationship containerMode)
    // Offset: 0x21EBCC8
    void PrepareForLoadScene(UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer*>* extraBindingsEarly, System::Action_1<Zenject::DiContainer*>* extraBindings, System::Action_1<Zenject::DiContainer*>* extraBindingsLate, Zenject::LoadSceneRelationship containerMode);
    // public System.Void LoadScene(System.Int32 sceneIndex)
    // Offset: 0x21EC024
    void LoadScene(int sceneIndex);
    // public System.Void LoadScene(System.Int32 sceneIndex, UnityEngine.SceneManagement.LoadSceneMode loadMode)
    // Offset: 0x21EC038
    void LoadScene(int sceneIndex, UnityEngine::SceneManagement::LoadSceneMode loadMode);
    // public System.Void LoadScene(System.Int32 sceneIndex, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings)
    // Offset: 0x21EC048
    void LoadScene(int sceneIndex, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer*>* extraBindings);
    // public System.Void LoadScene(System.Int32 sceneIndex, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings, Zenject.LoadSceneRelationship containerMode)
    // Offset: 0x21EC054
    void LoadScene(int sceneIndex, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer*>* extraBindings, Zenject::LoadSceneRelationship containerMode);
    // public System.Void LoadScene(System.Int32 sceneIndex, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings, Zenject.LoadSceneRelationship containerMode, System.Action`1<Zenject.DiContainer> extraBindingsLate)
    // Offset: 0x21EC05C
    void LoadScene(int sceneIndex, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer*>* extraBindings, Zenject::LoadSceneRelationship containerMode, System::Action_1<Zenject::DiContainer*>* extraBindingsLate);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.Int32 sceneIndex)
    // Offset: 0x21EC138
    UnityEngine::AsyncOperation* LoadSceneAsync(int sceneIndex);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.Int32 sceneIndex, UnityEngine.SceneManagement.LoadSceneMode loadMode)
    // Offset: 0x21EC14C
    UnityEngine::AsyncOperation* LoadSceneAsync(int sceneIndex, UnityEngine::SceneManagement::LoadSceneMode loadMode);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.Int32 sceneIndex, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings)
    // Offset: 0x21EC15C
    UnityEngine::AsyncOperation* LoadSceneAsync(int sceneIndex, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer*>* extraBindings);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.Int32 sceneIndex, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings, Zenject.LoadSceneRelationship containerMode)
    // Offset: 0x21EC168
    UnityEngine::AsyncOperation* LoadSceneAsync(int sceneIndex, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer*>* extraBindings, Zenject::LoadSceneRelationship containerMode);
    // public UnityEngine.AsyncOperation LoadSceneAsync(System.Int32 sceneIndex, UnityEngine.SceneManagement.LoadSceneMode loadMode, System.Action`1<Zenject.DiContainer> extraBindings, Zenject.LoadSceneRelationship containerMode, System.Action`1<Zenject.DiContainer> extraBindingsLate)
    // Offset: 0x21EC170
    UnityEngine::AsyncOperation* LoadSceneAsync(int sceneIndex, UnityEngine::SceneManagement::LoadSceneMode loadMode, System::Action_1<Zenject::DiContainer*>* extraBindings, Zenject::LoadSceneRelationship containerMode, System::Action_1<Zenject::DiContainer*>* extraBindingsLate);
  }; // Zenject.ZenjectSceneLoader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenjectSceneLoader*, "Zenject", "ZenjectSceneLoader");
#pragma pack(pop)
