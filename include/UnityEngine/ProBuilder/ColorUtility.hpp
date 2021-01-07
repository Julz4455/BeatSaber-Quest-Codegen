// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: CIELabColor
  class CIELabColor;
  // Forward declaring type: XYZColor
  class XYZColor;
  // Forward declaring type: HSVColor
  class HSVColor;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  // Autogenerated type: UnityEngine.ProBuilder.ColorUtility
  // [] Offset: FFFFFFFF
  class ColorUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ColorUtility
    ColorUtility() noexcept {}
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ProBuilder.CIELabColor> ColorNameLookup
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::ProBuilder::CIELabColor*>* _get_ColorNameLookup();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.String,UnityEngine.ProBuilder.CIELabColor> ColorNameLookup
    static void _set_ColorNameLookup(System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::ProBuilder::CIELabColor*>* value);
    // static private System.Boolean approx(System.Single lhs, System.Single rhs)
    // Offset: 0x188B264
    static bool approx(float lhs, float rhs);
    // static public UnityEngine.Color GetColor(UnityEngine.Vector3 vec)
    // Offset: 0x188B2E8
    static UnityEngine::Color GetColor(UnityEngine::Vector3 vec);
    // static public UnityEngine.ProBuilder.XYZColor RGBToXYZ(UnityEngine.Color col)
    // Offset: 0x188B398
    static UnityEngine::ProBuilder::XYZColor* RGBToXYZ(UnityEngine::Color col);
    // static public UnityEngine.ProBuilder.XYZColor RGBToXYZ(System.Single r, System.Single g, System.Single b)
    // Offset: 0x188B41C
    static UnityEngine::ProBuilder::XYZColor* RGBToXYZ(float r, float g, float b);
    // static public UnityEngine.ProBuilder.CIELabColor XYZToCIE_Lab(UnityEngine.ProBuilder.XYZColor xyz)
    // Offset: 0x1889D90
    static UnityEngine::ProBuilder::CIELabColor* XYZToCIE_Lab(UnityEngine::ProBuilder::XYZColor* xyz);
    // static public System.Single DeltaE(UnityEngine.ProBuilder.CIELabColor lhs, UnityEngine.ProBuilder.CIELabColor rhs)
    // Offset: 0x188B660
    static float DeltaE(UnityEngine::ProBuilder::CIELabColor* lhs, UnityEngine::ProBuilder::CIELabColor* rhs);
    // static public UnityEngine.Color HSVtoRGB(UnityEngine.ProBuilder.HSVColor hsv)
    // Offset: 0x188B730
    static UnityEngine::Color HSVtoRGB(UnityEngine::ProBuilder::HSVColor* hsv);
    // static public UnityEngine.Color HSVtoRGB(System.Single h, System.Single s, System.Single v)
    // Offset: 0x188B7BC
    static UnityEngine::Color HSVtoRGB(float h, float s, float v);
    // static public UnityEngine.ProBuilder.HSVColor RGBtoHSV(UnityEngine.Color color)
    // Offset: 0x188B924
    static UnityEngine::ProBuilder::HSVColor* RGBtoHSV(UnityEngine::Color color);
    // static public System.String GetColorName(UnityEngine.Color InColor)
    // Offset: 0x188BAFC
    static ::Il2CppString* GetColorName(UnityEngine::Color InColor);
    // static private UnityEngine.ProBuilder.CIELabColor CIELabFromRGB(System.Single R, System.Single G, System.Single B, System.Single Scale)
    // Offset: 0x188BCD8
    static UnityEngine::ProBuilder::CIELabColor* CIELabFromRGB(float R, float G, float B, float Scale);
    // static private System.Void .cctor()
    // Offset: 0x188BD04
    static void _cctor();
  }; // UnityEngine.ProBuilder.ColorUtility
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ColorUtility*, "UnityEngine.ProBuilder", "ColorUtility");
#pragma pack(pop)
