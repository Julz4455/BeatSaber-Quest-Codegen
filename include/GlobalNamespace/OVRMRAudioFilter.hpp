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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRExternalComposition
  class OVRExternalComposition;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: OVRMRAudioFilter
  // [] Offset: FFFFFFFF
  class OVRMRAudioFilter : public UnityEngine::MonoBehaviour {
    public:
    // private System.Boolean running
    // Size: 0x1
    // Offset: 0x18
    bool running;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: running and: composition
    char __padding0[0x7] = {};
    // public OVRExternalComposition composition
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::OVRExternalComposition* composition;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRExternalComposition*) == 0x8);
    // Creating value type constructor for type: OVRMRAudioFilter
    OVRMRAudioFilter(bool running_ = {}, GlobalNamespace::OVRExternalComposition* composition_ = {}) noexcept : running{running_}, composition{composition_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Start()
    // Offset: 0x11C4BC0
    void Start();
    // private System.Void OnAudioFilterRead(System.Single[] data, System.Int32 channels)
    // Offset: 0x11C4BCC
    void OnAudioFilterRead(::Array<float>* data, int channels);
    // public System.Void .ctor()
    // Offset: 0x11C4BE8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRMRAudioFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("OVRMRAudioFilter").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRMRAudioFilter*, creationType>()));
    }
  }; // OVRMRAudioFilter
  static check_size<sizeof(OVRMRAudioFilter), 32 + sizeof(GlobalNamespace::OVRExternalComposition*)> __GlobalNamespace_OVRMRAudioFilterSizeCheck;
  static_assert(sizeof(OVRMRAudioFilter) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMRAudioFilter*, "", "OVRMRAudioFilter");
#pragma pack(pop)
