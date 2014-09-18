/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFError, MFInvocationQueue, MFMailboxUid, NSMutableSet, NSString, NSThread;

@interface MFActivityMonitor : MFPriorityDesignator {
    unsigned int _key : 13;
    unsigned int _canCancel : 1;
    unsigned int _shouldCancel : 1;
    unsigned int _isActive : 1;
    unsigned int _supportsPerItemProgress : 1;
    unsigned int _changeCount : 8;
    unsigned long long _bytesRead;
    unsigned long long _bytesWritten;
    unsigned long long _currentCount;
    double _currentItemPercentDone;
    id _delegate;
    NSString *_descriptionString;
    NSString *_displayName;
    MFError *_error;
    unsigned long long _expectedLength;
    unsigned long long _gotNewMessagesState;
    double _lastTime;
    MFMailboxUid *_mailbox;
    unsigned long long _maxCount;
    MFInvocationQueue *_ourQueue;
    double _percentDone;
    NSMutableSet *_reasons;
    NSThread *_runningThread;
    double _startTime;
    NSString *_statusMessage;
    id _target;
    NSString *_taskName;
}

@property(retain) MFMailboxUid * mailbox;

+ (id)currentMonitor;
+ (void)destroyMonitor;

- (void)_didChange;
- (bool)_lockedAddActivityTarget:(id)arg1;
- (id)_ntsThrottledUserInfoDict;
- (int)acquireExclusiveAccessKey;
- (id)activityTarget;
- (id)activityTargets;
- (void)addActivityTarget:(id)arg1;
- (void)addActivityTargets:(id)arg1;
- (void)addReason:(id)arg1;
- (unsigned long long)bytesRead;
- (unsigned long long)bytesWritten;
- (bool)canBeCancelled;
- (void)cancel;
- (void)cancelMessage;
- (int)changeCount;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)error;
- (unsigned long long)expectedLength;
- (void)finishedActivity:(id)arg1;
- (unsigned long long)gotNewMessagesState;
- (bool)hasReason:(id)arg1;
- (id)init;
- (bool)isActive;
- (id)mailbox;
- (void)notifyConnectionEstablished;
- (double)percentDone;
- (void)postActivityFinished:(id)arg1;
- (void)postActivityStarting;
- (void)postDidChangeWithUserInfo:(id)arg1;
- (id)primaryTarget;
- (id)reasons;
- (void)recordBytesRead:(unsigned long long)arg1;
- (void)recordBytesWritten:(unsigned long long)arg1;
- (void)relinquishExclusiveAccessKey:(int)arg1;
- (void)removeActivityTarget:(id)arg1;
- (void)reset;
- (void)resetConnectionStats;
- (void)setActivityTarget:(id)arg1;
- (void)setCanBeCancelled:(bool)arg1;
- (void)setCurrentCount:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayName:(id)arg1 maxCount:(unsigned long long)arg2;
- (void)setDisplayName:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExpectedLength:(unsigned long long)arg1;
- (void)setGotNewMessagesState:(unsigned long long)arg1;
- (void)setInvocationQueue:(id)arg1;
- (void)setMailbox:(id)arg1;
- (void)setMaxCount:(unsigned long long)arg1;
- (void)setPercentDone:(double)arg1 withKey:(int)arg2;
- (void)setPercentDone:(double)arg1;
- (void)setPercentDoneOfCurrentItem:(double)arg1;
- (void)setPrimaryTarget:(id)arg1;
- (void)setShouldCancel:(bool)arg1;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2 withKey:(int)arg3;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2;
- (void)setStatusMessage:(id)arg1 withKey:(int)arg2;
- (void)setStatusMessage:(id)arg1;
- (void)setSupportsPerItemProgress:(bool)arg1;
- (void)setTaskName:(id)arg1;
- (bool)shouldCancel;
- (void)startActivity;
- (double)startTime;
- (id)statusMessage;
- (id)taskName;
- (id)userInfoForNotification;

@end
