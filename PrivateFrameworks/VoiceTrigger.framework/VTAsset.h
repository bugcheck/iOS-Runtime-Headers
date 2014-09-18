/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@class NSArray, NSString;

@interface VTAsset : NSObject {
    NSArray *_languages;
    NSString *_version;
    bool_isInstalled;
}

@property bool isInstalled;
@property(retain) NSArray * languages;
@property(retain) NSString * version;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithLanguages:(id)arg1 isInstalled:(bool)arg2;
- (bool)isInstalled;
- (id)languages;
- (void)setIsInstalled:(bool)arg1;
- (void)setLanguages:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
