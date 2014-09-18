/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class NSHashTable, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface SBSStatusBarStyleOverridesAssertionManager : NSObject <SBSStatusBarStyleOverridesAssertionClient> {
    NSHashTable *_assertions;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_sbXPCConnection;
}

@property(retain) NSHashTable * assertions;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) NSObject<OS_dispatch_queue> * internalQueue;
@property(retain) NSXPCConnection * sbXPCConnection;
@property(readonly) Class superclass;

+ (id)sharedInstance;

- (void)_internalQueue_removeStatusBarStyleOverridesAssertionMatchingData:(id)arg1 invalidate:(bool)arg2;
- (void)_invalidateStatusBarStyleOverridesAssertionsWithData:(id)arg1;
- (void)_reactivateAssertions;
- (void)_tearDownXPCConnection;
- (void)addStatusBarStyleOverridesAssertion:(id)arg1 withHandler:(id)arg2 onQueue:(id)arg3;
- (id)assertions;
- (void)dealloc;
- (id)init;
- (id)internalQueue;
- (void)invalidateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1;
- (void)removeStatusBarStyleOverridesAssertion:(id)arg1;
- (id)sbXPCConnection;
- (void)setAssertions:(id)arg1;
- (void)setInternalQueue:(id)arg1;
- (void)setSbXPCConnection:(id)arg1;

@end
