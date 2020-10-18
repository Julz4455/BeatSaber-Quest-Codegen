// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: NetEase.Docker
namespace NetEase::Docker {
  // Autogenerated type: NetEase.Docker.InitializeData
  struct InitializeData : public System::ValueType {
    public:
    // private System.Boolean <InitializeSuccessful>k__BackingField
    // Offset: 0x0
    bool InitializeSuccessful;
    // private System.Int32 <InitializeCode>k__BackingField
    // Offset: 0x4
    int InitializeCode;
    // Creating value type constructor for type: InitializeData
    constexpr InitializeData(bool InitializeSuccessful_ = {}, int InitializeCode_ = {}) noexcept : InitializeSuccessful{InitializeSuccessful_}, InitializeCode{InitializeCode_} {}
    // public System.Boolean get_InitializeSuccessful()
    // Offset: 0xDDF4DC
    bool get_InitializeSuccessful();
    // public System.Void set_InitializeSuccessful(System.Boolean value)
    // Offset: 0xDDF4E4
    void set_InitializeSuccessful(bool value);
    // public System.Void set_InitializeCode(System.Int32 value)
    // Offset: 0xDDF4F0
    void set_InitializeCode(int value);
  }; // NetEase.Docker.InitializeData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NetEase::Docker::InitializeData, "NetEase.Docker", "InitializeData");
#pragma pack(pop)
