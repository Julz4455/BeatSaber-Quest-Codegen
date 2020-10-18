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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MaterialPropertyBlockColorSetter
  class MaterialPropertyBlockColorSetter : public UnityEngine::MonoBehaviour {
    public:
    // private System.String _property
    // Offset: 0x18
    ::Il2CppString* property;
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Offset: 0x20
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // private System.Int32 _propertyId
    // Offset: 0x28
    int propertyId;
    // private System.Boolean _isInitialized
    // Offset: 0x2C
    bool isInitialized;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Color get_color()
    // Offset: 0x1FABC70
    UnityEngine::Color get_color();
    // protected System.Void Awake()
    // Offset: 0x1FAFD0C
    void Awake();
    // private System.Void InitIfNeeded()
    // Offset: 0x1FAFD4C
    void InitIfNeeded();
    // public System.Void SetColor(UnityEngine.Color color)
    // Offset: 0x1FABD64
    void SetColor(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x1FAFD8C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MaterialPropertyBlockColorSetter* New_ctor();
  }; // MaterialPropertyBlockColorSetter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyBlockColorSetter*, "", "MaterialPropertyBlockColorSetter");
#pragma pack(pop)
