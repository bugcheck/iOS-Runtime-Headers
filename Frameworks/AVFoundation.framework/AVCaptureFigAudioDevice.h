/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface AVCaptureFigAudioDevice : AVCaptureDevice {
    NSDictionary *_attributes;
    struct OpaqueFigCaptureSource { } *_fcs;
    NSObject<OS_dispatch_queue> *_fcsQueue;
    NSString *_localizedName;
    AVWeakReference *_weakReference;
    bool_isConnected;
    bool_levelMeteringEnabled;
}

+ (id)_devices;
+ (id)alloc;
+ (void)initialize;

- (id)_copyFigCaptureSourceProperty:(struct __CFString { }*)arg1;
- (void)_handleNotification:(struct __CFString { }*)arg1 payload:(id)arg2;
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource { }*)arg1;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource { }*)arg1;
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg1;
- (void)audioInputDevicesDidChangeHandler:(id)arg1;
- (void)dealloc;
- (struct OpaqueCMClock { }*)deviceClock;
- (struct OpaqueFigCaptureSource { }*)figCaptureSource;
- (bool)hasMediaType:(id)arg1;
- (id)init;
- (bool)isConnected;
- (bool)isInUseByAnotherApplication;
- (id)localizedName;
- (id)modelID;
- (bool)startUsingDevice:(id*)arg1;
- (void)stopUsingDevice;
- (bool)supportsAVCaptureSessionPreset:(id)arg1;
- (id)uniqueID;

@end
