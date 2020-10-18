// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.UIntPtr
#include "System/UIntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
  // Forward declaring type: IMessage
  class IMessage;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: IContextProperty
  class IContextProperty;
  // Forward declaring type: DynamicPropertyCollection
  class DynamicPropertyCollection;
  // Forward declaring type: ContextCallbackObject
  class ContextCallbackObject;
  // Forward declaring type: IDynamicProperty
  class IDynamicProperty;
  // Forward declaring type: CrossContextDelegate
  class CrossContextDelegate;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: LocalDataStoreHolder
  class LocalDataStoreHolder;
  // Forward declaring type: LocalDataStoreMgr
  class LocalDataStoreMgr;
  // Forward declaring type: ContextBoundObject
  class ContextBoundObject;
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
  // Forward declaring type: LocalDataStore
  class LocalDataStore;
  // Forward declaring type: LocalDataStoreSlot
  class LocalDataStoreSlot;
}
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Autogenerated type: System.Runtime.Remoting.Contexts.Context
  class Context : public ::Il2CppObject {
    public:
    // private System.Int32 domain_id
    // Offset: 0x10
    int domain_id;
    // private System.Int32 context_id
    // Offset: 0x14
    int context_id;
    // private System.UIntPtr static_data
    // Offset: 0x18
    System::UIntPtr static_data;
    // private System.UIntPtr data
    // Offset: 0x20
    System::UIntPtr data;
    // private System.Runtime.Remoting.Messaging.IMessageSink server_context_sink_chain
    // Offset: 0x28
    System::Runtime::Remoting::Messaging::IMessageSink* server_context_sink_chain;
    // private System.Runtime.Remoting.Messaging.IMessageSink client_context_sink_chain
    // Offset: 0x30
    System::Runtime::Remoting::Messaging::IMessageSink* client_context_sink_chain;
    // private System.Collections.Generic.List`1<System.Runtime.Remoting.Contexts.IContextProperty> context_properties
    // Offset: 0x38
    System::Collections::Generic::List_1<System::Runtime::Remoting::Contexts::IContextProperty*>* context_properties;
    // private System.LocalDataStoreHolder _localDataStore
    // Offset: 0x40
    System::LocalDataStoreHolder* localDataStore;
    // private System.Runtime.Remoting.Contexts.DynamicPropertyCollection context_dynamic_properties
    // Offset: 0x48
    System::Runtime::Remoting::Contexts::DynamicPropertyCollection* context_dynamic_properties;
    // private System.Runtime.Remoting.Contexts.ContextCallbackObject callback_object
    // Offset: 0x50
    System::Runtime::Remoting::Contexts::ContextCallbackObject* callback_object;
    // Get static field: static private System.Object[] local_slots
    static ::Array<::Il2CppObject*>* _get_local_slots();
    // Set static field: static private System.Object[] local_slots
    static void _set_local_slots(::Array<::Il2CppObject*>* value);
    // Get static field: static private System.Runtime.Remoting.Messaging.IMessageSink default_server_context_sink
    static System::Runtime::Remoting::Messaging::IMessageSink* _get_default_server_context_sink();
    // Set static field: static private System.Runtime.Remoting.Messaging.IMessageSink default_server_context_sink
    static void _set_default_server_context_sink(System::Runtime::Remoting::Messaging::IMessageSink* value);
    // Get static field: static private System.Int32 global_count
    static int _get_global_count();
    // Set static field: static private System.Int32 global_count
    static void _set_global_count(int value);
    // Get static field: static private System.LocalDataStoreMgr _localDataStoreMgr
    static System::LocalDataStoreMgr* _get__localDataStoreMgr();
    // Set static field: static private System.LocalDataStoreMgr _localDataStoreMgr
    static void _set__localDataStoreMgr(System::LocalDataStoreMgr* value);
    // Get static field: static private System.Runtime.Remoting.Contexts.DynamicPropertyCollection global_dynamic_properties
    static System::Runtime::Remoting::Contexts::DynamicPropertyCollection* _get_global_dynamic_properties();
    // Set static field: static private System.Runtime.Remoting.Contexts.DynamicPropertyCollection global_dynamic_properties
    static void _set_global_dynamic_properties(System::Runtime::Remoting::Contexts::DynamicPropertyCollection* value);
    // static private System.Void RegisterContext(System.Runtime.Remoting.Contexts.Context ctx)
    // Offset: 0x129FF80
    static void RegisterContext(System::Runtime::Remoting::Contexts::Context* ctx);
    // static private System.Void ReleaseContext(System.Runtime.Remoting.Contexts.Context ctx)
    // Offset: 0x129FF84
    static void ReleaseContext(System::Runtime::Remoting::Contexts::Context* ctx);
    // static public System.Runtime.Remoting.Contexts.Context get_DefaultContext()
    // Offset: 0x12A00CC
    static System::Runtime::Remoting::Contexts::Context* get_DefaultContext();
    // public System.Int32 get_ContextID()
    // Offset: 0x12A00D4
    int get_ContextID();
    // public System.Runtime.Remoting.Contexts.IContextProperty[] get_ContextProperties()
    // Offset: 0x12A00DC
    ::Array<System::Runtime::Remoting::Contexts::IContextProperty*>* get_ContextProperties();
    // System.Boolean get_IsDefaultContext()
    // Offset: 0x12A014C
    bool get_IsDefaultContext();
    // System.Boolean get_NeedsContextSink()
    // Offset: 0x12A015C
    bool get_NeedsContextSink();
    // static public System.Boolean RegisterDynamicProperty(System.Runtime.Remoting.Contexts.IDynamicProperty prop, System.ContextBoundObject obj, System.Runtime.Remoting.Contexts.Context ctx)
    // Offset: 0x12A0288
    static bool RegisterDynamicProperty(System::Runtime::Remoting::Contexts::IDynamicProperty* prop, System::ContextBoundObject* obj, System::Runtime::Remoting::Contexts::Context* ctx);
    // static public System.Boolean UnregisterDynamicProperty(System.String name, System.ContextBoundObject obj, System.Runtime.Remoting.Contexts.Context ctx)
    // Offset: 0x12A07E8
    static bool UnregisterDynamicProperty(::Il2CppString* name, System::ContextBoundObject* obj, System::Runtime::Remoting::Contexts::Context* ctx);
    // static private System.Runtime.Remoting.Contexts.DynamicPropertyCollection GetDynamicPropertyCollection(System.ContextBoundObject obj, System.Runtime.Remoting.Contexts.Context ctx)
    // Offset: 0x12A0310
    static System::Runtime::Remoting::Contexts::DynamicPropertyCollection* GetDynamicPropertyCollection(System::ContextBoundObject* obj, System::Runtime::Remoting::Contexts::Context* ctx);
    // static System.Void NotifyGlobalDynamicSinks(System.Boolean start, System.Runtime.Remoting.Messaging.IMessage req_msg, System.Boolean client_site, System.Boolean async)
    // Offset: 0x12A0AC0
    static void NotifyGlobalDynamicSinks(bool start, System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async);
    // static System.Boolean get_HasGlobalDynamicSinks()
    // Offset: 0x12A11A8
    static bool get_HasGlobalDynamicSinks();
    // System.Void NotifyDynamicSinks(System.Boolean start, System.Runtime.Remoting.Messaging.IMessage req_msg, System.Boolean client_site, System.Boolean async)
    // Offset: 0x12A1264
    void NotifyDynamicSinks(bool start, System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async);
    // System.Boolean get_HasDynamicSinks()
    // Offset: 0x12A12F8
    bool get_HasDynamicSinks();
    // System.Boolean get_HasExitSinks()
    // Offset: 0x12947B4
    bool get_HasExitSinks();
    // public System.Runtime.Remoting.Contexts.IContextProperty GetProperty(System.String name)
    // Offset: 0x12A133C
    System::Runtime::Remoting::Contexts::IContextProperty* GetProperty(::Il2CppString* name);
    // public System.Void SetProperty(System.Runtime.Remoting.Contexts.IContextProperty prop)
    // Offset: 0x12A14C0
    void SetProperty(System::Runtime::Remoting::Contexts::IContextProperty* prop);
    // public System.Void Freeze()
    // Offset: 0x12A1600
    void Freeze();
    // System.Runtime.Remoting.Messaging.IMessageSink GetServerContextSinkChain()
    // Offset: 0x12961EC
    System::Runtime::Remoting::Messaging::IMessageSink* GetServerContextSinkChain();
    // System.Runtime.Remoting.Messaging.IMessageSink GetClientContextSinkChain()
    // Offset: 0x1294870
    System::Runtime::Remoting::Messaging::IMessageSink* GetClientContextSinkChain();
    // System.Runtime.Remoting.Messaging.IMessageSink CreateServerObjectSinkChain(System.MarshalByRefObject obj, System.Boolean forceInternalExecute)
    // Offset: 0x129C39C
    System::Runtime::Remoting::Messaging::IMessageSink* CreateServerObjectSinkChain(System::MarshalByRefObject* obj, bool forceInternalExecute);
    // System.Runtime.Remoting.Messaging.IMessageSink CreateEnvoySink(System.MarshalByRefObject serverObject)
    // Offset: 0x12A184C
    System::Runtime::Remoting::Messaging::IMessageSink* CreateEnvoySink(System::MarshalByRefObject* serverObject);
    // static System.Runtime.Remoting.Contexts.Context SwitchToContext(System.Runtime.Remoting.Contexts.Context newContext)
    // Offset: 0x1296EB0
    static System::Runtime::Remoting::Contexts::Context* SwitchToContext(System::Runtime::Remoting::Contexts::Context* newContext);
    // static System.Runtime.Remoting.Contexts.Context CreateNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage msg)
    // Offset: 0x12966F4
    static System::Runtime::Remoting::Contexts::Context* CreateNewContext(System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);
    // public System.Void DoCallBack(System.Runtime.Remoting.Contexts.CrossContextDelegate deleg)
    // Offset: 0x12A19FC
    void DoCallBack(System::Runtime::Remoting::Contexts::CrossContextDelegate* deleg);
    // private System.LocalDataStore get_MyLocalStore()
    // Offset: 0x12A1B4C
    System::LocalDataStore* get_MyLocalStore();
    // static public System.LocalDataStoreSlot AllocateDataSlot()
    // Offset: 0x12A1CBC
    static System::LocalDataStoreSlot* AllocateDataSlot();
    // static public System.LocalDataStoreSlot AllocateNamedDataSlot(System.String name)
    // Offset: 0x12A1D30
    static System::LocalDataStoreSlot* AllocateNamedDataSlot(::Il2CppString* name);
    // static public System.Void FreeNamedDataSlot(System.String name)
    // Offset: 0x12A1DAC
    static void FreeNamedDataSlot(::Il2CppString* name);
    // static public System.LocalDataStoreSlot GetNamedDataSlot(System.String name)
    // Offset: 0x12A1E28
    static System::LocalDataStoreSlot* GetNamedDataSlot(::Il2CppString* name);
    // static public System.Object GetData(System.LocalDataStoreSlot slot)
    // Offset: 0x12A1EA4
    static ::Il2CppObject* GetData(System::LocalDataStoreSlot* slot);
    // static public System.Void SetData(System.LocalDataStoreSlot slot, System.Object data)
    // Offset: 0x12A1EE0
    static void SetData(System::LocalDataStoreSlot* slot, ::Il2CppObject* data);
    // static private System.Void .cctor()
    // Offset: 0x12A1F24
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x129FF88
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Context* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x12A001C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.String ToString()
    // Offset: 0x12A1764
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Runtime.Remoting.Contexts.Context
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::Context*, "System.Runtime.Remoting.Contexts", "Context");
#pragma pack(pop)
