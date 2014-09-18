/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class NSString;

@interface MusicStoreClientController : SUClientController <MCProfileConnectionObserver, SSDownloadManagerObserver> {
    bool_hasContinueSearchCapability;
    bool_isUsingNetwork;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) bool hasStoreSearchCapability;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (id)continueSearchingURLForMediaType:(unsigned long long)arg1 searchString:(id)arg2;
+ (id)musicStoreURLWithAction:(id)arg1;
+ (void)setSharedController:(id)arg1;
+ (id)sharedController;

- (bool)_isStoreRestricted;
- (void)dealloc;
- (void)downloadManagerNetworkUsageDidChange:(id)arg1;
- (bool)hasStoreSearchCapability;
- (id)init;
- (id)initWithClientIdentifier:(id)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;

@end
