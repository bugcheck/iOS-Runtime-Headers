/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class BWFormat;

@interface BWNodeConfigurationLiveMessage : BWNodeMessage {
    long long _configurationID;
    BWFormat *_updatedFormat;
}

@property(readonly) long long configurationID;
@property(readonly) BWFormat * updatedFormat;

+ (id)newMessageWithConfigurationID:(long long)arg1 updatedFormat:(id)arg2;
+ (id)newMessageWithConfigurationID:(long long)arg1;

- (id)_initWithConfigurationID:(long long)arg1 updatedFormat:(id)arg2;
- (long long)configurationID;
- (void)dealloc;
- (id)updatedFormat;

@end
