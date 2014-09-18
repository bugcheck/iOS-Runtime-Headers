/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString;

@interface MCCardDAVAccountPayload : MCPayload {
    NSString *_accountDescription;
    NSString *_accountPersistentUUID;
    NSString *_hostname;
    NSString *_password;
    int _port;
    NSString *_principalURL;
    NSString *_username;
    bool_useSSL;
}

@property(retain,readonly) NSString * accountDescription;
@property(copy) NSString * accountPersistentUUID;
@property(retain,readonly) NSString * hostname;
@property(copy) NSString * password;
@property(readonly) int port;
@property(retain,readonly) NSString * principalURL;
@property(readonly) bool useSSL;
@property(copy) NSString * username;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)accountDescription;
- (id)accountPersistentUUID;
- (id)description;
- (id)hostname;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)password;
- (id)payloadDescriptionKeyValueSections;
- (int)port;
- (id)principalURL;
- (void)setAccountPersistentUUID:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;
- (bool)useSSL;
- (id)username;

@end
