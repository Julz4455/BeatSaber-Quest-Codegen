// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AvatarPoseController
#include "GlobalNamespace/AvatarPoseController.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AvatarPoseController/PositionsWillBeSetDelegate
  class AvatarPoseController::PositionsWillBeSetDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFB5A24
    static AvatarPoseController::PositionsWillBeSetDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(UnityEngine.Vector3 headPosition, UnityEngine.Vector3 leftHandPosition, UnityEngine.Vector3 rightHandPosition, out UnityEngine.Vector3 newHeadPosition, out UnityEngine.Vector3 newLeftHandPosition, out UnityEngine.Vector3 newRightHandPosition)
    // Offset: 0xFB4D78
    void Invoke(UnityEngine::Vector3 headPosition, UnityEngine::Vector3 leftHandPosition, UnityEngine::Vector3 rightHandPosition, UnityEngine::Vector3& newHeadPosition, UnityEngine::Vector3& newLeftHandPosition, UnityEngine::Vector3& newRightHandPosition);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Vector3 headPosition, UnityEngine.Vector3 leftHandPosition, UnityEngine.Vector3 rightHandPosition, out UnityEngine.Vector3 newHeadPosition, out UnityEngine.Vector3 newLeftHandPosition, out UnityEngine.Vector3 newRightHandPosition, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFB5A38
    System::IAsyncResult* BeginInvoke(UnityEngine::Vector3 headPosition, UnityEngine::Vector3 leftHandPosition, UnityEngine::Vector3 rightHandPosition, UnityEngine::Vector3& newHeadPosition, UnityEngine::Vector3& newLeftHandPosition, UnityEngine::Vector3& newRightHandPosition, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(out UnityEngine.Vector3 newHeadPosition, out UnityEngine.Vector3 newLeftHandPosition, out UnityEngine.Vector3 newRightHandPosition, System.IAsyncResult result)
    // Offset: 0xFB5B60
    void EndInvoke(UnityEngine::Vector3& newHeadPosition, UnityEngine::Vector3& newLeftHandPosition, UnityEngine::Vector3& newRightHandPosition, System::IAsyncResult* result);
  }; // AvatarPoseController/PositionsWillBeSetDelegate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarPoseController::PositionsWillBeSetDelegate*, "", "AvatarPoseController/PositionsWillBeSetDelegate");
#pragma pack(pop)
