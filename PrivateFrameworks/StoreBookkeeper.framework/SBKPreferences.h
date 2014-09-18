/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKPreferences : NSObject {
}

+ (id)storeBookkeeperPreferences;

- (void)_preferencesDidChange;
- (bool)boolForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)objectForKey:(id)arg1 withDefaultValue:(id)arg2;
- (void)registerDefaultsIfKeyNotSet:(id)arg1 registrationBlock:(id)arg2;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
