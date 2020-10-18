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
  // Forward declaring type: ColorStepValuePicker
  class ColorStepValuePicker;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: IncDecColorController
  class IncDecColorController : public UnityEngine::MonoBehaviour {
    public:
    // private ColorStepValuePicker _stepValuePicker
    // Offset: 0x18
    GlobalNamespace::ColorStepValuePicker* stepValuePicker;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void set_enableDec(System.Boolean value)
    // Offset: 0x101972C
    void set_enableDec(bool value);
    // protected System.Void set_enableInc(System.Boolean value)
    // Offset: 0x101974C
    void set_enableInc(bool value);
    // protected System.Void set_color(UnityEngine.Color value)
    // Offset: 0x101976C
    void set_color(UnityEngine::Color value);
    // protected System.Void Awake()
    // Offset: 0x1019788
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x101984C
    void OnDestroy();
    // protected System.Void IncButtonPressed()
    // Offset: 0xFFFFFFFF
    void IncButtonPressed();
    // protected System.Void DecButtonPressed()
    // Offset: 0xFFFFFFFF
    void DecButtonPressed();
    // protected System.Void .ctor()
    // Offset: 0x1019954
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static IncDecColorController* New_ctor();
  }; // IncDecColorController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IncDecColorController*, "", "IncDecColorController");
#pragma pack(pop)
