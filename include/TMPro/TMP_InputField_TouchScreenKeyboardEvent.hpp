// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_InputField
#include "TMPro/TMP_InputField.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
// Including type: UnityEngine.TouchScreenKeyboard/Status
#include "UnityEngine/TouchScreenKeyboard_Status.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_InputField/TouchScreenKeyboardEvent
  class TMP_InputField::TouchScreenKeyboardEvent : public UnityEngine::Events::UnityEvent_1<UnityEngine::TouchScreenKeyboard::Status> {
    public:
    // public System.Void .ctor()
    // Offset: 0xF888C8
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    static TMP_InputField::TouchScreenKeyboardEvent* New_ctor();
  }; // TMPro.TMP_InputField/TouchScreenKeyboardEvent
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_InputField::TouchScreenKeyboardEvent*, "TMPro", "TMP_InputField/TouchScreenKeyboardEvent");
#pragma pack(pop)
