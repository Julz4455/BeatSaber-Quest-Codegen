// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AudioSettings
#include "UnityEngine/AudioSettings.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AudioSettings/AudioConfigurationChangeHandler
  class AudioSettings::AudioConfigurationChangeHandler : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x220A7FC
    static AudioSettings::AudioConfigurationChangeHandler* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Boolean deviceWasChanged)
    // Offset: 0x220A518
    void Invoke(bool deviceWasChanged);
    // public System.IAsyncResult BeginInvoke(System.Boolean deviceWasChanged, System.AsyncCallback callback, System.Object object)
    // Offset: 0x220A810
    System::IAsyncResult* BeginInvoke(bool deviceWasChanged, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x220A8A0
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.AudioSettings/AudioConfigurationChangeHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioSettings::AudioConfigurationChangeHandler*, "UnityEngine", "AudioSettings/AudioConfigurationChangeHandler");
#pragma pack(pop)
