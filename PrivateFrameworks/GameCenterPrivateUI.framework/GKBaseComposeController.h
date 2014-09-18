/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKContiguousContainerView, GKTextView, NSArray, NSLayoutConstraint, NSString, UIScrollView, UIView;

@interface GKBaseComposeController : GKLoadableContentViewController <UITextViewDelegate> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    UIScrollView *_backgroundView;
    NSArray *_composeHeaderFields;
    GKContiguousContainerView *_headerFieldContainer;
    NSLayoutConstraint *_headerFieldContainerLeadingConstraint;
    NSLayoutConstraint *_headerFieldContainerTrailingConstraint;
    UIView *_intendedFirstResponder;
    } _lastKnownKeyboardFrame;
    GKTextView *_messageField;
    NSLayoutConstraint *_messageFieldLeadingConstraint;
    NSLayoutConstraint *_messageFieldTrailingConstraint;
    double _scrollContentInsetAdjustY;
    UIView *_touchForwardView;
}

@property(retain) UIScrollView * backgroundView;
@property(retain) NSArray * composeHeaderFields;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) GKContiguousContainerView * headerFieldContainer;
@property(retain) NSLayoutConstraint * headerFieldContainerLeadingConstraint;
@property(retain) NSLayoutConstraint * headerFieldContainerTrailingConstraint;
@property UIView * intendedFirstResponder;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } lastKnownKeyboardFrame;
@property(retain) GKTextView * messageField;
@property(retain) NSLayoutConstraint * messageFieldLeadingConstraint;
@property(retain) NSLayoutConstraint * messageFieldTrailingConstraint;
@property double scrollContentInsetAdjustY;
@property(readonly) Class superclass;
@property(retain) UIView * touchForwardView;

- (void)_adjustContentInsetForShowingKeyboard:(bool)arg1;
- (bool)_gkWantsCustomRightBarButtonItemInViewService;
- (void)_scrollSelectedTextToVisible;
- (id)backgroundView;
- (id)composeHeaderFields;
- (void)dealloc;
- (void)didEnterLoadedState;
- (void)didEnterLoadingState;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)didTouchBackground;
- (id)headerFieldContainer;
- (id)headerFieldContainerLeadingConstraint;
- (id)headerFieldContainerTrailingConstraint;
- (id)init;
- (id)intendedFirstResponder;
- (void)keyboardWillHideShow:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })lastKnownKeyboardFrame;
- (void)loadView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margins;
- (id)messageField;
- (id)messageFieldLeadingConstraint;
- (void)messageFieldTextDidChange;
- (id)messageFieldTrailingConstraint;
- (double)scrollContentInsetAdjustY;
- (void)setBackgroundView:(id)arg1;
- (void)setComposeHeaderFields:(id)arg1;
- (void)setHeaderFieldContainer:(id)arg1;
- (void)setHeaderFieldContainerLeadingConstraint:(id)arg1;
- (void)setHeaderFieldContainerTrailingConstraint:(id)arg1;
- (void)setIntendedFirstResponder:(id)arg1;
- (void)setLastKnownKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMessageField:(id)arg1;
- (void)setMessageFieldLeadingConstraint:(id)arg1;
- (void)setMessageFieldText:(id)arg1;
- (void)setMessageFieldTrailingConstraint:(id)arg1;
- (void)setScrollContentInsetAdjustY:(double)arg1;
- (void)setTouchForwardView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (id)touchForwardView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (id)viewMetricsForContainerView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
