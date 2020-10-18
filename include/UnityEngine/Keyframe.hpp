// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Keyframe
  struct Keyframe : public System::ValueType {
    public:
    // private System.Single m_Time
    // Offset: 0x0
    float m_Time;
    // private System.Single m_Value
    // Offset: 0x4
    float m_Value;
    // private System.Single m_InTangent
    // Offset: 0x8
    float m_InTangent;
    // private System.Single m_OutTangent
    // Offset: 0xC
    float m_OutTangent;
    // private System.Int32 m_WeightedMode
    // Offset: 0x10
    int m_WeightedMode;
    // private System.Single m_InWeight
    // Offset: 0x14
    float m_InWeight;
    // private System.Single m_OutWeight
    // Offset: 0x18
    float m_OutWeight;
    // Creating value type constructor for type: Keyframe
    constexpr Keyframe(float m_Time_ = {}, float m_Value_ = {}, float m_InTangent_ = {}, float m_OutTangent_ = {}, int m_WeightedMode_ = {}, float m_InWeight_ = {}, float m_OutWeight_ = {}) noexcept : m_Time{m_Time_}, m_Value{m_Value_}, m_InTangent{m_InTangent_}, m_OutTangent{m_OutTangent_}, m_WeightedMode{m_WeightedMode_}, m_InWeight{m_InWeight_}, m_OutWeight{m_OutWeight_} {}
    // public System.Void .ctor(System.Single time, System.Single value)
    // Offset: 0xDC200C
    Keyframe(float time, float value);
    // public System.Void .ctor(System.Single time, System.Single value, System.Single inTangent, System.Single outTangent)
    // Offset: 0xDC201C
    Keyframe(float time, float value, float inTangent, float outTangent);
    // public System.Single get_time()
    // Offset: 0xDC2030
    float get_time();
    // public System.Void set_time(System.Single value)
    // Offset: 0xDC2038
    void set_time(float value);
    // public System.Single get_value()
    // Offset: 0xDC2040
    float get_value();
    // public System.Void set_value(System.Single value)
    // Offset: 0xDC2048
    void set_value(float value);
    // public System.Single get_inTangent()
    // Offset: 0xDC2050
    float get_inTangent();
    // public System.Void set_inTangent(System.Single value)
    // Offset: 0xDC2058
    void set_inTangent(float value);
    // public System.Single get_outTangent()
    // Offset: 0xDC2060
    float get_outTangent();
    // public System.Void set_outTangent(System.Single value)
    // Offset: 0xDC2068
    void set_outTangent(float value);
  }; // UnityEngine.Keyframe
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Keyframe, "UnityEngine", "Keyframe");
#pragma pack(pop)
