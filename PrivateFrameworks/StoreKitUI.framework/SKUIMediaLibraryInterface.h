/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString;

@interface SKUIMediaLibraryInterface : NSObject <SKUILibraryInterface> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (unsigned long long)_AVTypesForMediaItem:(id)arg1;
- (long long)_availabilityForMediaItem:(id)arg1;
- (id)_newDefaultQuery;
- (void)_restrictQueryToLocalContent:(id)arg1;
- (id)_storePlatformKindForMediaItem:(id)arg1;
- (void)enumerateStatesForLibraryItems:(id)arg1 usingBlock:(id)arg2;
- (id)exposedPlatformItemKinds;
- (bool)performActionForLibraryItem:(id)arg1;
- (id)stateForLibraryItem:(id)arg1;

@end
