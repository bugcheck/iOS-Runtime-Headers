/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSMutableDictionary, NSString, NSURL, SKUIDeveloperInfo, SKUIItemContentRating, SKUIStoreNotes;

@interface SKUIProductPageItem : SKUIItem {
    NSURL *_artistPageURL;
    NSArray *_childItemIdentifiers;
    SKUIItemContentRating *_contentRating;
    NSString *_copyrightString;
    SKUIDeveloperInfo *_developerInfo;
    NSArray *_inAppPurchases;
    NSString *_installationRequirementsDescription;
    NSString *_itemDescription;
    NSString *_lastUpdateDateString;
    NSString *_licenseAgreementURLString;
    NSMutableDictionary *_loadedChildItems;
    NSArray *_parentBundleItemIdentifiers;
    NSString *_privacyPolicyURLString;
    NSString *_regularPriceString;
    NSArray *_releaseNotes;
    NSString *_reviewsURLString;
    NSArray *_screenshots;
    NSArray *_secondaryContentRatings;
    NSString *_sellerName;
    NSString *_shortenedProductPageURLString;
    SKUIStoreNotes *_storeNotes;
    NSString *_supportURLString;
    long long _supportedFeatures;
    unsigned long long _supportedGameCenterFeatures;
    NSString *_updateDescription;
}

@property(readonly) NSURL * artistPageURL;
@property(readonly) SKUIItemContentRating * contentRating;
@property(readonly) NSString * copyrightString;
@property(readonly) SKUIDeveloperInfo * developerInfo;
@property(readonly) NSArray * inAppPurchases;
@property(readonly) NSString * installationRequirementsDescription;
@property(readonly) NSString * itemDescription;
@property(readonly) NSString * lastUpdateDateString;
@property(readonly) NSString * licenseAgreementURLString;
@property(readonly) NSArray * parentBundleItemIdentifiers;
@property(readonly) NSString * privacyPolicyURLString;
@property(readonly) NSString * regularPriceString;
@property(readonly) NSArray * releaseNotes;
@property(readonly) NSString * reviewsURLString;
@property(readonly) NSArray * screenshots;
@property(readonly) NSArray * secondaryContentRatings;
@property(readonly) NSString * sellerName;
@property(readonly) NSString * shortenedProductPageURLString;
@property(readonly) SKUIStoreNotes * storeNotes;
@property(readonly) NSString * supportURLString;
@property(readonly) long long supportedFeatures;
@property(readonly) unsigned long long supportedGameCenterFeatures;
@property(readonly) NSString * updateDescription;

- (void).cxx_destruct;
- (void)_setInAppPurchases:(id)arg1;
- (void)_setVersionHistory:(id)arg1;
- (id)artistPageURL;
- (id)childItemForIdentifier:(id)arg1;
- (id)childItemIdentifiers;
- (id)contentRating;
- (id)copyrightString;
- (id)developerInfo;
- (id)inAppPurchases;
- (id)initWithLookupDictionary:(id)arg1;
- (id)installationRequirementsDescription;
- (id)itemDescription;
- (id)lastUpdateDateString;
- (id)licenseAgreementURLString;
- (id)loadedChildItems;
- (long long)numberOfChildItems;
- (id)parentBundleItemIdentifiers;
- (id)privacyPolicyURLString;
- (id)regularPriceString;
- (id)releaseNotes;
- (id)reviewsURLString;
- (id)screenshots;
- (id)secondaryContentRatings;
- (id)sellerName;
- (id)shortenedProductPageURLString;
- (id)storeNotes;
- (id)supportURLString;
- (long long)supportedFeatures;
- (unsigned long long)supportedGameCenterFeatures;
- (id)updateDescription;

@end
