/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@class NSDictionary, NSLock, NSMutableArray, NSTimer;

@interface VSCacheUpdateListener : NSObject {
    NSDictionary *_dataProviders;
    NSTimer *_flushTimer;
    NSLock *_lock;
    NSMutableArray *_updateRequestQueue;
    bool_isListening;
}

+ (id)sharedListener;
+ (id)sharedListenerIfExists;

- (void)_enqueueRequest:(id)arg1;
- (void)_flush;
- (id)_initShared;
- (void)_spokenLanguageChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)performUpdateForModelIdentifier:(id)arg1 classIdentifier:(id)arg2;
- (void)startListening;
- (void)stopListening;

@end
