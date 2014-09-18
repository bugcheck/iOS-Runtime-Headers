/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@class NSArray, NSCache, NSMutableSet, NSString;

@interface SGPatterns : NSObject {
    NSString *_classKey;
    NSCache *_compiledRegexes2;
    NSArray *_langResolutionOrder;
    NSString *_language;
    int _localLanguageVersion;
    NSMutableSet *_regexpKeysSeen;
}

+ (void)_reinstateDeath;
+ (void)changeLanguageOrPatternData;
+ (void)clearAllRegexCaches;
+ (id)countryCodeFromLanguageCode:(id)arg1;
+ (id)fallbackLanguageCodeForCountryCode:(id)arg1;
+ (void)forceLanguageTo:(id)arg1;
+ (void)initialize;
+ (id)languagePartOfLanguageCode:(id)arg1;
+ (id)patternsForClass:(Class)arg1;
+ (void)pauseCacheEvictionTemporarily;
+ (void)useAllLanguagesAtOnce:(bool)arg1;

- (void).cxx_destruct;
- (void)_becomeImmuneToDeath;
- (id)_calculateLangResolutionOrder;
- (void)_clearRegexCache;
- (id)init;
- (id)rawValueForKey:(id)arg1;
- (id)rawValuesForKey:(id)arg1;
- (id)regex2ForKey:(id)arg1;
- (void)reset;

@end
