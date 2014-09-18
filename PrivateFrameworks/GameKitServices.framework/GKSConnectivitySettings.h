/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface GKSConnectivitySettings : NSObject {
}

+ (id)getAddressForService:(id)arg1;
+ (id)getAllSettings;
+ (struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)getCachedIPPort;
+ (id)getClientOption:(id)arg1;
+ (struct tagIPPORT { int x1; BOOL x2[16]; union { unsigned int x_3_1_1; unsigned char x_3_1_2[16]; } x3; unsigned short x4; }*)getIPPortForService:(id)arg1;
+ (int)getKeepAliveTimeoutFromCarrierBundle;
+ (int)getNATTypeFromCarrierBundle;
+ (void)initialize;
+ (void)setAddress:(id)arg1 forService:(id)arg2;
+ (void)setClientOptions:(id)arg1;
+ (void)setServerAddresses:(id)arg1;
+ (bool)supportsHEVCEncoding;

- (void)dealloc;
- (id)init;

@end
