// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.UI.DefaultControls
#include "UnityEngine/UI/DefaultControls.hpp"
// Including type: UnityEngine.UI.DefaultControls/IFactoryControls
#include "UnityEngine/UI/DefaultControls_IFactoryControls.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.DefaultControls/DefaultRuntimeFactory
  class DefaultControls::DefaultRuntimeFactory : public ::Il2CppObject, public UnityEngine::UI::DefaultControls::IFactoryControls {
    public:
    // Get static field: static public UnityEngine.UI.DefaultControls/IFactoryControls Default
    static UnityEngine::UI::DefaultControls::IFactoryControls* _get_Default();
    // Set static field: static public UnityEngine.UI.DefaultControls/IFactoryControls Default
    static void _set_Default(UnityEngine::UI::DefaultControls::IFactoryControls* value);
    // static private System.Void .cctor()
    // Offset: 0xE0E6C0
    static void _cctor();
    // public UnityEngine.GameObject CreateGameObject(System.String name, params System.Type[] components)
    // Offset: 0xE0E644
    // Implemented from: UnityEngine.UI.DefaultControls/IFactoryControls
    // Base method: UnityEngine.GameObject IFactoryControls::CreateGameObject(System.String name, params System.Type[] components)
    UnityEngine::GameObject* CreateGameObject(::Il2CppString* name, ::Array<System::Type*>* components);
    // Creating initializer_list -> params proxy for: UnityEngine.GameObject CreateGameObject(System.String name, params System.Type[] components)
    UnityEngine::GameObject* CreateGameObject(::Il2CppString* name, std::initializer_list<System::Type*> components);
    // Creating TArgs -> initializer_list proxy for: UnityEngine.GameObject CreateGameObject(System.String name, params System.Type[] components)
    template<class ...TParams>
    UnityEngine::GameObject* CreateGameObject(::Il2CppString* name, TParams&&... components) {
      return CreateGameObject(name, {components...});
    }
    // public System.Void .ctor()
    // Offset: 0xE0E6B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DefaultControls::DefaultRuntimeFactory* New_ctor();
  }; // UnityEngine.UI.DefaultControls/DefaultRuntimeFactory
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::DefaultControls::DefaultRuntimeFactory*, "UnityEngine.UI", "DefaultControls/DefaultRuntimeFactory");
#pragma pack(pop)
