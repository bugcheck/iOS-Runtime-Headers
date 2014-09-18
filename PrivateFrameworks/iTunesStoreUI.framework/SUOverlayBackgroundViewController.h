/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUOverlayBackgroundDelegate>, NSArray, NSMutableArray, NSString, SUOverlayViewController, SUScalingFlipView, SUTouchCaptureView, UISwipeGestureRecognizer;

@interface SUOverlayBackgroundViewController : SUViewController <SUScalingFlipViewDelegate, UIGestureRecognizerDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    NSMutableArray *_actionQueue;
    SUScalingFlipView *_activeFlipView;
    SUTouchCaptureView *_captureView;
    <SUOverlayBackgroundDelegate> *_delegate;
    } _keyboardFrame;
    long long _selectedViewControllerIndex;
    UISwipeGestureRecognizer *_swipeGestureRecognizer;
    NSMutableArray *_viewControllers;
    bool_askingToDismissEverything;
    bool_askingToDismissSelection;
}

@property(copy,readonly) NSString * debugDescription;
@property <SUOverlayBackgroundDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) SUOverlayViewController * selectedViewController;
@property(readonly) Class superclass;
@property(readonly) NSArray * viewControllers;

- (void)_addViewController:(id)arg1;
- (void)_backgroundAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_captureViewAction:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_centeredFrameForViewController:(id)arg1;
- (id)_copyTransitionForTransition:(id)arg1 action:(id)arg2;
- (void)_enqueueAction:(id)arg1;
- (void)_finishDismissAction:(id)arg1;
- (void)_finishDismissEverythingAction:(id)arg1;
- (void)_finishDismissOfViewController:(id)arg1 animated:(bool)arg2;
- (void)_finishPresentAction:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForSlideFromBottomForViewController:(id)arg1;
- (void)_layoutForKeyboardChangeWithInfo:(id)arg1;
- (void)_overlayActionDidFinish;
- (void)_overlayAnimationDidFinish;
- (void)_performDismissAction:(id)arg1;
- (void)_performDismissEverythingAction:(id)arg1;
- (void)_performFlipForAction:(id)arg1;
- (void)_performNextAction;
- (void)_performPresentAction:(id)arg1;
- (void)_reloadGestureRecognizers;
- (void)_removeViewController:(id)arg1;
- (id)_selectedViewController;
- (void)_sendDidDismiss;
- (void)_shouldDismissFinishedWithValue:(id)arg1;
- (void)_swipe:(id)arg1;
- (void)_tearDownFlipView;
- (double)_viewControllerHorizontalPadding;
- (double)_viewControllerKeyboardOffset;
- (id)copyArchivableContext;
- (id)copyArchivableJetsamContext;
- (id)copyChildViewControllersForReason:(long long)arg1;
- (void)dealloc;
- (id)delegate;
- (void)dismissAnimated:(bool)arg1;
- (void)dismissOverlay:(id)arg1 animated:(bool)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (void)keyboardWillHideWithInfo:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)layoutViewControllers;
- (void)loadView;
- (void)overlayPageViewTapped:(id)arg1;
- (void)populateNavigationHistoryWithItems:(id)arg1;
- (void)presentOverlay:(id)arg1 withTransition:(id)arg2;
- (void)restoreArchivableContext:(id)arg1;
- (void)scalingFlipViewDidFinish:(id)arg1;
- (id)selectedViewController;
- (void)setDelegate:(id)arg1;
- (bool)shouldExcludeFromNavigationHistory;
- (void)storePage:(id)arg1 finishedWithSuccess:(bool)arg2;
- (id)viewControllerForScriptWindowContext:(id)arg1;
- (id)viewControllers;
- (void)viewDidAppear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
