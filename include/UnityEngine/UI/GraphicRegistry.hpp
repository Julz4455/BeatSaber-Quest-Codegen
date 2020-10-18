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
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Canvas
  class Canvas;
}
// Forward declaring namespace: UnityEngine::UI::Collections
namespace UnityEngine::UI::Collections {
  // Forward declaring type: IndexedSet`1<T>
  template<typename T>
  class IndexedSet_1;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.GraphicRegistry
  class GraphicRegistry : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>> m_Graphics
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<UnityEngine::Canvas*, UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::Graphic*>*>* m_Graphics;
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<UnityEngine::Canvas*, UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::Graphic*>*>*
    constexpr operator System::Collections::Generic::Dictionary_2<UnityEngine::Canvas*, UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::Graphic*>*>*() const noexcept {
      return m_Graphics;
    }
    // Get static field: static private UnityEngine.UI.GraphicRegistry s_Instance
    static UnityEngine::UI::GraphicRegistry* _get_s_Instance();
    // Set static field: static private UnityEngine.UI.GraphicRegistry s_Instance
    static void _set_s_Instance(UnityEngine::UI::GraphicRegistry* value);
    // Get static field: static private readonly System.Collections.Generic.List`1<UnityEngine.UI.Graphic> s_EmptyList
    static System::Collections::Generic::List_1<UnityEngine::UI::Graphic*>* _get_s_EmptyList();
    // Set static field: static private readonly System.Collections.Generic.List`1<UnityEngine.UI.Graphic> s_EmptyList
    static void _set_s_EmptyList(System::Collections::Generic::List_1<UnityEngine::UI::Graphic*>* value);
    // static public UnityEngine.UI.GraphicRegistry get_instance()
    // Offset: 0x1754D5C
    static UnityEngine::UI::GraphicRegistry* get_instance();
    // static public System.Void RegisterGraphicForCanvas(UnityEngine.Canvas c, UnityEngine.UI.Graphic graphic)
    // Offset: 0x1750C24
    static void RegisterGraphicForCanvas(UnityEngine::Canvas* c, UnityEngine::UI::Graphic* graphic);
    // static public System.Void UnregisterGraphicForCanvas(UnityEngine.Canvas c, UnityEngine.UI.Graphic graphic)
    // Offset: 0x17508A8
    static void UnregisterGraphicForCanvas(UnityEngine::Canvas* c, UnityEngine::UI::Graphic* graphic);
    // static public System.Collections.Generic.IList`1<UnityEngine.UI.Graphic> GetGraphicsForCanvas(UnityEngine.Canvas canvas)
    // Offset: 0x1754438
    static System::Collections::Generic::IList_1<UnityEngine::UI::Graphic*>* GetGraphicsForCanvas(UnityEngine::Canvas* canvas);
    // static private System.Void .cctor()
    // Offset: 0x1754E24
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x1754C30
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static GraphicRegistry* New_ctor();
  }; // UnityEngine.UI.GraphicRegistry
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::GraphicRegistry*, "UnityEngine.UI", "GraphicRegistry");
#pragma pack(pop)
