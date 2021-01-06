// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainCamera
  class MainCamera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  // Autogenerated type: SmoothCamera
  // [] Offset: FFFFFFFF
  class SmoothCamera : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Camera _camera
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Camera* camera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // [InjectAttribute] Offset: 0xDCB27C
    // private MainCamera _mainCamera
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MainCamera* mainCamera;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainCamera*) == 0x8);
    // private UnityEngine.Vector3 _thirdPersonPosition
    // Size: 0xC
    // Offset: 0x28
    UnityEngine::Vector3 thirdPersonPosition;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _thirdPersonEulerAngles
    // Size: 0xC
    // Offset: 0x34
    UnityEngine::Vector3 thirdPersonEulerAngles;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private System.Boolean _thirdPersonEnabled
    // Size: 0x1
    // Offset: 0x40
    bool thirdPersonEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: thirdPersonEnabled and: rotationSmooth
    char __padding4[0x3] = {};
    // private System.Single _rotationSmooth
    // Size: 0x4
    // Offset: 0x44
    float rotationSmooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _positionSmooth
    // Size: 0x4
    // Offset: 0x48
    float positionSmooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: SmoothCamera
    SmoothCamera(UnityEngine::Camera* camera_ = {}, GlobalNamespace::MainCamera* mainCamera_ = {}, UnityEngine::Vector3 thirdPersonPosition_ = {}, UnityEngine::Vector3 thirdPersonEulerAngles_ = {}, bool thirdPersonEnabled_ = {}, float rotationSmooth_ = {}, float positionSmooth_ = {}) noexcept : camera{camera_}, mainCamera{mainCamera_}, thirdPersonPosition{thirdPersonPosition_}, thirdPersonEulerAngles{thirdPersonEulerAngles_}, thirdPersonEnabled{thirdPersonEnabled_}, rotationSmooth{rotationSmooth_}, positionSmooth{positionSmooth_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Init(System.Single fieldOfView, System.Single positionSmooth, System.Single rotationSmooth, System.Boolean thirdPersonEnabled, UnityEngine.Vector3 thirdPersonPosition, UnityEngine.Vector3 thirdPersonEulerAngles)
    // Offset: 0xF38AF0
    void Init(float fieldOfView, float positionSmooth, float rotationSmooth, bool thirdPersonEnabled, UnityEngine::Vector3 thirdPersonPosition, UnityEngine::Vector3 thirdPersonEulerAngles);
    // protected System.Void OnEnable()
    // Offset: 0xF38C9C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xF38CBC
    void OnDisable();
    // protected System.Void LateUpdate()
    // Offset: 0xF38CDC
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0xF38F18
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SmoothCamera* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("SmoothCamera").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SmoothCamera*, creationType>()));
    }
  }; // SmoothCamera
  static check_size<sizeof(SmoothCamera), 72 + sizeof(float)> __GlobalNamespace_SmoothCameraSizeCheck;
  static_assert(sizeof(SmoothCamera) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SmoothCamera*, "", "SmoothCamera");
#pragma pack(pop)
