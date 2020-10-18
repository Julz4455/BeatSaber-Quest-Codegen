// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: BeatmapSelectionView
#include "GlobalNamespace/BeatmapSelectionView.hpp"
// Including type: LevelBar
#include "GlobalNamespace/LevelBar.hpp"
// Including type: TMPro.TextMeshProUGUI
#include "TMPro/TextMeshProUGUI.hpp"
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
// Including type: BeatmapCharacteristicSO
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
// Including type: BeatmapDifficulty
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapSelectionView.SetBeatmap
void GlobalNamespace::BeatmapSelectionView::SetBeatmap(GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty beatmapDifficulty) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetBeatmap", beatmapLevel, beatmapCharacteristic, beatmapDifficulty));
}
// Autogenerated method: BeatmapSelectionView..ctor
GlobalNamespace::BeatmapSelectionView* GlobalNamespace::BeatmapSelectionView::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<BeatmapSelectionView*>());
}
