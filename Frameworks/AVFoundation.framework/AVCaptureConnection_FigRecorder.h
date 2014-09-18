/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureConnectionInternal_FigRecorder, AVCaptureOutput_FigRecorder, AVCaptureVideoPreviewLayer_FigRecorder, NSArray;

@interface AVCaptureConnection_FigRecorder : NSObject {
    AVCaptureConnectionInternal_FigRecorder *_internal;
}

@property(getter=isActive,readonly) bool active;
@property(readonly) NSArray * audioChannels;
@property bool automaticallyAdjustsVideoMirroring;
@property(getter=isEnabled) bool enabled;
@property bool enablesVideoStabilizationWhenAvailable;
@property(readonly) NSArray * inputPorts;
@property(readonly) AVCaptureOutput_FigRecorder * output;
@property(getter=isVideoMaxFrameDurationSupported,readonly) bool supportsVideoMaxFrameDuration;
@property(getter=isVideoMinFrameDurationSupported,readonly) bool supportsVideoMinFrameDuration;
@property(getter=isVideoMirroringSupported,readonly) bool supportsVideoMirroring;
@property(getter=isVideoOrientationSupported,readonly) bool supportsVideoOrientation;
@property(getter=isVideoStabilizationSupported,readonly) bool supportsVideoStabilization;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } videoMaxFrameDuration;
@property(readonly) double videoMaxScaleAndCropFactor;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } videoMinFrameDuration;
@property(getter=isVideoMirrored) bool videoMirrored;
@property long long videoOrientation;
@property(readonly) AVCaptureVideoPreviewLayer_FigRecorder * videoPreviewLayer;
@property double videoScaleAndCropFactor;
@property(getter=isVideoStabilizationEnabled,readonly) bool videoStabilizationEnabled;

+ (id)connectionWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
+ (id)connectionWithInputPorts:(id)arg1 output:(id)arg2;
+ (void)initialize;

- (void)_setVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_setVideoMirrored:(bool)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_videoMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_videoMinFrameDuration;
- (long long)activeVideoStabilizationMode;
- (id)audioChannels;
- (bool)automaticallyAdjustsVideoMirroring;
- (void)dealloc;
- (id)description;
- (bool)enablesVideoStabilizationWhenAvailable;
- (float)getAvgAudioLevelForChannel:(id)arg1;
- (float)getPeakAudioLevelForChannel:(id)arg1;
- (void)initCommonStorage;
- (id)initWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
- (id)initWithInputPorts:(id)arg1 output:(id)arg2;
- (void)inputPortFormatDescriptionChanged:(id)arg1;
- (id)inputPorts;
- (void)invalidate;
- (bool)isActive;
- (bool)isEnabled;
- (bool)isKindOfClass:(Class)arg1;
- (bool)isLive;
- (bool)isVideoMaxFrameDurationSet;
- (bool)isVideoMaxFrameDurationSupported;
- (bool)isVideoMinFrameDurationSet;
- (bool)isVideoMinFrameDurationSupported;
- (bool)isVideoMirrored;
- (bool)isVideoMirroringSupported;
- (bool)isVideoOrientationSupported;
- (bool)isVideoRetainedBufferCountHintSupported;
- (bool)isVideoStabilizationEnabled;
- (bool)isVideoStabilizationSupported;
- (id)mediaType;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)output;
- (long long)preferredVideoStabilizationMode;
- (id)session;
- (void)setActive:(bool)arg1;
- (void)setAutomaticallyAdjustsVideoMirroring:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnablesVideoStabilizationWhenAvailable:(bool)arg1;
- (void)setPreferredVideoStabilizationMode:(long long)arg1;
- (void)setVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoMirrored:(bool)arg1;
- (void)setVideoOrientation:(long long)arg1;
- (void)setVideoRetainedBufferCountHint:(int)arg1;
- (void)setVideoScaleAndCropFactor:(double)arg1;
- (id)sourceDevice;
- (bool)sourcesFromFrontFacingCamera;
- (void)updateAudioChannelsArray;
- (void)updateAudioLevelsArray;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoMaxFrameDuration;
- (double)videoMaxScaleAndCropFactor;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoMinFrameDuration;
- (long long)videoOrientation;
- (id)videoPreviewLayer;
- (int)videoRetainedBufferCountHint;
- (double)videoScaleAndCropFactor;

@end
