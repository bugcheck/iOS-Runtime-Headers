/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVButton : UIButton {
}

- (bool)_drawingAsSelected;
- (void)_updateForStateChangeAnimated:(bool)arg1;
- (void)_updateSelected:(bool)arg1 highlighted:(bool)arg2;
- (void)didMoveToSuperview;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
