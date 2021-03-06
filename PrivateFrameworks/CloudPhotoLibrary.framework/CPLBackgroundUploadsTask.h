/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface CPLBackgroundUploadsTask : CPLEngineSyncTask {
    unsigned int _failedUploadedResourcesCount;
    BOOL _hasBadErrors;
    BOOL _hasResetQueue;
    NSObject<OS_dispatch_queue> *_lock;
    BOOL _shouldStop;
    double _start;
    unsigned int _successfullyUploadedResourcesCount;
    unsigned int _total;
    NSMutableArray *_uploadTasks;
}

- (void).cxx_destruct;
- (void)_enqueueTasksLocked;
- (void)_finishTaskLocked;
- (void)_launchNecessaryUploadTasksWithTransaction:(id)arg1;
- (void)_uploadTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)cancel;
- (id)initWithEngineLibrary:(id)arg1;
- (void)launch;
- (void)pause;
- (void)resume;
- (void)taskDidFinishWithError:(id)arg1;
- (id)taskIdentifier;

@end
