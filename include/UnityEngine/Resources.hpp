// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Resources
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CBED4C
  // [NativeHeaderAttribute] Offset: CBED4C
  class Resources : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Resources
    Resources() noexcept {}
    // static T[] ConvertObjects(UnityEngine.Object[] rawObjects)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* ConvertObjects(::Array<UnityEngine::Object*>* rawObjects) {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Resources::ConvertObjects");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Resources", "ConvertObjects", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(rawObjects)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, rawObjects);
    }
    // static public UnityEngine.Object[] FindObjectsOfTypeAll(System.Type type)
    // Offset: 0x1AB0918
    static ::Array<UnityEngine::Object*>* FindObjectsOfTypeAll(System::Type* type);
    // static public T[] FindObjectsOfTypeAll()
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* FindObjectsOfTypeAll() {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Resources::FindObjectsOfTypeAll");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Resources", "FindObjectsOfTypeAll", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
    // static public UnityEngine.Object Load(System.String path)
    // Offset: 0x1AB0958
    static UnityEngine::Object* Load(::Il2CppString* path);
    // static public T Load(System.String path)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T Load(::Il2CppString* path) {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Resources::Load");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Resources", "Load", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(path)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, path);
    }
    // static public UnityEngine.Object Load(System.String path, System.Type systemTypeInstance)
    // Offset: 0x1AB0A04
    static UnityEngine::Object* Load(::Il2CppString* path, System::Type* systemTypeInstance);
    // static public UnityEngine.Object[] LoadAll(System.String path, System.Type systemTypeInstance)
    // Offset: 0x1AB0A54
    static ::Array<UnityEngine::Object*>* LoadAll(::Il2CppString* path, System::Type* systemTypeInstance);
    // static public UnityEngine.Object[] LoadAll(System.String path)
    // Offset: 0x1AB0AA4
    static ::Array<UnityEngine::Object*>* LoadAll(::Il2CppString* path);
    // static public UnityEngine.Object GetBuiltinResource(System.Type type, System.String path)
    // Offset: 0x1AB0B50
    static UnityEngine::Object* GetBuiltinResource(System::Type* type, ::Il2CppString* path);
    // static public T GetBuiltinResource(System.String path)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T GetBuiltinResource(::Il2CppString* path) {
      static_assert(std::is_convertible_v<T, UnityEngine::Object*>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Resources::GetBuiltinResource");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine", "Resources", "GetBuiltinResource", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(path)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, path);
    }
    // static public UnityEngine.AsyncOperation UnloadUnusedAssets()
    // Offset: 0x1AB0BA0
    static UnityEngine::AsyncOperation* UnloadUnusedAssets();
  }; // UnityEngine.Resources
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Resources*, "UnityEngine", "Resources");
