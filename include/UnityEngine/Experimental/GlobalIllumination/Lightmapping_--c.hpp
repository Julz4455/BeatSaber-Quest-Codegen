// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Experimental.GlobalIllumination.Lightmapping
#include "UnityEngine/Experimental/GlobalIllumination/Lightmapping.hpp"
// Including type: UnityEngine.Experimental.GlobalIllumination.LightDataGI
#include "UnityEngine/Experimental/GlobalIllumination/LightDataGI.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Light
  class Light;
}
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Forward declaring type: NativeArray`1<T>
  template<typename T>
  struct NativeArray_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Size: 0x10
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D4F6A8
  class Lightmapping::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c <>9
    static UnityEngine::Experimental::GlobalIllumination::Lightmapping::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c <>9
    static void _set_$$9(UnityEngine::Experimental::GlobalIllumination::Lightmapping::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x1689798
    static void _cctor();
    // System.Void <.cctor>b__7_0(UnityEngine.Light[] requests, Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI> lightsOutput)
    // Offset: 0x1689808
    void $_cctor$b__7_0(::Array<UnityEngine::Light*>* requests, Unity::Collections::NativeArray_1<UnityEngine::Experimental::GlobalIllumination::LightDataGI> lightsOutput);
    // public System.Void .ctor()
    // Offset: 0x1689800
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lightmapping::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("UnityEngine::Experimental::GlobalIllumination").WithContext("$$c").WithContext(".ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lightmapping::$$c*, creationType>()));
    }
  }; // UnityEngine.Experimental.GlobalIllumination.Lightmapping/<>c
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::Lightmapping::$$c*, "UnityEngine.Experimental.GlobalIllumination", "Lightmapping/<>c");
#pragma pack(pop)
