/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@class NSMutableArray, PLNSTimerOperatorComposition;

@interface PLAggregateDictionaryService : PLService {
    PLNSTimerOperatorComposition *_dailyTaskTimer;
    NSMutableArray *_registeredNotifications;
}

@property(retain) PLNSTimerOperatorComposition * dailyTaskTimer;
@property(retain) NSMutableArray * registeredNotifications;

+ (void)load;

- (void).cxx_destruct;
- (void)addToDurationScalarKey:(id)arg1 withDuration:(double)arg2;
- (void)blmAggregate;
- (id)dailyTaskTimer;
- (void)dailyTasks;
- (id)init;
- (void)initOperatorDependancies;
- (void)logAggregateUIKitActivityKey:(id)arg1 withInfo:(id)arg2 AggDKey:(id)arg3;
- (void)logAggregateUIKitKeyboardActivityKey:(id)arg1 withInfo:(id)arg2 AggDKey:(id)arg3;
- (void)logDuration:(double)arg1 asDistribution:(id)arg2;
- (void)registerForApplicationNotifications;
- (void)registerForAssertionNotifications;
- (void)registerForAudioNotifications;
- (void)registerForBatteryNotifications;
- (void)registerForBluetoothNotifications;
- (void)registerForCalendarNotifications;
- (void)registerForCameraNotifications;
- (void)registerForCoreMediaNotifications;
- (void)registerForLocationNotifications;
- (void)registerForMailNotifications;
- (void)registerForSCDynamicStoreNotifications;
- (void)registerForSafariNotifications;
- (void)registerForSpringboardNotifications;
- (void)registerForStoreNotifications;
- (void)registerForUIKitNotifications;
- (void)registerForVideoNotifications;
- (id)registeredNotifications;
- (void)setDailyTaskTimer:(id)arg1;
- (void)setRegisteredNotifications:(id)arg1;

@end
