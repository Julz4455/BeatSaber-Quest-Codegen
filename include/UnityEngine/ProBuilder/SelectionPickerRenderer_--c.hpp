// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.SelectionPickerRenderer
#include "UnityEngine/ProBuilder/SelectionPickerRenderer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  // Autogenerated type: UnityEngine.ProBuilder.SelectionPickerRenderer/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DE301C
  class SelectionPickerRenderer::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.ProBuilder.SelectionPickerRenderer/<>c <>9
    static UnityEngine::ProBuilder::SelectionPickerRenderer::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.SelectionPickerRenderer/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::SelectionPickerRenderer::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Collections.Generic.IEnumerable`1<System.Int32>> <>9__24_0
    static System::Func_2<UnityEngine::ProBuilder::Face*, System::Collections::Generic::IEnumerable_1<int>*>* _get_$$9__24_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Collections.Generic.IEnumerable`1<System.Int32>> <>9__24_0
    static void _set_$$9__24_0(System::Func_2<UnityEngine::ProBuilder::Face*, System::Collections::Generic::IEnumerable_1<int>*>* value);
    // static private System.Void .cctor()
    // Offset: 0x13CBA64
    static void _cctor();
    // System.Collections.Generic.IEnumerable`1<System.Int32> <GenerateFacePickingObjects>b__24_0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x13CBAD4
    System::Collections::Generic::IEnumerable_1<int>* $GenerateFacePickingObjects$b__24_0(UnityEngine::ProBuilder::Face* x);
    // public System.Void .ctor()
    // Offset: 0x13CBACC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectionPickerRenderer::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::ProBuilder").WithContext("$$c").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectionPickerRenderer::$$c*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.SelectionPickerRenderer/<>c
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SelectionPickerRenderer::$$c*, "UnityEngine.ProBuilder", "SelectionPickerRenderer/<>c");
#pragma pack(pop)
