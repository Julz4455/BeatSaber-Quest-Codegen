// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: MissionNodesHelper
#include "GlobalNamespace/MissionNodesHelper.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
// Including type: MissionNode
#include "GlobalNamespace/MissionNode.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MissionNodesHelper.GetAllNodesFromRoot
System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode*>* GlobalNamespace::MissionNodesHelper::GetAllNodesFromRoot(GlobalNamespace::MissionNode* root) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode*>*>("", "MissionNodesHelper", "GetAllNodesFromRoot", root));
}
// Autogenerated method: MissionNodesHelper.VisitAllTree
void GlobalNamespace::MissionNodesHelper::VisitAllTree(GlobalNamespace::MissionNode* node, System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode*>* visitedNodes) {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "MissionNodesHelper", "VisitAllTree", node, visitedNodes));
}
// Autogenerated method: MissionNodesHelper.CycleDetection
bool GlobalNamespace::MissionNodesHelper::CycleDetection(GlobalNamespace::MissionNode* node) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "MissionNodesHelper", "CycleDetection", node));
}
// Autogenerated method: MissionNodesHelper.CycleDetection
bool GlobalNamespace::MissionNodesHelper::CycleDetection(GlobalNamespace::MissionNode* node, int layer, System::Collections::Generic::Dictionary_2<GlobalNamespace::MissionNode*, int>* layers) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "MissionNodesHelper", "CycleDetection", node, layer, layers));
}
// Autogenerated method: MissionNodesHelper.FinalNodeIsFinal
bool GlobalNamespace::MissionNodesHelper::FinalNodeIsFinal(GlobalNamespace::MissionNode* finalNode, GlobalNamespace::MissionNode* rootNode) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "MissionNodesHelper", "FinalNodeIsFinal", finalNode, rootNode));
}
// Autogenerated method: MissionNodesHelper.FinalNodeIsFinal
bool GlobalNamespace::MissionNodesHelper::FinalNodeIsFinal(GlobalNamespace::MissionNode* finalNode, GlobalNamespace::MissionNode* node, System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode*>* visitedNodes) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>("", "MissionNodesHelper", "FinalNodeIsFinal", finalNode, node, visitedNodes));
}
// Autogenerated method: MissionNodesHelper..ctor
GlobalNamespace::MissionNodesHelper* GlobalNamespace::MissionNodesHelper::New_ctor() {
  return (MissionNodesHelper*)THROW_UNLESS(il2cpp_utils::New("", "MissionNodesHelper"));
}
