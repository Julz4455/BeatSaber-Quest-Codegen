// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView/IDataSource
#include "HMUI/TableView_IDataSource.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerResultsTableCell
  class MultiplayerResultsTableCell;
  // Forward declaring type: MultiplayerOffsetPositionByLocalPlayerPosition
  class MultiplayerOffsetPositionByLocalPlayerPosition;
  // Forward declaring type: MultiplayerLayoutProvider
  class MultiplayerLayoutProvider;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: TableView because it is already included!
  // Forward declaring type: TableCell
  class TableCell;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: AudioSource
  class AudioSource;
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerResultsTableView
  class MultiplayerResultsTableView : public UnityEngine::MonoBehaviour, public HMUI::TableView::IDataSource {
    public:
    // Nested type: GlobalNamespace::MultiplayerResultsTableView::Data
    class Data;
    // Nested type: GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass31_0
    class $$c__DisplayClass31_0;
    // Nested type: GlobalNamespace::MultiplayerResultsTableView::$$c__DisplayClass31_1
    class $$c__DisplayClass31_1;
    // Nested type: GlobalNamespace::MultiplayerResultsTableView::$PlayRandomRowSlideInSound$d__32
    class $PlayRandomRowSlideInSound$d__32;
    // Nested type: GlobalNamespace::MultiplayerResultsTableView::$PlayAvatarSlideInSound$d__33
    class $PlayAvatarSlideInSound$d__33;
    // private HMUI.TableView _tableView
    // Offset: 0x18
    HMUI::TableView* tableView;
    // private UnityEngine.RectTransform _tableViewRectTransform
    // Offset: 0x20
    UnityEngine::RectTransform* tableViewRectTransform;
    // private MultiplayerResultsTableCell _winnerTableCell
    // Offset: 0x28
    GlobalNamespace::MultiplayerResultsTableCell* winnerTableCell;
    // private MultiplayerResultsTableCell _cellPrefab
    // Offset: 0x30
    GlobalNamespace::MultiplayerResultsTableCell* cellPrefab;
    // private System.Single _startRowXPosition
    // Offset: 0x38
    float startRowXPosition;
    // private System.Single _rowHeight
    // Offset: 0x3C
    float rowHeight;
    // private System.Single _rowXOffset
    // Offset: 0x40
    float rowXOffset;
    // private System.Single _animationDuration
    // Offset: 0x44
    float animationDuration;
    // private System.Single _animationSeparationTime
    // Offset: 0x48
    float animationSeparationTime;
    // private System.Single _winnerAnimationDuration
    // Offset: 0x4C
    float winnerAnimationDuration;
    // private System.Single _duelTablePosXOffset
    // Offset: 0x50
    float duelTablePosXOffset;
    // private MultiplayerOffsetPositionByLocalPlayerPosition _multiplayerOffsetByLocalPlayerPosition
    // Offset: 0x58
    GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* multiplayerOffsetByLocalPlayerPosition;
    // private UnityEngine.AudioSource _outroSfxAudioSource
    // Offset: 0x60
    UnityEngine::AudioSource* outroSfxAudioSource;
    // private UnityEngine.AudioClip[] _rowSlideAudioClips
    // Offset: 0x68
    ::Array<UnityEngine::AudioClip*>* rowSlideAudioClips;
    // private UnityEngine.AudioClip _avatarSlideAudioClip
    // Offset: 0x70
    UnityEngine::AudioClip* avatarSlideAudioClip;
    // private readonly Tweening.TweeningManager _tweeningManager
    // Offset: 0x78
    Tweening::TweeningManager* tweeningManager;
    // private readonly MultiplayerLayoutProvider _layoutProvider
    // Offset: 0x80
    GlobalNamespace::MultiplayerLayoutProvider* layoutProvider;
    // private readonly Zenject.DiContainer _container
    // Offset: 0x88
    Zenject::DiContainer* container;
    // private System.Collections.Generic.IReadOnlyList`1<MultiplayerResultsTableView/Data> _dataList
    // Offset: 0x90
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerResultsTableView::Data*>* dataList;
    // private UnityEngine.Vector3 _positionOffset
    // Offset: 0x98
    UnityEngine::Vector3 positionOffset;
    // private UnityEngine.Quaternion _rotationOffset
    // Offset: 0xA4
    UnityEngine::Quaternion rotationOffset;
    // private UnityEngine.Vector3 _lastParentPosition
    // Offset: 0xB4
    UnityEngine::Vector3 lastParentPosition;
    // private UnityEngine.Quaternion _lastParentRotation
    // Offset: 0xC0
    UnityEngine::Quaternion lastParentRotation;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kCellIdentifier
    static constexpr const char* kCellIdentifier = "Cell";
    // Get static field: static private System.String kCellIdentifier
    static ::Il2CppString* _get_kCellIdentifier();
    // Set static field: static private System.String kCellIdentifier
    static void _set_kCellIdentifier(::Il2CppString* value);
    // protected System.Void Awake()
    // Offset: 0xF02238
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xF02298
    void OnDestroy();
    // public System.Void SetData(System.Collections.Generic.IReadOnlyList`1<MultiplayerResultsTableView/Data> dataList)
    // Offset: 0xEFE464
    void SetData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::MultiplayerResultsTableView::Data*>* dataList);
    // public System.Single StartAnimation()
    // Offset: 0xEFE894
    float StartAnimation();
    // private System.Collections.IEnumerator PlayRandomRowSlideInSound(System.Single delay)
    // Offset: 0xF0278C
    System::Collections::IEnumerator* PlayRandomRowSlideInSound(float delay);
    // private System.Collections.IEnumerator PlayAvatarSlideInSound(System.Single delay)
    // Offset: 0xF02844
    System::Collections::IEnumerator* PlayAvatarSlideInSound(float delay);
    // private System.Void <StartAnimation>b__31_1()
    // Offset: 0xF02918
    void $StartAnimation$b__31_1();
    // private System.Void <StartAnimation>b__31_4()
    // Offset: 0xF0294C
    void $StartAnimation$b__31_4();
    // private System.Void <StartAnimation>b__31_5(System.Single val)
    // Offset: 0xF02980
    void $StartAnimation$b__31_5(float val);
    // public System.Single CellSize()
    // Offset: 0xF021C0
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0xF021C8
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0xF02330
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int idx);
    // public System.Void .ctor()
    // Offset: 0xF028FC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerResultsTableView* New_ctor();
  }; // MultiplayerResultsTableView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerResultsTableView*, "", "MultiplayerResultsTableView");
#pragma pack(pop)
