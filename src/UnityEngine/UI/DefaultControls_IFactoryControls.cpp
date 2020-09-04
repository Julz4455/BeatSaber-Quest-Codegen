// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.DefaultControls/IFactoryControls
#include "UnityEngine/UI/DefaultControls_IFactoryControls.hpp"
// Including type: UnityEngine.GameObject
#include "UnityEngine/GameObject.hpp"
// Including type: System.Type
#include "System/Type.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.UI.DefaultControls/IFactoryControls.CreateGameObject
UnityEngine::GameObject* UnityEngine::UI::DefaultControls::IFactoryControls::CreateGameObject(::Il2CppString* name, ::Array<System::Type*>* components) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::GameObject*>(this, "CreateGameObject", name, components));
}
// Creating initializer_list -> params proxy for: UnityEngine.GameObject CreateGameObject(System.String name, params System.Type[] components)
UnityEngine::GameObject* UnityEngine::UI::DefaultControls::IFactoryControls::CreateGameObject(::Il2CppString* name, std::initializer_list<System::Type*> components) {
  return UnityEngine::UI::DefaultControls::IFactoryControls::CreateGameObject(name, ::Array<System::Type*>::New(components));
}
