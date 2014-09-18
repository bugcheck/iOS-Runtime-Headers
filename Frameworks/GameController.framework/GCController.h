/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@class <GCNamedProfile>, GCExtendedGamepad, GCGamepad, GCMotion, NSString;

@interface GCController : NSObject {
}

@property(getter=isAttachedToDevice,readonly) bool attachedToDevice;
@property(copy) id controllerPausedHandler;
@property(readonly) struct __IOHIDDevice { }* deviceRef;
@property(retain,readonly) GCExtendedGamepad * extendedGamepad;
@property(retain,readonly) GCGamepad * gamepad;
@property(retain,readonly) GCMotion * motion;
@property long long playerIndex;
@property(retain) <GCNamedProfile> * profile;
@property(readonly) unsigned int service;
@property(copy,readonly) NSString * vendorName;

+ (void)__daemon__addController:(id)arg1;
+ (void)__daemon__controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3;
+ (void)__daemon__removeController:(id)arg1;
+ (void)__daemon__requestConnectedHostUpdatesWithHandler:(id)arg1;
+ (void)__daemon__startBonjourService;
+ (void)__open__;
+ (void)__setLogger__:(id)arg1;
+ (void)_startWirelessControllerDiscoveryWithCompanions:(bool)arg1 btClassic:(bool)arg2 btle:(bool)arg3 completionHandler:(id)arg4;
+ (id)controllers;
+ (void)startWirelessControllerDiscoveryWithCompletionHandler:(id)arg1;
+ (void)stopWirelessControllerDiscovery;

- (id)controllerPausedHandler;
- (unsigned long long)deviceHash;
- (struct __IOHIDDevice { }*)deviceRef;
- (id)extendedGamepad;
- (id)gamepad;
- (bool)isAttachedToDevice;
- (bool)isForwarded;
- (id)motion;
- (long long)playerIndex;
- (id)profile;
- (unsigned int)service;
- (void)setControllerPausedHandler:(id)arg1;
- (void)setPlayerIndex:(long long)arg1;
- (void)setProfile:(id)arg1;
- (id)vendorName;

@end
