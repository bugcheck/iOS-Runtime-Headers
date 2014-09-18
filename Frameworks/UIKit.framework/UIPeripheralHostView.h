/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBInputBackdropView, UIKBRenderConfig, UIKeyboardCornerView;

@interface UIPeripheralHostView : UIView {
    UIKeyboardCornerView *_cornerViewLeft;
    UIKeyboardCornerView *_cornerViewRight;
    int _explicitLayoutCount;
    UIKBInputBackdropView *_inputAccessoryBackdropView;
    UIKBInputBackdropView *_inputBackdropView;
    UIKBRenderConfig *_renderConfig;
}

@property(readonly) UIKeyboardCornerView * cornerViewLeft;
@property(readonly) UIKeyboardCornerView * cornerViewRight;
@property(readonly) UIKBInputBackdropView * inputAccessoryBackdropView;
@property(readonly) UIKBInputBackdropView * inputBackdropView;

- (int)_clipCornersOfView:(id)arg1;
- (id)_inheritedRenderConfig;
- (void)_resizeForKeyplaneSize:(struct CGSize { double x1; double x2; })arg1 splitWidthsChanged:(bool)arg2;
- (void)_setBaseRenderConfig:(id)arg1;
- (void)_setRenderConfig:(id)arg1 updateKeyboard:(bool)arg2;
- (void)_setRenderConfig:(id)arg1;
- (void)beginExplicitLayout;
- (id)cornerViewLeft;
- (id)cornerViewRight;
- (void)dealloc;
- (void)didAddSubview:(id)arg1;
- (void)endExplicitLayout;
- (bool)explicitLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputAccessoryBackdropView;
- (id)inputBackdropView;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)removeFromSuperview;
- (void)syncInputAccessoryViewBackdropToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)syncInputViewBackdropToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)textEffectsVisibilityLevel;
- (void)updateBackdropViewForInputAccessoryView:(bool)arg1;

@end
