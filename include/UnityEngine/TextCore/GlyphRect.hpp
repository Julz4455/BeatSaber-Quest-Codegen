// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.TextCore
namespace UnityEngine::TextCore {
  // Autogenerated type: UnityEngine.TextCore.GlyphRect
  struct GlyphRect : public System::ValueType, public System::IEquatable_1<UnityEngine::TextCore::GlyphRect> {
    public:
    // private System.Int32 m_X
    // Offset: 0x0
    int m_X;
    // private System.Int32 m_Y
    // Offset: 0x4
    int m_Y;
    // private System.Int32 m_Width
    // Offset: 0x8
    int m_Width;
    // private System.Int32 m_Height
    // Offset: 0xC
    int m_Height;
    // Get static field: static private readonly UnityEngine.TextCore.GlyphRect s_ZeroGlyphRect
    static UnityEngine::TextCore::GlyphRect _get_s_ZeroGlyphRect();
    // Set static field: static private readonly UnityEngine.TextCore.GlyphRect s_ZeroGlyphRect
    static void _set_s_ZeroGlyphRect(UnityEngine::TextCore::GlyphRect value);
    // Creating value type constructor for type: GlyphRect
    GlyphRect(int m_X_ = {}, int m_Y_ = {}, int m_Width_ = {}, int m_Height_ = {}) : m_X{m_X_}, m_Y{m_Y_}, m_Width{m_Width_}, m_Height{m_Height_} {}
    // public System.Int32 get_x()
    // Offset: 0x9C538C
    int get_x();
    // public System.Int32 get_y()
    // Offset: 0x9C5394
    int get_y();
    // public System.Int32 get_width()
    // Offset: 0x9C539C
    int get_width();
    // public System.Int32 get_height()
    // Offset: 0x9C53A4
    int get_height();
    // static public UnityEngine.TextCore.GlyphRect get_zero()
    // Offset: 0x18AC738
    static UnityEngine::TextCore::GlyphRect get_zero();
    // public System.Void .ctor(System.Int32 x, System.Int32 y, System.Int32 width, System.Int32 height)
    // Offset: 0x9C53AC
    static GlyphRect* New_ctor(int x, int y, int width, int height);
    // static private System.Void .cctor()
    // Offset: 0x18AC94C
    static void _cctor();
    // public override System.Int32 GetHashCode()
    // Offset: 0x9C53B8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x9C53C0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(UnityEngine.TextCore.GlyphRect other)
    // Offset: 0x9C53C8
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.TextCore.GlyphRect other)
    bool Equals(UnityEngine::TextCore::GlyphRect other);
  }; // UnityEngine.TextCore.GlyphRect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextCore::GlyphRect, "UnityEngine.TextCore", "GlyphRect");
#pragma pack(pop)
