/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class CAMediaTimingFunction;

@interface BSMutableAnimationSettings : BSAnimationSettings {
}

@property double delay;
@property double duration;
@property double frameInterval;
@property(retain) CAMediaTimingFunction * timingFunction;

+ (id)settingsWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3;
+ (id)settingsWithDuration:(double)arg1 delay:(double)arg2;
+ (id)settingsWithDuration:(double)arg1 timingFunction:(id)arg2;
+ (id)settingsWithDuration:(double)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDelay:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setFrameInterval:(double)arg1;
- (void)setTimingFunction:(id)arg1;

@end
