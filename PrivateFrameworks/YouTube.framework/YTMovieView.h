/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@class NSArray, NSURL, UIImageView, UILabel, UIMoviePlayerController, YTSearchRequest, YTVideo;

@interface YTMovieView : UIView {
    UIImageView *_bugView;
    id _delegate;
    UIImageView *_gradientView;
    UILabel *_logLabel;
    UIMoviePlayerController *_moviePlayer;
    double _seekTime;
    YTVideo *_video;
    YTSearchRequest *_videoInfoRequest;
    NSArray *_videoList;
    NSURL *_youTubeURL;
    bool_canAutoPlay;
    bool_controlsShown;
    bool_isShown;
    bool_showControlsAfterFullscreenExit;
    bool_shownFromExternalURL;
    bool_switchingVideos;
    bool_useSmallLogo;
}

- (bool)_canBookmark;
- (bool)_canShare;
- (void)_cancelVideoInfoRequest;
- (void)_destroyMoviePlayer;
- (void)_hideBug;
- (void)_hideOverlay;
- (void)_loadVideoFromURL:(bool)arg1;
- (void)_loadVideoInfoWithID:(id)arg1;
- (bool)_loggingEnabled;
- (void)_presentAlertForError:(id)arg1 reasonCode:(id)arg2;
- (void)_setupBackground;
- (void)_switchToVideo:(id)arg1;
- (void)_updateCaptionsForMovie;
- (bool)canContinuePlayingWhenLocked;
- (void)dealloc;
- (void)didHide;
- (void)didShow;
- (void)forceControlsVisible:(bool)arg1;
- (id)fullscreenView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPlaying;
- (bool)moviePlayer:(id)arg1 validateAction:(SEL)arg2;
- (id)moviePlayer;
- (bool)moviePlayerAddBookmarkButtonPressed:(id)arg1;
- (bool)moviePlayerBackwardButtonPressed:(id)arg1;
- (void)moviePlayerBufferingStateDidChange:(id)arg1;
- (void)moviePlayerDidEnterFullscreen:(id)arg1;
- (void)moviePlayerDidExitFullscreen:(id)arg1;
- (void)moviePlayerDidHideOverlay:(id)arg1;
- (void)moviePlayerDidShowOverlay:(id)arg1;
- (bool)moviePlayerEmailButtonPressed:(id)arg1;
- (bool)moviePlayerExitRequest:(id)arg1 exitReason:(int)arg2;
- (bool)moviePlayerForwardButtonPressed:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })moviePlayerFrameAfterFullscreenExit:(id)arg1;
- (bool)moviePlayerHeadsetNextTrackPressed:(id)arg1;
- (bool)moviePlayerHeadsetPreviousTrackPressed:(id)arg1;
- (void)moviePlayerPlaybackDidEnd:(id)arg1;
- (void)moviePlayerPlaybackStateDidChange:(id)arg1 fromPlaybackState:(unsigned long long)arg2;
- (void)moviePlayerWillEnterFullscreen:(id)arg1;
- (void)moviePlayerWillExitFullscreen:(id)arg1;
- (void)moviePlayerWillHideOverlay:(id)arg1;
- (void)moviePlayerWillShowOverlay:(id)arg1;
- (long long)orientation;
- (void)pause;
- (void)play;
- (void)searchRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(unsigned int)arg3 videosRemaining:(unsigned int)arg4;
- (void)setCanAutoPlay:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFullscreen:(bool)arg1;
- (void)setSeekTime:(double)arg1;
- (void)shareSheetDidHide;
- (void)shareSheetWillShow;
- (void)useSmallLogo:(bool)arg1;
- (id)video;
- (void)willHide;
- (void)willShowAlert;
- (void)willShowForVideo:(id)arg1 inList:(id)arg2 orVideoID:(id)arg3;

@end
