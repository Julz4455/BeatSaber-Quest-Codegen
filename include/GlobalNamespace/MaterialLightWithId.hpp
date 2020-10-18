// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithId
#include "GlobalNamespace/LightWithId.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MaterialLightWithId
  class MaterialLightWithId : public GlobalNamespace::LightWithId {
    public:
    // private UnityEngine.MeshRenderer _meshRenderer
    // Offset: 0x30
    UnityEngine::MeshRenderer* meshRenderer;
    // private UnityEngine.Color _color
    // Offset: 0x38
    UnityEngine::Color color;
    // Get static field: static private readonly System.Int32 _colorId
    static int _get__colorId();
    // Set static field: static private readonly System.Int32 _colorId
    static void _set__colorId(int value);
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock* value);
    // public UnityEngine.Color get_color()
    // Offset: 0x1FAFB34
    UnityEngine::Color get_color();
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1FAFB40
    // Implemented from: LightWithId
    // Base method: System.Void LightWithId::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x1FAFC88
    // Implemented from: LightWithId
    // Base method: System.Void LightWithId::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MaterialLightWithId* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x1FAFC98
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // MaterialLightWithId
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialLightWithId*, "", "MaterialLightWithId");
#pragma pack(pop)
