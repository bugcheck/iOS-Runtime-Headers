/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary, NSString;

@interface NSThread : NSObject {
    unsigned char _bytes[44];
    id _private;
}

@property(getter=isCancelled,readonly) bool cancelled;
@property(getter=isExecuting,readonly) bool executing;
@property(getter=isFinished,readonly) bool finished;
@property(readonly) bool isMainThread;
@property(copy) NSString * name;
@property long long qualityOfService;
@property unsigned long long stackSize;
@property(retain,readonly) NSMutableDictionary * threadDictionary;
@property double threadPriority;

+ (void)_im_runBlock:(id)arg1;
+ (id)_mapkit_networkIOThread;
+ (void)_mapkit_runThread:(id)arg1;
+ (id)callStackReturnAddresses;
+ (id)callStackSymbols;
+ (id)currentThread;
+ (void)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3;
+ (void)exit;
+ (bool)isDying;
+ (bool)isMainThread;
+ (bool)isMultiThreaded;
+ (id)mainThread;
+ (bool)setThreadPriority:(double)arg1;
+ (void)sleepForTimeInterval:(double)arg1;
+ (void)sleepUntilDate:(id)arg1;
+ (double)threadPriority;
+ (bool)tsp_hasReadFileAccess;
+ (bool)tsp_isArchiverThread;
+ (bool)tsp_isRunningFinalizeHandlersForLegacyDocument;
+ (void)tsp_performSynchronousArchiverOperationUsingBlock:(id)arg1;
+ (void)tsp_performSynchronousOperationWithReadFileAccessUsingBlock:(id)arg1;
+ (void)tsp_performSynchronousOperationWithThreadDictionaryObject:(id)arg1 forKey:(id)arg2 usingBlock:(id)arg3;
+ (void)tsp_runFinalizeHandlersForReadCoordinator:(id)arg1 usingBlock:(id)arg2;

- (void)__im_performBlock:(id)arg1 afterDelay:(double)arg2 modes:(id)arg3;
- (void)__im_performBlock:(id)arg1 afterDelay:(double)arg2;
- (void)__im_performBlock:(id)arg1 modes:(id)arg2;
- (void)__im_performBlock:(id)arg1 waitUntilDone:(bool)arg2 modes:(id)arg3;
- (void)__im_performBlock:(id)arg1 waitUntilDone:(bool)arg2;
- (void)__im_performBlock:(id)arg1;
- (void)_nq:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
- (bool)isCancelled;
- (bool)isDying;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isMainThread;
- (void)main;
- (id)name;
- (long long)qualityOfService;
- (void)registerForStopNotification;
- (id)runLoop;
- (void)setName:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setStackSize:(unsigned long long)arg1;
- (void)setThreadPriority:(double)arg1;
- (bool)shouldStop;
- (unsigned long long)stackSize;
- (void)start;
- (id)threadDictionary;
- (double)threadPriority;
- (void)unregisterForStopNotification;

@end
