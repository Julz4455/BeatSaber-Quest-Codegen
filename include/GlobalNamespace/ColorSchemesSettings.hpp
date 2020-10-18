// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorScheme
  class ColorScheme;
  // Forward declaring type: ColorSchemeSO
  class ColorSchemeSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ColorSchemesSettings
  class ColorSchemesSettings : public ::Il2CppObject {
    public:
    // public System.Boolean overrideDefaultColors
    // Offset: 0x10
    bool overrideDefaultColors;
    // private System.Collections.Generic.List`1<ColorScheme> _colorSchemesList
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::ColorScheme*>* colorSchemesList;
    // private System.Collections.Generic.Dictionary`2<System.String,ColorScheme> _colorSchemesDict
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::ColorScheme*>* colorSchemesDict;
    // private System.String _selectedColorSchemeId
    // Offset: 0x28
    ::Il2CppString* selectedColorSchemeId;
    // public System.Void set_selectedColorSchemeId(System.String value)
    // Offset: 0xF25FA8
    void set_selectedColorSchemeId(::Il2CppString* value);
    // public System.String get_selectedColorSchemeId()
    // Offset: 0xF25FB0
    ::Il2CppString* get_selectedColorSchemeId();
    // public System.Void .ctor(ColorScheme[] colorSchemes)
    // Offset: 0xF25FB8
    static ColorSchemesSettings* New_ctor(::Array<GlobalNamespace::ColorScheme*>* colorSchemes);
    // public System.Void .ctor(ColorSchemeSO[] colorSchemeSOs)
    // Offset: 0xF26114
    static ColorSchemesSettings* New_ctor(::Array<GlobalNamespace::ColorSchemeSO*>* colorSchemeSOs);
    // static private ColorScheme[] ConvertColorSchemeSOs(ColorSchemeSO[] colorSchemeSOs)
    // Offset: 0xF26140
    static ::Array<GlobalNamespace::ColorScheme*>* ConvertColorSchemeSOs(::Array<GlobalNamespace::ColorSchemeSO*>* colorSchemeSOs);
    // public System.Int32 GetNumberOfColorSchemes()
    // Offset: 0xF26270
    int GetNumberOfColorSchemes();
    // public ColorScheme GetColorSchemeForIdx(System.Int32 idx)
    // Offset: 0xF262C0
    GlobalNamespace::ColorScheme* GetColorSchemeForIdx(int idx);
    // public ColorScheme GetColorSchemeForId(System.String id)
    // Offset: 0xF26338
    GlobalNamespace::ColorScheme* GetColorSchemeForId(::Il2CppString* id);
    // public System.Void SetColorSchemeForId(ColorScheme colorScheme)
    // Offset: 0xF263A0
    void SetColorSchemeForId(GlobalNamespace::ColorScheme* colorScheme);
    // public ColorScheme GetSelectedColorScheme()
    // Offset: 0xF2649C
    GlobalNamespace::ColorScheme* GetSelectedColorScheme();
    // public System.Int32 GetSelectedColorSchemeIdx()
    // Offset: 0xF264F8
    int GetSelectedColorSchemeIdx();
    // public ColorScheme GetOverrideColorScheme()
    // Offset: 0xF1C52C
    GlobalNamespace::ColorScheme* GetOverrideColorScheme();
  }; // ColorSchemesSettings
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemesSettings*, "", "ColorSchemesSettings");
#pragma pack(pop)
