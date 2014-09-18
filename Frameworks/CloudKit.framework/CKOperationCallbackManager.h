/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSMutableDictionary;

@interface CKOperationCallbackManager : NSObject {
    NSMutableDictionary *_completionCallbacks;
    NSMutableDictionary *_progressCallbacks;
}

@property(retain) NSMutableDictionary * completionCallbacks;
@property(retain) NSMutableDictionary * progressCallbacks;

- (void).cxx_destruct;
- (id)completionCallbacks;
- (void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2;
- (id)init;
- (id)progressCallbacks;
- (void)registerCompletionCallback:(id)arg1 forOperation:(id)arg2;
- (void)registerProgressCallback:(id)arg1 forOperation:(id)arg2;
- (void)removeAllCallbacks;
- (void)setCompletionCallbacks:(id)arg1;
- (void)setProgressCallbacks:(id)arg1;
- (void)unregisterAllCallbacksForOperation:(id)arg1;

@end
