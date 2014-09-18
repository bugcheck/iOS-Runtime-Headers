/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CKDDeviceManager : NSObject {
    NSMutableDictionary *_callbackGroups;
    NSMutableDictionary *_deviceIDs;
    NSString *_deviceIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_requests;
}

@property(retain) NSMutableDictionary * callbackGroups;
@property(retain) NSMutableDictionary * deviceIDs;
@property(readonly) NSString * deviceIdentifier;
@property(retain) NSObject<OS_dispatch_queue> * queue;
@property(retain) NSMutableDictionary * requests;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_lookupKeyForContext:(id)arg1;
- (void)_saveDeviceIdentifier:(id)arg1 forContext:(id)arg2;
- (id)_savedDeviceIdentifierForContext:(id)arg1;
- (id)_serviceForContext:(id)arg1;
- (id)callbackGroups;
- (id)deviceIDs;
- (id)deviceIdentifier;
- (void)fetchDeviceIdentifierForContext:(id)arg1 withCompletionHandler:(id)arg2;
- (id)init;
- (id)queue;
- (id)requests;
- (void)setCallbackGroups:(id)arg1;
- (void)setDeviceIDs:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequests:(id)arg1;

@end
