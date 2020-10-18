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
}
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: DTSweepConstraint
  class DTSweepConstraint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
  class TriangulationPoint : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint> <Edges>k__BackingField
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* Edges;
    // public System.Double X
    // Offset: 0x18
    double X;
    // public System.Double Y
    // Offset: 0x20
    double Y;
    // public System.Int32 Index
    // Offset: 0x28
    int Index;
    // public System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint> get_Edges()
    // Offset: 0x21C8530
    System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* get_Edges();
    // private System.Void set_Edges(System.Collections.Generic.List`1<UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint> value)
    // Offset: 0x21C8538
    void set_Edges(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*>* value);
    // public System.Void .ctor(System.Double x, System.Double y, System.Int32 index)
    // Offset: 0x21C6C0C
    static TriangulationPoint* New_ctor(double x, double y, int index);
    // public System.Void AddEdge(UnityEngine.ProBuilder.Poly2Tri.DTSweepConstraint e)
    // Offset: 0x21C6424
    void AddEdge(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* e);
    // public System.Boolean get_HasEdges()
    // Offset: 0x21C27FC
    bool get_HasEdges();
    // public override System.String ToString()
    // Offset: 0x21C8540
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint");
#pragma pack(pop)
