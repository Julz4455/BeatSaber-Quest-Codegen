// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: QueryTriggerInteraction
  struct QueryTriggerInteraction;
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PhysicsScene
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CCE830
  struct PhysicsScene/*, public System::ValueType, public System::IEquatable_1<UnityEngine::PhysicsScene>*/ {
    public:
    // private System.Int32 m_Handle
    // Size: 0x4
    // Offset: 0x0
    int m_Handle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PhysicsScene
    constexpr PhysicsScene(int m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::PhysicsScene>
    operator System::IEquatable_1<UnityEngine::PhysicsScene>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::PhysicsScene>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Handle;
    }
    // public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xE30B4C
    bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_RaycastTest(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x22C1E4C
    static bool Internal_RaycastTest(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public System.Boolean Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xE30B54
    bool Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_Raycast(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, System.Single maxDistance, ref UnityEngine.RaycastHit hit, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x22C1F3C
    static bool Internal_Raycast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, float maxDistance, UnityEngine::RaycastHit& hit, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public System.Int32 Raycast(UnityEngine.Vector3 origin, UnityEngine.Vector3 direction, UnityEngine.RaycastHit[] raycastHits, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xE30B5C
    int Raycast(UnityEngine::Vector3 origin, UnityEngine::Vector3 direction, ::Array<UnityEngine::RaycastHit>* raycastHits, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Int32 Internal_RaycastNonAlloc(UnityEngine.PhysicsScene physicsScene, UnityEngine.Ray ray, UnityEngine.RaycastHit[] raycastHits, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x22C204C
    static int Internal_RaycastNonAlloc(UnityEngine::PhysicsScene physicsScene, UnityEngine::Ray ray, ::Array<UnityEngine::RaycastHit>* raycastHits, float maxDistance, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Query_CapsuleCast(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, ref UnityEngine.RaycastHit hitInfo, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x22C2158
    static bool Query_CapsuleCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float radius, UnityEngine::Vector3 direction, float maxDistance, UnityEngine::RaycastHit& hitInfo, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_CapsuleCast(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x22C22AC
    static bool Internal_CapsuleCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public System.Boolean CapsuleCast(UnityEngine.Vector3 point1, UnityEngine.Vector3 point2, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xE30B64
    bool CapsuleCast(UnityEngine::Vector3 point1, UnityEngine::Vector3 point2, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Query_SphereCast(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, System.Single maxDistance, ref UnityEngine.RaycastHit hitInfo, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x22C2414
    static bool Query_SphereCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, float maxDistance, UnityEngine::RaycastHit& hitInfo, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_SphereCast(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x22C254C
    static bool Internal_SphereCast(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public System.Boolean SphereCast(UnityEngine.Vector3 origin, System.Single radius, UnityEngine.Vector3 direction, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xE30B84
    bool SphereCast(UnityEngine::Vector3 origin, float radius, UnityEngine::Vector3 direction, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Int32 OverlapBoxNonAlloc_Internal(UnityEngine.PhysicsScene physicsScene, UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Collider[] results, UnityEngine.Quaternion orientation, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x22C269C
    static int OverlapBoxNonAlloc_Internal(UnityEngine::PhysicsScene physicsScene, UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::Array<UnityEngine::Collider*>* results, UnityEngine::Quaternion orientation, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public System.Int32 OverlapBox(UnityEngine.Vector3 center, UnityEngine.Vector3 halfExtents, UnityEngine.Collider[] results, UnityEngine.Quaternion orientation, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0xE30B8C
    int OverlapBox(UnityEngine::Vector3 center, UnityEngine::Vector3 halfExtents, ::Array<UnityEngine::Collider*>* results, UnityEngine::Quaternion orientation, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_RaycastTest_Injected(ref UnityEngine.PhysicsScene physicsScene, ref UnityEngine.Ray ray, System.Single maxDistance, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x22C1EC4
    static bool Internal_RaycastTest_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Ray& ray, float maxDistance, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Internal_Raycast_Injected(ref UnityEngine.PhysicsScene physicsScene, ref UnityEngine.Ray ray, System.Single maxDistance, ref UnityEngine.RaycastHit hit, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x22C1FCC
    static bool Internal_Raycast_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Ray& ray, float maxDistance, UnityEngine::RaycastHit& hit, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Int32 Internal_RaycastNonAlloc_Injected(ref UnityEngine.PhysicsScene physicsScene, ref UnityEngine.Ray ray, UnityEngine.RaycastHit[] raycastHits, System.Single maxDistance, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x22C20D8
    static int Internal_RaycastNonAlloc_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Ray& ray, ::Array<UnityEngine::RaycastHit>* raycastHits, float maxDistance, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Query_CapsuleCast_Injected(ref UnityEngine.PhysicsScene physicsScene, ref UnityEngine.Vector3 point1, ref UnityEngine.Vector3 point2, System.Single radius, ref UnityEngine.Vector3 direction, System.Single maxDistance, ref UnityEngine.RaycastHit hitInfo, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x22C220C
    static bool Query_CapsuleCast_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Vector3& point1, UnityEngine::Vector3& point2, float radius, UnityEngine::Vector3& direction, float maxDistance, UnityEngine::RaycastHit& hitInfo, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Boolean Query_SphereCast_Injected(ref UnityEngine.PhysicsScene physicsScene, ref UnityEngine.Vector3 origin, System.Single radius, ref UnityEngine.Vector3 direction, System.Single maxDistance, ref UnityEngine.RaycastHit hitInfo, System.Int32 layerMask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x22C24B4
    static bool Query_SphereCast_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Vector3& origin, float radius, UnityEngine::Vector3& direction, float maxDistance, UnityEngine::RaycastHit& hitInfo, int layerMask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // static private System.Int32 OverlapBoxNonAlloc_Internal_Injected(ref UnityEngine.PhysicsScene physicsScene, ref UnityEngine.Vector3 center, ref UnityEngine.Vector3 halfExtents, UnityEngine.Collider[] results, ref UnityEngine.Quaternion orientation, System.Int32 mask, UnityEngine.QueryTriggerInteraction queryTriggerInteraction)
    // Offset: 0x22C272C
    static int OverlapBoxNonAlloc_Internal_Injected(UnityEngine::PhysicsScene& physicsScene, UnityEngine::Vector3& center, UnityEngine::Vector3& halfExtents, ::Array<UnityEngine::Collider*>* results, UnityEngine::Quaternion& orientation, int mask, UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
    // public override System.String ToString()
    // Offset: 0xE30B24
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xE30B2C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xE30B34
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Boolean Equals(UnityEngine.PhysicsScene other)
    // Offset: 0xE30B3C
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.PhysicsScene other)
    bool Equals(UnityEngine::PhysicsScene other);
  }; // UnityEngine.PhysicsScene
  #pragma pack(pop)
  static check_size<sizeof(PhysicsScene), 0 + sizeof(int)> __UnityEngine_PhysicsSceneSizeCheck;
  static_assert(sizeof(PhysicsScene) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PhysicsScene, "UnityEngine", "PhysicsScene");
