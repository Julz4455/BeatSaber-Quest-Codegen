// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ConditionalImageMaterialSwitcher
  class ConditionalImageMaterialSwitcher : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Material _material0
    // Offset: 0x18
    UnityEngine::Material* material0;
    // private UnityEngine.Material _material1
    // Offset: 0x20
    UnityEngine::Material* material1;
    // private BoolSO _value
    // Offset: 0x28
    GlobalNamespace::BoolSO* value;
    // private UnityEngine.UI.Image _image
    // Offset: 0x30
    UnityEngine::UI::Image* image;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Awake()
    // Offset: 0xF2795C
    void Awake();
    // public System.Void .ctor()
    // Offset: 0xF279E4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ConditionalImageMaterialSwitcher* New_ctor();
  }; // ConditionalImageMaterialSwitcher
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConditionalImageMaterialSwitcher*, "", "ConditionalImageMaterialSwitcher");
#pragma pack(pop)
