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
  // Autogenerated type: OVRInput/OVRControllerTouch
  // [] Offset: FFFFFFFF
  class OVRInput::OVRControllerTouch : public GlobalNamespace::OVRInput::OVRControllerBase {
    public:
    // Creating value type constructor for type: OVRControllerTouch
    OVRControllerTouch() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x13A7578
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRInput::OVRControllerTouch* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRInput::OVRControllerTouch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRInput::OVRControllerTouch*, creationType>()));
    }
    // public override System.Void ConfigureButtonMap()
    // Offset: 0x13B00B8
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureButtonMap()
    void ConfigureButtonMap();
    // public override System.Void ConfigureTouchMap()
    // Offset: 0x13B02B4
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureTouchMap()
    void ConfigureTouchMap();
    // public override System.Void ConfigureNearTouchMap()
    // Offset: 0x13B038C
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureNearTouchMap()
    void ConfigureNearTouchMap();
    // public override System.Void ConfigureAxis1DMap()
    // Offset: 0x13B03EC
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureAxis1DMap()
    void ConfigureAxis1DMap();
    // public override System.Void ConfigureAxis2DMap()
    // Offset: 0x13B044C
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Void OVRControllerBase::ConfigureAxis2DMap()
    void ConfigureAxis2DMap();
    // public override System.Boolean WasRecentered()
    // Offset: 0x13B04A4
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Boolean OVRControllerBase::WasRecentered()
    bool WasRecentered();
    // public override System.Byte GetRecenterCount()
    // Offset: 0x13B04C8
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Byte OVRControllerBase::GetRecenterCount()
    uint8_t GetRecenterCount();
    // public override System.Byte GetBatteryPercentRemaining()
    // Offset: 0x13B04D8
    // Implemented from: OVRInput/OVRControllerBase
    // Base method: System.Byte OVRControllerBase::GetBatteryPercentRemaining()
    uint8_t GetBatteryPercentRemaining();
  }; // OVRInput/OVRControllerTouch
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OVRControllerTouch*, "", "OVRInput/OVRControllerTouch");
