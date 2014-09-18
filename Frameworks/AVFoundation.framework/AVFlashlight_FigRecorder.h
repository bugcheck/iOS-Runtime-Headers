/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVFlashlightInternal_FigRecorder;

@interface AVFlashlight_FigRecorder : NSObject {
    AVFlashlightInternal_FigRecorder *_internal;
}

@property(getter=isAvailable,readonly) bool available;
@property(readonly) float flashlightLevel;
@property(getter=isOverheated,readonly) bool overheated;

+ (bool)hasFlashlight;
+ (void)initialize;

- (void)_refreshIsAvailable;
- (bool)bringupFigRecorderWithError:(id*)arg1;
- (void)dealloc;
- (bool)ensureFigRecorderWithError:(id*)arg1;
- (float)flashlightLevel;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (id)init;
- (bool)isAvailable;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isOverheated;
- (bool)setFlashlightLevel:(float)arg1 withError:(id*)arg2;
- (void)teardownFigRecorder;
- (void)turnPowerOff;
- (bool)turnPowerOnWithError:(id*)arg1;

@end
