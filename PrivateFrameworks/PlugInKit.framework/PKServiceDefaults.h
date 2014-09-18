/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@class PKServicePersonality;

@interface PKServiceDefaults : NSUserDefaults {
    PKServicePersonality *_personality;
}

@property PKServicePersonality * personality;

- (void).cxx_destruct;
- (id)initWithPersonality:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)personality;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setPersonality:(id)arg1;
- (bool)synchronize;

@end
