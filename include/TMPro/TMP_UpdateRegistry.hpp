// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: ICanvasElement
  class ICanvasElement;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_UpdateRegistry
  class TMP_UpdateRegistry : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement> m_LayoutRebuildQueue
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::UI::ICanvasElement*>* m_LayoutRebuildQueue;
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_LayoutQueueLookup
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<int, int>* m_LayoutQueueLookup;
    // private readonly System.Collections.Generic.List`1<UnityEngine.UI.ICanvasElement> m_GraphicRebuildQueue
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::UI::ICanvasElement*>* m_GraphicRebuildQueue;
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_GraphicQueueLookup
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<int, int>* m_GraphicQueueLookup;
    // Get static field: static private TMPro.TMP_UpdateRegistry s_Instance
    static TMPro::TMP_UpdateRegistry* _get_s_Instance();
    // Set static field: static private TMPro.TMP_UpdateRegistry s_Instance
    static void _set_s_Instance(TMPro::TMP_UpdateRegistry* value);
    // static public TMPro.TMP_UpdateRegistry get_instance()
    // Offset: 0x1266824
    static TMPro::TMP_UpdateRegistry* get_instance();
    // static public System.Void RegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x12669E8
    static void RegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Boolean InternalRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1266A14
    bool InternalRegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement* element);
    // static public System.Void RegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1266B18
    static void RegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Boolean InternalRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1266B44
    bool InternalRegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Void PerformUpdateForCanvasRendererObjects()
    // Offset: 0x1266C48
    void PerformUpdateForCanvasRendererObjects();
    // private System.Void PerformUpdateForMeshRendererObjects()
    // Offset: 0x1266E88
    void PerformUpdateForMeshRendererObjects();
    // static public System.Void UnRegisterCanvasElementForRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1266EF4
    static void UnRegisterCanvasElementForRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Void InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1266F30
    void InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine::UI::ICanvasElement* element);
    // private System.Void InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement element)
    // Offset: 0x1267004
    void InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine::UI::ICanvasElement* element);
    // protected System.Void .ctor()
    // Offset: 0x12668A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TMP_UpdateRegistry* New_ctor();
  }; // TMPro.TMP_UpdateRegistry
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_UpdateRegistry*, "TMPro", "TMP_UpdateRegistry");
#pragma pack(pop)
