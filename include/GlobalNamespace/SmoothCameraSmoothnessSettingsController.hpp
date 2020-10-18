// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ListSettingsController
#include "GlobalNamespace/ListSettingsController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FloatSO
  class FloatSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SmoothCameraSmoothnessSettingsController
  class SmoothCameraSmoothnessSettingsController : public GlobalNamespace::ListSettingsController {
    public:
    // private FloatSO _smoothCameraPositionSmooth
    // Offset: 0x28
    GlobalNamespace::FloatSO* smoothCameraPositionSmooth;
    // private FloatSO _smoothCameraRotationSmooth
    // Offset: 0x30
    GlobalNamespace::FloatSO* smoothCameraRotationSmooth;
    // private System.Single[] _smoothnesses
    // Offset: 0x38
    ::Array<float>* smoothnesses;
    // protected override System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0xEF139C
    // Implemented from: ListSettingsController
    // Base method: System.Boolean ListSettingsController::GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    bool GetInitValues(int& idx, int& numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0xEF14C4
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0xEF1580
    // Implemented from: ListSettingsController
    // Base method: System.String ListSettingsController::TextForValue(System.Int32 idx)
    ::Il2CppString* TextForValue(int idx);
    // public System.Void .ctor()
    // Offset: 0xEF1650
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::.ctor()
    // Base method: System.Void IncDecSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SmoothCameraSmoothnessSettingsController* New_ctor();
  }; // SmoothCameraSmoothnessSettingsController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SmoothCameraSmoothnessSettingsController*, "", "SmoothCameraSmoothnessSettingsController");
#pragma pack(pop)
