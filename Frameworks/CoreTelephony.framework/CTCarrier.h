/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@class NSString;

@interface CTCarrier : NSObject {
    NSString *_carrierName;
    NSString *_isoCountryCode;
    NSString *_mobileCountryCode;
    NSString *_mobileNetworkCode;
    bool_allowsVOIP;
}

@property bool allowsVOIP;
@property(retain) NSString * carrierName;
@property(retain) NSString * isoCountryCode;
@property(retain) NSString * mobileCountryCode;
@property(retain) NSString * mobileNetworkCode;

- (bool)allowsVOIP;
- (id)carrierName;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)isoCountryCode;
- (id)mobileCountryCode;
- (id)mobileNetworkCode;
- (void)setAllowsVOIP:(bool)arg1;
- (void)setCarrierName:(id)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setMobileCountryCode:(id)arg1;
- (void)setMobileNetworkCode:(id)arg1;

@end
