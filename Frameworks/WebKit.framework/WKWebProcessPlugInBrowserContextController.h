/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <WKWebProcessPlugInFormDelegatePrivate>, <WKWebProcessPlugInLoadDelegate>, NSString, WKBrowsingContextHandle, WKDOMDocument, WKDOMRange, WKWebProcessPlugInFrame, WKWebProcessPlugInPageGroup, _WKRemoteObjectRegistry;

@interface WKWebProcessPlugInBrowserContextController : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebPage> { 
        struct type { 
            unsigned char __lx[2000]; 
        } data; 
    struct WeakObjCPtr<id<WKWebProcessPlugInLoadDelegate> > { 
        id m_weakReference; 
    struct WeakObjCPtr<id<WKWebProcessPlugInFormDelegatePrivate> > { 
        id m_weakReference; 
    struct RetainPtr<_WKRemoteObjectRegistry> { 
        void *m_ptr; 
    } _formDelegate;
    } _loadDelegate;
    } _page;
    } _remoteObjectRegistry;
}

@property(readonly) struct Object { int (**x1)(); id x2; }* _apiObject;
@property(readonly) struct OpaqueWKBundlePage { }* _bundlePageRef;
@property(setter=_setDefersLoading:) bool _defersLoading;
@property(setter=_setFormDelegate:) <WKWebProcessPlugInFormDelegatePrivate> * _formDelegate;
@property(readonly) _WKRemoteObjectRegistry * _remoteObjectRegistry;
@property(readonly) bool _usesNonPersistentWebsiteDataStore;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) WKBrowsingContextHandle * handle;
@property(readonly) unsigned long long hash;
@property <WKWebProcessPlugInLoadDelegate> * loadDelegate;
@property(readonly) WKWebProcessPlugInFrame * mainFrame;
@property(readonly) WKDOMDocument * mainFrameDocument;
@property(readonly) WKWebProcessPlugInPageGroup * pageGroup;
@property(readonly) WKDOMRange * selectedRange;
@property(readonly) Class superclass;

+ (id)lookUpBrowsingContextFromHandle:(id)arg1;

- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct OpaqueWKBundlePage { }*)_bundlePageRef;
- (bool)_defersLoading;
- (id)_formDelegate;
- (id)_remoteObjectRegistry;
- (void)_setDefersLoading:(bool)arg1;
- (void)_setFormDelegate:(id)arg1;
- (bool)_usesNonPersistentWebsiteDataStore;
- (void)dealloc;
- (id)handle;
- (id)loadDelegate;
- (id)mainFrame;
- (id)mainFrameDocument;
- (id)pageGroup;
- (id)selectedRange;
- (void)setLoadDelegate:(id)arg1;

@end
