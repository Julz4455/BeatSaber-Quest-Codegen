// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: ObstacleExecutionRating
#include "GlobalNamespace/ObstacleExecutionRating.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: ObstacleExecutionRating.get_rating
GlobalNamespace::ObstacleExecutionRating::Rating GlobalNamespace::ObstacleExecutionRating::get_rating() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::ObstacleExecutionRating::Rating>(this, "get_rating"));
}
// Autogenerated method: ObstacleExecutionRating.set_rating
void GlobalNamespace::ObstacleExecutionRating::set_rating(GlobalNamespace::ObstacleExecutionRating::Rating value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_rating", value));
}
// Autogenerated method: ObstacleExecutionRating..ctor
GlobalNamespace::ObstacleExecutionRating* GlobalNamespace::ObstacleExecutionRating::New_ctor(float time, GlobalNamespace::ObstacleExecutionRating::Rating rating) {
  return (ObstacleExecutionRating*)THROW_UNLESS(il2cpp_utils::New("", "ObstacleExecutionRating", time, rating));
}
