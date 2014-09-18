/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
 */

@class NSString, NSXPCConnection;

@interface CoreRCManagerClient : CoreRCManager <CoreRCXPCService, CoreRCXPCClient, CoreRCXPCServiceCEC, CoreRCXPCClientCEC, CoreRCXPCServicePrivate, CoreRCXPCServiceCECPrivate, CoreRCXPCServiceIR> {
    NSXPCConnection *_connection;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) Class superclass;

- (void)addExternalDeviceOnBusAsync:(id)arg1 reply:(id)arg2;
- (void)bus:(id)arg1 deviceHasBeenAdded:(id)arg2;
- (void)bus:(id)arg1 deviceHasBeenRemoved:(id)arg2;
- (void)bus:(id)arg1 deviceHasBeenUpdated:(id)arg2;
- (void)busHasBeenAdded:(id)arg1;
- (void)busHasBeenRemoved:(id)arg1;
- (void)busHasBeenUpdated:(id)arg1;
- (id)buses;
- (void)cecBus:(id)arg1 activeSourceHasChangedTo:(id)arg2 fromDevice:(id)arg3;
- (void)cecDevice:(id)arg1 activeSourceStatusHasChanged:(bool)arg2;
- (void)cecDevice:(id)arg1 deckControlCommandHasBeenReceived:(unsigned long long)arg2 fromDevice:(id)arg3;
- (void)cecDevice:(id)arg1 deckControlPlayHasBeenReceived:(unsigned long long)arg2 fromDevice:(id)arg3;
- (void)cecDevice:(id)arg1 deckControlStatusHasBeenUpdated:(unsigned long long)arg2 fromDevice:(id)arg3;
- (void)cecDevice:(id)arg1 featureAbort:(id)arg2;
- (void)cecDevice:(id)arg1 standbyRequestHasBeenReceived:(id)arg2;
- (id)connection;
- (void)dealloc;
- (void)device:(id)arg1 receivedHIDEvent:(id)arg2 fromDevice:(id)arg3;
- (void)fakeAssignLogicalAddressAsync:(id)arg1 logicalAddress:(unsigned char)arg2 reply:(id)arg3;
- (void)fakeBusCreateAsync:(unsigned long long)arg1 reply:(id)arg2;
- (void)fakeCreateRemoteInstanceAsync:(unsigned long long)arg1 bus:(id)arg2 withLogicalAddress:(unsigned char)arg3 withPhysicalAddress:(unsigned long long)arg4 reply:(id)arg5;
- (void)fakeDeviceRemoveAsync:(id)arg1 reply:(id)arg2;
- (void)fakeSetBusLinkStateAsync:(id)arg1 newLinkState:(bool)arg2 reply:(id)arg3;
- (void)getPropertyAsyncForKey:(id)arg1 ofBus:(id)arg2 reply:(id)arg3;
- (void)invalidate;
- (void)mergeBus:(id)arg1;
- (void)performActiveSourceAsync:(id)arg1 withMenus:(bool)arg2 reply:(id)arg3;
- (void)performDeckControlCommandAsync:(id)arg1 controlMode:(unsigned long long)arg2 targetDevice:(id)arg3 reply:(id)arg4;
- (void)performDeckControlPlayAsync:(id)arg1 playMode:(unsigned long long)arg2 targetDevice:(id)arg3 reply:(id)arg4;
- (void)performDeckControlRefreshStatusAsync:(id)arg1 targetDevice:(id)arg2 requestType:(unsigned long long)arg3 reply:(id)arg4;
- (void)performDeckControlSetDeckStatusAsync:(unsigned long long)arg1 forDevice:(id)arg2 reply:(id)arg3;
- (void)performInactiveSourceAsync:(id)arg1 reply:(id)arg2;
- (void)performRefreshDevicesAsync:(id)arg1 reply:(id)arg2;
- (void)performRefreshProperties:(id)arg1 ofDevice:(id)arg2 withDeviceAsync:(id)arg3 reply:(id)arg4;
- (void)performRequestActiveSourceAsync:(id)arg1 reply:(id)arg2;
- (void)performSetSystemAudioControlEnabled:(bool)arg1 withDeviceAsync:(id)arg2 reply:(id)arg3;
- (void)performStandbyAsync:(id)arg1 targetDevice:(id)arg2 reply:(id)arg3;
- (void)performSystemAudioModeRequestAsync:(id)arg1 withDesiredState:(unsigned long long)arg2 reply:(id)arg3;
- (id)propertyForKey:(id)arg1 ofBus:(id)arg2 error:(id*)arg3;
- (void)queryBusesAsync:(id)arg1;
- (void)queryLocalInstanceAsync:(unsigned long long)arg1 bus:(id)arg2 reply:(id)arg3;
- (void)queryLoggingAsync:(id)arg1;
- (bool)sendHIDEvent:(id)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 error:(id*)arg4;
- (void)sendHIDEventAsync:(id)arg1 fromDevice:(id)arg2 toDevice:(id)arg3 reply:(id)arg4;
- (void)setDelegate:(id)arg1;
- (void)setLoggingAsync:(id)arg1 reply:(id)arg2;
- (void)setOsdNameAsync:(id)arg1 forBus:(id)arg2 reply:(id)arg3;
- (bool)setProperty:(id)arg1 forKey:(id)arg2 ofBus:(id)arg3 error:(id*)arg4;
- (void)setPropertyAsync:(id)arg1 forKey:(id)arg2 ofBus:(id)arg3 reply:(id)arg4;
- (void)setTvLanguageCodeAsync:(id)arg1 forBus:(id)arg2 reply:(id)arg3;
- (void)synchBuses:(id)arg1;

@end
