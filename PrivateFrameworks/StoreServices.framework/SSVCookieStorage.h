/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSObject<OS_dispatch_queue>, NSURL, SSSQLiteDatabase;

@interface SSVCookieStorage : NSObject {
    SSSQLiteDatabase *_db;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSURL *_storageLocation;
}

@property(readonly) NSURL * storageLocation;

+ (bool)_setupCookieDatabase:(id)arg1;
+ (id)sharedInstance;
+ (id)sharedStorage;

- (id)_allUserIdentifiers;
- (void)_bindInsertStatement:(struct sqlite3_stmt { }*)arg1 forCookie:(id)arg2 userIdentifier:(id)arg3;
- (bool)_bindStatement:(struct sqlite3_stmt { }*)arg1 withValues:(id)arg2;
- (id)_columnNameForCookieProperty:(id)arg1;
- (id)_copyCookieDictionaryForURL:(id)arg1 userIdentifier:(id)arg2;
- (id)_copyCookiesWithUserIdentifier:(id)arg1;
- (id)_copyPrivateCookiesForURL:(id)arg1 userIdentifier:(id)arg2;
- (void)_insertCookies:(id)arg1 forUserIdentifier:(id)arg2;
- (id)allCookiesForUserIdentifier:(id)arg1;
- (id)cookieHeadersForURL:(id)arg1 userIdentifier:(id)arg2;
- (id)cookiesForURL:(id)arg1 userIdentifier:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithStorageLocation:(id)arg1;
- (void)removeAllCookies;
- (void)removeCookiesWithProperties:(id)arg1;
- (void)setCookies:(id)arg1 forUserIdentifier:(id)arg2;
- (void)setCookiesForHTTPResponse:(id)arg1 userIdentifier:(id)arg2;
- (void)setCookiesFromCookieStorage:(id)arg1;
- (id)storageLocation;
- (void)synchronizeCookies;

@end
