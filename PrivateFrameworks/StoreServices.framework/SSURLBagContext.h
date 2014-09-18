/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface SSURLBagContext : NSObject <SSXPCCoding, NSCopying> {
    long long _allowedRetryCount;
    long long _bagType;
    NSMutableDictionary *_httpHeaders;
    NSNumber *_userIdentifier;
    bool_allowsBootstrapCellularData;
    bool_allowsExpiredBags;
    bool_ignoresCaches;
    bool_usesCachedBagsOnly;
}

@property(copy) NSDictionary * allHTTPHeaders;
@property long long allowedRetryCount;
@property bool allowsBootstrapCellularData;
@property bool allowsExpiredBags;
@property long long bagType;
@property(readonly) NSString * cacheKey;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool ignoresCaches;
@property(readonly) Class superclass;
@property(retain) NSNumber * userIdentifier;
@property bool usesCachedBagsOnly;

+ (id)contextWithBagType:(long long)arg1;

- (id)allHTTPHeaders;
- (long long)allowedRetryCount;
- (bool)allowsBootstrapCellularData;
- (bool)allowsExpiredBags;
- (long long)bagType;
- (id)cacheKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (bool)ignoresCaches;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAllHTTPHeaders:(id)arg1;
- (void)setAllowedRetryCount:(long long)arg1;
- (void)setAllowsBootstrapCellularData:(bool)arg1;
- (void)setAllowsExpiredBags:(bool)arg1;
- (void)setBagType:(long long)arg1;
- (void)setIgnoresCaches:(bool)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setUsesCachedBagsOnly:(bool)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)userIdentifier;
- (bool)usesCachedBagsOnly;
- (id)valueForHTTPHeaderField:(id)arg1;

@end
