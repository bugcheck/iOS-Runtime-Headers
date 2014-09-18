/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSMutableArray;

@interface AVAudioSettingsValueConstrainer : NSObject {
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    NSMutableArray *_applicableOutputDataRatesForSampleRate;
    NSMutableArray *_applicableOutputSampleRatesForDataRate;
    struct OpaqueAudioConverter { } *_audioConverter;
    NSMutableArray *_availableOutputDataRates;
    NSArray *_availableOutputSampleRates;
    } _inputASBD;
    } _outputASBD;
    unsigned int _outputDataRate;
    bool_needApplicableParameters;
    bool_needAvailableSampleRates;
    bool_needNewConverter;
}

@property unsigned int outputBitsPerChannel;
@property unsigned int outputChannelCount;
@property unsigned int outputDataRate;
@property unsigned int outputFormat;
@property unsigned int outputFormatFlags;
@property float outputSampleRate;

- (void)_bringUpToDate;
- (void)_buildApplicableDataRatesForSampleRates;
- (void)_buildAudioConverter;
- (void)_buildAvailableSampleRates;
- (id)_fetchApplicableOutputDataRates;
- (float)_getAvailableOutputSampleRateFor:(float)arg1 rounding:(long long)arg2;
- (float)applicableOutputSampleRateForDesiredSampleRate:(float)arg1 rounding:(long long)arg2;
- (unsigned int)availableOutputChannelCountForDesiredChannelCount:(unsigned int)arg1 rounding:(long long)arg2;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (unsigned int)outputBitsPerChannel;
- (unsigned int)outputChannelCount;
- (unsigned int)outputDataRate;
- (unsigned int)outputFormat;
- (unsigned int)outputFormatFlags;
- (float)outputSampleRate;
- (void)setInputPropertiesFromASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setOutputBitsPerChannel:(unsigned int)arg1;
- (void)setOutputChannelCount:(unsigned int)arg1;
- (void)setOutputDataRate:(unsigned int)arg1;
- (void)setOutputFormat:(unsigned int)arg1;
- (void)setOutputFormatFlags:(unsigned int)arg1;
- (void)setOutputSampleRate:(float)arg1;

@end
