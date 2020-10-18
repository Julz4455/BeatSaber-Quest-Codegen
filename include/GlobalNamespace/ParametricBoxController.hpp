// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
  // Autogenerated type: ParametricBoxController
  class ParametricBoxController : public UnityEngine::MonoBehaviour {
    public:
    // public System.Single width
    // Offset: 0x18
    float width;
    // public System.Single height
    // Offset: 0x1C
    float height;
    // public System.Single length
    // Offset: 0x20
    float length;
    // public System.Single heightCenter
    // Offset: 0x24
    float heightCenter;
    // public UnityEngine.Color color
    // Offset: 0x28
    UnityEngine::Color color;
    // public System.Single alphaMultiplier
    // Offset: 0x38
    float alphaMultiplier;
    // public System.Single minAlpha
    // Offset: 0x3C
    float minAlpha;
    // public System.Single alphaStart
    // Offset: 0x40
    float alphaStart;
    // public System.Single alphaEnd
    // Offset: 0x44
    float alphaEnd;
    // public System.Single widthStart
    // Offset: 0x48
    float widthStart;
    // public System.Single widthEnd
    // Offset: 0x4C
    float widthEnd;
    // private UnityEngine.MeshRenderer _meshRenderer
    // Offset: 0x50
    UnityEngine::MeshRenderer* meshRenderer;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock* value);
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // Get static field: static private readonly System.Int32 _alphaStartID
    static int _get__alphaStartID();
    // Set static field: static private readonly System.Int32 _alphaStartID
    static void _set__alphaStartID(int value);
    // Get static field: static private readonly System.Int32 _alphaEndID
    static int _get__alphaEndID();
    // Set static field: static private readonly System.Int32 _alphaEndID
    static void _set__alphaEndID(int value);
    // Get static field: static private readonly System.Int32 _widthStartID
    static int _get__widthStartID();
    // Set static field: static private readonly System.Int32 _widthStartID
    static void _set__widthStartID(int value);
    // Get static field: static private readonly System.Int32 _widthEndID
    static int _get__widthEndID();
    // Set static field: static private readonly System.Int32 _widthEndID
    static void _set__widthEndID(int value);
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x1FB0FB4
    static void NoDomainReloadInit();
    // protected System.Void Awake()
    // Offset: 0x1FB1020
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x1FB1040
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1FB1358
    void OnDisable();
    // public System.Void Refresh()
    // Offset: 0x1FB1074
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0x1FB1378
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ParametricBoxController* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x1FB139C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // ParametricBoxController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParametricBoxController*, "", "ParametricBoxController");
#pragma pack(pop)
