/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@class NSArray, NSData, NSString, NSUUID, _IDSDevice;

@interface IDSDevice : NSObject {
    _IDSDevice *_internal;
}

@property(retain,readonly) NSString * deviceColor;
@property(retain,readonly) NSString * enclosureColor;
@property(retain,readonly) NSArray * identities;
@property(readonly) bool isDefaultPairedDevice;
@property(retain,readonly) NSArray * linkedUserURIs;
@property(readonly) bool locallyPresent;
@property(retain,readonly) NSString * modelIdentifier;
@property(retain,readonly) NSString * name;
@property(getter=isNearby,readonly) bool nearby;
@property(setter=setNSUUID:,retain) NSUUID * nsuuid;
@property(readonly) NSString * productBuildVersion;
@property(readonly) NSString * productName;
@property(readonly) NSString * productVersion;
@property(retain,readonly) NSData * pushToken;
@property(retain,readonly) NSString * service;
@property(readonly) bool supportsHandoff;
@property(readonly) bool supportsMMSRelay;
@property(readonly) bool supportsPhoneCalls;
@property(readonly) bool supportsSMSRelay;
@property(readonly) bool supportsTethering;
@property(readonly) bool supportsiCloudPairing;
@property(retain,readonly) NSString * uniqueID;

- (void)_addIdentity:(id)arg1;
- (id)_initWithDictionary:(id)arg1;
- (id)_internal;
- (void)_setAccount:(id)arg1;
- (void)_updateNSUUID:(id)arg1;
- (void)cleanupStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)closeSocket:(int)arg1;
- (void)closeSocketForDomain:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceColor;
- (id)enclosureColor;
- (void)establishStreamPairWithOptions:(id)arg1 completionHandler:(id)arg2 onQueue:(id)arg3;
- (id)identities;
- (id)initWithDictionary:(id)arg1;
- (bool)isDefaultLocalDevice;
- (bool)isDefaultPairedDevice;
- (bool)isNearby;
- (id)linkedUserURIs;
- (bool)locallyPresent;
- (id)modelIdentifier;
- (id)name;
- (id)nsuuid;
- (int)openSocketForDomain:(id)arg1 transportType:(long long)arg2;
- (int)openSocketForDomain:(id)arg1;
- (void)openSocketWithOptions:(id)arg1 completionHandler:(id)arg2 onQueue:(id)arg3;
- (id)productBuildVersion;
- (id)productName;
- (id)productVersion;
- (id)pushToken;
- (id)service;
- (void)setNSUUID:(id)arg1;
- (int)socketForDomain:(id)arg1;
- (bool)supportsHandoff;
- (bool)supportsMMSRelay;
- (bool)supportsPhoneCalls;
- (bool)supportsSMSRelay;
- (bool)supportsTethering;
- (bool)supportsiCloudPairing;
- (id)uniqueID;

@end
