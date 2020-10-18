// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: RectMask2D
  class RectMask2D;
  // Forward declaring type: IClippable
  class IClippable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.MaskUtilities
  class MaskUtilities : public ::Il2CppObject {
    public:
    // static public System.Void Notify2DMaskStateChanged(UnityEngine.Component mask)
    // Offset: 0x18396E0
    static void Notify2DMaskStateChanged(UnityEngine::Component* mask);
    // static public System.Void NotifyStencilStateChanged(UnityEngine.Component mask)
    // Offset: 0x1838AF8
    static void NotifyStencilStateChanged(UnityEngine::Component* mask);
    // static public UnityEngine.Transform FindRootSortOverrideCanvas(UnityEngine.Transform start)
    // Offset: 0x18392D4
    static UnityEngine::Transform* FindRootSortOverrideCanvas(UnityEngine::Transform* start);
    // static public System.Int32 GetStencilDepth(UnityEngine.Transform transform, UnityEngine.Transform stopAfter)
    // Offset: 0x1839450
    static int GetStencilDepth(UnityEngine::Transform* transform, UnityEngine::Transform* stopAfter);
    // static public System.Boolean IsDescendantOrSelf(UnityEngine.Transform father, UnityEngine.Transform child)
    // Offset: 0x1839934
    static bool IsDescendantOrSelf(UnityEngine::Transform* father, UnityEngine::Transform* child);
    // static public UnityEngine.UI.RectMask2D GetRectMaskForClippable(UnityEngine.UI.IClippable clippable)
    // Offset: 0x1839AB4
    static UnityEngine::UI::RectMask2D* GetRectMaskForClippable(UnityEngine::UI::IClippable* clippable);
    // static public System.Void GetRectMasksForClip(UnityEngine.UI.RectMask2D clipper, System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D> masks)
    // Offset: 0x1839E98
    static void GetRectMasksForClip(UnityEngine::UI::RectMask2D* clipper, System::Collections::Generic::List_1<UnityEngine::UI::RectMask2D*>* masks);
    // public System.Void .ctor()
    // Offset: 0x183A18C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MaskUtilities* New_ctor();
  }; // UnityEngine.UI.MaskUtilities
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::MaskUtilities*, "UnityEngine.UI", "MaskUtilities");
#pragma pack(pop)
