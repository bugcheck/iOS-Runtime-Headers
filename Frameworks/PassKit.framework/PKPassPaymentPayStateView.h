/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class <PKPassPaymentPayStateViewDelegate>, NSString, PKGlyphView, UILabel;

@interface PKPassPaymentPayStateView : UIView <PKGlyphViewDelegate> {
    <PKPassPaymentPayStateViewDelegate> *_delegate;
    PKGlyphView *_glyph;
    UILabel *_label;
    double _labelAlpha;
    long long _state;
}

@property(copy,readonly) NSString * debugDescription;
@property <PKPassPaymentPayStateViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) PKGlyphView * glyph;
@property(readonly) unsigned long long hash;
@property(readonly) UILabel * label;
@property double labelAlpha;
@property long long state;
@property(readonly) Class superclass;

- (void)_applyStateWithTextOverride:(id)arg1 completionHandler:(id)arg2;
- (bool)_canEmphasizeState:(long long)arg1;
- (id)_labelForState:(long long)arg1 textOverride:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)emphasizeStateIfPossible:(long long)arg1 withTextOverride:(id)arg2;
- (id)glyph;
- (void)glyphView:(id)arg1 revealingCheckmark:(bool)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (double)labelAlpha;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setLabelAlpha:(double)arg1;
- (void)setState:(long long)arg1 textOverride:(id)arg2 completionHandler:(id)arg3;
- (void)setState:(long long)arg1;
- (long long)state;

@end