// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior
#include "UnityEngine/ProBuilder/KdTree/AddDuplicateBehavior.hpp"
// Including type: UnityEngine.ProBuilder.KdTree.HyperRect`1
#include "UnityEngine/ProBuilder/KdTree/HyperRect_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // Skipping declaration: <>c__DisplayClass33_0 because it is already included!
  // Skipping declaration: <GetEnumerator>d__33 because it is already included!
  // Forward declaring type: KdTreeNode`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class KdTreeNode_2;
  // Forward declaring type: ITypeMath`1<T>
  template<typename T>
  class ITypeMath_1;
  // Forward declaring type: NearestNeighbourList`2<TItem, TDistance>
  template<typename TItem, typename TDistance>
  class NearestNeighbourList_2;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // Autogenerated type: UnityEngine.ProBuilder.KdTree.KdTree`2
  template<typename TKey, typename TValue>
  class KdTree_2 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*> {
    public:
    // Nested type: UnityEngine::ProBuilder::KdTree::KdTree_2::$$c__DisplayClass33_0<TKey, TValue>
    class $$c__DisplayClass33_0;
    // Nested type: UnityEngine::ProBuilder::KdTree::KdTree_2::$GetEnumerator$d__33<TKey, TValue>
    class $GetEnumerator$d__33;
    // Autogenerated type: UnityEngine.ProBuilder.KdTree.KdTree`2/<>c__DisplayClass33_0
    class $$c__DisplayClass33_0 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = KdTree_2<TKey, TValue>*;
      // public System.Collections.Generic.Stack`1<UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue>> left
      // Offset: 0x0
      System::Collections::Generic::Stack_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* left;
      // public System.Collections.Generic.Stack`1<UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue>> right
      // Offset: 0x0
      System::Collections::Generic::Stack_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* right;
      // System.Void <GetEnumerator>b__0(UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue> node)
      // Offset: 0xFFFFFFFF
      void $GetEnumerator$b__0(UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node) {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "<GetEnumerator>b__0", node));
      }
      // System.Void <GetEnumerator>b__1(UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue> node)
      // Offset: 0xFFFFFFFF
      void $GetEnumerator$b__1(UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node) {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "<GetEnumerator>b__1", node));
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename KdTree_2<TKey, TValue>::$$c__DisplayClass33_0* New_ctor() {
        return (typename KdTree_2<TKey, TValue>::$$c__DisplayClass33_0*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename KdTree_2<TKey, TValue>::$$c__DisplayClass33_0*>::get())));
      }
    }; // UnityEngine.ProBuilder.KdTree.KdTree`2/<>c__DisplayClass33_0
    // Autogenerated type: UnityEngine.ProBuilder.KdTree.KdTree`2/<GetEnumerator>d__33
    class $GetEnumerator$d__33 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = KdTree_2<TKey, TValue>*;
      // private System.Int32 <>1__state
      // Offset: 0x0
      int $$1__state;
      // private UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue> <>2__current
      // Offset: 0x0
      UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* $$2__current;
      // public UnityEngine.ProBuilder.KdTree.KdTree`2<TKey,TValue> <>4__this
      // Offset: 0x0
      UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>* $$4__this;
      // private UnityEngine.ProBuilder.KdTree.KdTree`2/<>c__DisplayClass33_0<TKey,TValue> <>8__1
      // Offset: 0x0
      typename UnityEngine::ProBuilder::KdTree::KdTree_2<TKey, TValue>::$$c__DisplayClass33_0* $$8__1;
      // private System.Action`1<UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue>> <addLeft>5__2
      // Offset: 0x0
      System::Action_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* $addLeft$5__2;
      // private System.Action`1<UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue>> <addRight>5__3
      // Offset: 0x0
      System::Action_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* $addRight$5__3;
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFF
      static typename KdTree_2<TKey, TValue>::$GetEnumerator$d__33* New_ctor(int $$1__state) {
        return (typename KdTree_2<TKey, TValue>::$GetEnumerator$d__33*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename KdTree_2<TKey, TValue>::$GetEnumerator$d__33*>::get(), $$1__state)));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.IDisposable
      // Base method: System.Void IDisposable::Dispose()
      void System_IDisposable_Dispose() {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.IDisposable.Dispose"));
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Boolean IEnumerator::MoveNext()
      bool MoveNext() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
      }
      // private UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue> System.Collections.Generic.IEnumerator<UnityEngine.ProBuilder.KdTree.KdTreeNode<TKey,TValue>>.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.Generic.IEnumerator`1
      // Base method: T IEnumerator`1::get_Current()
      UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* System_Collections_Generic_IEnumerator_1_get_Current() {
        return THROW_UNLESS((il2cpp_utils::RunMethod<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>(this, "System.Collections.Generic.IEnumerator<UnityEngine.ProBuilder.KdTree.KdTreeNode<TKey,TValue>>.get_Current")));
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Void IEnumerator::Reset()
      void System_Collections_IEnumerator_Reset() {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IEnumerator.Reset"));
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Object IEnumerator::get_Current()
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "System.Collections.IEnumerator.get_Current"));
      }
    }; // UnityEngine.ProBuilder.KdTree.KdTree`2/<GetEnumerator>d__33
    // private System.Int32 dimensions
    // Offset: 0x0
    int dimensions;
    // private UnityEngine.ProBuilder.KdTree.ITypeMath`1<TKey> typeMath
    // Offset: 0x0
    UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* typeMath;
    // private UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue> root
    // Offset: 0x0
    UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* root;
    // private UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior <AddDuplicateBehavior>k__BackingField
    // Offset: 0x0
    UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior AddDuplicateBehavior;
    // private System.Int32 <Count>k__BackingField
    // Offset: 0x0
    int Count;
    // public System.Void .ctor(System.Int32 dimensions, UnityEngine.ProBuilder.KdTree.ITypeMath`1<TKey> typeMath)
    // Offset: 0xFFFFFFFF
    static KdTree_2<TKey, TValue>* New_ctor(int dimensions, UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* typeMath) {
      return (KdTree_2<TKey, TValue>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<KdTree_2<TKey, TValue>*>::get(), dimensions, typeMath)));
    }
    // public System.Void .ctor(System.Int32 dimensions, UnityEngine.ProBuilder.KdTree.ITypeMath`1<TKey> typeMath, UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior addDuplicateBehavior)
    // Offset: 0xFFFFFFFF
    static KdTree_2<TKey, TValue>* New_ctor(int dimensions, UnityEngine::ProBuilder::KdTree::ITypeMath_1<TKey>* typeMath, UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior addDuplicateBehavior) {
      return (KdTree_2<TKey, TValue>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<KdTree_2<TKey, TValue>*>::get(), dimensions, typeMath, addDuplicateBehavior)));
    }
    // public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior get_AddDuplicateBehavior()
    // Offset: 0xFFFFFFFF
    UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior get_AddDuplicateBehavior() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior>(this, "get_AddDuplicateBehavior"));
    }
    // private System.Void set_AddDuplicateBehavior(UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior value)
    // Offset: 0xFFFFFFFF
    void set_AddDuplicateBehavior(UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_AddDuplicateBehavior", value));
    }
    // public System.Boolean Add(TKey[] point, TValue value)
    // Offset: 0xFFFFFFFF
    bool Add(::Array<TKey>* point, TValue value) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Add", point, value));
    }
    // private System.Void AddNearestNeighbours(UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue> node, TKey[] target, UnityEngine.ProBuilder.KdTree.HyperRect`1<TKey> rect, System.Int32 depth, UnityEngine.ProBuilder.KdTree.NearestNeighbourList`2<UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue>,TKey> nearestNeighbours, TKey maxSearchRadiusSquared)
    // Offset: 0xFFFFFFFF
    void AddNearestNeighbours(UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node, ::Array<TKey>* target, UnityEngine::ProBuilder::KdTree::HyperRect_1<TKey> rect, int depth, UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*, TKey>* nearestNeighbours, TKey maxSearchRadiusSquared) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddNearestNeighbours", node, target, rect, depth, nearestNeighbours, maxSearchRadiusSquared));
    }
    // public UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue>[] RadialSearch(TKey[] center, TKey radius, System.Int32 count)
    // Offset: 0xFFFFFFFF
    ::Array<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* RadialSearch(::Array<TKey>* center, TKey radius, int count) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<::Array<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>(this, "RadialSearch", center, radius, count)));
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    int get_Count() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
    }
    // private System.Void set_Count(System.Int32 value)
    // Offset: 0xFFFFFFFF
    void set_Count(int value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Count", value));
    }
    // private System.Void AddNodeToStringBuilder(UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue> node, System.Text.StringBuilder sb, System.Int32 depth)
    // Offset: 0xFFFFFFFF
    void AddNodeToStringBuilder(UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>* node, System::Text::StringBuilder* sb, int depth) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddNodeToStringBuilder", node, sb, depth));
    }
    // public System.Collections.Generic.IEnumerator`1<UnityEngine.ProBuilder.KdTree.KdTreeNode`2<TKey,TValue>> GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>* GetEnumerator() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>(this, "GetEnumerator")));
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "ToString"));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
    }
  }; // UnityEngine.ProBuilder.KdTree.KdTree`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ProBuilder::KdTree::KdTree_2, "UnityEngine.ProBuilder.KdTree", "KdTree`2");
#pragma pack(pop)
