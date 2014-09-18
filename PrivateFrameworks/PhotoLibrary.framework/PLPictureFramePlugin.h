/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString, PLCachedImage, PLCroppedImageView, PLImageCache, PLImageLoadingQueue, PLImageSource, PLManagedAsset;

@interface PLPictureFramePlugin : PLSlideshowPlugin <PLImageLoadingQueueDelegate> {
    unsigned int _didLoadFirstImage : 1;
    unsigned int _slideshowTimerDidFire : 1;
    unsigned int _slideshowTimerIsScheduled : 1;
    unsigned int _paused : 1;
    PLCroppedImageView *_currentImageView;
    unsigned long long _currentIndex;
    PLImageCache *_imageCache;
    struct __CFArray { } *_imageIndexes;
    PLImageLoadingQueue *_imageLoadingQueue;
    PLImageSource *_imageSource;
    PLCachedImage *_nextImage;
    PLCroppedImageView *_nextImageView;
    PLManagedAsset *_requestedImage;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (long long)_albumImageIndexForSlideIndex:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentBounds;
- (void)_crossFadeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_didLoadImage:(id)arg1;
- (void)_displayFirstImage;
- (id)_nextImage;
- (void)_requestNextImageSynchronously:(bool)arg1;
- (void)_scheduleSlideshowTimer;
- (void)_slideshowTimerFired;
- (void)_transitionToNextImage;
- (void)dealloc;
- (void)imageLoadingQueue:(id)arg1 didLoadImage:(id)arg2 forAsset:(id)arg3 fromSource:(id)arg4;
- (id)init;
- (id)newSlideshowView;
- (void)pauseSlideshow;
- (void)resumeSlideshow;
- (void)setAlbumAssets:(id)arg1;
- (void)slideshowViewDidAppear;
- (void)slideshowViewDidDisappear;
- (void)slideshowViewWillAppear;
- (void)stopSlideshow;

@end
