// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomFogSO
  class BloomFogSO;
  // Forward declaring type: BloomPrePassLightTypeSO
  class BloomPrePassLightTypeSO;
  // Forward declaring type: IBloomPrePassParams
  class IBloomPrePassParams;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassRendererSO
  // [] Offset: FFFFFFFF
  class BloomPrePassRendererSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::BloomPrePassRendererSO::PreallocationData
    class PreallocationData;
    // Nested type: GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData
    class LightsRenderingData;
    // private BloomFogSO _bloomFog
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BloomFogSO* bloomFog;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomFogSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xD1632C
    // private BloomPrePassRendererSO/PreallocationData[] _preallocationData
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::BloomPrePassRendererSO::PreallocationData*>* preallocationData;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BloomPrePassRendererSO::PreallocationData*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<BloomPrePassLightTypeSO,BloomPrePassRendererSO/LightsRenderingData> _lightsRenderingData
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO*, GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData*>* lightsRenderingData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO*, GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData*>*) == 0x8);
    // private UnityEngine.Rendering.CommandBuffer _commandBuffer
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Rendering::CommandBuffer* commandBuffer;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::CommandBuffer*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x38
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: BloomPrePassRendererSO
    BloomPrePassRendererSO(GlobalNamespace::BloomFogSO* bloomFog_ = {}, ::Array<GlobalNamespace::BloomPrePassRendererSO::PreallocationData*>* preallocationData_ = {}, System::Collections::Generic::Dictionary_2<GlobalNamespace::BloomPrePassLightTypeSO*, GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData*>* lightsRenderingData_ = {}, UnityEngine::Rendering::CommandBuffer* commandBuffer_ = {}, bool initialized_ = {}) noexcept : bloomFog{bloomFog_}, preallocationData{preallocationData_}, lightsRenderingData{lightsRenderingData_}, commandBuffer{commandBuffer_}, initialized{initialized_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD16364
    // Get static field: static private readonly System.Int32 _vertexTransformMatrixID
    static int _get__vertexTransformMatrixID();
    // Set static field: static private readonly System.Int32 _vertexTransformMatrixID
    static void _set__vertexTransformMatrixID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD16374
    // Get static field: static private readonly System.Int32 _bloomPrePassTextureID
    static int _get__bloomPrePassTextureID();
    // Set static field: static private readonly System.Int32 _bloomPrePassTextureID
    static void _set__bloomPrePassTextureID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD16384
    // Get static field: static private readonly System.Int32 _stereoCameraEyeOffsetID
    static int _get__stereoCameraEyeOffsetID();
    // Set static field: static private readonly System.Int32 _stereoCameraEyeOffsetID
    static void _set__stereoCameraEyeOffsetID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD16394
    // Get static field: static private readonly System.Int32 _customFogTextureToScreenRatioID
    static int _get__customFogTextureToScreenRatioID();
    // Set static field: static private readonly System.Int32 _customFogTextureToScreenRatioID
    static void _set__customFogTextureToScreenRatioID(int value);
    // protected System.Void OnDisable()
    // Offset: 0x1D9A620
    void OnDisable();
    // public System.Void Init()
    // Offset: 0x1D97490
    void Init();
    // private System.Void Cleanup()
    // Offset: 0x1D9A624
    void Cleanup();
    // public System.Void RenderAndSetData(UnityEngine.Vector3 cameraPos, UnityEngine.Matrix4x4 projectionMatrix, UnityEngine.Matrix4x4 viewMatrix, System.Single stereoCameraEyeOffset, IBloomPrePassParams bloomPrePassParams, UnityEngine.RenderTexture dest)
    // Offset: 0x1D9AB9C
    void RenderAndSetData(UnityEngine::Vector3 cameraPos, UnityEngine::Matrix4x4 projectionMatrix, UnityEngine::Matrix4x4 viewMatrix, float stereoCameraEyeOffset, GlobalNamespace::IBloomPrePassParams* bloomPrePassParams, UnityEngine::RenderTexture* dest);
    // public System.Void RenderAndSetData(UnityEngine.Vector3 cameraPos, UnityEngine.Matrix4x4 projectionMatrix, UnityEngine.Matrix4x4 viewMatrix, System.Single stereoCameraEyeOffset, IBloomPrePassParams bloomPrePassParams, UnityEngine.RenderTexture dest, out UnityEngine.Vector2 textureToScreenRatio)
    // Offset: 0x1D97D28
    void RenderAndSetData(UnityEngine::Vector3 cameraPos, UnityEngine::Matrix4x4 projectionMatrix, UnityEngine::Matrix4x4 viewMatrix, float stereoCameraEyeOffset, GlobalNamespace::IBloomPrePassParams* bloomPrePassParams, UnityEngine::RenderTexture* dest, UnityEngine::Vector2& textureToScreenRatio);
    // static public System.Void SetDataToShaders(System.Single stereoCameraEyeOffset, UnityEngine.Vector2 textureToScreenRatio, UnityEngine.RenderTexture renderTexture)
    // Offset: 0x1D9884C
    static void SetDataToShaders(float stereoCameraEyeOffset, UnityEngine::Vector2 textureToScreenRatio, UnityEngine::RenderTexture* renderTexture);
    // public System.Void SetCustomStereoCameraEyeOffset(System.Single stereoCameraEyeOffset)
    // Offset: 0x1D9B40C
    void SetCustomStereoCameraEyeOffset(float stereoCameraEyeOffset);
    // public UnityEngine.RenderTexture CreateBloomPrePassRenderTextureIfNeeded(UnityEngine.RenderTexture renderTexture, IBloomPrePassParams bloomPrePassParams)
    // Offset: 0x1D97A14
    UnityEngine::RenderTexture* CreateBloomPrePassRenderTextureIfNeeded(UnityEngine::RenderTexture* renderTexture, GlobalNamespace::IBloomPrePassParams* bloomPrePassParams);
    // public System.Void EnableBloomFog()
    // Offset: 0x1D98830
    void EnableBloomFog();
    // public System.Void DisableBloomFog()
    // Offset: 0x1D989E0
    void DisableBloomFog();
    // public System.Void UpdateBloomFogParams()
    // Offset: 0x1D9B488
    void UpdateBloomFogParams();
    // public System.Void GetCameraParams(UnityEngine.Camera camera, out UnityEngine.Matrix4x4 projectionMatrix, out UnityEngine.Matrix4x4 viewMatrix, out System.Single stereoCameraEyeOffset)
    // Offset: 0x1D978A8
    void GetCameraParams(UnityEngine::Camera* camera, UnityEngine::Matrix4x4& projectionMatrix, UnityEngine::Matrix4x4& viewMatrix, float& stereoCameraEyeOffset);
    // private System.Void RenderAllLights(UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix, System.Single linesWidth)
    // Offset: 0x1D9ABE8
    void RenderAllLights(UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix, float linesWidth);
    // private System.Void PrepareLightsMeshRendering(BloomPrePassRendererSO/LightsRenderingData data, System.Int32 numberOfLights)
    // Offset: 0x1D9A754
    void PrepareLightsMeshRendering(GlobalNamespace::BloomPrePassRendererSO::LightsRenderingData* data, int numberOfLights);
    // private UnityEngine.Matrix4x4 MatrixLerp(UnityEngine.Matrix4x4 from, UnityEngine.Matrix4x4 to, System.Single t)
    // Offset: 0x1D9B4A0
    UnityEngine::Matrix4x4 MatrixLerp(UnityEngine::Matrix4x4 from, UnityEngine::Matrix4x4 to, float t);
    // protected override System.Void OnEnable()
    // Offset: 0x1D9A5F8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x1D9B5AC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassRendererSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassRendererSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassRendererSO*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D9B628
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BloomPrePassRendererSO
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassRendererSO), 56 + sizeof(bool)> __GlobalNamespace_BloomPrePassRendererSOSizeCheck;
  static_assert(sizeof(BloomPrePassRendererSO) == 0x39);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassRendererSO*, "", "BloomPrePassRendererSO");
