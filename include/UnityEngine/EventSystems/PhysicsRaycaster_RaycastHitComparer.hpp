// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.PhysicsRaycaster
#include "UnityEngine/EventSystems/PhysicsRaycaster.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
// Completed includes
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer
  class PhysicsRaycaster::RaycastHitComparer : public ::Il2CppObject, public System::Collections::Generic::IComparer_1<UnityEngine::RaycastHit> {
    public:
    // Get static field: static public UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer instance
    static UnityEngine::EventSystems::PhysicsRaycaster::RaycastHitComparer* _get_instance();
    // Set static field: static public UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer instance
    static void _set_instance(UnityEngine::EventSystems::PhysicsRaycaster::RaycastHitComparer* value);
    // static private System.Void .cctor()
    // Offset: 0xD5B324
    static void _cctor();
    // public System.Int32 Compare(UnityEngine.RaycastHit x, UnityEngine.RaycastHit y)
    // Offset: 0xD5B2D8
    // Implemented from: System.Collections.Generic.IComparer`1
    // Base method: System.Int32 IComparer`1::Compare(UnityEngine.RaycastHit x, UnityEngine.RaycastHit y)
    int Compare(UnityEngine::RaycastHit x, UnityEngine::RaycastHit y);
    // public System.Void .ctor()
    // Offset: 0xD5B31C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PhysicsRaycaster::RaycastHitComparer* New_ctor();
  }; // UnityEngine.EventSystems.PhysicsRaycaster/RaycastHitComparer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::PhysicsRaycaster::RaycastHitComparer*, "UnityEngine.EventSystems", "PhysicsRaycaster/RaycastHitComparer");
#pragma pack(pop)
