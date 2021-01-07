// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::XR
namespace UnityEngine::Experimental::XR {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.XR
namespace UnityEngine::Experimental::XR {
  // Size: 0x10
  // Autogenerated type: UnityEngine.Experimental.XR.Boundary
  // [] Offset: FFFFFFFF
  // [NativeConditionalAttribute] Offset: D80930
  class Boundary : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Experimental::XR::Boundary::Type
    struct Type;
    // Creating value type constructor for type: Boundary
    Boundary() noexcept {}
    // static public System.Boolean TryGetDimensions(out UnityEngine.Vector3 dimensionsOut, UnityEngine.Experimental.XR.Boundary/Type boundaryType)
    // Offset: 0x1A08354
    static bool TryGetDimensions(UnityEngine::Vector3& dimensionsOut, UnityEngine::Experimental::XR::Boundary::Type boundaryType);
    // static private System.Boolean TryGetDimensionsInternal(out UnityEngine.Vector3 dimensionsOut, UnityEngine.Experimental.XR.Boundary/Type boundaryType)
    // Offset: 0x1A083A4
    static bool TryGetDimensionsInternal(UnityEngine::Vector3& dimensionsOut, UnityEngine::Experimental::XR::Boundary::Type boundaryType);
    // static public System.Boolean get_visible()
    // Offset: 0x1A083F4
    static bool get_visible();
    // static public System.Void set_visible(System.Boolean value)
    // Offset: 0x1A08428
    static void set_visible(bool value);
    // static public System.Boolean get_configured()
    // Offset: 0x1A08468
    static bool get_configured();
    // static public System.Boolean TryGetGeometry(System.Collections.Generic.List`1<UnityEngine.Vector3> geometry, UnityEngine.Experimental.XR.Boundary/Type boundaryType)
    // Offset: 0x1A0849C
    static bool TryGetGeometry(System::Collections::Generic::List_1<UnityEngine::Vector3>* geometry, UnityEngine::Experimental::XR::Boundary::Type boundaryType);
    // static private System.Boolean TryGetGeometryScriptingInternal(System.Collections.Generic.List`1<UnityEngine.Vector3> geometry, UnityEngine.Experimental.XR.Boundary/Type boundaryType)
    // Offset: 0x1A08564
    static bool TryGetGeometryScriptingInternal(System::Collections::Generic::List_1<UnityEngine::Vector3>* geometry, UnityEngine::Experimental::XR::Boundary::Type boundaryType);
  }; // UnityEngine.Experimental.XR.Boundary
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::XR::Boundary*, "UnityEngine.Experimental.XR", "Boundary");
#pragma pack(pop)
