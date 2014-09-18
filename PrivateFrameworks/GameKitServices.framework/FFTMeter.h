/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface FFTMeter : NSObject {
    struct DSPSplitComplex { 
        float *realp; 
        float *imagp; 
    float adjust0DB;
    } dspSplitComplex;
    float fftBuffer[3840];
    float fftNormFactor;
    struct vDSP_DFT_SetupStruct { } *fftSetup;
    float lerpIdxs[66];
    float magnitudeBuffer[1920];
    float octaveDbFilt[55];
    float octaveDbOld[54];
    float octaveDb[54];
    float sampleHistory[3840];
    float windowBuffer[3840];
    float windowHistory[3840];
}

- (id)computeWithSampleBuffer:(char *)arg1 numSamples:(unsigned long long)arg2 voiceActive:(bool)arg3;
- (void)dealloc;
- (id)init;

@end
