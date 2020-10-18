// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUILayoutOption
  class GUILayoutOption;
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: GUIContent
  class GUIContent;
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.GUILayout
  class GUILayout : public ::Il2CppObject {
    public:
    // static public System.Void Label(System.String text, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1909E60
    static void Label(::Il2CppString* text, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Void Label(System.String text, params UnityEngine.GUILayoutOption[] options)
    static void Label(::Il2CppString* text, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Void Label(System.String text, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static void Label(::Il2CppString* text, TParams&&... options) {
      Label(text, {options...});
    }
    // static public System.Void Label(System.String text, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1909FF4
    static void Label(::Il2CppString* text, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Void Label(System.String text, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    static void Label(::Il2CppString* text, UnityEngine::GUIStyle* style, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Void Label(System.String text, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static void Label(::Il2CppString* text, UnityEngine::GUIStyle* style, TParams&&... options) {
      Label(text, style, {options...});
    }
    // static private System.Void DoLabel(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x1909F1C
    static void DoLabel(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // static public System.Void Box(UnityEngine.Texture image, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x190A0F0
    static void Box(UnityEngine::Texture* image, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Void Box(UnityEngine.Texture image, params UnityEngine.GUILayoutOption[] options)
    static void Box(UnityEngine::Texture* image, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Void Box(UnityEngine.Texture image, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static void Box(UnityEngine::Texture* image, TParams&&... options) {
      Box(image, {options...});
    }
    // static private System.Void DoBox(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x190A1AC
    static void DoBox(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // static public System.Boolean Button(System.String text, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x190A284
    static bool Button(::Il2CppString* text, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Boolean Button(System.String text, params UnityEngine.GUILayoutOption[] options)
    static bool Button(::Il2CppString* text, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Boolean Button(System.String text, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static bool Button(::Il2CppString* text, TParams&&... options) {
      return Button(text, {options...});
    }
    // static private System.Boolean DoButton(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x190A340
    static bool DoButton(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // static public System.String TextField(System.String text, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x190A418
    static ::Il2CppString* TextField(::Il2CppString* text, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.String TextField(System.String text, params UnityEngine.GUILayoutOption[] options)
    static ::Il2CppString* TextField(::Il2CppString* text, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.String TextField(System.String text, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static ::Il2CppString* TextField(::Il2CppString* text, TParams&&... options) {
      return TextField(text, {options...});
    }
    // static public System.String TextArea(System.String text, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x190A700
    static ::Il2CppString* TextArea(::Il2CppString* text, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.String TextArea(System.String text, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    static ::Il2CppString* TextArea(::Il2CppString* text, UnityEngine::GUIStyle* style, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.String TextArea(System.String text, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static ::Il2CppString* TextArea(::Il2CppString* text, UnityEngine::GUIStyle* style, TParams&&... options) {
      return TextArea(text, style, {options...});
    }
    // static private System.String DoTextField(System.String text, System.Int32 maxLength, System.Boolean multiline, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x190A4AC
    static ::Il2CppString* DoTextField(::Il2CppString* text, int maxLength, bool multiline, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // static public System.Boolean Toggle(System.Boolean value, System.String text, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x190A720
    static bool Toggle(bool value, ::Il2CppString* text, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Boolean Toggle(System.Boolean value, System.String text, params UnityEngine.GUILayoutOption[] options)
    static bool Toggle(bool value, ::Il2CppString* text, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Boolean Toggle(System.Boolean value, System.String text, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static bool Toggle(bool value, ::Il2CppString* text, TParams&&... options) {
      return Toggle(value, text, {options...});
    }
    // static private System.Boolean DoToggle(System.Boolean value, UnityEngine.GUIContent content, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x190A7E4
    static bool DoToggle(bool value, UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // static public System.Single HorizontalSlider(System.Single value, System.Single leftValue, System.Single rightValue, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x190A8CC
    static float HorizontalSlider(float value, float leftValue, float rightValue, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Single HorizontalSlider(System.Single value, System.Single leftValue, System.Single rightValue, params UnityEngine.GUILayoutOption[] options)
    static float HorizontalSlider(float value, float leftValue, float rightValue, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Single HorizontalSlider(System.Single value, System.Single leftValue, System.Single rightValue, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static float HorizontalSlider(float value, float leftValue, float rightValue, TParams&&... options) {
      return HorizontalSlider(value, leftValue, rightValue, {options...});
    }
    // static private System.Single DoHorizontalSlider(System.Single value, System.Single leftValue, System.Single rightValue, UnityEngine.GUIStyle slider, UnityEngine.GUIStyle thumb, UnityEngine.GUILayoutOption[] options)
    // Offset: 0x190A988
    static float DoHorizontalSlider(float value, float leftValue, float rightValue, UnityEngine::GUIStyle* slider, UnityEngine::GUIStyle* thumb, ::Array<UnityEngine::GUILayoutOption*>* options);
    // static public System.Void Space(System.Single pixels)
    // Offset: 0x190AAC0
    static void Space(float pixels);
    // static public System.Void FlexibleSpace()
    // Offset: 0x190AEF8
    static void FlexibleSpace();
    // static public System.Void BeginHorizontal(params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x190B280
    static void BeginHorizontal(::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Void BeginHorizontal(params UnityEngine.GUILayoutOption[] options)
    static void BeginHorizontal(std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Void BeginHorizontal(params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static void BeginHorizontal(TParams&&... options) {
      BeginHorizontal({options...});
    }
    // static public System.Void BeginHorizontal(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x190B320
    static void BeginHorizontal(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Void BeginHorizontal(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    static void BeginHorizontal(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Void BeginHorizontal(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static void BeginHorizontal(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, TParams&&... options) {
      BeginHorizontal(content, style, {options...});
    }
    // static public System.Void EndHorizontal()
    // Offset: 0x190B798
    static void EndHorizontal();
    // static public System.Void BeginVertical(params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x190BA04
    static void BeginVertical(::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Void BeginVertical(params UnityEngine.GUILayoutOption[] options)
    static void BeginVertical(std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Void BeginVertical(params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static void BeginVertical(TParams&&... options) {
      BeginVertical({options...});
    }
    // static public System.Void BeginVertical(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x190BAA4
    static void BeginVertical(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: System.Void BeginVertical(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    static void BeginVertical(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: System.Void BeginVertical(UnityEngine.GUIContent content, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static void BeginVertical(UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style, TParams&&... options) {
      BeginVertical(content, style, {options...});
    }
    // static public System.Void EndVertical()
    // Offset: 0x190BC40
    static void EndVertical();
    // static public System.Void BeginArea(UnityEngine.Rect screenRect)
    // Offset: 0x190BC9C
    static void BeginArea(UnityEngine::Rect screenRect);
    // static public System.Void BeginArea(UnityEngine.Rect screenRect, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x190BD64
    static void BeginArea(UnityEngine::Rect screenRect, UnityEngine::GUIContent* content, UnityEngine::GUIStyle* style);
    // static public System.Void EndArea()
    // Offset: 0x190C23C
    static void EndArea();
    // static public UnityEngine.Vector2 BeginScrollView(UnityEngine.Vector2 scrollPosition, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x190C3DC
    static UnityEngine::Vector2 BeginScrollView(UnityEngine::Vector2 scrollPosition, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: UnityEngine.Vector2 BeginScrollView(UnityEngine.Vector2 scrollPosition, params UnityEngine.GUILayoutOption[] options)
    static UnityEngine::Vector2 BeginScrollView(UnityEngine::Vector2 scrollPosition, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: UnityEngine.Vector2 BeginScrollView(UnityEngine.Vector2 scrollPosition, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static UnityEngine::Vector2 BeginScrollView(UnityEngine::Vector2 scrollPosition, TParams&&... options) {
      return BeginScrollView(scrollPosition, {options...});
    }
    // static public UnityEngine.Vector2 BeginScrollView(UnityEngine.Vector2 scrollPosition, System.Boolean alwaysShowHorizontal, System.Boolean alwaysShowVertical, UnityEngine.GUIStyle horizontalScrollbar, UnityEngine.GUIStyle verticalScrollbar, UnityEngine.GUIStyle background, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x190C4B0
    static UnityEngine::Vector2 BeginScrollView(UnityEngine::Vector2 scrollPosition, bool alwaysShowHorizontal, bool alwaysShowVertical, UnityEngine::GUIStyle* horizontalScrollbar, UnityEngine::GUIStyle* verticalScrollbar, UnityEngine::GUIStyle* background, ::Array<UnityEngine::GUILayoutOption*>* options);
    // Creating initializer_list -> params proxy for: UnityEngine.Vector2 BeginScrollView(UnityEngine.Vector2 scrollPosition, System.Boolean alwaysShowHorizontal, System.Boolean alwaysShowVertical, UnityEngine.GUIStyle horizontalScrollbar, UnityEngine.GUIStyle verticalScrollbar, UnityEngine.GUIStyle background, params UnityEngine.GUILayoutOption[] options)
    static UnityEngine::Vector2 BeginScrollView(UnityEngine::Vector2 scrollPosition, bool alwaysShowHorizontal, bool alwaysShowVertical, UnityEngine::GUIStyle* horizontalScrollbar, UnityEngine::GUIStyle* verticalScrollbar, UnityEngine::GUIStyle* background, std::initializer_list<UnityEngine::GUILayoutOption*> options);
    // Creating TArgs -> initializer_list proxy for: UnityEngine.Vector2 BeginScrollView(UnityEngine.Vector2 scrollPosition, System.Boolean alwaysShowHorizontal, System.Boolean alwaysShowVertical, UnityEngine.GUIStyle horizontalScrollbar, UnityEngine.GUIStyle verticalScrollbar, UnityEngine.GUIStyle background, params UnityEngine.GUILayoutOption[] options)
    template<class ...TParams>
    static UnityEngine::Vector2 BeginScrollView(UnityEngine::Vector2 scrollPosition, bool alwaysShowHorizontal, bool alwaysShowVertical, UnityEngine::GUIStyle* horizontalScrollbar, UnityEngine::GUIStyle* verticalScrollbar, UnityEngine::GUIStyle* background, TParams&&... options) {
      return BeginScrollView(scrollPosition, alwaysShowHorizontal, alwaysShowVertical, horizontalScrollbar, verticalScrollbar, background, {options...});
    }
    // static public System.Void EndScrollView()
    // Offset: 0x190C748
    static void EndScrollView();
    // static System.Void EndScrollView(System.Boolean handleScrollWheel)
    // Offset: 0x190C750
    static void EndScrollView(bool handleScrollWheel);
    // static public UnityEngine.GUILayoutOption Width(System.Single width)
    // Offset: 0x1908D70
    static UnityEngine::GUILayoutOption* Width(float width);
    // static public UnityEngine.GUILayoutOption Height(System.Single height)
    // Offset: 0x1908E0C
    static UnityEngine::GUILayoutOption* Height(float height);
    // static public UnityEngine.GUILayoutOption ExpandWidth(System.Boolean expand)
    // Offset: 0x190B1DC
    static UnityEngine::GUILayoutOption* ExpandWidth(bool expand);
    // static public UnityEngine.GUILayoutOption ExpandHeight(System.Boolean expand)
    // Offset: 0x190B138
    static UnityEngine::GUILayoutOption* ExpandHeight(bool expand);
  }; // UnityEngine.GUILayout
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUILayout*, "UnityEngine", "GUILayout");
#pragma pack(pop)
