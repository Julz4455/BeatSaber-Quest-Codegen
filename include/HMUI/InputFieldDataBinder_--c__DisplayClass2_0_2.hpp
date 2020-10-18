// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.InputFieldDataBinder
#include "HMUI/InputFieldDataBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IObservableChange
  class IObservableChange;
  // Forward declaring type: IValue`1<T>
  template<typename T>
  class IValue_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: InputField
  class InputField;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.InputFieldDataBinder/<>c__DisplayClass2_0`2
  template<typename T0, typename T1>
  class InputFieldDataBinder::$$c__DisplayClass2_0_2 : public ::Il2CppObject {
    public:
    // public System.Func`2<System.String,T1> toValueConvertor
    // Offset: 0x0
    System::Func_2<::Il2CppString*, T1>* toValueConvertor;
    // public T0 valueItem
    // Offset: 0x0
    T0 valueItem;
    // public UnityEngine.UI.InputField inputField
    // Offset: 0x0
    UnityEngine::UI::InputField* inputField;
    // public System.Func`2<T1,System.String> toStringConvertor
    // Offset: 0x0
    System::Func_2<T1, ::Il2CppString*>* toStringConvertor;
    // System.Void <AddBindings>b__0(System.String value)
    // Offset: 0xFFFFFFFF
    void $AddBindings$b__0(::Il2CppString* value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "<AddBindings>b__0", value));
    }
    // System.Void <AddBindings>b__1()
    // Offset: 0xFFFFFFFF
    void $AddBindings$b__1() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "<AddBindings>b__1"));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static InputFieldDataBinder::$$c__DisplayClass2_0_2<T0, T1>* New_ctor() {
      return THROW_UNLESS((il2cpp_utils::New<InputFieldDataBinder::$$c__DisplayClass2_0_2<T0, T1>*>()));
    }
  }; // HMUI.InputFieldDataBinder/<>c__DisplayClass2_0`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HMUI::InputFieldDataBinder::$$c__DisplayClass2_0_2, "HMUI", "InputFieldDataBinder/<>c__DisplayClass2_0`2");
#pragma pack(pop)
