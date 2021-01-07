// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ThreadPriority
  struct ThreadPriority;
  // Forward declaring type: RuntimePlatform
  struct RuntimePlatform;
  // Forward declaring type: NetworkReachability
  struct NetworkReachability;
  // Forward declaring type: LogType
  struct LogType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction
  class UnityAction;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  // Autogenerated type: UnityEngine.Application
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D4B244
  // [NativeHeaderAttribute] Offset: D4B244
  // [NativeHeaderAttribute] Offset: D4B244
  // [NativeHeaderAttribute] Offset: D4B244
  // [NativeHeaderAttribute] Offset: D4B244
  // [NativeHeaderAttribute] Offset: D4B244
  // [NativeHeaderAttribute] Offset: D4B244
  // [NativeHeaderAttribute] Offset: D4B244
  // [NativeHeaderAttribute] Offset: D4B244
  // [NativeHeaderAttribute] Offset: D4B244
  // [NativeHeaderAttribute] Offset: D4B244
  // [NativeHeaderAttribute] Offset: D4B244
  // [NativeHeaderAttribute] Offset: D4B244
  // [NativeHeaderAttribute] Offset: D4B244
  // [NativeHeaderAttribute] Offset: D4B244
  // [NativeHeaderAttribute] Offset: D4B244
  // [NativeHeaderAttribute] Offset: D4B244
  // [NativeHeaderAttribute] Offset: D4B244
  class Application : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Application::LowMemoryCallback
    class LowMemoryCallback;
    // Nested type: UnityEngine::Application::LogCallback
    class LogCallback;
    // Creating value type constructor for type: Application
    Application() noexcept {}
    // [CompilerGeneratedAttribute] Offset: 0xD4FF2C
    // [DebuggerBrowsableAttribute] Offset: 0xD4FF2C
    // Get static field: static private UnityEngine.Application/LowMemoryCallback lowMemory
    static UnityEngine::Application::LowMemoryCallback* _get_lowMemory();
    // Set static field: static private UnityEngine.Application/LowMemoryCallback lowMemory
    static void _set_lowMemory(UnityEngine::Application::LowMemoryCallback* value);
    // Get static field: static private UnityEngine.Application/LogCallback s_LogCallbackHandler
    static UnityEngine::Application::LogCallback* _get_s_LogCallbackHandler();
    // Set static field: static private UnityEngine.Application/LogCallback s_LogCallbackHandler
    static void _set_s_LogCallbackHandler(UnityEngine::Application::LogCallback* value);
    // Get static field: static private UnityEngine.Application/LogCallback s_LogCallbackHandlerThreaded
    static UnityEngine::Application::LogCallback* _get_s_LogCallbackHandlerThreaded();
    // Set static field: static private UnityEngine.Application/LogCallback s_LogCallbackHandlerThreaded
    static void _set_s_LogCallbackHandlerThreaded(UnityEngine::Application::LogCallback* value);
    // [CompilerGeneratedAttribute] Offset: 0xD4FF68
    // [DebuggerBrowsableAttribute] Offset: 0xD4FF68
    // Get static field: static private System.Action`1<System.Boolean> focusChanged
    static System::Action_1<bool>* _get_focusChanged();
    // Set static field: static private System.Action`1<System.Boolean> focusChanged
    static void _set_focusChanged(System::Action_1<bool>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xD4FFA4
    // [CompilerGeneratedAttribute] Offset: 0xD4FFA4
    // Get static field: static private System.Action`1<System.String> deepLinkActivated
    static System::Action_1<::Il2CppString*>* _get_deepLinkActivated();
    // Set static field: static private System.Action`1<System.String> deepLinkActivated
    static void _set_deepLinkActivated(System::Action_1<::Il2CppString*>* value);
    // [CompilerGeneratedAttribute] Offset: 0xD4FFE0
    // [DebuggerBrowsableAttribute] Offset: 0xD4FFE0
    // Get static field: static private System.Func`1<System.Boolean> wantsToQuit
    static System::Func_1<bool>* _get_wantsToQuit();
    // Set static field: static private System.Func`1<System.Boolean> wantsToQuit
    static void _set_wantsToQuit(System::Func_1<bool>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xD5001C
    // [CompilerGeneratedAttribute] Offset: 0xD5001C
    // Get static field: static private System.Action quitting
    static System::Action* _get_quitting();
    // Set static field: static private System.Action quitting
    static void _set_quitting(System::Action* value);
    // static public System.Void Quit(System.Int32 exitCode)
    // Offset: 0x167A6E4
    static void Quit(int exitCode);
    // static public System.Void Quit()
    // Offset: 0x167A724
    static void Quit();
    // static public System.Boolean CanStreamedLevelBeLoaded(System.Int32 levelIndex)
    // Offset: 0x167A760
    static bool CanStreamedLevelBeLoaded(int levelIndex);
    // static public System.Boolean CanStreamedLevelBeLoaded(System.String levelName)
    // Offset: 0x167A798
    static bool CanStreamedLevelBeLoaded(::Il2CppString* levelName);
    // static public System.Boolean get_isPlaying()
    // Offset: 0x167A7D8
    static bool get_isPlaying();
    // static public System.Void set_runInBackground(System.Boolean value)
    // Offset: 0x167A80C
    static void set_runInBackground(bool value);
    // static public System.String get_dataPath()
    // Offset: 0x167A84C
    static ::Il2CppString* get_dataPath();
    // static public System.String get_persistentDataPath()
    // Offset: 0x167A880
    static ::Il2CppString* get_persistentDataPath();
    // static public System.String get_unityVersion()
    // Offset: 0x167A8B4
    static ::Il2CppString* get_unityVersion();
    // static public System.String get_version()
    // Offset: 0x167A8E8
    static ::Il2CppString* get_version();
    // static public System.String get_identifier()
    // Offset: 0x167A91C
    static ::Il2CppString* get_identifier();
    // static public System.String get_productName()
    // Offset: 0x167A950
    static ::Il2CppString* get_productName();
    // static public System.String get_companyName()
    // Offset: 0x167A984
    static ::Il2CppString* get_companyName();
    // static public System.Void OpenURL(System.String url)
    // Offset: 0x167A9B8
    static void OpenURL(::Il2CppString* url);
    // static public System.Void set_targetFrameRate(System.Int32 value)
    // Offset: 0x167A9F8
    static void set_targetFrameRate(int value);
    // static private System.Void SetLogCallbackDefined(System.Boolean defined)
    // Offset: 0x167AA38
    static void SetLogCallbackDefined(bool defined);
    // static public System.Void set_backgroundLoadingPriority(UnityEngine.ThreadPriority value)
    // Offset: 0x167AA78
    static void set_backgroundLoadingPriority(UnityEngine::ThreadPriority value);
    // static public UnityEngine.RuntimePlatform get_platform()
    // Offset: 0x167AAB8
    static UnityEngine::RuntimePlatform get_platform();
    // static public System.Boolean get_isMobilePlatform()
    // Offset: 0x167AAEC
    static bool get_isMobilePlatform();
    // static public UnityEngine.NetworkReachability get_internetReachability()
    // Offset: 0x167AB64
    static UnityEngine::NetworkReachability get_internetReachability();
    // static System.Void CallLowMemory()
    // Offset: 0x167AB98
    static void CallLowMemory();
    // static public System.Void add_logMessageReceived(UnityEngine.Application/LogCallback value)
    // Offset: 0x167AE04
    static void add_logMessageReceived(UnityEngine::Application::LogCallback* value);
    // static public System.Void remove_logMessageReceived(UnityEngine.Application/LogCallback value)
    // Offset: 0x167AEC8
    static void remove_logMessageReceived(UnityEngine::Application::LogCallback* value);
    // static public System.Void add_logMessageReceivedThreaded(UnityEngine.Application/LogCallback value)
    // Offset: 0x167AF64
    static void add_logMessageReceivedThreaded(UnityEngine::Application::LogCallback* value);
    // static public System.Void remove_logMessageReceivedThreaded(UnityEngine.Application/LogCallback value)
    // Offset: 0x167B028
    static void remove_logMessageReceivedThreaded(UnityEngine::Application::LogCallback* value);
    // static private System.Void CallLogCallback(System.String logString, System.String stackTrace, UnityEngine.LogType type, System.Boolean invokedOnMainThread)
    // Offset: 0x167B0C4
    static void CallLogCallback(::Il2CppString* logString, ::Il2CppString* stackTrace, UnityEngine::LogType type, bool invokedOnMainThread);
    // static public System.Void add_onBeforeRender(UnityEngine.Events.UnityAction value)
    // Offset: 0x167B5AC
    static void add_onBeforeRender(UnityEngine::Events::UnityAction* value);
    // static public System.Void remove_onBeforeRender(UnityEngine.Events.UnityAction value)
    // Offset: 0x167B9B0
    static void remove_onBeforeRender(UnityEngine::Events::UnityAction* value);
    // static private System.Boolean Internal_ApplicationWantsToQuit()
    // Offset: 0x167BD40
    static bool Internal_ApplicationWantsToQuit();
    // static private System.Void Internal_ApplicationQuit()
    // Offset: 0x167BFF8
    static void Internal_ApplicationQuit();
    // static System.Void InvokeOnBeforeRender()
    // Offset: 0x167C05C
    static void InvokeOnBeforeRender();
    // static System.Void InvokeFocusChanged(System.Boolean focus)
    // Offset: 0x167C240
    static void InvokeFocusChanged(bool focus);
    // static System.Void InvokeDeepLinkActivated(System.String url)
    // Offset: 0x167C2B4
    static void InvokeDeepLinkActivated(::Il2CppString* url);
    // static public System.Boolean get_isEditor()
    // Offset: 0x167C328
    static bool get_isEditor();
  }; // UnityEngine.Application
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Application*, "UnityEngine", "Application");
#pragma pack(pop)
