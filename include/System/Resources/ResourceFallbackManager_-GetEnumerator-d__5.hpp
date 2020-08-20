// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Resources.ResourceFallbackManager
#include "System/Resources/ResourceFallbackManager.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Autogenerated type: System.Resources.ResourceFallbackManager/<GetEnumerator>d__5
  class ResourceFallbackManager::$GetEnumerator$d__5 : public ::Il2CppObject, public System::Collections::Generic::IEnumerator_1<System::Globalization::CultureInfo*> {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Globalization.CultureInfo <>2__current
    // Offset: 0x18
    System::Globalization::CultureInfo* $$2__current;
    // public System.Resources.ResourceFallbackManager <>4__this
    // Offset: 0x20
    System::Resources::ResourceFallbackManager* $$4__this;
    // private System.Globalization.CultureInfo <currentCulture>5__1
    // Offset: 0x28
    System::Globalization::CultureInfo* $currentCulture$5__1;
    // private System.Boolean <reachedNeutralResourcesCulture>5__2
    // Offset: 0x30
    bool $reachedNeutralResourcesCulture$5__2;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0x10BADF0
    static ResourceFallbackManager::$GetEnumerator$d__5* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x10BAE1C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x10BAE20
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private System.Globalization.CultureInfo System.Collections.Generic.IEnumerator<System.Globalization.CultureInfo>.get_Current()
    // Offset: 0x10BB044
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    System::Globalization::CultureInfo* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x10BB04C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x10BB0AC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // System.Resources.ResourceFallbackManager/<GetEnumerator>d__5
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceFallbackManager::$GetEnumerator$d__5*, "System.Resources", "ResourceFallbackManager/<GetEnumerator>d__5");
#pragma pack(pop)
