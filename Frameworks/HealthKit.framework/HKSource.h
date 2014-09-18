/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class NSString;

@interface HKSource : NSObject <NSSecureCoding, NSCopying, HDSyncObject> {
    NSString *_bundleIdentifier;
    NSString *_name;
    unsigned long long _options;
    NSString *_productType;
    bool_localDevice;
}

@property(readonly) NSString * bundleIdentifier;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(getter=_isLocalDevice,setter=_setLocalDevice:) bool localDevice;
@property(readonly) NSString * name;
@property(getter=_options,setter=_setOptions:) unsigned long long options;
@property(getter=_productType,setter=_setProductType:,retain) NSString * productType;
@property(readonly) Class superclass;
@property(readonly) NSString * syncId;

+ (id)_currentSourceProductType:(bool)arg1;
+ (bool)_representsCurrentDeviceWithBundleIdentifier:(id)arg1;
+ (id)_sourceBundleIdentifierWithEntitlements:(id)arg1;
+ (id)_sourceNameWithRepresentsCurrentDevice:(bool)arg1 defaultSource:(bool)arg2;
+ (id)defaultSource;
+ (Class)healthSyncEntity;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (bool)_isApplication;
- (bool)_isLocalDevice;
- (bool)_isPreferredSource;
- (unsigned long long)_options;
- (id)_productType;
- (bool)_requiresAuthorization;
- (void)_setBundleIdentifier:(id)arg1;
- (void)_setLocalDevice:(bool)arg1;
- (void)_setName:(id)arg1;
- (void)_setOptions:(unsigned long long)arg1;
- (void)_setProductType:(id)arg1;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)syncId;

@end
