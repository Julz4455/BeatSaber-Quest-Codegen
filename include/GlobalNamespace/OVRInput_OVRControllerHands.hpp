// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: OVRInput/OVRControllerBase
#include "GlobalNamespace/OVRInput_OVRControllerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x101
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/OVRControllerHands
  // [] Offset: FFFFFFFF
  class OVRInput::OVRControllerHands : public GlobalNamespace::OVRInput::OVRControllerBase {
    public:
    // Creating value type constructor for type: OVRControllerHands
    OVRControllerHands() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x13A75F0
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRInput::OVRControllerHands* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRInput::OVRControllerHands::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRInput::OVRControllerHands*, creationType>()));
    }
    // public override System.Void ConfigureButtonMap()
    // Offset: 0x13AE02C
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureButtonMap()
    void ConfigureButtonMap();
    // public override System.Void ConfigureTouchMap()
    // Offset: 0x13AE1D4
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureTouchMap()
    void ConfigureTouchMap();
    // public override System.Void ConfigureNearTouchMap()
    // Offset: 0x13AE284
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureNearTouchMap()
    void ConfigureNearTouchMap();
    // public override System.Void ConfigureAxis1DMap()
    // Offset: 0x13AE2D4
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureAxis1DMap()
    void ConfigureAxis1DMap();
    // public override System.Void ConfigureAxis2DMap()
    // Offset: 0x13AE324
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureAxis2DMap()
    void ConfigureAxis2DMap();
    // public override System.Boolean WasRecentered()
    // Offset: 0x13AE374
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Boolean OVRControllerBase::WasRecentered()
    bool WasRecentered();
    // public override System.Byte GetRecenterCount()
    // Offset: 0x13AE398
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Byte OVRControllerBase::GetRecenterCount()
    uint8_t GetRecenterCount();
    // public override System.Byte GetBatteryPercentRemaining()
    // Offset: 0x13AE3A8
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Byte OVRControllerBase::GetBatteryPercentRemaining()
    uint8_t GetBatteryPercentRemaining();
  }; // OVRInput/OVRControllerHands
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OVRControllerHands*, "", "OVRInput/OVRControllerHands");
