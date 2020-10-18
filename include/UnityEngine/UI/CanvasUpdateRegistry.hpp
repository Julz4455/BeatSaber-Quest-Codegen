// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI::Collections
namespace UnityEngine::UI::Collections {
  // Forward declaring type: IndexedSet`1<T>
  template<typename T>
  class IndexedSet_1;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: ICanvasElement
  class ICanvasElement;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.CanvasUpdateRegistry
  class CanvasUpdateRegistry : public ::Il2CppObject {
    public:
    // private System.Boolean m_PerformingLayoutUpdate
    // Offset: 0x10
    bool m_PerformingLayoutUpdate;
    // private System.Boolean m_PerformingGraphicUpdate
    // Offset: 0x11
    bool m_PerformingGraphicUpdate;
    // private System.String[] m_CanvasUpdateProfilerStrings
    // Offset: 0x18
    ::Array<::Il2CppString*>* m_CanvasUpdateProfilerStrings;
    // private readonly UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement> m_LayoutRebuildQueue
    // Offset: 0x20
    UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement*>* m_LayoutRebuildQueue;
    // private readonly UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.ICanvasElement> m_GraphicRebuildQueue
    // Offset: 0x28
    UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::ICanvasElement*>* m_GraphicRebuildQueue;
    // Get static field: static private UnityEngine.UI.CanvasUpdateRegistry s_Instance
    static UnityEngine::UI::CanvasUpdateRegistry* _get_s_Instance();
    // Set static field: static private UnityEngine.UI.CanvasUpdateRegistry s_Instance
    static void _set_s_Instance(UnityEngine::UI::CanvasUpdateRegistry* value);
    // static field const value: static private System.String m_CullingUpdateProfilerString
    static constexpr const char* m_CullingUpdateProfilerString = "ClipperRegistry.Cull";
    // Get static field: static private System.String m_CullingUpdateProfilerString
    static ::Il2CppString* _get_m_CullingUpdateProfilerString();
    // Set static field: static private System.String m_CullingUpdateProfilerString
    static void _set_m_CullingUpdateProfilerString(::Il2CppString* value);
    // Get static field: static private readonly System.Comparison`1<UnityEngine.UI.ICanvasElement> s_SortLayoutFunction
    static System::Comparison_1<UnityEngine::UI::ICanvasElement*>* _get_s_SortLayoutFunction();
    // Set static field: static private readonly System.Comparison`1<UnityEngine.UI.ICanvasElement> s_SortLayoutFunction
    static void _set_s_SortLayoutFunction(System::Comparison_1<UnityEngine::UI::ICanvasElement*>* value);
    // static public UnityEngine.UI.CanvasUpdateRegistry get_instance()
    // Offset: 0x1286490
    static UnityEngine::UI::CanvasUpdateRegistry* get_instance();
    // private System.Boolean ObjectValidForUpdate(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1286558
    bool ObjectValidForUpdate(UnityEngine::UI::ICanvasElement* element);
    // private System.Void CleanInvalidItems()
    // Offset: 0x1286638
    void CleanInvalidItems();
    // private System.Void PerformUpdate()
    // Offset: 0x1286934
    void PerformUpdate();
    // static private System.Int32 ParentCount(UnityEngine.Transform child)
    // Offset: 0x128721C
    static int ParentCount(UnityEngine::Transform* child);
    // static private System.Int32 SortLayoutList(UnityEngine.UI.ICanvasElement x, UnityEngine.UI.ICanvasElement y)
    // Offset: 0x12872FC
    static int SortLayoutList(UnityEngine::UI::ICanvasElement* x, UnityEngine::UI::ICanvasElement* y);
    // static public System.Void RegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1287468
    static void RegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement* element);
    // static public System.Boolean TryRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1287574
    static bool TryRegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Boolean InternalRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x12874D8
    bool InternalRegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement* element);
    // static public System.Void RegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x12875E4
    static void RegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement* element);
    // static public System.Boolean TryRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1287724
    static bool TryRegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Boolean InternalRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1287654
    bool InternalRegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement* element);
    // static public System.Void UnRegisterCanvasElementForRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1287794
    static void UnRegisterCanvasElementForRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Void InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1287814
    void InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Void InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1287974
    void InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement* element);
    // static public System.Boolean IsRebuildingLayout()
    // Offset: 0x1287AD4
    static bool IsRebuildingLayout();
    // static public System.Boolean IsRebuildingGraphics()
    // Offset: 0x1287B40
    static bool IsRebuildingGraphics();
    // static private System.Void .cctor()
    // Offset: 0x1287BAC
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x1286218
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CanvasUpdateRegistry* New_ctor();
  }; // UnityEngine.UI.CanvasUpdateRegistry
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::CanvasUpdateRegistry*, "UnityEngine.UI", "CanvasUpdateRegistry");
#pragma pack(pop)
