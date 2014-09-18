/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVController, NSDictionary, NSString;

@interface MPVideoView : UIView {
    NSDictionary *_AVURLAssetOptions;
    NSString *_moviePath;
    NSString *_movieSubtitle;
    NSString *_movieTitle;
    MPAVController *_player;
    unsigned long long _scaleMode;
    double _startTime;
    double _stopTime;
    NSString *_videoID;
}

@property(retain) NSDictionary * AVURLAssetOptions;
@property(readonly) bool canChangeScaleMode;
@property(readonly) unsigned long long effectiveScaleMode;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } movieContentFrame;
@property(readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } movieFrame;
@property(retain) NSString * movieSubtitle;
@property(retain) NSString * movieTitle;
@property MPAVController * player;
@property unsigned long long scaleMode;
@property double startTime;
@property double stopTime;
@property(copy) NSString * videoID;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)AVURLAssetOptions;
- (void)_bufferingStateChangedNotification:(id)arg1;
- (void)_playbackStateChangedNotification:(id)arg1;
- (bool)canChangeScaleMode;
- (void)dealloc;
- (void)didMoveToWindow;
- (unsigned long long)effectiveScaleMode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })movieContentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })movieFrame;
- (id)moviePath;
- (id)movieSubtitle;
- (id)movieTitle;
- (void)play;
- (void)playFromBeginning;
- (void)playWhenLikelyToKeepUp;
- (id)player;
- (void)prepareAVControllerQueue;
- (unsigned long long)scaleMode;
- (void)setAVURLAssetOptions:(id)arg1;
- (void)setMovieSubtitle:(id)arg1;
- (void)setMovieTitle:(id)arg1;
- (void)setMovieWithPath:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setScaleMode:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setScaleMode:(unsigned long long)arg1 duration:(float)arg2;
- (void)setScaleMode:(unsigned long long)arg1;
- (void)setStartTime:(double)arg1;
- (void)setStopTime:(double)arg1;
- (void)setVideoID:(id)arg1;
- (double)startTime;
- (double)stopTime;
- (void)toggleScaleMode:(bool)arg1;
- (id)videoID;

@end
