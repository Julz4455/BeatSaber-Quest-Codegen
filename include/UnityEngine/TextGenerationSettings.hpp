// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.FontStyle
#include "UnityEngine/FontStyle.hpp"
// Including type: UnityEngine.TextAnchor
#include "UnityEngine/TextAnchor.hpp"
// Including type: UnityEngine.VerticalWrapMode
#include "UnityEngine/VerticalWrapMode.hpp"
// Including type: UnityEngine.HorizontalWrapMode
#include "UnityEngine/HorizontalWrapMode.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Font
  class Font;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x59
  // Autogenerated type: UnityEngine.TextGenerationSettings
  // [] Offset: FFFFFFFF
  struct TextGenerationSettings/*, public System::ValueType*/ {
    public:
    // public UnityEngine.Font font
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::Font* font;
    // Field size check
    static_assert(sizeof(UnityEngine::Font*) == 0x8);
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x8
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public System.Int32 fontSize
    // Size: 0x4
    // Offset: 0x18
    int fontSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single lineSpacing
    // Size: 0x4
    // Offset: 0x1C
    float lineSpacing;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean richText
    // Size: 0x1
    // Offset: 0x20
    bool richText;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: richText and: scaleFactor
    char __padding4[0x3] = {};
    // public System.Single scaleFactor
    // Size: 0x4
    // Offset: 0x24
    float scaleFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.FontStyle fontStyle
    // Size: 0x4
    // Offset: 0x28
    UnityEngine::FontStyle fontStyle;
    // Field size check
    static_assert(sizeof(UnityEngine::FontStyle) == 0x4);
    // public UnityEngine.TextAnchor textAnchor
    // Size: 0x4
    // Offset: 0x2C
    UnityEngine::TextAnchor textAnchor;
    // Field size check
    static_assert(sizeof(UnityEngine::TextAnchor) == 0x4);
    // public System.Boolean alignByGeometry
    // Size: 0x1
    // Offset: 0x30
    bool alignByGeometry;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean resizeTextForBestFit
    // Size: 0x1
    // Offset: 0x31
    bool resizeTextForBestFit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: resizeTextForBestFit and: resizeTextMinSize
    char __padding9[0x2] = {};
    // public System.Int32 resizeTextMinSize
    // Size: 0x4
    // Offset: 0x34
    int resizeTextMinSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 resizeTextMaxSize
    // Size: 0x4
    // Offset: 0x38
    int resizeTextMaxSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean updateBounds
    // Size: 0x1
    // Offset: 0x3C
    bool updateBounds;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: updateBounds and: verticalOverflow
    char __padding12[0x3] = {};
    // public UnityEngine.VerticalWrapMode verticalOverflow
    // Size: 0x4
    // Offset: 0x40
    UnityEngine::VerticalWrapMode verticalOverflow;
    // Field size check
    static_assert(sizeof(UnityEngine::VerticalWrapMode) == 0x4);
    // public UnityEngine.HorizontalWrapMode horizontalOverflow
    // Size: 0x4
    // Offset: 0x44
    UnityEngine::HorizontalWrapMode horizontalOverflow;
    // Field size check
    static_assert(sizeof(UnityEngine::HorizontalWrapMode) == 0x4);
    // public UnityEngine.Vector2 generationExtents
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::Vector2 generationExtents;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 pivot
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Vector2 pivot;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // public System.Boolean generateOutOfBounds
    // Size: 0x1
    // Offset: 0x58
    bool generateOutOfBounds;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TextGenerationSettings
    constexpr TextGenerationSettings(UnityEngine::Font* font_ = {}, UnityEngine::Color color_ = {}, int fontSize_ = {}, float lineSpacing_ = {}, bool richText_ = {}, float scaleFactor_ = {}, UnityEngine::FontStyle fontStyle_ = {}, UnityEngine::TextAnchor textAnchor_ = {}, bool alignByGeometry_ = {}, bool resizeTextForBestFit_ = {}, int resizeTextMinSize_ = {}, int resizeTextMaxSize_ = {}, bool updateBounds_ = {}, UnityEngine::VerticalWrapMode verticalOverflow_ = {}, UnityEngine::HorizontalWrapMode horizontalOverflow_ = {}, UnityEngine::Vector2 generationExtents_ = {}, UnityEngine::Vector2 pivot_ = {}, bool generateOutOfBounds_ = {}) noexcept : font{font_}, color{color_}, fontSize{fontSize_}, lineSpacing{lineSpacing_}, richText{richText_}, scaleFactor{scaleFactor_}, fontStyle{fontStyle_}, textAnchor{textAnchor_}, alignByGeometry{alignByGeometry_}, resizeTextForBestFit{resizeTextForBestFit_}, resizeTextMinSize{resizeTextMinSize_}, resizeTextMaxSize{resizeTextMaxSize_}, updateBounds{updateBounds_}, verticalOverflow{verticalOverflow_}, horizontalOverflow{horizontalOverflow_}, generationExtents{generationExtents_}, pivot{pivot_}, generateOutOfBounds{generateOutOfBounds_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // private System.Boolean CompareColors(UnityEngine.Color left, UnityEngine.Color right)
    // Offset: 0xCB8A20
    bool CompareColors(UnityEngine::Color left, UnityEngine::Color right);
    // private System.Boolean CompareVector2(UnityEngine.Vector2 left, UnityEngine.Vector2 right)
    // Offset: 0xCB8A24
    bool CompareVector2(UnityEngine::Vector2 left, UnityEngine::Vector2 right);
    // public System.Boolean Equals(UnityEngine.TextGenerationSettings other)
    // Offset: 0xCB8A28
    bool Equals(UnityEngine::TextGenerationSettings other);
  }; // UnityEngine.TextGenerationSettings
  static check_size<sizeof(TextGenerationSettings), 88 + sizeof(bool)> __UnityEngine_TextGenerationSettingsSizeCheck;
  static_assert(sizeof(TextGenerationSettings) == 0x59);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextGenerationSettings, "UnityEngine", "TextGenerationSettings");
#pragma pack(pop)
