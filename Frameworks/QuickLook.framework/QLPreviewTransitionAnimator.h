/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class <UIViewControllerContextTransitioning>, NSString, QLPreviewController;

@interface QLPreviewTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {
    <UIViewControllerContextTransitioning> *_transitionContext;
    boolshowing;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) QLPreviewController * previewController;
@property bool showing;
@property(readonly) Class superclass;
@property <UIViewControllerContextTransitioning> * transitionContext;

- (long long)_transitionStateForAnimationEnding:(bool)arg1;
- (void)animateTransition:(id)arg1;
- (void)didTransitionWithAnimationEnding:(bool)arg1;
- (id)previewController;
- (void)setShowing:(bool)arg1;
- (void)setTransitionContext:(id)arg1;
- (bool)showing;
- (void)startInteractiveTransition:(id)arg1;
- (id)transitionContext;
- (double)transitionDuration:(id)arg1;
- (void)updateStatusBarWithDuration:(double)arg1;
- (void)willTransitionWithAnimationEnding:(bool)arg1;

@end
