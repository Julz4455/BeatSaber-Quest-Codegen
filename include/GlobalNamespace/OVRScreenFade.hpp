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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRScreenFade
  class OVRScreenFade : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVRScreenFade::$Fade$d__20
    class $Fade$d__20;
    // public System.Single fadeTime
    // Offset: 0x18
    float fadeTime;
    // public UnityEngine.Color fadeColor
    // Offset: 0x1C
    UnityEngine::Color fadeColor;
    // public System.Boolean fadeOnStart
    // Offset: 0x2C
    bool fadeOnStart;
    // public System.Int32 renderQueue
    // Offset: 0x30
    int renderQueue;
    // private System.Single uiFadeAlpha
    // Offset: 0x34
    float uiFadeAlpha;
    // private UnityEngine.MeshRenderer fadeRenderer
    // Offset: 0x38
    UnityEngine::MeshRenderer* fadeRenderer;
    // private UnityEngine.MeshFilter fadeMesh
    // Offset: 0x40
    UnityEngine::MeshFilter* fadeMesh;
    // private UnityEngine.Material fadeMaterial
    // Offset: 0x48
    UnityEngine::Material* fadeMaterial;
    // private System.Boolean isFading
    // Offset: 0x50
    bool isFading;
    // private System.Single <currentAlpha>k__BackingField
    // Offset: 0x54
    float currentAlpha;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Single get_currentAlpha()
    // Offset: 0x149B078
    float get_currentAlpha();
    // private System.Void set_currentAlpha(System.Single value)
    // Offset: 0x149B080
    void set_currentAlpha(float value);
    // private System.Void Start()
    // Offset: 0x149B088
    void Start();
    // public System.Void FadeOut()
    // Offset: 0x149B650
    void FadeOut();
    // private System.Void OnLevelFinishedLoading(System.Int32 level)
    // Offset: 0x149B684
    void OnLevelFinishedLoading(int level);
    // private System.Void OnEnable()
    // Offset: 0x149B6B8
    void OnEnable();
    // private System.Void OnDestroy()
    // Offset: 0x149B6CC
    void OnDestroy();
    // public System.Void SetUIFade(System.Single level)
    // Offset: 0x149B830
    void SetUIFade(float level);
    // public System.Void SetFadeLevel(System.Single level)
    // Offset: 0x149B5B8
    void SetFadeLevel(float level);
    // private System.Collections.IEnumerator Fade(System.Single startAlpha, System.Single endAlpha)
    // Offset: 0x149B5C0
    System::Collections::IEnumerator* Fade(float startAlpha, float endAlpha);
    // private System.Void SetMaterialAlpha()
    // Offset: 0x149B8B0
    void SetMaterialAlpha();
    // public System.Void .ctor()
    // Offset: 0x149BA30
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRScreenFade* New_ctor();
  }; // OVRScreenFade
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRScreenFade*, "", "OVRScreenFade");
#pragma pack(pop)
