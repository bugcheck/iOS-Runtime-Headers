/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@class HMHome, HMMessageDispatcher, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSUUID;

@interface HMTrigger : NSObject <HMMessageReceiver, NSSecureCoding> {
    NSMutableArray *_currentActionSets;
    HMHome *_home;
    NSDate *_lastFireDate;
    HMMessageDispatcher *_msgDispatcher;
    NSString *_name;
    NSMutableDictionary *_pendingRequests;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    bool_enabled;
}

@property(copy,readonly) NSArray * actionSets;
@property(retain) NSMutableArray * currentActionSets;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(getter=isEnabled) bool enabled;
@property(readonly) unsigned long long hash;
@property HMHome * home;
@property(copy) NSDate * lastFireDate;
@property(readonly) NSObject<OS_dispatch_queue> * messageReceiveQueue;
@property(readonly) NSUUID * messageTargetUUID;
@property(retain) HMMessageDispatcher * msgDispatcher;
@property(copy) NSString * name;
@property(retain) NSMutableDictionary * pendingRequests;
@property(readonly) Class superclass;
@property(retain) NSUUID * uuid;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleTriggerFired:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_updateActionSet:(id)arg1 add:(bool)arg2 completionHandler:(id)arg3;
- (id)actionSets;
- (void)addActionSet:(id)arg1 completionHandler:(id)arg2;
- (void)configure:(id)arg1 uuid:(id)arg2 messageDispatcher:(id)arg3;
- (id)currentActionSets;
- (void)enable:(bool)arg1 completionHandler:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)handleTriggerActivatedNotification:(id)arg1;
- (void)handleTriggerFiredNotification:(id)arg1;
- (void)handleTriggerRenamedNotification:(id)arg1;
- (void)handleUpdatedActionSetNotification:(id)arg1;
- (id)home;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)invalidate;
- (bool)isEnabled;
- (id)lastFireDate;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)name;
- (id)pendingRequests;
- (void)removeActionSet:(id)arg1 completionHandler:(id)arg2;
- (id)serializeForAdd;
- (void)setCurrentActionSets:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setLastFireDate:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPendingRequests:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)updateName:(id)arg1 completionHandler:(id)arg2;
- (id)uuid;
- (id)workQueue;

@end
