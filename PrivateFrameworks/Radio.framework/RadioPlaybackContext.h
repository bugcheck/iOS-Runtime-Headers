/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSArray;

@interface RadioPlaybackContext : NSObject <NSCopying, NSMutableCopying> {
    long long _numberOfSkipsUsed;
    NSArray *_trackPlaybackDescriptorQueue;
}

@property(readonly) long long numberOfSkipsUsed;
@property(copy,readonly) NSArray * trackPlaybackDescriptorQueue;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)numberOfSkipsUsed;
- (id)playbackContextDictionary;
- (id)trackPlaybackDescriptorQueue;

@end
