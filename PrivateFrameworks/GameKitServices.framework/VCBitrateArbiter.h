/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSMutableArray;

@interface VCBitrateArbiter : NSObject {
    unsigned int _maxAllowedAudioOnlyBitrate2G;
    unsigned int _maxAllowedAudioOnlyBitrate3G;
    unsigned int _maxAllowedAudioOnlyBitrateLTE;
    unsigned int _maxAllowedAudioOnlyBitrateWifi;
    unsigned int _maxAllowedBitrate2G;
    unsigned int _maxAllowedBitrate3G;
    unsigned int _maxAllowedBitrate;
    unsigned int _maxAllowedBitrateLTE;
    unsigned int _maxAllowedBitrateWifi;
    NSMutableArray *supportedBitrateRules;
}

@property(readonly) unsigned int maxAllowedBitrate2G;
@property(readonly) unsigned int maxAllowedBitrate3G;
@property(readonly) unsigned int maxAllowedBitrate;
@property(readonly) unsigned int maxAllowedBitrateLTE;
@property(readonly) unsigned int maxAllowedBitrateWifi;

- (void)createSupportedBitrateRuleSets;
- (void)dealloc;
- (id)initWithDeviceRole:(int)arg1;
- (unsigned int)maxAllowedAudioOnlyBitrateForConnection:(int)arg1;
- (unsigned int)maxAllowedBitrate2G;
- (unsigned int)maxAllowedBitrate3G;
- (unsigned int)maxAllowedBitrate;
- (unsigned int)maxAllowedBitrateForConnection:(int)arg1 operatingMode:(int)arg2;
- (unsigned int)maxAllowedBitrateForConnection:(int)arg1;
- (unsigned int)maxAllowedBitrateLTE;
- (id)maxAllowedBitrateRuleForConnection:(int)arg1;
- (unsigned int)maxAllowedBitrateWifi;
- (unsigned int)maxAllowedCellularBitrate;
- (void)readCarrierBundleValues;
- (void)readHardwareValues;
- (void)readStoreBagValues;

@end
