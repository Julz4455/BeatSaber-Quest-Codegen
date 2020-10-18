// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.SceneManagement.Scene
#include "UnityEngine/SceneManagement/Scene.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Autogenerated type: ModestTree.Util.UnityUtil
  class UnityUtil : public ::Il2CppObject {
    public:
    // Nested type: ModestTree::Util::UnityUtil::$get_AllScenes$d__1
    class $get_AllScenes$d__1;
    // Nested type: ModestTree::Util::UnityUtil::$$c
    class $$c;
    // Nested type: ModestTree::Util::UnityUtil::$GetParents$d__16
    class $GetParents$d__16;
    // Nested type: ModestTree::Util::UnityUtil::$GetParentsAndSelf$d__17
    class $GetParentsAndSelf$d__17;
    // Nested type: ModestTree::Util::UnityUtil::$GetDirectChildrenAndSelf$d__20
    class $GetDirectChildrenAndSelf$d__20;
    // Nested type: ModestTree::Util::UnityUtil::$GetDirectChildren$d__21
    class $GetDirectChildren$d__21;
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.SceneManagement.Scene> get_AllScenes()
    // Offset: 0x11F0278
    static System::Collections::Generic::IEnumerable_1<UnityEngine::SceneManagement::Scene>* get_AllScenes();
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.SceneManagement.Scene> get_AllLoadedScenes()
    // Offset: 0x11F0320
    static System::Collections::Generic::IEnumerable_1<UnityEngine::SceneManagement::Scene>* get_AllLoadedScenes();
    // static public System.Boolean get_IsAltKeyDown()
    // Offset: 0x11F0420
    static bool get_IsAltKeyDown();
    // static public System.Boolean get_IsControlKeyDown()
    // Offset: 0x11F0454
    static bool get_IsControlKeyDown();
    // static public System.Boolean get_IsShiftKeyDown()
    // Offset: 0x11F0488
    static bool get_IsShiftKeyDown();
    // static public System.Boolean get_WasShiftKeyJustPressed()
    // Offset: 0x11F04BC
    static bool get_WasShiftKeyJustPressed();
    // static public System.Boolean get_WasAltKeyJustPressed()
    // Offset: 0x11F04F0
    static bool get_WasAltKeyJustPressed();
    // static public System.Int32 GetDepthLevel(UnityEngine.Transform transform)
    // Offset: 0x11F0524
    static int GetDepthLevel(UnityEngine::Transform* transform);
    // static public UnityEngine.GameObject GetRootParentOrSelf(UnityEngine.GameObject gameObject)
    // Offset: 0x11F05D4
    static UnityEngine::GameObject* GetRootParentOrSelf(UnityEngine::GameObject* gameObject);
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.Transform> GetParents(UnityEngine.Transform transform)
    // Offset: 0x11F0788
    static System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>* GetParents(UnityEngine::Transform* transform);
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.Transform> GetParentsAndSelf(UnityEngine.Transform transform)
    // Offset: 0x11F06FC
    static System::Collections::Generic::IEnumerable_1<UnityEngine::Transform*>* GetParentsAndSelf(UnityEngine::Transform* transform);
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.Component> GetComponentsInChildrenTopDown(UnityEngine.GameObject gameObject, System.Boolean includeInactive)
    // Offset: 0x11F0884
    static System::Collections::Generic::IEnumerable_1<UnityEngine::Component*>* GetComponentsInChildrenTopDown(UnityEngine::GameObject* gameObject, bool includeInactive);
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.Component> GetComponentsInChildrenBottomUp(UnityEngine.GameObject gameObject, System.Boolean includeInactive)
    // Offset: 0x11F09A8
    static System::Collections::Generic::IEnumerable_1<UnityEngine::Component*>* GetComponentsInChildrenBottomUp(UnityEngine::GameObject* gameObject, bool includeInactive);
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> GetDirectChildrenAndSelf(UnityEngine.GameObject obj)
    // Offset: 0x11F0ACC
    static System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* GetDirectChildrenAndSelf(UnityEngine::GameObject* obj);
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> GetDirectChildren(UnityEngine.GameObject obj)
    // Offset: 0x11F0B90
    static System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* GetDirectChildren(UnityEngine::GameObject* obj);
    // static public System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> GetAllGameObjects()
    // Offset: 0x11F0C54
    static System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* GetAllGameObjects();
    // static public System.Collections.Generic.List`1<UnityEngine.GameObject> GetAllRootGameObjects()
    // Offset: 0x11F0D80
    static System::Collections::Generic::List_1<UnityEngine::GameObject*>* GetAllRootGameObjects();
  }; // ModestTree.Util.UnityUtil
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::UnityUtil*, "ModestTree.Util", "UnityUtil");
#pragma pack(pop)
