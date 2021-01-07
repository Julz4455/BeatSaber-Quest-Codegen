// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.ExtrudeElements
#include "UnityEngine/ProBuilder/MeshOperations/ExtrudeElements.hpp"
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
  // Forward declaring type: FaceRebuildData
  class FaceRebuildData;
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x10
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.ExtrudeElements/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DE316C
  class ExtrudeElements::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.ProBuilder.MeshOperations.ExtrudeElements/<>c <>9
    static UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.MeshOperations.ExtrudeElements/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.FaceRebuildData,UnityEngine.ProBuilder.Face> <>9__3_0
    static System::Func_2<UnityEngine::ProBuilder::FaceRebuildData*, UnityEngine::ProBuilder::Face*>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.FaceRebuildData,UnityEngine.ProBuilder.Face> <>9__3_0
    static void _set_$$9__3_0(System::Func_2<UnityEngine::ProBuilder::FaceRebuildData*, UnityEngine::ProBuilder::Face*>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__4_0
    static System::Func_2<UnityEngine::ProBuilder::Face*, int>* _get_$$9__4_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__4_0
    static void _set_$$9__4_0(System::Func_2<UnityEngine::ProBuilder::Face*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x125C020
    static void _cctor();
    // UnityEngine.ProBuilder.Face <DetachFaces>b__3_0(UnityEngine.ProBuilder.FaceRebuildData x)
    // Offset: 0x125C090
    UnityEngine::ProBuilder::Face* $DetachFaces$b__3_0(UnityEngine::ProBuilder::FaceRebuildData* x);
    // System.Int32 <ExtrudePerFace>b__4_0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x125C0A8
    int $ExtrudePerFace$b__4_0(UnityEngine::ProBuilder::Face* x);
    // public System.Void .ctor()
    // Offset: 0x125C088
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExtrudeElements::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::ProBuilder::MeshOperations").WithContext("$$c").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExtrudeElements::$$c*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.ExtrudeElements/<>c
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::ExtrudeElements::$$c*, "UnityEngine.ProBuilder.MeshOperations", "ExtrudeElements/<>c");
#pragma pack(pop)
