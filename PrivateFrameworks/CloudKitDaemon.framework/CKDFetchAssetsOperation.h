/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKDMMCSItemGroupSetContext, NSMutableArray;

@interface CKDFetchAssetsOperation : CKDDatabaseOperation {
    CKDMMCSItemGroupSetContext *_MMCSContext;
    NSMutableArray *_assetsToFetch;
    NSMutableArray *_assetsToRetry;
    id _progressBlock;
    bool_shouldAutomaticallyRetryNetworkErrors;
}

@property(retain) CKDMMCSItemGroupSetContext * MMCSContext;
@property(retain) NSMutableArray * assetsToFetch;
@property(retain) NSMutableArray * assetsToRetry;
@property(copy) id progressBlock;
@property bool shouldAutomaticallyRetryNetworkErrors;

+ (bool)_isTransientError:(id)arg1;

- (void).cxx_destruct;
- (id)MMCSContext;
- (void)_fetchAssets;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleError:(id)arg1 forItem:(id)arg2;
- (void)_retryOrFinishWithError:(id)arg1;
- (void)_sendMMCSItemGetForGroupSet:(id)arg1;
- (bool)_shouldRetryError:(id)arg1;
- (id)assetsToFetch;
- (id)assetsToRetry;
- (void)cancel;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 assetsToFetch:(id)arg3;
- (void)main;
- (id)progressBlock;
- (void)setAssetsToFetch:(id)arg1;
- (void)setAssetsToRetry:(id)arg1;
- (void)setMMCSContext:(id)arg1;
- (void)setProgressBlock:(id)arg1;
- (void)setShouldAutomaticallyRetryNetworkErrors:(bool)arg1;
- (bool)shouldAutomaticallyRetryNetworkErrors;

@end
