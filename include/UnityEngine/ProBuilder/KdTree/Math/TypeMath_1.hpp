// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.KdTree.ITypeMath`1
#include "UnityEngine/ProBuilder/KdTree/ITypeMath_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.ProBuilder.KdTree.Math
namespace UnityEngine::ProBuilder::KdTree::Math {
  // Autogenerated type: UnityEngine.ProBuilder.KdTree.Math.TypeMath`1
  template<typename T>
  class TypeMath_1 : public ::Il2CppObject, public UnityEngine::ProBuilder::KdTree::ITypeMath_1<T> {
    public:
    // public System.Boolean AreEqual(T a, T b)
    // Offset: 0xFFFFFFFF
    bool AreEqual(T a, T b) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "AreEqual", a, b));
    }
    // public T get_Zero()
    // Offset: 0xFFFFFFFF
    T get_Zero() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "get_Zero"));
    }
    // public T Add(T a, T b)
    // Offset: 0xFFFFFFFF
    T Add(T a, T b) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "Add", a, b));
    }
    // public T Subtract(T a, T b)
    // Offset: 0xFFFFFFFF
    T Subtract(T a, T b) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "Subtract", a, b));
    }
    // public System.Int32 Compare(T a, T b)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.ProBuilder.KdTree.ITypeMath`1
    // Base method: System.Int32 ITypeMath_1::Compare(T a, T b)
    int Compare(T a, T b) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "Compare", a, b));
    }
    // public System.Boolean AreEqual(T[] a, T[] b)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.ProBuilder.KdTree.ITypeMath`1
    // Base method: System.Boolean ITypeMath_1::AreEqual(T[] a, T[] b)
    bool AreEqual(::Array<T>* a, ::Array<T>* b) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "AreEqual", a, b));
    }
    // public T get_MinValue()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.ProBuilder.KdTree.ITypeMath`1
    // Base method: T ITypeMath_1::get_MinValue()
    T get_MinValue() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "get_MinValue"));
    }
    // public T get_NegativeInfinity()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.ProBuilder.KdTree.ITypeMath`1
    // Base method: T ITypeMath_1::get_NegativeInfinity()
    T get_NegativeInfinity() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "get_NegativeInfinity"));
    }
    // public T get_PositiveInfinity()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.ProBuilder.KdTree.ITypeMath`1
    // Base method: T ITypeMath_1::get_PositiveInfinity()
    T get_PositiveInfinity() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "get_PositiveInfinity"));
    }
    // public T Multiply(T a, T b)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.ProBuilder.KdTree.ITypeMath`1
    // Base method: T ITypeMath_1::Multiply(T a, T b)
    T Multiply(T a, T b) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "Multiply", a, b));
    }
    // public T DistanceSquaredBetweenPoints(T[] a, T[] b)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.ProBuilder.KdTree.ITypeMath`1
    // Base method: T ITypeMath_1::DistanceSquaredBetweenPoints(T[] a, T[] b)
    T DistanceSquaredBetweenPoints(::Array<T>* a, ::Array<T>* b) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "DistanceSquaredBetweenPoints", a, b));
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TypeMath_1<T>* New_ctor() {
      return THROW_UNLESS(il2cpp_utils::New<TypeMath_1<T>*>());
    }
  }; // UnityEngine.ProBuilder.KdTree.Math.TypeMath`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ProBuilder::KdTree::Math::TypeMath_1, "UnityEngine.ProBuilder.KdTree.Math", "TypeMath`1");
#pragma pack(pop)
