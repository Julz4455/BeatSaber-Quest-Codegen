// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: TimeHelper
  // [] Offset: FFFFFFFF
  class TimeHelper : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _accumulator
    // Size: 0x4
    // Offset: 0x18
    float accumulator;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: TimeHelper
    TimeHelper(float accumulator_ = {}) noexcept : accumulator{accumulator_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [CompilerGeneratedAttribute] Offset: 0xD0A068
    // Get static field: static private System.Single <time>k__BackingField
    static float _get_$time$k__BackingField();
    // Set static field: static private System.Single <time>k__BackingField
    static void _set_$time$k__BackingField(float value);
    // [CompilerGeneratedAttribute] Offset: 0xD0A078
    // Get static field: static private System.Single <deltaTime>k__BackingField
    static float _get_$deltaTime$k__BackingField();
    // Set static field: static private System.Single <deltaTime>k__BackingField
    static void _set_$deltaTime$k__BackingField(float value);
    // [CompilerGeneratedAttribute] Offset: 0xD0A088
    // Get static field: static private System.Single <fixedDeltaTime>k__BackingField
    static float _get_$fixedDeltaTime$k__BackingField();
    // Set static field: static private System.Single <fixedDeltaTime>k__BackingField
    static void _set_$fixedDeltaTime$k__BackingField(float value);
    // [CompilerGeneratedAttribute] Offset: 0xD0A098
    // Get static field: static private System.Single <interpolationFactor>k__BackingField
    static float _get_$interpolationFactor$k__BackingField();
    // Set static field: static private System.Single <interpolationFactor>k__BackingField
    static void _set_$interpolationFactor$k__BackingField(float value);
    // static public System.Single get_time()
    // Offset: 0x229D204
    static float get_time();
    // static private System.Void set_time(System.Single value)
    // Offset: 0x229D254
    static void set_time(float value);
    // static public System.Single get_deltaTime()
    // Offset: 0x229D2B0
    static float get_deltaTime();
    // static private System.Void set_deltaTime(System.Single value)
    // Offset: 0x229D300
    static void set_deltaTime(float value);
    // static public System.Single get_fixedDeltaTime()
    // Offset: 0x229D35C
    static float get_fixedDeltaTime();
    // static private System.Void set_fixedDeltaTime(System.Single value)
    // Offset: 0x229D3AC
    static void set_fixedDeltaTime(float value);
    // static public System.Single get_interpolationFactor()
    // Offset: 0x229D408
    static float get_interpolationFactor();
    // static private System.Void set_interpolationFactor(System.Single value)
    // Offset: 0x229D458
    static void set_interpolationFactor(float value);
    // protected System.Void Awake()
    // Offset: 0x229D4B4
    void Awake();
    // protected System.Void FixedUpdate()
    // Offset: 0x229D564
    void FixedUpdate();
    // protected System.Void Update()
    // Offset: 0x229D614
    void Update();
    // public System.Void .ctor()
    // Offset: 0x229D7C8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TimeHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeHelper*, creationType>()));
    }
  }; // TimeHelper
  #pragma pack(pop)
  static check_size<sizeof(TimeHelper), 24 + sizeof(float)> __GlobalNamespace_TimeHelperSizeCheck;
  static_assert(sizeof(TimeHelper) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TimeHelper*, "", "TimeHelper");
