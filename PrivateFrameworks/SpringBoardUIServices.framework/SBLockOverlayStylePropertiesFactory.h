/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class NSMutableDictionary;

@interface SBLockOverlayStylePropertiesFactory : NSObject {
    NSMutableDictionary *_deviceQualityToProperties;
    unsigned long long _style;
}

@property(readonly) unsigned long long style;

+ (id)overlayPropertiesFactoryWithStyle:(unsigned long long)arg1;

- (id)_fetchAndCachePropsForDeviceQuality:(long long)arg1;
- (void)dealloc;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)propertiesWithDeviceDefaultGraphicsQuality;
- (id)propertiesWithGraphicsQuality:(long long)arg1;
- (unsigned long long)style;

@end
