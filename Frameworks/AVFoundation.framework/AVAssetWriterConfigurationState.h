/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMediaFileType, NSArray, NSURL;

@interface AVAssetWriterConfigurationState : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    NSURL *_URL;
    NSURL *_directoryForTemporaryFiles;
    NSArray *_inputGroups;
    NSArray *_inputs;
    AVMediaFileType *_mediaFileType;
    NSArray *_metadataItems;
    } _movieFragmentInterval;
    int _movieTimeScale;
    float _preferredRate;
    } _preferredTransform;
    float _preferredVolume;
    bool_shouldOptimizeForNetworkUse;
}

@property(copy) NSURL * URL;
@property(copy) NSURL * directoryForTemporaryFiles;
@property(copy) NSArray * inputGroups;
@property(copy) NSArray * inputs;
@property(copy) AVMediaFileType * mediaFileType;
@property(copy) NSArray * metadataItems;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;
@property int movieTimeScale;
@property float preferredRate;
@property struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property float preferredVolume;
@property bool shouldOptimizeForNetworkUse;

- (id)URL;
- (void)dealloc;
- (id)directoryForTemporaryFiles;
- (id)inputGroups;
- (id)inputs;
- (id)mediaFileType;
- (id)metadataItems;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (int)movieTimeScale;
- (float)preferredRate;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (void)setInputGroups:(id)arg1;
- (void)setInputs:(id)arg1;
- (void)setMediaFileType:(id)arg1;
- (void)setMetadataItems:(id)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieTimeScale:(int)arg1;
- (void)setPreferredRate:(float)arg1;
- (void)setPreferredTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setShouldOptimizeForNetworkUse:(bool)arg1;
- (void)setURL:(id)arg1;
- (bool)shouldOptimizeForNetworkUse;

@end
