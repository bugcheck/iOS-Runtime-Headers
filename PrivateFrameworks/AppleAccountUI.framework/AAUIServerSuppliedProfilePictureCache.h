/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class NSMutableDictionary;

@interface AAUIServerSuppliedProfilePictureCache : NSObject {
    NSMutableDictionary *_personIDToEntryMap;
    double _pictureDiameter;
}

@property(readonly) double pictureDiameter;

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_ensureMinimumPictureDiameter_mustBeSynchronized:(double)arg1;
- (id)init;
- (double)pictureDiameter;
- (void)profilePictureForPersonID:(id)arg1 diameter:(double)arg2 completion:(id)arg3;
- (id)profilePictureForPersonID:(id)arg1 diameter:(double)arg2 serverFetchBlock:(id)arg3;
- (bool)updateProfilePicture:(id)arg1 didReceiveNewPicture:(bool)arg2 serverCacheTag:(id)arg3 forPersonID:(id)arg4;

@end
