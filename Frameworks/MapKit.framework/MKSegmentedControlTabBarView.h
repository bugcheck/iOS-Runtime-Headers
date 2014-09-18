/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MKViewWithHairline, NSString, UISegmentedControl, UIVisualEffectView;

@interface MKSegmentedControlTabBarView : UIView <MKStackingViewControllerSelectorView> {
    UIVisualEffectView *_blurView;
    id _didChangeSelectedSegmentIndex;
    UISegmentedControl *_segmentedControl;
    MKViewWithHairline *_separator;
    bool_isBlurred;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy) id didChangeSelectedSegmentIndex;
@property(readonly) unsigned long long hash;
@property bool isBlurred;
@property(readonly) UISegmentedControl * segmentedControl;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)_segmentSelectionDidChange;
- (void)dealloc;
- (id)didChangeSelectedSegmentIndex;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBlurred;
- (void)layoutSubviews;
- (id)segmentedControl;
- (void)setContentFromViewController:(id)arg1;
- (void)setDidChangeSelectedSegmentIndex:(id)arg1;
- (void)setIsBlurred:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateSelectorView:(id)arg1;

@end
