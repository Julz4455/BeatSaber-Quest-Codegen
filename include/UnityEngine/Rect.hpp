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
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Rect
  struct Rect : public System::ValueType, public System::IEquatable_1<UnityEngine::Rect> {
    public:
    // private System.Single m_XMin
    // Offset: 0x0
    float m_XMin;
    // private System.Single m_YMin
    // Offset: 0x4
    float m_YMin;
    // private System.Single m_Width
    // Offset: 0x8
    float m_Width;
    // private System.Single m_Height
    // Offset: 0xC
    float m_Height;
    // Creating value type constructor for type: Rect
    constexpr Rect(float m_XMin_ = {}, float m_YMin_ = {}, float m_Width_ = {}, float m_Height_ = {}) noexcept : m_XMin{m_XMin_}, m_YMin{m_YMin_}, m_Width{m_Width_}, m_Height{m_Height_} {}
    // public System.Void .ctor(System.Single x, System.Single y, System.Single width, System.Single height)
    // Offset: 0xDC6A9C
    // ABORTED: conflicts with another method.  Rect(float x, float y, float width, float height);
    // public System.Void .ctor(UnityEngine.Vector2 position, UnityEngine.Vector2 size)
    // Offset: 0xDC6AA8
    Rect(UnityEngine::Vector2 position, UnityEngine::Vector2 size);
    // public System.Void .ctor(UnityEngine.Rect source)
    // Offset: 0xDC6AB4
    // ABORTED: is copy constructor.  Rect(UnityEngine::Rect source);
    // static public UnityEngine.Rect get_zero()
    // Offset: 0x1BA441C
    static UnityEngine::Rect get_zero();
    // static public UnityEngine.Rect MinMaxRect(System.Single xmin, System.Single ymin, System.Single xmax, System.Single ymax)
    // Offset: 0x1BA4430
    static UnityEngine::Rect MinMaxRect(float xmin, float ymin, float xmax, float ymax);
    // public System.Single get_x()
    // Offset: 0xDC6AC0
    float get_x();
    // public System.Void set_x(System.Single value)
    // Offset: 0xDC6AC8
    void set_x(float value);
    // public System.Single get_y()
    // Offset: 0xDC6AD0
    float get_y();
    // public System.Void set_y(System.Single value)
    // Offset: 0xDC6AD8
    void set_y(float value);
    // public UnityEngine.Vector2 get_position()
    // Offset: 0xDC6AE0
    UnityEngine::Vector2 get_position();
    // public System.Void set_position(UnityEngine.Vector2 value)
    // Offset: 0xDC6B10
    void set_position(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_center()
    // Offset: 0xDC6B18
    UnityEngine::Vector2 get_center();
    // public System.Void set_center(UnityEngine.Vector2 value)
    // Offset: 0xDC6B20
    void set_center(UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_min()
    // Offset: 0xDC6B3C
    UnityEngine::Vector2 get_min();
    // public UnityEngine.Vector2 get_max()
    // Offset: 0xDC6B6C
    UnityEngine::Vector2 get_max();
    // public System.Single get_width()
    // Offset: 0xDC6BA8
    float get_width();
    // public System.Void set_width(System.Single value)
    // Offset: 0xDC6BB0
    void set_width(float value);
    // public System.Single get_height()
    // Offset: 0xDC6BB8
    float get_height();
    // public System.Void set_height(System.Single value)
    // Offset: 0xDC6BC0
    void set_height(float value);
    // public UnityEngine.Vector2 get_size()
    // Offset: 0xDC6BC8
    UnityEngine::Vector2 get_size();
    // public System.Void set_size(UnityEngine.Vector2 value)
    // Offset: 0xDC6BF8
    void set_size(UnityEngine::Vector2 value);
    // public System.Single get_xMin()
    // Offset: 0xDC6C00
    float get_xMin();
    // public System.Void set_xMin(System.Single value)
    // Offset: 0xDC6C08
    void set_xMin(float value);
    // public System.Single get_yMin()
    // Offset: 0xDC6C24
    float get_yMin();
    // public System.Void set_yMin(System.Single value)
    // Offset: 0xDC6C2C
    void set_yMin(float value);
    // public System.Single get_xMax()
    // Offset: 0xDC6C48
    float get_xMax();
    // public System.Void set_xMax(System.Single value)
    // Offset: 0xDC6C58
    void set_xMax(float value);
    // public System.Single get_yMax()
    // Offset: 0xDC6C68
    float get_yMax();
    // public System.Void set_yMax(System.Single value)
    // Offset: 0xDC6C78
    void set_yMax(float value);
    // public System.Boolean Contains(UnityEngine.Vector2 point)
    // Offset: 0xDC6C88
    bool Contains(UnityEngine::Vector2 point);
    // public System.Boolean Contains(UnityEngine.Vector3 point)
    // Offset: 0xDC6CCC
    bool Contains(UnityEngine::Vector3 point);
    // static private UnityEngine.Rect OrderMinMax(UnityEngine.Rect rect)
    // Offset: 0x1BA46CC
    static UnityEngine::Rect OrderMinMax(UnityEngine::Rect rect);
    // public System.Boolean Overlaps(UnityEngine.Rect other)
    // Offset: 0xDC6D10
    bool Overlaps(UnityEngine::Rect other);
    // public System.Boolean Overlaps(UnityEngine.Rect other, System.Boolean allowInverse)
    // Offset: 0xDC6D18
    bool Overlaps(UnityEngine::Rect other, bool allowInverse);
    // public override System.Int32 GetHashCode()
    // Offset: 0xDC6D24
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xDC6D2C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Boolean Equals(UnityEngine.Rect other)
    // Offset: 0xDC6D34
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.Rect other)
    bool Equals(UnityEngine::Rect other);
    // public override System.String ToString()
    // Offset: 0xDC6D3C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Rect
  // static public System.Boolean op_Inequality(UnityEngine.Rect lhs, UnityEngine.Rect rhs)
  // Offset: 0x1BA47D8
  bool operator !=(const UnityEngine::Rect& lhs, const UnityEngine::Rect& rhs);
  // static public System.Boolean op_Equality(UnityEngine.Rect lhs, UnityEngine.Rect rhs)
  // Offset: 0x1BA480C
  bool operator ==(const UnityEngine::Rect& lhs, const UnityEngine::Rect& rhs);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rect, "UnityEngine", "Rect");
#pragma pack(pop)
