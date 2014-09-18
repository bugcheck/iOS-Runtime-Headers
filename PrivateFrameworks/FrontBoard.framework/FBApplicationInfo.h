/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class FBApplicationDefaults, FBMutableApplicationDefaults, NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSSet, NSString, NSURL;

@interface FBApplicationInfo : FBBundleInfo {
    NSSet *_backgroundModes;
    NSURL *_bundleContainerURL;
    NSArray *_customMachServices;
    NSURL *_dataContainerURL;
    FBMutableApplicationDefaults *_defaults;
    NSArray *_deviceFamilies;
    NSDictionary *_entitlements;
    NSDictionary *_environmentVariables;
    NSURL *_executableURL;
    NSArray *_externalAccessoryProtocols;
    NSString *_fallbackFolderName;
    NSArray *_folderNames;
    double _lastModifiedDate;
    float _minimumBrightnessLevel;
    NSString *_preferenceDomain;
    long long _ratingRank;
    NSArray *_requiredCapabilities;
    NSURL *_sandboxURL;
    NSString *_sdkVersion;
    NSString *_signerIdentity;
    NSSet *_supportedInterfaceOrientations;
    NSArray *_tags;
    unsigned long long _type;
    NSObject<OS_dispatch_queue> *_workQueue;
    bool_beta;
    bool_enabled;
    bool_exitsOnSuspend;
    bool_installing;
    bool_newsstand;
    bool_provisioningProfileValidated;
    bool_requiresPersistentWiFi;
    bool_restricted;
    bool_uninstalling;
}

@property(getter=isBeta,readonly) bool beta;
@property(retain,readonly) NSURL * bundleContainerURL;
@property(retain,readonly) NSArray * customMachServices;
@property(retain,readonly) NSURL * dataContainerURL;
@property(retain,readonly) FBApplicationDefaults * defaults;
@property(retain,readonly) NSArray * deviceFamilies;
@property(getter=isEnabled,readonly) bool enabled;
@property(retain,readonly) NSDictionary * entitlements;
@property(retain,readonly) NSDictionary * environmentVariables;
@property(retain,readonly) NSURL * executableURL;
@property(getter=isExitsOnSuspend,readonly) bool exitsOnSuspend;
@property(retain,readonly) NSArray * externalAccessoryProtocols;
@property(retain,readonly) NSString * fallbackFolderName;
@property(retain,readonly) NSArray * folderNames;
@property(getter=_isInstalling,setter=_setInstalling:) bool installing;
@property(readonly) double lastModifiedDate;
@property(readonly) float minimumBrightnessLevel;
@property(getter=isNewsstand,readonly) bool newsstand;
@property(copy,readonly) NSString * preferenceDomain;
@property(getter=isProvisioningProfileValidated,readonly) bool provisioningProfileValidated;
@property(readonly) long long ratingRank;
@property(retain,readonly) NSArray * requiredCapabilities;
@property(readonly) bool requiresPersistentWiFi;
@property(getter=isRestricted,readonly) bool restricted;
@property(retain,readonly) NSURL * sandboxURL;
@property(copy,readonly) NSString * sdkVersion;
@property(readonly) long long signatureState;
@property(copy,readonly) NSString * signerIdentity;
@property(retain,readonly) NSArray * tags;
@property(readonly) unsigned long long type;
@property(getter=_isUninstalling,setter=_setUninstalling:) bool uninstalling;

- (void)_acceptApplicationSignatureIdentity;
- (unsigned long long)_applicationType:(id)arg1;
- (void)_buildDefaultsFromInfoPlist:(id)arg1;
- (void)_cacheFolderNamesForSystemApp:(id)arg1;
- (long long)_computeRatingRank;
- (id)_computeSupportedInterfaceOrientations:(id)arg1;
- (id)_configureEnvironment:(id)arg1;
- (id)_copyiTunesMetadata;
- (bool)_doesProfileMatchSignerIdentity:(struct _MISProfile { }*)arg1;
- (id)_expirationDateForProvisioningProfile;
- (bool)_isInstalling;
- (bool)_isUninstalling;
- (double)_lastModifiedDateForPath:(id)arg1;
- (id)_localizedGenreFromDictionary:(id)arg1;
- (id)_localizedGenreNameForID:(long long)arg1;
- (id)_preferenceDomain;
- (void)_setInstalling:(bool)arg1;
- (void)_setUninstalling:(bool)arg1;
- (bool)_signatureNeedsExplicitUserTrust;
- (id)_uniqueDeviceIdentifier;
- (void)acceptApplicationSignatureIdentity;
- (bool)builtOnOrAfterSDKVersion:(id)arg1;
- (id)bundleContainerURL;
- (id)customMachServices;
- (id)dataContainerURL;
- (void)dealloc;
- (bool)defaultStatusBarHiddenForOrientation:(long long)arg1;
- (id)defaults;
- (id)description;
- (id)deviceFamilies;
- (id)entitlements;
- (id)environmentVariables;
- (id)executableURL;
- (id)externalAccessoryProtocols;
- (id)fallbackFolderName;
- (id)folderNames;
- (id)initWithApplicationProxy:(id)arg1;
- (bool)isBeta;
- (bool)isEnabled;
- (bool)isExitsOnSuspend;
- (bool)isNewsstand;
- (bool)isProvisioningProfileValidated;
- (bool)isRestricted;
- (double)lastModifiedDate;
- (float)minimumBrightnessLevel;
- (id)preferenceDomain;
- (long long)ratingRank;
- (id)requiredCapabilities;
- (bool)requiresPersistentWiFi;
- (id)sandboxURL;
- (id)sdkVersion;
- (long long)signatureState;
- (id)signerIdentity;
- (bool)supportsBackgroundMode:(id)arg1;
- (bool)supportsCompactStatusBarHiding;
- (bool)supportsInterfaceOrientation:(long long)arg1;
- (id)tags;
- (unsigned long long)type;

@end
