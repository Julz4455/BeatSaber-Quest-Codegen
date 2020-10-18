// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Renderer
  class Renderer;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.MaterialUtility
  class MaterialUtility : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.Material> s_MaterialArray
    static System::Collections::Generic::List_1<UnityEngine::Material*>* _get_s_MaterialArray();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.Material> s_MaterialArray
    static void _set_s_MaterialArray(System::Collections::Generic::List_1<UnityEngine::Material*>* value);
    // static System.Int32 GetMaterialCount(UnityEngine.Renderer renderer)
    // Offset: 0x1943580
    static int GetMaterialCount(UnityEngine::Renderer* renderer);
    // static UnityEngine.Material GetSharedMaterial(UnityEngine.Renderer renderer, System.Int32 index)
    // Offset: 0x1943634
    static UnityEngine::Material* GetSharedMaterial(UnityEngine::Renderer* renderer, int index);
    // static private System.Void .cctor()
    // Offset: 0x1943784
    static void _cctor();
  }; // UnityEngine.ProBuilder.MaterialUtility
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MaterialUtility*, "UnityEngine.ProBuilder", "MaterialUtility");
#pragma pack(pop)
