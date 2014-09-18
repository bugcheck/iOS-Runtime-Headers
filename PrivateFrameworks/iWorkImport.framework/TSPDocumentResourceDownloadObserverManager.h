/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface TSPDocumentResourceDownloadObserverManager : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_downloadObserversMap;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addDownloadObserver:(id)arg1 forData:(id)arg2 digestString:(id)arg3 isInternalObserver:(bool)arg4 completionHandler:(id)arg5;
- (id)init;
- (void)postNotification:(long long)arg1 forDigestString:(id)arg2 wait:(bool)arg3;

@end
