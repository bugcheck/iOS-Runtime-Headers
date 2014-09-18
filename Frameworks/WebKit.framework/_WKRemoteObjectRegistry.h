/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface _WKRemoteObjectRegistry : NSObject {
    struct unique_ptr<WebKit::RemoteObjectRegistry, std::__1::default_delete<WebKit::RemoteObjectRegistry> > { 
        struct __compressed_pair<WebKit::RemoteObjectRegistry *, std::__1::default_delete<WebKit::RemoteObjectRegistry> > { 
            struct RemoteObjectRegistry {} *__first_; 
        } __ptr_; 
    struct RetainPtr<NSMapTable> { 
        void *m_ptr; 
    struct HashMap<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> >, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > > { 
        struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > >, WTF::StringHash, WTF::HashMap<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> >, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { 
            struct KeyValuePair<WTF::String, std::__1::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface> > > {} *m_table; 
            int m_tableSize; 
            int m_tableSizeMask; 
            int m_keyCount; 
            int m_deletedCount; 
        } m_impl; 
    } _exportedObjects;
    } _remoteObjectProxies;
    } _remoteObjectRegistry;
}

@property(readonly) struct RemoteObjectRegistry { int (**x1)(); id x2; struct MessageSender {} *x3; }* remoteObjectRegistry;

- (struct RemoteObjectRegistry { int (**x1)(); id x2; struct MessageSender {} *x3; }*)remoteObjectRegistry;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithMessageSender:(struct MessageSender { int (**x1)(); }*)arg1;
- (void)_invalidate;
- (void)_invokeMessageWithInterfaceIdentifier:(const struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_1_1; } x1; }*)arg1 encodedInvocation:(const struct ImmutableDictionary { int (**x1)(); id x2; struct HashMap<WTF::String, WTF::RefPtr<API::Object>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<API::Object> > > { struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RefPtr<API::Object> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RefPtr<API::Object> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RefPtr<API::Object>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RefPtr<API::Object> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { struct KeyValuePair<WTF::String, WTF::RefPtr<API::Object> > {} *x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_3_1_1; } x3; }*)arg2;
- (bool)_invokeMethod:(const struct UserData { struct RefPtr<API::Object> { struct Object {} *x_1_1_1; } x1; }*)arg1;
- (void)_sendInvocation:(id)arg1 interface:(id)arg2;
- (void)registerExportedObject:(id)arg1 interface:(id)arg2;
- (id)remoteObjectProxyWithInterface:(id)arg1;
- (void)unregisterExportedObject:(id)arg1 interface:(id)arg2;

@end
