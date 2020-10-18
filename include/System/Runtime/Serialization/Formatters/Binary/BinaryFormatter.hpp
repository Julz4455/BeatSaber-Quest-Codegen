// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Including type: System.Runtime.Serialization.Formatters.FormatterTypeStyle
#include "System/Runtime/Serialization/Formatters/FormatterTypeStyle.hpp"
// Including type: System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
#include "System/Runtime/Serialization/Formatters/FormatterAssemblyStyle.hpp"
// Including type: System.Runtime.Serialization.Formatters.TypeFilterLevel
#include "System/Runtime/Serialization/Formatters/TypeFilterLevel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
  // Forward declaring type: SerializationBinder
  class SerializationBinder;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: TypeInformation
  class TypeInformation;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: HeaderHandler
  class HeaderHandler;
  // Forward declaring type: Header
  class Header;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
  class BinaryFormatter : public ::Il2CppObject {
    public:
    // System.Runtime.Serialization.ISurrogateSelector m_surrogates
    // Offset: 0x10
    System::Runtime::Serialization::ISurrogateSelector* m_surrogates;
    // System.Runtime.Serialization.StreamingContext m_context
    // Offset: 0x18
    System::Runtime::Serialization::StreamingContext m_context;
    // System.Runtime.Serialization.SerializationBinder m_binder
    // Offset: 0x28
    System::Runtime::Serialization::SerializationBinder* m_binder;
    // System.Runtime.Serialization.Formatters.FormatterTypeStyle m_typeFormat
    // Offset: 0x30
    System::Runtime::Serialization::Formatters::FormatterTypeStyle m_typeFormat;
    // System.Runtime.Serialization.Formatters.FormatterAssemblyStyle m_assemblyFormat
    // Offset: 0x34
    System::Runtime::Serialization::Formatters::FormatterAssemblyStyle m_assemblyFormat;
    // System.Runtime.Serialization.Formatters.TypeFilterLevel m_securityLevel
    // Offset: 0x38
    System::Runtime::Serialization::Formatters::TypeFilterLevel m_securityLevel;
    // System.Object[] m_crossAppDomainArray
    // Offset: 0x40
    ::Array<::Il2CppObject*>* m_crossAppDomainArray;
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> typeNameCache
    static System::Collections::Generic::Dictionary_2<System::Type*, System::Runtime::Serialization::Formatters::Binary::TypeInformation*>* _get_typeNameCache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> typeNameCache
    static void _set_typeNameCache(System::Collections::Generic::Dictionary_2<System::Type*, System::Runtime::Serialization::Formatters::Binary::TypeInformation*>* value);
    // public System.Void set_AssemblyFormat(System.Runtime.Serialization.Formatters.FormatterAssemblyStyle value)
    // Offset: 0x150BCF4
    void set_AssemblyFormat(System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value);
    // public System.Void set_SurrogateSelector(System.Runtime.Serialization.ISurrogateSelector value)
    // Offset: 0x150BCFC
    void set_SurrogateSelector(System::Runtime::Serialization::ISurrogateSelector* value);
    // public System.Void set_Binder(System.Runtime.Serialization.SerializationBinder value)
    // Offset: 0x150BD04
    void set_Binder(System::Runtime::Serialization::SerializationBinder* value);
    // public System.Void .ctor(System.Runtime.Serialization.ISurrogateSelector selector, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1502300
    static BinaryFormatter* New_ctor(System::Runtime::Serialization::ISurrogateSelector* selector, System::Runtime::Serialization::StreamingContext context);
    // public System.Object Deserialize(System.IO.Stream serializationStream)
    // Offset: 0x15048C4
    ::Il2CppObject* Deserialize(System::IO::Stream* serializationStream);
    // System.Object Deserialize(System.IO.Stream serializationStream, System.Runtime.Remoting.Messaging.HeaderHandler handler, System.Boolean fCheck)
    // Offset: 0x150BD88
    ::Il2CppObject* Deserialize(System::IO::Stream* serializationStream, System::Runtime::Remoting::Messaging::HeaderHandler* handler, bool fCheck);
    // public System.Object Deserialize(System.IO.Stream serializationStream, System.Runtime.Remoting.Messaging.HeaderHandler handler)
    // Offset: 0x150BD80
    ::Il2CppObject* Deserialize(System::IO::Stream* serializationStream, System::Runtime::Remoting::Messaging::HeaderHandler* handler);
    // public System.Void Serialize(System.IO.Stream serializationStream, System.Object graph)
    // Offset: 0x150475C
    void Serialize(System::IO::Stream* serializationStream, ::Il2CppObject* graph);
    // public System.Void Serialize(System.IO.Stream serializationStream, System.Object graph, System.Runtime.Remoting.Messaging.Header[] headers)
    // Offset: 0x150BFC4
    void Serialize(System::IO::Stream* serializationStream, ::Il2CppObject* graph, ::Array<System::Runtime::Remoting::Messaging::Header*>* headers);
    // System.Void Serialize(System.IO.Stream serializationStream, System.Object graph, System.Runtime.Remoting.Messaging.Header[] headers, System.Boolean fCheck)
    // Offset: 0x150BFCC
    void Serialize(System::IO::Stream* serializationStream, ::Il2CppObject* graph, ::Array<System::Runtime::Remoting::Messaging::Header*>* headers, bool fCheck);
    // static System.Runtime.Serialization.Formatters.Binary.TypeInformation GetTypeInformation(System.Type type)
    // Offset: 0x150C1B4
    static System::Runtime::Serialization::Formatters::Binary::TypeInformation* GetTypeInformation(System::Type* type);
    // static private System.Void .cctor()
    // Offset: 0x150C3DC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x150BD0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BinaryFormatter* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::BinaryFormatter*, "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter");
#pragma pack(pop)
