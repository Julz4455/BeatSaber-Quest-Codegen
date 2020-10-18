// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: GlyphValueRecord_Legacy
  struct GlyphValueRecord_Legacy;
}
// Forward declaring namespace: UnityEngine::TextCore::LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Forward declaring type: GlyphValueRecord
  struct GlyphValueRecord;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_GlyphValueRecord
  struct TMP_GlyphValueRecord : public System::ValueType {
    public:
    // private System.Single m_XPlacement
    // Offset: 0x0
    float m_XPlacement;
    // private System.Single m_YPlacement
    // Offset: 0x4
    float m_YPlacement;
    // private System.Single m_XAdvance
    // Offset: 0x8
    float m_XAdvance;
    // private System.Single m_YAdvance
    // Offset: 0xC
    float m_YAdvance;
    // Creating value type constructor for type: TMP_GlyphValueRecord
    constexpr TMP_GlyphValueRecord(float m_XPlacement_ = {}, float m_YPlacement_ = {}, float m_XAdvance_ = {}, float m_YAdvance_ = {}) noexcept : m_XPlacement{m_XPlacement_}, m_YPlacement{m_YPlacement_}, m_XAdvance{m_XAdvance_}, m_YAdvance{m_YAdvance_} {}
    // public System.Single get_xPlacement()
    // Offset: 0xDA1CAC
    float get_xPlacement();
    // public System.Void set_xPlacement(System.Single value)
    // Offset: 0xDA1CB4
    void set_xPlacement(float value);
    // public System.Single get_yPlacement()
    // Offset: 0xDA1CBC
    float get_yPlacement();
    // public System.Void set_yPlacement(System.Single value)
    // Offset: 0xDA1CC4
    void set_yPlacement(float value);
    // public System.Single get_xAdvance()
    // Offset: 0xDA1CCC
    float get_xAdvance();
    // public System.Void set_xAdvance(System.Single value)
    // Offset: 0xDA1CD4
    void set_xAdvance(float value);
    // public System.Single get_yAdvance()
    // Offset: 0xDA1CDC
    float get_yAdvance();
    // public System.Void set_yAdvance(System.Single value)
    // Offset: 0xDA1CE4
    void set_yAdvance(float value);
    // public System.Void .ctor(System.Single xPlacement, System.Single yPlacement, System.Single xAdvance, System.Single yAdvance)
    // Offset: 0xDA1CEC
    // ABORTED: conflicts with another method.  TMP_GlyphValueRecord(float xPlacement, float yPlacement, float xAdvance, float yAdvance);
    // System.Void .ctor(TMPro.GlyphValueRecord_Legacy valueRecord)
    // Offset: 0xDA1CF8
    TMP_GlyphValueRecord(TMPro::GlyphValueRecord_Legacy valueRecord);
    // System.Void .ctor(UnityEngine.TextCore.LowLevel.GlyphValueRecord valueRecord)
    // Offset: 0xDA1D04
    TMP_GlyphValueRecord(UnityEngine::TextCore::LowLevel::GlyphValueRecord valueRecord);
  }; // TMPro.TMP_GlyphValueRecord
  // static public TMPro.TMP_GlyphValueRecord op_Addition(TMPro.TMP_GlyphValueRecord a, TMPro.TMP_GlyphValueRecord b)
  // Offset: 0xF4F0E8
  TMPro::TMP_GlyphValueRecord operator+(const TMPro::TMP_GlyphValueRecord& a, const TMPro::TMP_GlyphValueRecord& b);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_GlyphValueRecord, "TMPro", "TMP_GlyphValueRecord");
#pragma pack(pop)
