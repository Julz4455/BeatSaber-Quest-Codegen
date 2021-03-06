// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: FocusType
  struct FocusType;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: GUISkin
  class GUISkin;
  // Forward declaring type: Event
  class Event;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUIUtility
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CD7684
  // [NativeHeaderAttribute] Offset: CD7684
  // [NativeHeaderAttribute] Offset: CD7684
  // [NativeHeaderAttribute] Offset: CD7684
  // [NativeHeaderAttribute] Offset: CD7684
  // [NativeHeaderAttribute] Offset: CD7684
  class GUIUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: GUIUtility
    GUIUtility() noexcept {}
    // [VisibleToOtherModulesAttribute] Offset: 0xCD8034
    // Get static field: static System.Int32 s_SkinMode
    static int _get_s_SkinMode();
    // Set static field: static System.Int32 s_SkinMode
    static void _set_s_SkinMode(int value);
    // [VisibleToOtherModulesAttribute] Offset: 0xCD80B8
    // Get static field: static System.Int32 s_OriginalID
    static int _get_s_OriginalID();
    // Set static field: static System.Int32 s_OriginalID
    static void _set_s_OriginalID(int value);
    // [VisibleToOtherModulesAttribute] Offset: 0xCD813C
    // Get static field: static System.Action takeCapture
    static System::Action* _get_takeCapture();
    // Set static field: static System.Action takeCapture
    static void _set_takeCapture(System::Action* value);
    // [VisibleToOtherModulesAttribute] Offset: 0xCD81C0
    // Get static field: static System.Action releaseCapture
    static System::Action* _get_releaseCapture();
    // Set static field: static System.Action releaseCapture
    static void _set_releaseCapture(System::Action* value);
    // [VisibleToOtherModulesAttribute] Offset: 0xCD8244
    // Get static field: static System.Func`3<System.Int32,System.IntPtr,System.Boolean> processEvent
    static System::Func_3<int, System::IntPtr, bool>* _get_processEvent();
    // Set static field: static System.Func`3<System.Int32,System.IntPtr,System.Boolean> processEvent
    static void _set_processEvent(System::Func_3<int, System::IntPtr, bool>* value);
    // [VisibleToOtherModulesAttribute] Offset: 0xCD82C8
    // Get static field: static System.Func`2<System.Exception,System.Boolean> endContainerGUIFromException
    static System::Func_2<System::Exception*, bool>* _get_endContainerGUIFromException();
    // Set static field: static System.Func`2<System.Exception,System.Boolean> endContainerGUIFromException
    static void _set_endContainerGUIFromException(System::Func_2<System::Exception*, bool>* value);
    // [VisibleToOtherModulesAttribute] Offset: 0xCD834C
    // Get static field: static System.Action guiChanged
    static System::Action* _get_guiChanged();
    // Set static field: static System.Action guiChanged
    static void _set_guiChanged(System::Action* value);
    // [CompilerGeneratedAttribute] Offset: 0xCD83D0
    // [DebuggerBrowsableAttribute] Offset: 0xCD83D0
    // Get static field: static private System.Boolean <guiIsExiting>k__BackingField
    static bool _get_$guiIsExiting$k__BackingField();
    // Set static field: static private System.Boolean <guiIsExiting>k__BackingField
    static void _set_$guiIsExiting$k__BackingField(bool value);
    // Get static field: static System.Func`1<System.Boolean> s_HasCurrentWindowKeyFocusFunc
    static System::Func_1<bool>* _get_s_HasCurrentWindowKeyFocusFunc();
    // Set static field: static System.Func`1<System.Boolean> s_HasCurrentWindowKeyFocusFunc
    static void _set_s_HasCurrentWindowKeyFocusFunc(System::Func_1<bool>* value);
    // static System.Single get_pixelsPerPoint()
    // Offset: 0x198A254
    static float get_pixelsPerPoint();
    // static System.Int32 get_guiDepth()
    // Offset: 0x198F288
    static int get_guiDepth();
    // static System.Void set_mouseUsed(System.Boolean value)
    // Offset: 0x1980E80
    static void set_mouseUsed(bool value);
    // static System.Void set_textFieldInput(System.Boolean value)
    // Offset: 0x197ED2C
    static void set_textFieldInput(bool value);
    // static public System.String get_systemCopyBuffer()
    // Offset: 0x198F2BC
    static ::Il2CppString* get_systemCopyBuffer();
    // static public System.Void set_systemCopyBuffer(System.String value)
    // Offset: 0x198F2F0
    static void set_systemCopyBuffer(::Il2CppString* value);
    // static public System.Int32 GetControlID(System.Int32 hint, UnityEngine.FocusType focusType, UnityEngine.Rect rect)
    // Offset: 0x197C594
    static int GetControlID(int hint, UnityEngine::FocusType focusType, UnityEngine::Rect rect);
    // static public UnityEngine.Rect AlignRectToDevice(UnityEngine.Rect rect, out System.Int32 widthInPixels, out System.Int32 heightInPixels)
    // Offset: 0x198F388
    static UnityEngine::Rect AlignRectToDevice(UnityEngine::Rect rect, int& widthInPixels, int& heightInPixels);
    // static System.String get_compositionString()
    // Offset: 0x197E824
    static ::Il2CppString* get_compositionString();
    // static System.Void set_compositionCursorPos(UnityEngine.Vector2 value)
    // Offset: 0x198F468
    static void set_compositionCursorPos(UnityEngine::Vector2 value);
    // static private System.Int32 Internal_GetHotControl()
    // Offset: 0x198F4EC
    static int Internal_GetHotControl();
    // static private System.Int32 Internal_GetKeyboardControl()
    // Offset: 0x198F520
    static int Internal_GetKeyboardControl();
    // static private System.Void Internal_SetHotControl(System.Int32 value)
    // Offset: 0x198F554
    static void Internal_SetHotControl(int value);
    // static private System.Void Internal_SetKeyboardControl(System.Int32 value)
    // Offset: 0x198F594
    static void Internal_SetKeyboardControl(int value);
    // static private System.Object Internal_GetDefaultSkin(System.Int32 skinMode)
    // Offset: 0x198F5D4
    static ::Il2CppObject* Internal_GetDefaultSkin(int skinMode);
    // static private System.Void Internal_ExitGUI()
    // Offset: 0x198F614
    static void Internal_ExitGUI();
    // static private System.Void MarkGUIChanged()
    // Offset: 0x198F648
    static void MarkGUIChanged();
    // static public System.Int32 GetControlID(UnityEngine.FocusType focus)
    // Offset: 0x1984280
    static int GetControlID(UnityEngine::FocusType focus);
    // static public System.Int32 GetControlID(System.Int32 hint, UnityEngine.FocusType focus)
    // Offset: 0x197C3E0
    static int GetControlID(int hint, UnityEngine::FocusType focus);
    // static public System.Object GetStateObject(System.Type t, System.Int32 controlID)
    // Offset: 0x197D184
    static ::Il2CppObject* GetStateObject(System::Type* t, int controlID);
    // static System.Void set_guiIsExiting(System.Boolean value)
    // Offset: 0x198F6AC
    static void set_guiIsExiting(bool value);
    // static public System.Int32 get_hotControl()
    // Offset: 0x197CB80
    static int get_hotControl();
    // static public System.Void set_hotControl(System.Int32 value)
    // Offset: 0x197CB40
    static void set_hotControl(int value);
    // static System.Void TakeCapture()
    // Offset: 0x198F704
    static void TakeCapture();
    // static System.Void RemoveCapture()
    // Offset: 0x198F768
    static void RemoveCapture();
    // static public System.Int32 get_keyboardControl()
    // Offset: 0x197E160
    static int get_keyboardControl();
    // static public System.Void set_keyboardControl(System.Int32 value)
    // Offset: 0x197E194
    static void set_keyboardControl(int value);
    // static System.Boolean HasKeyFocus(System.Int32 controlID)
    // Offset: 0x198E564
    static bool HasKeyFocus(int controlID);
    // static UnityEngine.GUISkin GetDefaultSkin()
    // Offset: 0x197AA00
    static UnityEngine::GUISkin* GetDefaultSkin();
    // static System.Boolean ProcessEvent(System.Int32 instanceID, System.IntPtr nativeEventPtr)
    // Offset: 0x198F7CC
    static bool ProcessEvent(int instanceID, System::IntPtr nativeEventPtr);
    // static System.Void BeginGUI(System.Int32 skinMode, System.Int32 instanceID, System.Int32 useGUILayout)
    // Offset: 0x198F854
    static void BeginGUI(int skinMode, int instanceID, int useGUILayout);
    // static System.Void EndGUI(System.Int32 layoutType)
    // Offset: 0x198FA1C
    static void EndGUI(int layoutType);
    // static System.Boolean EndGUIFromException(System.Exception exception)
    // Offset: 0x198FC00
    static bool EndGUIFromException(System::Exception* exception);
    // static System.Boolean EndContainerGUIFromException(System.Exception exception)
    // Offset: 0x198FC48
    static bool EndContainerGUIFromException(System::Exception* exception);
    // static System.Void ResetGlobalState()
    // Offset: 0x198F900
    static void ResetGlobalState();
    // static System.Boolean IsExitGUIException(System.Exception exception)
    // Offset: 0x198FCBC
    static bool IsExitGUIException(System::Exception* exception);
    // static System.Boolean ShouldRethrowException(System.Exception exception)
    // Offset: 0x198FC44
    static bool ShouldRethrowException(System::Exception* exception);
    // static System.Void CheckOnGUI()
    // Offset: 0x197A838
    static void CheckOnGUI();
    // static public UnityEngine.Rect AlignRectToDevice(UnityEngine.Rect rect)
    // Offset: 0x198FD3C
    static UnityEngine::Rect AlignRectToDevice(UnityEngine::Rect rect);
    // static System.Boolean HitTest(UnityEngine.Rect rect, UnityEngine.Vector2 point, System.Int32 offset)
    // Offset: 0x198FD68
    static bool HitTest(UnityEngine::Rect rect, UnityEngine::Vector2 point, int offset);
    // static System.Boolean HitTest(UnityEngine.Rect rect, UnityEngine.Vector2 point, System.Boolean isDirectManipulationDevice)
    // Offset: 0x198FE18
    static bool HitTest(UnityEngine::Rect rect, UnityEngine::Vector2 point, bool isDirectManipulationDevice);
    // static System.Boolean HitTest(UnityEngine.Rect rect, UnityEngine.Event evt)
    // Offset: 0x197F3E8
    static bool HitTest(UnityEngine::Rect rect, UnityEngine::Event* evt);
    // static private System.Int32 GetControlID_Injected(System.Int32 hint, UnityEngine.FocusType focusType, ref UnityEngine.Rect rect)
    // Offset: 0x198F330
    static int GetControlID_Injected(int hint, UnityEngine::FocusType focusType, UnityEngine::Rect& rect);
    // static private System.Void AlignRectToDevice_Injected(ref UnityEngine.Rect rect, out System.Int32 widthInPixels, out System.Int32 heightInPixels, out UnityEngine.Rect ret)
    // Offset: 0x198F400
    static void AlignRectToDevice_Injected(UnityEngine::Rect& rect, int& widthInPixels, int& heightInPixels, UnityEngine::Rect& ret);
    // static private System.Void set_compositionCursorPos_Injected(ref UnityEngine.Vector2 value)
    // Offset: 0x198F4AC
    static void set_compositionCursorPos_Injected(UnityEngine::Vector2& value);
  }; // UnityEngine.GUIUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUIUtility*, "UnityEngine", "GUIUtility");
