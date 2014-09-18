/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSUserDefaults : NSObject {
    id _private;
    void *_reserved[4];
}

+ (id)CNFObjectForKey:(id)arg1;
+ (unsigned long long)CNFRegEmailValidationTimeout;
+ (id)CNFRegSavedAccountName;
+ (id)CNFRegServerURLOverride;
+ (id)_IMAgentObjectForKey:(id)arg1;
+ (id)_IMAppObjectForKey:(id)arg1;
+ (id)_IMObjectForKey:(id)arg1 inDomain:(id)arg2;
+ (void)_IMSetObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)_ensureAndLockPreferredLanguageLock;
+ (void)_web_addDefaultsChangeObserver;
+ (void)_web_defaultsDidChange;
+ (id)_web_preferredLanguageCode;
+ (id)_webkit_preferredLanguageCode;
+ (id)mf_copyCompositionServicesPreferenceValueForKey:(id)arg1;
+ (void)mf_setCompositionServicesPreferenceValue:(id)arg1 forKey:(id)arg2;
+ (void)resetStandardUserDefaults;
+ (void)setCNFObject:(id)arg1 forKey:(id)arg2;
+ (void)setCNFRegEmailValidationTimeout:(unsigned long long)arg1;
+ (void)setCNFRegSavedAccountName:(id)arg1;
+ (void)setCNFRegServerURLOverride:(id)arg1;
+ (void)setShouldShowCNFRegistrationServerLogs:(bool)arg1;
+ (void)setShouldShowCNFRegistrationSettingsUI:(bool)arg1;
+ (void)setStandardUserDefaults:(id)arg1;
+ (bool)shouldShowCNFRegistrationServerLogs;
+ (bool)shouldShowCNFRegistrationSettingsUI;
+ (id)standardUserDefaults;

- (id)URLForKey:(id)arg1;
- (id)_initWithSuiteName:(id)arg1 container:(id)arg2;
- (void)addSuiteNamed:(id)arg1;
- (id)arrayForKey:(id)arg1 inRole:(id)arg2;
- (id)arrayForKey:(id)arg1;
- (id)arrayForKeyInCurrentRole:(id)arg1;
- (bool)boolForKey:(id)arg1 inRole:(id)arg2;
- (bool)boolForKey:(id)arg1;
- (bool)boolForKeyInCurrentRole:(id)arg1;
- (id)dataForKey:(id)arg1 inRole:(id)arg2;
- (id)dataForKey:(id)arg1;
- (id)dataForKeyInCurrentRole:(id)arg1;
- (void)dealloc;
- (bool)delayedSynchronize;
- (id)dictionaryForKey:(id)arg1 inRole:(id)arg2;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryForKeyInCurrentRole:(id)arg1;
- (id)dictionaryRepresentation;
- (double)doubleForKey:(id)arg1 inRole:(id)arg2;
- (double)doubleForKey:(id)arg1;
- (double)doubleForKeyInCurrentRole:(id)arg1;
- (float)floatForKey:(id)arg1 inRole:(id)arg2;
- (float)floatForKey:(id)arg1;
- (float)floatForKeyInCurrentRole:(id)arg1;
- (id)init;
- (id)initWithSuiteName:(id)arg1;
- (id)initWithUser:(id)arg1;
- (long long)integerForKey:(id)arg1 inRole:(id)arg2;
- (long long)integerForKey:(id)arg1;
- (long long)integerForKeyInCurrentRole:(id)arg1;
- (id)keyForRole:(id)arg1;
- (long long)longForKey:(id)arg1;
- (id)objectForKey:(id)arg1 inDomain:(id)arg2;
- (id)objectForKey:(id)arg1 inRole:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyInCurrentRole:(id)arg1;
- (bool)objectIsForcedForKey:(id)arg1 inDomain:(id)arg2;
- (bool)objectIsForcedForKey:(id)arg1;
- (id)p_currentRole;
- (id)persistentDomainForName:(id)arg1;
- (id)persistentDomainNames;
- (void)registerDefaults:(id)arg1;
- (oneway void)release;
- (void)removeObjectForKey:(id)arg1 inDomain:(id)arg2;
- (void)removeObjectForKey:(id)arg1 inRole:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForKeyInCurrentRole:(id)arg1;
- (void)removePersistentDomainForName:(id)arg1;
- (void)removeSuiteNamed:(id)arg1;
- (void)removeVolatileDomainForName:(id)arg1;
- (id)searchList;
- (void)setBool:(bool)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setBool:(bool)arg1 forKeyInCurrentRole:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKeyInCurrentRole:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKeyInCurrentRole:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKeyInCurrentRole:(id)arg2;
- (void)setLong:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 inDomain:(id)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 inRole:(id)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyInCurrentRole:(id)arg2;
- (void)setPersistentDomain:(id)arg1 forName:(id)arg2;
- (void)setSearchList:(id)arg1;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setVolatileDomain:(id)arg1 forName:(id)arg2;
- (id)stringArrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1 inRole:(id)arg2;
- (id)stringForKey:(id)arg1;
- (id)stringForKeyInCurrentRole:(id)arg1;
- (bool)synchronize;
- (id)valueForKey:(id)arg1;
- (id)volatileDomainForName:(id)arg1;
- (id)volatileDomainNames;

@end
