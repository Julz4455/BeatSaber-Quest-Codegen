// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.DeleteElements
#include "UnityEngine/ProBuilder/MeshOperations/DeleteElements.hpp"
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
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.DeleteElements/<>c
  class DeleteElements::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.ProBuilder.MeshOperations.DeleteElements/<>c <>9
    static UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.MeshOperations.DeleteElements/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Collections.Generic.IEnumerable`1<System.Int32>> <>9__3_0
    static System::Func_2<UnityEngine::ProBuilder::Face*, System::Collections::Generic::IEnumerable_1<int>*>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Collections.Generic.IEnumerable`1<System.Int32>> <>9__3_0
    static void _set_$$9__3_0(System::Func_2<UnityEngine::ProBuilder::Face*, System::Collections::Generic::IEnumerable_1<int>*>* value);
    // static private System.Void .cctor()
    // Offset: 0x13F2E44
    static void _cctor();
    // System.Collections.Generic.IEnumerable`1<System.Int32> <DeleteFaces>b__3_0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x13F2EB4
    System::Collections::Generic::IEnumerable_1<int>* $DeleteFaces$b__3_0(UnityEngine::ProBuilder::Face* x);
    // public System.Void .ctor()
    // Offset: 0x13F2EAC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DeleteElements::$$c* New_ctor();
  }; // UnityEngine.ProBuilder.MeshOperations.DeleteElements/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c*, "UnityEngine.ProBuilder.MeshOperations", "DeleteElements/<>c");
#pragma pack(pop)
