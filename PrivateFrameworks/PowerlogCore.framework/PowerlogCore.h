/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@class NSObject<OS_dispatch_source>, PLCoreAccountingGroup, PLCoreAgent, PLCoreRail, PLCoreService, PLCoreStorage;

@interface PowerlogCore : NSObject {
    PLCoreAccountingGroup *_accountingGroups;
    PLCoreAgent *_agents;
    NSObject<OS_dispatch_source> *_fVMPressureSource;
    PLCoreRail *_rails;
    PLCoreService *_services;
    PLCoreStorage *_storage;
}

@property(readonly) PLCoreAccountingGroup * accountingGroups;
@property(readonly) PLCoreAgent * agents;
@property(readonly) PLCoreRail * rails;
@property(readonly) PLCoreService * services;
@property(readonly) PLCoreStorage * storage;

+ (bool)allowRun;
+ (bool)isDebugEnabled;
+ (id)sharedCore;

- (void).cxx_destruct;
- (id)accountingGroups;
- (id)agents;
- (void)dealloc;
- (void)didRecieveMemoryPressureWarning;
- (id)init;
- (id)rails;
- (id)services;
- (void)startCore;
- (void)stopCore;
- (id)storage;

@end
