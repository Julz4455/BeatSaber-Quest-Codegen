// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TextElementType
#include "TMPro/TextElementType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TextCore
namespace UnityEngine::TextCore {
  // Forward declaring type: Glyph
  class Glyph;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x28
  // Autogenerated type: TMPro.TMP_TextElement
  // [] Offset: FFFFFFFF
  class TMP_TextElement : public ::Il2CppObject {
    public:
    // protected TMPro.TextElementType m_ElementType
    // Size: 0x1
    // Offset: 0x10
    TMPro::TextElementType m_ElementType;
    // Field size check
    static_assert(sizeof(TMPro::TextElementType) == 0x1);
    // Padding between fields: m_ElementType and: m_Unicode
    char __padding0[0x3] = {};
    // private System.UInt32 m_Unicode
    // Size: 0x4
    // Offset: 0x14
    uint m_Unicode;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private UnityEngine.TextCore.Glyph m_Glyph
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::TextCore::Glyph* m_Glyph;
    // Field size check
    static_assert(sizeof(UnityEngine::TextCore::Glyph*) == 0x8);
    // private System.UInt32 m_GlyphIndex
    // Size: 0x4
    // Offset: 0x20
    uint m_GlyphIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Single m_Scale
    // Size: 0x4
    // Offset: 0x24
    float m_Scale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: TMP_TextElement
    TMP_TextElement(TMPro::TextElementType m_ElementType_ = {}, uint m_Unicode_ = {}, UnityEngine::TextCore::Glyph* m_Glyph_ = {}, uint m_GlyphIndex_ = {}, float m_Scale_ = {}) noexcept : m_ElementType{m_ElementType_}, m_Unicode{m_Unicode_}, m_Glyph{m_Glyph_}, m_GlyphIndex{m_GlyphIndex_}, m_Scale{m_Scale_} {}
    // public TMPro.TextElementType get_elementType()
    // Offset: 0x11331F8
    TMPro::TextElementType get_elementType();
    // public System.UInt32 get_unicode()
    // Offset: 0x1133200
    uint get_unicode();
    // public System.Void set_unicode(System.UInt32 value)
    // Offset: 0x1133208
    void set_unicode(uint value);
    // public UnityEngine.TextCore.Glyph get_glyph()
    // Offset: 0x1133210
    UnityEngine::TextCore::Glyph* get_glyph();
    // public System.Void set_glyph(UnityEngine.TextCore.Glyph value)
    // Offset: 0x1133218
    void set_glyph(UnityEngine::TextCore::Glyph* value);
    // public System.UInt32 get_glyphIndex()
    // Offset: 0x1133220
    uint get_glyphIndex();
    // public System.Void set_glyphIndex(System.UInt32 value)
    // Offset: 0x1133228
    void set_glyphIndex(uint value);
    // public System.Single get_scale()
    // Offset: 0x1133230
    float get_scale();
    // public System.Void set_scale(System.Single value)
    // Offset: 0x1133238
    void set_scale(float value);
    // public System.Void .ctor()
    // Offset: 0x1133240
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_TextElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("TMPro").WithContext("TMP_TextElement").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_TextElement*, creationType>()));
    }
  }; // TMPro.TMP_TextElement
  static check_size<sizeof(TMP_TextElement), 36 + sizeof(float)> __TMPro_TMP_TextElementSizeCheck;
  static_assert(sizeof(TMP_TextElement) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_TextElement*, "TMPro", "TMP_TextElement");
#pragma pack(pop)
