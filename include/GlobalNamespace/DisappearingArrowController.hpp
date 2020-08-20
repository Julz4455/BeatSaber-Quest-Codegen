// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IManualUpdate
#include "GlobalNamespace/IManualUpdate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorNoteVisuals
  class ColorNoteVisuals;
  // Forward declaring type: CutoutEffect
  class CutoutEffect;
  // Forward declaring type: NoteMovement
  class NoteMovement;
  // Forward declaring type: NoteController
  class NoteController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: DisappearingArrowController
  class DisappearingArrowController : public UnityEngine::MonoBehaviour, public GlobalNamespace::IManualUpdate {
    public:
    // private ColorNoteVisuals _colorNoteVisuals
    // Offset: 0x18
    GlobalNamespace::ColorNoteVisuals* colorNoteVisuals;
    // private UnityEngine.SpriteRenderer[] _spriteRenderers
    // Offset: 0x20
    ::Array<UnityEngine::SpriteRenderer*>* spriteRenderers;
    // private UnityEngine.MeshRenderer _cubeMeshRenderer
    // Offset: 0x28
    UnityEngine::MeshRenderer* cubeMeshRenderer;
    // private CutoutEffect _arrowCutoutEffect
    // Offset: 0x30
    GlobalNamespace::CutoutEffect* arrowCutoutEffect;
    // private NoteMovement _noteMovement
    // Offset: 0x38
    GlobalNamespace::NoteMovement* noteMovement;
    // private System.Single _disappearingNormalStart
    // Offset: 0x40
    float disappearingNormalStart;
    // private System.Single _disappearingNormalEnd
    // Offset: 0x44
    float disappearingNormalEnd;
    // private System.Single _disappearingGhostStart
    // Offset: 0x48
    float disappearingGhostStart;
    // private System.Single _disappearingGhostEnd
    // Offset: 0x4C
    float disappearingGhostEnd;
    // private System.Single[] _initialSpriteAlphas
    // Offset: 0x50
    ::Array<float>* initialSpriteAlphas;
    // private System.Boolean _initialized
    // Offset: 0x58
    bool initialized;
    // private System.Boolean _ghostNote
    // Offset: 0x59
    bool ghostNote;
    // private System.Single _prevArrowTransparency
    // Offset: 0x5C
    float prevArrowTransparency;
    // private System.Single _minDistance
    // Offset: 0x60
    float minDistance;
    // private System.Single _maxDistance
    // Offset: 0x64
    float maxDistance;
    // protected System.Void Awake()
    // Offset: 0x192CAD4
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x192CC4C
    void OnDestroy();
    // private System.Void HandleNoteMovementDidInit()
    // Offset: 0x192CFD8
    void HandleNoteMovementDidInit();
    // private System.Void HandleColorNoteVisualsDidInitEvent(ColorNoteVisuals colorNoteVisuals, NoteController noteController)
    // Offset: 0x192D0E8
    void HandleColorNoteVisualsDidInitEvent(GlobalNamespace::ColorNoteVisuals* colorNoteVisuals, GlobalNamespace::NoteController* noteController);
    // private System.Void SetArrowTransparency(System.Single arrowTransparency)
    // Offset: 0x192CE40
    void SetArrowTransparency(float arrowTransparency);
    // public System.Void ManualUpdate()
    // Offset: 0x192CD9C
    // Implemented from: IManualUpdate
    // Base method: System.Void IManualUpdate::ManualUpdate()
    void ManualUpdate();
    // public System.Void .ctor()
    // Offset: 0x192D258
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static DisappearingArrowController* New_ctor();
  }; // DisappearingArrowController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisappearingArrowController*, "", "DisappearingArrowController");
#pragma pack(pop)
