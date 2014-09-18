/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSString, SSDownloadPolicy, SSItem, SSItemOffer, SSNetworkConstraints, SSURLRequestProperties;

@interface SSPurchase : NSObject <SSXPCCoding, NSCoding, NSCopying> {
    NSNumber *_accountIdentifier;
    NSString *_affiliateIdentifier;
    long long _batchIdentifier;
    NSString *_buyParameters;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSDownloadPolicy *_downloadPolicy;
    NSMutableDictionary *_downloadProperties;
    long long _expectedDownloadFileSize;
    NSArray *_filteredAssetTypes;
    NSArray *_gratisIdentifiers;
    SSItem *_item;
    SSItemOffer *_itemOffer;
    SSNetworkConstraints *_networkConstraints;
    long long _placeholderDownloadIdentifier;
    SSURLRequestProperties *_requestProperties;
    id _requiredDeviceCapabilities;
    long long _uniqueIdentifier;
    bool_backgroundPurchase;
    bool_createsDownloads;
    bool_displaysOnLockScreen;
    bool_ignoresForcedPasswordRestriction;
    bool_preauthenticated;
    bool_usesLocalRedownloadParametersIfPossible;
}

@property(retain) NSNumber * accountIdentifier;
@property(copy) NSString * affiliateIdentifier;
@property(getter=isBackgroundPurchase) bool backgroundPurchase;
@property long long batchIdentifier;
@property(copy) NSString * buyParameters;
@property bool createsDownloads;
@property(readonly) NSData * databaseEncoding;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property bool displaysOnLockScreen;
@property(copy) SSDownloadPolicy * downloadPolicy;
@property(copy) NSDictionary * downloadProperties;
@property long long expectedDownloadFileSize;
@property(copy) NSArray * filteredAssetTypes;
@property(copy) NSArray * gratisIdentifiers;
@property(readonly) unsigned long long hash;
@property bool ignoresForcedPasswordRestriction;
@property(copy) SSNetworkConstraints * networkConstraints;
@property long long placeholderDownloadIdentifier;
@property(getter=isPreauthenticated) bool preauthenticated;
@property(copy) SSURLRequestProperties * requestProperties;
@property(copy) id requiredDeviceCapabilities;
@property(readonly) Class superclass;
@property long long uniqueIdentifier;
@property bool usesLocalRedownloadParametersIfPossible;

+ (id)newPurchaseWithDatabaseEncoding:(id)arg1;
+ (id)newPurchaseWithXPCEncoding:(id)arg1;
+ (id)purchaseWithBuyParameters:(id)arg1;

- (void)_addEntriesToDatabaseEncoding:(id)arg1;
- (id)_initSSPurchase;
- (void)_setValuesUsingDatabaseEncoding:(id)arg1;
- (id)accountIdentifier;
- (id)affiliateIdentifier;
- (long long)batchIdentifier;
- (id)buyParameters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (bool)createsDownloads;
- (id)databaseEncoding;
- (void)dealloc;
- (bool)displaysOnLockScreen;
- (id)downloadMetadata;
- (id)downloadPolicy;
- (id)downloadProperties;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedDownloadFileSize;
- (id)filteredAssetTypes;
- (id)gratisIdentifiers;
- (unsigned long long)hash;
- (bool)ignoresForcedPasswordRestriction;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatabaseEncoding:(id)arg1;
- (id)initWithItem:(id)arg1 offer:(id)arg2;
- (id)initWithItem:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isBackgroundPurchase;
- (bool)isEqual:(id)arg1;
- (bool)isPreauthenticated;
- (id)item;
- (id)itemOffer;
- (id)networkConstraints;
- (long long)placeholderDownloadIdentifier;
- (id)requestProperties;
- (id)requiredDeviceCapabilities;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAffiliateIdentifier:(id)arg1;
- (void)setBackgroundPurchase:(bool)arg1;
- (void)setBatchIdentifier:(long long)arg1;
- (void)setBuyParameters:(id)arg1;
- (void)setCreatesDownloads:(bool)arg1;
- (void)setDefaultUserAgent:(id)arg1;
- (void)setDisplaysOnLockScreen:(bool)arg1;
- (void)setDownloadMetadata:(id)arg1;
- (void)setDownloadPolicy:(id)arg1;
- (void)setDownloadProperties:(id)arg1;
- (void)setExpectedDownloadFileSize:(long long)arg1;
- (void)setFilteredAssetTypes:(id)arg1;
- (void)setGratisIdentifiers:(id)arg1;
- (void)setIgnoresForcedPasswordRestriction:(bool)arg1;
- (void)setNetworkConstraints:(id)arg1;
- (void)setPlaceholderDownloadIdentifier:(long long)arg1;
- (void)setPreauthenticated:(bool)arg1;
- (void)setRequestProperties:(id)arg1;
- (void)setRequiredDeviceCapabilities:(id)arg1;
- (void)setUniqueIdentifier:(long long)arg1;
- (void)setUsesLocalRedownloadParametersIfPossible:(bool)arg1;
- (void)setValue:(id)arg1 forDownloadProperty:(id)arg2;
- (long long)uniqueIdentifier;
- (bool)usesLocalRedownloadParametersIfPossible;
- (id)valueForDownloadProperty:(id)arg1;

@end
