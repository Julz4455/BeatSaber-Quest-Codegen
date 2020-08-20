// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.IPlayerEditorConnectionNative
#include "UnityEngine/IPlayerEditorConnectionNative.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.PlayerConnectionInternal
  class PlayerConnectionInternal : public ::Il2CppObject, public UnityEngine::IPlayerEditorConnectionNative {
    public:
    // static private System.Boolean IsConnected()
    // Offset: 0x1377240
    static bool IsConnected();
    // static private System.Void Initialize()
    // Offset: 0x13771D8
    static void Initialize();
    // static private System.Void RegisterInternal(System.String messageId)
    // Offset: 0x1377098
    static void RegisterInternal(::Il2CppString* messageId);
    // static private System.Void UnregisterInternal(System.String messageId)
    // Offset: 0x1377164
    static void UnregisterInternal(::Il2CppString* messageId);
    // static private System.Void SendMessage(System.String messageId, System.Byte[] data, System.Int32 playerId)
    // Offset: 0x1376DC0
    static void SendMessage(::Il2CppString* messageId, ::Array<uint8_t>* data, int playerId);
    // static private System.Boolean TrySendMessage(System.String messageId, System.Byte[] data, System.Int32 playerId)
    // Offset: 0x1376F4C
    static bool TrySendMessage(::Il2CppString* messageId, ::Array<uint8_t>* data, int playerId);
    // static private System.Void PollInternal()
    // Offset: 0x1376FD8
    static void PollInternal();
    // static private System.Void DisconnectAll()
    // Offset: 0x13772A8
    static void DisconnectAll();
    // private System.Void UnityEngine.IPlayerEditorConnectionNative.SendMessage(System.Guid messageId, System.Byte[] data, System.Int32 playerId)
    // Offset: 0x1376C90
    // Implemented from: UnityEngine.IPlayerEditorConnectionNative
    // Base method: System.Void IPlayerEditorConnectionNative::SendMessage(System.Guid messageId, System.Byte[] data, System.Int32 playerId)
    void UnityEngine_IPlayerEditorConnectionNative_SendMessage(System::Guid messageId, ::Array<uint8_t>* data, int playerId);
    // private System.Boolean UnityEngine.IPlayerEditorConnectionNative.TrySendMessage(System.Guid messageId, System.Byte[] data, System.Int32 playerId)
    // Offset: 0x1376E18
    // Implemented from: UnityEngine.IPlayerEditorConnectionNative
    // Base method: System.Boolean IPlayerEditorConnectionNative::TrySendMessage(System.Guid messageId, System.Byte[] data, System.Int32 playerId)
    bool UnityEngine_IPlayerEditorConnectionNative_TrySendMessage(System::Guid messageId, ::Array<uint8_t>* data, int playerId);
    // private System.Void UnityEngine.IPlayerEditorConnectionNative.Poll()
    // Offset: 0x1376FA4
    // Implemented from: UnityEngine.IPlayerEditorConnectionNative
    // Base method: System.Void IPlayerEditorConnectionNative::Poll()
    void UnityEngine_IPlayerEditorConnectionNative_Poll();
    // private System.Void UnityEngine.IPlayerEditorConnectionNative.RegisterInternal(System.Guid messageId)
    // Offset: 0x137700C
    // Implemented from: UnityEngine.IPlayerEditorConnectionNative
    // Base method: System.Void IPlayerEditorConnectionNative::RegisterInternal(System.Guid messageId)
    void UnityEngine_IPlayerEditorConnectionNative_RegisterInternal(System::Guid messageId);
    // private System.Void UnityEngine.IPlayerEditorConnectionNative.UnregisterInternal(System.Guid messageId)
    // Offset: 0x13770D8
    // Implemented from: UnityEngine.IPlayerEditorConnectionNative
    // Base method: System.Void IPlayerEditorConnectionNative::UnregisterInternal(System.Guid messageId)
    void UnityEngine_IPlayerEditorConnectionNative_UnregisterInternal(System::Guid messageId);
    // private System.Void UnityEngine.IPlayerEditorConnectionNative.Initialize()
    // Offset: 0x13771A4
    // Implemented from: UnityEngine.IPlayerEditorConnectionNative
    // Base method: System.Void IPlayerEditorConnectionNative::Initialize()
    void UnityEngine_IPlayerEditorConnectionNative_Initialize();
    // private System.Boolean UnityEngine.IPlayerEditorConnectionNative.IsConnected()
    // Offset: 0x137720C
    // Implemented from: UnityEngine.IPlayerEditorConnectionNative
    // Base method: System.Boolean IPlayerEditorConnectionNative::IsConnected()
    bool UnityEngine_IPlayerEditorConnectionNative_IsConnected();
    // private System.Void UnityEngine.IPlayerEditorConnectionNative.DisconnectAll()
    // Offset: 0x1377274
    // Implemented from: UnityEngine.IPlayerEditorConnectionNative
    // Base method: System.Void IPlayerEditorConnectionNative::DisconnectAll()
    void UnityEngine_IPlayerEditorConnectionNative_DisconnectAll();
    // public System.Void .ctor()
    // Offset: 0x136FBE0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlayerConnectionInternal* New_ctor();
  }; // UnityEngine.PlayerConnectionInternal
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerConnectionInternal*, "UnityEngine", "PlayerConnectionInternal");
#pragma pack(pop)
