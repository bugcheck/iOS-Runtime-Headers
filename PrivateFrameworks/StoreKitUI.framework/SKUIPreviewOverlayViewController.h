/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class IKAppDocument, NSString, SKUIHorizontalLockupView, SKUILayoutCache, SKUIViewElementLayoutContext, SUPlayerStatus, UITapGestureRecognizer;

@interface SKUIPreviewOverlayViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, UIGestureRecognizerDelegate> {
    long long _backgroundStyle;
    IKAppDocument *_document;
    SKUILayoutCache *_layoutCache;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIHorizontalLockupView *_lockupView;
    SUPlayerStatus *_previewStatus;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property long long backgroundStyle;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_layoutCache;
- (double)_overlayWidth;
- (void)_tapAction:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (long long)backgroundStyle;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithDocument:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)loadView;
- (void)prepareOverlayView;
- (void)reloadOverlayView;
- (void)setBackgroundStyle:(long long)arg1;
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(bool)arg2;

@end
