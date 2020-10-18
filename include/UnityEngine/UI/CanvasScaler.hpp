// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Canvas
  class Canvas;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Skipping declaration: ScaleMode because it is already included!
  // Skipping declaration: ScreenMatchMode because it is already included!
  // Skipping declaration: Unit because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.CanvasScaler
  class CanvasScaler : public UnityEngine::EventSystems::UIBehaviour {
    public:
    // Nested type: UnityEngine::UI::CanvasScaler::ScaleMode
    struct ScaleMode;
    // Nested type: UnityEngine::UI::CanvasScaler::ScreenMatchMode
    struct ScreenMatchMode;
    // Nested type: UnityEngine::UI::CanvasScaler::Unit
    struct Unit;
    // Autogenerated type: UnityEngine.UI.CanvasScaler/ScaleMode
    struct ScaleMode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: ScaleMode
      constexpr ScaleMode(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.CanvasScaler/ScaleMode ConstantPixelSize
      static constexpr const int ConstantPixelSize = 0;
      // Get static field: static public UnityEngine.UI.CanvasScaler/ScaleMode ConstantPixelSize
      static UnityEngine::UI::CanvasScaler::ScaleMode _get_ConstantPixelSize();
      // Set static field: static public UnityEngine.UI.CanvasScaler/ScaleMode ConstantPixelSize
      static void _set_ConstantPixelSize(UnityEngine::UI::CanvasScaler::ScaleMode value);
      // static field const value: static public UnityEngine.UI.CanvasScaler/ScaleMode ScaleWithScreenSize
      static constexpr const int ScaleWithScreenSize = 1;
      // Get static field: static public UnityEngine.UI.CanvasScaler/ScaleMode ScaleWithScreenSize
      static UnityEngine::UI::CanvasScaler::ScaleMode _get_ScaleWithScreenSize();
      // Set static field: static public UnityEngine.UI.CanvasScaler/ScaleMode ScaleWithScreenSize
      static void _set_ScaleWithScreenSize(UnityEngine::UI::CanvasScaler::ScaleMode value);
      // static field const value: static public UnityEngine.UI.CanvasScaler/ScaleMode ConstantPhysicalSize
      static constexpr const int ConstantPhysicalSize = 2;
      // Get static field: static public UnityEngine.UI.CanvasScaler/ScaleMode ConstantPhysicalSize
      static UnityEngine::UI::CanvasScaler::ScaleMode _get_ConstantPhysicalSize();
      // Set static field: static public UnityEngine.UI.CanvasScaler/ScaleMode ConstantPhysicalSize
      static void _set_ConstantPhysicalSize(UnityEngine::UI::CanvasScaler::ScaleMode value);
    }; // UnityEngine.UI.CanvasScaler/ScaleMode
    // Autogenerated type: UnityEngine.UI.CanvasScaler/ScreenMatchMode
    struct ScreenMatchMode : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: ScreenMatchMode
      constexpr ScreenMatchMode(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.CanvasScaler/ScreenMatchMode MatchWidthOrHeight
      static constexpr const int MatchWidthOrHeight = 0;
      // Get static field: static public UnityEngine.UI.CanvasScaler/ScreenMatchMode MatchWidthOrHeight
      static UnityEngine::UI::CanvasScaler::ScreenMatchMode _get_MatchWidthOrHeight();
      // Set static field: static public UnityEngine.UI.CanvasScaler/ScreenMatchMode MatchWidthOrHeight
      static void _set_MatchWidthOrHeight(UnityEngine::UI::CanvasScaler::ScreenMatchMode value);
      // static field const value: static public UnityEngine.UI.CanvasScaler/ScreenMatchMode Expand
      static constexpr const int Expand = 1;
      // Get static field: static public UnityEngine.UI.CanvasScaler/ScreenMatchMode Expand
      static UnityEngine::UI::CanvasScaler::ScreenMatchMode _get_Expand();
      // Set static field: static public UnityEngine.UI.CanvasScaler/ScreenMatchMode Expand
      static void _set_Expand(UnityEngine::UI::CanvasScaler::ScreenMatchMode value);
      // static field const value: static public UnityEngine.UI.CanvasScaler/ScreenMatchMode Shrink
      static constexpr const int Shrink = 2;
      // Get static field: static public UnityEngine.UI.CanvasScaler/ScreenMatchMode Shrink
      static UnityEngine::UI::CanvasScaler::ScreenMatchMode _get_Shrink();
      // Set static field: static public UnityEngine.UI.CanvasScaler/ScreenMatchMode Shrink
      static void _set_Shrink(UnityEngine::UI::CanvasScaler::ScreenMatchMode value);
    }; // UnityEngine.UI.CanvasScaler/ScreenMatchMode
    // Autogenerated type: UnityEngine.UI.CanvasScaler/Unit
    struct Unit : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: Unit
      constexpr Unit(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.UI.CanvasScaler/Unit Centimeters
      static constexpr const int Centimeters = 0;
      // Get static field: static public UnityEngine.UI.CanvasScaler/Unit Centimeters
      static UnityEngine::UI::CanvasScaler::Unit _get_Centimeters();
      // Set static field: static public UnityEngine.UI.CanvasScaler/Unit Centimeters
      static void _set_Centimeters(UnityEngine::UI::CanvasScaler::Unit value);
      // static field const value: static public UnityEngine.UI.CanvasScaler/Unit Millimeters
      static constexpr const int Millimeters = 1;
      // Get static field: static public UnityEngine.UI.CanvasScaler/Unit Millimeters
      static UnityEngine::UI::CanvasScaler::Unit _get_Millimeters();
      // Set static field: static public UnityEngine.UI.CanvasScaler/Unit Millimeters
      static void _set_Millimeters(UnityEngine::UI::CanvasScaler::Unit value);
      // static field const value: static public UnityEngine.UI.CanvasScaler/Unit Inches
      static constexpr const int Inches = 2;
      // Get static field: static public UnityEngine.UI.CanvasScaler/Unit Inches
      static UnityEngine::UI::CanvasScaler::Unit _get_Inches();
      // Set static field: static public UnityEngine.UI.CanvasScaler/Unit Inches
      static void _set_Inches(UnityEngine::UI::CanvasScaler::Unit value);
      // static field const value: static public UnityEngine.UI.CanvasScaler/Unit Points
      static constexpr const int Points = 3;
      // Get static field: static public UnityEngine.UI.CanvasScaler/Unit Points
      static UnityEngine::UI::CanvasScaler::Unit _get_Points();
      // Set static field: static public UnityEngine.UI.CanvasScaler/Unit Points
      static void _set_Points(UnityEngine::UI::CanvasScaler::Unit value);
      // static field const value: static public UnityEngine.UI.CanvasScaler/Unit Picas
      static constexpr const int Picas = 4;
      // Get static field: static public UnityEngine.UI.CanvasScaler/Unit Picas
      static UnityEngine::UI::CanvasScaler::Unit _get_Picas();
      // Set static field: static public UnityEngine.UI.CanvasScaler/Unit Picas
      static void _set_Picas(UnityEngine::UI::CanvasScaler::Unit value);
    }; // UnityEngine.UI.CanvasScaler/Unit
    // private UnityEngine.UI.CanvasScaler/ScaleMode m_UiScaleMode
    // Offset: 0x18
    UnityEngine::UI::CanvasScaler::ScaleMode m_UiScaleMode;
    // protected System.Single m_ReferencePixelsPerUnit
    // Offset: 0x1C
    float m_ReferencePixelsPerUnit;
    // protected System.Single m_ScaleFactor
    // Offset: 0x20
    float m_ScaleFactor;
    // protected UnityEngine.Vector2 m_ReferenceResolution
    // Offset: 0x24
    UnityEngine::Vector2 m_ReferenceResolution;
    // protected UnityEngine.UI.CanvasScaler/ScreenMatchMode m_ScreenMatchMode
    // Offset: 0x2C
    UnityEngine::UI::CanvasScaler::ScreenMatchMode m_ScreenMatchMode;
    // protected System.Single m_MatchWidthOrHeight
    // Offset: 0x30
    float m_MatchWidthOrHeight;
    // protected UnityEngine.UI.CanvasScaler/Unit m_PhysicalUnit
    // Offset: 0x34
    UnityEngine::UI::CanvasScaler::Unit m_PhysicalUnit;
    // protected System.Single m_FallbackScreenDPI
    // Offset: 0x38
    float m_FallbackScreenDPI;
    // protected System.Single m_DefaultSpriteDPI
    // Offset: 0x3C
    float m_DefaultSpriteDPI;
    // protected System.Single m_DynamicPixelsPerUnit
    // Offset: 0x40
    float m_DynamicPixelsPerUnit;
    // private UnityEngine.Canvas m_Canvas
    // Offset: 0x48
    UnityEngine::Canvas* m_Canvas;
    // private System.Single m_PrevScaleFactor
    // Offset: 0x50
    float m_PrevScaleFactor;
    // private System.Single m_PrevReferencePixelsPerUnit
    // Offset: 0x54
    float m_PrevReferencePixelsPerUnit;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kLogBase
    static constexpr const float kLogBase = 2;
    // Get static field: static private System.Single kLogBase
    static float _get_kLogBase();
    // Set static field: static private System.Single kLogBase
    static void _set_kLogBase(float value);
    // public UnityEngine.UI.CanvasScaler/ScaleMode get_uiScaleMode()
    // Offset: 0x1285970
    UnityEngine::UI::CanvasScaler::ScaleMode get_uiScaleMode();
    // public System.Void set_uiScaleMode(UnityEngine.UI.CanvasScaler/ScaleMode value)
    // Offset: 0x1285978
    void set_uiScaleMode(UnityEngine::UI::CanvasScaler::ScaleMode value);
    // public System.Single get_referencePixelsPerUnit()
    // Offset: 0x1285980
    float get_referencePixelsPerUnit();
    // public System.Void set_referencePixelsPerUnit(System.Single value)
    // Offset: 0x1285988
    void set_referencePixelsPerUnit(float value);
    // public System.Single get_scaleFactor()
    // Offset: 0x1285990
    float get_scaleFactor();
    // public System.Void set_scaleFactor(System.Single value)
    // Offset: 0x1285998
    void set_scaleFactor(float value);
    // public UnityEngine.Vector2 get_referenceResolution()
    // Offset: 0x1285A1C
    UnityEngine::Vector2 get_referenceResolution();
    // public System.Void set_referenceResolution(UnityEngine.Vector2 value)
    // Offset: 0x1285A24
    void set_referenceResolution(UnityEngine::Vector2 value);
    // public UnityEngine.UI.CanvasScaler/ScreenMatchMode get_screenMatchMode()
    // Offset: 0x1285B24
    UnityEngine::UI::CanvasScaler::ScreenMatchMode get_screenMatchMode();
    // public System.Void set_screenMatchMode(UnityEngine.UI.CanvasScaler/ScreenMatchMode value)
    // Offset: 0x1285B2C
    void set_screenMatchMode(UnityEngine::UI::CanvasScaler::ScreenMatchMode value);
    // public System.Single get_matchWidthOrHeight()
    // Offset: 0x1285B34
    float get_matchWidthOrHeight();
    // public System.Void set_matchWidthOrHeight(System.Single value)
    // Offset: 0x1285B3C
    void set_matchWidthOrHeight(float value);
    // public UnityEngine.UI.CanvasScaler/Unit get_physicalUnit()
    // Offset: 0x1285B44
    UnityEngine::UI::CanvasScaler::Unit get_physicalUnit();
    // public System.Void set_physicalUnit(UnityEngine.UI.CanvasScaler/Unit value)
    // Offset: 0x1285B4C
    void set_physicalUnit(UnityEngine::UI::CanvasScaler::Unit value);
    // public System.Single get_fallbackScreenDPI()
    // Offset: 0x1285B54
    float get_fallbackScreenDPI();
    // public System.Void set_fallbackScreenDPI(System.Single value)
    // Offset: 0x1285B5C
    void set_fallbackScreenDPI(float value);
    // public System.Single get_defaultSpriteDPI()
    // Offset: 0x1285B64
    float get_defaultSpriteDPI();
    // public System.Void set_defaultSpriteDPI(System.Single value)
    // Offset: 0x1285B6C
    void set_defaultSpriteDPI(float value);
    // public System.Single get_dynamicPixelsPerUnit()
    // Offset: 0x1285BEC
    float get_dynamicPixelsPerUnit();
    // public System.Void set_dynamicPixelsPerUnit(System.Single value)
    // Offset: 0x1285BF4
    void set_dynamicPixelsPerUnit(float value);
    // protected System.Void Update()
    // Offset: 0x1285DBC
    void Update();
    // protected System.Void Handle()
    // Offset: 0x1285DCC
    void Handle();
    // protected System.Void HandleWorldCanvas()
    // Offset: 0x1285ED8
    void HandleWorldCanvas();
    // protected System.Void HandleConstantPixelSize()
    // Offset: 0x1285F04
    void HandleConstantPixelSize();
    // protected System.Void HandleScaleWithScreenSize()
    // Offset: 0x1285F30
    void HandleScaleWithScreenSize();
    // protected System.Void HandleConstantPhysicalSize()
    // Offset: 0x12861A0
    void HandleConstantPhysicalSize();
    // protected System.Void SetScaleFactor(System.Single scaleFactor)
    // Offset: 0x1285D24
    void SetScaleFactor(float scaleFactor);
    // protected System.Void SetReferencePixelsPerUnit(System.Single referencePixelsPerUnit)
    // Offset: 0x1285D70
    void SetReferencePixelsPerUnit(float referencePixelsPerUnit);
    // protected System.Void .ctor()
    // Offset: 0x1285BFC
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CanvasScaler* New_ctor();
    // protected override System.Void OnEnable()
    // Offset: 0x1285C80
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x1285CF4
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
  }; // UnityEngine.UI.CanvasScaler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CanvasScaler*, "UnityEngine.UI", "CanvasScaler");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CanvasScaler::ScaleMode, "UnityEngine.UI", "CanvasScaler/ScaleMode");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CanvasScaler::ScreenMatchMode, "UnityEngine.UI", "CanvasScaler/ScreenMatchMode");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CanvasScaler::Unit, "UnityEngine.UI", "CanvasScaler/Unit");
#pragma pack(pop)
